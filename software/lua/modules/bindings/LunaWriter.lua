
local oo = require "loop.cached"

local ReflectionWriter = require "bindings.ReflectionWriter"
local BaseWriter = require "bindings.BaseWriter"
local IProtection = require "reflection.IProtection"
local Enum = require "reflection.Enum"
local table = table

local dbg = require "debugger"

local log = require "logger"
local im = require "bindings.IgnoreManager"

local Set = require "std.Set"
local utils = require "utils"

-- Default type checker:
local typeChecker = require("bindings.TypeCheckerBase")()

local writeOverloadBind = require("bindings.OverloadBinderBase")()
local writeBind = require("bindings.BinderBase")()

local tc = require "bindings.TypeConverter"

local injector = require "bindings.CodeInjector"
local corr = require "bindings.TextCorrector"

local class_decl_template = [[template<>
class LunaTraits< ${1} > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static ${1}* _bind_ctor(lua_State *L);
    static void _bind_dtor(${1}* obj);
    typedef ${2} parent_t;
    typedef ${1} base_t;${3}
};
]]

local class_type_template = [[template<>
class LunaType< ${1} > {
public:
    typedef ${2} type;
    
};
]]

local converter_template = [[static int _cast_from_${3}(lua_State *L) {
		// all checked are already performed before reaching this point.
		${2}* ptr= dynamic_cast< ${2}* >(Luna< ${1} >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ${2} >::push(L,ptr,false);
		return 1;
	};
]]

local dynamic_caster_template = [[inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		${1}* self=(Luna< ${1} >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("${1}");
		
		return luna_dynamicCast(L,converters,"${1}",name);
	}
]]

-- Helper function for writeForeach traversals:
local getValueName = function(k,v)
	return v:getFullName()
end

local getValueShortName = function(k,v)
	return v:getName()
end

local getValueLuaName = function(k,v)
	return v:getLuaName()
end

local getKeyName = function(k,v)
	return k:getName()
end

-- This module defines the writer used to generate lunagen bindings.
local LunaWriter = oo.class({},ReflectionWriter)

LunaWriter.CLASS_NAME = "bindings.LunaWriter"

function LunaWriter:__init(datamap,withConverters)
    local object = ReflectionWriter:__init(datamap) -- pass the datamap to the ReflectionWriter class.
    object = oo.rawnew(self,object)
    object:setBindingFolder("luna")
    object.implementConverters = withConverters
    return object
end

function LunaWriter:writeExportFile()
	-- get a copy of that writer:
	local buf = self:clone();
	
	-- write the module name:
	--buf:writeLine("module=".. self:getModuleName())
	
	local writtenTypes = Set();
	
	local currentModule = nil
	
	-- write the classes declaration on the buf:
	for _,v in self.classes:sequence() do
		local classname = v:getTypeName()

		if not writtenTypes:contains(classname) then
			writtenTypes:push_back(classname)
		else
			classname = nil	
		end
		
		if classname and not im:ignore(classname,"class_declaration") and not v:isExternal() then
			self:debug0_v("Writing class export for ", v:getFullName(), " (typename=",classname,")")
			local mod = v:getModule() or self:getModuleName()
			if currentModule ~= mod then
				buf:writeLine("module=".. mod)
				currentModule = mod
			end
			
			local bname = v:getFirstAbsoluteBase():getFullName();
			
			buf:writeSubLine("${1} => ${2}",classname,bname)
		else
			self:notice("Ignoring class export for ", v:getFullName(), " (typename=",classname,")")
		end
	end
		
	buf:newLine()
	
	self:clearContent()
	self:appendBuffer(buf)
	self:writeFile("classes.luna")
end

function LunaWriter:writeExportFunctionFile()
	-- get a copy of that writer:
	local buf = self:clone();
	
	-- write the module name:
	buf:writeLine("module=".. self:getModuleName())
	
	local writtenTypes = Set();
	
	local namespaces = self.datamap:getAllNamespaces()
	
	for _,ns in namespaces:sequence() do
		local functions = ns:getValidPublicFunctions()

		for _,v in functions:sequence() do
			local classname = v:getFullName()
	
			if not writtenTypes:contains(classname) then
				writtenTypes:push_back(classname)
			else
				classname = nil	
			end
			
			if classname and not im:ignore(classname,"function") and not v:isExternal()  then
				self:debug0_v("Writing function export for ", v:getFullName())
				buf:writeSubLine("${1}",classname)
			else
				self:notice("Ignoring class export for ", v:getFullName(), " (typename=",classname,")")
			end
		end
	end
		
	buf:newLine()
	
	self:clearContent()
	self:appendBuffer(buf)
	self:writeFile("functions.luna")
end

function LunaWriter:writeMainHeader()

	-- get a copy of that writer:
	local buf = self:clone();
	
	-- write all the headers:
	local headers = Set();
	for _,v in self.classes:sequence() do
		local header = v:getHeaderFile()
		if header and v:isValidForWrapping() and not im:ignoreHeader(header) then
			headers:push_back(header)
		end		
	end
	
	for _,v in headers:sequence() do
		buf:writeLine("#include <"..v..">")
	end
	buf:newLine()
	
	injector:inject(buf,"after_headers") -- code injection stage.
	
	local writtenTypes = Set();
	
	-- write the classes declaration on the buf:
	local add = self.implementConverters and "\n\tstatic luna_ConverterType converters[];" or ""
	for _,v in self.classes:sequence() do
		local classname = v:getTypeName()
		if not writtenTypes:contains(classname) then
			writtenTypes:push_back(classname)
		else
			classname = nil	
		end
		
		if classname and not im:ignore(classname,"class_declaration") then
			self:debug0_v("Writing class declaration for ", v:getFullName(), " (typename=",classname,")")
			local abname = v:getFirstAbsoluteBase():getFullName();
			buf:writeSubLine(class_decl_template,classname,abname,add)
		else
			self:notice("Ignoring class declaration for ", v:getFullName(), " (typename=",classname,")")
		end
	end
		
	--buf:writeForeachClass(class_decl_template,getValueName,add)
	
	buf:newLine()
	
	-- write the LunaTypes for all the absolute base classes:
	local writtenTypes = Set();
	
	for k,v in self.classes:sequence() do
		if v:getBases():empty() then
			local hash = utils.getHash(v:getFullName())
			if not writtenTypes:contains(hash) then
				buf:writeSubLine(class_type_template,hash,v:getFullName())
				writtenTypes:push_back(hash)
			else
				self:warn("Luna type already written for hash=",hash," type=",v:getFullName())
			end
		end
	end
	
	self:writeHeaderContent(buf,"luna_types.h")
end

function LunaWriter:retrieveArguments(func)
	-- retrieve all the arguments:
	local offset = (func:isGlobal() or func:isConstructor() or func:isStatic() or func:isExtension()) and 0 or 1
	
	local defaultOffset = func:getDefaultOffset()
	
	local args = {}
	
	if(defaultOffset) then
		self:writeLine("int luatop = lua_gettop(L);")
		self:newLine()		
	end
	
	for k,v in func:getParameters():sequence() do
		local pt = v:getType()
		
		pt:parse() -- ensure the type fields are value.
		
		local bname = pt:getBaseName()
		local typename = pt:getName()
		
		local converter = tc:getFromLuaConverter(typename) or tc:getFromLuaConverter(bname)
		
		local argname = v:getName()
		if not argname or argname == "" then
			argname = "_arg"..k
		end
		
		if typename=="unsigned" and argname=="int" then
			typename ="unsigned int"
			bname = "unsigned int"
			argname = "_arg"..k
		end
		
		local isPointer = false
		local isConst = pt:isConst()
		
		local index = k+offset
		local defStrPre = defaultOffset and ((k-1)<defaultOffset and "" or "luatop>"..(index-1).." ? ") or ""
		local defStrAnd = defaultOffset and ((k-1)<defaultOffset and "" or "luatop>"..(index-1).." && ") or ""
		local constPre = isConst and "const " or "";

		local defStrPost = defaultOffset and ((k-1)<defaultOffset and "" or " : "..(pt:isClass() and pt:isPointer() and "("..constPre..bname.."*)" or "").. v:getDefaultValue():getName()) or ""
		local defStrPostNull = defaultOffset and ((k-1)<defaultOffset and "" or " : NULL") or ""
		
		if converter then
			isPointer = converter(self,index,pt,argname)
		elseif v:isLuaState() then
			isPointer = true;
			argname = "L";
		elseif pt:isLuaFunction() or pt:isLuaTable() or pt:isLuaAny() then
			-- check if we have a lua function or table reference.
			isPointer = true;
			argname = "NULL"
		elseif pt:isInteger() then
			-- check if we have a number:int _arg1=(int)lua_tonumber(L,2);
			self:writeSubLine("${3} ${1}=${4}(${3})lua_tointeger(L,${2})${5};",argname,index,bname,defStrPre,defStrPost)
		elseif pt:isNumber() then
			-- check if we have a number:int _arg1=(int)lua_tonumber(L,2);
			self:writeSubLine("${3} ${1}=${4}(${3})lua_tonumber(L,${2})${5};",argname,index,bname,defStrPre,defStrPost)
		elseif pt:isBoolean() then
			self:writeSubLine("${3} ${1}=${4}(${3})(lua_toboolean(L,${2})==1)${5};",argname,index,bname,defStrPre,defStrPost)
		elseif pt:isString() then
			self:writeSubLine("${3} ${1}=${4}(${3})lua_tostring(L,${2})${5};",argname,index,typename,defStrPre,defStrPost)
			isPointer=true
		elseif pt:isVoid() and pt:isPointer() then
			-- We may consider void as a base class:
			--local bhash = utils.getHash("void")
			self:writeSubLine("void* ${1}=${3}(Luna< void >::check(L,${2}))${4};",argname,index,defStrPre,defStrPost)
			isPointer=true			
		elseif pt:isClass() then
			-- get the class absolute parent hash:
			local fbname = pt:getAbsoluteBaseFullName()
			
			if pt:isPointer() then
				-- we just retrieve the pointer here:
				if bname == fbname then
					self:writeSubLine("${7}${3}* ${1}=${5}(Luna< ${4} >::check(L,${2}))${6};",argname,index,bname,fbname,defStrPre,defStrPost,constPre)				
				else
					-- need to dynamic cast:
					self:writeSubLine("${7}${3}* ${1}=${5}dynamic_cast< ${3}* >(Luna< ${4} >::check(L,${2}))${6};",argname,index,bname,fbname,defStrPre,defStrPost,constPre)
				end
				
				isPointer=true			
			else
				-- we retrieve the pointer but then try to dereference if if valid, and output an error otherwise:
				if bname == fbname then
					self:writeSubLine("${7}${3}* ${1}_ptr=${5}(Luna< ${4} >::check(L,${2}))${6};",argname,index,bname,fbname,defStrPre,defStrPostNull,constPre)
				
				else
					self:writeSubLine("${7}${3}* ${1}_ptr=${5}dynamic_cast< ${3}* >(Luna< ${4} >::check(L,${2}))${6};",argname,index,bname,fbname,defStrPre,defStrPostNull,constPre)
				end
				self:writeSubLine("if( ${2}!${1}_ptr ) {",argname,defStrAnd)
				self:pushIndent()
				self:writeSubLine('luaL_error(L, "Dereferencing NULL pointer for arg ${1} in ${2} function");',argname,func:getFullName())
				self:popIndent()
				self:writeLine("}")
				--self:writeSubLine("${2}& ${1}=${3}*${1}_ptr${4};",argname,bname,defStrPre,defStrPost)
				self:writeSubLine("${2} ${1}=${3}*${1}_ptr${4};",argname,typename,defStrPre,defStrPost,constPre)
			end
		else
			self:writeLine("////////////////////////////////////////////////////////////////////")
			self:writeLine("// ERROR: Cannot decide the argument type for '".. typename .. "' baseTypeName is '".. pt:getBaseName(true).."'")
			self:writeLine("////////////////////////////////////////////////////////////////////")
			log:error("Unsupported type : ".. typename .." in retrieveArguments() for function ".. func:getFullName()) --..". Type object:",pt)
		end
		
		-- for each argument we have to check what is the except type modifier:
		-- "regular" arguments are on the stack by default
		-- "class" arguments are on the heap.
		-- we check the isPointer variable for precise results.
		if isPointer and not pt:isPointer() then
			argname = "*"..argname
		elseif not isPointer and pt:isPointer() then
			argname = "&"..argname
		end
		
		if argname == "*NULL" or argname == "&NULL" then
			log:error("Invalid dereference of automatic NULL pointer in retrieveArguments() for function ".. func:getFullName()) --..". Type object:",pt)			
		end
		
		table.insert(args,argname)
	end
	self:newLine()
	
	return table.concat(args,", ")
end

function LunaWriter:writeFunctionCall(cname,func,args)
	-- retrieve the object:
	local rt = func:getReturnType()
	--log:warn("Writing function call ".. func:getName())
	
	if not rt then
		self:writeLine("////////////////////////////////////////////////////////////////////")
		self:writeLine("// ERROR: Invalid return type object for function '" .. func:getFullName() .. "'")
		self:writeLine("////////////////////////////////////////////////////////////////////")
		self:writeLine("return 0;");
		log:warn("Invalid return type object for function '" .. func:getFullName() .. "'")
		return
	end
	
	rt:parse() -- ensure the type fields are value.

	local rname = rt:getBaseName()
	local converter = tc:getToLuaConverter(rt:getName()) or tc:getToLuaConverter(rname)
	local argname = "lret"
	
	local useself = not (func:isGlobal() or func:isStatic() or func:isExtension())
	if useself then
		local bname = nil
		if func:getParent():isExternal() then
			-- retrieve the base name from the type manager:
			bname = tm:getAbsoluteBaseName(func:getParent())
			self:info("Retrieving absolute base name=", bname," for external=",func:getParent():getTypeName())
		else
			bname = func:getParent():getFirstAbsoluteBase():getFullName();
		end
		
		-- the function is a class method, retrieve the object:
		if cname == bname then
			self:writeSubLine("${1}* self=(Luna< ${2} >::check(L,1));",cname, bname);
		else
			-- need to dynamic cast:
			self:writeSubLine("${1}* self=dynamic_cast< ${1}* >(Luna< ${2} >::check(L,1));",cname, bname);
		end
		self:writeLine("if(!self) {")
		self:pushIndent()
		self:writeSubLine('luna_printStack(L);')
		self:writeSubLine('luaL_error(L, "Invalid object in function call ${1}");',func:getPrototype(false,true,true))
		self:popIndent()
		self:writeLine("}")
	end
	
	local force_gc = false;
	local prefix = (useself and "self->") or ((func:isGlobal() or func:isExtension()) and "") or (func:getParent():getFullName().."::")
	
	if rt:isInteger() and func:hasLuaState() then
		-- assume this function is just returning its number of results as a regular lua cfunction;
		self:writeSubLine("return ${3}${1}(${2});",func:getName(),args,prefix);
		-- No need to proceed in that case:
		return;
	elseif rt:isVoid() and not rt:isPointer() then
		self:writeSubLine("${3}${1}(${2});",func:getName(),args,prefix);
	else
		-- in case we return an object this object can only be pushed on the lua stack if we use a pointer to it.
		-- we cannot use a pointer to temporary memory so if the result is on the stack we need to create
		-- the corresponding heap ressource and use a copy constructor.
		-- if there is a converter, it is responsible for performing the proper convertion.
		if not rt:isPointer() and rt:isClass() and not converter then
			if rt:isReference() then
				self:writeSubLine("const ${1}* ${4} = &${5}${2}(${3});",rt:getBaseName(),func:getName(),args,argname,prefix);		
			else
				self:writeSubLine("${1} stack_${4} = ${5}${2}(${3});",rt:getName(),func:getName(),args,argname,prefix);
				self:writeSubLine("${1}* ${2} = new ${1}(stack_${2});",rt:getName(),argname);
				force_gc = true
			end
		else
			self:writeSubLine("${1} ${4} = ${5}${2}(${3});",rt:getName(),func:getName(),args,argname,prefix);
		end
	end
	
	local result_count = 1
	
	local deref = rt:isPointer() and "*" or ""
	
	if converter then
		converter(self,rt,argname)
	elseif rt:isNumber() then
		self:writeSubLine("lua_pushnumber(L,${2}${1});",argname,deref)
	elseif rt:isBoolean() then
		self:writeSubLine("lua_pushboolean(L,${2}${1}?1:0);",argname,deref)
	elseif rt:isString() then
		self:writeSubLine("lua_pushstring(L,${1});",argname)
	elseif rt:isVoid() then
		if rt:isPointer() then
			-- We may consider void as a base class:
			--self:writeSubLine('Luna< ${1} >::push(L,${2},false,"${3}");',"void",argname,"void")
			self:writeSubLine("if(!${1}) return 0; // Do not write NULL pointers.",argname)
			self:newLine()
			self:writeSubLine('Luna< ${1} >::push(L,${2},false);',"void",argname)
		else
			result_count = 0
		end			
	elseif rt:isClass() then
		-- get the class absolute parent hash:
		self:writeSubLine("if(!${1}) return 0; // Do not write NULL pointers.",argname)
		self:newLine()
		
		self:writeSubLine('Luna< ${1} >::push(L,${2},${3});',rname,argname,force_gc and "true" or "false")			
	else
		self:writeLine("////////////////////////////////////////////////////////////////////")
		self:writeLine("// ERROR: Cannot decide the argument type for '".. rt:getName() .. "'")
		self:writeLine("////////////////////////////////////////////////////////////////////")
		log:error("Unsupported type : ".. rt:getName().. " in functionCall for function ".. func:getFullName())
	end	
	self:newLine()
	
	-- now write the number of results:
	self:writeSubLine("return ${1};",result_count);
end

function LunaWriter:writeForAll(list,handler,finalHandler)
	local overloads_handled = Set();
	
	for _,v in list:sequence() do
		if not v:isExternal() then
			local overloaded, overloads = v:isOverloaded()
			local name = (v:isConstructor() and "ctor") or v:getLuaName()
	
			if overloaded then
				if not overloads_handled:contains(name) then
					-- iterate on the overloads found:
					for k, ov in overloads:sequence() do
						handler:handle(self,ov,name.."_overload_"..k)
					end
					if finalHandler then
						finalHandler:handle(self,v,overloads)
					end
					overloads_handled:push_back(name)
				end
			else
				handler:handle(self,v,name)
			end
		end
	end
end

function LunaWriter:writeClass(class)
	local buf = self:clone();
	local cname = class:getFullName()
	local wname = corr:correct("filename",cname)
	local cshortname = class:getName()
	local external = class:isExternal()
	
	self:info_v("Writing file for ",not external and "NOT" or ""," external class ",cname)
	
	if not external then
		buf:writeSubLine("class luna_wrapper_${1} {",wname) --cshortname)
		buf:writeLine("public:")
		buf:pushIndent()
		buf:writeSubLine("typedef Luna< ${1} > luna_t;",cname)
		buf:newLine()
		
		if self.implementConverters then
			if class:getNumBases()==0 then
				-- No parents for this class:
				buf:writeLine("// Base class dynamic cast support:")
				buf:writeSubLine(dynamic_caster_template,cname)
			else
				buf:writeLine("// Derived class converters:")
				for k,bclass in class:getAbsoluteBases():sequence() do
					if not im:ignoreConverter(bclass) then
						buf:writeSubLine(converter_template,bclass:getFullName(),cname,bclass:getName())
					end
				end
			end
			buf:newLine()
		end
		
		if not class:isAbstract() then
			buf:writeLine("// Constructor checkers:")
			buf:writeForAll(class:getValidPublicConstructors(),typeChecker)
			buf:newLine()
		end
		
		buf:writeLine("// Function checkers:")
		buf:writeForAll(class:getValidPublicFunctions(),typeChecker)
		buf:newLine()
		
		buf:writeLine("// Operator checkers:")
		buf:writeLine("// (found " .. class:getValidPublicOperators():size() .." valid operators)")
		buf:writeForAll(class:getValidPublicOperators(),typeChecker)
		buf:newLine()
		
		if not class:isAbstract() then	
			buf:writeLine("// Constructor binds:")
			buf:writeForAll(class:getValidPublicConstructors(),writeBind,writeOverloadBind)
			buf:newLine()
		end
		
		buf:writeLine("// Function binds:")
		buf:writeForAll(class:getValidPublicFunctions(),writeBind,writeOverloadBind)
		buf:newLine()
		
		buf:writeLine("// Operator binds:")
		buf:writeForAll(class:getValidPublicOperators(),writeBind,writeOverloadBind)
		buf:newLine()
	
		buf:popIndent()
		buf:writeLine("};")
		buf:newLine()
	
		-- implement the lunatraits constructor:
		buf:writeSubLine("${1}* LunaTraits< ${1} >::_bind_ctor(lua_State *L) {",cname)
		buf:pushIndent()
		if not class:isAbstract() then
			if class:getValidPublicConstructors():empty() then
				buf:writeLine("return NULL; // No valid default constructor.")
				--buf:writeSubLine("return new ${1}(); // No default constructor:",cname)
			else
				buf:writeSubLine("return luna_wrapper_${1}::_bind_ctor(L);",wname) --cshortname)
			end
		else
			buf:writeLine("return NULL; // Class is abstract.")
			
			-- write the abstract methods:
			local funcs = class:getAbstractFunctions()
			buf:writeLine("// Abstract methods:")
			for _,func in funcs:sequence() do
				buf:writeLine("// ".. func:getPrototype(true,true,true))
			end
			buf:newLine()
			local funcs = class:getAbstractOperators()
			buf:writeLine("// Abstract operators:")
			for _,func in funcs:sequence() do
				buf:writeLine("// ".. func:getPrototype(true,true,true))
			end
			
		end
		buf:popIndent()
		buf:writeLine("}")
		buf:newLine()
		
		-- implement the lunatraits destructor:
		buf:writeSubLine("void LunaTraits< ${1} >::_bind_dtor(${1}* obj) {",cname)
		buf:pushIndent()
		local realclass = class
		if class:getMappedType() then
			realclass = class:getMappedType():getFirstBase() or realclass
		end
		
		local deleter = class:getDeleter() -- only check for deleters on the class, not on the mapped types.
		if type(deleter)=="string" then
			buf:writeSubLine(deleter,"obj");
		elseif not realclass:getDestructor() or realclass:getDestructor():isPublic() then
			buf:writeLine("delete obj;")
		else
			buf:writeLine("//delete obj; // destructor protected.")	
		end
	
		buf:popIndent()
		buf:writeLine("}")
		buf:newLine()
	end
		
	local mname = self:getModuleName()
	
	-- build the parent list:
	local parentList = ""
	for k,v in class:getBases():sequence() do
		if v:isValidForWrapping() then
			parentList = parentList .. '"'.. (v:getModule() or mname) .. "." .. v:getName() .. '", '; --v:getFullName():gsub("::",".")
		end
	end
	
	-- Write the lunatraits properties:
	buf:writeSubLine('const char LunaTraits< ${1} >::className[] = "${2}";',cname,corr:correct("filename",cshortname));
	buf:writeSubLine('const char LunaTraits< ${1} >::fullName[] = "${1}";',cname);
	buf:writeSubLine('const char LunaTraits< ${1} >::moduleName[] = "${2}";',cname,class:getModule() or self:getModuleName());
	buf:writeSubLine('const char* LunaTraits< ${1} >::parents[] = {${2}0};',cname,parentList);
	buf:writeSubLine('const int LunaTraits< ${1} >::hash = ${2};',cname,utils.getHash(class:getFullName()));
	buf:writeSubLine('const int LunaTraits< ${1} >::uniqueIDs[] = {${2},0};',cname,table.concat(class:getAllAbsoluteBaseHashes(),", "));
	buf:newLine()
	
	if not external then
		-- Write the method table:
		buf:writeSubLine("luna_RegType LunaTraits< ${1} >::methods[] = {",cname)
		buf:pushIndent()
			-- write all the methods available here with no overloads:
			local funcs = {}
			for _,v in class:getValidPublicFunctions():sequence() do
				local lname = v:getLuaName()
				if not funcs[lname] then
					buf:writeSubLine('{"${2}", &luna_wrapper_${1}::_bind_${2}},',wname,lname)
					funcs[lname] = true
				end
			end
			local funcs = {}
			for _,v in class:getValidPublicOperators():sequence() do
				local lname = v:getLuaName()
				if not funcs[lname] then
					buf:writeSubLine('{"${2}", &luna_wrapper_${1}::_bind_${2}},',wname,lname)
					funcs[lname] = true
				end
			end	
			
			if self.implementConverters and class:getNumBases()==0 then
				buf:writeSubLine('{"${2}", &luna_wrapper_${1}::_bind_${2}},',wname,"dynCast")
			end
						
		buf:writeSubLine("{0,0}")
		buf:popIndent()
		buf:writeLine("};")
		buf:newLine()
		
		if self.implementConverters then
			-- write the converter table:
			buf:writeSubLine("luna_ConverterType LunaTraits< ${1} >::converters[] = {",cname)
			buf:pushIndent()
		
				-- Write the absolute base converters:
				if class:getNumBases() > 0 then
					for k,bclass in class:getAbsoluteBases():sequence() do
						if not im:ignoreConverter(bclass) then
							buf:writeSubLine('{"${2}", &luna_wrapper_${1}::_cast_from_${3}},',wname,bclass:getFullName(),bclass:getName())
						end
					end
				end
				
			buf:writeSubLine("{0,0}")
			buf:popIndent()
			buf:writeLine("};")
			buf:newLine()
		end
		
		-- Write the enum table:
		buf:writeSubLine("luna_RegEnumType LunaTraits< ${1} >::enumValues[] = {",cname)
		buf:pushIndent()
			-- write all the methods available here with no overloads:
			local vals = {}
			for k1,enum in class:getEnums():sequence() do
				dbg:assertType(enum,Enum)
			
				local values = enum:getValues();
				
				for k2,enumval in values:sequence() do
					local vname = enumval:getName()
					if vals[vname] then
						log:warn("Adding duplicated enum value ".. vname .. " in class " .. class:getFullName())
					end
					
					buf:writeSubLine('{"${1}", ${2}},',vname,enumval:getFullName())
					vals[vname] = true
				end			
			end
		buf:writeSubLine("{0,0}")
		buf:popIndent()
		buf:writeLine("};")
		buf:newLine()
	end
	
	-- get the proper filename:
	local filename = wname 
	self:debug0_v("Writing file ","bind_".. filename ..".cpp")
	self:writeSourceContent(buf,"bind_".. filename ..".cpp")
end

function LunaWriter:writeClassSources()
	local written = Set();
	
	for _,v in self.classes:sequence() do
		local tname = v:getTypeName()
		if not im:ignore("class_declaration",tname) and not written:contains(tname) and not v:isExternal() then
			written:push_back(tname)
			self:debug0_v("writing reflection for class ", v:getFullName(), " with Typename: ", tname)
			self:writeClass(v)
		else
			self:notice("Discarding reflection generation for class ", v:getFullName(), " with Typename: ", tname)
		end
	end
end

function LunaWriter:writeExternals()
	
	local written = Set();
	
	local buf = self:clone();
	
	for _,v in self.classes:sequence() do
		local tname = v:getTypeName()
		if not im:ignore("class_declaration",tname) and not written:contains(tname) and v:isExternal() then
			written:push_back(tname)
			self:debug0_v("writing external decleration for class ", v:getFullName(), " with Typename: ", tname)

			local cname = v:getFullName()
			buf:writeSubLine('const char LunaTraits< ${1} >::className[] = "${2}";',cname,corr:correct("filename",v:getName()));
			buf:writeSubLine('const char LunaTraits< ${1} >::fullName[] = "${1}";',cname);
			buf:writeSubLine('const char LunaTraits< ${1} >::moduleName[] = "${2}";',cname,v:getModule() or self:getModuleName());
			--buf:writeSubLine('const char* LunaTraits< ${1} >::parents[] = {${2}0};',cname,parentList);
			buf:writeSubLine('const int LunaTraits< ${1} >::hash = ${2};',cname,utils.getHash(v:getFullName()));
			buf:writeSubLine('const int LunaTraits< ${1} >::uniqueIDs[] = {${2},0};',cname,table.concat(v:getAllAbsoluteBaseHashes(),", "));
			buf:newLine()
		end
	end
	
	local filename = wname 
	self:debug0_v("Writing file ","register_externals.cpp")
	self:writeSourceContent(buf,"register_externals.cpp")
end


--- Write the main function to register all classes in a given lua module.
function LunaWriter:writeModuleFile()
	local mname = self:getModuleName()
	self:clearContent()
	
	self:writeLine("#include <plug_common.h>")
	self:newLine()
	self:writeLine("#ifdef __cplusplus")	
	self:writeLine('extern "C" {')
	self:writeLine("#endif")
	self:newLine()
	self:writeLine("extern void register_defines(lua_State* L);")
	self:writeLine("extern void register_enums(lua_State* L);")
	self:writeLine("extern void register_global_functions(lua_State* L);")
	self:newLine()
	self:writeLine([[
	
	]])
	self:writeSubLine("int PLUG_EXPORT luaopen_${1}(lua_State* L) {",self:getLuaOpenName())
	self:pushIndent()
	
	-- first open the luna table:
	self:writeLine("luna_open(L);")
	self:newLine();
	
	-- register the void class:
	self:writeSubLine('luna_pushModule(L,"${1}");',"luna")
	self:writeLine("Luna< void >::Register(L);")
	self:writeSubLine("luna_popModule(L);")
	self:newLine()
		
	-- register the other classes:
	local written = Set();
	
	local currentModule = nil
	local moduleSet = Set();
	
	for _,v in self.classes:sequence() do
		local tname = v:getTypeName()
		if not v:isExternal() and not im:ignore("class_declaration",tname) and not written:contains(tname) then
			written:push_back(tname)
			
			-- check if we should change the currentModule:
			local mod = v:getModule() or self:getModuleName()
			if currentModule ~= mod then
				if currentModule then
					self:writeSubLine("luna_popModule(L);")
				end
				self:writeSubLine('luna_pushModule(L,"${1}");',mod)
				currentModule = mod
				moduleSet:push_back(mod) -- add the module to the set.
			end
			self:info("Would write class ", tname, " in module ", v:getModule())
			
			self:writeSubLine("Luna< ${1} >::Register(L);",tname)
		else
			self:warn("Ignoring registration for class ", tname)
		end
	end
	self:writeSubLine("luna_popModule(L);") -- pop the module at the end.	
	--self:writeForeach(self.classes,"Luna< ${1} >::Register(L);",getValueName)
	self:newLine()

	-- push a new table that will serve as the wx container:
	--self:writeLine("lua_newtable(L); // container class")
	self:writeSubLine('luna_pushModule(L,"${1}");',self:getModuleName()) -- load the default module.
	moduleSet:push_back(self:getModuleName())
	self:newLine()
	
	-- register the definitions:
	self:writeLine("register_defines(L);")
	self:newLine()
	
	-- register the enums:
	self:writeLine("register_enums(L);")
	self:newLine()	

	
	-- register the global function:
	self:writeLine("register_global_functions(L);")
	self:newLine()

	self:writeSubLine("luna_popModule(L);")
	self:newLine()
	
	-- register the module name:
	--self:writeSubLine('lua_pushstring(L,"${1}");',self:getModuleName())
	--self:writeSubLine('lua_setfield(L,-2,"__NAME__");')
	
	--self:newLine()


	-- Now set the table as global:
	--self:writeSubLine('lua_setglobal(L,"${1}");',self:getModuleName())
	--self:writeSubLine('lua_getglobal(L,"${1}");',self:getModuleName())
	--self:newLine()
	
	-- register all the parent classes functions in that module:
	for k,v in moduleSet:sequence() do
		self:writeSubLine('luna_copyParents(L,"${1}");',v) --self:getModuleName())
	end
	self:newLine()
	
	-- force starting wxWidgets:
	if self.datamap:getCodeAddition("module_post_register") then
		self:writeLine(self.datamap:getCodeAddition("module_post_register"))		
		self:newLine()
	end
	
	self:writeSubLine('luna_pushModule(L,"${1}");',self:getModuleName()) -- load the default module.
	self:writeLine("return 1;")
	self:popIndent()
	self:writeLine("}")
	self:newLine()
	self:writeLine("#ifdef __cplusplus")
	self:writeLine("}")
	self:writeLine("#endif")
	self:newLine()
	
	self:writeSource("register_".. self:getLuaOpenName() ..".cpp")
end

function LunaWriter:writeDefines()
	self:clearContent()

	local defs = self.datamap:getDefines()

	local headers = Set();
	for _,def in defs:sequence() do
		local header = def:getHeaderFile()
		if header and not im:ignoreHeader(header) then
			headers:push_back(header)
		end		
	end
	
	for _,v in headers:sequence() do
		self:writeLine("#include <"..v..">")
	end
	self:newLine()
	
	--- retrieve the list of defines from the reflection map:
	self:writeLine("#include <plug_common.h>")
	self:newLine()
	self:writeLine("#ifdef __cplusplus")	
	self:writeLine('extern "C" {')
	self:writeLine("#endif")
	self:newLine()
	self:writeSubLine("void register_defines(lua_State* L) {")
	self:pushIndent()
		-- Assume the parent container is already on the stack.
		for _,v in defs:sequence() do
			if not v:isIgnored() then
				self:writeSubLine('lua_pushnumber(L,${1}); lua_setfield(L,-2,"${2}");',v:getName(),v:getName()) --InitStr
			end
		end
		--self:writeForeach(self.datamap:getDefines(),'lua_pushnumber(L,${1}); lua_setfield(L,-2,"${1}");',getValueShortName)	
	self:popIndent()
	self:writeLine("}")
	self:newLine()
	self:writeLine("#ifdef __cplusplus")
	self:writeLine("}")
	self:writeLine("#endif")
	self:newLine()
	
	self:writeSource("register_definitions.cpp")	
end

function LunaWriter:writeEnums()
	self:clearContent()

	self:writeLine("#include <plug_common.h>")
	self:newLine()
	
	local enums = self.datamap:getAllEnums()
	
	local headers = Set();
	for _,enum in enums:sequence() do
		local header = enum:getHeaderFile()
		if header and not im:ignoreHeader(header) then
			headers:push_back(header)
		end		
	end
	
	for _,v in headers:sequence() do
		self:writeLine("#include <"..v..">")
	end
	self:newLine()
	
	--- retrieve the list of defines from the reflection map:

	self:writeLine("#ifdef __cplusplus")	
	self:writeLine('extern "C" {')
	self:writeLine("#endif")
	self:newLine()
	self:writeSubLine("void register_enums(lua_State* L) {")
	self:pushIndent()
		local writtenValues = Set();
		
		for _,v in enums:sequence() do
			-- write the ennumeration content here:
			
			-- write a new table:
			self:writeSubLine("lua_newtable(L); // enum ${1}",v:getName())
			self:newLine()
			-- Assume the parent container is already on the stack.
			for _,val in v:getValues():sequence() do
				if not im:ignore(val:getFullName(),"enum_value") then
					self:writeSubLine('lua_pushnumber(L,${1}); lua_setfield(L,-2,"${2}");',val:getFullName(),val:getName())
				end
			end
			
			--self:writeForeach(v:getValues(),
			self:newLine()
			-- push the table in the module:
			self:writeSubLine('lua_setfield(L,-2,"${1}");',v:getName());
			self:newLine()
			
			-- Now write the enum values again but in the module table directly:
			for _,val in v:getValues():sequence() do
				if not im:ignore(val:getFullName(),"enum_value") then
					if writtenValues:contains(val:getFullName()) then
						self:warn("Overriding enum value ",val:getFullName(), " in module context.")
					end
					
					writtenValues:push_back(val:getFullName())
					self:writeSubLine('lua_pushnumber(L,${1}); lua_setfield(L,-2,"${2}");',val:getFullName(),val:getName())
				end
			end
			
			self:newLine()
			self:newLine()
		end
	self:popIndent()
	self:writeLine("}")
	self:newLine()
	self:writeLine("#ifdef __cplusplus")
	self:writeLine("}")
	self:writeLine("#endif")
	self:newLine()
	
	self:writeSource("register_enums.cpp")	
end

function LunaWriter:writeNamespaceFunctions(ns)
	-- write all the global functions found in the given namespace:
	local funcs = ns:getValidPublicFunctions()
	
	-- start with the type checkers:
	self:writeLine("// Function checkers:")
	self:writeForAll(funcs, typeChecker)
	self:newLine()
	
	self:writeLine("// Function binds:")
	self:writeForAll(funcs,writeBind,writeOverloadBind)
	self:newLine()
end

function LunaWriter:writeGlobalFunctionSources()
	self:clearContent()

	--- retrieve the list of defines from the reflection map:
	self:writeLine("#include <plug_common.h>")
	self:newLine()
	
	-- register all the global functions here:
	-- just write all the namespaces with content:
	local namespaces = self.datamap:getAllNamespaces()
	
	local headers = Set();
	for _,ns in namespaces:sequence() do
		local functions = ns:getValidPublicFunctions()
		for _,func in functions:sequence() do
			local header = func:getHeaderFile()
			if header and func:isValidForWrapping() and not im:ignoreHeader(header) and not func:isExternal() then
				headers:push_back(header)
			end		
		end
	end
	
	for _,v in headers:sequence() do
		self:writeLine("#include <"..v..">")
	end
	self:newLine()
	
	for _,v in namespaces:sequence() do
		self:writeNamespaceFunctions(v)
	end
	
	
	self:writeLine("#ifdef __cplusplus")	
	self:writeLine('extern "C" {')
	self:writeLine("#endif")
	self:newLine()
	self:writeSubLine("void register_global_functions(lua_State* L) {")
	self:pushIndent()
		-- Assume the parent container is already on the stack.
		for _,v in namespaces:sequence() do
			local funcs = v:getFunctions()
			local visited = Set();
			
			for _,func in funcs:sequence() do
				local fname = func:getName()
				if not visited:contains(fname) and func:isValidForWrapping() and not func:isExternal() then
					self:writeSubLine('lua_pushcfunction(L, _bind_${1}); lua_setfield(L,-2,"${1}");',fname)
					visited:push_back(fname)
				end
			end
			 
			--self:writeForeach(funcs,'lua_pushcfunction(L, _bind_${1}); lua_setfield(L,-2,"${1}");',getValueName)
		end
	self:popIndent()
	self:writeLine("}")
	self:newLine()
	self:writeLine("#ifdef __cplusplus")
	self:writeLine("}")
	self:writeLine("#endif")
	self:newLine()
	
	self:writeSource("register_global_functions.cpp")	
end

--- Write the complete reflection
function LunaWriter:writeBindings(folder)
    self:setTargetFolder(folder)

    self:writeMainHeader()
    self:writeExportFile()
    self:writeExportFunctionFile()
    self:writeClassSources()
    self:writeExternals()
    self:writeGlobalFunctionSources()
    self:writeDefines()
    self:writeEnums()
    
    self:writeModuleFile()
end

return LunaWriter

