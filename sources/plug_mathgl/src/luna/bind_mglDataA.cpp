#include <plug_common.h>

#include <luna/wrappers/wrapper_mglDataA.h>

class luna_wrapper_mglDataA {
public:
	typedef Luna< mglDataA > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		mglDataA* self=(Luna< mglDataA >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<mglDataA,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,45413231) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglDataA*)");
		}

		mglDataA* rhs =(Luna< mglDataA >::check(L,2));
		mglDataA* self=(Luna< mglDataA >::check(L,1));
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

		mglDataA* self= (mglDataA*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglDataA >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,45413231) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< mglDataA >::check(L,1));
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

		mglDataA* self=(Luna< mglDataA >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglDataA");
		
		return luna_dynamicCast(L,converters,"mglDataA",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_v(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_vthr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNx(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNz(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNN(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Maximal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Minimal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_dvx(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_dvy(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_dvz(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// mglDataA::mglDataA(lua_Table * data)
	static mglDataA* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglDataA::mglDataA(lua_Table * data) function, expected prototype:\nmglDataA::mglDataA(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_mglDataA(L,NULL);
	}


	// Function binds:
	// double mglDataA::v(long i, long j = 0, long k = 0) const
	static int _bind_v(lua_State *L) {
		if (!_lg_typecheck_v(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglDataA::v(long i, long j = 0, long k = 0) const function, expected prototype:\ndouble mglDataA::v(long i, long j = 0, long k = 0) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long i=(long)lua_tointeger(L,2);
		long j=luatop>2 ? (long)lua_tointeger(L,3) : 0;
		long k=luatop>3 ? (long)lua_tointeger(L,4) : 0;

		mglDataA* self=(Luna< mglDataA >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglDataA::v(long, long, long) const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		double lret = self->v(i, j, k);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglDataA::vthr(long i) const
	static int _bind_vthr(lua_State *L) {
		if (!_lg_typecheck_vthr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglDataA::vthr(long i) const function, expected prototype:\ndouble mglDataA::vthr(long i) const\nClass arguments details:\n");
		}

		long i=(long)lua_tointeger(L,2);

		mglDataA* self=(Luna< mglDataA >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglDataA::vthr(long) const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		double lret = self->vthr(i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglDataA::GetNx() const
	static int _bind_GetNx(lua_State *L) {
		if (!_lg_typecheck_GetNx(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglDataA::GetNx() const function, expected prototype:\nlong mglDataA::GetNx() const\nClass arguments details:\n");
		}


		mglDataA* self=(Luna< mglDataA >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglDataA::GetNx() const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		long lret = self->GetNx();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglDataA::GetNy() const
	static int _bind_GetNy(lua_State *L) {
		if (!_lg_typecheck_GetNy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglDataA::GetNy() const function, expected prototype:\nlong mglDataA::GetNy() const\nClass arguments details:\n");
		}


		mglDataA* self=(Luna< mglDataA >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglDataA::GetNy() const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		long lret = self->GetNy();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglDataA::GetNz() const
	static int _bind_GetNz(lua_State *L) {
		if (!_lg_typecheck_GetNz(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglDataA::GetNz() const function, expected prototype:\nlong mglDataA::GetNz() const\nClass arguments details:\n");
		}


		mglDataA* self=(Luna< mglDataA >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglDataA::GetNz() const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		long lret = self->GetNz();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglDataA::GetNN() const
	static int _bind_GetNN(lua_State *L) {
		if (!_lg_typecheck_GetNN(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglDataA::GetNN() const function, expected prototype:\nlong mglDataA::GetNN() const\nClass arguments details:\n");
		}


		mglDataA* self=(Luna< mglDataA >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglDataA::GetNN() const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		long lret = self->GetNN();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglDataA::Maximal() const
	static int _bind_Maximal(lua_State *L) {
		if (!_lg_typecheck_Maximal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglDataA::Maximal() const function, expected prototype:\ndouble mglDataA::Maximal() const\nClass arguments details:\n");
		}


		mglDataA* self=(Luna< mglDataA >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglDataA::Maximal() const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		double lret = self->Maximal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglDataA::Minimal() const
	static int _bind_Minimal(lua_State *L) {
		if (!_lg_typecheck_Minimal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglDataA::Minimal() const function, expected prototype:\ndouble mglDataA::Minimal() const\nClass arguments details:\n");
		}


		mglDataA* self=(Luna< mglDataA >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglDataA::Minimal() const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		double lret = self->Minimal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglDataA::dvx(long i, long j = 0, long k = 0) const
	static int _bind_dvx(lua_State *L) {
		if (!_lg_typecheck_dvx(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglDataA::dvx(long i, long j = 0, long k = 0) const function, expected prototype:\ndouble mglDataA::dvx(long i, long j = 0, long k = 0) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long i=(long)lua_tointeger(L,2);
		long j=luatop>2 ? (long)lua_tointeger(L,3) : 0;
		long k=luatop>3 ? (long)lua_tointeger(L,4) : 0;

		mglDataA* self=(Luna< mglDataA >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglDataA::dvx(long, long, long) const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		double lret = self->dvx(i, j, k);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglDataA::dvy(long i, long j = 0, long k = 0) const
	static int _bind_dvy(lua_State *L) {
		if (!_lg_typecheck_dvy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglDataA::dvy(long i, long j = 0, long k = 0) const function, expected prototype:\ndouble mglDataA::dvy(long i, long j = 0, long k = 0) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long i=(long)lua_tointeger(L,2);
		long j=luatop>2 ? (long)lua_tointeger(L,3) : 0;
		long k=luatop>3 ? (long)lua_tointeger(L,4) : 0;

		mglDataA* self=(Luna< mglDataA >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglDataA::dvy(long, long, long) const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		double lret = self->dvy(i, j, k);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglDataA::dvz(long i, long j = 0, long k = 0) const
	static int _bind_dvz(lua_State *L) {
		if (!_lg_typecheck_dvz(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglDataA::dvz(long i, long j = 0, long k = 0) const function, expected prototype:\ndouble mglDataA::dvz(long i, long j = 0, long k = 0) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long i=(long)lua_tointeger(L,2);
		long j=luatop>2 ? (long)lua_tointeger(L,3) : 0;
		long k=luatop>3 ? (long)lua_tointeger(L,4) : 0;

		mglDataA* self=(Luna< mglDataA >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglDataA::dvz(long, long, long) const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		double lret = self->dvz(i, j, k);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

mglDataA* LunaTraits< mglDataA >::_bind_ctor(lua_State *L) {
	return luna_wrapper_mglDataA::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// double mglDataA::v(long i, long j = 0, long k = 0) const
	// double mglDataA::vthr(long i) const
	// long mglDataA::GetNx() const
	// long mglDataA::GetNy() const
	// long mglDataA::GetNz() const
	// double mglDataA::Maximal() const
	// double mglDataA::Minimal() const
	// double mglDataA::dvx(long i, long j = 0, long k = 0) const
	// double mglDataA::dvy(long i, long j = 0, long k = 0) const
	// double mglDataA::dvz(long i, long j = 0, long k = 0) const
}

void LunaTraits< mglDataA >::_bind_dtor(mglDataA* obj) {
	delete obj;
}

const char LunaTraits< mglDataA >::className[] = "mglDataA";
const char LunaTraits< mglDataA >::fullName[] = "mglDataA";
const char LunaTraits< mglDataA >::moduleName[] = "mathgl";
const char* LunaTraits< mglDataA >::parents[] = {0};
const int LunaTraits< mglDataA >::hash = 45413231;
const int LunaTraits< mglDataA >::uniqueIDs[] = {45413231,0};

luna_RegType LunaTraits< mglDataA >::methods[] = {
	{"v", &luna_wrapper_mglDataA::_bind_v},
	{"vthr", &luna_wrapper_mglDataA::_bind_vthr},
	{"GetNx", &luna_wrapper_mglDataA::_bind_GetNx},
	{"GetNy", &luna_wrapper_mglDataA::_bind_GetNy},
	{"GetNz", &luna_wrapper_mglDataA::_bind_GetNz},
	{"GetNN", &luna_wrapper_mglDataA::_bind_GetNN},
	{"Maximal", &luna_wrapper_mglDataA::_bind_Maximal},
	{"Minimal", &luna_wrapper_mglDataA::_bind_Minimal},
	{"dvx", &luna_wrapper_mglDataA::_bind_dvx},
	{"dvy", &luna_wrapper_mglDataA::_bind_dvy},
	{"dvz", &luna_wrapper_mglDataA::_bind_dvz},
	{"dynCast", &luna_wrapper_mglDataA::_bind_dynCast},
	{"__eq", &luna_wrapper_mglDataA::_bind___eq},
	{"fromVoid", &luna_wrapper_mglDataA::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglDataA::_bind_asVoid},
	{"getTable", &luna_wrapper_mglDataA::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< mglDataA >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglDataA >::enumValues[] = {
	{0,0}
};


