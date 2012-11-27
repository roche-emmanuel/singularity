
local oo = require "loop.cached"

local ReflectionWriter = require "bindings.ReflectionWriter"
local BaseWriter = require "bindings.BaseWriter"
local Enum = require "reflection.Enum"
local table = table

local dbg = require "debugger"

local log = require "logger"
local im = require "bindings.IgnoreManager"
local snippets = require "bindings.SnippetManager"

local Set = require "std.Set"
local utils = require "utils"

-- Default type checker:
local typeChecker = require("bindings.TypeCheckerBase")()

local writeOverloadBind = require("bindings.OverloadBinderBase")()
local writeBind = require("bindings.BinderBase")()

local tc = require "bindings.TypeConverter"
local tm = require "bindings.TypeManager"

local injector = require "bindings.CodeInjector"
local corr = require "bindings.TextCorrector"

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
			local fbname = tm:getBaseTypeMapping(pt:getAbsoluteBaseFullName())
			local isUnsafe = im:ignore(fbname,"converter")
			local casttype = isUnsafe and "static" or "dynamic"
			
			if pt:isPointer() then
				-- we just retrieve the pointer here:
				if bname == fbname then
					self:writeSubLine("${7}${3}* ${1}=${5}(Luna< ${4} >::check(L,${2}))${6};",argname,index,bname,fbname,defStrPre,defStrPost,constPre)				
				else
					-- need to dynamic cast:
					if isUnsafe then
						self:writeSubLine("${7}${3}* ${1}=${5}static_cast< ${3}* >(Luna< void >::rawPointer(L,${2}))${6};",argname,index,bname,fbname,defStrPre,defStrPost,constPre,casttype)					
					else
						self:writeSubLine("${7}${3}* ${1}=${5}${8}_cast< ${3}* >(Luna< ${4} >::check(L,${2}))${6};",argname,index,bname,fbname,defStrPre,defStrPost,constPre,casttype)
					end
				end
				
				isPointer=true			
			else
				-- we retrieve the pointer but then try to dereference if if valid, and output an error otherwise:
				if bname == fbname then
					self:writeSubLine("${7}${3}* ${1}_ptr=${5}(Luna< ${4} >::check(L,${2}))${6};",argname,index,bname,fbname,defStrPre,defStrPostNull,constPre)
				
				else
					if isUnsafe then
						self:writeSubLine("${7}${3}* ${1}_ptr=${5}static_cast< ${3}* >(Luna< void >::rawPointer(L,${2}))${6};",argname,index,bname,fbname,defStrPre,defStrPostNull,constPre,casttype)
					else
						self:writeSubLine("${7}${3}* ${1}_ptr=${5}${8}_cast< ${3}* >(Luna< ${4} >::check(L,${2}))${6};",argname,index,bname,fbname,defStrPre,defStrPostNull,constPre,casttype)
					end
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
		
		bname = tm:getBaseTypeMapping(bname)
		local isUnsafe = im:ignore(bname,"converter")
		local casttype = isUnsafe and "static" or "dynamic"
		
		-- the function is a class method, retrieve the object:
		if cname == bname then
			self:writeSubLine("${1}* self=(Luna< ${2} >::check(L,1));",cname, bname);
		else
			-- need to dynamic cast:
			if isUnsafe then
				self:writeSubLine("${1}* self=static_cast< ${1}* >(Luna< void >::rawPointer(L,1));",cname);			
			else
				self:writeSubLine("${1}* self=${3}_cast< ${1}* >(Luna< ${2} >::check(L,1));",cname, bname, casttype);
			end
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
						handler:handle(self,ov,name.."_overload_"..k,true) -- force complete check.
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

	-- Check if an equality operator is provided:	
	local equalityOperatorProvided=false
	for _,v in class:getValidPublicFunctions():sequence() do
		local lname = v:getLuaName()
		if lname == "__eq" then
			equalityOperatorProvided=true
			break;
		end
	end
	
	for _,v in class:getValidPublicOperators():sequence() do
		local lname = v:getLuaName()
		if lname == "__eq" then
			equalityOperatorProvided=true
			break;
		end
	end

	if not external then
		buf:writeSubLine("class luna_wrapper_${1} {",wname) --cshortname)
		buf:writeLine("public:")
		buf:pushIndent()
		buf:writeSubLine("typedef Luna< ${1} > luna_t;",cname)
		buf:newLine()
		
		if not equalityOperatorProvided then
			-- provide our own equalityOperator:
			local bclass = class:getNumBases()==0 and class or class:getFirstAbsoluteBase()
			local bname = tm:getBaseTypeMapping(bclass:getFullName())
			local hash = utils.getHash(bname)
			buf:writeLine(snippets:getEqualityCode(bname,hash))
		end
		
		if self.implementConverters then
			if class:getNumBases()==0 then
				-- No parents for this class:
				buf:writeLine("// Base class dynamic cast support:")
				-- buf:writeSubLine(dynamic_caster_template,cname)
				buf:writeLine(snippets:getDynamicCasterCode(class))
			else
				buf:writeLine("// Derived class converters:")
				for k,bclass in class:getAbsoluteBases():sequence() do
					--if not im:ignoreConverter(bclass) then
						buf:writeSubLine(snippets:getConverterCode(class,bclass));
					--end
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
			-- buf:newLine()
			-- local funcs = class:getAbstractOperators()
			-- buf:writeLine("// Abstract operators:")
			-- for _,func in funcs:sequence() do
				-- buf:writeLine("// ".. func:getPrototype(true,true,true))
			-- end
			
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
			
			if not equalityOperatorProvided then
				buf:writeSubLine('{"${2}", &luna_wrapper_${1}::_bind_${2}},',wname,"__eq")			
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
						--if not im:ignoreConverter(bclass) then
							buf:writeSubLine('{"${2}", &luna_wrapper_${1}::_cast_from_${3}},',wname,bclass:getFullName(),bclass:getName())
						--end
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
		if not im:ignore(tname,"class_declaration") and not written:contains(tname) and not v:isExternal() then
			written:push_back(tname)
			self:debug0_v("writing reflection for class ", v:getFullName(), " with Typename: ", tname)
			self:writeClass(v)
		else
			self:notice("Discarding reflection generation for class ", v:getFullName(), " with Typename: ", tname)
		end
	end
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
			local funcs = v:getFunctions{"Method"}
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
	local ClassExporter = require "bindings.ClassListExporter"
	local FunctionExporter = require "bindings.FunctionListExporter"
	local MainHeaderWriter = require "bindings.MainHeaderWriter"
	local ExternalWriter = require "bindings.ExternalWriter"
	local EnumWriter = require "bindings.EnumWriter"
	local DefineWriter = require "bindings.DefineWriter"
	local ModuleWriter = require "bindings.ModuleWriter"
	
    self:setTargetFolder(folder)
	
	local classExp = ClassExporter();
	classExp:writeFile()
	
	local funcExp = FunctionExporter()
	funcExp:writeFile()
	
	local mainWriter = MainHeaderWriter();
	mainWriter:writeFile();
	
	local extWriter = ExternalWriter();
	extWriter:writeFile();
	
	local enumWriter = EnumWriter();
	enumWriter:writeFile();
	
	local defWriter = DefineWriter();
	defWriter:writeFile();
	
	local modWriter = ModuleWriter();
	modWriter:writeFile();
	
    self:writeClassSources()
    self:writeGlobalFunctionSources()
end

return LunaWriter

