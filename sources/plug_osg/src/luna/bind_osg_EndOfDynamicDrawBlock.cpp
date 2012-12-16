#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_EndOfDynamicDrawBlock.h>

class luna_wrapper_osg_EndOfDynamicDrawBlock {
public:
	typedef Luna< osg::EndOfDynamicDrawBlock > luna_t;

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
		//osg::EndOfDynamicDrawBlock* ptr= dynamic_cast< osg::EndOfDynamicDrawBlock* >(Luna< osg::Referenced >::check(L,1));
		osg::EndOfDynamicDrawBlock* ptr= luna_caster< osg::Referenced, osg::EndOfDynamicDrawBlock >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::EndOfDynamicDrawBlock >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_completed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_completed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::EndOfDynamicDrawBlock::EndOfDynamicDrawBlock(unsigned int arg1)
	static osg::EndOfDynamicDrawBlock* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::EndOfDynamicDrawBlock::EndOfDynamicDrawBlock(unsigned int arg1) function, expected prototype:\nosg::EndOfDynamicDrawBlock::EndOfDynamicDrawBlock(unsigned int arg1)\nClass arguments details:\n");
		}

		unsigned _arg1=(unsigned)lua_tointeger(L,1);

		return new osg::EndOfDynamicDrawBlock(_arg1);
	}

	// osg::EndOfDynamicDrawBlock::EndOfDynamicDrawBlock(lua_Table * data, unsigned int arg2)
	static osg::EndOfDynamicDrawBlock* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::EndOfDynamicDrawBlock::EndOfDynamicDrawBlock(lua_Table * data, unsigned int arg2) function, expected prototype:\nosg::EndOfDynamicDrawBlock::EndOfDynamicDrawBlock(lua_Table * data, unsigned int arg2)\nClass arguments details:\n");
		}

		unsigned _arg2=(unsigned)lua_tointeger(L,2);

		return new wrapper_osg_EndOfDynamicDrawBlock(L,NULL, _arg2);
	}

	// Overload binder for osg::EndOfDynamicDrawBlock::EndOfDynamicDrawBlock
	static osg::EndOfDynamicDrawBlock* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function EndOfDynamicDrawBlock, cannot match any of the overloads for function EndOfDynamicDrawBlock:\n  EndOfDynamicDrawBlock(unsigned int)\n  EndOfDynamicDrawBlock(lua_Table *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// void osg::EndOfDynamicDrawBlock::completed(osg::State * state)
	static int _bind_completed(lua_State *L) {
		if (!_lg_typecheck_completed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::EndOfDynamicDrawBlock::completed(osg::State * state) function, expected prototype:\nvoid osg::EndOfDynamicDrawBlock::completed(osg::State * state)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));

		osg::EndOfDynamicDrawBlock* self=Luna< osg::Referenced >::checkSubType< osg::EndOfDynamicDrawBlock >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::EndOfDynamicDrawBlock::completed(osg::State *)");
		}
		self->completed(state);

		return 0;
	}

	// void osg::EndOfDynamicDrawBlock::base_completed(osg::State * state)
	static int _bind_base_completed(lua_State *L) {
		if (!_lg_typecheck_base_completed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::EndOfDynamicDrawBlock::base_completed(osg::State * state) function, expected prototype:\nvoid osg::EndOfDynamicDrawBlock::base_completed(osg::State * state)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));

		osg::EndOfDynamicDrawBlock* self=Luna< osg::Referenced >::checkSubType< osg::EndOfDynamicDrawBlock >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::EndOfDynamicDrawBlock::base_completed(osg::State *)");
		}
		self->EndOfDynamicDrawBlock::completed(state);

		return 0;
	}


	// Operator binds:

};

osg::EndOfDynamicDrawBlock* LunaTraits< osg::EndOfDynamicDrawBlock >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_EndOfDynamicDrawBlock::_bind_ctor(L);
}

void LunaTraits< osg::EndOfDynamicDrawBlock >::_bind_dtor(osg::EndOfDynamicDrawBlock* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::EndOfDynamicDrawBlock >::className[] = "EndOfDynamicDrawBlock";
const char LunaTraits< osg::EndOfDynamicDrawBlock >::fullName[] = "osg::EndOfDynamicDrawBlock";
const char LunaTraits< osg::EndOfDynamicDrawBlock >::moduleName[] = "osg";
const char* LunaTraits< osg::EndOfDynamicDrawBlock >::parents[] = {"osg.DynamicObjectRenderingCompletedCallback", 0};
const int LunaTraits< osg::EndOfDynamicDrawBlock >::hash = 64833397;
const int LunaTraits< osg::EndOfDynamicDrawBlock >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::EndOfDynamicDrawBlock >::methods[] = {
	{"completed", &luna_wrapper_osg_EndOfDynamicDrawBlock::_bind_completed},
	{"base_completed", &luna_wrapper_osg_EndOfDynamicDrawBlock::_bind_base_completed},
	{"__eq", &luna_wrapper_osg_EndOfDynamicDrawBlock::_bind___eq},
	{"getTable", &luna_wrapper_osg_EndOfDynamicDrawBlock::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::EndOfDynamicDrawBlock >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_EndOfDynamicDrawBlock::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::EndOfDynamicDrawBlock >::enumValues[] = {
	{0,0}
};


