local Class = require("classBuilder"){name="BasicNode",bases="osg.BasicObject"};

function Class:initialize(options)	
	self:debug2("Creating BasicNode object");
	require "osg"
	
	self:generateWrapping(osg.Node)
	
	self:addAssociate("osg::Node")
end

function Class:buildObjectWrapper(wrapper)
	-- nothing to serialize.
end

return Class
