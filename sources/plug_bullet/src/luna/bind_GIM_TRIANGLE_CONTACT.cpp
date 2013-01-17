#include <plug_common.h>

class luna_wrapper_GIM_TRIANGLE_CONTACT {
public:
	typedef Luna< GIM_TRIANGLE_CONTACT > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87059149) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(GIM_TRIANGLE_CONTACT*)");
		}

		GIM_TRIANGLE_CONTACT* rhs =(Luna< GIM_TRIANGLE_CONTACT >::check(L,2));
		GIM_TRIANGLE_CONTACT* self=(Luna< GIM_TRIANGLE_CONTACT >::check(L,1));
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

		GIM_TRIANGLE_CONTACT* self=(Luna< GIM_TRIANGLE_CONTACT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("GIM_TRIANGLE_CONTACT");
		
		return luna_dynamicCast(L,converters,"GIM_TRIANGLE_CONTACT",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87059149) ) return false;
		if( (!(Luna< GIM_TRIANGLE_CONTACT >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_copy_from(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87059149) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_merge_points(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,91544891)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getM_penetration_depth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_point_count(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_separating_normal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_penetration_depth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_point_count(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_separating_normal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// GIM_TRIANGLE_CONTACT::GIM_TRIANGLE_CONTACT()
	static GIM_TRIANGLE_CONTACT* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in GIM_TRIANGLE_CONTACT::GIM_TRIANGLE_CONTACT() function, expected prototype:\nGIM_TRIANGLE_CONTACT::GIM_TRIANGLE_CONTACT()\nClass arguments details:\n");
		}


		return new GIM_TRIANGLE_CONTACT();
	}

	// GIM_TRIANGLE_CONTACT::GIM_TRIANGLE_CONTACT(const GIM_TRIANGLE_CONTACT & other)
	static GIM_TRIANGLE_CONTACT* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in GIM_TRIANGLE_CONTACT::GIM_TRIANGLE_CONTACT(const GIM_TRIANGLE_CONTACT & other) function, expected prototype:\nGIM_TRIANGLE_CONTACT::GIM_TRIANGLE_CONTACT(const GIM_TRIANGLE_CONTACT & other)\nClass arguments details:\narg 1 ID = 87059149\n");
		}

		const GIM_TRIANGLE_CONTACT* other_ptr=(Luna< GIM_TRIANGLE_CONTACT >::check(L,1));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in GIM_TRIANGLE_CONTACT::GIM_TRIANGLE_CONTACT function");
		}
		const GIM_TRIANGLE_CONTACT & other=*other_ptr;

		return new GIM_TRIANGLE_CONTACT(other);
	}

	// Overload binder for GIM_TRIANGLE_CONTACT::GIM_TRIANGLE_CONTACT
	static GIM_TRIANGLE_CONTACT* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function GIM_TRIANGLE_CONTACT, cannot match any of the overloads for function GIM_TRIANGLE_CONTACT:\n  GIM_TRIANGLE_CONTACT()\n  GIM_TRIANGLE_CONTACT(const GIM_TRIANGLE_CONTACT &)\n");
		return NULL;
	}


	// Function binds:
	// void GIM_TRIANGLE_CONTACT::copy_from(const GIM_TRIANGLE_CONTACT & other)
	static int _bind_copy_from(lua_State *L) {
		if (!_lg_typecheck_copy_from(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GIM_TRIANGLE_CONTACT::copy_from(const GIM_TRIANGLE_CONTACT & other) function, expected prototype:\nvoid GIM_TRIANGLE_CONTACT::copy_from(const GIM_TRIANGLE_CONTACT & other)\nClass arguments details:\narg 1 ID = 87059149\n");
		}

		const GIM_TRIANGLE_CONTACT* other_ptr=(Luna< GIM_TRIANGLE_CONTACT >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in GIM_TRIANGLE_CONTACT::copy_from function");
		}
		const GIM_TRIANGLE_CONTACT & other=*other_ptr;

		GIM_TRIANGLE_CONTACT* self=(Luna< GIM_TRIANGLE_CONTACT >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GIM_TRIANGLE_CONTACT::copy_from(const GIM_TRIANGLE_CONTACT &). Got : '%s'",typeid(Luna< GIM_TRIANGLE_CONTACT >::check(L,1)).name());
		}
		self->copy_from(other);

		return 0;
	}

	// void GIM_TRIANGLE_CONTACT::merge_points(const btVector4 & plane, float margin, const btVector3 * points, int point_count)
	static int _bind_merge_points(lua_State *L) {
		if (!_lg_typecheck_merge_points(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GIM_TRIANGLE_CONTACT::merge_points(const btVector4 & plane, float margin, const btVector3 * points, int point_count) function, expected prototype:\nvoid GIM_TRIANGLE_CONTACT::merge_points(const btVector4 & plane, float margin, const btVector3 * points, int point_count)\nClass arguments details:\narg 1 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btVector4* plane_ptr=(Luna< btVector3 >::checkSubType< btVector4 >(L,2));
		if( !plane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg plane in GIM_TRIANGLE_CONTACT::merge_points function");
		}
		const btVector4 & plane=*plane_ptr;
		float margin=(float)lua_tonumber(L,3);
		const btVector3* points=(Luna< btVector3 >::check(L,4));
		int point_count=(int)lua_tointeger(L,5);

		GIM_TRIANGLE_CONTACT* self=(Luna< GIM_TRIANGLE_CONTACT >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GIM_TRIANGLE_CONTACT::merge_points(const btVector4 &, float, const btVector3 *, int). Got : '%s'",typeid(Luna< GIM_TRIANGLE_CONTACT >::check(L,1)).name());
		}
		self->merge_points(plane, margin, points, point_count);

		return 0;
	}

	// float GIM_TRIANGLE_CONTACT::m_penetration_depth()
	static int _bind_getM_penetration_depth(lua_State *L) {
		if (!_lg_typecheck_getM_penetration_depth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float GIM_TRIANGLE_CONTACT::m_penetration_depth() function, expected prototype:\nfloat GIM_TRIANGLE_CONTACT::m_penetration_depth()\nClass arguments details:\n");
		}


		GIM_TRIANGLE_CONTACT* self=(Luna< GIM_TRIANGLE_CONTACT >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float GIM_TRIANGLE_CONTACT::m_penetration_depth(). Got : '%s'",typeid(Luna< GIM_TRIANGLE_CONTACT >::check(L,1)).name());
		}
		float lret = self->m_penetration_depth;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int GIM_TRIANGLE_CONTACT::m_point_count()
	static int _bind_getM_point_count(lua_State *L) {
		if (!_lg_typecheck_getM_point_count(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int GIM_TRIANGLE_CONTACT::m_point_count() function, expected prototype:\nint GIM_TRIANGLE_CONTACT::m_point_count()\nClass arguments details:\n");
		}


		GIM_TRIANGLE_CONTACT* self=(Luna< GIM_TRIANGLE_CONTACT >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int GIM_TRIANGLE_CONTACT::m_point_count(). Got : '%s'",typeid(Luna< GIM_TRIANGLE_CONTACT >::check(L,1)).name());
		}
		int lret = self->m_point_count;
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector4 GIM_TRIANGLE_CONTACT::m_separating_normal()
	static int _bind_getM_separating_normal(lua_State *L) {
		if (!_lg_typecheck_getM_separating_normal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector4 GIM_TRIANGLE_CONTACT::m_separating_normal() function, expected prototype:\nbtVector4 GIM_TRIANGLE_CONTACT::m_separating_normal()\nClass arguments details:\n");
		}


		GIM_TRIANGLE_CONTACT* self=(Luna< GIM_TRIANGLE_CONTACT >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector4 GIM_TRIANGLE_CONTACT::m_separating_normal(). Got : '%s'",typeid(Luna< GIM_TRIANGLE_CONTACT >::check(L,1)).name());
		}
		const btVector4* lret = &self->m_separating_normal;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector4 >::push(L,lret,false);

		return 1;
	}

	// void GIM_TRIANGLE_CONTACT::m_penetration_depth(float value)
	static int _bind_setM_penetration_depth(lua_State *L) {
		if (!_lg_typecheck_setM_penetration_depth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GIM_TRIANGLE_CONTACT::m_penetration_depth(float value) function, expected prototype:\nvoid GIM_TRIANGLE_CONTACT::m_penetration_depth(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		GIM_TRIANGLE_CONTACT* self=(Luna< GIM_TRIANGLE_CONTACT >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GIM_TRIANGLE_CONTACT::m_penetration_depth(float). Got : '%s'",typeid(Luna< GIM_TRIANGLE_CONTACT >::check(L,1)).name());
		}
		self->m_penetration_depth = value;

		return 0;
	}

	// void GIM_TRIANGLE_CONTACT::m_point_count(int value)
	static int _bind_setM_point_count(lua_State *L) {
		if (!_lg_typecheck_setM_point_count(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GIM_TRIANGLE_CONTACT::m_point_count(int value) function, expected prototype:\nvoid GIM_TRIANGLE_CONTACT::m_point_count(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		GIM_TRIANGLE_CONTACT* self=(Luna< GIM_TRIANGLE_CONTACT >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GIM_TRIANGLE_CONTACT::m_point_count(int). Got : '%s'",typeid(Luna< GIM_TRIANGLE_CONTACT >::check(L,1)).name());
		}
		self->m_point_count = value;

		return 0;
	}

	// void GIM_TRIANGLE_CONTACT::m_separating_normal(btVector4 value)
	static int _bind_setM_separating_normal(lua_State *L) {
		if (!_lg_typecheck_setM_separating_normal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GIM_TRIANGLE_CONTACT::m_separating_normal(btVector4 value) function, expected prototype:\nvoid GIM_TRIANGLE_CONTACT::m_separating_normal(btVector4 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector4* value_ptr=(Luna< btVector3 >::checkSubType< btVector4 >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in GIM_TRIANGLE_CONTACT::m_separating_normal function");
		}
		btVector4 value=*value_ptr;

		GIM_TRIANGLE_CONTACT* self=(Luna< GIM_TRIANGLE_CONTACT >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GIM_TRIANGLE_CONTACT::m_separating_normal(btVector4). Got : '%s'",typeid(Luna< GIM_TRIANGLE_CONTACT >::check(L,1)).name());
		}
		self->m_separating_normal = value;

		return 0;
	}


	// Operator binds:

};

GIM_TRIANGLE_CONTACT* LunaTraits< GIM_TRIANGLE_CONTACT >::_bind_ctor(lua_State *L) {
	return luna_wrapper_GIM_TRIANGLE_CONTACT::_bind_ctor(L);
}

void LunaTraits< GIM_TRIANGLE_CONTACT >::_bind_dtor(GIM_TRIANGLE_CONTACT* obj) {
	delete obj;
}

const char LunaTraits< GIM_TRIANGLE_CONTACT >::className[] = "GIM_TRIANGLE_CONTACT";
const char LunaTraits< GIM_TRIANGLE_CONTACT >::fullName[] = "GIM_TRIANGLE_CONTACT";
const char LunaTraits< GIM_TRIANGLE_CONTACT >::moduleName[] = "bullet";
const char* LunaTraits< GIM_TRIANGLE_CONTACT >::parents[] = {0};
const int LunaTraits< GIM_TRIANGLE_CONTACT >::hash = 87059149;
const int LunaTraits< GIM_TRIANGLE_CONTACT >::uniqueIDs[] = {87059149,0};

luna_RegType LunaTraits< GIM_TRIANGLE_CONTACT >::methods[] = {
	{"copy_from", &luna_wrapper_GIM_TRIANGLE_CONTACT::_bind_copy_from},
	{"merge_points", &luna_wrapper_GIM_TRIANGLE_CONTACT::_bind_merge_points},
	{"getM_penetration_depth", &luna_wrapper_GIM_TRIANGLE_CONTACT::_bind_getM_penetration_depth},
	{"getM_point_count", &luna_wrapper_GIM_TRIANGLE_CONTACT::_bind_getM_point_count},
	{"getM_separating_normal", &luna_wrapper_GIM_TRIANGLE_CONTACT::_bind_getM_separating_normal},
	{"setM_penetration_depth", &luna_wrapper_GIM_TRIANGLE_CONTACT::_bind_setM_penetration_depth},
	{"setM_point_count", &luna_wrapper_GIM_TRIANGLE_CONTACT::_bind_setM_point_count},
	{"setM_separating_normal", &luna_wrapper_GIM_TRIANGLE_CONTACT::_bind_setM_separating_normal},
	{"dynCast", &luna_wrapper_GIM_TRIANGLE_CONTACT::_bind_dynCast},
	{"__eq", &luna_wrapper_GIM_TRIANGLE_CONTACT::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< GIM_TRIANGLE_CONTACT >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< GIM_TRIANGLE_CONTACT >::enumValues[] = {
	{0,0}
};


