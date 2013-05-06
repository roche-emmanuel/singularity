local Class = require("classBuilder"){name="LandTestApp",bases="osg.OSGTestApp"};

-- This app is used to test 3D textures injection.

local tools = require "osg.Tools"
local fs = require "base.FileSystem"
local land = require "land"
local utils = require "utils"


function Class:initialize(options)
	options = options or {}
		
	self:createBase{width=1500,height=1500,zoffset=-60.0}
		
	local sb = tools:createSkyBox{
		x_pos="skybox1/right.jpg",
		x_neg="skybox1/left.jpg",
		y_pos="skybox1/front.jpg",
		y_neg="skybox1/back.jpg",
		z_pos="skybox1/top.jpg",
		z_neg="skybox1/bottom.jpg",
	}
	
	self:getRoot():addChild(sb)	

	local geode = self:createTileGeode()
	self:getRoot():addChild(geode)
	
	local ww = 32
	local hh = 32
	local dd = 16
	
	local ss = geode:getOrCreateStateSet()
	local tex;
	
	if false then
		-- add a regular texture to the geode:
		local img = sgt.LandManager.createRGBAImage3D(ww,hh,dd)
		-- local img = tools:loadImage(fs:getRootPath("tests/data/tong.psd.freeimage"))
		tex = tools:createTexture{image=img}		
	end
	
	if true then
		-- add a filled texture to the geode:		
		tex = tools:createTexture{width=ww,height=hh,depth=dd}
		sgt.LandManager.setCurrentContext(0)
		
		if true then
			local img = sgt.LandManager.createRGBAImage3D(ww,hh,dd)
			
			self:info("Setting generated image.")
			sgt.LandManager.setSubImage3D(tex,0,0,0, img, land.TextureFormat.RGBA, land.PixelType.UNSIGNED_BYTE)
			self:info("Image set.")		
		else
			geode:setCullCB(function(node,nv)
				local img = sgt.LandManager.createRGBAImage3D(ww,hh,dd)
				self:info("Setting generated image.")
				sgt.LandManager.setSubImage3D(tex,0,0,0, img, land.TextureFormat.RGBA, land.PixelType.UNSIGNED_BYTE)
				self:info("Image set.")				
			end)
		end		
	end

	self:check(tex,"Invalid texture object.")
	self:check(utils.typeEx(tex)=="osg.Texture3D","Invalid texture type: ",utils.typeEx(tex))
	
	ss:setTextureAttributeAndModes(0,tex);
	self:createTexture3DProgram(ss)
	
	self:home()
end

function Class:createTexture3DProgram(ss)	
	local shman = require "osg.ShaderManager"
	local prog = shman:loadProgram{"display_texture3D",version=120}
	ss:setAttributeAndModes(prog)
	ss:getOrCreateUniform("tex",osg.Uniform.SAMPLER_3D):setInt(0);
end

function Class:createTileGeode(size)
	size = size or 200
	
	local geode = osg.Geode()
	geode:setCullingActive(false)
	
	local geom = osg.Geometry()
	geom:setUseVertexBufferObjects(true)
	geode:addDrawable(geom)
	
	local vertices = osg.Vec3Array()
	vertices:push_back(osg.Vec3f(-size,-size,0.0))
	vertices:push_back(osg.Vec3f(size,-size,0.0))
	vertices:push_back(osg.Vec3f(-size,size,0.0))
	vertices:push_back(osg.Vec3f(size,size,0.0))
	
	geom:setVertexArray(vertices)

	local normals = osg.Vec3Array()
	normals:push_back(osg.Vec3f(0.0,0.0,1.0))
	
	geom:setNormalArray(normals)
	geom:setNormalBinding(osg.Geometry.BIND_OVERALL)
	
	local colors = osg.Vec4Array()
	colors:push_back(osg.Vec4f(1.0,1.0,0.0,1.0))
	
	geom:setColorArray(colors)
	geom:setColorBinding(osg.Geometry.BIND_OVERALL)

	local coords = osg.Vec2Array()
	coords:push_back(osg.Vec2f(0.0,0.0))
	coords:push_back(osg.Vec2f(1.0,0.0))
	coords:push_back(osg.Vec2f(0.0,1.0))
	coords:push_back(osg.Vec2f(1.0,1.0))

	geom:setTexCoordArray(0, coords)
	
	geom:addPrimitiveSet(osg.DrawArrays(osg.PrimitiveSet.TRIANGLE_STRIP,0,4));

	return geode
end

return Class 
