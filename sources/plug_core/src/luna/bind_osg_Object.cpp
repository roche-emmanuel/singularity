#include <plug_common.h>

class luna_wrapper_osg_Object {
public:
	typedef Luna< osg::Object > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::Object* ptr= dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Object >::push(L,ptr,false);
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

	// Function binds:
	// osg::Object * osg::Object::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Object::cloneType() const function, expected prototype:\nosg::Object * osg::Object::cloneType() const\nClass arguments details:\n");
		}


		osg::Object* self=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Object::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Object::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Object::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::Object::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Object::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Object* self=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Object::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// const char * osg::Object::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Object::libraryName() const function, expected prototype:\nconst char * osg::Object::libraryName() const\nClass arguments details:\n");
		}


		osg::Object* self=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Object::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Object::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Object::className() const function, expected prototype:\nconst char * osg::Object::className() const\nClass arguments details:\n");
		}


		osg::Object* self=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Object::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::Object* LunaTraits< osg::Object >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & ) const
	// const char * osg::Object::libraryName() const
	// const char * osg::Object::className() const

	// Abstract operators:
}

void LunaTraits< osg::Object >::_bind_dtor(osg::Object* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::Object >::className[] = "Object";
const char LunaTraits< osg::Object >::fullName[] = "osg::Object";
const char LunaTraits< osg::Object >::moduleName[] = "core";
const char* LunaTraits< osg::Object >::parents[] = {"core.Referenced", 0};
const int LunaTraits< osg::Object >::hash = 58481028;
const int LunaTraits< osg::Object >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Object >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Object::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Object::_bind_clone},
	{"libraryName", &luna_wrapper_osg_Object::_bind_libraryName},
	{"className", &luna_wrapper_osg_Object::_bind_className},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Object >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Object::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Object >::enumValues[] = {
	{0,0}
};


