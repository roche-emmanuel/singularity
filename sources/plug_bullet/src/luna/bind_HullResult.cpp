#include <plug_common.h>

class luna_wrapper_HullResult {
public:
	typedef Luna< HullResult > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,83000358) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(HullResult*)");
		}

		HullResult* rhs =(Luna< HullResult >::check(L,2));
		HullResult* self=(Luna< HullResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
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

		HullResult* self= (HullResult*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< HullResult >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,83000358) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< HullResult >::check(L,1));
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

		HullResult* self=(Luna< HullResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("HullResult");
		
		return luna_dynamicCast(L,converters,"HullResult",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getPolygons(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumOutputVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOutputVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumFaces(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumIndices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIndices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPolygons(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumOutputVertices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOutputVertices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89770050) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumFaces(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumIndices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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
	// HullResult::HullResult()
	static HullResult* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in HullResult::HullResult() function, expected prototype:\nHullResult::HullResult()\nClass arguments details:\n");
		}


		return new HullResult();
	}


	// Function binds:
	// bool HullResult::mPolygons()
	static int _bind_getPolygons(lua_State *L) {
		if (!_lg_typecheck_getPolygons(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool HullResult::mPolygons() function, expected prototype:\nbool HullResult::mPolygons()\nClass arguments details:\n");
		}


		HullResult* self=(Luna< HullResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool HullResult::mPolygons(). Got : '%s'",typeid(Luna< HullResult >::check(L,1)).name());
		}
		bool lret = self->mPolygons;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int HullResult::mNumOutputVertices()
	static int _bind_getNumOutputVertices(lua_State *L) {
		if (!_lg_typecheck_getNumOutputVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int HullResult::mNumOutputVertices() function, expected prototype:\nunsigned int HullResult::mNumOutputVertices()\nClass arguments details:\n");
		}


		HullResult* self=(Luna< HullResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int HullResult::mNumOutputVertices(). Got : '%s'",typeid(Luna< HullResult >::check(L,1)).name());
		}
		unsigned int lret = self->mNumOutputVertices;
		lua_pushnumber(L,lret);

		return 1;
	}

	// btAlignedObjectArray< btVector3 > HullResult::m_OutputVertices()
	static int _bind_getOutputVertices(lua_State *L) {
		if (!_lg_typecheck_getOutputVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btAlignedObjectArray< btVector3 > HullResult::m_OutputVertices() function, expected prototype:\nbtAlignedObjectArray< btVector3 > HullResult::m_OutputVertices()\nClass arguments details:\n");
		}


		HullResult* self=(Luna< HullResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btAlignedObjectArray< btVector3 > HullResult::m_OutputVertices(). Got : '%s'",typeid(Luna< HullResult >::check(L,1)).name());
		}
		const btAlignedObjectArray< btVector3 >* lret = &self->m_OutputVertices;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btAlignedObjectArray< btVector3 > >::push(L,lret,false);

		return 1;
	}

	// unsigned int HullResult::mNumFaces()
	static int _bind_getNumFaces(lua_State *L) {
		if (!_lg_typecheck_getNumFaces(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int HullResult::mNumFaces() function, expected prototype:\nunsigned int HullResult::mNumFaces()\nClass arguments details:\n");
		}


		HullResult* self=(Luna< HullResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int HullResult::mNumFaces(). Got : '%s'",typeid(Luna< HullResult >::check(L,1)).name());
		}
		unsigned int lret = self->mNumFaces;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int HullResult::mNumIndices()
	static int _bind_getNumIndices(lua_State *L) {
		if (!_lg_typecheck_getNumIndices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int HullResult::mNumIndices() function, expected prototype:\nunsigned int HullResult::mNumIndices()\nClass arguments details:\n");
		}


		HullResult* self=(Luna< HullResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int HullResult::mNumIndices(). Got : '%s'",typeid(Luna< HullResult >::check(L,1)).name());
		}
		unsigned int lret = self->mNumIndices;
		lua_pushnumber(L,lret);

		return 1;
	}

	// btAlignedObjectArray< unsigned int > HullResult::m_Indices()
	static int _bind_getIndices(lua_State *L) {
		if (!_lg_typecheck_getIndices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btAlignedObjectArray< unsigned int > HullResult::m_Indices() function, expected prototype:\nbtAlignedObjectArray< unsigned int > HullResult::m_Indices()\nClass arguments details:\n");
		}


		HullResult* self=(Luna< HullResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btAlignedObjectArray< unsigned int > HullResult::m_Indices(). Got : '%s'",typeid(Luna< HullResult >::check(L,1)).name());
		}
		const btAlignedObjectArray< unsigned int >* lret = &self->m_Indices;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btAlignedObjectArray< unsigned int > >::push(L,lret,false);

		return 1;
	}

	// void HullResult::mPolygons(bool value)
	static int _bind_setPolygons(lua_State *L) {
		if (!_lg_typecheck_setPolygons(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void HullResult::mPolygons(bool value) function, expected prototype:\nvoid HullResult::mPolygons(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		HullResult* self=(Luna< HullResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void HullResult::mPolygons(bool). Got : '%s'",typeid(Luna< HullResult >::check(L,1)).name());
		}
		self->mPolygons = value;

		return 0;
	}

	// void HullResult::mNumOutputVertices(unsigned int value)
	static int _bind_setNumOutputVertices(lua_State *L) {
		if (!_lg_typecheck_setNumOutputVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void HullResult::mNumOutputVertices(unsigned int value) function, expected prototype:\nvoid HullResult::mNumOutputVertices(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		HullResult* self=(Luna< HullResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void HullResult::mNumOutputVertices(unsigned int). Got : '%s'",typeid(Luna< HullResult >::check(L,1)).name());
		}
		self->mNumOutputVertices = value;

		return 0;
	}

	// void HullResult::m_OutputVertices(btAlignedObjectArray< btVector3 > value)
	static int _bind_setOutputVertices(lua_State *L) {
		if (!_lg_typecheck_setOutputVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void HullResult::m_OutputVertices(btAlignedObjectArray< btVector3 > value) function, expected prototype:\nvoid HullResult::m_OutputVertices(btAlignedObjectArray< btVector3 > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		btAlignedObjectArray< btVector3 >* value_ptr=(Luna< btAlignedObjectArray< btVector3 > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in HullResult::m_OutputVertices function");
		}
		btAlignedObjectArray< btVector3 > value=*value_ptr;

		HullResult* self=(Luna< HullResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void HullResult::m_OutputVertices(btAlignedObjectArray< btVector3 >). Got : '%s'",typeid(Luna< HullResult >::check(L,1)).name());
		}
		self->m_OutputVertices = value;

		return 0;
	}

	// void HullResult::mNumFaces(unsigned int value)
	static int _bind_setNumFaces(lua_State *L) {
		if (!_lg_typecheck_setNumFaces(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void HullResult::mNumFaces(unsigned int value) function, expected prototype:\nvoid HullResult::mNumFaces(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		HullResult* self=(Luna< HullResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void HullResult::mNumFaces(unsigned int). Got : '%s'",typeid(Luna< HullResult >::check(L,1)).name());
		}
		self->mNumFaces = value;

		return 0;
	}

	// void HullResult::mNumIndices(unsigned int value)
	static int _bind_setNumIndices(lua_State *L) {
		if (!_lg_typecheck_setNumIndices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void HullResult::mNumIndices(unsigned int value) function, expected prototype:\nvoid HullResult::mNumIndices(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		HullResult* self=(Luna< HullResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void HullResult::mNumIndices(unsigned int). Got : '%s'",typeid(Luna< HullResult >::check(L,1)).name());
		}
		self->mNumIndices = value;

		return 0;
	}

	// void HullResult::m_Indices(btAlignedObjectArray< unsigned int > value)
	static int _bind_setIndices(lua_State *L) {
		if (!_lg_typecheck_setIndices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void HullResult::m_Indices(btAlignedObjectArray< unsigned int > value) function, expected prototype:\nvoid HullResult::m_Indices(btAlignedObjectArray< unsigned int > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		btAlignedObjectArray< unsigned int >* value_ptr=(Luna< btAlignedObjectArray< unsigned int > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in HullResult::m_Indices function");
		}
		btAlignedObjectArray< unsigned int > value=*value_ptr;

		HullResult* self=(Luna< HullResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void HullResult::m_Indices(btAlignedObjectArray< unsigned int >). Got : '%s'",typeid(Luna< HullResult >::check(L,1)).name());
		}
		self->m_Indices = value;

		return 0;
	}


	// Operator binds:

};

HullResult* LunaTraits< HullResult >::_bind_ctor(lua_State *L) {
	return luna_wrapper_HullResult::_bind_ctor(L);
}

void LunaTraits< HullResult >::_bind_dtor(HullResult* obj) {
	delete obj;
}

const char LunaTraits< HullResult >::className[] = "HullResult";
const char LunaTraits< HullResult >::fullName[] = "HullResult";
const char LunaTraits< HullResult >::moduleName[] = "bullet";
const char* LunaTraits< HullResult >::parents[] = {0};
const int LunaTraits< HullResult >::hash = 83000358;
const int LunaTraits< HullResult >::uniqueIDs[] = {83000358,0};

luna_RegType LunaTraits< HullResult >::methods[] = {
	{"getPolygons", &luna_wrapper_HullResult::_bind_getPolygons},
	{"getNumOutputVertices", &luna_wrapper_HullResult::_bind_getNumOutputVertices},
	{"getOutputVertices", &luna_wrapper_HullResult::_bind_getOutputVertices},
	{"getNumFaces", &luna_wrapper_HullResult::_bind_getNumFaces},
	{"getNumIndices", &luna_wrapper_HullResult::_bind_getNumIndices},
	{"getIndices", &luna_wrapper_HullResult::_bind_getIndices},
	{"setPolygons", &luna_wrapper_HullResult::_bind_setPolygons},
	{"setNumOutputVertices", &luna_wrapper_HullResult::_bind_setNumOutputVertices},
	{"setOutputVertices", &luna_wrapper_HullResult::_bind_setOutputVertices},
	{"setNumFaces", &luna_wrapper_HullResult::_bind_setNumFaces},
	{"setNumIndices", &luna_wrapper_HullResult::_bind_setNumIndices},
	{"setIndices", &luna_wrapper_HullResult::_bind_setIndices},
	{"dynCast", &luna_wrapper_HullResult::_bind_dynCast},
	{"__eq", &luna_wrapper_HullResult::_bind___eq},
	{"fromVoid", &luna_wrapper_HullResult::_bind_fromVoid},
	{"asVoid", &luna_wrapper_HullResult::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< HullResult >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< HullResult >::enumValues[] = {
	{0,0}
};


