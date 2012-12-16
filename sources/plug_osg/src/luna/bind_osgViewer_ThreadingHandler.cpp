#include <plug_common.h>

#include <luna/wrappers/wrapper_osgViewer_ThreadingHandler.h>

class luna_wrapper_osgViewer_ThreadingHandler {
public:
	typedef Luna< osgViewer::ThreadingHandler > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
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
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osgViewer::ThreadingHandler* ptr= dynamic_cast< osgViewer::ThreadingHandler* >(Luna< osg::Referenced >::check(L,1));
		osgViewer::ThreadingHandler* ptr= luna_caster< osg::Referenced, osgViewer::ThreadingHandler >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::ThreadingHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgViewer::ThreadingHandler* LunaTraits< osgViewer::ThreadingHandler >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgViewer::ThreadingHandler >::_bind_dtor(osgViewer::ThreadingHandler* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::ThreadingHandler >::className[] = "ThreadingHandler";
const char LunaTraits< osgViewer::ThreadingHandler >::fullName[] = "osgViewer::ThreadingHandler";
const char LunaTraits< osgViewer::ThreadingHandler >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::ThreadingHandler >::parents[] = {"osgGA.GUIEventHandler", 0};
const int LunaTraits< osgViewer::ThreadingHandler >::hash = 9446248;
const int LunaTraits< osgViewer::ThreadingHandler >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgViewer::ThreadingHandler >::methods[] = {
	{"__eq", &luna_wrapper_osgViewer_ThreadingHandler::_bind___eq},
	{"getTable", &luna_wrapper_osgViewer_ThreadingHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::ThreadingHandler >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_ThreadingHandler::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::ThreadingHandler >::enumValues[] = {
	{0,0}
};


