#include <plug_common.h>

class luna_wrapper_osgUtil_DrawElementTypeSimplifierVisitor {
public:
	typedef Luna< osgUtil::DrawElementTypeSimplifierVisitor > luna_t;

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
		osgUtil::DrawElementTypeSimplifierVisitor* ptr= dynamic_cast< osgUtil::DrawElementTypeSimplifierVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::DrawElementTypeSimplifierVisitor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// const char * osgUtil::DrawElementTypeSimplifierVisitor::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::DrawElementTypeSimplifierVisitor::libraryName() const function, expected prototype:\nconst char * osgUtil::DrawElementTypeSimplifierVisitor::libraryName() const\nClass arguments details:\n");
		}


		osgUtil::DrawElementTypeSimplifierVisitor* self=dynamic_cast< osgUtil::DrawElementTypeSimplifierVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::DrawElementTypeSimplifierVisitor::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::DrawElementTypeSimplifierVisitor::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::DrawElementTypeSimplifierVisitor::className() const function, expected prototype:\nconst char * osgUtil::DrawElementTypeSimplifierVisitor::className() const\nClass arguments details:\n");
		}


		osgUtil::DrawElementTypeSimplifierVisitor* self=dynamic_cast< osgUtil::DrawElementTypeSimplifierVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::DrawElementTypeSimplifierVisitor::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::DrawElementTypeSimplifierVisitor::apply(osg::Geode & node)
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::DrawElementTypeSimplifierVisitor::apply(osg::Geode & node) function, expected prototype:\nvoid osgUtil::DrawElementTypeSimplifierVisitor::apply(osg::Geode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* node_ptr=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::DrawElementTypeSimplifierVisitor::apply function");
		}
		osg::Geode & node=*node_ptr;

		osgUtil::DrawElementTypeSimplifierVisitor* self=dynamic_cast< osgUtil::DrawElementTypeSimplifierVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::DrawElementTypeSimplifierVisitor::apply(osg::Geode &)");
		}
		self->apply(node);

		return 0;
	}


	// Operator binds:

};

osgUtil::DrawElementTypeSimplifierVisitor* LunaTraits< osgUtil::DrawElementTypeSimplifierVisitor >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::DrawElementTypeSimplifierVisitor >::_bind_dtor(osgUtil::DrawElementTypeSimplifierVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::DrawElementTypeSimplifierVisitor >::className[] = "DrawElementTypeSimplifierVisitor";
const char LunaTraits< osgUtil::DrawElementTypeSimplifierVisitor >::fullName[] = "osgUtil::DrawElementTypeSimplifierVisitor";
const char LunaTraits< osgUtil::DrawElementTypeSimplifierVisitor >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::DrawElementTypeSimplifierVisitor >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osgUtil::DrawElementTypeSimplifierVisitor >::hash = 75967435;
const int LunaTraits< osgUtil::DrawElementTypeSimplifierVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::DrawElementTypeSimplifierVisitor >::methods[] = {
	{"libraryName", &luna_wrapper_osgUtil_DrawElementTypeSimplifierVisitor::_bind_libraryName},
	{"className", &luna_wrapper_osgUtil_DrawElementTypeSimplifierVisitor::_bind_className},
	{"apply", &luna_wrapper_osgUtil_DrawElementTypeSimplifierVisitor::_bind_apply},
	{"__eq", &luna_wrapper_osgUtil_DrawElementTypeSimplifierVisitor::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::DrawElementTypeSimplifierVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_DrawElementTypeSimplifierVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::DrawElementTypeSimplifierVisitor >::enumValues[] = {
	{0,0}
};


