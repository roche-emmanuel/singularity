#include <plug_common.h>

class luna_wrapper_osgGA_MultiTouchTrackballManipulator {
public:
	typedef Luna< osgGA::MultiTouchTrackballManipulator > luna_t;

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
		osgGA::MultiTouchTrackballManipulator* ptr= dynamic_cast< osgGA::MultiTouchTrackballManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::MultiTouchTrackballManipulator >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_handle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgGA::MultiTouchTrackballManipulator::MultiTouchTrackballManipulator(int flags = osgGA::StandardManipulator::DEFAULT_SETTINGS)
	static osgGA::MultiTouchTrackballManipulator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::MultiTouchTrackballManipulator::MultiTouchTrackballManipulator(int flags = osgGA::StandardManipulator::DEFAULT_SETTINGS) function, expected prototype:\nosgGA::MultiTouchTrackballManipulator::MultiTouchTrackballManipulator(int flags = osgGA::StandardManipulator::DEFAULT_SETTINGS)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>0 ? (int)lua_tointeger(L,1) : osgGA::StandardManipulator::DEFAULT_SETTINGS;

		return new osgGA::MultiTouchTrackballManipulator(flags);
	}

	// osgGA::MultiTouchTrackballManipulator::MultiTouchTrackballManipulator(const osgGA::MultiTouchTrackballManipulator & tm, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY)
	static osgGA::MultiTouchTrackballManipulator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::MultiTouchTrackballManipulator::MultiTouchTrackballManipulator(const osgGA::MultiTouchTrackballManipulator & tm, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgGA::MultiTouchTrackballManipulator::MultiTouchTrackballManipulator(const osgGA::MultiTouchTrackballManipulator & tm, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgGA::MultiTouchTrackballManipulator* tm_ptr=dynamic_cast< osgGA::MultiTouchTrackballManipulator* >(Luna< osg::Referenced >::check(L,1));
		if( !tm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tm in osgGA::MultiTouchTrackballManipulator::MultiTouchTrackballManipulator function");
		}
		const osgGA::MultiTouchTrackballManipulator & tm=*tm_ptr;
		const osg::CopyOp* copyOp_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyOp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyOp in osgGA::MultiTouchTrackballManipulator::MultiTouchTrackballManipulator function");
		}
		const osg::CopyOp & copyOp=luatop>1 ? *copyOp_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgGA::MultiTouchTrackballManipulator(tm, copyOp);
	}

	// Overload binder for osgGA::MultiTouchTrackballManipulator::MultiTouchTrackballManipulator
	static osgGA::MultiTouchTrackballManipulator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function MultiTouchTrackballManipulator, cannot match any of the overloads for function MultiTouchTrackballManipulator:\n  MultiTouchTrackballManipulator(int)\n  MultiTouchTrackballManipulator(const osgGA::MultiTouchTrackballManipulator &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgGA::MultiTouchTrackballManipulator::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::MultiTouchTrackballManipulator::cloneType() const function, expected prototype:\nosg::Object * osgGA::MultiTouchTrackballManipulator::cloneType() const\nClass arguments details:\n");
		}


		osgGA::MultiTouchTrackballManipulator* self=dynamic_cast< osgGA::MultiTouchTrackballManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::MultiTouchTrackballManipulator::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgGA::MultiTouchTrackballManipulator::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::MultiTouchTrackballManipulator::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgGA::MultiTouchTrackballManipulator::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::MultiTouchTrackballManipulator::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgGA::MultiTouchTrackballManipulator* self=dynamic_cast< osgGA::MultiTouchTrackballManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::MultiTouchTrackballManipulator::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgGA::MultiTouchTrackballManipulator::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::MultiTouchTrackballManipulator::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgGA::MultiTouchTrackballManipulator::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgGA::MultiTouchTrackballManipulator* self=dynamic_cast< osgGA::MultiTouchTrackballManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::MultiTouchTrackballManipulator::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgGA::MultiTouchTrackballManipulator::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::MultiTouchTrackballManipulator::libraryName() const function, expected prototype:\nconst char * osgGA::MultiTouchTrackballManipulator::libraryName() const\nClass arguments details:\n");
		}


		osgGA::MultiTouchTrackballManipulator* self=dynamic_cast< osgGA::MultiTouchTrackballManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::MultiTouchTrackballManipulator::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgGA::MultiTouchTrackballManipulator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::MultiTouchTrackballManipulator::className() const function, expected prototype:\nconst char * osgGA::MultiTouchTrackballManipulator::className() const\nClass arguments details:\n");
		}


		osgGA::MultiTouchTrackballManipulator* self=dynamic_cast< osgGA::MultiTouchTrackballManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::MultiTouchTrackballManipulator::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgGA::MultiTouchTrackballManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::MultiTouchTrackballManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) function, expected prototype:\nbool osgGA::MultiTouchTrackballManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* ea_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::MultiTouchTrackballManipulator::handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* us_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !us_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg us in osgGA::MultiTouchTrackballManipulator::handle function");
		}
		osgGA::GUIActionAdapter & us=*us_ptr;

		osgGA::MultiTouchTrackballManipulator* self=dynamic_cast< osgGA::MultiTouchTrackballManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::MultiTouchTrackballManipulator::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		bool lret = self->handle(ea, us);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgGA::MultiTouchTrackballManipulator* LunaTraits< osgGA::MultiTouchTrackballManipulator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_ctor(L);
}

void LunaTraits< osgGA::MultiTouchTrackballManipulator >::_bind_dtor(osgGA::MultiTouchTrackballManipulator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::MultiTouchTrackballManipulator >::className[] = "MultiTouchTrackballManipulator";
const char LunaTraits< osgGA::MultiTouchTrackballManipulator >::fullName[] = "osgGA::MultiTouchTrackballManipulator";
const char LunaTraits< osgGA::MultiTouchTrackballManipulator >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::MultiTouchTrackballManipulator >::parents[] = {"osgGA.TrackballManipulator", 0};
const int LunaTraits< osgGA::MultiTouchTrackballManipulator >::hash = 26730151;
const int LunaTraits< osgGA::MultiTouchTrackballManipulator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::MultiTouchTrackballManipulator >::methods[] = {
	{"cloneType", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_cloneType},
	{"clone", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_libraryName},
	{"className", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_className},
	{"handle", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_handle},
	{"__eq", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::MultiTouchTrackballManipulator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::MultiTouchTrackballManipulator >::enumValues[] = {
	{0,0}
};


