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
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(PHullResult*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		PHullResult* rhs =(Luna< PHullResult >::check(L,2));
		PHullResult* self=(Luna< PHullResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		PHullResult* self= (PHullResult*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< PHullResult >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,89946505) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< PHullResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
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
	inline static bool _lg_typecheck_getVcount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIndexCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFaceCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIndices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVcount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIndexCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFaceCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91544891)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIndices(lua_State *L) {
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
			luaL_error(L, "luna typecheck failed in PHullResult::PHullResult() function, expected prototype:\nPHullResult::PHullResult()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new PHullResult();
	}


	// Function binds:
	// unsigned int PHullResult::mVcount()
	static int _bind_getVcount(lua_State *L) {
		if (!_lg_typecheck_getVcount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int PHullResult::mVcount() function, expected prototype:\nunsigned int PHullResult::mVcount()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		PHullResult* self=(Luna< PHullResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int PHullResult::mVcount(). Got : '%s'\n%s",typeid(Luna< PHullResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->mVcount;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int PHullResult::mIndexCount()
	static int _bind_getIndexCount(lua_State *L) {
		if (!_lg_typecheck_getIndexCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int PHullResult::mIndexCount() function, expected prototype:\nunsigned int PHullResult::mIndexCount()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		PHullResult* self=(Luna< PHullResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int PHullResult::mIndexCount(). Got : '%s'\n%s",typeid(Luna< PHullResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->mIndexCount;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int PHullResult::mFaceCount()
	static int _bind_getFaceCount(lua_State *L) {
		if (!_lg_typecheck_getFaceCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int PHullResult::mFaceCount() function, expected prototype:\nunsigned int PHullResult::mFaceCount()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		PHullResult* self=(Luna< PHullResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int PHullResult::mFaceCount(). Got : '%s'\n%s",typeid(Luna< PHullResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->mFaceCount;
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 * PHullResult::mVertices()
	static int _bind_getVertices(lua_State *L) {
		if (!_lg_typecheck_getVertices(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 * PHullResult::mVertices() function, expected prototype:\nbtVector3 * PHullResult::mVertices()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		PHullResult* self=(Luna< PHullResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 * PHullResult::mVertices(). Got : '%s'\n%s",typeid(Luna< PHullResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 * lret = self->mVertices;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// TUIntArray PHullResult::m_Indices()
	static int _bind_getIndices(lua_State *L) {
		if (!_lg_typecheck_getIndices(L)) {
			luaL_error(L, "luna typecheck failed in TUIntArray PHullResult::m_Indices() function, expected prototype:\nTUIntArray PHullResult::m_Indices()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		PHullResult* self=(Luna< PHullResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call TUIntArray PHullResult::m_Indices(). Got : '%s'\n%s",typeid(Luna< PHullResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TUIntArray* lret = &self->m_Indices;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TUIntArray >::push(L,lret,false);

		return 1;
	}

	// void PHullResult::mVcount(unsigned int value)
	static int _bind_setVcount(lua_State *L) {
		if (!_lg_typecheck_setVcount(L)) {
			luaL_error(L, "luna typecheck failed in void PHullResult::mVcount(unsigned int value) function, expected prototype:\nvoid PHullResult::mVcount(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		PHullResult* self=(Luna< PHullResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void PHullResult::mVcount(unsigned int). Got : '%s'\n%s",typeid(Luna< PHullResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mVcount = value;

		return 0;
	}

	// void PHullResult::mIndexCount(unsigned int value)
	static int _bind_setIndexCount(lua_State *L) {
		if (!_lg_typecheck_setIndexCount(L)) {
			luaL_error(L, "luna typecheck failed in void PHullResult::mIndexCount(unsigned int value) function, expected prototype:\nvoid PHullResult::mIndexCount(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		PHullResult* self=(Luna< PHullResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void PHullResult::mIndexCount(unsigned int). Got : '%s'\n%s",typeid(Luna< PHullResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mIndexCount = value;

		return 0;
	}

	// void PHullResult::mFaceCount(unsigned int value)
	static int _bind_setFaceCount(lua_State *L) {
		if (!_lg_typecheck_setFaceCount(L)) {
			luaL_error(L, "luna typecheck failed in void PHullResult::mFaceCount(unsigned int value) function, expected prototype:\nvoid PHullResult::mFaceCount(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		PHullResult* self=(Luna< PHullResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void PHullResult::mFaceCount(unsigned int). Got : '%s'\n%s",typeid(Luna< PHullResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mFaceCount = value;

		return 0;
	}

	// void PHullResult::mVertices(btVector3 * value)
	static int _bind_setVertices(lua_State *L) {
		if (!_lg_typecheck_setVertices(L)) {
			luaL_error(L, "luna typecheck failed in void PHullResult::mVertices(btVector3 * value) function, expected prototype:\nvoid PHullResult::mVertices(btVector3 * value)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* value=(Luna< btVector3 >::check(L,2));

		PHullResult* self=(Luna< PHullResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void PHullResult::mVertices(btVector3 *). Got : '%s'\n%s",typeid(Luna< PHullResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mVertices = value;

		return 0;
	}

	// void PHullResult::m_Indices(TUIntArray value)
	static int _bind_setIndices(lua_State *L) {
		if (!_lg_typecheck_setIndices(L)) {
			luaL_error(L, "luna typecheck failed in void PHullResult::m_Indices(TUIntArray value) function, expected prototype:\nvoid PHullResult::m_Indices(TUIntArray value)\nClass arguments details:\narg 1 ID = 91893113\n\n%s",luna_dumpStack(L).c_str());
		}

		TUIntArray* value_ptr=(Luna< btAlignedObjectArray< unsigned int > >::checkSubType< TUIntArray >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in PHullResult::m_Indices function");
		}
		TUIntArray value=*value_ptr;

		PHullResult* self=(Luna< PHullResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void PHullResult::m_Indices(TUIntArray). Got : '%s'\n%s",typeid(Luna< PHullResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
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
	{"getVcount", &luna_wrapper_PHullResult::_bind_getVcount},
	{"getIndexCount", &luna_wrapper_PHullResult::_bind_getIndexCount},
	{"getFaceCount", &luna_wrapper_PHullResult::_bind_getFaceCount},
	{"getVertices", &luna_wrapper_PHullResult::_bind_getVertices},
	{"getIndices", &luna_wrapper_PHullResult::_bind_getIndices},
	{"setVcount", &luna_wrapper_PHullResult::_bind_setVcount},
	{"setIndexCount", &luna_wrapper_PHullResult::_bind_setIndexCount},
	{"setFaceCount", &luna_wrapper_PHullResult::_bind_setFaceCount},
	{"setVertices", &luna_wrapper_PHullResult::_bind_setVertices},
	{"setIndices", &luna_wrapper_PHullResult::_bind_setIndices},
	{"dynCast", &luna_wrapper_PHullResult::_bind_dynCast},
	{"__eq", &luna_wrapper_PHullResult::_bind___eq},
	{"fromVoid", &luna_wrapper_PHullResult::_bind_fromVoid},
	{"asVoid", &luna_wrapper_PHullResult::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< PHullResult >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< PHullResult >::enumValues[] = {
	{0,0}
};


