#include <plug_common.h>

#include <luna/wrappers/wrapper_b2Shape.h>

class luna_wrapper_b2Shape {
public:
	typedef Luna< b2Shape > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		b2Shape* self=(Luna< b2Shape >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<b2Shape,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86660265) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2Shape*)");
		}

		b2Shape* rhs =(Luna< b2Shape >::check(L,2));
		b2Shape* self=(Luna< b2Shape >::check(L,1));
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

		b2Shape* self=(Luna< b2Shape >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2Shape");
		
		return luna_dynamicCast(L,converters,"b2Shape",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,76186022)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetChildCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_TestPoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,44090970) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RayCast(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,78839054)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,74209205) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,44090970) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ComputeAABB(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,53833672)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,44090970) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ComputeMass(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,24760292)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getM_type(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_radius(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_type(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_radius(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2Shape::b2Shape(lua_Table * data)
	static b2Shape* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Shape::b2Shape(lua_Table * data) function, expected prototype:\nb2Shape::b2Shape(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_b2Shape(L,NULL);
	}


	// Function binds:
	// b2Shape * b2Shape::Clone(b2BlockAllocator * allocator) const
	static int _bind_Clone(lua_State *L) {
		if (!_lg_typecheck_Clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Shape * b2Shape::Clone(b2BlockAllocator * allocator) const function, expected prototype:\nb2Shape * b2Shape::Clone(b2BlockAllocator * allocator) const\nClass arguments details:\narg 1 ID = 76186022\n");
		}

		b2BlockAllocator* allocator=(Luna< b2BlockAllocator >::check(L,2));

		b2Shape* self=(Luna< b2Shape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Shape * b2Shape::Clone(b2BlockAllocator *) const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		b2Shape * lret = self->Clone(allocator);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Shape >::push(L,lret,false);

		return 1;
	}

	// b2Shape::Type b2Shape::GetType() const
	static int _bind_GetType(lua_State *L) {
		if (!_lg_typecheck_GetType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Shape::Type b2Shape::GetType() const function, expected prototype:\nb2Shape::Type b2Shape::GetType() const\nClass arguments details:\n");
		}


		b2Shape* self=(Luna< b2Shape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Shape::Type b2Shape::GetType() const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		b2Shape::Type lret = self->GetType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed int b2Shape::GetChildCount() const
	static int _bind_GetChildCount(lua_State *L) {
		if (!_lg_typecheck_GetChildCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2Shape::GetChildCount() const function, expected prototype:\nsigned int b2Shape::GetChildCount() const\nClass arguments details:\n");
		}


		b2Shape* self=(Luna< b2Shape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2Shape::GetChildCount() const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		signed int lret = self->GetChildCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool b2Shape::TestPoint(const b2Transform & xf, const b2Vec2 & p) const
	static int _bind_TestPoint(lua_State *L) {
		if (!_lg_typecheck_TestPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2Shape::TestPoint(const b2Transform & xf, const b2Vec2 & p) const function, expected prototype:\nbool b2Shape::TestPoint(const b2Transform & xf, const b2Vec2 & p) const\nClass arguments details:\narg 1 ID = 44090970\narg 2 ID = 54494886\n");
		}

		const b2Transform* xf_ptr=(Luna< b2Transform >::check(L,2));
		if( !xf_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg xf in b2Shape::TestPoint function");
		}
		const b2Transform & xf=*xf_ptr;
		const b2Vec2* p_ptr=(Luna< b2Vec2 >::check(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in b2Shape::TestPoint function");
		}
		const b2Vec2 & p=*p_ptr;

		b2Shape* self=(Luna< b2Shape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2Shape::TestPoint(const b2Transform &, const b2Vec2 &) const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		bool lret = self->TestPoint(xf, p);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool b2Shape::RayCast(b2RayCastOutput * output, const b2RayCastInput & input, const b2Transform & transform, signed int childIndex) const
	static int _bind_RayCast(lua_State *L) {
		if (!_lg_typecheck_RayCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2Shape::RayCast(b2RayCastOutput * output, const b2RayCastInput & input, const b2Transform & transform, signed int childIndex) const function, expected prototype:\nbool b2Shape::RayCast(b2RayCastOutput * output, const b2RayCastInput & input, const b2Transform & transform, signed int childIndex) const\nClass arguments details:\narg 1 ID = 78839054\narg 2 ID = 74209205\narg 3 ID = 44090970\n");
		}

		b2RayCastOutput* output=(Luna< b2RayCastOutput >::check(L,2));
		const b2RayCastInput* input_ptr=(Luna< b2RayCastInput >::check(L,3));
		if( !input_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg input in b2Shape::RayCast function");
		}
		const b2RayCastInput & input=*input_ptr;
		const b2Transform* transform_ptr=(Luna< b2Transform >::check(L,4));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in b2Shape::RayCast function");
		}
		const b2Transform & transform=*transform_ptr;
		signed int childIndex=(signed int)lua_tointeger(L,5);

		b2Shape* self=(Luna< b2Shape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2Shape::RayCast(b2RayCastOutput *, const b2RayCastInput &, const b2Transform &, signed int) const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		bool lret = self->RayCast(output, input, transform, childIndex);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void b2Shape::ComputeAABB(b2AABB * aabb, const b2Transform & xf, signed int childIndex) const
	static int _bind_ComputeAABB(lua_State *L) {
		if (!_lg_typecheck_ComputeAABB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Shape::ComputeAABB(b2AABB * aabb, const b2Transform & xf, signed int childIndex) const function, expected prototype:\nvoid b2Shape::ComputeAABB(b2AABB * aabb, const b2Transform & xf, signed int childIndex) const\nClass arguments details:\narg 1 ID = 53833672\narg 2 ID = 44090970\n");
		}

		b2AABB* aabb=(Luna< b2AABB >::check(L,2));
		const b2Transform* xf_ptr=(Luna< b2Transform >::check(L,3));
		if( !xf_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg xf in b2Shape::ComputeAABB function");
		}
		const b2Transform & xf=*xf_ptr;
		signed int childIndex=(signed int)lua_tointeger(L,4);

		b2Shape* self=(Luna< b2Shape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Shape::ComputeAABB(b2AABB *, const b2Transform &, signed int) const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		self->ComputeAABB(aabb, xf, childIndex);

		return 0;
	}

	// void b2Shape::ComputeMass(b2MassData * massData, float density) const
	static int _bind_ComputeMass(lua_State *L) {
		if (!_lg_typecheck_ComputeMass(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Shape::ComputeMass(b2MassData * massData, float density) const function, expected prototype:\nvoid b2Shape::ComputeMass(b2MassData * massData, float density) const\nClass arguments details:\narg 1 ID = 24760292\n");
		}

		b2MassData* massData=(Luna< b2MassData >::check(L,2));
		float density=(float)lua_tonumber(L,3);

		b2Shape* self=(Luna< b2Shape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Shape::ComputeMass(b2MassData *, float) const. Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		self->ComputeMass(massData, density);

		return 0;
	}

	// b2Shape::Type b2Shape::m_type()
	static int _bind_getM_type(lua_State *L) {
		if (!_lg_typecheck_getM_type(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Shape::Type b2Shape::m_type() function, expected prototype:\nb2Shape::Type b2Shape::m_type()\nClass arguments details:\n");
		}


		b2Shape* self=(Luna< b2Shape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Shape::Type b2Shape::m_type(). Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		b2Shape::Type lret = self->m_type;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2Shape::m_radius()
	static int _bind_getM_radius(lua_State *L) {
		if (!_lg_typecheck_getM_radius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Shape::m_radius() function, expected prototype:\nfloat b2Shape::m_radius()\nClass arguments details:\n");
		}


		b2Shape* self=(Luna< b2Shape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Shape::m_radius(). Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		float lret = self->m_radius;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2Shape::m_type(b2Shape::Type value)
	static int _bind_setM_type(lua_State *L) {
		if (!_lg_typecheck_setM_type(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Shape::m_type(b2Shape::Type value) function, expected prototype:\nvoid b2Shape::m_type(b2Shape::Type value)\nClass arguments details:\n");
		}

		b2Shape::Type value=(b2Shape::Type)lua_tointeger(L,2);

		b2Shape* self=(Luna< b2Shape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Shape::m_type(b2Shape::Type). Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		self->m_type = value;

		return 0;
	}

	// void b2Shape::m_radius(float value)
	static int _bind_setM_radius(lua_State *L) {
		if (!_lg_typecheck_setM_radius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Shape::m_radius(float value) function, expected prototype:\nvoid b2Shape::m_radius(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2Shape* self=(Luna< b2Shape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Shape::m_radius(float). Got : '%s'",typeid(Luna< b2Shape >::check(L,1)).name());
		}
		self->m_radius = value;

		return 0;
	}


	// Operator binds:

};

b2Shape* LunaTraits< b2Shape >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2Shape::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// b2Shape * b2Shape::Clone(b2BlockAllocator * allocator) const
	// signed int b2Shape::GetChildCount() const
	// bool b2Shape::TestPoint(const b2Transform & xf, const b2Vec2 & p) const
	// bool b2Shape::RayCast(b2RayCastOutput * output, const b2RayCastInput & input, const b2Transform & transform, signed int childIndex) const
	// void b2Shape::ComputeAABB(b2AABB * aabb, const b2Transform & xf, signed int childIndex) const
	// void b2Shape::ComputeMass(b2MassData * massData, float density) const
}

void LunaTraits< b2Shape >::_bind_dtor(b2Shape* obj) {
	delete obj;
}

const char LunaTraits< b2Shape >::className[] = "b2Shape";
const char LunaTraits< b2Shape >::fullName[] = "b2Shape";
const char LunaTraits< b2Shape >::moduleName[] = "box2d";
const char* LunaTraits< b2Shape >::parents[] = {0};
const int LunaTraits< b2Shape >::hash = 86660265;
const int LunaTraits< b2Shape >::uniqueIDs[] = {86660265,0};

luna_RegType LunaTraits< b2Shape >::methods[] = {
	{"Clone", &luna_wrapper_b2Shape::_bind_Clone},
	{"GetType", &luna_wrapper_b2Shape::_bind_GetType},
	{"GetChildCount", &luna_wrapper_b2Shape::_bind_GetChildCount},
	{"TestPoint", &luna_wrapper_b2Shape::_bind_TestPoint},
	{"RayCast", &luna_wrapper_b2Shape::_bind_RayCast},
	{"ComputeAABB", &luna_wrapper_b2Shape::_bind_ComputeAABB},
	{"ComputeMass", &luna_wrapper_b2Shape::_bind_ComputeMass},
	{"getM_type", &luna_wrapper_b2Shape::_bind_getM_type},
	{"getM_radius", &luna_wrapper_b2Shape::_bind_getM_radius},
	{"setM_type", &luna_wrapper_b2Shape::_bind_setM_type},
	{"setM_radius", &luna_wrapper_b2Shape::_bind_setM_radius},
	{"dynCast", &luna_wrapper_b2Shape::_bind_dynCast},
	{"__eq", &luna_wrapper_b2Shape::_bind___eq},
	{"getTable", &luna_wrapper_b2Shape::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< b2Shape >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2Shape >::enumValues[] = {
	{"e_circle", b2Shape::e_circle},
	{"e_edge", b2Shape::e_edge},
	{"e_polygon", b2Shape::e_polygon},
	{"e_chain", b2Shape::e_chain},
	{"e_typeCount", b2Shape::e_typeCount},
	{0,0}
};


