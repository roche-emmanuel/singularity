
-- Matrixd extensions:
osg.Matrixd.__tostring = function(self)
	local str = "{\n"
	str = str .. "  " .. self:op_call(0,0) ..", ".. self:op_call(0,1) ..", ".. self:op_call(0,2)..", ".. self:op_call(0,3) .. ",\n"
	str = str .. "  " .. self:op_call(1,0) ..", ".. self:op_call(1,1) ..", ".. self:op_call(1,2)..", ".. self:op_call(1,3) .. ",\n"
	str = str .. "  " .. self:op_call(2,0) ..", ".. self:op_call(2,1) ..", ".. self:op_call(2,2)..", ".. self:op_call(2,3) .. ",\n"
	str = str .. "  " .. self:op_call(3,0) ..", ".. self:op_call(3,1) ..", ".. self:op_call(3,2)..", ".. self:op_call(3,3) .. "\n}"
	return str
end

osg.Matrixd.toMatrix3 = function(self)
	return osg.Matrix3(self:op_call(0,0),self:op_call(0,1),self:op_call(0,2),
					   self:op_call(1,0),self:op_call(1,1),self:op_call(1,2),
					   self:op_call(2,0),self:op_call(2,1),self:op_call(2,2))
end

osg.Matrixd.getRow3 = function(self,row)
	return osg.Vec3d(self:op_call(row,0),self:op_call(row,1),self:op_call(row,2))
end

osg.Matrixd.getRow = function(self,row)
	return osg.Vec4d(self:op_call(row,0),self:op_call(row,1),self:op_call(row,2),self:op_call(row,3))
end

osg.Matrix3.__tostring = function(self)
	local str = "{\n"
	str = str .. "  " .. self:op_index(0) ..", ".. self:op_index(1) ..", ".. self:op_index(2)..",\n"
	str = str .. "  " .. self:op_index(3) ..", ".. self:op_index(4) ..", ".. self:op_index(5)..",\n"
	str = str .. "  " .. self:op_index(6) ..", ".. self:op_index(7) ..", ".. self:op_index(8).."\n}"
	return str
end

-- Vec4f extensions:
osg.Vec4f.__tostring = function(self)
	return "("..self:x()..", "..self:y()..", "..self:z()..", "..self:w()..")"
end

osg.Vec4f.toColour = function(self)
	local wx = require "wx"
	
	return wx.wxColour(math.floor(self:x()*255.0),
					   math.floor(self:y()*255.0),
					   math.floor(self:z()*255.0),
					   math.floor(self:w()*255.0))
end

-- Vec2d extensions:
osg.Vec2d.__tostring = function(self)
	return "("..self:x()..", "..self:y()..")"
end

-- Vec3d extensions:
osg.Vec3d.__tostring = function(self)
	return "("..self:x()..", "..self:y()..", "..self:z()..")"
end

osg.Vec3d._v = function(self,id)
	return (id==0 and self:x()) or (id==1 and self:y()) or (id==2 and self:z()) 
end

osg.Vec4d.xyz = function(self)
	return osg.Vec3d(self:x(),self:y(),self:z())
end

osg.Vec4f.xyz = function(self)
	return osg.Vec3f(self:x(),self:y(),self:z())
end

osg.XAXIS = osg.Vec3d(1.0,0.0,0.0)
osg.YAXIS = osg.Vec3d(0.0,1.0,0.0)
osg.ZAXIS = osg.Vec3d(0.0,0.0,1.0)

osg.Vec2 = osg.Vec2f
osg.Vec3 = osg.Vec3f
osg.Vec4 = osg.Vec4f

osg.BoundingSphere = osg.osg_BoundingSphereImpl_osg_Vec3d

-- callback extensions:
osg.Node.setUpdateCB = function(self, func)
	local tools = require "osg.Tools"
	local cb = tools:createNodeCallback(func)
	self:setUpdateCallback(cb)
	return cb
end

osg.Node.addUpdateCB = function(self, func)
	local tools = require "osg.Tools"
	local cb = tools:createNodeCallback(func)
	self:addUpdateCallback(cb)
	return cb
end

osg.Node.setCullCB = function(self, func)
	local tools = require "osg.Tools"
	local cb = tools:createNodeCallback(func)
	self:setCullCallback(cb)
	return cb
end

osg.Node.addCullCB = function(self, func)
	local tools = require "osg.Tools"
	local cb = tools:createNodeCallback(func)
	self:addCullCallback(cb)
	return cb
end

osg.Node.setEventCB = function(self, func)
	local tools = require "osg.Tools"
	local cb = tools:createNodeCallback(func)
	self:setEventCallback(cb)
	return cb
end

osg.Node.addEventCB = function(self, func)
	local tools = require "osg.Tools"
	local cb = tools:createNodeCallback(func)
	self:addEventCallback(cb)
	return cb
end

osg.Node.setEvtHandler = function(self, func)
	local tools = require "osg.Tools"
	local cb = tools:createGUIEventHandler(func)
	self:setEventCallback(cb)
	return cb
end

osg.Node.addEvtHandler = function(self, func)
	local tools = require "osg.Tools"
	local cb = tools:createGUIEventHandler(func)
	self:addEventCallback(cb)
	return cb
end

-- update the parents again:
-- local tick = osg.Timer.instance():tick()

-- this is needed to update the methods from osg.Node derived classes.
log:info("Updating method lists for module osg...")
__luna.copyAllParents(osg);
__luna.copyAllParents(osgGA);
__luna.copyAllParents(osgUtil);
__luna.copyAllParents(osgText);
__luna.copyAllParents(osgDB);
__luna.copyAllParents(osgViewer);
__luna.copyAllParents(OpenThreads);
__luna.copyAllParents(osgParticle);

-- local elapsed = osg.Timer.instance():delta_s(tick, osg.Timer.instance():tick())

-- log:info("OSG parents updated in ", elapsed, " secs.")
