local Class = require("classBuilder"){name="TypeWriter",bases="bindings.FunctionWriter"};

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
	
	local wname = corr:correct("filename",self._class)
	buf:writeLine(snippets:getTypeCode(self._class))

	-- get the proper filename:
	local filename = wname 
	self:debug0_v("Writing file ","bind_".. filename ..".cpp")
	rm:writeSource("bind_".. filename ..".cpp",self)
end

return Class