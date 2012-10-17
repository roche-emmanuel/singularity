#include <plug_common.h>

class luna_wrapper_osg_RefBlockCount {
public:
	typedef Luna< osg::RefBlockCount > luna_t;

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
		osg::RefBlockCount* ptr= dynamic_cast< osg::RefBlockCount* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::RefBlockCount >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::RefBlockCount::RefBlockCount(unsigned blockCount)
	static osg::RefBlockCount* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RefBlockCount::RefBlockCount(unsigned blockCount) function, expected prototype:\nosg::RefBlockCount::RefBlockCount(unsigned blockCount)\nClass arguments details:\n");
		}

		unsigned blockCount=(unsigned)lua_tointeger(L,1);

		return new osg::RefBlockCount(blockCount);
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
	{0,0}
};

luna_ConverterType LunaTraits< osg::RefBlockCount >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_RefBlockCount::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::RefBlockCount >::enumValues[] = {
	{0,0}
};


