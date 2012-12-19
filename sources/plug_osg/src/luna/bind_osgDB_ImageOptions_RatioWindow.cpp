#include <plug_common.h>

class luna_wrapper_osgDB_ImageOptions_RatioWindow {
public:
	typedef Luna< osgDB::ImageOptions::RatioWindow > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,44466488) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::ImageOptions::RatioWindow*)");
		}

		osgDB::ImageOptions::RatioWindow* rhs =(Luna< osgDB::ImageOptions::RatioWindow >::check(L,2));
		osgDB::ImageOptions::RatioWindow* self=(Luna< osgDB::ImageOptions::RatioWindow >::check(L,1));
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

		osgDB::ImageOptions::RatioWindow* self=(Luna< osgDB::ImageOptions::RatioWindow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::ImageOptions::RatioWindow");
		
		return luna_dynamicCast(L,converters,"osgDB::ImageOptions::RatioWindow",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_set(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::ImageOptions::RatioWindow::RatioWindow()
	static osgDB::ImageOptions::RatioWindow* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ImageOptions::RatioWindow::RatioWindow() function, expected prototype:\nosgDB::ImageOptions::RatioWindow::RatioWindow()\nClass arguments details:\n");
		}


		return new osgDB::ImageOptions::RatioWindow();
	}


	// Function binds:
	// void osgDB::ImageOptions::RatioWindow::set(double x, double y, double w, double h)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::RatioWindow::set(double x, double y, double w, double h) function, expected prototype:\nvoid osgDB::ImageOptions::RatioWindow::set(double x, double y, double w, double h)\nClass arguments details:\n");
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		double w=(double)lua_tonumber(L,4);
		double h=(double)lua_tonumber(L,5);

		osgDB::ImageOptions::RatioWindow* self=(Luna< osgDB::ImageOptions::RatioWindow >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::RatioWindow::set(double, double, double, double)");
		}
		self->set(x, y, w, h);

		return 0;
	}


	// Operator binds:

};

osgDB::ImageOptions::RatioWindow* LunaTraits< osgDB::ImageOptions::RatioWindow >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_ImageOptions_RatioWindow::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgDB::ImageOptions::RatioWindow >::_bind_dtor(osgDB::ImageOptions::RatioWindow* obj) {
	delete obj;
}

const char LunaTraits< osgDB::ImageOptions::RatioWindow >::className[] = "RatioWindow";
const char LunaTraits< osgDB::ImageOptions::RatioWindow >::fullName[] = "osgDB::ImageOptions::RatioWindow";
const char LunaTraits< osgDB::ImageOptions::RatioWindow >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ImageOptions::RatioWindow >::parents[] = {0};
const int LunaTraits< osgDB::ImageOptions::RatioWindow >::hash = 44466488;
const int LunaTraits< osgDB::ImageOptions::RatioWindow >::uniqueIDs[] = {44466488,0};

luna_RegType LunaTraits< osgDB::ImageOptions::RatioWindow >::methods[] = {
	{"set", &luna_wrapper_osgDB_ImageOptions_RatioWindow::_bind_set},
	{"dynCast", &luna_wrapper_osgDB_ImageOptions_RatioWindow::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_ImageOptions_RatioWindow::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ImageOptions::RatioWindow >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ImageOptions::RatioWindow >::enumValues[] = {
	{0,0}
};


