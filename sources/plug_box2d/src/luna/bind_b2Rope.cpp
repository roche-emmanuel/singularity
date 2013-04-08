#include <plug_common.h>

class luna_wrapper_b2Rope {
public:
	typedef Luna< b2Rope > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,54385786) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2Rope*)");
		}

		b2Rope* rhs =(Luna< b2Rope >::check(L,2));
		b2Rope* self=(Luna< b2Rope >::check(L,1));
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

		b2Rope* self= (b2Rope*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2Rope >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,54385786) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< b2Rope >::check(L,1));
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

		b2Rope* self=(Luna< b2Rope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2Rope");
		
		return luna_dynamicCast(L,converters,"b2Rope",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Initialize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,6905047)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Step(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetVertexCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Draw(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,53971148)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAngle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2Rope::b2Rope()
	static b2Rope* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Rope::b2Rope() function, expected prototype:\nb2Rope::b2Rope()\nClass arguments details:\n");
		}


		return new b2Rope();
	}


	// Function binds:
	// void b2Rope::Initialize(const b2RopeDef * def)
	static int _bind_Initialize(lua_State *L) {
		if (!_lg_typecheck_Initialize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Rope::Initialize(const b2RopeDef * def) function, expected prototype:\nvoid b2Rope::Initialize(const b2RopeDef * def)\nClass arguments details:\narg 1 ID = 6905047\n");
		}

		const b2RopeDef* def=(Luna< b2RopeDef >::check(L,2));

		b2Rope* self=(Luna< b2Rope >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Rope::Initialize(const b2RopeDef *). Got : '%s'",typeid(Luna< b2Rope >::check(L,1)).name());
		}
		self->Initialize(def);

		return 0;
	}

	// void b2Rope::Step(float timeStep, signed int iterations)
	static int _bind_Step(lua_State *L) {
		if (!_lg_typecheck_Step(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Rope::Step(float timeStep, signed int iterations) function, expected prototype:\nvoid b2Rope::Step(float timeStep, signed int iterations)\nClass arguments details:\n");
		}

		float timeStep=(float)lua_tonumber(L,2);
		signed int iterations=(signed int)lua_tointeger(L,3);

		b2Rope* self=(Luna< b2Rope >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Rope::Step(float, signed int). Got : '%s'",typeid(Luna< b2Rope >::check(L,1)).name());
		}
		self->Step(timeStep, iterations);

		return 0;
	}

	// signed int b2Rope::GetVertexCount() const
	static int _bind_GetVertexCount(lua_State *L) {
		if (!_lg_typecheck_GetVertexCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2Rope::GetVertexCount() const function, expected prototype:\nsigned int b2Rope::GetVertexCount() const\nClass arguments details:\n");
		}


		b2Rope* self=(Luna< b2Rope >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2Rope::GetVertexCount() const. Got : '%s'",typeid(Luna< b2Rope >::check(L,1)).name());
		}
		signed int lret = self->GetVertexCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const b2Vec2 * b2Rope::GetVertices() const
	static int _bind_GetVertices(lua_State *L) {
		if (!_lg_typecheck_GetVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Vec2 * b2Rope::GetVertices() const function, expected prototype:\nconst b2Vec2 * b2Rope::GetVertices() const\nClass arguments details:\n");
		}


		b2Rope* self=(Luna< b2Rope >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Vec2 * b2Rope::GetVertices() const. Got : '%s'",typeid(Luna< b2Rope >::check(L,1)).name());
		}
		const b2Vec2 * lret = self->GetVertices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// void b2Rope::Draw(b2Draw * draw) const
	static int _bind_Draw(lua_State *L) {
		if (!_lg_typecheck_Draw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Rope::Draw(b2Draw * draw) const function, expected prototype:\nvoid b2Rope::Draw(b2Draw * draw) const\nClass arguments details:\narg 1 ID = 53971148\n");
		}

		b2Draw* draw=(Luna< b2Draw >::check(L,2));

		b2Rope* self=(Luna< b2Rope >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Rope::Draw(b2Draw *) const. Got : '%s'",typeid(Luna< b2Rope >::check(L,1)).name());
		}
		self->Draw(draw);

		return 0;
	}

	// void b2Rope::SetAngle(float angle)
	static int _bind_SetAngle(lua_State *L) {
		if (!_lg_typecheck_SetAngle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Rope::SetAngle(float angle) function, expected prototype:\nvoid b2Rope::SetAngle(float angle)\nClass arguments details:\n");
		}

		float angle=(float)lua_tonumber(L,2);

		b2Rope* self=(Luna< b2Rope >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Rope::SetAngle(float). Got : '%s'",typeid(Luna< b2Rope >::check(L,1)).name());
		}
		self->SetAngle(angle);

		return 0;
	}


	// Operator binds:

};

b2Rope* LunaTraits< b2Rope >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2Rope::_bind_ctor(L);
}

void LunaTraits< b2Rope >::_bind_dtor(b2Rope* obj) {
	delete obj;
}

const char LunaTraits< b2Rope >::className[] = "b2Rope";
const char LunaTraits< b2Rope >::fullName[] = "b2Rope";
const char LunaTraits< b2Rope >::moduleName[] = "box2d";
const char* LunaTraits< b2Rope >::parents[] = {0};
const int LunaTraits< b2Rope >::hash = 54385786;
const int LunaTraits< b2Rope >::uniqueIDs[] = {54385786,0};

luna_RegType LunaTraits< b2Rope >::methods[] = {
	{"Initialize", &luna_wrapper_b2Rope::_bind_Initialize},
	{"Step", &luna_wrapper_b2Rope::_bind_Step},
	{"GetVertexCount", &luna_wrapper_b2Rope::_bind_GetVertexCount},
	{"GetVertices", &luna_wrapper_b2Rope::_bind_GetVertices},
	{"Draw", &luna_wrapper_b2Rope::_bind_Draw},
	{"SetAngle", &luna_wrapper_b2Rope::_bind_SetAngle},
	{"dynCast", &luna_wrapper_b2Rope::_bind_dynCast},
	{"__eq", &luna_wrapper_b2Rope::_bind___eq},
	{"fromVoid", &luna_wrapper_b2Rope::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2Rope::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2Rope >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2Rope >::enumValues[] = {
	{0,0}
};


