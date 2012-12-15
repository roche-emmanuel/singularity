-- When calling this script externally the caller should provide the following arguments:
-- flavor [optional, default = "win32" ] : Use to specify which flavor of the lua modules should be loaded.
-- sgt_path : the root path of the singularity repository, this is needed to retrieve the modules.
-- xml_path : the folder where the source xml files are located
-- project : the current project name.

flavor = flavor or "win32"
sgt_path = sgt_path:gsub("\\","/")
root_path = sgt_path .. "software/"
dest_path = sgt_path .. "sources/plug_" .. project .. "/"

shared_ext="dll"
if flavor=="linux32" or flavor=="linux64" then
    shared_ext="so"
end

package.cpath = package.cpath..";".. root_path .. "bin/".. flavor .."/modules/?.sgp;".. root_path .. "bin/".. flavor .."/libraries/?.".. shared_ext
package.path = package.path..";".. root_path .. "lua/modules/?.lua;".. root_path .. "lua/libraries/?.lua"

local tm = require "bindings.TypeManager"
tm:registerDeleter("osg::Referenced","osg::ref_ptr<osg::Referenced> refptr = ${1};")
tm:registerExternals(sgt_path .. "sources/plug_core/classes.luna")
tm:registerExternalFunctions(sgt_path .. "sources/plug_core/functions.luna")

local corr = require "bindings.TextCorrector"
corr:addCorrector("type_name","(OSG_EXPORT )","")
corr:addCorrector("type_name","(GL_APIENTRY%s*)","")

local injector = require "bindings.CodeInjector"
injector:addFragment("after_headers","using namespace osg;\nusing namespace osgUtil;\nusing namespace osgDB;\nusing namespace osgText;\nusing namespace osgParticle;\n")

local ReflectionGenerator = require "bindings.LunaReflectionGenerator"

ReflectionGenerator.generate{
	xmlpath=xml_path,
	modName=project,
	luaOpenName=project,
	headers={"plug_common.h"},
	destpath=dest_path,
	ignoreFunctions={
		"iterator",
		"GLTexImage3DProc",
		"_GLUfuncptr",
		"GLU_TESS_CALLBACK",
		"META_",
		"setCalendarTime",
		"getCalendarTime",
		"KdTree::build",
		"LOD::[gs]etCenter",
		"LOD::[gs]etRadius",
		"ProxyNode::[gs]etCenter",
		"ProxyNode::[gs]etRadius",
		"GetValueVisitor",
		"osg::TextureCubeMap::[gs]etExtensions",
		"osg::Texture3D::[gs]etExtensions",
		"osg::Texture2DArray::[gs]etExtensions",
		"ShaderComposer::composeMain",
		"ShaderComposer::addShaderToProgram",
		"resizeGLObjectBuffers",
		"float const %*const",
		"double const %*const",
		"const %*const",
		"Mutex",
		"std::ostream",
		"std::istream",
		"Extensions%(const",
		"lowestCommonDenominator",
		"osg::Texture3D::.-Proc",
		"osg::State::.-List",
		"getUniformBlocks",
		"initOQState",
		"initOQDebugState",
		"QueryGeometry",
		"Functor",

		-- for osgUtil:
		"IncrementalCompileOperation",
		"PrimitiveSetList",
		"IsOperationPermissibleForObjectCallback",
		"HitList",
		"Identifier",
		"PrimList",

		-- for osgDB:
		"objectRead",
		"osgDB::XmlNode::read",
		"ios_base",
		"Exception",
		"getFileNames",
		"DatabaseRevisionList",
		"getPathElements",
		"FILE",
		"readNodeFiles",
		"Proxy",
		"Wrapper",
		"wstring",
		"wchar_t",
		"BEGIN_BRACKET",
		"Thread",

		-- for osgViewer:
		"GraphicsWindow::makeContextCurrentImplementation",
		"GraphicsWindow::isSameKindAs",
		"GraphicsWindowEmbedded::isSameKindAs",
		
		"TextBase::.-osg::ref_ptr", -- to avoid missing link on Luna type osg::ref_ptr< osgText::Font >
		"Text::.-osg::ref_ptr", -- to avoid missing link on Luna type osg::ref_ptr< osgText::Font >
		"NodeAcceptOp", -- to avoid missing link on Luna type osg::ref_ptr< osg::Node >
		
		"osgTerrain", -- ignore terrain stuff for now.
		"StateSetManipulator::clone", -- ignore terrain stuff for now.
	},
	ignoreWrappers={
		"StateSetManipulator::clone",
	},
	ignoreConverters={
		"ScreenIdentifier",
		"MixinVector",
		"RenderInfo",
		"Plane",
		"Matrixd",
		"Matrixf",
	},
	ignoreClasses={
		"osgUtil::CullVisitor::", --DatabaseRequest, ReadQueue, RequestQueue
		"osgUtil::IntersectVisitor::", --ImageRequest, ReadQueue, RequestQueue
		"osgUtil::Optimizer::", --CompareStateAttributes, CompareStateSets
		"osgUtil::SceneGraphBuilder::", --CompareStateAttributes, CompareStateSets
		"osgUtil::Tessellator::", --CompareStateAttributes, CompareStateSets
		"osgUtil::Statistics::PrimitivePair", --CompareStateAttributes, CompareStateSets
		"osg::State::[^D]",
		"Functor",

		"osgDB::DatabasePager::", --DatabaseRequest, ReadQueue, RequestQueue
		"osgDB::ImagePager::", --ImageRequest, ReadQueue, RequestQueue
		"osgDB::SharedStateManager::", --CompareStateAttributes, CompareStateSets
		"Serializer",
		"ControlMap",
		"Input",

		-- for osgGA:
		"osgGA::FirstPersonManipulator::FirstPersonAnimationData",
		"osgGA::GUIEventAdapter::Scrolling",
		"osgGA::GUIEventAdapter::TabletPen",
		"osgGA::StandardManipulator::AnimationData",
		"osgGA::OrbitManipulator::OrbitAnimationData",

		-- for osgText:
		"VectorUInt",
		"osgText::Text3D::GlyphRenderInfo",
		"osgText::TextBase::AutoTransformCache",

		-- for osgViewer:
		"osgViewer::Renderer::ThreadSafeQueue",
		"osgViewer::StatsHandler::UserStatsLine",
		"PixelBufferWin32",
		"GraphicsWindowWin32",
		"GraphicsHandleWin32",
		"WindowData",

		-- for osgParticle:
		"osgParticle::PrecipitationEffect::PrecipitationDrawableSet",	
	},
	ignoreEnumValues={
		"osgUtil::Optimizer::TextureAtlasBuilder::",
		"FileOpResult::",
	},
	ignoreHeaders={"helpers%.h"},
	ignoreClassDeclarations={"SingletonHolder",
		"osg::TemplateArray< osg::Vec2f, osg::Array::Vec2ArrayType, 2, GL_FLOAT >",
		"osg::TemplateArray< osg::Vec3f, osg::Array::Vec3ArrayType, 3, GL_FLOAT >",
		"osg::TemplateArray< osg::Vec4f, osg::Array::Vec4ArrayType, 4, GL_FLOAT >",
		},
	locationPrefixes={
		dest_path.."interface/",
	}
}
