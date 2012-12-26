local Class = require("classBuilder"){name="BasicGroup",bases="osg.BasicObject"};

require "osg"
Class:generateWrapping(osg.Group)
	
function Class:initialize(options)	
	self:debug2("Creating BasicGroup object");
	
	self:createWrapper(osg.Group)
	
	self:addAssociate("osg::Node")
	self:addAssociate("osg::Group")
end

function Class:buildObjectWrapper(wrapper)
	-- nothing to save.
end

return Class
