
local oo = require "loop.cached"
local Object = require "reflection.Object"
local dbg = require "debugger"
local im = require "bindings.IgnoreManager"
local ItemLink = require "reflection.ItemLink"

local Define = oo.class({},Object)

-- Define the class name
Define.CLASS_NAME = "reflection.Define"

function Define:__init(name,initializers)
    obj = Object:__init({})
    obj = oo.rawnew(self,obj)
	if name then
		obj:setName(name)
	end
	obj.initializers = initializers
	obj.headerFile = nil
    return obj
end

function Define:getHeaderFile()
	return self.headerFile
end

function Define:setHeaderFile(header)
	self.headerFile = header
end

function Define:setInitializers(init)
	self.initializers = init;
end

function Define:getInitializers()
	return self.initializers
end

function Define:getInitStr()
	if not self.initializers then
		return;
	end

	if not self._initStr then
		-- parse the initializers:
		local cont = {}
		for k,v in self.initializers:sequence() do
			if v:getType() == ItemLink.STRING then
				table.insert(cont,v:getContent())
			else
				return;
			end
		end
		
		self._initStr = table.concat(cont)
	end
	
	return self._initStr;
end

function Define:isIgnored()
	local str =  self:getInitStr()

	if im:ignoreDefine(self) then
		return true;
	end

	if not str then
		return true
	end
	
	if str:find("||") then
		return false;
	end

	if str:find("|") then
		return false;
	end
	
	if not tonumber(str) then
		return true;
	end	
end

return Define