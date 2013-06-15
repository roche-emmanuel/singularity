#include <plug_common.h>

class luna_wrapper_proland_ElevationProducer {
public:
	typedef Luna< proland::ElevationProducer > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::ElevationProducer* self= (proland::ElevationProducer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::ElevationProducer >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Object(lua_State *L) {
		// all checked are already performed before reaching this point.
		//proland::ElevationProducer* ptr= dynamic_cast< proland::ElevationProducer* >(Luna< ork::Object >::check(L,1));
		proland::ElevationProducer* ptr= luna_caster< ork::Object, proland::ElevationProducer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::ElevationProducer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

proland::ElevationProducer* LunaTraits< proland::ElevationProducer >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< proland::ElevationProducer >::_bind_dtor(proland::ElevationProducer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::ElevationProducer >::className[] = "ElevationProducer";
const char LunaTraits< proland::ElevationProducer >::fullName[] = "proland::ElevationProducer";
const char LunaTraits< proland::ElevationProducer >::moduleName[] = "proland";
const char* LunaTraits< proland::ElevationProducer >::parents[] = {"proland.TileProducer", 0};
const int LunaTraits< proland::ElevationProducer >::hash = 93566498;
const int LunaTraits< proland::ElevationProducer >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::ElevationProducer >::methods[] = {
	{"fromVoid", &luna_wrapper_proland_ElevationProducer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_ElevationProducer::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::ElevationProducer >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_ElevationProducer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::ElevationProducer >::enumValues[] = {
	{0,0}
};


