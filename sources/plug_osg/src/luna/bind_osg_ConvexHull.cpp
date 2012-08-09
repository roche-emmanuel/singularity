#include <plug_common.h>

class luna_wrapper_osg_ConvexHull {
public:
	typedef Luna< osg::ConvexHull > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::ConvexHull* ptr= dynamic_cast< osg::ConvexHull* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ConvexHull >::push(L,ptr,false);
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
	// osg::ConvexHull::ConvexHull()
	static osg::ConvexHull* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ConvexHull::ConvexHull() function, expected prototype:\nosg::ConvexHull::ConvexHull()\nClass arguments details:\n");
		}


		return new osg::ConvexHull();
	}

	// osg::ConvexHull::ConvexHull(const osg::ConvexHull & hull, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ConvexHull* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ConvexHull::ConvexHull(const osg::ConvexHull & hull, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ConvexHull::ConvexHull(const osg::ConvexHull & hull, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::ConvexHull* hull_ptr=dynamic_cast< osg::ConvexHull* >(Luna< osg::Referenced >::check(L,1));
		if( !hull_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg hull in osg::ConvexHull::ConvexHull function");
		}
		const osg::ConvexHull & hull=*hull_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ConvexHull::ConvexHull function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::ConvexHull(hull, copyop);
	}

	// Overload binder for osg::ConvexHull::ConvexHull
	static osg::ConvexHull* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ConvexHull, cannot match any of the overloads for function ConvexHull:\n  ConvexHull()\n  ConvexHull(const osg::ConvexHull &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::ConvexHull::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ConvexHull::cloneType() const function, expected prototype:\nosg::Object * osg::ConvexHull::cloneType() const\nClass arguments details:\n");
		}


		osg::ConvexHull* self=dynamic_cast< osg::ConvexHull* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ConvexHull::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ConvexHull::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ConvexHull::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::ConvexHull::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConvexHull::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ConvexHull* self=dynamic_cast< osg::ConvexHull* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ConvexHull::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ConvexHull::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ConvexHull::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ConvexHull::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::ConvexHull* self=dynamic_cast< osg::ConvexHull* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ConvexHull::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ConvexHull::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ConvexHull::libraryName() const function, expected prototype:\nconst char * osg::ConvexHull::libraryName() const\nClass arguments details:\n");
		}


		osg::ConvexHull* self=dynamic_cast< osg::ConvexHull* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ConvexHull::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ConvexHull::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ConvexHull::className() const function, expected prototype:\nconst char * osg::ConvexHull::className() const\nClass arguments details:\n");
		}


		osg::ConvexHull* self=dynamic_cast< osg::ConvexHull* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ConvexHull::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::ConvexHull::accept(osg::ShapeVisitor & )
	static int _bind_accept_overload_1(lua_State *L) {
		if (!_lg_typecheck_accept_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConvexHull::accept(osg::ShapeVisitor & ) function, expected prototype:\nvoid osg::ConvexHull::accept(osg::ShapeVisitor & )\nClass arguments details:\narg 1 ID = 36301858\n");
		}

		osg::ShapeVisitor* _arg1_ptr=(Luna< osg::ShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConvexHull::accept function");
		}
		osg::ShapeVisitor & _arg1=*_arg1_ptr;

		osg::ConvexHull* self=dynamic_cast< osg::ConvexHull* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConvexHull::accept(osg::ShapeVisitor &)");
		}
		self->accept(_arg1);

		return 0;
	}

	// void osg::ConvexHull::accept(osg::ConstShapeVisitor & ) const
	static int _bind_accept_overload_2(lua_State *L) {
		if (!_lg_typecheck_accept_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConvexHull::accept(osg::ConstShapeVisitor & ) const function, expected prototype:\nvoid osg::ConvexHull::accept(osg::ConstShapeVisitor & ) const\nClass arguments details:\narg 1 ID = 45826538\n");
		}

		osg::ConstShapeVisitor* _arg1_ptr=(Luna< osg::ConstShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConvexHull::accept function");
		}
		osg::ConstShapeVisitor & _arg1=*_arg1_ptr;

		osg::ConvexHull* self=dynamic_cast< osg::ConvexHull* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConvexHull::accept(osg::ConstShapeVisitor &) const");
		}
		self->accept(_arg1);

		return 0;
	}

	// Overload binder for osg::ConvexHull::accept
	static int _bind_accept(lua_State *L) {
		if (_lg_typecheck_accept_overload_1(L)) return _bind_accept_overload_1(L);
		if (_lg_typecheck_accept_overload_2(L)) return _bind_accept_overload_2(L);

		luaL_error(L, "error in function accept, cannot match any of the overloads for function accept:\n  accept(osg::ShapeVisitor &)\n  accept(osg::ConstShapeVisitor &)\n");
		return 0;
	}


	// Operator binds:

};

osg::ConvexHull* LunaTraits< osg::ConvexHull >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ConvexHull::_bind_ctor(L);
}

void LunaTraits< osg::ConvexHull >::_bind_dtor(osg::ConvexHull* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ConvexHull >::className[] = "ConvexHull";
const char LunaTraits< osg::ConvexHull >::fullName[] = "osg::ConvexHull";
const char LunaTraits< osg::ConvexHull >::moduleName[] = "osg";
const char* LunaTraits< osg::ConvexHull >::parents[] = {"osg.TriangleMesh", 0};
const int LunaTraits< osg::ConvexHull >::hash = 3714602;
const int LunaTraits< osg::ConvexHull >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ConvexHull >::methods[] = {
	{"cloneType", &luna_wrapper_osg_ConvexHull::_bind_cloneType},
	{"clone", &luna_wrapper_osg_ConvexHull::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_ConvexHull::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_ConvexHull::_bind_libraryName},
	{"className", &luna_wrapper_osg_ConvexHull::_bind_className},
	{"accept", &luna_wrapper_osg_ConvexHull::_bind_accept},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ConvexHull >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ConvexHull::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ConvexHull >::enumValues[] = {
	{0,0}
};

