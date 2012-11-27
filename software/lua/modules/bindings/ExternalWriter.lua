local Class = require("classBuilder"){name="ExternalWriter",bases="base.Object"};

local rm = require "bindings.ReflectionManager"
local im = require "bindings.IgnoreManager"
local corr = require "bindings.TextCorrector"

local utils = require "utils"

local Set = require "std.Set"

function Class:writeFile()
	local buf = require("io.BufferWriter")()
	
	local written = Set();
	local classes = rm:getClasses()
	
	for _,v in classes:sequence() do
		local tname = v:getTypeName()
		if not im:ignore(tname,"class_declaration") and not written:contains(tname) and v:isExternal() then
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
		
	rm:writeSource("register_externals.cpp",buf)	
end

return Class