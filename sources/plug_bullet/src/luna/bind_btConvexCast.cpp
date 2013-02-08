#include <plug_common.h>

#include <luna/wrappers/wrapper_btConvexCast.h>

class luna_wrapper_btConvexCast {
public:
	typedef Luna< btConvexCast > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btConvexCast* self=(Luna< btConvexCast >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btConvexCast,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76300448) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btConvexCast*)");
		}

		btConvexCast* rhs =(Luna< btConvexCast >::check(L,2));
		btConvexCast* self=(Luna< btConvexCast >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
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

		btConvexCast* self= (btConvexCast*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btConvexCast >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76300448) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btConvexCast >::check(L,1));
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

		btConvexCast* self=(Luna< btConvexCast >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btConvexCast");
		
		return luna_dynamicCast(L,converters,"btConvexCast",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_calcTimeOfImpact(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,12958328) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btConvexCast::btConvexCast(lua_Table * data)
	static btConvexCast* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConvexCast::btConvexCast(lua_Table * data) function, expected prototype:\nbtConvexCast::btConvexCast(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btConvexCast(L,NULL);
	}


	// Function binds:
	// bool btConvexCast::calcTimeOfImpact(const btTransform & fromA, const btTransform & toA, const btTransform & fromB, const btTransform & toB, btConvexCast::CastResult & result)
	static int _bind_calcTimeOfImpact(lua_State *L) {
		if (!_lg_typecheck_calcTimeOfImpact(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btConvexCast::calcTimeOfImpact(const btTransform & fromA, const btTransform & toA, const btTransform & fromB, const btTransform & toB, btConvexCast::CastResult & result) function, expected prototype:\nbool btConvexCast::calcTimeOfImpact(const btTransform & fromA, const btTransform & toA, const btTransform & fromB, const btTransform & toB, btConvexCast::CastResult & result)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 13247377\narg 3 ID = 13247377\narg 4 ID = 13247377\narg 5 ID = 12958328\n");
		}

		const btTransform* fromA_ptr=(Luna< btTransform >::check(L,2));
		if( !fromA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fromA in btConvexCast::calcTimeOfImpact function");
		}
		const btTransform & fromA=*fromA_ptr;
		const btTransform* toA_ptr=(Luna< btTransform >::check(L,3));
		if( !toA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg toA in btConvexCast::calcTimeOfImpact function");
		}
		const btTransform & toA=*toA_ptr;
		const btTransform* fromB_ptr=(Luna< btTransform >::check(L,4));
		if( !fromB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fromB in btConvexCast::calcTimeOfImpact function");
		}
		const btTransform & fromB=*fromB_ptr;
		const btTransform* toB_ptr=(Luna< btTransform >::check(L,5));
		if( !toB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg toB in btConvexCast::calcTimeOfImpact function");
		}
		const btTransform & toB=*toB_ptr;
		btConvexCast::CastResult* result_ptr=(Luna< btConvexCast::CastResult >::check(L,6));
		if( !result_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg result in btConvexCast::calcTimeOfImpact function");
		}
		btConvexCast::CastResult & result=*result_ptr;

		btConvexCast* self=(Luna< btConvexCast >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btConvexCast::calcTimeOfImpact(const btTransform &, const btTransform &, const btTransform &, const btTransform &, btConvexCast::CastResult &). Got : '%s'",typeid(Luna< btConvexCast >::check(L,1)).name());
		}
		bool lret = self->calcTimeOfImpact(fromA, toA, fromB, toB, result);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

btConvexCast* LunaTraits< btConvexCast >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btConvexCast::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool btConvexCast::calcTimeOfImpact(const btTransform & fromA, const btTransform & toA, const btTransform & fromB, const btTransform & toB, btConvexCast::CastResult & result)
}

void LunaTraits< btConvexCast >::_bind_dtor(btConvexCast* obj) {
	delete obj;
}

const char LunaTraits< btConvexCast >::className[] = "btConvexCast";
const char LunaTraits< btConvexCast >::fullName[] = "btConvexCast";
const char LunaTraits< btConvexCast >::moduleName[] = "bullet";
const char* LunaTraits< btConvexCast >::parents[] = {0};
const int LunaTraits< btConvexCast >::hash = 76300448;
const int LunaTraits< btConvexCast >::uniqueIDs[] = {76300448,0};

luna_RegType LunaTraits< btConvexCast >::methods[] = {
	{"calcTimeOfImpact", &luna_wrapper_btConvexCast::_bind_calcTimeOfImpact},
	{"dynCast", &luna_wrapper_btConvexCast::_bind_dynCast},
	{"__eq", &luna_wrapper_btConvexCast::_bind___eq},
	{"fromVoid", &luna_wrapper_btConvexCast::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btConvexCast::_bind_asVoid},
	{"getTable", &luna_wrapper_btConvexCast::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btConvexCast >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btConvexCast >::enumValues[] = {
	{0,0}
};


