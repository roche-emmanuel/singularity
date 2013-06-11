#include <plug_common.h>

class luna_wrapper_proland_TileStorage {
public:
	typedef Luna< proland::TileStorage > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::TileStorage* self= (proland::TileStorage*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::TileStorage >::push(L,self,false);
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
		//proland::TileStorage* ptr= dynamic_cast< proland::TileStorage* >(Luna< ork::Object >::check(L,1));
		proland::TileStorage* ptr= luna_caster< ork::Object, proland::TileStorage >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::TileStorage >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::TileStorage::TileStorage(int tileSize, int capacity)
	static proland::TileStorage* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileStorage::TileStorage(int tileSize, int capacity) function, expected prototype:\nproland::TileStorage::TileStorage(int tileSize, int capacity)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int tileSize=(int)lua_tointeger(L,1);
		int capacity=(int)lua_tointeger(L,2);

		return new proland::TileStorage(tileSize, capacity);
	}


	// Function binds:

	// Operator binds:

};

proland::TileStorage* LunaTraits< proland::TileStorage >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_TileStorage::_bind_ctor(L);
}

void LunaTraits< proland::TileStorage >::_bind_dtor(proland::TileStorage* obj) {
	delete obj;
}

const char LunaTraits< proland::TileStorage >::className[] = "TileStorage";
const char LunaTraits< proland::TileStorage >::fullName[] = "proland::TileStorage";
const char LunaTraits< proland::TileStorage >::moduleName[] = "proland";
const char* LunaTraits< proland::TileStorage >::parents[] = {"ork.Object", 0};
const int LunaTraits< proland::TileStorage >::hash = 70663957;
const int LunaTraits< proland::TileStorage >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::TileStorage >::methods[] = {
	{"fromVoid", &luna_wrapper_proland_TileStorage::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_TileStorage::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::TileStorage >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_TileStorage::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::TileStorage >::enumValues[] = {
	{0,0}
};


