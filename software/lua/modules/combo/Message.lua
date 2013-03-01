local Class = require("classBuilder"){name="ComboMessage",bases="combo.Vertex"};

local msgPrefix = "enum:";

function Class:initialize(options)
	self._content = options
	
	self:check(self._content,"Invalid Message content")
end

function Class:getContent()
	return self._content;
end

function Class:__tostring()
	return msgPrefix ..'"' .. self._content .. '"'
end

function Class:__eq(rhs)
	return self._content==rhs._content;
end

function Class:__lt(rhs)
	return self._content < rhs._content
end

function Class:getHash()
	return utils.getHash(self._content)
end

return Class 
