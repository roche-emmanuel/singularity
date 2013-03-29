#include <plug_common.h>

class luna_wrapper_mglFormula {
public:
	typedef Luna< mglFormula > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,16490188) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglFormula*)");
		}

		mglFormula* rhs =(Luna< mglFormula >::check(L,2));
		mglFormula* self=(Luna< mglFormula >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
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

		mglFormula* self= (mglFormula*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglFormula >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,16490188) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< mglFormula >::check(L,1));
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

		mglFormula* self=(Luna< mglFormula >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglFormula");
		
		return luna_dynamicCast(L,converters,"mglFormula",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Calc_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Calc_overload_2(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CalcD_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && lua_isnumber(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CalcD_overload_2(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		if( lua_isnumber(L,8)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// mglFormula::mglFormula(const char * str)
	static mglFormula* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglFormula::mglFormula(const char * str) function, expected prototype:\nmglFormula::mglFormula(const char * str)\nClass arguments details:\n");
		}

		const char * str=(const char *)lua_tostring(L,1);

		return new mglFormula(str);
	}


	// Function binds:
	// double mglFormula::Calc(double x, double y = 0, double z = 0, double u = 0) const
	static int _bind_Calc_overload_1(lua_State *L) {
		if (!_lg_typecheck_Calc_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglFormula::Calc(double x, double y = 0, double z = 0, double u = 0) const function, expected prototype:\ndouble mglFormula::Calc(double x, double y = 0, double z = 0, double u = 0) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double x=(double)lua_tonumber(L,2);
		double y=luatop>2 ? (double)lua_tonumber(L,3) : (double)0;
		double z=luatop>3 ? (double)lua_tonumber(L,4) : (double)0;
		double u=luatop>4 ? (double)lua_tonumber(L,5) : (double)0;

		mglFormula* self=(Luna< mglFormula >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglFormula::Calc(double, double, double, double) const. Got : '%s'",typeid(Luna< mglFormula >::check(L,1)).name());
		}
		double lret = self->Calc(x, y, z, u);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglFormula::Calc(double x, double y, double z, double u, double v, double w) const
	static int _bind_Calc_overload_2(lua_State *L) {
		if (!_lg_typecheck_Calc_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglFormula::Calc(double x, double y, double z, double u, double v, double w) const function, expected prototype:\ndouble mglFormula::Calc(double x, double y, double z, double u, double v, double w) const\nClass arguments details:\n");
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		double z=(double)lua_tonumber(L,4);
		double u=(double)lua_tonumber(L,5);
		double v=(double)lua_tonumber(L,6);
		double w=(double)lua_tonumber(L,7);

		mglFormula* self=(Luna< mglFormula >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglFormula::Calc(double, double, double, double, double, double) const. Got : '%s'",typeid(Luna< mglFormula >::check(L,1)).name());
		}
		double lret = self->Calc(x, y, z, u, v, w);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for mglFormula::Calc
	static int _bind_Calc(lua_State *L) {
		if (_lg_typecheck_Calc_overload_1(L)) return _bind_Calc_overload_1(L);
		if (_lg_typecheck_Calc_overload_2(L)) return _bind_Calc_overload_2(L);

		luaL_error(L, "error in function Calc, cannot match any of the overloads for function Calc:\n  Calc(double, double, double, double)\n  Calc(double, double, double, double, double, double)\n");
		return 0;
	}

	// double mglFormula::CalcD(char diff, double x, double y = 0, double z = 0, double u = 0) const
	static int _bind_CalcD_overload_1(lua_State *L) {
		if (!_lg_typecheck_CalcD_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglFormula::CalcD(char diff, double x, double y = 0, double z = 0, double u = 0) const function, expected prototype:\ndouble mglFormula::CalcD(char diff, double x, double y = 0, double z = 0, double u = 0) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		char diff=(char)lua_tointeger(L,2);
		double x=(double)lua_tonumber(L,3);
		double y=luatop>3 ? (double)lua_tonumber(L,4) : (double)0;
		double z=luatop>4 ? (double)lua_tonumber(L,5) : (double)0;
		double u=luatop>5 ? (double)lua_tonumber(L,6) : (double)0;

		mglFormula* self=(Luna< mglFormula >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglFormula::CalcD(char, double, double, double, double) const. Got : '%s'",typeid(Luna< mglFormula >::check(L,1)).name());
		}
		double lret = self->CalcD(diff, x, y, z, u);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglFormula::CalcD(char diff, double x, double y, double z, double u, double v, double w) const
	static int _bind_CalcD_overload_2(lua_State *L) {
		if (!_lg_typecheck_CalcD_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglFormula::CalcD(char diff, double x, double y, double z, double u, double v, double w) const function, expected prototype:\ndouble mglFormula::CalcD(char diff, double x, double y, double z, double u, double v, double w) const\nClass arguments details:\n");
		}

		char diff=(char)lua_tointeger(L,2);
		double x=(double)lua_tonumber(L,3);
		double y=(double)lua_tonumber(L,4);
		double z=(double)lua_tonumber(L,5);
		double u=(double)lua_tonumber(L,6);
		double v=(double)lua_tonumber(L,7);
		double w=(double)lua_tonumber(L,8);

		mglFormula* self=(Luna< mglFormula >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglFormula::CalcD(char, double, double, double, double, double, double) const. Got : '%s'",typeid(Luna< mglFormula >::check(L,1)).name());
		}
		double lret = self->CalcD(diff, x, y, z, u, v, w);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for mglFormula::CalcD
	static int _bind_CalcD(lua_State *L) {
		if (_lg_typecheck_CalcD_overload_1(L)) return _bind_CalcD_overload_1(L);
		if (_lg_typecheck_CalcD_overload_2(L)) return _bind_CalcD_overload_2(L);

		luaL_error(L, "error in function CalcD, cannot match any of the overloads for function CalcD:\n  CalcD(char, double, double, double, double)\n  CalcD(char, double, double, double, double, double, double)\n");
		return 0;
	}


	// Operator binds:

};

mglFormula* LunaTraits< mglFormula >::_bind_ctor(lua_State *L) {
	return luna_wrapper_mglFormula::_bind_ctor(L);
}

void LunaTraits< mglFormula >::_bind_dtor(mglFormula* obj) {
	delete obj;
}

const char LunaTraits< mglFormula >::className[] = "mglFormula";
const char LunaTraits< mglFormula >::fullName[] = "mglFormula";
const char LunaTraits< mglFormula >::moduleName[] = "mathgl";
const char* LunaTraits< mglFormula >::parents[] = {0};
const int LunaTraits< mglFormula >::hash = 16490188;
const int LunaTraits< mglFormula >::uniqueIDs[] = {16490188,0};

luna_RegType LunaTraits< mglFormula >::methods[] = {
	{"Calc", &luna_wrapper_mglFormula::_bind_Calc},
	{"CalcD", &luna_wrapper_mglFormula::_bind_CalcD},
	{"dynCast", &luna_wrapper_mglFormula::_bind_dynCast},
	{"__eq", &luna_wrapper_mglFormula::_bind___eq},
	{"fromVoid", &luna_wrapper_mglFormula::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglFormula::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< mglFormula >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglFormula >::enumValues[] = {
	{0,0}
};


