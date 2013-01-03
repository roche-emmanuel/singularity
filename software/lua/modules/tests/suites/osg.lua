module(..., package.seeall)

local log = require "tracer"
if flavor=="ds411" then
	log:notice("Tests","Ignoring OSG tests on ds411.")
	return
end

local osg = require "osg"

require "extensions.osg"

function test_vectors()
	local vec = osg.Vec4f(1.0,0.0,0.0,1.0);
	log:info("Tests","Generated vector is: (",vec:x(),", ",vec:y(),", ",vec:z(),", ",vec:w(),")")
end

function test_object_equality()
	log:info("Tests","Testing object equality.")
	
	local grp = osg.Group()
	
	local node = osg.Node()
	grp:addChild(node)
	
	local grp2 = node:getParent(0)
	
	assert_equal(grp,grp2,"Group equality test failed.")
	
	assert_equal(true,grp==grp2,"Group equality test 2 failed.")
	
	assert_equal(true,grp~=node,"Group equality test 3 failed.")

	log:info("Tests","Object equality tests done.")
end

function test_function_injection()
	
	log:info("Tests","Testing function injection.")
	
	local vec = osg.Vec4f(1.0,2.0,3.0,0.666)
	local res = vec:helloworld()
	
	assert_equal("string",type(res),"Invalid vec4f helloword result.")
	log:info("Tests","Result from vec4f is: ",res)
end

function test_viewer_deletion()
	log:info("Tests","Starting viewer deletion test.")
	local viewer = osgViewer.Viewer()
	--local viewer = osgViewer.ViewerBase() -- this one is abstract
	
	log:info("Tests","Deleting...")
	viewer:delete()
	
	log:info("Tests","Viewer deletion done.")
end

function test_vec3array()
	log:info("Tests","Creating geode...")
	local geode = osg.Geode()
	
	log:info("Tests","Creating geometry...")
	local geom = osg.Geometry()
	geode:addDrawable(geom);
	
	log:info("Tests","Creating vertex array...")
	local vertices = osg.Vec4Array();
	geom:setVertexArray(vertices);

	log:info("Tests","Adding vertices...")
	vertices:push_back(osg.Vec4f(-1.0,-1.0,0.0,0.0))
	vertices:push_back(osg.Vec4f(-1.0,1.0,0.0,1.0))
	vertices:push_back(osg.Vec4f(1.0,1.0,1.0,1.0))
	vertices:push_back(osg.Vec4f(1.0,-1.0,1.0,0.0));
	
	assert_equal(4,vertices:size(),"Invalid vertex count.")
	
	log:info("Tests","Adding primitive set... TRIANGLE_STRIP=",osg.PrimitiveSet.TRIANGLE_STRIP)
	geom:addPrimitiveSet(osg.DrawArrays(osg.PrimitiveSet.TRIANGLE_STRIP,0,4));
	
	log:info("Tests","Creating program...")
	local prog = osg.Program();
	
	log:info("Tests","Creating vertex shader...")
	local vs = osg.Shader(osg.Shader.VERTEX);
	vs:setShaderSource([[
varying vec2 coords;

void main() {
    gl_Position = gl_Vertex;
    coords = (gl_Vertex.xy+vec2(1.0,1.0))/2.0;
}	
	]]);
	
	log:info("Tests","Creating fragment shader...")
	local fs = osg.Shader(osg.Shader.FRAGMENT);	
	vs:setShaderSource([[
void main() {
    gl_FragColor = vec4(0.0,1.0,0.0,1.0);
}
	]]);
	
	prog:addShader(vs)
	prog:addShader(fs)
	
	log:info("Tests","Creating state set...")
	local ss = geode:getOrCreateStateSet()
	
	log:info("Tests","Adding program to state set...")
	ss:setAttributeAndModes(prog)
	
	log:info("Tests","Vec3Array test done.")
end

function test_protected_function_access()
	log:info("Tests","Testing protection function access.")
	local BasicNode = require "osg.BasicNode"
	local osg = require "osg"
	
	local node = BasicNode()
	local grp = osg.Group()
	node:addParent(grp)
	node:setNumChildrenRequiringUpdateTraversal(1)

	log:info("Tests","Protection function access test done.")
end

function test_diamond_inheritance_handling()
	log:info("Tests","Testing diamond inheritance support.")
	local handler = osgGA.GUIEventHandler()
	
	assert_not_equal(nil,handler,"Invalid GUIEventHandler object.")
	handler:setIgnoreHandledEventsMask(0)

	log:info("Tests","Done testing iamond inheritance support.")
end

