local Class = require("classBuilder"){name="BasicNode",bases="osg.BasicObject"};

function Class:initialize(options)	
	self:info("Creating BasicNode object...");
	require "osg"
	self:generateWrapping(osg.Node)
	
	self:addAssociate("osg::Node")
	
	self:defineMember{name="doubleValue",defVal=5.3}
	self:defineMember{name="boolValue"}
end

function Class:buildObjectWrapper(wrapper)
	wrapper:addDouble("DoubleValue",5.3)
	wrapper:addBool("BoolValue")
end

return Class
