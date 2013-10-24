#include <plug_common.h>

class luna_wrapper_mglPrim {
public:
	typedef Luna< mglPrim > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88935222) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglPrim*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		mglPrim* rhs =(Luna< mglPrim >::check(L,2));
		mglPrim* self=(Luna< mglPrim >::check(L,1));
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
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		mglPrim* self= (mglPrim*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglPrim >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88935222) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< mglPrim >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		mglPrim* self=(Luna< mglPrim >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglPrim");
		
		return luna_dynamicCast(L,converters,"mglPrim",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getN1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getN2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getN3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getN4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getZ(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getS(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getW(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getP(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setN1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setN2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setN3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setN4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setZ(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setW(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setP(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// mglPrim::mglPrim(int t = 0)
	static mglPrim* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in mglPrim::mglPrim(int t = 0) function, expected prototype:\nmglPrim::mglPrim(int t = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int t=luatop>0 ? (int)lua_tointeger(L,1) : (int)0;

		return new mglPrim(t);
	}


	// Function binds:
	// long mglPrim::n1()
	static int _bind_getN1(lua_State *L) {
		if (!_lg_typecheck_getN1(L)) {
			luaL_error(L, "luna typecheck failed in long mglPrim::n1() function, expected prototype:\nlong mglPrim::n1()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglPrim* self=(Luna< mglPrim >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long mglPrim::n1(). Got : '%s'\n%s",typeid(Luna< mglPrim >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->n1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglPrim::n2()
	static int _bind_getN2(lua_State *L) {
		if (!_lg_typecheck_getN2(L)) {
			luaL_error(L, "luna typecheck failed in long mglPrim::n2() function, expected prototype:\nlong mglPrim::n2()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglPrim* self=(Luna< mglPrim >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long mglPrim::n2(). Got : '%s'\n%s",typeid(Luna< mglPrim >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->n2;
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglPrim::n3()
	static int _bind_getN3(lua_State *L) {
		if (!_lg_typecheck_getN3(L)) {
			luaL_error(L, "luna typecheck failed in long mglPrim::n3() function, expected prototype:\nlong mglPrim::n3()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglPrim* self=(Luna< mglPrim >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long mglPrim::n3(). Got : '%s'\n%s",typeid(Luna< mglPrim >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->n3;
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglPrim::n4()
	static int _bind_getN4(lua_State *L) {
		if (!_lg_typecheck_getN4(L)) {
			luaL_error(L, "luna typecheck failed in long mglPrim::n4() function, expected prototype:\nlong mglPrim::n4()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglPrim* self=(Luna< mglPrim >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long mglPrim::n4(). Got : '%s'\n%s",typeid(Luna< mglPrim >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->n4;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglPrim::type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in int mglPrim::type() function, expected prototype:\nint mglPrim::type()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglPrim* self=(Luna< mglPrim >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int mglPrim::type(). Got : '%s'\n%s",typeid(Luna< mglPrim >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->type;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglPrim::id()
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in int mglPrim::id() function, expected prototype:\nint mglPrim::id()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglPrim* self=(Luna< mglPrim >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int mglPrim::id(). Got : '%s'\n%s",typeid(Luna< mglPrim >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->id;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float mglPrim::z()
	static int _bind_getZ(lua_State *L) {
		if (!_lg_typecheck_getZ(L)) {
			luaL_error(L, "luna typecheck failed in float mglPrim::z() function, expected prototype:\nfloat mglPrim::z()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglPrim* self=(Luna< mglPrim >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float mglPrim::z(). Got : '%s'\n%s",typeid(Luna< mglPrim >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->z;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float mglPrim::s()
	static int _bind_getS(lua_State *L) {
		if (!_lg_typecheck_getS(L)) {
			luaL_error(L, "luna typecheck failed in float mglPrim::s() function, expected prototype:\nfloat mglPrim::s()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglPrim* self=(Luna< mglPrim >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float mglPrim::s(). Got : '%s'\n%s",typeid(Luna< mglPrim >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->s;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float mglPrim::w()
	static int _bind_getW(lua_State *L) {
		if (!_lg_typecheck_getW(L)) {
			luaL_error(L, "luna typecheck failed in float mglPrim::w() function, expected prototype:\nfloat mglPrim::w()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglPrim* self=(Luna< mglPrim >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float mglPrim::w(). Got : '%s'\n%s",typeid(Luna< mglPrim >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->w;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float mglPrim::p()
	static int _bind_getP(lua_State *L) {
		if (!_lg_typecheck_getP(L)) {
			luaL_error(L, "luna typecheck failed in float mglPrim::p() function, expected prototype:\nfloat mglPrim::p()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglPrim* self=(Luna< mglPrim >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float mglPrim::p(). Got : '%s'\n%s",typeid(Luna< mglPrim >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->p;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglPrim::n1(long value)
	static int _bind_setN1(lua_State *L) {
		if (!_lg_typecheck_setN1(L)) {
			luaL_error(L, "luna typecheck failed in void mglPrim::n1(long value) function, expected prototype:\nvoid mglPrim::n1(long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long value=(long)lua_tonumber(L,2);

		mglPrim* self=(Luna< mglPrim >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglPrim::n1(long). Got : '%s'\n%s",typeid(Luna< mglPrim >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->n1 = value;

		return 0;
	}

	// void mglPrim::n2(long value)
	static int _bind_setN2(lua_State *L) {
		if (!_lg_typecheck_setN2(L)) {
			luaL_error(L, "luna typecheck failed in void mglPrim::n2(long value) function, expected prototype:\nvoid mglPrim::n2(long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long value=(long)lua_tonumber(L,2);

		mglPrim* self=(Luna< mglPrim >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglPrim::n2(long). Got : '%s'\n%s",typeid(Luna< mglPrim >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->n2 = value;

		return 0;
	}

	// void mglPrim::n3(long value)
	static int _bind_setN3(lua_State *L) {
		if (!_lg_typecheck_setN3(L)) {
			luaL_error(L, "luna typecheck failed in void mglPrim::n3(long value) function, expected prototype:\nvoid mglPrim::n3(long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long value=(long)lua_tonumber(L,2);

		mglPrim* self=(Luna< mglPrim >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglPrim::n3(long). Got : '%s'\n%s",typeid(Luna< mglPrim >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->n3 = value;

		return 0;
	}

	// void mglPrim::n4(long value)
	static int _bind_setN4(lua_State *L) {
		if (!_lg_typecheck_setN4(L)) {
			luaL_error(L, "luna typecheck failed in void mglPrim::n4(long value) function, expected prototype:\nvoid mglPrim::n4(long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long value=(long)lua_tonumber(L,2);

		mglPrim* self=(Luna< mglPrim >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglPrim::n4(long). Got : '%s'\n%s",typeid(Luna< mglPrim >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->n4 = value;

		return 0;
	}

	// void mglPrim::type(int value)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luaL_error(L, "luna typecheck failed in void mglPrim::type(int value) function, expected prototype:\nvoid mglPrim::type(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		mglPrim* self=(Luna< mglPrim >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglPrim::type(int). Got : '%s'\n%s",typeid(Luna< mglPrim >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->type = value;

		return 0;
	}

	// void mglPrim::id(int value)
	static int _bind_setId(lua_State *L) {
		if (!_lg_typecheck_setId(L)) {
			luaL_error(L, "luna typecheck failed in void mglPrim::id(int value) function, expected prototype:\nvoid mglPrim::id(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		mglPrim* self=(Luna< mglPrim >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglPrim::id(int). Got : '%s'\n%s",typeid(Luna< mglPrim >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->id = value;

		return 0;
	}

	// void mglPrim::z(float value)
	static int _bind_setZ(lua_State *L) {
		if (!_lg_typecheck_setZ(L)) {
			luaL_error(L, "luna typecheck failed in void mglPrim::z(float value) function, expected prototype:\nvoid mglPrim::z(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		mglPrim* self=(Luna< mglPrim >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglPrim::z(float). Got : '%s'\n%s",typeid(Luna< mglPrim >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->z = value;

		return 0;
	}

	// void mglPrim::s(float value)
	static int _bind_setS(lua_State *L) {
		if (!_lg_typecheck_setS(L)) {
			luaL_error(L, "luna typecheck failed in void mglPrim::s(float value) function, expected prototype:\nvoid mglPrim::s(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		mglPrim* self=(Luna< mglPrim >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglPrim::s(float). Got : '%s'\n%s",typeid(Luna< mglPrim >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->s = value;

		return 0;
	}

	// void mglPrim::w(float value)
	static int _bind_setW(lua_State *L) {
		if (!_lg_typecheck_setW(L)) {
			luaL_error(L, "luna typecheck failed in void mglPrim::w(float value) function, expected prototype:\nvoid mglPrim::w(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		mglPrim* self=(Luna< mglPrim >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglPrim::w(float). Got : '%s'\n%s",typeid(Luna< mglPrim >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->w = value;

		return 0;
	}

	// void mglPrim::p(float value)
	static int _bind_setP(lua_State *L) {
		if (!_lg_typecheck_setP(L)) {
			luaL_error(L, "luna typecheck failed in void mglPrim::p(float value) function, expected prototype:\nvoid mglPrim::p(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		mglPrim* self=(Luna< mglPrim >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglPrim::p(float). Got : '%s'\n%s",typeid(Luna< mglPrim >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->p = value;

		return 0;
	}


	// Operator binds:

};

mglPrim* LunaTraits< mglPrim >::_bind_ctor(lua_State *L) {
	return luna_wrapper_mglPrim::_bind_ctor(L);
}

void LunaTraits< mglPrim >::_bind_dtor(mglPrim* obj) {
	delete obj;
}

const char LunaTraits< mglPrim >::className[] = "mglPrim";
const char LunaTraits< mglPrim >::fullName[] = "mglPrim";
const char LunaTraits< mglPrim >::moduleName[] = "mathgl";
const char* LunaTraits< mglPrim >::parents[] = {0};
const int LunaTraits< mglPrim >::hash = 88935222;
const int LunaTraits< mglPrim >::uniqueIDs[] = {88935222,0};

luna_RegType LunaTraits< mglPrim >::methods[] = {
	{"getN1", &luna_wrapper_mglPrim::_bind_getN1},
	{"getN2", &luna_wrapper_mglPrim::_bind_getN2},
	{"getN3", &luna_wrapper_mglPrim::_bind_getN3},
	{"getN4", &luna_wrapper_mglPrim::_bind_getN4},
	{"getType", &luna_wrapper_mglPrim::_bind_getType},
	{"getId", &luna_wrapper_mglPrim::_bind_getId},
	{"getZ", &luna_wrapper_mglPrim::_bind_getZ},
	{"getS", &luna_wrapper_mglPrim::_bind_getS},
	{"getW", &luna_wrapper_mglPrim::_bind_getW},
	{"getP", &luna_wrapper_mglPrim::_bind_getP},
	{"setN1", &luna_wrapper_mglPrim::_bind_setN1},
	{"setN2", &luna_wrapper_mglPrim::_bind_setN2},
	{"setN3", &luna_wrapper_mglPrim::_bind_setN3},
	{"setN4", &luna_wrapper_mglPrim::_bind_setN4},
	{"setType", &luna_wrapper_mglPrim::_bind_setType},
	{"setId", &luna_wrapper_mglPrim::_bind_setId},
	{"setZ", &luna_wrapper_mglPrim::_bind_setZ},
	{"setS", &luna_wrapper_mglPrim::_bind_setS},
	{"setW", &luna_wrapper_mglPrim::_bind_setW},
	{"setP", &luna_wrapper_mglPrim::_bind_setP},
	{"dynCast", &luna_wrapper_mglPrim::_bind_dynCast},
	{"__eq", &luna_wrapper_mglPrim::_bind___eq},
	{"fromVoid", &luna_wrapper_mglPrim::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglPrim::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< mglPrim >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglPrim >::enumValues[] = {
	{0,0}
};


