#include <plug_common.h>

class luna_wrapper_PHullResult {
public:
	typedef Luna< PHullResult > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,89946505) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(PHullResult*)");
		}

		PHullResult* rhs =(Luna< PHullResult >::check(L,2));
		PHullResult* self=(Luna< PHullResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		PHullResult* self=(Luna< PHullResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("PHullResult");
		
		return luna_dynamicCast(L,converters,"PHullResult",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getMVcount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMIndexCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMFaceCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_Indices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMVcount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMIndexCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMFaceCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMVertices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91544891)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_Indices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,90753422) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// PHullResult::PHullResult()
	static PHullResult* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in PHullResult::PHullResult() function, expected prototype:\nPHullResult::PHullResult()\nClass arguments details:\n");
		}


		return new PHullResult();
	}


	// Function binds:
	// unsigned int PHullResult::mVcount()
	static int _bind_getMVcount(lua_State *L) {
		if (!_lg_typecheck_getMVcount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int PHullResult::mVcount() function, expected prototype:\nunsigned int PHullResult::mVcount()\nClass arguments details:\n");
		}


		PHullResult* self=(Luna< PHullResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int PHullResult::mVcount(). Got : '%s'",typeid(Luna< PHullResult >::check(L,1)).name());
		}
		unsigned int lret = self->mVcount;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int PHullResult::mIndexCount()
	static int _bind_getMIndexCount(lua_State *L) {
		if (!_lg_typecheck_getMIndexCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int PHullResult::mIndexCount() function, expected prototype:\nunsigned int PHullResult::mIndexCount()\nClass arguments details:\n");
		}


		PHullResult* self=(Luna< PHullResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int PHullResult::mIndexCount(). Got : '%s'",typeid(Luna< PHullResult >::check(L,1)).name());
		}
		unsigned int lret = self->mIndexCount;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int PHullResult::mFaceCount()
	static int _bind_getMFaceCount(lua_State *L) {
		if (!_lg_typecheck_getMFaceCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int PHullResult::mFaceCount() function, expected prototype:\nunsigned int PHullResult::mFaceCount()\nClass arguments details:\n");
		}


		PHullResult* self=(Luna< PHullResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int PHullResult::mFaceCount(). Got : '%s'",typeid(Luna< PHullResult >::check(L,1)).name());
		}
		unsigned int lret = self->mFaceCount;
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 * PHullResult::mVertices()
	static int _bind_getMVertices(lua_State *L) {
		if (!_lg_typecheck_getMVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 * PHullResult::mVertices() function, expected prototype:\nbtVector3 * PHullResult::mVertices()\nClass arguments details:\n");
		}


		PHullResult* self=(Luna< PHullResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 * PHullResult::mVertices(). Got : '%s'",typeid(Luna< PHullResult >::check(L,1)).name());
		}
		btVector3 * lret = self->mVertices;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// TUIntArray PHullResult::m_Indices()
	static int _bind_getM_Indices(lua_State *L) {
		if (!_lg_typecheck_getM_Indices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in TUIntArray PHullResult::m_Indices() function, expected prototype:\nTUIntArray PHullResult::m_Indices()\nClass arguments details:\n");
		}


		PHullResult* self=(Luna< PHullResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call TUIntArray PHullResult::m_Indices(). Got : '%s'",typeid(Luna< PHullResult >::check(L,1)).name());
		}
		const TUIntArray* lret = &self->m_Indices;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TUIntArray >::push(L,lret,false);

		return 1;
	}

	// void PHullResult::mVcount(unsigned int value)
	static int _bind_setMVcount(lua_State *L) {
		if (!_lg_typecheck_setMVcount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void PHullResult::mVcount(unsigned int value) function, expected prototype:\nvoid PHullResult::mVcount(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		PHullResult* self=(Luna< PHullResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void PHullResult::mVcount(unsigned int). Got : '%s'",typeid(Luna< PHullResult >::check(L,1)).name());
		}
		self->mVcount = value;

		return 0;
	}

	// void PHullResult::mIndexCount(unsigned int value)
	static int _bind_setMIndexCount(lua_State *L) {
		if (!_lg_typecheck_setMIndexCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void PHullResult::mIndexCount(unsigned int value) function, expected prototype:\nvoid PHullResult::mIndexCount(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		PHullResult* self=(Luna< PHullResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void PHullResult::mIndexCount(unsigned int). Got : '%s'",typeid(Luna< PHullResult >::check(L,1)).name());
		}
		self->mIndexCount = value;

		return 0;
	}

	// void PHullResult::mFaceCount(unsigned int value)
	static int _bind_setMFaceCount(lua_State *L) {
		if (!_lg_typecheck_setMFaceCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void PHullResult::mFaceCount(unsigned int value) function, expected prototype:\nvoid PHullResult::mFaceCount(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		PHullResult* self=(Luna< PHullResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void PHullResult::mFaceCount(unsigned int). Got : '%s'",typeid(Luna< PHullResult >::check(L,1)).name());
		}
		self->mFaceCount = value;

		return 0;
	}

	// void PHullResult::mVertices(btVector3 * value)
	static int _bind_setMVertices(lua_State *L) {
		if (!_lg_typecheck_setMVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void PHullResult::mVertices(btVector3 * value) function, expected prototype:\nvoid PHullResult::mVertices(btVector3 * value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value=(Luna< btVector3 >::check(L,2));

		PHullResult* self=(Luna< PHullResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void PHullResult::mVertices(btVector3 *). Got : '%s'",typeid(Luna< PHullResult >::check(L,1)).name());
		}
		self->mVertices = value;

		return 0;
	}

	// void PHullResult::m_Indices(TUIntArray value)
	static int _bind_setM_Indices(lua_State *L) {
		if (!_lg_typecheck_setM_Indices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void PHullResult::m_Indices(TUIntArray value) function, expected prototype:\nvoid PHullResult::m_Indices(TUIntArray value)\nClass arguments details:\narg 1 ID = 91893113\n");
		}

		TUIntArray* value_ptr=(Luna< btAlignedObjectArray< unsigned int > >::checkSubType< TUIntArray >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in PHullResult::m_Indices function");
		}
		TUIntArray value=*value_ptr;

		PHullResult* self=(Luna< PHullResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void PHullResult::m_Indices(TUIntArray). Got : '%s'",typeid(Luna< PHullResult >::check(L,1)).name());
		}
		self->m_Indices = value;

		return 0;
	}


	// Operator binds:

};

PHullResult* LunaTraits< PHullResult >::_bind_ctor(lua_State *L) {
	return luna_wrapper_PHullResult::_bind_ctor(L);
}

void LunaTraits< PHullResult >::_bind_dtor(PHullResult* obj) {
	delete obj;
}

const char LunaTraits< PHullResult >::className[] = "PHullResult";
const char LunaTraits< PHullResult >::fullName[] = "PHullResult";
const char LunaTraits< PHullResult >::moduleName[] = "bullet";
const char* LunaTraits< PHullResult >::parents[] = {0};
const int LunaTraits< PHullResult >::hash = 89946505;
const int LunaTraits< PHullResult >::uniqueIDs[] = {89946505,0};

luna_RegType LunaTraits< PHullResult >::methods[] = {
	{"getMVcount", &luna_wrapper_PHullResult::_bind_getMVcount},
	{"getMIndexCount", &luna_wrapper_PHullResult::_bind_getMIndexCount},
	{"getMFaceCount", &luna_wrapper_PHullResult::_bind_getMFaceCount},
	{"getMVertices", &luna_wrapper_PHullResult::_bind_getMVertices},
	{"getM_Indices", &luna_wrapper_PHullResult::_bind_getM_Indices},
	{"setMVcount", &luna_wrapper_PHullResult::_bind_setMVcount},
	{"setMIndexCount", &luna_wrapper_PHullResult::_bind_setMIndexCount},
	{"setMFaceCount", &luna_wrapper_PHullResult::_bind_setMFaceCount},
	{"setMVertices", &luna_wrapper_PHullResult::_bind_setMVertices},
	{"setM_Indices", &luna_wrapper_PHullResult::_bind_setM_Indices},
	{"dynCast", &luna_wrapper_PHullResult::_bind_dynCast},
	{"__eq", &luna_wrapper_PHullResult::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< PHullResult >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< PHullResult >::enumValues[] = {
	{0,0}
};


