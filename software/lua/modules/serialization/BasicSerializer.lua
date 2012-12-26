local Class = require("classBuilder"){name="BasicSerializer",bases="base.Object"};

require "osg"
Class:generateWrapping(osgDB.BaseSerializer)

function Class:initialize(options)
	self:check(options,"Invalid options table when creating serializer.");
	self:check(options.name,"Invalid options.name in BasicSerializer.");
	
	self._name = options.name
			
	self:createWrapper(osgDB.BaseSerializer)	
end

function Class:read(is, obj)
	self:no_impl()
	return true;
end

function Class:write(out, obj)
	self:no_impl()
	return true;
end

function Class:getName()
	return self._name
end


return Class
