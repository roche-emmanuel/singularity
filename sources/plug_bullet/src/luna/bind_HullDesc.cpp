#include <plug_common.h>

class luna_wrapper_HullDesc {
public:
	typedef Luna< HullDesc > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,39835770) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(HullDesc*)");
		}

		HullDesc* rhs =(Luna< HullDesc >::check(L,2));
		HullDesc* self=(Luna< HullDesc >::check(L,1));
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

		HullDesc* self= (HullDesc*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< HullDesc >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,39835770) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< HullDesc >::check(L,1));
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

		HullDesc* self=(Luna< HullDesc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("HullDesc");
		
		return luna_dynamicCast(L,converters,"HullDesc",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,91544891)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btVector3 >::check(L,3)) ) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_HasHullFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetHullFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ClearHullFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVcount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertexStride(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNormalEpsilon(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxFaces(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVcount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexStride(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNormalEpsilon(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxVertices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxFaces(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// HullDesc::HullDesc()
	static HullDesc* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in HullDesc::HullDesc() function, expected prototype:\nHullDesc::HullDesc()\nClass arguments details:\n");
		}


		return new HullDesc();
	}

	// HullDesc::HullDesc(HullFlag flag, unsigned int vcount, const btVector3 * vertices, unsigned int stride = sizeof( btVector3 ))
	static HullDesc* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in HullDesc::HullDesc(HullFlag flag, unsigned int vcount, const btVector3 * vertices, unsigned int stride = sizeof( btVector3 )) function, expected prototype:\nHullDesc::HullDesc(HullFlag flag, unsigned int vcount, const btVector3 * vertices, unsigned int stride = sizeof( btVector3 ))\nClass arguments details:\narg 3 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		HullFlag flag=(HullFlag)lua_tointeger(L,1);
		unsigned int vcount=(unsigned int)lua_tointeger(L,2);
		const btVector3* vertices=(Luna< btVector3 >::check(L,3));
		unsigned int stride=luatop>3 ? (unsigned int)lua_tointeger(L,4) : (unsigned int)sizeof( btVector3 );

		return new HullDesc(flag, vcount, vertices, stride);
	}

	// Overload binder for HullDesc::HullDesc
	static HullDesc* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function HullDesc, cannot match any of the overloads for function HullDesc:\n  HullDesc()\n  HullDesc(HullFlag, unsigned int, const btVector3 *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// bool HullDesc::HasHullFlag(HullFlag flag) const
	static int _bind_HasHullFlag(lua_State *L) {
		if (!_lg_typecheck_HasHullFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool HullDesc::HasHullFlag(HullFlag flag) const function, expected prototype:\nbool HullDesc::HasHullFlag(HullFlag flag) const\nClass arguments details:\n");
		}

		HullFlag flag=(HullFlag)lua_tointeger(L,2);

		HullDesc* self=(Luna< HullDesc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool HullDesc::HasHullFlag(HullFlag) const. Got : '%s'",typeid(Luna< HullDesc >::check(L,1)).name());
		}
		bool lret = self->HasHullFlag(flag);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void HullDesc::SetHullFlag(HullFlag flag)
	static int _bind_SetHullFlag(lua_State *L) {
		if (!_lg_typecheck_SetHullFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void HullDesc::SetHullFlag(HullFlag flag) function, expected prototype:\nvoid HullDesc::SetHullFlag(HullFlag flag)\nClass arguments details:\n");
		}

		HullFlag flag=(HullFlag)lua_tointeger(L,2);

		HullDesc* self=(Luna< HullDesc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void HullDesc::SetHullFlag(HullFlag). Got : '%s'",typeid(Luna< HullDesc >::check(L,1)).name());
		}
		self->SetHullFlag(flag);

		return 0;
	}

	// void HullDesc::ClearHullFlag(HullFlag flag)
	static int _bind_ClearHullFlag(lua_State *L) {
		if (!_lg_typecheck_ClearHullFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void HullDesc::ClearHullFlag(HullFlag flag) function, expected prototype:\nvoid HullDesc::ClearHullFlag(HullFlag flag)\nClass arguments details:\n");
		}

		HullFlag flag=(HullFlag)lua_tointeger(L,2);

		HullDesc* self=(Luna< HullDesc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void HullDesc::ClearHullFlag(HullFlag). Got : '%s'",typeid(Luna< HullDesc >::check(L,1)).name());
		}
		self->ClearHullFlag(flag);

		return 0;
	}

	// unsigned int HullDesc::mFlags()
	static int _bind_getFlags(lua_State *L) {
		if (!_lg_typecheck_getFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int HullDesc::mFlags() function, expected prototype:\nunsigned int HullDesc::mFlags()\nClass arguments details:\n");
		}


		HullDesc* self=(Luna< HullDesc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int HullDesc::mFlags(). Got : '%s'",typeid(Luna< HullDesc >::check(L,1)).name());
		}
		unsigned int lret = self->mFlags;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int HullDesc::mVcount()
	static int _bind_getVcount(lua_State *L) {
		if (!_lg_typecheck_getVcount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int HullDesc::mVcount() function, expected prototype:\nunsigned int HullDesc::mVcount()\nClass arguments details:\n");
		}


		HullDesc* self=(Luna< HullDesc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int HullDesc::mVcount(). Got : '%s'",typeid(Luna< HullDesc >::check(L,1)).name());
		}
		unsigned int lret = self->mVcount;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const btVector3 * HullDesc::mVertices()
	static int _bind_getVertices(lua_State *L) {
		if (!_lg_typecheck_getVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 * HullDesc::mVertices() function, expected prototype:\nconst btVector3 * HullDesc::mVertices()\nClass arguments details:\n");
		}


		HullDesc* self=(Luna< HullDesc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 * HullDesc::mVertices(). Got : '%s'",typeid(Luna< HullDesc >::check(L,1)).name());
		}
		const btVector3 * lret = self->mVertices;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// unsigned int HullDesc::mVertexStride()
	static int _bind_getVertexStride(lua_State *L) {
		if (!_lg_typecheck_getVertexStride(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int HullDesc::mVertexStride() function, expected prototype:\nunsigned int HullDesc::mVertexStride()\nClass arguments details:\n");
		}


		HullDesc* self=(Luna< HullDesc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int HullDesc::mVertexStride(). Got : '%s'",typeid(Luna< HullDesc >::check(L,1)).name());
		}
		unsigned int lret = self->mVertexStride;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float HullDesc::mNormalEpsilon()
	static int _bind_getNormalEpsilon(lua_State *L) {
		if (!_lg_typecheck_getNormalEpsilon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float HullDesc::mNormalEpsilon() function, expected prototype:\nfloat HullDesc::mNormalEpsilon()\nClass arguments details:\n");
		}


		HullDesc* self=(Luna< HullDesc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float HullDesc::mNormalEpsilon(). Got : '%s'",typeid(Luna< HullDesc >::check(L,1)).name());
		}
		float lret = self->mNormalEpsilon;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int HullDesc::mMaxVertices()
	static int _bind_getMaxVertices(lua_State *L) {
		if (!_lg_typecheck_getMaxVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int HullDesc::mMaxVertices() function, expected prototype:\nunsigned int HullDesc::mMaxVertices()\nClass arguments details:\n");
		}


		HullDesc* self=(Luna< HullDesc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int HullDesc::mMaxVertices(). Got : '%s'",typeid(Luna< HullDesc >::check(L,1)).name());
		}
		unsigned int lret = self->mMaxVertices;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int HullDesc::mMaxFaces()
	static int _bind_getMaxFaces(lua_State *L) {
		if (!_lg_typecheck_getMaxFaces(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int HullDesc::mMaxFaces() function, expected prototype:\nunsigned int HullDesc::mMaxFaces()\nClass arguments details:\n");
		}


		HullDesc* self=(Luna< HullDesc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int HullDesc::mMaxFaces(). Got : '%s'",typeid(Luna< HullDesc >::check(L,1)).name());
		}
		unsigned int lret = self->mMaxFaces;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void HullDesc::mFlags(unsigned int value)
	static int _bind_setFlags(lua_State *L) {
		if (!_lg_typecheck_setFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void HullDesc::mFlags(unsigned int value) function, expected prototype:\nvoid HullDesc::mFlags(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		HullDesc* self=(Luna< HullDesc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void HullDesc::mFlags(unsigned int). Got : '%s'",typeid(Luna< HullDesc >::check(L,1)).name());
		}
		self->mFlags = value;

		return 0;
	}

	// void HullDesc::mVcount(unsigned int value)
	static int _bind_setVcount(lua_State *L) {
		if (!_lg_typecheck_setVcount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void HullDesc::mVcount(unsigned int value) function, expected prototype:\nvoid HullDesc::mVcount(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		HullDesc* self=(Luna< HullDesc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void HullDesc::mVcount(unsigned int). Got : '%s'",typeid(Luna< HullDesc >::check(L,1)).name());
		}
		self->mVcount = value;

		return 0;
	}

	// void HullDesc::mVertexStride(unsigned int value)
	static int _bind_setVertexStride(lua_State *L) {
		if (!_lg_typecheck_setVertexStride(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void HullDesc::mVertexStride(unsigned int value) function, expected prototype:\nvoid HullDesc::mVertexStride(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		HullDesc* self=(Luna< HullDesc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void HullDesc::mVertexStride(unsigned int). Got : '%s'",typeid(Luna< HullDesc >::check(L,1)).name());
		}
		self->mVertexStride = value;

		return 0;
	}

	// void HullDesc::mNormalEpsilon(float value)
	static int _bind_setNormalEpsilon(lua_State *L) {
		if (!_lg_typecheck_setNormalEpsilon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void HullDesc::mNormalEpsilon(float value) function, expected prototype:\nvoid HullDesc::mNormalEpsilon(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		HullDesc* self=(Luna< HullDesc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void HullDesc::mNormalEpsilon(float). Got : '%s'",typeid(Luna< HullDesc >::check(L,1)).name());
		}
		self->mNormalEpsilon = value;

		return 0;
	}

	// void HullDesc::mMaxVertices(unsigned int value)
	static int _bind_setMaxVertices(lua_State *L) {
		if (!_lg_typecheck_setMaxVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void HullDesc::mMaxVertices(unsigned int value) function, expected prototype:\nvoid HullDesc::mMaxVertices(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		HullDesc* self=(Luna< HullDesc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void HullDesc::mMaxVertices(unsigned int). Got : '%s'",typeid(Luna< HullDesc >::check(L,1)).name());
		}
		self->mMaxVertices = value;

		return 0;
	}

	// void HullDesc::mMaxFaces(unsigned int value)
	static int _bind_setMaxFaces(lua_State *L) {
		if (!_lg_typecheck_setMaxFaces(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void HullDesc::mMaxFaces(unsigned int value) function, expected prototype:\nvoid HullDesc::mMaxFaces(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		HullDesc* self=(Luna< HullDesc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void HullDesc::mMaxFaces(unsigned int). Got : '%s'",typeid(Luna< HullDesc >::check(L,1)).name());
		}
		self->mMaxFaces = value;

		return 0;
	}


	// Operator binds:

};

HullDesc* LunaTraits< HullDesc >::_bind_ctor(lua_State *L) {
	return luna_wrapper_HullDesc::_bind_ctor(L);
}

void LunaTraits< HullDesc >::_bind_dtor(HullDesc* obj) {
	delete obj;
}

const char LunaTraits< HullDesc >::className[] = "HullDesc";
const char LunaTraits< HullDesc >::fullName[] = "HullDesc";
const char LunaTraits< HullDesc >::moduleName[] = "bullet";
const char* LunaTraits< HullDesc >::parents[] = {0};
const int LunaTraits< HullDesc >::hash = 39835770;
const int LunaTraits< HullDesc >::uniqueIDs[] = {39835770,0};

luna_RegType LunaTraits< HullDesc >::methods[] = {
	{"HasHullFlag", &luna_wrapper_HullDesc::_bind_HasHullFlag},
	{"SetHullFlag", &luna_wrapper_HullDesc::_bind_SetHullFlag},
	{"ClearHullFlag", &luna_wrapper_HullDesc::_bind_ClearHullFlag},
	{"getFlags", &luna_wrapper_HullDesc::_bind_getFlags},
	{"getVcount", &luna_wrapper_HullDesc::_bind_getVcount},
	{"getVertices", &luna_wrapper_HullDesc::_bind_getVertices},
	{"getVertexStride", &luna_wrapper_HullDesc::_bind_getVertexStride},
	{"getNormalEpsilon", &luna_wrapper_HullDesc::_bind_getNormalEpsilon},
	{"getMaxVertices", &luna_wrapper_HullDesc::_bind_getMaxVertices},
	{"getMaxFaces", &luna_wrapper_HullDesc::_bind_getMaxFaces},
	{"setFlags", &luna_wrapper_HullDesc::_bind_setFlags},
	{"setVcount", &luna_wrapper_HullDesc::_bind_setVcount},
	{"setVertexStride", &luna_wrapper_HullDesc::_bind_setVertexStride},
	{"setNormalEpsilon", &luna_wrapper_HullDesc::_bind_setNormalEpsilon},
	{"setMaxVertices", &luna_wrapper_HullDesc::_bind_setMaxVertices},
	{"setMaxFaces", &luna_wrapper_HullDesc::_bind_setMaxFaces},
	{"dynCast", &luna_wrapper_HullDesc::_bind_dynCast},
	{"__eq", &luna_wrapper_HullDesc::_bind___eq},
	{"fromVoid", &luna_wrapper_HullDesc::_bind_fromVoid},
	{"asVoid", &luna_wrapper_HullDesc::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< HullDesc >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< HullDesc >::enumValues[] = {
	{0,0}
};


