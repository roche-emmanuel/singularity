#include <plug_common.h>

#include <luna/wrappers/wrapper_b2Draw.h>

class luna_wrapper_b2Draw {
public:
	typedef Luna< b2Draw > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		b2Draw* self=(Luna< b2Draw >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<b2Draw,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53971148) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2Draw*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		b2Draw* rhs =(Luna< b2Draw >::check(L,2));
		b2Draw* self=(Luna< b2Draw >::check(L,1));
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

		b2Draw* self= (b2Draw*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2Draw >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53971148) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< b2Draw >::check(L,1));
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

		b2Draw* self=(Luna< b2Draw >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2Draw");
		
		return luna_dynamicCast(L,converters,"b2Draw",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SetFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AppendFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ClearFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawPolygon(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,54494886)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,72103019) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawSolidPolygon(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,54494886)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,72103019) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawCircle(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,4,72103019) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawSolidCircle(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,4,54494886) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,72103019) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawSegment(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,54494886) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,72103019) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawTransform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,44090970) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2Draw::b2Draw(lua_Table * data)
	static b2Draw* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in b2Draw::b2Draw(lua_Table * data) function, expected prototype:\nb2Draw::b2Draw(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_b2Draw(L,NULL);
	}


	// Function binds:
	// void b2Draw::SetFlags(unsigned int flags)
	static int _bind_SetFlags(lua_State *L) {
		if (!_lg_typecheck_SetFlags(L)) {
			luaL_error(L, "luna typecheck failed in void b2Draw::SetFlags(unsigned int flags) function, expected prototype:\nvoid b2Draw::SetFlags(unsigned int flags)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int flags=(unsigned int)lua_tointeger(L,2);

		b2Draw* self=(Luna< b2Draw >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Draw::SetFlags(unsigned int). Got : '%s'\n%s",typeid(Luna< b2Draw >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFlags(flags);

		return 0;
	}

	// unsigned int b2Draw::GetFlags() const
	static int _bind_GetFlags(lua_State *L) {
		if (!_lg_typecheck_GetFlags(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int b2Draw::GetFlags() const function, expected prototype:\nunsigned int b2Draw::GetFlags() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2Draw* self=(Luna< b2Draw >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int b2Draw::GetFlags() const. Got : '%s'\n%s",typeid(Luna< b2Draw >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GetFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2Draw::AppendFlags(unsigned int flags)
	static int _bind_AppendFlags(lua_State *L) {
		if (!_lg_typecheck_AppendFlags(L)) {
			luaL_error(L, "luna typecheck failed in void b2Draw::AppendFlags(unsigned int flags) function, expected prototype:\nvoid b2Draw::AppendFlags(unsigned int flags)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int flags=(unsigned int)lua_tointeger(L,2);

		b2Draw* self=(Luna< b2Draw >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Draw::AppendFlags(unsigned int). Got : '%s'\n%s",typeid(Luna< b2Draw >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AppendFlags(flags);

		return 0;
	}

	// void b2Draw::ClearFlags(unsigned int flags)
	static int _bind_ClearFlags(lua_State *L) {
		if (!_lg_typecheck_ClearFlags(L)) {
			luaL_error(L, "luna typecheck failed in void b2Draw::ClearFlags(unsigned int flags) function, expected prototype:\nvoid b2Draw::ClearFlags(unsigned int flags)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int flags=(unsigned int)lua_tointeger(L,2);

		b2Draw* self=(Luna< b2Draw >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Draw::ClearFlags(unsigned int). Got : '%s'\n%s",typeid(Luna< b2Draw >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClearFlags(flags);

		return 0;
	}

	// void b2Draw::DrawPolygon(const b2Vec2 * vertices, signed int vertexCount, const b2Color & color)
	static int _bind_DrawPolygon(lua_State *L) {
		if (!_lg_typecheck_DrawPolygon(L)) {
			luaL_error(L, "luna typecheck failed in void b2Draw::DrawPolygon(const b2Vec2 * vertices, signed int vertexCount, const b2Color & color) function, expected prototype:\nvoid b2Draw::DrawPolygon(const b2Vec2 * vertices, signed int vertexCount, const b2Color & color)\nClass arguments details:\narg 1 ID = 54494886\narg 3 ID = 72103019\n\n%s",luna_dumpStack(L).c_str());
		}

		const b2Vec2* vertices=(Luna< b2Vec2 >::check(L,2));
		signed int vertexCount=(signed int)lua_tointeger(L,3);
		const b2Color* color_ptr=(Luna< b2Color >::check(L,4));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in b2Draw::DrawPolygon function");
		}
		const b2Color & color=*color_ptr;

		b2Draw* self=(Luna< b2Draw >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Draw::DrawPolygon(const b2Vec2 *, signed int, const b2Color &). Got : '%s'\n%s",typeid(Luna< b2Draw >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawPolygon(vertices, vertexCount, color);

		return 0;
	}

	// void b2Draw::DrawSolidPolygon(const b2Vec2 * vertices, signed int vertexCount, const b2Color & color)
	static int _bind_DrawSolidPolygon(lua_State *L) {
		if (!_lg_typecheck_DrawSolidPolygon(L)) {
			luaL_error(L, "luna typecheck failed in void b2Draw::DrawSolidPolygon(const b2Vec2 * vertices, signed int vertexCount, const b2Color & color) function, expected prototype:\nvoid b2Draw::DrawSolidPolygon(const b2Vec2 * vertices, signed int vertexCount, const b2Color & color)\nClass arguments details:\narg 1 ID = 54494886\narg 3 ID = 72103019\n\n%s",luna_dumpStack(L).c_str());
		}

		const b2Vec2* vertices=(Luna< b2Vec2 >::check(L,2));
		signed int vertexCount=(signed int)lua_tointeger(L,3);
		const b2Color* color_ptr=(Luna< b2Color >::check(L,4));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in b2Draw::DrawSolidPolygon function");
		}
		const b2Color & color=*color_ptr;

		b2Draw* self=(Luna< b2Draw >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Draw::DrawSolidPolygon(const b2Vec2 *, signed int, const b2Color &). Got : '%s'\n%s",typeid(Luna< b2Draw >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawSolidPolygon(vertices, vertexCount, color);

		return 0;
	}

	// void b2Draw::DrawCircle(const b2Vec2 & center, float radius, const b2Color & color)
	static int _bind_DrawCircle(lua_State *L) {
		if (!_lg_typecheck_DrawCircle(L)) {
			luaL_error(L, "luna typecheck failed in void b2Draw::DrawCircle(const b2Vec2 & center, float radius, const b2Color & color) function, expected prototype:\nvoid b2Draw::DrawCircle(const b2Vec2 & center, float radius, const b2Color & color)\nClass arguments details:\narg 1 ID = 54494886\narg 3 ID = 72103019\n\n%s",luna_dumpStack(L).c_str());
		}

		const b2Vec2* center_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in b2Draw::DrawCircle function");
		}
		const b2Vec2 & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);
		const b2Color* color_ptr=(Luna< b2Color >::check(L,4));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in b2Draw::DrawCircle function");
		}
		const b2Color & color=*color_ptr;

		b2Draw* self=(Luna< b2Draw >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Draw::DrawCircle(const b2Vec2 &, float, const b2Color &). Got : '%s'\n%s",typeid(Luna< b2Draw >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawCircle(center, radius, color);

		return 0;
	}

	// void b2Draw::DrawSolidCircle(const b2Vec2 & center, float radius, const b2Vec2 & axis, const b2Color & color)
	static int _bind_DrawSolidCircle(lua_State *L) {
		if (!_lg_typecheck_DrawSolidCircle(L)) {
			luaL_error(L, "luna typecheck failed in void b2Draw::DrawSolidCircle(const b2Vec2 & center, float radius, const b2Vec2 & axis, const b2Color & color) function, expected prototype:\nvoid b2Draw::DrawSolidCircle(const b2Vec2 & center, float radius, const b2Vec2 & axis, const b2Color & color)\nClass arguments details:\narg 1 ID = 54494886\narg 3 ID = 54494886\narg 4 ID = 72103019\n\n%s",luna_dumpStack(L).c_str());
		}

		const b2Vec2* center_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in b2Draw::DrawSolidCircle function");
		}
		const b2Vec2 & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);
		const b2Vec2* axis_ptr=(Luna< b2Vec2 >::check(L,4));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in b2Draw::DrawSolidCircle function");
		}
		const b2Vec2 & axis=*axis_ptr;
		const b2Color* color_ptr=(Luna< b2Color >::check(L,5));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in b2Draw::DrawSolidCircle function");
		}
		const b2Color & color=*color_ptr;

		b2Draw* self=(Luna< b2Draw >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Draw::DrawSolidCircle(const b2Vec2 &, float, const b2Vec2 &, const b2Color &). Got : '%s'\n%s",typeid(Luna< b2Draw >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawSolidCircle(center, radius, axis, color);

		return 0;
	}

	// void b2Draw::DrawSegment(const b2Vec2 & p1, const b2Vec2 & p2, const b2Color & color)
	static int _bind_DrawSegment(lua_State *L) {
		if (!_lg_typecheck_DrawSegment(L)) {
			luaL_error(L, "luna typecheck failed in void b2Draw::DrawSegment(const b2Vec2 & p1, const b2Vec2 & p2, const b2Color & color) function, expected prototype:\nvoid b2Draw::DrawSegment(const b2Vec2 & p1, const b2Vec2 & p2, const b2Color & color)\nClass arguments details:\narg 1 ID = 54494886\narg 2 ID = 54494886\narg 3 ID = 72103019\n\n%s",luna_dumpStack(L).c_str());
		}

		const b2Vec2* p1_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !p1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p1 in b2Draw::DrawSegment function");
		}
		const b2Vec2 & p1=*p1_ptr;
		const b2Vec2* p2_ptr=(Luna< b2Vec2 >::check(L,3));
		if( !p2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p2 in b2Draw::DrawSegment function");
		}
		const b2Vec2 & p2=*p2_ptr;
		const b2Color* color_ptr=(Luna< b2Color >::check(L,4));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in b2Draw::DrawSegment function");
		}
		const b2Color & color=*color_ptr;

		b2Draw* self=(Luna< b2Draw >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Draw::DrawSegment(const b2Vec2 &, const b2Vec2 &, const b2Color &). Got : '%s'\n%s",typeid(Luna< b2Draw >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawSegment(p1, p2, color);

		return 0;
	}

	// void b2Draw::DrawTransform(const b2Transform & xf)
	static int _bind_DrawTransform(lua_State *L) {
		if (!_lg_typecheck_DrawTransform(L)) {
			luaL_error(L, "luna typecheck failed in void b2Draw::DrawTransform(const b2Transform & xf) function, expected prototype:\nvoid b2Draw::DrawTransform(const b2Transform & xf)\nClass arguments details:\narg 1 ID = 44090970\n\n%s",luna_dumpStack(L).c_str());
		}

		const b2Transform* xf_ptr=(Luna< b2Transform >::check(L,2));
		if( !xf_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg xf in b2Draw::DrawTransform function");
		}
		const b2Transform & xf=*xf_ptr;

		b2Draw* self=(Luna< b2Draw >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Draw::DrawTransform(const b2Transform &). Got : '%s'\n%s",typeid(Luna< b2Draw >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawTransform(xf);

		return 0;
	}


	// Operator binds:

};

b2Draw* LunaTraits< b2Draw >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2Draw::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void b2Draw::DrawPolygon(const b2Vec2 * vertices, signed int vertexCount, const b2Color & color)
	// void b2Draw::DrawSolidPolygon(const b2Vec2 * vertices, signed int vertexCount, const b2Color & color)
	// void b2Draw::DrawCircle(const b2Vec2 & center, float radius, const b2Color & color)
	// void b2Draw::DrawSolidCircle(const b2Vec2 & center, float radius, const b2Vec2 & axis, const b2Color & color)
	// void b2Draw::DrawSegment(const b2Vec2 & p1, const b2Vec2 & p2, const b2Color & color)
	// void b2Draw::DrawTransform(const b2Transform & xf)
}

void LunaTraits< b2Draw >::_bind_dtor(b2Draw* obj) {
	delete obj;
}

const char LunaTraits< b2Draw >::className[] = "b2Draw";
const char LunaTraits< b2Draw >::fullName[] = "b2Draw";
const char LunaTraits< b2Draw >::moduleName[] = "box2d";
const char* LunaTraits< b2Draw >::parents[] = {0};
const int LunaTraits< b2Draw >::hash = 53971148;
const int LunaTraits< b2Draw >::uniqueIDs[] = {53971148,0};

luna_RegType LunaTraits< b2Draw >::methods[] = {
	{"SetFlags", &luna_wrapper_b2Draw::_bind_SetFlags},
	{"GetFlags", &luna_wrapper_b2Draw::_bind_GetFlags},
	{"AppendFlags", &luna_wrapper_b2Draw::_bind_AppendFlags},
	{"ClearFlags", &luna_wrapper_b2Draw::_bind_ClearFlags},
	{"DrawPolygon", &luna_wrapper_b2Draw::_bind_DrawPolygon},
	{"DrawSolidPolygon", &luna_wrapper_b2Draw::_bind_DrawSolidPolygon},
	{"DrawCircle", &luna_wrapper_b2Draw::_bind_DrawCircle},
	{"DrawSolidCircle", &luna_wrapper_b2Draw::_bind_DrawSolidCircle},
	{"DrawSegment", &luna_wrapper_b2Draw::_bind_DrawSegment},
	{"DrawTransform", &luna_wrapper_b2Draw::_bind_DrawTransform},
	{"dynCast", &luna_wrapper_b2Draw::_bind_dynCast},
	{"__eq", &luna_wrapper_b2Draw::_bind___eq},
	{"fromVoid", &luna_wrapper_b2Draw::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2Draw::_bind_asVoid},
	{"getTable", &luna_wrapper_b2Draw::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< b2Draw >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2Draw >::enumValues[] = {
	{"e_shapeBit", b2Draw::e_shapeBit},
	{"e_jointBit", b2Draw::e_jointBit},
	{"e_aabbBit", b2Draw::e_aabbBit},
	{"e_pairBit", b2Draw::e_pairBit},
	{"e_centerOfMassBit", b2Draw::e_centerOfMassBit},
	{0,0}
};


