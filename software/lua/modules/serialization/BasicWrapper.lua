local Class = require("classBuilder"){name="BasicWrapper",bases="base.Object"};

require "osg"
Class:generateWrapping(osgDB.ObjectWrapper)

local SimpleSerializer = require "serialization.SimpleSerializer"

function Class:create(options)	
	--self:info("Creating BasicWrapper for ", options.class)
	local proto = options.proto or require(options.class)();
	local name = options.name or proto:libraryName().."::"..proto:className()
	local associates = "osg::Object " .. options.associates .. " " .. name	
	self:createWrapper(osgDB.ObjectWrapper,proto:getWrapper(),name,associates)
end

function Class:addDouble(name,defValue)
	local ss = SimpleSerializer{type="Double",name=name,defValue=defValue}	
	self:addSerializer(ss:getWrapper())
end

function Class:addBool(name,defValue)
	local ss = SimpleSerializer{type="Bool",name=name,defValue=defValue}	
	self:addSerializer(ss:getWrapper())
end

return Class
