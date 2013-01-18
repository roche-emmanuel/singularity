#include <plug_common.h>

#include <luna/wrappers/wrapper_btCollisionAlgorithmCreateFunc.h>

class luna_wrapper_btCollisionAlgorithmCreateFunc {
public:
	typedef Luna< btCollisionAlgorithmCreateFunc > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btCollisionAlgorithmCreateFunc* self=(Luna< btCollisionAlgorithmCreateFunc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btCollisionAlgorithmCreateFunc,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67911425) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCollisionAlgorithmCreateFunc*)");
		}

		btCollisionAlgorithmCreateFunc* rhs =(Luna< btCollisionAlgorithmCreateFunc >::check(L,2));
		btCollisionAlgorithmCreateFunc* self=(Luna< btCollisionAlgorithmCreateFunc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		btCollisionAlgorithmCreateFunc* self=(Luna< btCollisionAlgorithmCreateFunc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btCollisionAlgorithmCreateFunc");
		
		return luna_dynamicCast(L,converters,"btCollisionAlgorithmCreateFunc",name);
	}


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
	inline static bool _lg_typecheck_CreateCollisionAlgorithm(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,61780402) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,32391296)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSwapped(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSwapped(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_CreateCollisionAlgorithm(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,61780402) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,32391296)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btCollisionAlgorithmCreateFunc::btCollisionAlgorithmCreateFunc()
	static btCollisionAlgorithmCreateFunc* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionAlgorithmCreateFunc::btCollisionAlgorithmCreateFunc() function, expected prototype:\nbtCollisionAlgorithmCreateFunc::btCollisionAlgorithmCreateFunc()\nClass arguments details:\n");
		}


		return new btCollisionAlgorithmCreateFunc();
	}

	// btCollisionAlgorithmCreateFunc::btCollisionAlgorithmCreateFunc(lua_Table * data)
	static btCollisionAlgorithmCreateFunc* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionAlgorithmCreateFunc::btCollisionAlgorithmCreateFunc(lua_Table * data) function, expected prototype:\nbtCollisionAlgorithmCreateFunc::btCollisionAlgorithmCreateFunc(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btCollisionAlgorithmCreateFunc(L,NULL);
	}

	// Overload binder for btCollisionAlgorithmCreateFunc::btCollisionAlgorithmCreateFunc
	static btCollisionAlgorithmCreateFunc* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btCollisionAlgorithmCreateFunc, cannot match any of the overloads for function btCollisionAlgorithmCreateFunc:\n  btCollisionAlgorithmCreateFunc()\n  btCollisionAlgorithmCreateFunc(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// btCollisionAlgorithm * btCollisionAlgorithmCreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & arg1, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)
	static int _bind_CreateCollisionAlgorithm(lua_State *L) {
		if (!_lg_typecheck_CreateCollisionAlgorithm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionAlgorithm * btCollisionAlgorithmCreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & arg1, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) function, expected prototype:\nbtCollisionAlgorithm * btCollisionAlgorithmCreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & arg1, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)\nClass arguments details:\narg 1 ID = 61780402\narg 2 ID = 32391296\narg 3 ID = 32391296\n");
		}

		btCollisionAlgorithmConstructionInfo* _arg1_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in btCollisionAlgorithmCreateFunc::CreateCollisionAlgorithm function");
		}
		btCollisionAlgorithmConstructionInfo & _arg1=*_arg1_ptr;
		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,4));

		btCollisionAlgorithmCreateFunc* self=(Luna< btCollisionAlgorithmCreateFunc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionAlgorithm * btCollisionAlgorithmCreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo &, const btCollisionObjectWrapper *, const btCollisionObjectWrapper *). Got : '%s'",typeid(Luna< btCollisionAlgorithmCreateFunc >::check(L,1)).name());
		}
		btCollisionAlgorithm * lret = self->CreateCollisionAlgorithm(_arg1, body0Wrap, body1Wrap);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionAlgorithm >::push(L,lret,false);

		return 1;
	}

	// bool btCollisionAlgorithmCreateFunc::m_swapped()
	static int _bind_getSwapped(lua_State *L) {
		if (!_lg_typecheck_getSwapped(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionAlgorithmCreateFunc::m_swapped() function, expected prototype:\nbool btCollisionAlgorithmCreateFunc::m_swapped()\nClass arguments details:\n");
		}


		btCollisionAlgorithmCreateFunc* self=(Luna< btCollisionAlgorithmCreateFunc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionAlgorithmCreateFunc::m_swapped(). Got : '%s'",typeid(Luna< btCollisionAlgorithmCreateFunc >::check(L,1)).name());
		}
		bool lret = self->m_swapped;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btCollisionAlgorithmCreateFunc::m_swapped(bool value)
	static int _bind_setSwapped(lua_State *L) {
		if (!_lg_typecheck_setSwapped(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionAlgorithmCreateFunc::m_swapped(bool value) function, expected prototype:\nvoid btCollisionAlgorithmCreateFunc::m_swapped(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		btCollisionAlgorithmCreateFunc* self=(Luna< btCollisionAlgorithmCreateFunc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionAlgorithmCreateFunc::m_swapped(bool). Got : '%s'",typeid(Luna< btCollisionAlgorithmCreateFunc >::check(L,1)).name());
		}
		self->m_swapped = value;

		return 0;
	}

	// btCollisionAlgorithm * btCollisionAlgorithmCreateFunc::base_CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & arg1, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)
	static int _bind_base_CreateCollisionAlgorithm(lua_State *L) {
		if (!_lg_typecheck_base_CreateCollisionAlgorithm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionAlgorithm * btCollisionAlgorithmCreateFunc::base_CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & arg1, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) function, expected prototype:\nbtCollisionAlgorithm * btCollisionAlgorithmCreateFunc::base_CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & arg1, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)\nClass arguments details:\narg 1 ID = 61780402\narg 2 ID = 32391296\narg 3 ID = 32391296\n");
		}

		btCollisionAlgorithmConstructionInfo* _arg1_ptr=(Luna< btCollisionAlgorithmConstructionInfo >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in btCollisionAlgorithmCreateFunc::base_CreateCollisionAlgorithm function");
		}
		btCollisionAlgorithmConstructionInfo & _arg1=*_arg1_ptr;
		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,4));

		btCollisionAlgorithmCreateFunc* self=(Luna< btCollisionAlgorithmCreateFunc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionAlgorithm * btCollisionAlgorithmCreateFunc::base_CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo &, const btCollisionObjectWrapper *, const btCollisionObjectWrapper *). Got : '%s'",typeid(Luna< btCollisionAlgorithmCreateFunc >::check(L,1)).name());
		}
		btCollisionAlgorithm * lret = self->btCollisionAlgorithmCreateFunc::CreateCollisionAlgorithm(_arg1, body0Wrap, body1Wrap);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionAlgorithm >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

btCollisionAlgorithmCreateFunc* LunaTraits< btCollisionAlgorithmCreateFunc >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btCollisionAlgorithmCreateFunc::_bind_ctor(L);
}

void LunaTraits< btCollisionAlgorithmCreateFunc >::_bind_dtor(btCollisionAlgorithmCreateFunc* obj) {
	delete obj;
}

const char LunaTraits< btCollisionAlgorithmCreateFunc >::className[] = "btCollisionAlgorithmCreateFunc";
const char LunaTraits< btCollisionAlgorithmCreateFunc >::fullName[] = "btCollisionAlgorithmCreateFunc";
const char LunaTraits< btCollisionAlgorithmCreateFunc >::moduleName[] = "bullet";
const char* LunaTraits< btCollisionAlgorithmCreateFunc >::parents[] = {0};
const int LunaTraits< btCollisionAlgorithmCreateFunc >::hash = 67911425;
const int LunaTraits< btCollisionAlgorithmCreateFunc >::uniqueIDs[] = {67911425,0};

luna_RegType LunaTraits< btCollisionAlgorithmCreateFunc >::methods[] = {
	{"CreateCollisionAlgorithm", &luna_wrapper_btCollisionAlgorithmCreateFunc::_bind_CreateCollisionAlgorithm},
	{"getSwapped", &luna_wrapper_btCollisionAlgorithmCreateFunc::_bind_getSwapped},
	{"setSwapped", &luna_wrapper_btCollisionAlgorithmCreateFunc::_bind_setSwapped},
	{"base_CreateCollisionAlgorithm", &luna_wrapper_btCollisionAlgorithmCreateFunc::_bind_base_CreateCollisionAlgorithm},
	{"dynCast", &luna_wrapper_btCollisionAlgorithmCreateFunc::_bind_dynCast},
	{"__eq", &luna_wrapper_btCollisionAlgorithmCreateFunc::_bind___eq},
	{"getTable", &luna_wrapper_btCollisionAlgorithmCreateFunc::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btCollisionAlgorithmCreateFunc >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btCollisionAlgorithmCreateFunc >::enumValues[] = {
	{0,0}
};


