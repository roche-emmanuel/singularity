#include <plug_common.h>

class luna_wrapper_osgGA_GUIEventHandlerVisitor {
public:
	typedef Luna< osgGA::GUIEventHandlerVisitor > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65490382) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgGA::GUIEventHandlerVisitor*)");
		}

		osgGA::GUIEventHandlerVisitor* rhs =(Luna< osgGA::GUIEventHandlerVisitor >::check(L,2));
		osgGA::GUIEventHandlerVisitor* self=(Luna< osgGA::GUIEventHandlerVisitor >::check(L,1));
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

		osgGA::GUIEventHandlerVisitor* self=(Luna< osgGA::GUIEventHandlerVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgGA::GUIEventHandlerVisitor");
		
		return luna_dynamicCast(L,converters,"osgGA::GUIEventHandlerVisitor",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_visit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void osgGA::GUIEventHandlerVisitor::visit(osgGA::GUIEventHandler & arg1)
	static int _bind_visit(lua_State *L) {
		if (!_lg_typecheck_visit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventHandlerVisitor::visit(osgGA::GUIEventHandler & arg1) function, expected prototype:\nvoid osgGA::GUIEventHandlerVisitor::visit(osgGA::GUIEventHandler & arg1)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgGA::GUIEventHandler* _arg1_ptr=dynamic_cast< osgGA::GUIEventHandler* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::GUIEventHandlerVisitor::visit function");
		}
		osgGA::GUIEventHandler & _arg1=*_arg1_ptr;

		osgGA::GUIEventHandlerVisitor* self=(Luna< osgGA::GUIEventHandlerVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventHandlerVisitor::visit(osgGA::GUIEventHandler &)");
		}
		self->visit(_arg1);

		return 0;
	}


	// Operator binds:

};

osgGA::GUIEventHandlerVisitor* LunaTraits< osgGA::GUIEventHandlerVisitor >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgGA::GUIEventHandlerVisitor >::_bind_dtor(osgGA::GUIEventHandlerVisitor* obj) {
	delete obj;
}

const char LunaTraits< osgGA::GUIEventHandlerVisitor >::className[] = "GUIEventHandlerVisitor";
const char LunaTraits< osgGA::GUIEventHandlerVisitor >::fullName[] = "osgGA::GUIEventHandlerVisitor";
const char LunaTraits< osgGA::GUIEventHandlerVisitor >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::GUIEventHandlerVisitor >::parents[] = {0};
const int LunaTraits< osgGA::GUIEventHandlerVisitor >::hash = 65490382;
const int LunaTraits< osgGA::GUIEventHandlerVisitor >::uniqueIDs[] = {65490382,0};

luna_RegType LunaTraits< osgGA::GUIEventHandlerVisitor >::methods[] = {
	{"visit", &luna_wrapper_osgGA_GUIEventHandlerVisitor::_bind_visit},
	{"dynCast", &luna_wrapper_osgGA_GUIEventHandlerVisitor::_bind_dynCast},
	{"__eq", &luna_wrapper_osgGA_GUIEventHandlerVisitor::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::GUIEventHandlerVisitor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::GUIEventHandlerVisitor >::enumValues[] = {
	{0,0}
};


