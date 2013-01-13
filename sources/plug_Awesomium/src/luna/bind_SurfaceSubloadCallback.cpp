#include <plug_common.h>

class luna_wrapper_SurfaceSubloadCallback {
public:
	typedef Luna< SurfaceSubloadCallback > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92967815) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SurfaceSubloadCallback*)");
		}

		SurfaceSubloadCallback* rhs =(Luna< SurfaceSubloadCallback >::check(L,2));
		SurfaceSubloadCallback* self=(Luna< SurfaceSubloadCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SurfaceSubloadCallback* self=(Luna< SurfaceSubloadCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SurfaceSubloadCallback");
		
		return luna_dynamicCast(L,converters,"SurfaceSubloadCallback",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,613205)) ) return false;
		return true;
	}


	// Function checkers:
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// SurfaceSubloadCallback::SurfaceSubloadCallback(Awesomium::WebView * view)
	static SurfaceSubloadCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SurfaceSubloadCallback::SurfaceSubloadCallback(Awesomium::WebView * view) function, expected prototype:\nSurfaceSubloadCallback::SurfaceSubloadCallback(Awesomium::WebView * view)\nClass arguments details:\narg 1 ID = 613205\n");
		}

		Awesomium::WebView* view=(Luna< Awesomium::WebView >::check(L,1));

		return new SurfaceSubloadCallback(view);
	}


	// Function binds:
	// void SurfaceSubloadCallback::load(const osg::Texture2D & texture, osg::State & state) const
	static int _bind_load(lua_State *L) {
		if (!_lg_typecheck_load(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SurfaceSubloadCallback::load(const osg::Texture2D & texture, osg::State & state) const function, expected prototype:\nvoid SurfaceSubloadCallback::load(const osg::Texture2D & texture, osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		const osg::Texture2D* texture_ptr=(Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,2));
		if( !texture_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg texture in SurfaceSubloadCallback::load function");
		}
		const osg::Texture2D & texture=*texture_ptr;
		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,3));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in SurfaceSubloadCallback::load function");
		}
		osg::State & state=*state_ptr;

		SurfaceSubloadCallback* self=(Luna< SurfaceSubloadCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SurfaceSubloadCallback::load(const osg::Texture2D &, osg::State &) const. Got : '%s'",typeid(Luna< SurfaceSubloadCallback >::check(L,1)).name());
		}
		self->load(texture, state);

		return 0;
	}

	// void SurfaceSubloadCallback::subload(const osg::Texture2D & texture, osg::State & state) const
	static int _bind_subload(lua_State *L) {
		if (!_lg_typecheck_subload(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SurfaceSubloadCallback::subload(const osg::Texture2D & texture, osg::State & state) const function, expected prototype:\nvoid SurfaceSubloadCallback::subload(const osg::Texture2D & texture, osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		const osg::Texture2D* texture_ptr=(Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,2));
		if( !texture_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg texture in SurfaceSubloadCallback::subload function");
		}
		const osg::Texture2D & texture=*texture_ptr;
		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,3));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in SurfaceSubloadCallback::subload function");
		}
		osg::State & state=*state_ptr;

		SurfaceSubloadCallback* self=(Luna< SurfaceSubloadCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SurfaceSubloadCallback::subload(const osg::Texture2D &, osg::State &) const. Got : '%s'",typeid(Luna< SurfaceSubloadCallback >::check(L,1)).name());
		}
		self->subload(texture, state);

		return 0;
	}


	// Operator binds:

};

SurfaceSubloadCallback* LunaTraits< SurfaceSubloadCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SurfaceSubloadCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< SurfaceSubloadCallback >::_bind_dtor(SurfaceSubloadCallback* obj) {
	delete obj;
}

const char LunaTraits< SurfaceSubloadCallback >::className[] = "SurfaceSubloadCallback";
const char LunaTraits< SurfaceSubloadCallback >::fullName[] = "SurfaceSubloadCallback";
const char LunaTraits< SurfaceSubloadCallback >::moduleName[] = "Awesomium";
const char* LunaTraits< SurfaceSubloadCallback >::parents[] = {0};
const int LunaTraits< SurfaceSubloadCallback >::hash = 92967815;
const int LunaTraits< SurfaceSubloadCallback >::uniqueIDs[] = {92967815,0};

luna_RegType LunaTraits< SurfaceSubloadCallback >::methods[] = {
	{"load", &luna_wrapper_SurfaceSubloadCallback::_bind_load},
	{"subload", &luna_wrapper_SurfaceSubloadCallback::_bind_subload},
	{"dynCast", &luna_wrapper_SurfaceSubloadCallback::_bind_dynCast},
	{"__eq", &luna_wrapper_SurfaceSubloadCallback::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< SurfaceSubloadCallback >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SurfaceSubloadCallback >::enumValues[] = {
	{0,0}
};


