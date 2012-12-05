#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_RefBlock.h>

class luna_wrapper_osg_RefBlock {
public:
	typedef Luna< osg::RefBlock > luna_t;

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
		osg::RefBlock* ptr= dynamic_cast< osg::RefBlock* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::RefBlock >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::RefBlock::RefBlock()
	static osg::RefBlock* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RefBlock::RefBlock() function, expected prototype:\nosg::RefBlock::RefBlock()\nClass arguments details:\n");
		}


		return new osg::RefBlock();
	}

	// osg::RefBlock::RefBlock(lua_Table * data)
	static osg::RefBlock* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RefBlock::RefBlock(lua_Table * data) function, expected prototype:\nosg::RefBlock::RefBlock(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_RefBlock(L,NULL);
	}

	// Overload binder for osg::RefBlock::RefBlock
	static osg::RefBlock* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function RefBlock, cannot match any of the overloads for function RefBlock:\n  RefBlock()\n  RefBlock(lua_Table *)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:

};

osg::RefBlock* LunaTraits< osg::RefBlock >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_RefBlock::_bind_ctor(L);
}

void LunaTraits< osg::RefBlock >::_bind_dtor(osg::RefBlock* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::RefBlock >::className[] = "RefBlock";
const char LunaTraits< osg::RefBlock >::fullName[] = "osg::RefBlock";
const char LunaTraits< osg::RefBlock >::moduleName[] = "osg";
const char* LunaTraits< osg::RefBlock >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::RefBlock >::hash = 54031935;
const int LunaTraits< osg::RefBlock >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::RefBlock >::methods[] = {
	{"__eq", &luna_wrapper_osg_RefBlock::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::RefBlock >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_RefBlock::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::RefBlock >::enumValues[] = {
	{0,0}
};


