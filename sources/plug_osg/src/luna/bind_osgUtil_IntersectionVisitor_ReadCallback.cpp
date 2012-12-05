#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_IntersectionVisitor_ReadCallback.h>

class luna_wrapper_osgUtil_IntersectionVisitor_ReadCallback {
public:
	typedef Luna< osgUtil::IntersectionVisitor::ReadCallback > luna_t;

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
		osgUtil::IntersectionVisitor::ReadCallback* ptr= dynamic_cast< osgUtil::IntersectionVisitor::ReadCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::IntersectionVisitor::ReadCallback >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_readNodeFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// osg::Node * osgUtil::IntersectionVisitor::ReadCallback::readNodeFile(const std::string & filename)
	static int _bind_readNodeFile(lua_State *L) {
		if (!_lg_typecheck_readNodeFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Node * osgUtil::IntersectionVisitor::ReadCallback::readNodeFile(const std::string & filename) function, expected prototype:\nosg::Node * osgUtil::IntersectionVisitor::ReadCallback::readNodeFile(const std::string & filename)\nClass arguments details:\n");
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));

		osgUtil::IntersectionVisitor::ReadCallback* self=dynamic_cast< osgUtil::IntersectionVisitor::ReadCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Node * osgUtil::IntersectionVisitor::ReadCallback::readNodeFile(const std::string &)");
		}
		osg::Node * lret = self->readNodeFile(filename);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

osgUtil::IntersectionVisitor::ReadCallback* LunaTraits< osgUtil::IntersectionVisitor::ReadCallback >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// osg::Node * osgUtil::IntersectionVisitor::ReadCallback::readNodeFile(const std::string & filename)
}

void LunaTraits< osgUtil::IntersectionVisitor::ReadCallback >::_bind_dtor(osgUtil::IntersectionVisitor::ReadCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::IntersectionVisitor::ReadCallback >::className[] = "ReadCallback";
const char LunaTraits< osgUtil::IntersectionVisitor::ReadCallback >::fullName[] = "osgUtil::IntersectionVisitor::ReadCallback";
const char LunaTraits< osgUtil::IntersectionVisitor::ReadCallback >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::IntersectionVisitor::ReadCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::IntersectionVisitor::ReadCallback >::hash = 39625449;
const int LunaTraits< osgUtil::IntersectionVisitor::ReadCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::IntersectionVisitor::ReadCallback >::methods[] = {
	{"readNodeFile", &luna_wrapper_osgUtil_IntersectionVisitor_ReadCallback::_bind_readNodeFile},
	{"__eq", &luna_wrapper_osgUtil_IntersectionVisitor_ReadCallback::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::IntersectionVisitor::ReadCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_IntersectionVisitor_ReadCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::IntersectionVisitor::ReadCallback >::enumValues[] = {
	{0,0}
};


