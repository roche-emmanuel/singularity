#include <plug_common.h>

class luna_wrapper_sgt_Object {
public:
	typedef Luna< sgt::Object > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		sgt::Object* ptr= dynamic_cast< sgt::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::Object >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58481028)) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::Object::Object()
	static sgt::Object* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::Object::Object() function, expected prototype:\nsgt::Object::Object()\nClass arguments details:\n");
		}


		return new sgt::Object();
	}

	// sgt::Object::Object(const sgt::Object & rhs)
	static sgt::Object* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::Object::Object(const sgt::Object & rhs) function, expected prototype:\nsgt::Object::Object(const sgt::Object & rhs)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const sgt::Object* rhs_ptr=dynamic_cast< sgt::Object* >(Luna< osg::Referenced >::check(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in sgt::Object::Object function");
		}
		const sgt::Object & rhs=*rhs_ptr;

		return new sgt::Object(rhs);
	}

	// sgt::Object::Object(const sgt::Object & rhs, const osg::CopyOp & copyop)
	static sgt::Object* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::Object::Object(const sgt::Object & rhs, const osg::CopyOp & copyop) function, expected prototype:\nsgt::Object::Object(const sgt::Object & rhs, const osg::CopyOp & copyop)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		const sgt::Object* rhs_ptr=dynamic_cast< sgt::Object* >(Luna< osg::Referenced >::check(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in sgt::Object::Object function");
		}
		const sgt::Object & rhs=*rhs_ptr;
		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in sgt::Object::Object function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		return new sgt::Object(rhs, copyop);
	}

	// Overload binder for sgt::Object::Object
	static sgt::Object* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function Object, cannot match any of the overloads for function Object:\n  Object()\n  Object(const sgt::Object &)\n  Object(const sgt::Object &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * sgt::Object::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * sgt::Object::cloneType() const function, expected prototype:\nosg::Object * sgt::Object::cloneType() const\nClass arguments details:\n");
		}


		sgt::Object* self=dynamic_cast< sgt::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * sgt::Object::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * sgt::Object::clone() const
	static int _bind_clone_overload_1(lua_State *L) {
		if (!_lg_typecheck_clone_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * sgt::Object::clone() const function, expected prototype:\nosg::Object * sgt::Object::clone() const\nClass arguments details:\n");
		}


		sgt::Object* self=dynamic_cast< sgt::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * sgt::Object::clone() const");
		}
		osg::Object * lret = self->clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * sgt::Object::clone(const osg::CopyOp & copyop) const
	static int _bind_clone_overload_2(lua_State *L) {
		if (!_lg_typecheck_clone_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * sgt::Object::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * sgt::Object::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in sgt::Object::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		sgt::Object* self=dynamic_cast< sgt::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * sgt::Object::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// Overload binder for sgt::Object::clone
	static int _bind_clone(lua_State *L) {
		if (_lg_typecheck_clone_overload_1(L)) return _bind_clone_overload_1(L);
		if (_lg_typecheck_clone_overload_2(L)) return _bind_clone_overload_2(L);

		luaL_error(L, "error in function clone, cannot match any of the overloads for function clone:\n  clone()\n  clone(const osg::CopyOp &)\n");
		return 0;
	}

	// bool sgt::Object::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::Object::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool sgt::Object::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 58481028\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		sgt::Object* self=dynamic_cast< sgt::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::Object::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * sgt::Object::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * sgt::Object::libraryName() const function, expected prototype:\nconst char * sgt::Object::libraryName() const\nClass arguments details:\n");
		}


		sgt::Object* self=dynamic_cast< sgt::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * sgt::Object::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * sgt::Object::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * sgt::Object::className() const function, expected prototype:\nconst char * sgt::Object::className() const\nClass arguments details:\n");
		}


		sgt::Object* self=dynamic_cast< sgt::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * sgt::Object::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

sgt::Object* LunaTraits< sgt::Object >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_Object::_bind_ctor(L);
}

void LunaTraits< sgt::Object >::_bind_dtor(sgt::Object* obj) {
	delete obj;
}

const char LunaTraits< sgt::Object >::className[] = "Object";
const char LunaTraits< sgt::Object >::fullName[] = "sgt::Object";
const char LunaTraits< sgt::Object >::moduleName[] = "sgt";
const char* LunaTraits< sgt::Object >::parents[] = {"osg.Object", 0};
const int LunaTraits< sgt::Object >::hash = 44367388;
const int LunaTraits< sgt::Object >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< sgt::Object >::methods[] = {
	{"cloneType", &luna_wrapper_sgt_Object::_bind_cloneType},
	{"clone", &luna_wrapper_sgt_Object::_bind_clone},
	{"isSameKindAs", &luna_wrapper_sgt_Object::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_sgt_Object::_bind_libraryName},
	{"className", &luna_wrapper_sgt_Object::_bind_className},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::Object >::converters[] = {
	{"osg::Referenced", &luna_wrapper_sgt_Object::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::Object >::enumValues[] = {
	{0,0}
};


