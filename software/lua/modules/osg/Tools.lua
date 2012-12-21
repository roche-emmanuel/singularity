local Class = require("classBuilder"){name="Tools",bases="base.Object"};

local default_quad_vs = [[
varying vec2 coords;

void main() {
    gl_Position = gl_Vertex;
    coords = (gl_Vertex.xy+vec2(1.0,1.0))/2.0;
}	
]]
	
-- Function used to load a model from a file.
function Class:loadModel(filename)
	self:checkString(filename,"Invalid model filename")
	local node = osg.readNodeFile(filename)
	if not node then
		self:warn("Cannot load model from file: ",filename)
		return;
	end
	
	-- The node was loaded properly,
	self:debug2_v("Successfully loaded model from file ", filename)
	return node
end

function Class:loadImage(filename)
	self:checkString(filename,"Invalid image filename")
	local image = osg.readImageFile(filename)
	if not image then
		self:warn("Cannot load image from file: ",filename)
		return;
	end
	
	return image;
end

-- Create a texture from an input image.
function Class:createTexture(options)
	self:check(options.image,"Invalid image for texture creation.");
	
	-- we only support texture 2D for the moment.
	local tex = osg.Texture2D(options.image);
	tex:setWrap(osg.Texture.WRAP_S,osg.Texture.CLAMP_TO_EDGE);
    tex:setWrap(osg.Texture.WRAP_T,osg.Texture.CLAMP_TO_EDGE);
    tex:setWrap(osg.Texture.WRAP_R,osg.Texture.CLAMP_TO_EDGE);
    tex:setFilter(osg.Texture.MIN_FILTER,osg.Texture.LINEAR);
    --tex:setFilter(osg.Texture.MIN_FILTER,osg.Texture.NEAREST);
    tex:setFilter(osg.Texture.MAG_FILTER,osg.Texture.LINEAR);
	
	return tex;
end

-- Create a simple shader program to display a fixed color.
function Class:createColorProgram(options)
	options = options or {}
	
	local color = options.color or osg.Vec4f(0.0,1.0,1.0,1.0);
	local ss = options.stateSet;
	
	local prog = osg.Program();
	
	local vs = osg.Shader(osg.Shader.VERTEX);
	vs:setShaderSource(default_quad_vs);
	
	local fs = osg.Shader(osg.Shader.FRAGMENT);	
	fs:setShaderSource(([[
void main() {
    gl_FragColor = vec4(%f,%f,%f,%f);
}
	]]):format(color:r(),color:g(),color:b(),color:a()));
	
	prog:addShader(vs)
	prog:addShader(fs)	
	
	if ss then
		ss:setAttributeAndModes(prog)
	end
	
	return prog
end

function Class:createTextureProgram(options)
	options = options or {}
	
	local ss = options.stateSet;
	
	local prog = osg.Program();
	
	local vs = osg.Shader(osg.Shader.VERTEX);
	vs:setShaderSource(default_quad_vs);
	
	local fs = osg.Shader(osg.Shader.FRAGMENT);	
	fs:setShaderSource([[
uniform sampler2D tex;	
varying vec2 coords;

void main() {
    vec4 color = texture2DLod(tex,coords,0.0);  
    gl_FragColor = color;
}
	]]);
	
	prog:addShader(vs)
	prog:addShader(fs)	
	
	if ss then
		ss:setAttributeAndModes(prog)
		ss:getOrCreateUniform("tex",osg.Uniform.SAMPLER_2D):setInt(0);
	end
	
	return prog
end

-- Create a screen aligned quad.
-- available options:
-- parent [optional] : parent node.
-- image [optional] : image to be displayed.
function Class:createScreenQuad(options)
	self:debug3("Creating screen quad.");
	
	local geode = osg.Geode()
	if options.parent then
		options.parent:addChild(geode)
	end
	geode:setCullingActive(false);
	
	local geom = osg.Geometry()
	geode:addDrawable(geom);

	local vertices = osg.Vec2Array();
	geom:setVertexArray(vertices);

    vertices:push_back(osg.Vec2f(-1.0,-1.0));
    vertices:push_back(osg.Vec2f(1.0,-1.0));
    vertices:push_back(osg.Vec2f(-1.0,1.0));
    vertices:push_back(osg.Vec2f(1.0,1.0));
	
    local colors = osg.Vec4Array()
    colors:push_back(osg.Vec4f(0.0,0.0,1.0,1.0));
    geom:setColorArray(colors)
    geom:setColorBinding(osg.Geometry.BIND_OVERALL)
	
	geom:addPrimitiveSet(osg.DrawArrays(osg.PrimitiveSet.TRIANGLE_STRIP,0,4));
	
	local ss = geode:getOrCreateStateSet()
	
	local img = options.image
	
	if img then
		local tex=self:createTexture{image=img}
		ss:setTextureAttributeAndModes(0,tex);
		self:createTextureProgram{stateSet=ss,texture=tex}
	else
		self:createColorProgram{stateSet=ss}
	end

	return geode
end

return Class()

