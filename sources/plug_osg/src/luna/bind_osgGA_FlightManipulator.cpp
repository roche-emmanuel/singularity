#include <plug_common.h>

class luna_wrapper_osgGA_FlightManipulator {
public:
	typedef Luna< osgGA::FlightManipulator > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Referenced*)");
		}

		osg::Referenced* rhs =(Luna< osg::Referenced >::check(L,2));
		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgGA::FlightManipulator* ptr= dynamic_cast< osgGA::FlightManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::FlightManipulator >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setYawControlMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getYawControlMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_home(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_init(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgGA::FlightManipulator::FlightManipulator(int flags = osgGA::StandardManipulator::UPDATE_MODEL_SIZE | osgGA::StandardManipulator::COMPUTE_HOME_USING_BBOX)
	static osgGA::FlightManipulator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::FlightManipulator::FlightManipulator(int flags = osgGA::StandardManipulator::UPDATE_MODEL_SIZE | osgGA::StandardManipulator::COMPUTE_HOME_USING_BBOX) function, expected prototype:\nosgGA::FlightManipulator::FlightManipulator(int flags = osgGA::StandardManipulator::UPDATE_MODEL_SIZE | osgGA::StandardManipulator::COMPUTE_HOME_USING_BBOX)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>0 ? (int)lua_tointeger(L,1) : osgGA::StandardManipulator::UPDATE_MODEL_SIZE | osgGA::StandardManipulator::COMPUTE_HOME_USING_BBOX;

		return new osgGA::FlightManipulator(flags);
	}

	// osgGA::FlightManipulator::FlightManipulator(const osgGA::FlightManipulator & fpm, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY)
	static osgGA::FlightManipulator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::FlightManipulator::FlightManipulator(const osgGA::FlightManipulator & fpm, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgGA::FlightManipulator::FlightManipulator(const osgGA::FlightManipulator & fpm, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgGA::FlightManipulator* fpm_ptr=dynamic_cast< osgGA::FlightManipulator* >(Luna< osg::Referenced >::check(L,1));
		if( !fpm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fpm in osgGA::FlightManipulator::FlightManipulator function");
		}
		const osgGA::FlightManipulator & fpm=*fpm_ptr;
		const osg::CopyOp* copyOp_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyOp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyOp in osgGA::FlightManipulator::FlightManipulator function");
		}
		const osg::CopyOp & copyOp=luatop>1 ? *copyOp_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgGA::FlightManipulator(fpm, copyOp);
	}

	// Overload binder for osgGA::FlightManipulator::FlightManipulator
	static osgGA::FlightManipulator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function FlightManipulator, cannot match any of the overloads for function FlightManipulator:\n  FlightManipulator(int)\n  FlightManipulator(const osgGA::FlightManipulator &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgGA::FlightManipulator::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::FlightManipulator::cloneType() const function, expected prototype:\nosg::Object * osgGA::FlightManipulator::cloneType() const\nClass arguments details:\n");
		}


		osgGA::FlightManipulator* self=dynamic_cast< osgGA::FlightManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::FlightManipulator::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgGA::FlightManipulator::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::FlightManipulator::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgGA::FlightManipulator::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::FlightManipulator::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgGA::FlightManipulator* self=dynamic_cast< osgGA::FlightManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::FlightManipulator::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgGA::FlightManipulator::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::FlightManipulator::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgGA::FlightManipulator::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgGA::FlightManipulator* self=dynamic_cast< osgGA::FlightManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::FlightManipulator::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgGA::FlightManipulator::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::FlightManipulator::libraryName() const function, expected prototype:\nconst char * osgGA::FlightManipulator::libraryName() const\nClass arguments details:\n");
		}


		osgGA::FlightManipulator* self=dynamic_cast< osgGA::FlightManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::FlightManipulator::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgGA::FlightManipulator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::FlightManipulator::className() const function, expected prototype:\nconst char * osgGA::FlightManipulator::className() const\nClass arguments details:\n");
		}


		osgGA::FlightManipulator* self=dynamic_cast< osgGA::FlightManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::FlightManipulator::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::FlightManipulator::setYawControlMode(osgGA::FlightManipulator::YawControlMode ycm)
	static int _bind_setYawControlMode(lua_State *L) {
		if (!_lg_typecheck_setYawControlMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::FlightManipulator::setYawControlMode(osgGA::FlightManipulator::YawControlMode ycm) function, expected prototype:\nvoid osgGA::FlightManipulator::setYawControlMode(osgGA::FlightManipulator::YawControlMode ycm)\nClass arguments details:\n");
		}

		osgGA::FlightManipulator::YawControlMode ycm=(osgGA::FlightManipulator::YawControlMode)lua_tointeger(L,2);

		osgGA::FlightManipulator* self=dynamic_cast< osgGA::FlightManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::FlightManipulator::setYawControlMode(osgGA::FlightManipulator::YawControlMode)");
		}
		self->setYawControlMode(ycm);

		return 0;
	}

	// osgGA::FlightManipulator::YawControlMode osgGA::FlightManipulator::getYawControlMode() const
	static int _bind_getYawControlMode(lua_State *L) {
		if (!_lg_typecheck_getYawControlMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::FlightManipulator::YawControlMode osgGA::FlightManipulator::getYawControlMode() const function, expected prototype:\nosgGA::FlightManipulator::YawControlMode osgGA::FlightManipulator::getYawControlMode() const\nClass arguments details:\n");
		}


		osgGA::FlightManipulator* self=dynamic_cast< osgGA::FlightManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgGA::FlightManipulator::YawControlMode osgGA::FlightManipulator::getYawControlMode() const");
		}
		osgGA::FlightManipulator::YawControlMode lret = self->getYawControlMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::FlightManipulator::home(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )
	static int _bind_home(lua_State *L) {
		if (!_lg_typecheck_home(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::FlightManipulator::home(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & ) function, expected prototype:\nvoid osgGA::FlightManipulator::home(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::FlightManipulator::home function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::FlightManipulator::home function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::FlightManipulator* self=dynamic_cast< osgGA::FlightManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::FlightManipulator::home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		self->home(_arg1, _arg2);

		return 0;
	}

	// void osgGA::FlightManipulator::init(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )
	static int _bind_init(lua_State *L) {
		if (!_lg_typecheck_init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::FlightManipulator::init(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & ) function, expected prototype:\nvoid osgGA::FlightManipulator::init(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::FlightManipulator::init function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::FlightManipulator::init function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::FlightManipulator* self=dynamic_cast< osgGA::FlightManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::FlightManipulator::init(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		self->init(_arg1, _arg2);

		return 0;
	}

	// void osgGA::FlightManipulator::getUsage(osg::ApplicationUsage & ) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::FlightManipulator::getUsage(osg::ApplicationUsage & ) const function, expected prototype:\nvoid osgGA::FlightManipulator::getUsage(osg::ApplicationUsage & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ApplicationUsage* _arg1_ptr=dynamic_cast< osg::ApplicationUsage* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::FlightManipulator::getUsage function");
		}
		osg::ApplicationUsage & _arg1=*_arg1_ptr;

		osgGA::FlightManipulator* self=dynamic_cast< osgGA::FlightManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::FlightManipulator::getUsage(osg::ApplicationUsage &) const");
		}
		self->getUsage(_arg1);

		return 0;
	}


	// Operator binds:

};

osgGA::FlightManipulator* LunaTraits< osgGA::FlightManipulator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgGA_FlightManipulator::_bind_ctor(L);
}

void LunaTraits< osgGA::FlightManipulator >::_bind_dtor(osgGA::FlightManipulator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::FlightManipulator >::className[] = "FlightManipulator";
const char LunaTraits< osgGA::FlightManipulator >::fullName[] = "osgGA::FlightManipulator";
const char LunaTraits< osgGA::FlightManipulator >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::FlightManipulator >::parents[] = {"osgGA.FirstPersonManipulator", 0};
const int LunaTraits< osgGA::FlightManipulator >::hash = 64008519;
const int LunaTraits< osgGA::FlightManipulator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::FlightManipulator >::methods[] = {
	{"cloneType", &luna_wrapper_osgGA_FlightManipulator::_bind_cloneType},
	{"clone", &luna_wrapper_osgGA_FlightManipulator::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgGA_FlightManipulator::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgGA_FlightManipulator::_bind_libraryName},
	{"className", &luna_wrapper_osgGA_FlightManipulator::_bind_className},
	{"setYawControlMode", &luna_wrapper_osgGA_FlightManipulator::_bind_setYawControlMode},
	{"getYawControlMode", &luna_wrapper_osgGA_FlightManipulator::_bind_getYawControlMode},
	{"home", &luna_wrapper_osgGA_FlightManipulator::_bind_home},
	{"init", &luna_wrapper_osgGA_FlightManipulator::_bind_init},
	{"getUsage", &luna_wrapper_osgGA_FlightManipulator::_bind_getUsage},
	{"__eq", &luna_wrapper_osgGA_FlightManipulator::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::FlightManipulator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_FlightManipulator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::FlightManipulator >::enumValues[] = {
	{"YAW_AUTOMATICALLY_WHEN_BANKED", osgGA::FlightManipulator::YAW_AUTOMATICALLY_WHEN_BANKED},
	{"NO_AUTOMATIC_YAW", osgGA::FlightManipulator::NO_AUTOMATIC_YAW},
	{0,0}
};


