#include <plug_common.h>

class luna_wrapper_proland_TileCache {
public:
	typedef Luna< proland::TileCache > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::TileCache* self= (proland::TileCache*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::TileCache >::push(L,self,false);
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
		//proland::TileCache* ptr= dynamic_cast< proland::TileCache* >(Luna< ork::Object >::check(L,1));
		proland::TileCache* ptr= luna_caster< ork::Object, proland::TileCache >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::TileCache >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,1381405)) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,1381405)) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::TileCache::TileCache(proland::TileStorage * storage, std::string name, ork::Scheduler * scheduler = NULL)
	static proland::TileCache* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileCache::TileCache(proland::TileStorage * storage, std::string name, ork::Scheduler * scheduler = NULL) function, expected prototype:\nproland::TileCache::TileCache(proland::TileStorage * storage, std::string name, ork::Scheduler * scheduler = NULL)\nClass arguments details:\narg 1 ID = 1381405\narg 3 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		proland::TileStorage* storage=(Luna< ork::Object >::checkSubType< proland::TileStorage >(L,1));
		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		ork::Scheduler* scheduler=luatop>2 ? (Luna< ork::Object >::checkSubType< ork::Scheduler >(L,3)) : (ork::Scheduler*)NULL;

		return new proland::TileCache(storage, name, scheduler);
	}


	// Function binds:

	// Operator binds:

};

proland::TileCache* LunaTraits< proland::TileCache >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_TileCache::_bind_ctor(L);
}

void LunaTraits< proland::TileCache >::_bind_dtor(proland::TileCache* obj) {
	delete obj;
}

const char LunaTraits< proland::TileCache >::className[] = "TileCache";
const char LunaTraits< proland::TileCache >::fullName[] = "proland::TileCache";
const char LunaTraits< proland::TileCache >::moduleName[] = "proland";
const char* LunaTraits< proland::TileCache >::parents[] = {"ork.Object", 0};
const int LunaTraits< proland::TileCache >::hash = 4906634;
const int LunaTraits< proland::TileCache >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::TileCache >::methods[] = {
	{"fromVoid", &luna_wrapper_proland_TileCache::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_TileCache::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::TileCache >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_TileCache::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::TileCache >::enumValues[] = {
	{0,0}
};


