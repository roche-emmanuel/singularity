#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_EdgeCollector_Edgeloop.h>

class luna_wrapper_osgUtil_EdgeCollector_Edgeloop {
public:
	typedef Luna< osgUtil::EdgeCollector::Edgeloop > luna_t;

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
		//osgUtil::EdgeCollector::Edgeloop* ptr= dynamic_cast< osgUtil::EdgeCollector::Edgeloop* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::EdgeCollector::Edgeloop* ptr= luna_caster< osg::Referenced, osgUtil::EdgeCollector::Edgeloop >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::EdgeCollector::Edgeloop >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_isClosed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_toIndexArray(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// bool osgUtil::EdgeCollector::Edgeloop::isClosed()
	static int _bind_isClosed(lua_State *L) {
		if (!_lg_typecheck_isClosed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::EdgeCollector::Edgeloop::isClosed() function, expected prototype:\nbool osgUtil::EdgeCollector::Edgeloop::isClosed()\nClass arguments details:\n");
		}


		osgUtil::EdgeCollector::Edgeloop* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edgeloop >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::EdgeCollector::Edgeloop::isClosed()");
		}
		bool lret = self->isClosed();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::UIntArray * osgUtil::EdgeCollector::Edgeloop::toIndexArray() const
	static int _bind_toIndexArray(lua_State *L) {
		if (!_lg_typecheck_toIndexArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::UIntArray * osgUtil::EdgeCollector::Edgeloop::toIndexArray() const function, expected prototype:\nosg::UIntArray * osgUtil::EdgeCollector::Edgeloop::toIndexArray() const\nClass arguments details:\n");
		}


		osgUtil::EdgeCollector::Edgeloop* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edgeloop >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::UIntArray * osgUtil::EdgeCollector::Edgeloop::toIndexArray() const");
		}
		osg::UIntArray * lret = self->toIndexArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::UIntArray >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

osgUtil::EdgeCollector::Edgeloop* LunaTraits< osgUtil::EdgeCollector::Edgeloop >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::EdgeCollector::Edgeloop >::_bind_dtor(osgUtil::EdgeCollector::Edgeloop* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::EdgeCollector::Edgeloop >::className[] = "EdgeCollector_Edgeloop";
const char LunaTraits< osgUtil::EdgeCollector::Edgeloop >::fullName[] = "osgUtil::EdgeCollector::Edgeloop";
const char LunaTraits< osgUtil::EdgeCollector::Edgeloop >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::EdgeCollector::Edgeloop >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::EdgeCollector::Edgeloop >::hash = 67127194;
const int LunaTraits< osgUtil::EdgeCollector::Edgeloop >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::EdgeCollector::Edgeloop >::methods[] = {
	{"isClosed", &luna_wrapper_osgUtil_EdgeCollector_Edgeloop::_bind_isClosed},
	{"toIndexArray", &luna_wrapper_osgUtil_EdgeCollector_Edgeloop::_bind_toIndexArray},
	{"__eq", &luna_wrapper_osgUtil_EdgeCollector_Edgeloop::_bind___eq},
	{"getTable", &luna_wrapper_osgUtil_EdgeCollector_Edgeloop::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::EdgeCollector::Edgeloop >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_EdgeCollector_Edgeloop::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::EdgeCollector::Edgeloop >::enumValues[] = {
	{0,0}
};


