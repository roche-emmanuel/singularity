
-- Vec4f extensions:
osg.Vec4f.helloworld = function(self)
	return "Hello manu! Vec is ".. tostring(self)
end

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

osg.XAXIS = osg.Vec3d(1.0,0.0,0.0)
osg.YAXIS = osg.Vec3d(0.0,1.0,0.0)
osg.ZAXIS = osg.Vec3d(0.0,0.0,1.0)

osg.Vec2 = osg.Vec2f
osg.Vec3 = osg.Vec3f
osg.Vec4 = osg.Vec4f

osg.BoundingSphere = osg.osg_BoundingSphereImpl_osg_Vec3d
