#include <plug_common.h>

class luna_wrapper_btPrimitiveTriangle {
public:
	typedef Luna< btPrimitiveTriangle > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,79712881) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btPrimitiveTriangle*)");
		}

		btPrimitiveTriangle* rhs =(Luna< btPrimitiveTriangle >::check(L,2));
		btPrimitiveTriangle* self=(Luna< btPrimitiveTriangle >::check(L,1));
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

		btPrimitiveTriangle* self=(Luna< btPrimitiveTriangle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btPrimitiveTriangle");
		
		return luna_dynamicCast(L,converters,"btPrimitiveTriangle",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_buildTriPlane(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_overlap_test_conservative(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,79712881) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_edge_plane(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_applyTransform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clip_triangle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,79712881) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,91544891)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_find_triangle_collision_clip_method(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,79712881) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,87059149) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPlane(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDummy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPlane(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDummy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btPrimitiveTriangle::btPrimitiveTriangle()
	static btPrimitiveTriangle* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPrimitiveTriangle::btPrimitiveTriangle() function, expected prototype:\nbtPrimitiveTriangle::btPrimitiveTriangle()\nClass arguments details:\n");
		}


		return new btPrimitiveTriangle();
	}


	// Function binds:
	// void btPrimitiveTriangle::buildTriPlane()
	static int _bind_buildTriPlane(lua_State *L) {
		if (!_lg_typecheck_buildTriPlane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPrimitiveTriangle::buildTriPlane() function, expected prototype:\nvoid btPrimitiveTriangle::buildTriPlane()\nClass arguments details:\n");
		}


		btPrimitiveTriangle* self=(Luna< btPrimitiveTriangle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPrimitiveTriangle::buildTriPlane(). Got : '%s'",typeid(Luna< btPrimitiveTriangle >::check(L,1)).name());
		}
		self->buildTriPlane();

		return 0;
	}

	// bool btPrimitiveTriangle::overlap_test_conservative(const btPrimitiveTriangle & other)
	static int _bind_overlap_test_conservative(lua_State *L) {
		if (!_lg_typecheck_overlap_test_conservative(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btPrimitiveTriangle::overlap_test_conservative(const btPrimitiveTriangle & other) function, expected prototype:\nbool btPrimitiveTriangle::overlap_test_conservative(const btPrimitiveTriangle & other)\nClass arguments details:\narg 1 ID = 79712881\n");
		}

		const btPrimitiveTriangle* other_ptr=(Luna< btPrimitiveTriangle >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in btPrimitiveTriangle::overlap_test_conservative function");
		}
		const btPrimitiveTriangle & other=*other_ptr;

		btPrimitiveTriangle* self=(Luna< btPrimitiveTriangle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btPrimitiveTriangle::overlap_test_conservative(const btPrimitiveTriangle &). Got : '%s'",typeid(Luna< btPrimitiveTriangle >::check(L,1)).name());
		}
		bool lret = self->overlap_test_conservative(other);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btPrimitiveTriangle::get_edge_plane(int edge_index, btVector4 & plane) const
	static int _bind_get_edge_plane(lua_State *L) {
		if (!_lg_typecheck_get_edge_plane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPrimitiveTriangle::get_edge_plane(int edge_index, btVector4 & plane) const function, expected prototype:\nvoid btPrimitiveTriangle::get_edge_plane(int edge_index, btVector4 & plane) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		int edge_index=(int)lua_tointeger(L,2);
		btVector4* plane_ptr=(Luna< btVector3 >::checkSubType< btVector4 >(L,3));
		if( !plane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg plane in btPrimitiveTriangle::get_edge_plane function");
		}
		btVector4 & plane=*plane_ptr;

		btPrimitiveTriangle* self=(Luna< btPrimitiveTriangle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPrimitiveTriangle::get_edge_plane(int, btVector4 &) const. Got : '%s'",typeid(Luna< btPrimitiveTriangle >::check(L,1)).name());
		}
		self->get_edge_plane(edge_index, plane);

		return 0;
	}

	// void btPrimitiveTriangle::applyTransform(const btTransform & t)
	static int _bind_applyTransform(lua_State *L) {
		if (!_lg_typecheck_applyTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPrimitiveTriangle::applyTransform(const btTransform & t) function, expected prototype:\nvoid btPrimitiveTriangle::applyTransform(const btTransform & t)\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btPrimitiveTriangle::applyTransform function");
		}
		const btTransform & t=*t_ptr;

		btPrimitiveTriangle* self=(Luna< btPrimitiveTriangle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPrimitiveTriangle::applyTransform(const btTransform &). Got : '%s'",typeid(Luna< btPrimitiveTriangle >::check(L,1)).name());
		}
		self->applyTransform(t);

		return 0;
	}

	// int btPrimitiveTriangle::clip_triangle(btPrimitiveTriangle & other, btVector3 * clipped_points)
	static int _bind_clip_triangle(lua_State *L) {
		if (!_lg_typecheck_clip_triangle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btPrimitiveTriangle::clip_triangle(btPrimitiveTriangle & other, btVector3 * clipped_points) function, expected prototype:\nint btPrimitiveTriangle::clip_triangle(btPrimitiveTriangle & other, btVector3 * clipped_points)\nClass arguments details:\narg 1 ID = 79712881\narg 2 ID = 91544891\n");
		}

		btPrimitiveTriangle* other_ptr=(Luna< btPrimitiveTriangle >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in btPrimitiveTriangle::clip_triangle function");
		}
		btPrimitiveTriangle & other=*other_ptr;
		btVector3* clipped_points=(Luna< btVector3 >::check(L,3));

		btPrimitiveTriangle* self=(Luna< btPrimitiveTriangle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btPrimitiveTriangle::clip_triangle(btPrimitiveTriangle &, btVector3 *). Got : '%s'",typeid(Luna< btPrimitiveTriangle >::check(L,1)).name());
		}
		int lret = self->clip_triangle(other, clipped_points);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btPrimitiveTriangle::find_triangle_collision_clip_method(btPrimitiveTriangle & other, GIM_TRIANGLE_CONTACT & contacts)
	static int _bind_find_triangle_collision_clip_method(lua_State *L) {
		if (!_lg_typecheck_find_triangle_collision_clip_method(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btPrimitiveTriangle::find_triangle_collision_clip_method(btPrimitiveTriangle & other, GIM_TRIANGLE_CONTACT & contacts) function, expected prototype:\nbool btPrimitiveTriangle::find_triangle_collision_clip_method(btPrimitiveTriangle & other, GIM_TRIANGLE_CONTACT & contacts)\nClass arguments details:\narg 1 ID = 79712881\narg 2 ID = 87059149\n");
		}

		btPrimitiveTriangle* other_ptr=(Luna< btPrimitiveTriangle >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in btPrimitiveTriangle::find_triangle_collision_clip_method function");
		}
		btPrimitiveTriangle & other=*other_ptr;
		GIM_TRIANGLE_CONTACT* contacts_ptr=(Luna< GIM_TRIANGLE_CONTACT >::check(L,3));
		if( !contacts_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg contacts in btPrimitiveTriangle::find_triangle_collision_clip_method function");
		}
		GIM_TRIANGLE_CONTACT & contacts=*contacts_ptr;

		btPrimitiveTriangle* self=(Luna< btPrimitiveTriangle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btPrimitiveTriangle::find_triangle_collision_clip_method(btPrimitiveTriangle &, GIM_TRIANGLE_CONTACT &). Got : '%s'",typeid(Luna< btPrimitiveTriangle >::check(L,1)).name());
		}
		bool lret = self->find_triangle_collision_clip_method(other, contacts);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// btVector4 btPrimitiveTriangle::m_plane()
	static int _bind_getPlane(lua_State *L) {
		if (!_lg_typecheck_getPlane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector4 btPrimitiveTriangle::m_plane() function, expected prototype:\nbtVector4 btPrimitiveTriangle::m_plane()\nClass arguments details:\n");
		}


		btPrimitiveTriangle* self=(Luna< btPrimitiveTriangle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector4 btPrimitiveTriangle::m_plane(). Got : '%s'",typeid(Luna< btPrimitiveTriangle >::check(L,1)).name());
		}
		const btVector4* lret = &self->m_plane;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector4 >::push(L,lret,false);

		return 1;
	}

	// float btPrimitiveTriangle::m_margin()
	static int _bind_getMargin(lua_State *L) {
		if (!_lg_typecheck_getMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btPrimitiveTriangle::m_margin() function, expected prototype:\nfloat btPrimitiveTriangle::m_margin()\nClass arguments details:\n");
		}


		btPrimitiveTriangle* self=(Luna< btPrimitiveTriangle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btPrimitiveTriangle::m_margin(). Got : '%s'",typeid(Luna< btPrimitiveTriangle >::check(L,1)).name());
		}
		float lret = self->m_margin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btPrimitiveTriangle::m_dummy()
	static int _bind_getDummy(lua_State *L) {
		if (!_lg_typecheck_getDummy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btPrimitiveTriangle::m_dummy() function, expected prototype:\nfloat btPrimitiveTriangle::m_dummy()\nClass arguments details:\n");
		}


		btPrimitiveTriangle* self=(Luna< btPrimitiveTriangle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btPrimitiveTriangle::m_dummy(). Got : '%s'",typeid(Luna< btPrimitiveTriangle >::check(L,1)).name());
		}
		float lret = self->m_dummy;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btPrimitiveTriangle::m_plane(btVector4 value)
	static int _bind_setPlane(lua_State *L) {
		if (!_lg_typecheck_setPlane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPrimitiveTriangle::m_plane(btVector4 value) function, expected prototype:\nvoid btPrimitiveTriangle::m_plane(btVector4 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector4* value_ptr=(Luna< btVector3 >::checkSubType< btVector4 >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btPrimitiveTriangle::m_plane function");
		}
		btVector4 value=*value_ptr;

		btPrimitiveTriangle* self=(Luna< btPrimitiveTriangle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPrimitiveTriangle::m_plane(btVector4). Got : '%s'",typeid(Luna< btPrimitiveTriangle >::check(L,1)).name());
		}
		self->m_plane = value;

		return 0;
	}

	// void btPrimitiveTriangle::m_margin(float value)
	static int _bind_setMargin(lua_State *L) {
		if (!_lg_typecheck_setMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPrimitiveTriangle::m_margin(float value) function, expected prototype:\nvoid btPrimitiveTriangle::m_margin(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btPrimitiveTriangle* self=(Luna< btPrimitiveTriangle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPrimitiveTriangle::m_margin(float). Got : '%s'",typeid(Luna< btPrimitiveTriangle >::check(L,1)).name());
		}
		self->m_margin = value;

		return 0;
	}

	// void btPrimitiveTriangle::m_dummy(float value)
	static int _bind_setDummy(lua_State *L) {
		if (!_lg_typecheck_setDummy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPrimitiveTriangle::m_dummy(float value) function, expected prototype:\nvoid btPrimitiveTriangle::m_dummy(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btPrimitiveTriangle* self=(Luna< btPrimitiveTriangle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPrimitiveTriangle::m_dummy(float). Got : '%s'",typeid(Luna< btPrimitiveTriangle >::check(L,1)).name());
		}
		self->m_dummy = value;

		return 0;
	}


	// Operator binds:

};

btPrimitiveTriangle* LunaTraits< btPrimitiveTriangle >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btPrimitiveTriangle::_bind_ctor(L);
}

void LunaTraits< btPrimitiveTriangle >::_bind_dtor(btPrimitiveTriangle* obj) {
	delete obj;
}

const char LunaTraits< btPrimitiveTriangle >::className[] = "btPrimitiveTriangle";
const char LunaTraits< btPrimitiveTriangle >::fullName[] = "btPrimitiveTriangle";
const char LunaTraits< btPrimitiveTriangle >::moduleName[] = "bullet";
const char* LunaTraits< btPrimitiveTriangle >::parents[] = {0};
const int LunaTraits< btPrimitiveTriangle >::hash = 79712881;
const int LunaTraits< btPrimitiveTriangle >::uniqueIDs[] = {79712881,0};

luna_RegType LunaTraits< btPrimitiveTriangle >::methods[] = {
	{"buildTriPlane", &luna_wrapper_btPrimitiveTriangle::_bind_buildTriPlane},
	{"overlap_test_conservative", &luna_wrapper_btPrimitiveTriangle::_bind_overlap_test_conservative},
	{"get_edge_plane", &luna_wrapper_btPrimitiveTriangle::_bind_get_edge_plane},
	{"applyTransform", &luna_wrapper_btPrimitiveTriangle::_bind_applyTransform},
	{"clip_triangle", &luna_wrapper_btPrimitiveTriangle::_bind_clip_triangle},
	{"find_triangle_collision_clip_method", &luna_wrapper_btPrimitiveTriangle::_bind_find_triangle_collision_clip_method},
	{"getPlane", &luna_wrapper_btPrimitiveTriangle::_bind_getPlane},
	{"getMargin", &luna_wrapper_btPrimitiveTriangle::_bind_getMargin},
	{"getDummy", &luna_wrapper_btPrimitiveTriangle::_bind_getDummy},
	{"setPlane", &luna_wrapper_btPrimitiveTriangle::_bind_setPlane},
	{"setMargin", &luna_wrapper_btPrimitiveTriangle::_bind_setMargin},
	{"setDummy", &luna_wrapper_btPrimitiveTriangle::_bind_setDummy},
	{"dynCast", &luna_wrapper_btPrimitiveTriangle::_bind_dynCast},
	{"__eq", &luna_wrapper_btPrimitiveTriangle::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btPrimitiveTriangle >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btPrimitiveTriangle >::enumValues[] = {
	{0,0}
};


