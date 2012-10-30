local Class = require("classBuilder"){name="BasicValidator",bases="base.Object"};

function Class:initialize()
end

function Class:validate(object)
	self:no_impl()
end

function Class:__call(object)
	return self:validate(object)
end


return Class
