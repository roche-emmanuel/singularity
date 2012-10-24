
local osg = require "osg"
local wx = require "wx"

-- Vec4f extensions:
osg.Vec4f.helloworld = function(self)
	return "Hello manu! Vec is ".. tostring(self)
end

osg.Vec4f.__tostring = function(self)
	return "("..self:x()..", "..self:y()..", "..self:z()..", "..self:w()..")"
end

osg.Vec4f.toColour = function(self)
	return wx.wxColour(math.floor(self:x()*255.0),
					   math.floor(self:y()*255.0),
					   math.floor(self:z()*255.0),
					   math.floor(self:w()*255.0))
end

-- Vec3d extensions:
osg.Vec3d.__tostring = function(self)
	return "("..self:x()..", "..self:y()..", "..self:z()..")"
end

osg.Vec3d._v = function(self,id)
	return (id==0 and self:x()) or (id==1 and self:y()) or (id==2 and self:z()) 
end