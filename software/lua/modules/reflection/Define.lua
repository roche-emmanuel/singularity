local Class = require("classBuilder"){name="Define",bases="reflection.Entity"};

local im = require "bindings.IgnoreManager"
local ItemLink = require "reflection.ItemLink"

function Class:initialize(options)
	self.initializers = options and options.initializers
end

function Class:setInitializers(init)
	self.initializers = init;
end

function Class:getInitializers()
	return self.initializers
end

function Class:getInitStr()
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

function Class:isIgnored()
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

return Class