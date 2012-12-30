#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_AttributeDispatch.h>

class luna_wrapper_osg_AttributeDispatch {
public:
	typedef Luna< osg::AttributeDispatch > luna_t;

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
		//osg::AttributeDispatch* ptr= dynamic_cast< osg::AttributeDispatch* >(Luna< osg::Referenced >::check(L,1));
		osg::AttributeDispatch* ptr= luna_caster< osg::Referenced, osg::AttributeDispatch >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::AttributeDispatch >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_assign(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_assign(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::AttributeDispatch::AttributeDispatch()
	static osg::AttributeDispatch* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::AttributeDispatch::AttributeDispatch() function, expected prototype:\nosg::AttributeDispatch::AttributeDispatch()\nClass arguments details:\n");
		}


		return new osg::AttributeDispatch();
	}

	// osg::AttributeDispatch::AttributeDispatch(lua_Table * data)
	static osg::AttributeDispatch* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::AttributeDispatch::AttributeDispatch(lua_Table * data) function, expected prototype:\nosg::AttributeDispatch::AttributeDispatch(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_AttributeDispatch(L,NULL);
	}

	// Overload binder for osg::AttributeDispatch::AttributeDispatch
	static osg::AttributeDispatch* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function AttributeDispatch, cannot match any of the overloads for function AttributeDispatch:\n  AttributeDispatch()\n  AttributeDispatch(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osg::AttributeDispatch::assign(const void * arg1, const osg::IndexArray * arg2)
	static int _bind_assign(lua_State *L) {
		if (!_lg_typecheck_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AttributeDispatch::assign(const void * arg1, const osg::IndexArray * arg2) function, expected prototype:\nvoid osg::AttributeDispatch::assign(const void * arg1, const osg::IndexArray * arg2)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		void* _arg1=(Luna< void >::check(L,2));
		const osg::IndexArray* _arg2=(Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,3));

		osg::AttributeDispatch* self=Luna< osg::Referenced >::checkSubType< osg::AttributeDispatch >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AttributeDispatch::assign(const void *, const osg::IndexArray *)");
		}
		self->assign(_arg1, _arg2);

		return 0;
	}

	// void osg::AttributeDispatch::base_assign(const void * arg1, const osg::IndexArray * arg2)
	static int _bind_base_assign(lua_State *L) {
		if (!_lg_typecheck_base_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AttributeDispatch::base_assign(const void * arg1, const osg::IndexArray * arg2) function, expected prototype:\nvoid osg::AttributeDispatch::base_assign(const void * arg1, const osg::IndexArray * arg2)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		void* _arg1=(Luna< void >::check(L,2));
		const osg::IndexArray* _arg2=(Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,3));

		osg::AttributeDispatch* self=Luna< osg::Referenced >::checkSubType< osg::AttributeDispatch >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AttributeDispatch::base_assign(const void *, const osg::IndexArray *)");
		}
		self->AttributeDispatch::assign(_arg1, _arg2);

		return 0;
	}


	// Operator binds:
	// void osg::AttributeDispatch::operator()(unsigned int arg1)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AttributeDispatch::operator()(unsigned int arg1) function, expected prototype:\nvoid osg::AttributeDispatch::operator()(unsigned int arg1)\nClass arguments details:\n");
		}

		unsigned _arg1=(unsigned)lua_tointeger(L,2);

		osg::AttributeDispatch* self=Luna< osg::Referenced >::checkSubType< osg::AttributeDispatch >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AttributeDispatch::operator()(unsigned int)");
		}
		self->operator()(_arg1);

		return 0;
	}


};

osg::AttributeDispatch* LunaTraits< osg::AttributeDispatch >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_AttributeDispatch::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::AttributeDispatch >::_bind_dtor(osg::AttributeDispatch* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::AttributeDispatch >::className[] = "AttributeDispatch";
const char LunaTraits< osg::AttributeDispatch >::fullName[] = "osg::AttributeDispatch";
const char LunaTraits< osg::AttributeDispatch >::moduleName[] = "osg";
const char* LunaTraits< osg::AttributeDispatch >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::AttributeDispatch >::hash = 35330505;
const int LunaTraits< osg::AttributeDispatch >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::AttributeDispatch >::methods[] = {
	{"assign", &luna_wrapper_osg_AttributeDispatch::_bind_assign},
	{"base_assign", &luna_wrapper_osg_AttributeDispatch::_bind_base_assign},
	{"op_call", &luna_wrapper_osg_AttributeDispatch::_bind_op_call},
	{"__eq", &luna_wrapper_osg_AttributeDispatch::_bind___eq},
	{"getTable", &luna_wrapper_osg_AttributeDispatch::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::AttributeDispatch >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_AttributeDispatch::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::AttributeDispatch >::enumValues[] = {
	{0,0}
};


