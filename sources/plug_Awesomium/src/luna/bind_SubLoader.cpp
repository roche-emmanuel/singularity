#include <plug_common.h>

class luna_wrapper_SubLoader {
public:
	typedef Luna< SubLoader > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,84162755) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SubLoader*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SubLoader* rhs =(Luna< SubLoader >::check(L,2));
		SubLoader* self=(Luna< SubLoader >::check(L,1));
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

		SubLoader* self= (SubLoader*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SubLoader >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,84162755) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< SubLoader >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SubLoader* self=(Luna< SubLoader >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SubLoader");
		
		return luna_dynamicCast(L,converters,"SubLoader",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_textureObjectValid(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_load(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_subload(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSurfaceSize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addArea(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// SubLoader::SubLoader()
	static SubLoader* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in SubLoader::SubLoader() function, expected prototype:\nSubLoader::SubLoader()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new SubLoader();
	}


	// Function binds:
	// bool SubLoader::textureObjectValid(const osg::Texture2D & texture, osg::State & state) const
	static int _bind_textureObjectValid(lua_State *L) {
		if (!_lg_typecheck_textureObjectValid(L)) {
			luaL_error(L, "luna typecheck failed in bool SubLoader::textureObjectValid(const osg::Texture2D & texture, osg::State & state) const function, expected prototype:\nbool SubLoader::textureObjectValid(const osg::Texture2D & texture, osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Texture2D* texture_ptr=(Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,2));
		if( !texture_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg texture in SubLoader::textureObjectValid function");
		}
		const osg::Texture2D & texture=*texture_ptr;
		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,3));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in SubLoader::textureObjectValid function");
		}
		osg::State & state=*state_ptr;

		SubLoader* self=(Luna< SubLoader >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool SubLoader::textureObjectValid(const osg::Texture2D &, osg::State &) const. Got : '%s'\n%s",typeid(Luna< SubLoader >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->textureObjectValid(texture, state);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SubLoader::load(const osg::Texture2D & texture, osg::State & state) const
	static int _bind_load(lua_State *L) {
		if (!_lg_typecheck_load(L)) {
			luaL_error(L, "luna typecheck failed in void SubLoader::load(const osg::Texture2D & texture, osg::State & state) const function, expected prototype:\nvoid SubLoader::load(const osg::Texture2D & texture, osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Texture2D* texture_ptr=(Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,2));
		if( !texture_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg texture in SubLoader::load function");
		}
		const osg::Texture2D & texture=*texture_ptr;
		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,3));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in SubLoader::load function");
		}
		osg::State & state=*state_ptr;

		SubLoader* self=(Luna< SubLoader >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SubLoader::load(const osg::Texture2D &, osg::State &) const. Got : '%s'\n%s",typeid(Luna< SubLoader >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->load(texture, state);

		return 0;
	}

	// void SubLoader::subload(const osg::Texture2D & texture, osg::State & state) const
	static int _bind_subload(lua_State *L) {
		if (!_lg_typecheck_subload(L)) {
			luaL_error(L, "luna typecheck failed in void SubLoader::subload(const osg::Texture2D & texture, osg::State & state) const function, expected prototype:\nvoid SubLoader::subload(const osg::Texture2D & texture, osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Texture2D* texture_ptr=(Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,2));
		if( !texture_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg texture in SubLoader::subload function");
		}
		const osg::Texture2D & texture=*texture_ptr;
		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,3));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in SubLoader::subload function");
		}
		osg::State & state=*state_ptr;

		SubLoader* self=(Luna< SubLoader >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SubLoader::subload(const osg::Texture2D &, osg::State &) const. Got : '%s'\n%s",typeid(Luna< SubLoader >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->subload(texture, state);

		return 0;
	}

	// void SubLoader::setSurfaceSize(int width, int height)
	static int _bind_setSurfaceSize(lua_State *L) {
		if (!_lg_typecheck_setSurfaceSize(L)) {
			luaL_error(L, "luna typecheck failed in void SubLoader::setSurfaceSize(int width, int height) function, expected prototype:\nvoid SubLoader::setSurfaceSize(int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		SubLoader* self=(Luna< SubLoader >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SubLoader::setSurfaceSize(int, int). Got : '%s'\n%s",typeid(Luna< SubLoader >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSurfaceSize(width, height);

		return 0;
	}

	// void SubLoader::addArea(int xx, int yy, int ww, int hh, unsigned char * ptr)
	static int _bind_addArea(lua_State *L) {
		if (!_lg_typecheck_addArea(L)) {
			luaL_error(L, "luna typecheck failed in void SubLoader::addArea(int xx, int yy, int ww, int hh, unsigned char * ptr) function, expected prototype:\nvoid SubLoader::addArea(int xx, int yy, int ww, int hh, unsigned char * ptr)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int xx=(int)lua_tointeger(L,2);
		int yy=(int)lua_tointeger(L,3);
		int ww=(int)lua_tointeger(L,4);
		int hh=(int)lua_tointeger(L,5);
		unsigned char ptr = (unsigned char)(lua_tointeger(L,6));

		SubLoader* self=(Luna< SubLoader >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SubLoader::addArea(int, int, int, int, unsigned char *). Got : '%s'\n%s",typeid(Luna< SubLoader >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addArea(xx, yy, ww, hh, &ptr);

		return 0;
	}

	// unsigned char * SubLoader::getData(int xx, int yy)
	static int _bind_getData(lua_State *L) {
		if (!_lg_typecheck_getData(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char * SubLoader::getData(int xx, int yy) function, expected prototype:\nunsigned char * SubLoader::getData(int xx, int yy)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int xx=(int)lua_tointeger(L,2);
		int yy=(int)lua_tointeger(L,3);

		SubLoader* self=(Luna< SubLoader >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char * SubLoader::getData(int, int). Got : '%s'\n%s",typeid(Luna< SubLoader >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char * lret = self->getData(xx, yy);
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}


	// Operator binds:

};

SubLoader* LunaTraits< SubLoader >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SubLoader::_bind_ctor(L);
}

void LunaTraits< SubLoader >::_bind_dtor(SubLoader* obj) {
	delete obj;
}

const char LunaTraits< SubLoader >::className[] = "SubLoader";
const char LunaTraits< SubLoader >::fullName[] = "SubLoader";
const char LunaTraits< SubLoader >::moduleName[] = "Awesomium";
const char* LunaTraits< SubLoader >::parents[] = {0};
const int LunaTraits< SubLoader >::hash = 84162755;
const int LunaTraits< SubLoader >::uniqueIDs[] = {84162755,0};

luna_RegType LunaTraits< SubLoader >::methods[] = {
	{"textureObjectValid", &luna_wrapper_SubLoader::_bind_textureObjectValid},
	{"load", &luna_wrapper_SubLoader::_bind_load},
	{"subload", &luna_wrapper_SubLoader::_bind_subload},
	{"setSurfaceSize", &luna_wrapper_SubLoader::_bind_setSurfaceSize},
	{"addArea", &luna_wrapper_SubLoader::_bind_addArea},
	{"getData", &luna_wrapper_SubLoader::_bind_getData},
	{"dynCast", &luna_wrapper_SubLoader::_bind_dynCast},
	{"__eq", &luna_wrapper_SubLoader::_bind___eq},
	{"fromVoid", &luna_wrapper_SubLoader::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SubLoader::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< SubLoader >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SubLoader >::enumValues[] = {
	{0,0}
};


