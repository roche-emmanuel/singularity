local Class = require("classBuilder"){name="BasicNode",bases="osg.BasicObject"};

require "osg"
Class:generateWrapping(osg.Node)

function Class:initialize(options)	
	self:debug2("Creating BasicNode object");
	
	self:createWrapper(osg.Node)
	
	self:addAssociate("osg::Node")
end

function Class:buildObjectWrapper(wrapper)
	-- nothing to serialize.
end

return Class
