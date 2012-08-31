#include <plug_common.h>

class luna_wrapper_sgt_AnyVector {
public:
	typedef Luna< sgt::AnyVector > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		sgt::AnyVector* ptr= dynamic_cast< sgt::AnyVector* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::AnyVector >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_push_back(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::AnyVector::AnyVector()
	static sgt::AnyVector* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::AnyVector::AnyVector() function, expected prototype:\nsgt::AnyVector::AnyVector()\nClass arguments details:\n");
		}


		return new sgt::AnyVector();
	}


	// Function binds:
	// int sgt::AnyVector::vector_push_back(sgt::AnyVector * vec, lua_Any * dum, lua_State * L)
	static int _bind_push_back(lua_State *L) {
		if (!_lg_typecheck_push_back(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::AnyVector::vector_push_back(sgt::AnyVector * vec, lua_Any * dum, lua_State * L) function, expected prototype:\nint sgt::AnyVector::vector_push_back(sgt::AnyVector * vec, lua_Any * dum, lua_State * L)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		sgt::AnyVector* vec=dynamic_cast< sgt::AnyVector* >(Luna< osg::Referenced >::check(L,1));

		return vector_push_back(vec, NULL, L);
	}

	// int sgt::AnyVector::vector_get(sgt::AnyVector * vec, unsigned int index, lua_State * L)
	static int _bind_get(lua_State *L) {
		if (!_lg_typecheck_get(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::AnyVector::vector_get(sgt::AnyVector * vec, unsigned int index, lua_State * L) function, expected prototype:\nint sgt::AnyVector::vector_get(sgt::AnyVector * vec, unsigned int index, lua_State * L)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		sgt::AnyVector* vec=dynamic_cast< sgt::AnyVector* >(Luna< osg::Referenced >::check(L,1));
		unsigned int index=(unsigned int)lua_tointeger(L,2);

		return vector_get(vec, index, L);
	}


	// Operator binds:

};

sgt::AnyVector* LunaTraits< sgt::AnyVector >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_AnyVector::_bind_ctor(L);
}

void LunaTraits< sgt::AnyVector >::_bind_dtor(sgt::AnyVector* obj) {
	delete obj;
}

const char LunaTraits< sgt::AnyVector >::className[] = "AnyVector";
const char LunaTraits< sgt::AnyVector >::fullName[] = "sgt::AnyVector";
const char LunaTraits< sgt::AnyVector >::moduleName[] = "sgt";
const char* LunaTraits< sgt::AnyVector >::parents[] = {"sgt.Object", 0};
const int LunaTraits< sgt::AnyVector >::hash = 11388484;
const int LunaTraits< sgt::AnyVector >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< sgt::AnyVector >::methods[] = {
	{"push_back", &luna_wrapper_sgt_AnyVector::_bind_push_back},
	{"get", &luna_wrapper_sgt_AnyVector::_bind_get},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::AnyVector >::converters[] = {
	{"osg::Referenced", &luna_wrapper_sgt_AnyVector::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::AnyVector >::enumValues[] = {
	{0,0}
};


