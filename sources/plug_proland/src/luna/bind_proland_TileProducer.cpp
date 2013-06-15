#include <plug_common.h>

class luna_wrapper_proland_TileProducer {
public:
	typedef Luna< proland::TileProducer > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::TileProducer* self= (proland::TileProducer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::TileProducer >::push(L,self,false);
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
		//proland::TileProducer* ptr= dynamic_cast< proland::TileProducer* >(Luna< ork::Object >::check(L,1));
		proland::TileProducer* ptr= luna_caster< ork::Object, proland::TileProducer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::TileProducer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,1381405)) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::TileProducer::TileProducer(const char * type, const char * taskType, proland::TileCache * cache, bool gpuProducer)
	static proland::TileProducer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileProducer::TileProducer(const char * type, const char * taskType, proland::TileCache * cache, bool gpuProducer) function, expected prototype:\nproland::TileProducer::TileProducer(const char * type, const char * taskType, proland::TileCache * cache, bool gpuProducer)\nClass arguments details:\narg 3 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * type=(const char *)lua_tostring(L,1);
		const char * taskType=(const char *)lua_tostring(L,2);
		proland::TileCache* cache=(Luna< ork::Object >::checkSubType< proland::TileCache >(L,3));
		bool gpuProducer=(bool)(lua_toboolean(L,4)==1);

		return new proland::TileProducer(type, taskType, cache, gpuProducer);
	}


	// Function binds:

	// Operator binds:

};

proland::TileProducer* LunaTraits< proland::TileProducer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_TileProducer::_bind_ctor(L);
}

void LunaTraits< proland::TileProducer >::_bind_dtor(proland::TileProducer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::TileProducer >::className[] = "TileProducer";
const char LunaTraits< proland::TileProducer >::fullName[] = "proland::TileProducer";
const char LunaTraits< proland::TileProducer >::moduleName[] = "proland";
const char* LunaTraits< proland::TileProducer >::parents[] = {"ork.Object", 0};
const int LunaTraits< proland::TileProducer >::hash = 65411232;
const int LunaTraits< proland::TileProducer >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::TileProducer >::methods[] = {
	{"fromVoid", &luna_wrapper_proland_TileProducer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_TileProducer::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::TileProducer >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_TileProducer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::TileProducer >::enumValues[] = {
	{0,0}
};


