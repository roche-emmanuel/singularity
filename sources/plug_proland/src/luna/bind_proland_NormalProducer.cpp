#include <plug_common.h>

class luna_wrapper_proland_NormalProducer {
public:
	typedef Luna< proland::NormalProducer > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::NormalProducer* self= (proland::NormalProducer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::NormalProducer >::push(L,self,false);
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
		//proland::NormalProducer* ptr= dynamic_cast< proland::NormalProducer* >(Luna< ork::Object >::check(L,1));
		proland::NormalProducer* ptr= luna_caster< ork::Object, proland::NormalProducer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::NormalProducer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,1381405)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,1381405)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,1381405)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::NormalProducer::NormalProducer(proland::TileCache * cache, proland::TileProducer * elevationTiles, ork::Texture2D * normalTexture, ork::Program * normals, int gridMeshSize, bool deform = false)
	static proland::NormalProducer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::NormalProducer::NormalProducer(proland::TileCache * cache, proland::TileProducer * elevationTiles, ork::Texture2D * normalTexture, ork::Program * normals, int gridMeshSize, bool deform = false) function, expected prototype:\nproland::NormalProducer::NormalProducer(proland::TileCache * cache, proland::TileProducer * elevationTiles, ork::Texture2D * normalTexture, ork::Program * normals, int gridMeshSize, bool deform = false)\nClass arguments details:\narg 1 ID = 1381405\narg 2 ID = 1381405\narg 3 ID = 1381405\narg 4 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		proland::TileCache* cache=(Luna< ork::Object >::checkSubType< proland::TileCache >(L,1));
		proland::TileProducer* elevationTiles=(Luna< ork::Object >::checkSubType< proland::TileProducer >(L,2));
		ork::Texture2D* normalTexture=(Luna< ork::Object >::checkSubType< ork::Texture2D >(L,3));
		ork::Program* normals=(Luna< ork::Object >::checkSubType< ork::Program >(L,4));
		int gridMeshSize=(int)lua_tointeger(L,5);
		bool deform=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)false;

		return new proland::NormalProducer(cache, elevationTiles, normalTexture, normals, gridMeshSize, deform);
	}


	// Function binds:

	// Operator binds:

};

proland::NormalProducer* LunaTraits< proland::NormalProducer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_NormalProducer::_bind_ctor(L);
}

void LunaTraits< proland::NormalProducer >::_bind_dtor(proland::NormalProducer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::NormalProducer >::className[] = "NormalProducer";
const char LunaTraits< proland::NormalProducer >::fullName[] = "proland::NormalProducer";
const char LunaTraits< proland::NormalProducer >::moduleName[] = "proland";
const char* LunaTraits< proland::NormalProducer >::parents[] = {"proland.TileProducer", 0};
const int LunaTraits< proland::NormalProducer >::hash = 65200646;
const int LunaTraits< proland::NormalProducer >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::NormalProducer >::methods[] = {
	{"fromVoid", &luna_wrapper_proland_NormalProducer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_NormalProducer::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::NormalProducer >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_NormalProducer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::NormalProducer >::enumValues[] = {
	{0,0}
};


