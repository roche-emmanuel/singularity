local Class = require("classBuilder"){name="ModuleWriter",bases="base.Object"};

local rm = require "bindings.ReflectionManager"
local injector = require "bindings.CodeInjector"
local im = require "bindings.IgnoreManager"
local snippets = require "bindings.SnippetManager"
local utils = require "utils"

local Set = require "std.Set"

function Class:writeFile()
	local buf = require("io.BufferWriter")()
	
	local mname = rm:getDefaultModuleName()
	local oname = rm:getLuaOpenName()
	
	-- buf:writeLine("#include <plug_common.h>")
	-- buf:newLine()
	buf:writeLine("#ifdef __cplusplus")	
	buf:writeLine('extern "C" {')
	buf:writeLine("#endif")
	buf:newLine()
	buf:writeLine("extern void register_defines(lua_State* L);")
	buf:writeLine("extern void register_enums(lua_State* L);")
	buf:writeLine("extern void register_global_functions(lua_State* L);")
	buf:newLine()
	buf:writeLine([[
	
	]])
	buf:writeSubLine("int PLUG_EXPORT luaopen_${1}(lua_State* L) {",oname)
	buf:pushIndent()
	
	-- first open the luna table:
	buf:writeLine("luna_open(L);")
	buf:newLine();
	
	-- register the void class:
	buf:writeSubLine('luna_pushModule(L,"${1}");',"luna")
	buf:writeLine("Luna< void >::Register(L);")
	buf:writeSubLine("luna_popModule(L);")
	buf:newLine()
		
	-- register the other classes:
	local written = Set();
	
	local currentModule = nil
	local moduleSet = Set();
	local classes = rm:getClasses()
	
	for _,v in classes:sequence() do
		local tname = v:getTypeName()
		if not v:isExternal() and not im:ignore(tname,"class_declaration") and not written:contains(tname) then
			written:push_back(tname)
			
			-- check if we should change the currentModule:
			local mod = v:getModule() or mname
			if currentModule ~= mod then
				if currentModule then
					buf:writeSubLine("luna_popModule(L);")
				end
				buf:writeSubLine('luna_pushModule(L,"${1}");',mod)
				currentModule = mod
				moduleSet:push_back(mod) -- add the module to the set.
			end
			self:info("Would write class ", tname, " in module ", v:getModule())
			
			buf:writeSubLine("Luna< ${1} >::Register(L);",tname)
		else
			self:warn("Ignoring registration for class ", tname)
		end
	end
	buf:writeSubLine("luna_popModule(L);") -- pop the module at the end.	
	--buf:writeForeach(buf.classes,"Luna< ${1} >::Register(L);",getValueName)
	buf:newLine()

	-- push a new table that will serve as the wx container:
	--buf:writeLine("lua_newtable(L); // container class")
	buf:writeSubLine('luna_pushModule(L,"${1}");',mname) -- load the default module.
	moduleSet:push_back(mname)
	buf:newLine()
	
	-- register the definitions:
	buf:writeLine("register_defines(L);")
	buf:newLine()
	
	-- register the enums:
	buf:writeLine("register_enums(L);")
	buf:newLine()	

	
	-- register the global function:
	buf:writeLine("register_global_functions(L);")
	buf:newLine()

	buf:writeSubLine("luna_popModule(L);")
	buf:newLine()
	
	-- register all the parent classes functions in that module:
	for k,v in moduleSet:sequence() do
		buf:writeSubLine('luna_copyParents(L,"${1}");',v)
	end
	buf:newLine()
	
	-- force starting wxWidgets:
	if rm:getCodeAddition("module_post_register") then
		buf:writeLine(rm:getCodeAddition("module_post_register"))		
		buf:newLine()
	end
	
	buf:writeSubLine('luna_pushModule(L,"${1}");',mname) -- load the default module.
	buf:writeLine("return 1;")
	buf:popIndent()
	buf:writeLine("}")
	buf:newLine()
	buf:writeLine("#ifdef __cplusplus")
	buf:writeLine("}")
	buf:writeLine("#endif")
	
	rm:writeSource("register_".. oname ..".cpp",buf)
end

return Class