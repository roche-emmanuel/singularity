#include <plug_common.h>

class luna_wrapper_mglExpr {
public:
	typedef Luna< mglExpr > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88613509) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglExpr*)");
		}

		mglExpr* rhs =(Luna< mglExpr >::check(L,2));
		mglExpr* self=(Luna< mglExpr >::check(L,1));
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

		mglExpr* self= (mglExpr*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglExpr >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88613509) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< mglExpr >::check(L,1));
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

		mglExpr* self=(Luna< mglExpr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglExpr");
		
		return luna_dynamicCast(L,converters,"mglExpr",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Eval(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Diff(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// mglExpr::mglExpr(const char * expr)
	static mglExpr* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglExpr::mglExpr(const char * expr) function, expected prototype:\nmglExpr::mglExpr(const char * expr)\nClass arguments details:\n");
		}

		const char * expr=(const char *)lua_tostring(L,1);

		return new mglExpr(expr);
	}


	// Function binds:
	// double mglExpr::Eval(double x, double y = 0, double z = 0)
	static int _bind_Eval(lua_State *L) {
		if (!_lg_typecheck_Eval(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglExpr::Eval(double x, double y = 0, double z = 0) function, expected prototype:\ndouble mglExpr::Eval(double x, double y = 0, double z = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double x=(double)lua_tonumber(L,2);
		double y=luatop>2 ? (double)lua_tonumber(L,3) : 0;
		double z=luatop>3 ? (double)lua_tonumber(L,4) : 0;

		mglExpr* self=(Luna< mglExpr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglExpr::Eval(double, double, double). Got : '%s'",typeid(Luna< mglExpr >::check(L,1)).name());
		}
		double lret = self->Eval(x, y, z);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglExpr::Diff(char dir, double x, double y = 0, double z = 0)
	static int _bind_Diff(lua_State *L) {
		if (!_lg_typecheck_Diff(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglExpr::Diff(char dir, double x, double y = 0, double z = 0) function, expected prototype:\ndouble mglExpr::Diff(char dir, double x, double y = 0, double z = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		char dir=(char)lua_tointeger(L,2);
		double x=(double)lua_tonumber(L,3);
		double y=luatop>3 ? (double)lua_tonumber(L,4) : 0;
		double z=luatop>4 ? (double)lua_tonumber(L,5) : 0;

		mglExpr* self=(Luna< mglExpr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglExpr::Diff(char, double, double, double). Got : '%s'",typeid(Luna< mglExpr >::check(L,1)).name());
		}
		double lret = self->Diff(dir, x, y, z);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

mglExpr* LunaTraits< mglExpr >::_bind_ctor(lua_State *L) {
	return luna_wrapper_mglExpr::_bind_ctor(L);
}

void LunaTraits< mglExpr >::_bind_dtor(mglExpr* obj) {
	delete obj;
}

const char LunaTraits< mglExpr >::className[] = "mglExpr";
const char LunaTraits< mglExpr >::fullName[] = "mglExpr";
const char LunaTraits< mglExpr >::moduleName[] = "mathgl";
const char* LunaTraits< mglExpr >::parents[] = {0};
const int LunaTraits< mglExpr >::hash = 88613509;
const int LunaTraits< mglExpr >::uniqueIDs[] = {88613509,0};

luna_RegType LunaTraits< mglExpr >::methods[] = {
	{"Eval", &luna_wrapper_mglExpr::_bind_Eval},
	{"Diff", &luna_wrapper_mglExpr::_bind_Diff},
	{"dynCast", &luna_wrapper_mglExpr::_bind_dynCast},
	{"__eq", &luna_wrapper_mglExpr::_bind___eq},
	{"fromVoid", &luna_wrapper_mglExpr::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglExpr::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< mglExpr >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglExpr >::enumValues[] = {
	{0,0}
};


