#include <plug_common.h>

class luna_wrapper_sgt_LandManager {
public:
	typedef Luna< sgt::LandManager > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70466920) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(sgt::LandManager*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgt::LandManager* rhs =(Luna< sgt::LandManager >::check(L,2));
		sgt::LandManager* self=(Luna< sgt::LandManager >::check(L,1));
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

		sgt::LandManager* self= (sgt::LandManager*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::LandManager >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70466920) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< sgt::LandManager >::check(L,1));
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

		sgt::LandManager* self=(Luna< sgt::LandManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::LandManager");
		
		return luna_dynamicCast(L,converters,"sgt::LandManager",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getVisibility_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,33161232) ) return false;
		if( (!(Luna< osg::Polytope::PlaneList >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,58086971) ) return false;
		if( (!(Luna< sgt::box3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVisibility_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303233) ) return false;
		if( (!(Luna< osg::Vec4d >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,58086971) ) return false;
		if( (!(Luna< sgt::box3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFrustumPlanes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67824815) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,33161232) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getError(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSubImage(lua_State *L) {
		if( lua_gettop(L)!=10 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,82342378) ) return false;
		if( !Luna<void>::has_uniqueid(L,10,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static sgt::LandManager::Visibility sgt::LandManager::getVisibility(const osg::Polytope::PlaneList & frustumPlanes, const sgt::box3d & b)
	static int _bind_getVisibility_overload_1(lua_State *L) {
		if (!_lg_typecheck_getVisibility_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in static sgt::LandManager::Visibility sgt::LandManager::getVisibility(const osg::Polytope::PlaneList & frustumPlanes, const sgt::box3d & b) function, expected prototype:\nstatic sgt::LandManager::Visibility sgt::LandManager::getVisibility(const osg::Polytope::PlaneList & frustumPlanes, const sgt::box3d & b)\nClass arguments details:\narg 2 ID = 58086971\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Polytope::PlaneList* frustumPlanes_ptr=(Luna< osg::Polytope::PlaneList >::check(L,1));
		if( !frustumPlanes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frustumPlanes in sgt::LandManager::getVisibility function");
		}
		const osg::Polytope::PlaneList & frustumPlanes=*frustumPlanes_ptr;
		const sgt::box3d* b_ptr=(Luna< sgt::box3d >::check(L,2));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in sgt::LandManager::getVisibility function");
		}
		const sgt::box3d & b=*b_ptr;

		sgt::LandManager::Visibility lret = sgt::LandManager::getVisibility(frustumPlanes, b);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static sgt::LandManager::Visibility sgt::LandManager::getVisibility(const osg::Vec4d & clip, const sgt::box3d & b)
	static int _bind_getVisibility_overload_2(lua_State *L) {
		if (!_lg_typecheck_getVisibility_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static sgt::LandManager::Visibility sgt::LandManager::getVisibility(const osg::Vec4d & clip, const sgt::box3d & b) function, expected prototype:\nstatic sgt::LandManager::Visibility sgt::LandManager::getVisibility(const osg::Vec4d & clip, const sgt::box3d & b)\nClass arguments details:\narg 2 ID = 58086971\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4d* clip_ptr=(Luna< osg::Vec4d >::check(L,1));
		if( !clip_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clip in sgt::LandManager::getVisibility function");
		}
		const osg::Vec4d & clip=*clip_ptr;
		const sgt::box3d* b_ptr=(Luna< sgt::box3d >::check(L,2));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in sgt::LandManager::getVisibility function");
		}
		const sgt::box3d & b=*b_ptr;

		sgt::LandManager::Visibility lret = sgt::LandManager::getVisibility(clip, b);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for sgt::LandManager::getVisibility
	static int _bind_getVisibility(lua_State *L) {
		if (_lg_typecheck_getVisibility_overload_1(L)) return _bind_getVisibility_overload_1(L);
		if (_lg_typecheck_getVisibility_overload_2(L)) return _bind_getVisibility_overload_2(L);

		luaL_error(L, "error in function getVisibility, cannot match any of the overloads for function getVisibility:\n  getVisibility(const osg::Polytope::PlaneList &, const sgt::box3d &)\n  getVisibility(const osg::Vec4d &, const sgt::box3d &)\n");
		return 0;
	}

	// static void sgt::LandManager::getFrustumPlanes(const sgt::mat4d & toScreen, osg::Polytope::PlaneList & planes)
	static int _bind_getFrustumPlanes(lua_State *L) {
		if (!_lg_typecheck_getFrustumPlanes(L)) {
			luaL_error(L, "luna typecheck failed in static void sgt::LandManager::getFrustumPlanes(const sgt::mat4d & toScreen, osg::Polytope::PlaneList & planes) function, expected prototype:\nstatic void sgt::LandManager::getFrustumPlanes(const sgt::mat4d & toScreen, osg::Polytope::PlaneList & planes)\nClass arguments details:\narg 1 ID = 67824815\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::mat4d* toScreen_ptr=(Luna< sgt::mat4d >::check(L,1));
		if( !toScreen_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg toScreen in sgt::LandManager::getFrustumPlanes function");
		}
		const sgt::mat4d & toScreen=*toScreen_ptr;
		osg::Polytope::PlaneList* planes_ptr=(Luna< osg::Polytope::PlaneList >::check(L,2));
		if( !planes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planes in sgt::LandManager::getFrustumPlanes function");
		}
		osg::Polytope::PlaneList & planes=*planes_ptr;

		sgt::LandManager::getFrustumPlanes(toScreen, planes);

		return 0;
	}

	// static unsigned int sgt::LandManager::getError()
	static int _bind_getError(lua_State *L) {
		if (!_lg_typecheck_getError(L)) {
			luaL_error(L, "luna typecheck failed in static unsigned int sgt::LandManager::getError() function, expected prototype:\nstatic unsigned int sgt::LandManager::getError()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		unsigned int lret = sgt::LandManager::getError();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static void sgt::LandManager::setSubImage(osg::Texture2D * tex, int level, int x, int y, int w, int h, sgt::TextureFormat f, sgt::PixelType t, const sgt::Buffer::Parameters & s, const sgt::Buffer & pixels)
	static int _bind_setSubImage(lua_State *L) {
		if (!_lg_typecheck_setSubImage(L)) {
			luaL_error(L, "luna typecheck failed in static void sgt::LandManager::setSubImage(osg::Texture2D * tex, int level, int x, int y, int w, int h, sgt::TextureFormat f, sgt::PixelType t, const sgt::Buffer::Parameters & s, const sgt::Buffer & pixels) function, expected prototype:\nstatic void sgt::LandManager::setSubImage(osg::Texture2D * tex, int level, int x, int y, int w, int h, sgt::TextureFormat f, sgt::PixelType t, const sgt::Buffer::Parameters & s, const sgt::Buffer & pixels)\nClass arguments details:\narg 9 ID = 82342378\narg 10 ID = 44367388\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Texture2D* tex=(Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1));
		int level=(int)lua_tointeger(L,2);
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);
		int w=(int)lua_tointeger(L,5);
		int h=(int)lua_tointeger(L,6);
		sgt::TextureFormat f=(sgt::TextureFormat)lua_tointeger(L,7);
		sgt::PixelType t=(sgt::PixelType)lua_tointeger(L,8);
		const sgt::Buffer::Parameters* s_ptr=(Luna< sgt::Buffer::Parameters >::check(L,9));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in sgt::LandManager::setSubImage function");
		}
		const sgt::Buffer::Parameters & s=*s_ptr;
		const sgt::Buffer* pixels_ptr=(Luna< osg::Referenced >::checkSubType< sgt::Buffer >(L,10));
		if( !pixels_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pixels in sgt::LandManager::setSubImage function");
		}
		const sgt::Buffer & pixels=*pixels_ptr;

		sgt::LandManager::setSubImage(tex, level, x, y, w, h, f, t, s, pixels);

		return 0;
	}


	// Operator binds:

};

sgt::LandManager* LunaTraits< sgt::LandManager >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< sgt::LandManager >::_bind_dtor(sgt::LandManager* obj) {
	delete obj;
}

const char LunaTraits< sgt::LandManager >::className[] = "LandManager";
const char LunaTraits< sgt::LandManager >::fullName[] = "sgt::LandManager";
const char LunaTraits< sgt::LandManager >::moduleName[] = "sgt";
const char* LunaTraits< sgt::LandManager >::parents[] = {0};
const int LunaTraits< sgt::LandManager >::hash = 70466920;
const int LunaTraits< sgt::LandManager >::uniqueIDs[] = {70466920,0};

luna_RegType LunaTraits< sgt::LandManager >::methods[] = {
	{"getVisibility", &luna_wrapper_sgt_LandManager::_bind_getVisibility},
	{"getFrustumPlanes", &luna_wrapper_sgt_LandManager::_bind_getFrustumPlanes},
	{"getError", &luna_wrapper_sgt_LandManager::_bind_getError},
	{"setSubImage", &luna_wrapper_sgt_LandManager::_bind_setSubImage},
	{"dynCast", &luna_wrapper_sgt_LandManager::_bind_dynCast},
	{"__eq", &luna_wrapper_sgt_LandManager::_bind___eq},
	{"fromVoid", &luna_wrapper_sgt_LandManager::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_LandManager::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::LandManager >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::LandManager >::enumValues[] = {
	{"FULLY_VISIBLE", sgt::LandManager::FULLY_VISIBLE},
	{"PARTIALLY_VISIBLE", sgt::LandManager::PARTIALLY_VISIBLE},
	{"INVISIBLE", sgt::LandManager::INVISIBLE},
	{0,0}
};


