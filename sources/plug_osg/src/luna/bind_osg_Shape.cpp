#include <plug_common.h>

class luna_wrapper_osg_Shape {
public:
	typedef Luna< osg::Shape > luna_t;

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
		osg::Shape* ptr= dynamic_cast< osg::Shape* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Shape >::push(L,ptr,false);
		return 1;
	};


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

	// Function binds:
	// osg::Object * osg::Shape::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Shape::cloneType() const function, expected prototype:\nosg::Object * osg::Shape::cloneType() const\nClass arguments details:\n");
		}


		osg::Shape* self=dynamic_cast< osg::Shape* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Shape::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Shape::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Shape::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::Shape::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Shape::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Shape* self=dynamic_cast< osg::Shape* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Shape::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Shape::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Shape::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Shape::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::Shape* self=dynamic_cast< osg::Shape* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Shape::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Shape::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Shape::libraryName() const function, expected prototype:\nconst char * osg::Shape::libraryName() const\nClass arguments details:\n");
		}


		osg::Shape* self=dynamic_cast< osg::Shape* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Shape::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Shape::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Shape::className() const function, expected prototype:\nconst char * osg::Shape::className() const\nClass arguments details:\n");
		}


		osg::Shape* self=dynamic_cast< osg::Shape* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Shape::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Shape::accept(osg::ShapeVisitor & )
	static int _bind_accept_overload_1(lua_State *L) {
		if (!_lg_typecheck_accept_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Shape::accept(osg::ShapeVisitor & ) function, expected prototype:\nvoid osg::Shape::accept(osg::ShapeVisitor & )\nClass arguments details:\narg 1 ID = 36301858\n");
		}

		osg::ShapeVisitor* _arg1_ptr=(Luna< osg::ShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Shape::accept function");
		}
		osg::ShapeVisitor & _arg1=*_arg1_ptr;

		osg::Shape* self=dynamic_cast< osg::Shape* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Shape::accept(osg::ShapeVisitor &)");
		}
		self->accept(_arg1);

		return 0;
	}

	// void osg::Shape::accept(osg::ConstShapeVisitor & ) const
	static int _bind_accept_overload_2(lua_State *L) {
		if (!_lg_typecheck_accept_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Shape::accept(osg::ConstShapeVisitor & ) const function, expected prototype:\nvoid osg::Shape::accept(osg::ConstShapeVisitor & ) const\nClass arguments details:\narg 1 ID = 45826538\n");
		}

		osg::ConstShapeVisitor* _arg1_ptr=(Luna< osg::ConstShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Shape::accept function");
		}
		osg::ConstShapeVisitor & _arg1=*_arg1_ptr;

		osg::Shape* self=dynamic_cast< osg::Shape* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Shape::accept(osg::ConstShapeVisitor &) const");
		}
		self->accept(_arg1);

		return 0;
	}

	// Overload binder for osg::Shape::accept
	static int _bind_accept(lua_State *L) {
		if (_lg_typecheck_accept_overload_1(L)) return _bind_accept_overload_1(L);
		if (_lg_typecheck_accept_overload_2(L)) return _bind_accept_overload_2(L);

		luaL_error(L, "error in function accept, cannot match any of the overloads for function accept:\n  accept(osg::ShapeVisitor &)\n  accept(osg::ConstShapeVisitor &)\n");
		return 0;
	}


	// Operator binds:

};

osg::Shape* LunaTraits< osg::Shape >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// osg::Object * osg::Shape::cloneType() const
	// osg::Object * osg::Shape::clone(const osg::CopyOp & ) const
	// void osg::Shape::accept(osg::ShapeVisitor & )
	// void osg::Shape::accept(osg::ConstShapeVisitor & ) const
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & ) const

	// Abstract operators:
}

void LunaTraits< osg::Shape >::_bind_dtor(osg::Shape* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Shape >::className[] = "Shape";
const char LunaTraits< osg::Shape >::fullName[] = "osg::Shape";
const char LunaTraits< osg::Shape >::moduleName[] = "osg";
const char* LunaTraits< osg::Shape >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::Shape >::hash = 89621982;
const int LunaTraits< osg::Shape >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Shape >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Shape::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Shape::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Shape::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Shape::_bind_libraryName},
	{"className", &luna_wrapper_osg_Shape::_bind_className},
	{"accept", &luna_wrapper_osg_Shape::_bind_accept},
	{"__eq", &luna_wrapper_osg_Shape::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Shape >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Shape::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Shape >::enumValues[] = {
	{0,0}
};


