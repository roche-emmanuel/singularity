#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_RefBlockCount.h>

class luna_wrapper_osg_RefBlockCount {
public:
	typedef Luna< osg::RefBlockCount > luna_t;

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
		//osg::RefBlockCount* ptr= dynamic_cast< osg::RefBlockCount* >(Luna< osg::Referenced >::check(L,1));
		osg::RefBlockCount* ptr= luna_caster< osg::Referenced, osg::RefBlockCount >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::RefBlockCount >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::RefBlockCount::RefBlockCount(unsigned int blockCount)
	static osg::RefBlockCount* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RefBlockCount::RefBlockCount(unsigned int blockCount) function, expected prototype:\nosg::RefBlockCount::RefBlockCount(unsigned int blockCount)\nClass arguments details:\n");
		}

		unsigned blockCount=(unsigned)lua_tointeger(L,1);

		return new osg::RefBlockCount(blockCount);
	}

	// osg::RefBlockCount::RefBlockCount(lua_Table * data, unsigned int blockCount)
	static osg::RefBlockCount* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RefBlockCount::RefBlockCount(lua_Table * data, unsigned int blockCount) function, expected prototype:\nosg::RefBlockCount::RefBlockCount(lua_Table * data, unsigned int blockCount)\nClass arguments details:\n");
		}

		unsigned blockCount=(unsigned)lua_tointeger(L,2);

		return new wrapper_osg_RefBlockCount(L,NULL, blockCount);
	}

	// Overload binder for osg::RefBlockCount::RefBlockCount
	static osg::RefBlockCount* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function RefBlockCount, cannot match any of the overloads for function RefBlockCount:\n  RefBlockCount(unsigned int)\n  RefBlockCount(lua_Table *, unsigned int)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:

};

osg::RefBlockCount* LunaTraits< osg::RefBlockCount >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_RefBlockCount::_bind_ctor(L);
}

void LunaTraits< osg::RefBlockCount >::_bind_dtor(osg::RefBlockCount* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::RefBlockCount >::className[] = "RefBlockCount";
const char LunaTraits< osg::RefBlockCount >::fullName[] = "osg::RefBlockCount";
const char LunaTraits< osg::RefBlockCount >::moduleName[] = "osg";
const char* LunaTraits< osg::RefBlockCount >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::RefBlockCount >::hash = 73970977;
const int LunaTraits< osg::RefBlockCount >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::RefBlockCount >::methods[] = {
	{"__eq", &luna_wrapper_osg_RefBlockCount::_bind___eq},
	{"getTable", &luna_wrapper_osg_RefBlockCount::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::RefBlockCount >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_RefBlockCount::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::RefBlockCount >::enumValues[] = {
	{0,0}
};


