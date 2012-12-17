#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_FinishedObjectReadCallback.h>

class luna_wrapper_osgDB_FinishedObjectReadCallback {
public:
	typedef Luna< osgDB::FinishedObjectReadCallback > luna_t;

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
		//osgDB::FinishedObjectReadCallback* ptr= dynamic_cast< osgDB::FinishedObjectReadCallback* >(Luna< osg::Referenced >::check(L,1));
		osgDB::FinishedObjectReadCallback* ptr= luna_caster< osg::Referenced, osgDB::FinishedObjectReadCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::FinishedObjectReadCallback >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

osgDB::FinishedObjectReadCallback* LunaTraits< osgDB::FinishedObjectReadCallback >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osgDB::FinishedObjectReadCallback::objectRead(osgDB::InputStream & is, osg::Object & obj)
}

void LunaTraits< osgDB::FinishedObjectReadCallback >::_bind_dtor(osgDB::FinishedObjectReadCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::FinishedObjectReadCallback >::className[] = "FinishedObjectReadCallback";
const char LunaTraits< osgDB::FinishedObjectReadCallback >::fullName[] = "osgDB::FinishedObjectReadCallback";
const char LunaTraits< osgDB::FinishedObjectReadCallback >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::FinishedObjectReadCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::FinishedObjectReadCallback >::hash = 36083873;
const int LunaTraits< osgDB::FinishedObjectReadCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::FinishedObjectReadCallback >::methods[] = {
	{"__eq", &luna_wrapper_osgDB_FinishedObjectReadCallback::_bind___eq},
	{"getTable", &luna_wrapper_osgDB_FinishedObjectReadCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::FinishedObjectReadCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_FinishedObjectReadCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::FinishedObjectReadCallback >::enumValues[] = {
	{0,0}
};


