#include <plug_common.h>

class luna_wrapper_b2DistanceProxy {
public:
	typedef Luna< b2DistanceProxy > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,57523462) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2DistanceProxy*)");
		}

		b2DistanceProxy* rhs =(Luna< b2DistanceProxy >::check(L,2));
		b2DistanceProxy* self=(Luna< b2DistanceProxy >::check(L,1));
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

		b2DistanceProxy* self=(Luna< b2DistanceProxy >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2DistanceProxy");
		
		return luna_dynamicCast(L,converters,"b2DistanceProxy",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Set(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,86660265)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSupport(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSupportVertex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetVertexCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVertex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRadius(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRadius(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2DistanceProxy::b2DistanceProxy()
	static b2DistanceProxy* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2DistanceProxy::b2DistanceProxy() function, expected prototype:\nb2DistanceProxy::b2DistanceProxy()\nClass arguments details:\n");
		}


		return new b2DistanceProxy();
	}


	// Function binds:
	// void b2DistanceProxy::Set(const b2Shape * shape, signed int index)
	static int _bind_Set(lua_State *L) {
		if (!_lg_typecheck_Set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2DistanceProxy::Set(const b2Shape * shape, signed int index) function, expected prototype:\nvoid b2DistanceProxy::Set(const b2Shape * shape, signed int index)\nClass arguments details:\narg 1 ID = 86660265\n");
		}

		const b2Shape* shape=(Luna< b2Shape >::check(L,2));
		signed int index=(signed int)lua_tointeger(L,3);

		b2DistanceProxy* self=(Luna< b2DistanceProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2DistanceProxy::Set(const b2Shape *, signed int). Got : '%s'",typeid(Luna< b2DistanceProxy >::check(L,1)).name());
		}
		self->Set(shape, index);

		return 0;
	}

	// signed int b2DistanceProxy::GetSupport(const b2Vec2 & d) const
	static int _bind_GetSupport(lua_State *L) {
		if (!_lg_typecheck_GetSupport(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2DistanceProxy::GetSupport(const b2Vec2 & d) const function, expected prototype:\nsigned int b2DistanceProxy::GetSupport(const b2Vec2 & d) const\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		const b2Vec2* d_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in b2DistanceProxy::GetSupport function");
		}
		const b2Vec2 & d=*d_ptr;

		b2DistanceProxy* self=(Luna< b2DistanceProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2DistanceProxy::GetSupport(const b2Vec2 &) const. Got : '%s'",typeid(Luna< b2DistanceProxy >::check(L,1)).name());
		}
		signed int lret = self->GetSupport(d);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const b2Vec2 & b2DistanceProxy::GetSupportVertex(const b2Vec2 & d) const
	static int _bind_GetSupportVertex(lua_State *L) {
		if (!_lg_typecheck_GetSupportVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Vec2 & b2DistanceProxy::GetSupportVertex(const b2Vec2 & d) const function, expected prototype:\nconst b2Vec2 & b2DistanceProxy::GetSupportVertex(const b2Vec2 & d) const\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		const b2Vec2* d_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in b2DistanceProxy::GetSupportVertex function");
		}
		const b2Vec2 & d=*d_ptr;

		b2DistanceProxy* self=(Luna< b2DistanceProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Vec2 & b2DistanceProxy::GetSupportVertex(const b2Vec2 &) const. Got : '%s'",typeid(Luna< b2DistanceProxy >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->GetSupportVertex(d);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// signed int b2DistanceProxy::GetVertexCount() const
	static int _bind_GetVertexCount(lua_State *L) {
		if (!_lg_typecheck_GetVertexCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2DistanceProxy::GetVertexCount() const function, expected prototype:\nsigned int b2DistanceProxy::GetVertexCount() const\nClass arguments details:\n");
		}


		b2DistanceProxy* self=(Luna< b2DistanceProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2DistanceProxy::GetVertexCount() const. Got : '%s'",typeid(Luna< b2DistanceProxy >::check(L,1)).name());
		}
		signed int lret = self->GetVertexCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const b2Vec2 & b2DistanceProxy::GetVertex(signed int index) const
	static int _bind_GetVertex(lua_State *L) {
		if (!_lg_typecheck_GetVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Vec2 & b2DistanceProxy::GetVertex(signed int index) const function, expected prototype:\nconst b2Vec2 & b2DistanceProxy::GetVertex(signed int index) const\nClass arguments details:\n");
		}

		signed int index=(signed int)lua_tointeger(L,2);

		b2DistanceProxy* self=(Luna< b2DistanceProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Vec2 & b2DistanceProxy::GetVertex(signed int) const. Got : '%s'",typeid(Luna< b2DistanceProxy >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->GetVertex(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// const b2Vec2 * b2DistanceProxy::m_vertices()
	static int _bind_getVertices(lua_State *L) {
		if (!_lg_typecheck_getVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Vec2 * b2DistanceProxy::m_vertices() function, expected prototype:\nconst b2Vec2 * b2DistanceProxy::m_vertices()\nClass arguments details:\n");
		}


		b2DistanceProxy* self=(Luna< b2DistanceProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Vec2 * b2DistanceProxy::m_vertices(). Got : '%s'",typeid(Luna< b2DistanceProxy >::check(L,1)).name());
		}
		const b2Vec2 * lret = self->m_vertices;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// signed int b2DistanceProxy::m_count()
	static int _bind_getCount(lua_State *L) {
		if (!_lg_typecheck_getCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2DistanceProxy::m_count() function, expected prototype:\nsigned int b2DistanceProxy::m_count()\nClass arguments details:\n");
		}


		b2DistanceProxy* self=(Luna< b2DistanceProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2DistanceProxy::m_count(). Got : '%s'",typeid(Luna< b2DistanceProxy >::check(L,1)).name());
		}
		signed int lret = self->m_count;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2DistanceProxy::m_radius()
	static int _bind_getRadius(lua_State *L) {
		if (!_lg_typecheck_getRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2DistanceProxy::m_radius() function, expected prototype:\nfloat b2DistanceProxy::m_radius()\nClass arguments details:\n");
		}


		b2DistanceProxy* self=(Luna< b2DistanceProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2DistanceProxy::m_radius(). Got : '%s'",typeid(Luna< b2DistanceProxy >::check(L,1)).name());
		}
		float lret = self->m_radius;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2DistanceProxy::m_count(signed int value)
	static int _bind_setCount(lua_State *L) {
		if (!_lg_typecheck_setCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2DistanceProxy::m_count(signed int value) function, expected prototype:\nvoid b2DistanceProxy::m_count(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2DistanceProxy* self=(Luna< b2DistanceProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2DistanceProxy::m_count(signed int). Got : '%s'",typeid(Luna< b2DistanceProxy >::check(L,1)).name());
		}
		self->m_count = value;

		return 0;
	}

	// void b2DistanceProxy::m_radius(float value)
	static int _bind_setRadius(lua_State *L) {
		if (!_lg_typecheck_setRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2DistanceProxy::m_radius(float value) function, expected prototype:\nvoid b2DistanceProxy::m_radius(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2DistanceProxy* self=(Luna< b2DistanceProxy >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2DistanceProxy::m_radius(float). Got : '%s'",typeid(Luna< b2DistanceProxy >::check(L,1)).name());
		}
		self->m_radius = value;

		return 0;
	}


	// Operator binds:

};

b2DistanceProxy* LunaTraits< b2DistanceProxy >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2DistanceProxy::_bind_ctor(L);
}

void LunaTraits< b2DistanceProxy >::_bind_dtor(b2DistanceProxy* obj) {
	delete obj;
}

const char LunaTraits< b2DistanceProxy >::className[] = "b2DistanceProxy";
const char LunaTraits< b2DistanceProxy >::fullName[] = "b2DistanceProxy";
const char LunaTraits< b2DistanceProxy >::moduleName[] = "box2d";
const char* LunaTraits< b2DistanceProxy >::parents[] = {0};
const int LunaTraits< b2DistanceProxy >::hash = 57523462;
const int LunaTraits< b2DistanceProxy >::uniqueIDs[] = {57523462,0};

luna_RegType LunaTraits< b2DistanceProxy >::methods[] = {
	{"Set", &luna_wrapper_b2DistanceProxy::_bind_Set},
	{"GetSupport", &luna_wrapper_b2DistanceProxy::_bind_GetSupport},
	{"GetSupportVertex", &luna_wrapper_b2DistanceProxy::_bind_GetSupportVertex},
	{"GetVertexCount", &luna_wrapper_b2DistanceProxy::_bind_GetVertexCount},
	{"GetVertex", &luna_wrapper_b2DistanceProxy::_bind_GetVertex},
	{"getVertices", &luna_wrapper_b2DistanceProxy::_bind_getVertices},
	{"getCount", &luna_wrapper_b2DistanceProxy::_bind_getCount},
	{"getRadius", &luna_wrapper_b2DistanceProxy::_bind_getRadius},
	{"setCount", &luna_wrapper_b2DistanceProxy::_bind_setCount},
	{"setRadius", &luna_wrapper_b2DistanceProxy::_bind_setRadius},
	{"dynCast", &luna_wrapper_b2DistanceProxy::_bind_dynCast},
	{"__eq", &luna_wrapper_b2DistanceProxy::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< b2DistanceProxy >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2DistanceProxy >::enumValues[] = {
	{0,0}
};


