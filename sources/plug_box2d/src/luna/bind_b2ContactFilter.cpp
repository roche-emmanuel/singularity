#include <plug_common.h>

#include <luna/wrappers/wrapper_b2ContactFilter.h>

class luna_wrapper_b2ContactFilter {
public:
	typedef Luna< b2ContactFilter > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		b2ContactFilter* self=(Luna< b2ContactFilter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<b2ContactFilter,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,7470542) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2ContactFilter*)");
		}

		b2ContactFilter* rhs =(Luna< b2ContactFilter >::check(L,2));
		b2ContactFilter* self=(Luna< b2ContactFilter >::check(L,1));
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

		b2ContactFilter* self=(Luna< b2ContactFilter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2ContactFilter");
		
		return luna_dynamicCast(L,converters,"b2ContactFilter",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_ShouldCollide(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92969381)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,92969381)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ShouldCollide(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92969381)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,92969381)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2ContactFilter::b2ContactFilter()
	static b2ContactFilter* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2ContactFilter::b2ContactFilter() function, expected prototype:\nb2ContactFilter::b2ContactFilter()\nClass arguments details:\n");
		}


		return new b2ContactFilter();
	}

	// b2ContactFilter::b2ContactFilter(lua_Table * data)
	static b2ContactFilter* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2ContactFilter::b2ContactFilter(lua_Table * data) function, expected prototype:\nb2ContactFilter::b2ContactFilter(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_b2ContactFilter(L,NULL);
	}

	// Overload binder for b2ContactFilter::b2ContactFilter
	static b2ContactFilter* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function b2ContactFilter, cannot match any of the overloads for function b2ContactFilter:\n  b2ContactFilter()\n  b2ContactFilter(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// bool b2ContactFilter::ShouldCollide(b2Fixture * fixtureA, b2Fixture * fixtureB)
	static int _bind_ShouldCollide(lua_State *L) {
		if (!_lg_typecheck_ShouldCollide(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2ContactFilter::ShouldCollide(b2Fixture * fixtureA, b2Fixture * fixtureB) function, expected prototype:\nbool b2ContactFilter::ShouldCollide(b2Fixture * fixtureA, b2Fixture * fixtureB)\nClass arguments details:\narg 1 ID = 92969381\narg 2 ID = 92969381\n");
		}

		b2Fixture* fixtureA=(Luna< b2Fixture >::check(L,2));
		b2Fixture* fixtureB=(Luna< b2Fixture >::check(L,3));

		b2ContactFilter* self=(Luna< b2ContactFilter >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2ContactFilter::ShouldCollide(b2Fixture *, b2Fixture *). Got : '%s'",typeid(Luna< b2ContactFilter >::check(L,1)).name());
		}
		bool lret = self->ShouldCollide(fixtureA, fixtureB);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool b2ContactFilter::base_ShouldCollide(b2Fixture * fixtureA, b2Fixture * fixtureB)
	static int _bind_base_ShouldCollide(lua_State *L) {
		if (!_lg_typecheck_base_ShouldCollide(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2ContactFilter::base_ShouldCollide(b2Fixture * fixtureA, b2Fixture * fixtureB) function, expected prototype:\nbool b2ContactFilter::base_ShouldCollide(b2Fixture * fixtureA, b2Fixture * fixtureB)\nClass arguments details:\narg 1 ID = 92969381\narg 2 ID = 92969381\n");
		}

		b2Fixture* fixtureA=(Luna< b2Fixture >::check(L,2));
		b2Fixture* fixtureB=(Luna< b2Fixture >::check(L,3));

		b2ContactFilter* self=(Luna< b2ContactFilter >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2ContactFilter::base_ShouldCollide(b2Fixture *, b2Fixture *). Got : '%s'",typeid(Luna< b2ContactFilter >::check(L,1)).name());
		}
		bool lret = self->b2ContactFilter::ShouldCollide(fixtureA, fixtureB);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

b2ContactFilter* LunaTraits< b2ContactFilter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2ContactFilter::_bind_ctor(L);
}

void LunaTraits< b2ContactFilter >::_bind_dtor(b2ContactFilter* obj) {
	delete obj;
}

const char LunaTraits< b2ContactFilter >::className[] = "b2ContactFilter";
const char LunaTraits< b2ContactFilter >::fullName[] = "b2ContactFilter";
const char LunaTraits< b2ContactFilter >::moduleName[] = "box2d";
const char* LunaTraits< b2ContactFilter >::parents[] = {0};
const int LunaTraits< b2ContactFilter >::hash = 7470542;
const int LunaTraits< b2ContactFilter >::uniqueIDs[] = {7470542,0};

luna_RegType LunaTraits< b2ContactFilter >::methods[] = {
	{"ShouldCollide", &luna_wrapper_b2ContactFilter::_bind_ShouldCollide},
	{"base_ShouldCollide", &luna_wrapper_b2ContactFilter::_bind_base_ShouldCollide},
	{"dynCast", &luna_wrapper_b2ContactFilter::_bind_dynCast},
	{"__eq", &luna_wrapper_b2ContactFilter::_bind___eq},
	{"getTable", &luna_wrapper_b2ContactFilter::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< b2ContactFilter >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2ContactFilter >::enumValues[] = {
	{0,0}
};


