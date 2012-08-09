#include <plug_common.h>

class luna_wrapper_osg_InfinitePlane {
public:
	typedef Luna< osg::InfinitePlane > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::InfinitePlane* ptr= dynamic_cast< osg::InfinitePlane* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::InfinitePlane >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

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

	inline static bool _lg_typecheck_accept_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,36301858) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_accept_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45826538) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::InfinitePlane::InfinitePlane()
	static osg::InfinitePlane* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::InfinitePlane::InfinitePlane() function, expected prototype:\nosg::InfinitePlane::InfinitePlane()\nClass arguments details:\n");
		}


		return new osg::InfinitePlane();
	}

	// osg::InfinitePlane::InfinitePlane(const osg::InfinitePlane & plane, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::InfinitePlane* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::InfinitePlane::InfinitePlane(const osg::InfinitePlane & plane, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::InfinitePlane::InfinitePlane(const osg::InfinitePlane & plane, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::InfinitePlane* plane_ptr=dynamic_cast< osg::InfinitePlane* >(Luna< osg::Referenced >::check(L,1));
		if( !plane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg plane in osg::InfinitePlane::InfinitePlane function");
		}
		const osg::InfinitePlane & plane=*plane_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::InfinitePlane::InfinitePlane function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::InfinitePlane(plane, copyop);
	}

	// Overload binder for osg::InfinitePlane::InfinitePlane
	static osg::InfinitePlane* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function InfinitePlane, cannot match any of the overloads for function InfinitePlane:\n  InfinitePlane()\n  InfinitePlane(const osg::InfinitePlane &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::InfinitePlane::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::InfinitePlane::cloneType() const function, expected prototype:\nosg::Object * osg::InfinitePlane::cloneType() const\nClass arguments details:\n");
		}


		osg::InfinitePlane* self=dynamic_cast< osg::InfinitePlane* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::InfinitePlane::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::InfinitePlane::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::InfinitePlane::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::InfinitePlane::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::InfinitePlane::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::InfinitePlane* self=dynamic_cast< osg::InfinitePlane* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::InfinitePlane::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::InfinitePlane::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::InfinitePlane::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::InfinitePlane::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::InfinitePlane* self=dynamic_cast< osg::InfinitePlane* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::InfinitePlane::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::InfinitePlane::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::InfinitePlane::libraryName() const function, expected prototype:\nconst char * osg::InfinitePlane::libraryName() const\nClass arguments details:\n");
		}


		osg::InfinitePlane* self=dynamic_cast< osg::InfinitePlane* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::InfinitePlane::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::InfinitePlane::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::InfinitePlane::className() const function, expected prototype:\nconst char * osg::InfinitePlane::className() const\nClass arguments details:\n");
		}


		osg::InfinitePlane* self=dynamic_cast< osg::InfinitePlane* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::InfinitePlane::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::InfinitePlane::accept(osg::ShapeVisitor & )
	static int _bind_accept_overload_1(lua_State *L) {
		if (!_lg_typecheck_accept_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::InfinitePlane::accept(osg::ShapeVisitor & ) function, expected prototype:\nvoid osg::InfinitePlane::accept(osg::ShapeVisitor & )\nClass arguments details:\narg 1 ID = 36301858\n");
		}

		osg::ShapeVisitor* _arg1_ptr=(Luna< osg::ShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::InfinitePlane::accept function");
		}
		osg::ShapeVisitor & _arg1=*_arg1_ptr;

		osg::InfinitePlane* self=dynamic_cast< osg::InfinitePlane* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::InfinitePlane::accept(osg::ShapeVisitor &)");
		}
		self->accept(_arg1);

		return 0;
	}

	// void osg::InfinitePlane::accept(osg::ConstShapeVisitor & ) const
	static int _bind_accept_overload_2(lua_State *L) {
		if (!_lg_typecheck_accept_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::InfinitePlane::accept(osg::ConstShapeVisitor & ) const function, expected prototype:\nvoid osg::InfinitePlane::accept(osg::ConstShapeVisitor & ) const\nClass arguments details:\narg 1 ID = 45826538\n");
		}

		osg::ConstShapeVisitor* _arg1_ptr=(Luna< osg::ConstShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::InfinitePlane::accept function");
		}
		osg::ConstShapeVisitor & _arg1=*_arg1_ptr;

		osg::InfinitePlane* self=dynamic_cast< osg::InfinitePlane* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::InfinitePlane::accept(osg::ConstShapeVisitor &) const");
		}
		self->accept(_arg1);

		return 0;
	}

	// Overload binder for osg::InfinitePlane::accept
	static int _bind_accept(lua_State *L) {
		if (_lg_typecheck_accept_overload_1(L)) return _bind_accept_overload_1(L);
		if (_lg_typecheck_accept_overload_2(L)) return _bind_accept_overload_2(L);

		luaL_error(L, "error in function accept, cannot match any of the overloads for function accept:\n  accept(osg::ShapeVisitor &)\n  accept(osg::ConstShapeVisitor &)\n");
		return 0;
	}


	// Operator binds:

};

osg::InfinitePlane* LunaTraits< osg::InfinitePlane >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_InfinitePlane::_bind_ctor(L);
}

void LunaTraits< osg::InfinitePlane >::_bind_dtor(osg::InfinitePlane* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::InfinitePlane >::className[] = "InfinitePlane";
const char LunaTraits< osg::InfinitePlane >::fullName[] = "osg::InfinitePlane";
const char LunaTraits< osg::InfinitePlane >::moduleName[] = "osg";
const char* LunaTraits< osg::InfinitePlane >::parents[] = {"osg.Shape", "osg.Plane", 0};
const int LunaTraits< osg::InfinitePlane >::hash = 67556211;
const int LunaTraits< osg::InfinitePlane >::uniqueIDs[] = {50169651, 86970521,0};

luna_RegType LunaTraits< osg::InfinitePlane >::methods[] = {
	{"cloneType", &luna_wrapper_osg_InfinitePlane::_bind_cloneType},
	{"clone", &luna_wrapper_osg_InfinitePlane::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_InfinitePlane::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_InfinitePlane::_bind_libraryName},
	{"className", &luna_wrapper_osg_InfinitePlane::_bind_className},
	{"accept", &luna_wrapper_osg_InfinitePlane::_bind_accept},
	{0,0}
};

luna_ConverterType LunaTraits< osg::InfinitePlane >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_InfinitePlane::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::InfinitePlane >::enumValues[] = {
	{0,0}
};

