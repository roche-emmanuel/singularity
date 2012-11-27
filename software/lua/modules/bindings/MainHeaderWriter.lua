local Class = require("classBuilder"){name="MainHeaderWriter",bases="base.Object"};

local rm = require "bindings.ReflectionManager"
local injector = require "bindings.CodeInjector"
local im = require "bindings.IgnoreManager"
local snippets = require "bindings.SnippetManager"
local utils = require "utils"

local Set = require "std.Set"

function Class:writeFile()
	local buf = require("io.BufferWriter")()
	
	local classes = rm:getClasses();
	
	-- write all the headers:
	local headers = Set();
	for _,v in classes:sequence() do
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
	local add = "\n\tstatic luna_ConverterType converters[];"
	
	for _,v in classes:sequence() do
		local classname = v:getTypeName()
		if not writtenTypes:contains(classname) then
			writtenTypes:push_back(classname)
		else
			classname = nil	
		end
		
		if classname and not im:ignore(classname,"class_declaration") then
			self:debug0_v("Writing class declaration for ", v:getFullName(), " (typename=",classname,")")
			local abname = v:getFirstAbsoluteBase():getFullName();
			buf:writeLine(snippets:getLunaTraitsCode(classname,abname,add))
		else
			self:notice("Ignoring class declaration for ", v:getFullName(), " (typename=",classname,")")
		end
	end
	
	buf:newLine()
	
	-- write the LunaTypes for all the absolute base classes:
	local writtenTypes = Set();
	
	for k,v in classes:sequence() do
		if v:getBases():empty() then
			local hash = utils.getHash(v:getFullName())
			if not writtenTypes:contains(hash) then
				buf:writeLine(snippets:getLunaTypeCode(hash,v:getFullName()))
				writtenTypes:push_back(hash)
			else
				self:warn("Luna type already written for hash=",hash," type=",v:getFullName())
			end
		end
	end
	
	rm:writeHeader("luna_types.h",buf)	
end

return Class