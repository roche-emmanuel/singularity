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

	inline static bool _lg_typecheck_getMFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMVcount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMVertexStride(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMNormalEpsilon(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMMaxVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMMaxFaces(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMVcount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMVertexStride(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMNormalEpsilon(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMMaxVertices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMMaxFaces(lua_State *L) {
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
		unsigned int stride=luatop>3 ? (unsigned int)lua_tointeger(L,4) : sizeof( btVector3 );

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
	static int _bind_getMFlags(lua_State *L) {
		if (!_lg_typecheck_getMFlags(L)) {
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
	static int _bind_getMVcount(lua_State *L) {
		if (!_lg_typecheck_getMVcount(L)) {
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
	static int _bind_getMVertices(lua_State *L) {
		if (!_lg_typecheck_getMVertices(L)) {
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
	static int _bind_getMVertexStride(lua_State *L) {
		if (!_lg_typecheck_getMVertexStride(L)) {
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
	static int _bind_getMNormalEpsilon(lua_State *L) {
		if (!_lg_typecheck_getMNormalEpsilon(L)) {
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
	static int _bind_getMMaxVertices(lua_State *L) {
		if (!_lg_typecheck_getMMaxVertices(L)) {
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
	static int _bind_getMMaxFaces(lua_State *L) {
		if (!_lg_typecheck_getMMaxFaces(L)) {
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
	static int _bind_setMFlags(lua_State *L) {
		if (!_lg_typecheck_setMFlags(L)) {
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
	static int _bind_setMVcount(lua_State *L) {
		if (!_lg_typecheck_setMVcount(L)) {
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
	static int _bind_setMVertexStride(lua_State *L) {
		if (!_lg_typecheck_setMVertexStride(L)) {
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
	static int _bind_setMNormalEpsilon(lua_State *L) {
		if (!_lg_typecheck_setMNormalEpsilon(L)) {
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
	static int _bind_setMMaxVertices(lua_State *L) {
		if (!_lg_typecheck_setMMaxVertices(L)) {
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
	static int _bind_setMMaxFaces(lua_State *L) {
		if (!_lg_typecheck_setMMaxFaces(L)) {
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
	{"getMFlags", &luna_wrapper_HullDesc::_bind_getMFlags},
	{"getMVcount", &luna_wrapper_HullDesc::_bind_getMVcount},
	{"getMVertices", &luna_wrapper_HullDesc::_bind_getMVertices},
	{"getMVertexStride", &luna_wrapper_HullDesc::_bind_getMVertexStride},
	{"getMNormalEpsilon", &luna_wrapper_HullDesc::_bind_getMNormalEpsilon},
	{"getMMaxVertices", &luna_wrapper_HullDesc::_bind_getMMaxVertices},
	{"getMMaxFaces", &luna_wrapper_HullDesc::_bind_getMMaxFaces},
	{"setMFlags", &luna_wrapper_HullDesc::_bind_setMFlags},
	{"setMVcount", &luna_wrapper_HullDesc::_bind_setMVcount},
	{"setMVertexStride", &luna_wrapper_HullDesc::_bind_setMVertexStride},
	{"setMNormalEpsilon", &luna_wrapper_HullDesc::_bind_setMNormalEpsilon},
	{"setMMaxVertices", &luna_wrapper_HullDesc::_bind_setMMaxVertices},
	{"setMMaxFaces", &luna_wrapper_HullDesc::_bind_setMMaxFaces},
	{"dynCast", &luna_wrapper_HullDesc::_bind_dynCast},
	{"__eq", &luna_wrapper_HullDesc::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< HullDesc >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< HullDesc >::enumValues[] = {
	{0,0}
};


