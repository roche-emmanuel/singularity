#include <plug_common.h>

class luna_wrapper_ork_ptr_proland_TileSampler {
public:
	typedef Luna< ork::ptr< proland::TileSampler > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,12192224) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::ptr< proland::TileSampler >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileSampler >* rhs =(Luna< ork::ptr< proland::TileSampler > >::check(L,2));
		ork::ptr< proland::TileSampler >* self=(Luna< ork::ptr< proland::TileSampler > >::check(L,1));
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

		ork::ptr< proland::TileSampler >* self= (ork::ptr< proland::TileSampler >*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::ptr< proland::TileSampler > >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,12192224) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::ptr< proland::TileSampler > >::check(L,1));
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
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::ptr< proland::TileSampler >* self=(Luna< ork::ptr< proland::TileSampler > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::ptr< proland::TileSampler >");
		
		return luna_dynamicCast(L,converters,"ork::ptr< proland::TileSampler >",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

ork::ptr< proland::TileSampler >* LunaTraits< ork::ptr< proland::TileSampler > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< ork::ptr< proland::TileSampler > >::_bind_dtor(ork::ptr< proland::TileSampler >* obj) {
	delete obj;
}

const char LunaTraits< ork::ptr< proland::TileSampler > >::className[] = "ptr_proland_TileSampler";
const char LunaTraits< ork::ptr< proland::TileSampler > >::fullName[] = "ork::ptr< proland::TileSampler >";
const char LunaTraits< ork::ptr< proland::TileSampler > >::moduleName[] = "ork";
const char* LunaTraits< ork::ptr< proland::TileSampler > >::parents[] = {0};
const int LunaTraits< ork::ptr< proland::TileSampler > >::hash = 12192224;
const int LunaTraits< ork::ptr< proland::TileSampler > >::uniqueIDs[] = {12192224,0};

luna_RegType LunaTraits< ork::ptr< proland::TileSampler > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_ptr_proland_TileSampler::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_ptr_proland_TileSampler::_bind___eq},
	{"fromVoid", &luna_wrapper_ork_ptr_proland_TileSampler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_ptr_proland_TileSampler::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::ptr< proland::TileSampler > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::ptr< proland::TileSampler > >::enumValues[] = {
	{0,0}
};

