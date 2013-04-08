#include <plug_common.h>

class luna_wrapper_HullLibrary {
public:
	typedef Luna< HullLibrary > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,46706140) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(HullLibrary*)");
		}

		HullLibrary* rhs =(Luna< HullLibrary >::check(L,2));
		HullLibrary* self=(Luna< HullLibrary >::check(L,1));
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		HullLibrary* self= (HullLibrary*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< HullLibrary >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,46706140) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< HullLibrary >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
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

		HullLibrary* self=(Luna< HullLibrary >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("HullLibrary");
		
		return luna_dynamicCast(L,converters,"HullLibrary",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_CreateConvexHull(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,39835770) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,83000358) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ReleaseResult(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,83000358) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertexIndexMapping(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVertexIndexMapping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,41950488) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// HullError HullLibrary::CreateConvexHull(const HullDesc & desc, HullResult & result)
	static int _bind_CreateConvexHull(lua_State *L) {
		if (!_lg_typecheck_CreateConvexHull(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in HullError HullLibrary::CreateConvexHull(const HullDesc & desc, HullResult & result) function, expected prototype:\nHullError HullLibrary::CreateConvexHull(const HullDesc & desc, HullResult & result)\nClass arguments details:\narg 1 ID = 39835770\narg 2 ID = 83000358\n");
		}

		const HullDesc* desc_ptr=(Luna< HullDesc >::check(L,2));
		if( !desc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg desc in HullLibrary::CreateConvexHull function");
		}
		const HullDesc & desc=*desc_ptr;
		HullResult* result_ptr=(Luna< HullResult >::check(L,3));
		if( !result_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg result in HullLibrary::CreateConvexHull function");
		}
		HullResult & result=*result_ptr;

		HullLibrary* self=(Luna< HullLibrary >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call HullError HullLibrary::CreateConvexHull(const HullDesc &, HullResult &). Got : '%s'",typeid(Luna< HullLibrary >::check(L,1)).name());
		}
		HullError lret = self->CreateConvexHull(desc, result);
		lua_pushnumber(L,lret);

		return 1;
	}

	// HullError HullLibrary::ReleaseResult(HullResult & result)
	static int _bind_ReleaseResult(lua_State *L) {
		if (!_lg_typecheck_ReleaseResult(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in HullError HullLibrary::ReleaseResult(HullResult & result) function, expected prototype:\nHullError HullLibrary::ReleaseResult(HullResult & result)\nClass arguments details:\narg 1 ID = 83000358\n");
		}

		HullResult* result_ptr=(Luna< HullResult >::check(L,2));
		if( !result_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg result in HullLibrary::ReleaseResult function");
		}
		HullResult & result=*result_ptr;

		HullLibrary* self=(Luna< HullLibrary >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call HullError HullLibrary::ReleaseResult(HullResult &). Got : '%s'",typeid(Luna< HullLibrary >::check(L,1)).name());
		}
		HullError lret = self->ReleaseResult(result);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btAlignedObjectArray< int > HullLibrary::m_vertexIndexMapping()
	static int _bind_getVertexIndexMapping(lua_State *L) {
		if (!_lg_typecheck_getVertexIndexMapping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btAlignedObjectArray< int > HullLibrary::m_vertexIndexMapping() function, expected prototype:\nbtAlignedObjectArray< int > HullLibrary::m_vertexIndexMapping()\nClass arguments details:\n");
		}


		HullLibrary* self=(Luna< HullLibrary >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btAlignedObjectArray< int > HullLibrary::m_vertexIndexMapping(). Got : '%s'",typeid(Luna< HullLibrary >::check(L,1)).name());
		}
		const btAlignedObjectArray< int >* lret = &self->m_vertexIndexMapping;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btAlignedObjectArray< int > >::push(L,lret,false);

		return 1;
	}

	// void HullLibrary::m_vertexIndexMapping(btAlignedObjectArray< int > value)
	static int _bind_setVertexIndexMapping(lua_State *L) {
		if (!_lg_typecheck_setVertexIndexMapping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void HullLibrary::m_vertexIndexMapping(btAlignedObjectArray< int > value) function, expected prototype:\nvoid HullLibrary::m_vertexIndexMapping(btAlignedObjectArray< int > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		btAlignedObjectArray< int >* value_ptr=(Luna< btAlignedObjectArray< int > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in HullLibrary::m_vertexIndexMapping function");
		}
		btAlignedObjectArray< int > value=*value_ptr;

		HullLibrary* self=(Luna< HullLibrary >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void HullLibrary::m_vertexIndexMapping(btAlignedObjectArray< int >). Got : '%s'",typeid(Luna< HullLibrary >::check(L,1)).name());
		}
		self->m_vertexIndexMapping = value;

		return 0;
	}


	// Operator binds:

};

HullLibrary* LunaTraits< HullLibrary >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< HullLibrary >::_bind_dtor(HullLibrary* obj) {
	delete obj;
}

const char LunaTraits< HullLibrary >::className[] = "HullLibrary";
const char LunaTraits< HullLibrary >::fullName[] = "HullLibrary";
const char LunaTraits< HullLibrary >::moduleName[] = "bullet";
const char* LunaTraits< HullLibrary >::parents[] = {0};
const int LunaTraits< HullLibrary >::hash = 46706140;
const int LunaTraits< HullLibrary >::uniqueIDs[] = {46706140,0};

luna_RegType LunaTraits< HullLibrary >::methods[] = {
	{"CreateConvexHull", &luna_wrapper_HullLibrary::_bind_CreateConvexHull},
	{"ReleaseResult", &luna_wrapper_HullLibrary::_bind_ReleaseResult},
	{"getVertexIndexMapping", &luna_wrapper_HullLibrary::_bind_getVertexIndexMapping},
	{"setVertexIndexMapping", &luna_wrapper_HullLibrary::_bind_setVertexIndexMapping},
	{"dynCast", &luna_wrapper_HullLibrary::_bind_dynCast},
	{"__eq", &luna_wrapper_HullLibrary::_bind___eq},
	{"fromVoid", &luna_wrapper_HullLibrary::_bind_fromVoid},
	{"asVoid", &luna_wrapper_HullLibrary::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< HullLibrary >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< HullLibrary >::enumValues[] = {
	{0,0}
};


