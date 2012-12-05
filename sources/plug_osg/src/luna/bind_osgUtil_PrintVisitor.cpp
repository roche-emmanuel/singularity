#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_PrintVisitor.h>

class luna_wrapper_osgUtil_PrintVisitor {
public:
	typedef Luna< osgUtil::PrintVisitor > luna_t;

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
		osgUtil::PrintVisitor* ptr= dynamic_cast< osgUtil::PrintVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::PrintVisitor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_enter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_leave(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void osgUtil::PrintVisitor::apply(osg::Node & node)
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PrintVisitor::apply(osg::Node & node) function, expected prototype:\nvoid osgUtil::PrintVisitor::apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node_ptr=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::PrintVisitor::apply function");
		}
		osg::Node & node=*node_ptr;

		osgUtil::PrintVisitor* self=dynamic_cast< osgUtil::PrintVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PrintVisitor::apply(osg::Node &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::PrintVisitor::enter()
	static int _bind_enter(lua_State *L) {
		if (!_lg_typecheck_enter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PrintVisitor::enter() function, expected prototype:\nvoid osgUtil::PrintVisitor::enter()\nClass arguments details:\n");
		}


		osgUtil::PrintVisitor* self=dynamic_cast< osgUtil::PrintVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PrintVisitor::enter()");
		}
		self->enter();

		return 0;
	}

	// void osgUtil::PrintVisitor::leave()
	static int _bind_leave(lua_State *L) {
		if (!_lg_typecheck_leave(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PrintVisitor::leave() function, expected prototype:\nvoid osgUtil::PrintVisitor::leave()\nClass arguments details:\n");
		}


		osgUtil::PrintVisitor* self=dynamic_cast< osgUtil::PrintVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PrintVisitor::leave()");
		}
		self->leave();

		return 0;
	}


	// Operator binds:

};

osgUtil::PrintVisitor* LunaTraits< osgUtil::PrintVisitor >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::PrintVisitor >::_bind_dtor(osgUtil::PrintVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::PrintVisitor >::className[] = "PrintVisitor";
const char LunaTraits< osgUtil::PrintVisitor >::fullName[] = "osgUtil::PrintVisitor";
const char LunaTraits< osgUtil::PrintVisitor >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::PrintVisitor >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osgUtil::PrintVisitor >::hash = 29209162;
const int LunaTraits< osgUtil::PrintVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::PrintVisitor >::methods[] = {
	{"apply", &luna_wrapper_osgUtil_PrintVisitor::_bind_apply},
	{"enter", &luna_wrapper_osgUtil_PrintVisitor::_bind_enter},
	{"leave", &luna_wrapper_osgUtil_PrintVisitor::_bind_leave},
	{"__eq", &luna_wrapper_osgUtil_PrintVisitor::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::PrintVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_PrintVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::PrintVisitor >::enumValues[] = {
	{0,0}
};


