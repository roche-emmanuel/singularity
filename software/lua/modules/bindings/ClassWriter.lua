local Class = require("classBuilder"){name="GlobalFunctionWriter",bases="bindings.FunctionWriter"};

local rm = require "bindings.ReflectionManager"
local tm = require "bindings.TypeManager"
local injector = require "bindings.CodeInjector"
local im = require "bindings.IgnoreManager"
local snippets = require "bindings.SnippetManager"
local corr = require "bindings.TextCorrector"

local utils = require "utils"

local Set = require "std.Set"

function Class:initialize(options)
	self._class = options and options.class;
	self:check(self._class,"Invalid class object.")
end

function Class:writeFile()
	local buf = self;
	local class = self._class;
	
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
		
		local typeChecker = self._typeChecker
		local writeBind = self._writeBind
		local writeOverloadBind = self._writeOverloadBind
		
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
		
	local mname = rm:getDefaultModuleName()
	
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
	buf:writeSubLine('const char LunaTraits< ${1} >::moduleName[] = "${2}";',cname,class:getModule() or mname);
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
			
			if class:getNumBases()==0 then
				buf:writeSubLine('{"${2}", &luna_wrapper_${1}::_bind_${2}},',wname,"dynCast")
			end
			
			if not equalityOperatorProvided then
				buf:writeSubLine('{"${2}", &luna_wrapper_${1}::_bind_${2}},',wname,"__eq")			
			end
						
		buf:writeSubLine("{0,0}")
		buf:popIndent()
		buf:writeLine("};")
		buf:newLine()
		
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
		
		-- Write the enum table:
		buf:writeSubLine("luna_RegEnumType LunaTraits< ${1} >::enumValues[] = {",cname)
		buf:pushIndent()
			-- write all the methods available here with no overloads:
			local vals = {}
			for k1,enum in class:getEnums():sequence() do
				self:checkType(enum,require"reflection.Enum")
			
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
	rm:writeSource("bind_".. filename ..".cpp",self)
end

return Class