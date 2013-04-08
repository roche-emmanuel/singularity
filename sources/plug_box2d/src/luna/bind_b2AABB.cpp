#include <plug_common.h>

class luna_wrapper_b2AABB {
public:
	typedef Luna< b2AABB > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53833672) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2AABB*)");
		}

		b2AABB* rhs =(Luna< b2AABB >::check(L,2));
		b2AABB* self=(Luna< b2AABB >::check(L,1));
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

		b2AABB* self= (b2AABB*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2AABB >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53833672) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< b2AABB >::check(L,1));
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

		b2AABB* self=(Luna< b2AABB >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2AABB");
		
		return luna_dynamicCast(L,converters,"b2AABB",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_IsValid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCenter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetExtents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPerimeter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Combine_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,53833672) ) return false;
		if( (!(Luna< b2AABB >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Combine_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,53833672) ) return false;
		if( (!(Luna< b2AABB >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,53833672) ) return false;
		if( (!(Luna< b2AABB >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Contains(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,53833672) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RayCast(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,78839054)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,74209205) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLowerBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUpperBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLowerBound(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUpperBound(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// bool b2AABB::IsValid() const
	static int _bind_IsValid(lua_State *L) {
		if (!_lg_typecheck_IsValid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2AABB::IsValid() const function, expected prototype:\nbool b2AABB::IsValid() const\nClass arguments details:\n");
		}


		b2AABB* self=(Luna< b2AABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2AABB::IsValid() const. Got : '%s'",typeid(Luna< b2AABB >::check(L,1)).name());
		}
		bool lret = self->IsValid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// b2Vec2 b2AABB::GetCenter() const
	static int _bind_GetCenter(lua_State *L) {
		if (!_lg_typecheck_GetCenter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2AABB::GetCenter() const function, expected prototype:\nb2Vec2 b2AABB::GetCenter() const\nClass arguments details:\n");
		}


		b2AABB* self=(Luna< b2AABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2AABB::GetCenter() const. Got : '%s'",typeid(Luna< b2AABB >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetCenter();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2AABB::GetExtents() const
	static int _bind_GetExtents(lua_State *L) {
		if (!_lg_typecheck_GetExtents(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2AABB::GetExtents() const function, expected prototype:\nb2Vec2 b2AABB::GetExtents() const\nClass arguments details:\n");
		}


		b2AABB* self=(Luna< b2AABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2AABB::GetExtents() const. Got : '%s'",typeid(Luna< b2AABB >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetExtents();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// float b2AABB::GetPerimeter() const
	static int _bind_GetPerimeter(lua_State *L) {
		if (!_lg_typecheck_GetPerimeter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2AABB::GetPerimeter() const function, expected prototype:\nfloat b2AABB::GetPerimeter() const\nClass arguments details:\n");
		}


		b2AABB* self=(Luna< b2AABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2AABB::GetPerimeter() const. Got : '%s'",typeid(Luna< b2AABB >::check(L,1)).name());
		}
		float lret = self->GetPerimeter();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2AABB::Combine(const b2AABB & aabb)
	static int _bind_Combine_overload_1(lua_State *L) {
		if (!_lg_typecheck_Combine_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2AABB::Combine(const b2AABB & aabb) function, expected prototype:\nvoid b2AABB::Combine(const b2AABB & aabb)\nClass arguments details:\narg 1 ID = 53833672\n");
		}

		const b2AABB* aabb_ptr=(Luna< b2AABB >::check(L,2));
		if( !aabb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabb in b2AABB::Combine function");
		}
		const b2AABB & aabb=*aabb_ptr;

		b2AABB* self=(Luna< b2AABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2AABB::Combine(const b2AABB &). Got : '%s'",typeid(Luna< b2AABB >::check(L,1)).name());
		}
		self->Combine(aabb);

		return 0;
	}

	// void b2AABB::Combine(const b2AABB & aabb1, const b2AABB & aabb2)
	static int _bind_Combine_overload_2(lua_State *L) {
		if (!_lg_typecheck_Combine_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2AABB::Combine(const b2AABB & aabb1, const b2AABB & aabb2) function, expected prototype:\nvoid b2AABB::Combine(const b2AABB & aabb1, const b2AABB & aabb2)\nClass arguments details:\narg 1 ID = 53833672\narg 2 ID = 53833672\n");
		}

		const b2AABB* aabb1_ptr=(Luna< b2AABB >::check(L,2));
		if( !aabb1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabb1 in b2AABB::Combine function");
		}
		const b2AABB & aabb1=*aabb1_ptr;
		const b2AABB* aabb2_ptr=(Luna< b2AABB >::check(L,3));
		if( !aabb2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabb2 in b2AABB::Combine function");
		}
		const b2AABB & aabb2=*aabb2_ptr;

		b2AABB* self=(Luna< b2AABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2AABB::Combine(const b2AABB &, const b2AABB &). Got : '%s'",typeid(Luna< b2AABB >::check(L,1)).name());
		}
		self->Combine(aabb1, aabb2);

		return 0;
	}

	// Overload binder for b2AABB::Combine
	static int _bind_Combine(lua_State *L) {
		if (_lg_typecheck_Combine_overload_1(L)) return _bind_Combine_overload_1(L);
		if (_lg_typecheck_Combine_overload_2(L)) return _bind_Combine_overload_2(L);

		luaL_error(L, "error in function Combine, cannot match any of the overloads for function Combine:\n  Combine(const b2AABB &)\n  Combine(const b2AABB &, const b2AABB &)\n");
		return 0;
	}

	// bool b2AABB::Contains(const b2AABB & aabb) const
	static int _bind_Contains(lua_State *L) {
		if (!_lg_typecheck_Contains(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2AABB::Contains(const b2AABB & aabb) const function, expected prototype:\nbool b2AABB::Contains(const b2AABB & aabb) const\nClass arguments details:\narg 1 ID = 53833672\n");
		}

		const b2AABB* aabb_ptr=(Luna< b2AABB >::check(L,2));
		if( !aabb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabb in b2AABB::Contains function");
		}
		const b2AABB & aabb=*aabb_ptr;

		b2AABB* self=(Luna< b2AABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2AABB::Contains(const b2AABB &) const. Got : '%s'",typeid(Luna< b2AABB >::check(L,1)).name());
		}
		bool lret = self->Contains(aabb);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool b2AABB::RayCast(b2RayCastOutput * output, const b2RayCastInput & input) const
	static int _bind_RayCast(lua_State *L) {
		if (!_lg_typecheck_RayCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2AABB::RayCast(b2RayCastOutput * output, const b2RayCastInput & input) const function, expected prototype:\nbool b2AABB::RayCast(b2RayCastOutput * output, const b2RayCastInput & input) const\nClass arguments details:\narg 1 ID = 78839054\narg 2 ID = 74209205\n");
		}

		b2RayCastOutput* output=(Luna< b2RayCastOutput >::check(L,2));
		const b2RayCastInput* input_ptr=(Luna< b2RayCastInput >::check(L,3));
		if( !input_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg input in b2AABB::RayCast function");
		}
		const b2RayCastInput & input=*input_ptr;

		b2AABB* self=(Luna< b2AABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2AABB::RayCast(b2RayCastOutput *, const b2RayCastInput &) const. Got : '%s'",typeid(Luna< b2AABB >::check(L,1)).name());
		}
		bool lret = self->RayCast(output, input);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// b2Vec2 b2AABB::lowerBound()
	static int _bind_getLowerBound(lua_State *L) {
		if (!_lg_typecheck_getLowerBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2AABB::lowerBound() function, expected prototype:\nb2Vec2 b2AABB::lowerBound()\nClass arguments details:\n");
		}


		b2AABB* self=(Luna< b2AABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2AABB::lowerBound(). Got : '%s'",typeid(Luna< b2AABB >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->lowerBound;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// b2Vec2 b2AABB::upperBound()
	static int _bind_getUpperBound(lua_State *L) {
		if (!_lg_typecheck_getUpperBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2AABB::upperBound() function, expected prototype:\nb2Vec2 b2AABB::upperBound()\nClass arguments details:\n");
		}


		b2AABB* self=(Luna< b2AABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2AABB::upperBound(). Got : '%s'",typeid(Luna< b2AABB >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->upperBound;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// void b2AABB::lowerBound(b2Vec2 value)
	static int _bind_setLowerBound(lua_State *L) {
		if (!_lg_typecheck_setLowerBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2AABB::lowerBound(b2Vec2 value) function, expected prototype:\nvoid b2AABB::lowerBound(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2AABB::lowerBound function");
		}
		b2Vec2 value=*value_ptr;

		b2AABB* self=(Luna< b2AABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2AABB::lowerBound(b2Vec2). Got : '%s'",typeid(Luna< b2AABB >::check(L,1)).name());
		}
		self->lowerBound = value;

		return 0;
	}

	// void b2AABB::upperBound(b2Vec2 value)
	static int _bind_setUpperBound(lua_State *L) {
		if (!_lg_typecheck_setUpperBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2AABB::upperBound(b2Vec2 value) function, expected prototype:\nvoid b2AABB::upperBound(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2AABB::upperBound function");
		}
		b2Vec2 value=*value_ptr;

		b2AABB* self=(Luna< b2AABB >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2AABB::upperBound(b2Vec2). Got : '%s'",typeid(Luna< b2AABB >::check(L,1)).name());
		}
		self->upperBound = value;

		return 0;
	}


	// Operator binds:

};

b2AABB* LunaTraits< b2AABB >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2AABB >::_bind_dtor(b2AABB* obj) {
	delete obj;
}

const char LunaTraits< b2AABB >::className[] = "b2AABB";
const char LunaTraits< b2AABB >::fullName[] = "b2AABB";
const char LunaTraits< b2AABB >::moduleName[] = "box2d";
const char* LunaTraits< b2AABB >::parents[] = {0};
const int LunaTraits< b2AABB >::hash = 53833672;
const int LunaTraits< b2AABB >::uniqueIDs[] = {53833672,0};

luna_RegType LunaTraits< b2AABB >::methods[] = {
	{"IsValid", &luna_wrapper_b2AABB::_bind_IsValid},
	{"GetCenter", &luna_wrapper_b2AABB::_bind_GetCenter},
	{"GetExtents", &luna_wrapper_b2AABB::_bind_GetExtents},
	{"GetPerimeter", &luna_wrapper_b2AABB::_bind_GetPerimeter},
	{"Combine", &luna_wrapper_b2AABB::_bind_Combine},
	{"Contains", &luna_wrapper_b2AABB::_bind_Contains},
	{"RayCast", &luna_wrapper_b2AABB::_bind_RayCast},
	{"getLowerBound", &luna_wrapper_b2AABB::_bind_getLowerBound},
	{"getUpperBound", &luna_wrapper_b2AABB::_bind_getUpperBound},
	{"setLowerBound", &luna_wrapper_b2AABB::_bind_setLowerBound},
	{"setUpperBound", &luna_wrapper_b2AABB::_bind_setUpperBound},
	{"dynCast", &luna_wrapper_b2AABB::_bind_dynCast},
	{"__eq", &luna_wrapper_b2AABB::_bind___eq},
	{"fromVoid", &luna_wrapper_b2AABB::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2AABB::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2AABB >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2AABB >::enumValues[] = {
	{0,0}
};


