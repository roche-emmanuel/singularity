#include <plug_common.h>

class luna_wrapper_GIM_CONTACT {
public:
	typedef Luna< GIM_CONTACT > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87678210) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(GIM_CONTACT*)");
		}

		GIM_CONTACT* rhs =(Luna< GIM_CONTACT >::check(L,2));
		GIM_CONTACT* self=(Luna< GIM_CONTACT >::check(L,1));
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

		GIM_CONTACT* self= (GIM_CONTACT*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< GIM_CONTACT >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87678210) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< GIM_CONTACT >::check(L,1));
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

		GIM_CONTACT* self=(Luna< GIM_CONTACT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("GIM_CONTACT");
		
		return luna_dynamicCast(L,converters,"GIM_CONTACT",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87678210) ) return false;
		if( (!(Luna< GIM_CONTACT >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_calc_key_contact(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_interpolate_normals(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91544891)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDistance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFeature1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFeature2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNormal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDepth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDistance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFeature1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFeature2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// GIM_CONTACT::GIM_CONTACT()
	static GIM_CONTACT* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in GIM_CONTACT::GIM_CONTACT() function, expected prototype:\nGIM_CONTACT::GIM_CONTACT()\nClass arguments details:\n");
		}


		return new GIM_CONTACT();
	}

	// GIM_CONTACT::GIM_CONTACT(const GIM_CONTACT & contact)
	static GIM_CONTACT* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in GIM_CONTACT::GIM_CONTACT(const GIM_CONTACT & contact) function, expected prototype:\nGIM_CONTACT::GIM_CONTACT(const GIM_CONTACT & contact)\nClass arguments details:\narg 1 ID = 87678210\n");
		}

		const GIM_CONTACT* contact_ptr=(Luna< GIM_CONTACT >::check(L,1));
		if( !contact_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg contact in GIM_CONTACT::GIM_CONTACT function");
		}
		const GIM_CONTACT & contact=*contact_ptr;

		return new GIM_CONTACT(contact);
	}

	// GIM_CONTACT::GIM_CONTACT(const btVector3 & point, const btVector3 & normal, float depth, int feature1, int feature2)
	static GIM_CONTACT* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in GIM_CONTACT::GIM_CONTACT(const btVector3 & point, const btVector3 & normal, float depth, int feature1, int feature2) function, expected prototype:\nGIM_CONTACT::GIM_CONTACT(const btVector3 & point, const btVector3 & normal, float depth, int feature1, int feature2)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* point_ptr=(Luna< btVector3 >::check(L,1));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in GIM_CONTACT::GIM_CONTACT function");
		}
		const btVector3 & point=*point_ptr;
		const btVector3* normal_ptr=(Luna< btVector3 >::check(L,2));
		if( !normal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normal in GIM_CONTACT::GIM_CONTACT function");
		}
		const btVector3 & normal=*normal_ptr;
		float depth=(float)lua_tonumber(L,3);
		int feature1=(int)lua_tointeger(L,4);
		int feature2=(int)lua_tointeger(L,5);

		return new GIM_CONTACT(point, normal, depth, feature1, feature2);
	}

	// Overload binder for GIM_CONTACT::GIM_CONTACT
	static GIM_CONTACT* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function GIM_CONTACT, cannot match any of the overloads for function GIM_CONTACT:\n  GIM_CONTACT()\n  GIM_CONTACT(const GIM_CONTACT &)\n  GIM_CONTACT(const btVector3 &, const btVector3 &, float, int, int)\n");
		return NULL;
	}


	// Function binds:
	// unsigned int GIM_CONTACT::calc_key_contact() const
	static int _bind_calc_key_contact(lua_State *L) {
		if (!_lg_typecheck_calc_key_contact(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int GIM_CONTACT::calc_key_contact() const function, expected prototype:\nunsigned int GIM_CONTACT::calc_key_contact() const\nClass arguments details:\n");
		}


		GIM_CONTACT* self=(Luna< GIM_CONTACT >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int GIM_CONTACT::calc_key_contact() const. Got : '%s'",typeid(Luna< GIM_CONTACT >::check(L,1)).name());
		}
		unsigned int lret = self->calc_key_contact();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void GIM_CONTACT::interpolate_normals(btVector3 * normals, int normal_count)
	static int _bind_interpolate_normals(lua_State *L) {
		if (!_lg_typecheck_interpolate_normals(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GIM_CONTACT::interpolate_normals(btVector3 * normals, int normal_count) function, expected prototype:\nvoid GIM_CONTACT::interpolate_normals(btVector3 * normals, int normal_count)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* normals=(Luna< btVector3 >::check(L,2));
		int normal_count=(int)lua_tointeger(L,3);

		GIM_CONTACT* self=(Luna< GIM_CONTACT >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GIM_CONTACT::interpolate_normals(btVector3 *, int). Got : '%s'",typeid(Luna< GIM_CONTACT >::check(L,1)).name());
		}
		self->interpolate_normals(normals, normal_count);

		return 0;
	}

	// btVector3 GIM_CONTACT::m_point()
	static int _bind_getPoint(lua_State *L) {
		if (!_lg_typecheck_getPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 GIM_CONTACT::m_point() function, expected prototype:\nbtVector3 GIM_CONTACT::m_point()\nClass arguments details:\n");
		}


		GIM_CONTACT* self=(Luna< GIM_CONTACT >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 GIM_CONTACT::m_point(). Got : '%s'",typeid(Luna< GIM_CONTACT >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_point;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 GIM_CONTACT::m_normal()
	static int _bind_getNormal(lua_State *L) {
		if (!_lg_typecheck_getNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 GIM_CONTACT::m_normal() function, expected prototype:\nbtVector3 GIM_CONTACT::m_normal()\nClass arguments details:\n");
		}


		GIM_CONTACT* self=(Luna< GIM_CONTACT >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 GIM_CONTACT::m_normal(). Got : '%s'",typeid(Luna< GIM_CONTACT >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_normal;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// float GIM_CONTACT::m_depth()
	static int _bind_getDepth(lua_State *L) {
		if (!_lg_typecheck_getDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float GIM_CONTACT::m_depth() function, expected prototype:\nfloat GIM_CONTACT::m_depth()\nClass arguments details:\n");
		}


		GIM_CONTACT* self=(Luna< GIM_CONTACT >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float GIM_CONTACT::m_depth(). Got : '%s'",typeid(Luna< GIM_CONTACT >::check(L,1)).name());
		}
		float lret = self->m_depth;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float GIM_CONTACT::m_distance()
	static int _bind_getDistance(lua_State *L) {
		if (!_lg_typecheck_getDistance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float GIM_CONTACT::m_distance() function, expected prototype:\nfloat GIM_CONTACT::m_distance()\nClass arguments details:\n");
		}


		GIM_CONTACT* self=(Luna< GIM_CONTACT >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float GIM_CONTACT::m_distance(). Got : '%s'",typeid(Luna< GIM_CONTACT >::check(L,1)).name());
		}
		float lret = self->m_distance;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int GIM_CONTACT::m_feature1()
	static int _bind_getFeature1(lua_State *L) {
		if (!_lg_typecheck_getFeature1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int GIM_CONTACT::m_feature1() function, expected prototype:\nint GIM_CONTACT::m_feature1()\nClass arguments details:\n");
		}


		GIM_CONTACT* self=(Luna< GIM_CONTACT >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int GIM_CONTACT::m_feature1(). Got : '%s'",typeid(Luna< GIM_CONTACT >::check(L,1)).name());
		}
		int lret = self->m_feature1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int GIM_CONTACT::m_feature2()
	static int _bind_getFeature2(lua_State *L) {
		if (!_lg_typecheck_getFeature2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int GIM_CONTACT::m_feature2() function, expected prototype:\nint GIM_CONTACT::m_feature2()\nClass arguments details:\n");
		}


		GIM_CONTACT* self=(Luna< GIM_CONTACT >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int GIM_CONTACT::m_feature2(). Got : '%s'",typeid(Luna< GIM_CONTACT >::check(L,1)).name());
		}
		int lret = self->m_feature2;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void GIM_CONTACT::m_point(btVector3 value)
	static int _bind_setPoint(lua_State *L) {
		if (!_lg_typecheck_setPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GIM_CONTACT::m_point(btVector3 value) function, expected prototype:\nvoid GIM_CONTACT::m_point(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in GIM_CONTACT::m_point function");
		}
		btVector3 value=*value_ptr;

		GIM_CONTACT* self=(Luna< GIM_CONTACT >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GIM_CONTACT::m_point(btVector3). Got : '%s'",typeid(Luna< GIM_CONTACT >::check(L,1)).name());
		}
		self->m_point = value;

		return 0;
	}

	// void GIM_CONTACT::m_normal(btVector3 value)
	static int _bind_setNormal(lua_State *L) {
		if (!_lg_typecheck_setNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GIM_CONTACT::m_normal(btVector3 value) function, expected prototype:\nvoid GIM_CONTACT::m_normal(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in GIM_CONTACT::m_normal function");
		}
		btVector3 value=*value_ptr;

		GIM_CONTACT* self=(Luna< GIM_CONTACT >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GIM_CONTACT::m_normal(btVector3). Got : '%s'",typeid(Luna< GIM_CONTACT >::check(L,1)).name());
		}
		self->m_normal = value;

		return 0;
	}

	// void GIM_CONTACT::m_depth(float value)
	static int _bind_setDepth(lua_State *L) {
		if (!_lg_typecheck_setDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GIM_CONTACT::m_depth(float value) function, expected prototype:\nvoid GIM_CONTACT::m_depth(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		GIM_CONTACT* self=(Luna< GIM_CONTACT >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GIM_CONTACT::m_depth(float). Got : '%s'",typeid(Luna< GIM_CONTACT >::check(L,1)).name());
		}
		self->m_depth = value;

		return 0;
	}

	// void GIM_CONTACT::m_distance(float value)
	static int _bind_setDistance(lua_State *L) {
		if (!_lg_typecheck_setDistance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GIM_CONTACT::m_distance(float value) function, expected prototype:\nvoid GIM_CONTACT::m_distance(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		GIM_CONTACT* self=(Luna< GIM_CONTACT >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GIM_CONTACT::m_distance(float). Got : '%s'",typeid(Luna< GIM_CONTACT >::check(L,1)).name());
		}
		self->m_distance = value;

		return 0;
	}

	// void GIM_CONTACT::m_feature1(int value)
	static int _bind_setFeature1(lua_State *L) {
		if (!_lg_typecheck_setFeature1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GIM_CONTACT::m_feature1(int value) function, expected prototype:\nvoid GIM_CONTACT::m_feature1(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		GIM_CONTACT* self=(Luna< GIM_CONTACT >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GIM_CONTACT::m_feature1(int). Got : '%s'",typeid(Luna< GIM_CONTACT >::check(L,1)).name());
		}
		self->m_feature1 = value;

		return 0;
	}

	// void GIM_CONTACT::m_feature2(int value)
	static int _bind_setFeature2(lua_State *L) {
		if (!_lg_typecheck_setFeature2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GIM_CONTACT::m_feature2(int value) function, expected prototype:\nvoid GIM_CONTACT::m_feature2(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		GIM_CONTACT* self=(Luna< GIM_CONTACT >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GIM_CONTACT::m_feature2(int). Got : '%s'",typeid(Luna< GIM_CONTACT >::check(L,1)).name());
		}
		self->m_feature2 = value;

		return 0;
	}


	// Operator binds:

};

GIM_CONTACT* LunaTraits< GIM_CONTACT >::_bind_ctor(lua_State *L) {
	return luna_wrapper_GIM_CONTACT::_bind_ctor(L);
}

void LunaTraits< GIM_CONTACT >::_bind_dtor(GIM_CONTACT* obj) {
	delete obj;
}

const char LunaTraits< GIM_CONTACT >::className[] = "GIM_CONTACT";
const char LunaTraits< GIM_CONTACT >::fullName[] = "GIM_CONTACT";
const char LunaTraits< GIM_CONTACT >::moduleName[] = "bullet";
const char* LunaTraits< GIM_CONTACT >::parents[] = {0};
const int LunaTraits< GIM_CONTACT >::hash = 87678210;
const int LunaTraits< GIM_CONTACT >::uniqueIDs[] = {87678210,0};

luna_RegType LunaTraits< GIM_CONTACT >::methods[] = {
	{"calc_key_contact", &luna_wrapper_GIM_CONTACT::_bind_calc_key_contact},
	{"interpolate_normals", &luna_wrapper_GIM_CONTACT::_bind_interpolate_normals},
	{"getPoint", &luna_wrapper_GIM_CONTACT::_bind_getPoint},
	{"getNormal", &luna_wrapper_GIM_CONTACT::_bind_getNormal},
	{"getDepth", &luna_wrapper_GIM_CONTACT::_bind_getDepth},
	{"getDistance", &luna_wrapper_GIM_CONTACT::_bind_getDistance},
	{"getFeature1", &luna_wrapper_GIM_CONTACT::_bind_getFeature1},
	{"getFeature2", &luna_wrapper_GIM_CONTACT::_bind_getFeature2},
	{"setPoint", &luna_wrapper_GIM_CONTACT::_bind_setPoint},
	{"setNormal", &luna_wrapper_GIM_CONTACT::_bind_setNormal},
	{"setDepth", &luna_wrapper_GIM_CONTACT::_bind_setDepth},
	{"setDistance", &luna_wrapper_GIM_CONTACT::_bind_setDistance},
	{"setFeature1", &luna_wrapper_GIM_CONTACT::_bind_setFeature1},
	{"setFeature2", &luna_wrapper_GIM_CONTACT::_bind_setFeature2},
	{"dynCast", &luna_wrapper_GIM_CONTACT::_bind_dynCast},
	{"__eq", &luna_wrapper_GIM_CONTACT::_bind___eq},
	{"fromVoid", &luna_wrapper_GIM_CONTACT::_bind_fromVoid},
	{"asVoid", &luna_wrapper_GIM_CONTACT::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< GIM_CONTACT >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< GIM_CONTACT >::enumValues[] = {
	{0,0}
};


