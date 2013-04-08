#include <plug_common.h>

#include <luna/wrappers/wrapper_mglFormulaC.h>

class luna_wrapper_mglFormulaC {
public:
	typedef Luna< mglFormulaC > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		mglFormulaC* self=(Luna< mglFormulaC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<mglFormulaC,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,11195840) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglFormulaC*)");
		}

		mglFormulaC* rhs =(Luna< mglFormulaC >::check(L,2));
		mglFormulaC* self=(Luna< mglFormulaC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		mglFormulaC* self= (mglFormulaC*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglFormulaC >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,11195840) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< mglFormulaC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
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

		mglFormulaC* self=(Luna< mglFormulaC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglFormulaC");
		
		return luna_dynamicCast(L,converters,"mglFormulaC",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Calc_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,37931827) ) return false;
		if( (!(Luna< std::complex< double > >::checkSubType< dual >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,37931827) ) return false;
		if( luatop>2 && (!(Luna< std::complex< double > >::checkSubType< dual >(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,37931827) ) return false;
		if( luatop>3 && (!(Luna< std::complex< double > >::checkSubType< dual >(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,37931827) ) return false;
		if( luatop>4 && (!(Luna< std::complex< double > >::checkSubType< dual >(L,5))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Calc_overload_2(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,37931827) ) return false;
		if( (!(Luna< std::complex< double > >::checkSubType< dual >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,37931827) ) return false;
		if( (!(Luna< std::complex< double > >::checkSubType< dual >(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,37931827) ) return false;
		if( (!(Luna< std::complex< double > >::checkSubType< dual >(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,37931827) ) return false;
		if( (!(Luna< std::complex< double > >::checkSubType< dual >(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,37931827) ) return false;
		if( (!(Luna< std::complex< double > >::checkSubType< dual >(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,37931827) ) return false;
		if( (!(Luna< std::complex< double > >::checkSubType< dual >(L,7))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// mglFormulaC::mglFormulaC(const char * str)
	static mglFormulaC* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglFormulaC::mglFormulaC(const char * str) function, expected prototype:\nmglFormulaC::mglFormulaC(const char * str)\nClass arguments details:\n");
		}

		const char * str=(const char *)lua_tostring(L,1);

		return new mglFormulaC(str);
	}

	// mglFormulaC::mglFormulaC(lua_Table * data, const char * str)
	static mglFormulaC* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglFormulaC::mglFormulaC(lua_Table * data, const char * str) function, expected prototype:\nmglFormulaC::mglFormulaC(lua_Table * data, const char * str)\nClass arguments details:\n");
		}

		const char * str=(const char *)lua_tostring(L,2);

		return new wrapper_mglFormulaC(L,NULL, str);
	}

	// Overload binder for mglFormulaC::mglFormulaC
	static mglFormulaC* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function mglFormulaC, cannot match any of the overloads for function mglFormulaC:\n  mglFormulaC(const char *)\n  mglFormulaC(lua_Table *, const char *)\n");
		return NULL;
	}


	// Function binds:
	// dual mglFormulaC::Calc(dual x, dual y = 0, dual z = 0, dual u = 0) const
	static int _bind_Calc_overload_1(lua_State *L) {
		if (!_lg_typecheck_Calc_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dual mglFormulaC::Calc(dual x, dual y = 0, dual z = 0, dual u = 0) const function, expected prototype:\ndual mglFormulaC::Calc(dual x, dual y = 0, dual z = 0, dual u = 0) const\nClass arguments details:\narg 1 ID = 3094652\narg 2 ID = 3094652\narg 3 ID = 3094652\narg 4 ID = 3094652\n");
		}

		int luatop = lua_gettop(L);

		dual* x_ptr=(Luna< std::complex< double > >::checkSubType< dual >(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglFormulaC::Calc function");
		}
		dual x=*x_ptr;
		dual* y_ptr=luatop>2 ? (Luna< std::complex< double > >::checkSubType< dual >(L,3)) : NULL;
		if( luatop>2 && !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglFormulaC::Calc function");
		}
		dual y=luatop>2 ? *y_ptr : (dual)0;
		dual* z_ptr=luatop>3 ? (Luna< std::complex< double > >::checkSubType< dual >(L,4)) : NULL;
		if( luatop>3 && !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglFormulaC::Calc function");
		}
		dual z=luatop>3 ? *z_ptr : (dual)0;
		dual* u_ptr=luatop>4 ? (Luna< std::complex< double > >::checkSubType< dual >(L,5)) : NULL;
		if( luatop>4 && !u_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg u in mglFormulaC::Calc function");
		}
		dual u=luatop>4 ? *u_ptr : (dual)0;

		mglFormulaC* self=(Luna< mglFormulaC >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call dual mglFormulaC::Calc(dual, dual, dual, dual) const. Got : '%s'",typeid(Luna< mglFormulaC >::check(L,1)).name());
		}
		dual stack_lret = self->Calc(x, y, z, u);
		dual* lret = new dual(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< dual >::push(L,lret,true);

		return 1;
	}

	// dual mglFormulaC::Calc(dual x, dual y, dual z, dual u, dual v, dual w) const
	static int _bind_Calc_overload_2(lua_State *L) {
		if (!_lg_typecheck_Calc_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dual mglFormulaC::Calc(dual x, dual y, dual z, dual u, dual v, dual w) const function, expected prototype:\ndual mglFormulaC::Calc(dual x, dual y, dual z, dual u, dual v, dual w) const\nClass arguments details:\narg 1 ID = 3094652\narg 2 ID = 3094652\narg 3 ID = 3094652\narg 4 ID = 3094652\narg 5 ID = 3094652\narg 6 ID = 3094652\n");
		}

		dual* x_ptr=(Luna< std::complex< double > >::checkSubType< dual >(L,2));
		if( !x_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg x in mglFormulaC::Calc function");
		}
		dual x=*x_ptr;
		dual* y_ptr=(Luna< std::complex< double > >::checkSubType< dual >(L,3));
		if( !y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y in mglFormulaC::Calc function");
		}
		dual y=*y_ptr;
		dual* z_ptr=(Luna< std::complex< double > >::checkSubType< dual >(L,4));
		if( !z_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg z in mglFormulaC::Calc function");
		}
		dual z=*z_ptr;
		dual* u_ptr=(Luna< std::complex< double > >::checkSubType< dual >(L,5));
		if( !u_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg u in mglFormulaC::Calc function");
		}
		dual u=*u_ptr;
		dual* v_ptr=(Luna< std::complex< double > >::checkSubType< dual >(L,6));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in mglFormulaC::Calc function");
		}
		dual v=*v_ptr;
		dual* w_ptr=(Luna< std::complex< double > >::checkSubType< dual >(L,7));
		if( !w_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg w in mglFormulaC::Calc function");
		}
		dual w=*w_ptr;

		mglFormulaC* self=(Luna< mglFormulaC >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call dual mglFormulaC::Calc(dual, dual, dual, dual, dual, dual) const. Got : '%s'",typeid(Luna< mglFormulaC >::check(L,1)).name());
		}
		dual stack_lret = self->Calc(x, y, z, u, v, w);
		dual* lret = new dual(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< dual >::push(L,lret,true);

		return 1;
	}

	// Overload binder for mglFormulaC::Calc
	static int _bind_Calc(lua_State *L) {
		if (_lg_typecheck_Calc_overload_1(L)) return _bind_Calc_overload_1(L);
		if (_lg_typecheck_Calc_overload_2(L)) return _bind_Calc_overload_2(L);

		luaL_error(L, "error in function Calc, cannot match any of the overloads for function Calc:\n  Calc(dual, dual, dual, dual)\n  Calc(dual, dual, dual, dual, dual, dual)\n");
		return 0;
	}


	// Operator binds:

};

mglFormulaC* LunaTraits< mglFormulaC >::_bind_ctor(lua_State *L) {
	return luna_wrapper_mglFormulaC::_bind_ctor(L);
}

void LunaTraits< mglFormulaC >::_bind_dtor(mglFormulaC* obj) {
	delete obj;
}

const char LunaTraits< mglFormulaC >::className[] = "mglFormulaC";
const char LunaTraits< mglFormulaC >::fullName[] = "mglFormulaC";
const char LunaTraits< mglFormulaC >::moduleName[] = "mathgl";
const char* LunaTraits< mglFormulaC >::parents[] = {0};
const int LunaTraits< mglFormulaC >::hash = 11195840;
const int LunaTraits< mglFormulaC >::uniqueIDs[] = {11195840,0};

luna_RegType LunaTraits< mglFormulaC >::methods[] = {
	{"Calc", &luna_wrapper_mglFormulaC::_bind_Calc},
	{"dynCast", &luna_wrapper_mglFormulaC::_bind_dynCast},
	{"__eq", &luna_wrapper_mglFormulaC::_bind___eq},
	{"fromVoid", &luna_wrapper_mglFormulaC::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglFormulaC::_bind_asVoid},
	{"getTable", &luna_wrapper_mglFormulaC::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< mglFormulaC >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglFormulaC >::enumValues[] = {
	{0,0}
};


