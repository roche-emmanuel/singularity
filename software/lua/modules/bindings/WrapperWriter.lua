local Class = require("classBuilder"){name="WrapperWriter",bases="io.BufferWriter"};

local rm = require "bindings.ReflectionManager"
local corr = require "bindings.TextCorrector"

local utils = require "utils"

local Set = require "std.Set"

function Class:initialize(options)
	self._class = options and options.class;
	self:check(self._class,"Invalid class object.")
end

function Class:writeHeader()
	local buf = self;
	local class = self._class;
	
	buf:clearContent();
	
	local funcs = self._class:getVirtualFunctions()
	
	buf:writeLine("// virtual functions:")
	buf:newLine();
	
	for _,func in funcs:sequence() do
		buf:writeLine("// "..func:getPrototype(true,true,true))
	end
	
	buf:newLine();
	
	-- get the proper filename:
	local cname = class:getFullName()
	local filename = corr:correct("filename",cname)
	self:debug0_v("Writing file ","wrapper_".. filename ..".h")
	rm:writeHeader("wrappers/wrapper_".. filename ..".h",self)
end

function Class:writeSource()
	local buf = self;
	local class = self._class;
	
	buf:clearContent();
	
	local funcs = self._class:getVirtualFunctions()
	
	buf:writeLine("// virtual functions:")
	buf:newLine();
	
	for _,func in funcs:sequence() do
		buf:writeLine("// "..func:getPrototype(true,true,true))
	end
	
	buf:newLine();
	
	-- get the proper filename:
	local cname = class:getFullName()
	local filename = corr:correct("filename",cname)
	self:debug0_v("Writing file ","wrapper_".. filename ..".cpp")
	rm:writeSource("wrappers/wrapper_".. filename ..".cpp",self)
end

function Class:writeFile()
	self:writeHeader()
	self:writeSource()
end

return Class