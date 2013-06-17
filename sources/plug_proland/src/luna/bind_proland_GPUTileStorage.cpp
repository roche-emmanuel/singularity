#include <plug_common.h>

class luna_wrapper_proland_GPUTileStorage {
public:
	typedef Luna< proland::GPUTileStorage > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::GPUTileStorage* self= (proland::GPUTileStorage*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::GPUTileStorage >::push(L,self,false);
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
		//proland::GPUTileStorage* ptr= dynamic_cast< proland::GPUTileStorage* >(Luna< ork::Object >::check(L,1));
		proland::GPUTileStorage* ptr= luna_caster< ork::Object, proland::GPUTileStorage >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::GPUTileStorage >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>7 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,84580371) ) return false;
		if( luatop>6 && lua_isboolean(L,7)==0 ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::GPUTileStorage::GPUTileStorage(int tileSize, int nTiles, ork::TextureInternalFormat internalf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, bool useTileMap = false)
	static proland::GPUTileStorage* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::GPUTileStorage::GPUTileStorage(int tileSize, int nTiles, ork::TextureInternalFormat internalf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, bool useTileMap = false) function, expected prototype:\nproland::GPUTileStorage::GPUTileStorage(int tileSize, int nTiles, ork::TextureInternalFormat internalf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, bool useTileMap = false)\nClass arguments details:\narg 6 ID = 84580371\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int tileSize=(int)lua_tointeger(L,1);
		int nTiles=(int)lua_tointeger(L,2);
		ork::TextureInternalFormat internalf=(ork::TextureInternalFormat)lua_tointeger(L,3);
		ork::TextureFormat f=(ork::TextureFormat)lua_tointeger(L,4);
		ork::PixelType t=(ork::PixelType)lua_tointeger(L,5);
		const ork::Texture::Parameters* params_ptr=(Luna< ork::Sampler::Parameters >::checkSubType< ork::Texture::Parameters >(L,6));
		if( !params_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg params in proland::GPUTileStorage::GPUTileStorage function");
		}
		const ork::Texture::Parameters & params=*params_ptr;
		bool useTileMap=luatop>6 ? (bool)(lua_toboolean(L,7)==1) : (bool)false;

		return new proland::GPUTileStorage(tileSize, nTiles, internalf, f, t, params, useTileMap);
	}


	// Function binds:

	// Operator binds:

};

proland::GPUTileStorage* LunaTraits< proland::GPUTileStorage >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_GPUTileStorage::_bind_ctor(L);
}

void LunaTraits< proland::GPUTileStorage >::_bind_dtor(proland::GPUTileStorage* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::GPUTileStorage >::className[] = "GPUTileStorage";
const char LunaTraits< proland::GPUTileStorage >::fullName[] = "proland::GPUTileStorage";
const char LunaTraits< proland::GPUTileStorage >::moduleName[] = "proland";
const char* LunaTraits< proland::GPUTileStorage >::parents[] = {"proland.TileStorage", 0};
const int LunaTraits< proland::GPUTileStorage >::hash = 92318219;
const int LunaTraits< proland::GPUTileStorage >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::GPUTileStorage >::methods[] = {
	{"fromVoid", &luna_wrapper_proland_GPUTileStorage::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_GPUTileStorage::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::GPUTileStorage >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_GPUTileStorage::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::GPUTileStorage >::enumValues[] = {
	{0,0}
};


