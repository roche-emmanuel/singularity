#include <plug_common.h>

class luna_wrapper_osgGA_CameraManipulator_CoordinateFrameCallback {
public:
	typedef Luna< osgGA::CameraManipulator::CoordinateFrameCallback > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgGA::CameraManipulator::CoordinateFrameCallback* ptr= dynamic_cast< osgGA::CameraManipulator::CoordinateFrameCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::CameraManipulator::CoordinateFrameCallback >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_getCoordinateFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// osg::Matrixd osgGA::CameraManipulator::CoordinateFrameCallback::getCoordinateFrame(const osg::Vec3d & position) const
	static int _bind_getCoordinateFrame(lua_State *L) {
		if (!_lg_typecheck_getCoordinateFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::CameraManipulator::CoordinateFrameCallback::getCoordinateFrame(const osg::Vec3d & position) const function, expected prototype:\nosg::Matrixd osgGA::CameraManipulator::CoordinateFrameCallback::getCoordinateFrame(const osg::Vec3d & position) const\nClass arguments details:\narg 1 ID = 92303202\n");
		}

		const osg::Vec3d* position_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in osgGA::CameraManipulator::CoordinateFrameCallback::getCoordinateFrame function");
		}
		const osg::Vec3d & position=*position_ptr;

		osgGA::CameraManipulator::CoordinateFrameCallback* self=dynamic_cast< osgGA::CameraManipulator::CoordinateFrameCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::CameraManipulator::CoordinateFrameCallback::getCoordinateFrame(const osg::Vec3d &) const");
		}
		osg::Matrixd stack_lret = self->getCoordinateFrame(position);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osgGA::CameraManipulator::CoordinateFrameCallback* LunaTraits< osgGA::CameraManipulator::CoordinateFrameCallback >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// osg::Matrixd osgGA::CameraManipulator::CoordinateFrameCallback::getCoordinateFrame(const osg::Vec3d & position) const

	// Abstract operators:
}

void LunaTraits< osgGA::CameraManipulator::CoordinateFrameCallback >::_bind_dtor(osgGA::CameraManipulator::CoordinateFrameCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::CameraManipulator::CoordinateFrameCallback >::className[] = "CoordinateFrameCallback";
const char LunaTraits< osgGA::CameraManipulator::CoordinateFrameCallback >::fullName[] = "osgGA::CameraManipulator::CoordinateFrameCallback";
const char LunaTraits< osgGA::CameraManipulator::CoordinateFrameCallback >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::CameraManipulator::CoordinateFrameCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgGA::CameraManipulator::CoordinateFrameCallback >::hash = 51007007;
const int LunaTraits< osgGA::CameraManipulator::CoordinateFrameCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::CameraManipulator::CoordinateFrameCallback >::methods[] = {
	{"getCoordinateFrame", &luna_wrapper_osgGA_CameraManipulator_CoordinateFrameCallback::_bind_getCoordinateFrame},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::CameraManipulator::CoordinateFrameCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_CameraManipulator_CoordinateFrameCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::CameraManipulator::CoordinateFrameCallback >::enumValues[] = {
	{0,0}
};


