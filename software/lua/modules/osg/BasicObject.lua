local Class = require("classBuilder"){name="BasicObject",bases="base.Object"};

function Class:initialize(options)	
	local Vector = require "std.Vector"
	self._associates = Vector()
end

function Class:addAssociate(className)
	className = className or (self:libraryName() .. "::" .. self:className())
	self._associates:push_back(className)
end

function Class:registerObjectWrapper()	
	local wrapper = require("serialization.BasicWrapper")()
	wrapper:create{proto=self,associates=self._associates:concat(" ")}
	
	self:buildObjectWrapper(wrapper)
	
	osgDB.Registry.instance():getObjectWrapperManager():addWrapper(wrapper:getWrapper())
	return wrapper
end

function Class:buildObjectWrapper(wrapper)
end

function Class:cloneType()
	self:info("in cloneType")
	return self:getClassOf()():getWrapper()
end

function Class:clone(copyop)
	self:info("in clone")
	return self:getClassOf()():getWrapper()
end

function Class:libraryName()
	self:info("in libraryName")
	return self._LIBRARYNAME_;
end

function Class:className()
	self:info("in className")
	return self._CLASSNAME_;
end

function Class:isSameKindAs(obj)
	self:info("in isSameKingAs")
	return self:isInstanceOf(self:getClassOf(),obj:getTable())
end

return Class
