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
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<9 || luatop>10 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,1381405)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,1381405)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,1381405)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,1381405)) ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,1381405)) ) return false;
		if( (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,1381405)) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,77249888) ) return false;
		if( luatop>9 && lua_isboolean(L,10)==0 ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::ElevationProducer::ElevationProducer(proland::TileCache * cache, proland::TileProducer * residualTiles, ork::Texture2D * demTexture, ork::Texture2D * layerTexture, ork::Texture2D * residualTexture, ork::Program * upsample, ork::Program * blend, int gridMeshSize, std::vector< float > & noiseAmp, bool flipDiagonals = false)
	static proland::ElevationProducer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::ElevationProducer::ElevationProducer(proland::TileCache * cache, proland::TileProducer * residualTiles, ork::Texture2D * demTexture, ork::Texture2D * layerTexture, ork::Texture2D * residualTexture, ork::Program * upsample, ork::Program * blend, int gridMeshSize, std::vector< float > & noiseAmp, bool flipDiagonals = false) function, expected prototype:\nproland::ElevationProducer::ElevationProducer(proland::TileCache * cache, proland::TileProducer * residualTiles, ork::Texture2D * demTexture, ork::Texture2D * layerTexture, ork::Texture2D * residualTexture, ork::Program * upsample, ork::Program * blend, int gridMeshSize, std::vector< float > & noiseAmp, bool flipDiagonals = false)\nClass arguments details:\narg 1 ID = 1381405\narg 2 ID = 1381405\narg 3 ID = 1381405\narg 4 ID = 1381405\narg 5 ID = 1381405\narg 6 ID = 1381405\narg 7 ID = 1381405\narg 9 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		proland::TileCache* cache=(Luna< ork::Object >::checkSubType< proland::TileCache >(L,1));
		proland::TileProducer* residualTiles=(Luna< ork::Object >::checkSubType< proland::TileProducer >(L,2));
		ork::Texture2D* demTexture=(Luna< ork::Object >::checkSubType< ork::Texture2D >(L,3));
		ork::Texture2D* layerTexture=(Luna< ork::Object >::checkSubType< ork::Texture2D >(L,4));
		ork::Texture2D* residualTexture=(Luna< ork::Object >::checkSubType< ork::Texture2D >(L,5));
		ork::Program* upsample=(Luna< ork::Object >::checkSubType< ork::Program >(L,6));
		ork::Program* blend=(Luna< ork::Object >::checkSubType< ork::Program >(L,7));
		int gridMeshSize=(int)lua_tointeger(L,8);
		std::vector< float >* noiseAmp_ptr=(Luna< std::vector< float > >::check(L,9));
		if( !noiseAmp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg noiseAmp in proland::ElevationProducer::ElevationProducer function");
		}
		std::vector< float > & noiseAmp=*noiseAmp_ptr;
		bool flipDiagonals=luatop>9 ? (bool)(lua_toboolean(L,10)==1) : (bool)false;

		return new proland::ElevationProducer(cache, residualTiles, demTexture, layerTexture, residualTexture, upsample, blend, gridMeshSize, noiseAmp, flipDiagonals);
	}


	// Function binds:

	// Operator binds:

};

proland::ElevationProducer* LunaTraits< proland::ElevationProducer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_ElevationProducer::_bind_ctor(L);
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


