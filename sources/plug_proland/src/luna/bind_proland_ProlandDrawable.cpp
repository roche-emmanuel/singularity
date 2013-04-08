#include <plug_common.h>

class luna_wrapper_proland_ProlandDrawable {
public:
	typedef Luna< proland::ProlandDrawable > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Referenced*)");
		}

		osg::Referenced* rhs =(Luna< osg::Referenced >::check(L,2));
		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		proland::ProlandDrawable* self= (proland::ProlandDrawable*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::ProlandDrawable >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Drawable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//proland::ProlandDrawable* ptr= dynamic_cast< proland::ProlandDrawable* >(Luna< osg::Referenced >::check(L,1));
		proland::ProlandDrawable* ptr= luna_caster< osg::Referenced, proland::ProlandDrawable >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::ProlandDrawable >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::ProlandDrawable::ProlandDrawable(const std::string & archive, const std::string & data)
	static proland::ProlandDrawable* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in proland::ProlandDrawable::ProlandDrawable(const std::string & archive, const std::string & data) function, expected prototype:\nproland::ProlandDrawable::ProlandDrawable(const std::string & archive, const std::string & data)\nClass arguments details:\n");
		}

		std::string archive(lua_tostring(L,1),lua_objlen(L,1));
		std::string data(lua_tostring(L,2),lua_objlen(L,2));

		return new proland::ProlandDrawable(archive, data);
	}


	// Function binds:

	// Operator binds:

};

proland::ProlandDrawable* LunaTraits< proland::ProlandDrawable >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_ProlandDrawable::_bind_ctor(L);
}

void LunaTraits< proland::ProlandDrawable >::_bind_dtor(proland::ProlandDrawable* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< proland::ProlandDrawable >::className[] = "ProlandDrawable";
const char LunaTraits< proland::ProlandDrawable >::fullName[] = "proland::ProlandDrawable";
const char LunaTraits< proland::ProlandDrawable >::moduleName[] = "proland";
const char* LunaTraits< proland::ProlandDrawable >::parents[] = {"osg.Drawable", 0};
const int LunaTraits< proland::ProlandDrawable >::hash = 65200070;
const int LunaTraits< proland::ProlandDrawable >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< proland::ProlandDrawable >::methods[] = {
	{"__eq", &luna_wrapper_proland_ProlandDrawable::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_ProlandDrawable::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_ProlandDrawable::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::ProlandDrawable >::converters[] = {
	{"osg::Drawable", &luna_wrapper_proland_ProlandDrawable::_cast_from_Drawable},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::ProlandDrawable >::enumValues[] = {
	{0,0}
};


