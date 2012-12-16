#include <plug_common.h>

#include <luna/wrappers/wrapper_osgGA_GUIActionAdapter.h>

class luna_wrapper_osgGA_GUIActionAdapter {
public:
	typedef Luna< osgGA::GUIActionAdapter > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		osgGA::GUIActionAdapter* self=(Luna< osgGA::GUIActionAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85302998) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgGA::GUIActionAdapter*)");
		}

		osgGA::GUIActionAdapter* rhs =(Luna< osgGA::GUIActionAdapter >::check(L,2));
		osgGA::GUIActionAdapter* self=(Luna< osgGA::GUIActionAdapter >::check(L,1));
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

		osgGA::GUIActionAdapter* self=(Luna< osgGA::GUIActionAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgGA::GUIActionAdapter");
		
		return luna_dynamicCast(L,converters,"osgGA::GUIActionAdapter",name);
	}


	// Function checkers:
	inline static bool _lg_typecheck_asView(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_requestRedraw(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_requestContinuousUpdate(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_requestWarpPointer(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_asView(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// osg::View * osgGA::GUIActionAdapter::asView()
	static int _bind_asView(lua_State *L) {
		if (!_lg_typecheck_asView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::View * osgGA::GUIActionAdapter::asView() function, expected prototype:\nosg::View * osgGA::GUIActionAdapter::asView()\nClass arguments details:\n");
		}


		osgGA::GUIActionAdapter* self=(Luna< osgGA::GUIActionAdapter >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::View * osgGA::GUIActionAdapter::asView()");
		}
		osg::View * lret = self->asView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::View >::push(L,lret,false);

		return 1;
	}

	// void osgGA::GUIActionAdapter::requestRedraw()
	static int _bind_requestRedraw(lua_State *L) {
		if (!_lg_typecheck_requestRedraw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIActionAdapter::requestRedraw() function, expected prototype:\nvoid osgGA::GUIActionAdapter::requestRedraw()\nClass arguments details:\n");
		}


		osgGA::GUIActionAdapter* self=(Luna< osgGA::GUIActionAdapter >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIActionAdapter::requestRedraw()");
		}
		self->requestRedraw();

		return 0;
	}

	// void osgGA::GUIActionAdapter::requestContinuousUpdate(bool needed = true)
	static int _bind_requestContinuousUpdate(lua_State *L) {
		if (!_lg_typecheck_requestContinuousUpdate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIActionAdapter::requestContinuousUpdate(bool needed = true) function, expected prototype:\nvoid osgGA::GUIActionAdapter::requestContinuousUpdate(bool needed = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool needed=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		osgGA::GUIActionAdapter* self=(Luna< osgGA::GUIActionAdapter >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIActionAdapter::requestContinuousUpdate(bool)");
		}
		self->requestContinuousUpdate(needed);

		return 0;
	}

	// void osgGA::GUIActionAdapter::requestWarpPointer(float x, float y)
	static int _bind_requestWarpPointer(lua_State *L) {
		if (!_lg_typecheck_requestWarpPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIActionAdapter::requestWarpPointer(float x, float y) function, expected prototype:\nvoid osgGA::GUIActionAdapter::requestWarpPointer(float x, float y)\nClass arguments details:\n");
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);

		osgGA::GUIActionAdapter* self=(Luna< osgGA::GUIActionAdapter >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIActionAdapter::requestWarpPointer(float, float)");
		}
		self->requestWarpPointer(x, y);

		return 0;
	}

	// osg::View * osgGA::GUIActionAdapter::base_asView()
	static int _bind_base_asView(lua_State *L) {
		if (!_lg_typecheck_base_asView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::View * osgGA::GUIActionAdapter::base_asView() function, expected prototype:\nosg::View * osgGA::GUIActionAdapter::base_asView()\nClass arguments details:\n");
		}


		osgGA::GUIActionAdapter* self=(Luna< osgGA::GUIActionAdapter >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::View * osgGA::GUIActionAdapter::base_asView()");
		}
		osg::View * lret = self->GUIActionAdapter::asView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::View >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

osgGA::GUIActionAdapter* LunaTraits< osgGA::GUIActionAdapter >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osgGA::GUIActionAdapter::requestRedraw()
	// void osgGA::GUIActionAdapter::requestContinuousUpdate(bool needed = true)
	// void osgGA::GUIActionAdapter::requestWarpPointer(float x, float y)
}

void LunaTraits< osgGA::GUIActionAdapter >::_bind_dtor(osgGA::GUIActionAdapter* obj) {
	delete obj;
}

const char LunaTraits< osgGA::GUIActionAdapter >::className[] = "GUIActionAdapter";
const char LunaTraits< osgGA::GUIActionAdapter >::fullName[] = "osgGA::GUIActionAdapter";
const char LunaTraits< osgGA::GUIActionAdapter >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::GUIActionAdapter >::parents[] = {0};
const int LunaTraits< osgGA::GUIActionAdapter >::hash = 85302998;
const int LunaTraits< osgGA::GUIActionAdapter >::uniqueIDs[] = {85302998,0};

luna_RegType LunaTraits< osgGA::GUIActionAdapter >::methods[] = {
	{"asView", &luna_wrapper_osgGA_GUIActionAdapter::_bind_asView},
	{"requestRedraw", &luna_wrapper_osgGA_GUIActionAdapter::_bind_requestRedraw},
	{"requestContinuousUpdate", &luna_wrapper_osgGA_GUIActionAdapter::_bind_requestContinuousUpdate},
	{"requestWarpPointer", &luna_wrapper_osgGA_GUIActionAdapter::_bind_requestWarpPointer},
	{"base_asView", &luna_wrapper_osgGA_GUIActionAdapter::_bind_base_asView},
	{"dynCast", &luna_wrapper_osgGA_GUIActionAdapter::_bind_dynCast},
	{"__eq", &luna_wrapper_osgGA_GUIActionAdapter::_bind___eq},
	{"getTable", &luna_wrapper_osgGA_GUIActionAdapter::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::GUIActionAdapter >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::GUIActionAdapter >::enumValues[] = {
	{0,0}
};


