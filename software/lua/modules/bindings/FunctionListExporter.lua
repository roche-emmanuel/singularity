local Class = require("classBuilder"){name="FunctionListExporter",bases="base.Object"};

local rm = require "bindings.ReflectionManager"
local im = require "bindings.IgnoreManager"

local Set = require "std.Set"

function Class:writeFile()
	-- get a copy of that writer:
	local buf = require("io.BufferWriter")()

	-- write the module name:
	buf:writeLine("module=".. rm:getDefaultModuleName())
	
	local writtenTypes = Set();
	
	local namespaces = rm:getNamespaces()
	
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
				self:notice("Ignoring function export for ", v:getFullName(), " (typename=",classname,")")
			end
		end
	end
		
	rm:writeFile("functions.luna",buf)	
end

return Class