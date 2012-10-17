#include <plug_common.h>

class luna_wrapper_osg_Camera_Attachment {
public:
	typedef Luna< osg::Camera::Attachment > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65796671) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Camera::Attachment*)");
		}

		osg::Camera::Attachment* rhs =(Luna< osg::Camera::Attachment >::check(L,2));
		osg::Camera::Attachment* self=(Luna< osg::Camera::Attachment >::check(L,1));
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

		osg::Camera::Attachment* self=(Luna< osg::Camera::Attachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Camera::Attachment");
		
		return luna_dynamicCast(L,converters,"osg::Camera::Attachment",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_width(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_height(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_depth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Camera::Attachment::Attachment()
	static osg::Camera::Attachment* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Camera::Attachment::Attachment() function, expected prototype:\nosg::Camera::Attachment::Attachment()\nClass arguments details:\n");
		}


		return new osg::Camera::Attachment();
	}


	// Function binds:
	// int osg::Camera::Attachment::width() const
	static int _bind_width(lua_State *L) {
		if (!_lg_typecheck_width(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Camera::Attachment::width() const function, expected prototype:\nint osg::Camera::Attachment::width() const\nClass arguments details:\n");
		}


		osg::Camera::Attachment* self=(Luna< osg::Camera::Attachment >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Camera::Attachment::width() const");
		}
		int lret = self->width();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Camera::Attachment::height() const
	static int _bind_height(lua_State *L) {
		if (!_lg_typecheck_height(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Camera::Attachment::height() const function, expected prototype:\nint osg::Camera::Attachment::height() const\nClass arguments details:\n");
		}


		osg::Camera::Attachment* self=(Luna< osg::Camera::Attachment >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Camera::Attachment::height() const");
		}
		int lret = self->height();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Camera::Attachment::depth() const
	static int _bind_depth(lua_State *L) {
		if (!_lg_typecheck_depth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Camera::Attachment::depth() const function, expected prototype:\nint osg::Camera::Attachment::depth() const\nClass arguments details:\n");
		}


		osg::Camera::Attachment* self=(Luna< osg::Camera::Attachment >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Camera::Attachment::depth() const");
		}
		int lret = self->depth();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::Camera::Attachment* LunaTraits< osg::Camera::Attachment >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Camera_Attachment::_bind_ctor(L);
}

void LunaTraits< osg::Camera::Attachment >::_bind_dtor(osg::Camera::Attachment* obj) {
	delete obj;
}

const char LunaTraits< osg::Camera::Attachment >::className[] = "Attachment";
const char LunaTraits< osg::Camera::Attachment >::fullName[] = "osg::Camera::Attachment";
const char LunaTraits< osg::Camera::Attachment >::moduleName[] = "osg";
const char* LunaTraits< osg::Camera::Attachment >::parents[] = {0};
const int LunaTraits< osg::Camera::Attachment >::hash = 65796671;
const int LunaTraits< osg::Camera::Attachment >::uniqueIDs[] = {65796671,0};

luna_RegType LunaTraits< osg::Camera::Attachment >::methods[] = {
	{"width", &luna_wrapper_osg_Camera_Attachment::_bind_width},
	{"height", &luna_wrapper_osg_Camera_Attachment::_bind_height},
	{"depth", &luna_wrapper_osg_Camera_Attachment::_bind_depth},
	{"dynCast", &luna_wrapper_osg_Camera_Attachment::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Camera_Attachment::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Camera::Attachment >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Camera::Attachment >::enumValues[] = {
	{0,0}
};


