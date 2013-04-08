#include <plug_common.h>

class luna_wrapper_mglGroup {
public:
	typedef Luna< mglGroup > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48686103) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglGroup*)");
		}

		mglGroup* rhs =(Luna< mglGroup >::check(L,2));
		mglGroup* self=(Luna< mglGroup >::check(L,1));
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

		mglGroup* self= (mglGroup*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglGroup >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48686103) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< mglGroup >::check(L,1));
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

		mglGroup* self=(Luna< mglGroup >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglGroup");
		
		return luna_dynamicCast(L,converters,"mglGroup",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getP(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLbl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setP(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,47978518) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLbl(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// mglGroup::mglGroup(const char * lbl = "", int id = 0)
	static mglGroup* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglGroup::mglGroup(const char * lbl = \"\", int id = 0) function, expected prototype:\nmglGroup::mglGroup(const char * lbl = \"\", int id = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * lbl=luatop>0 ? (const char *)lua_tostring(L,1) : (const char*)"";
		int id=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		return new mglGroup(lbl, id);
	}


	// Function binds:
	// std::vector< long > mglGroup::p()
	static int _bind_getP(lua_State *L) {
		if (!_lg_typecheck_getP(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::vector< long > mglGroup::p() function, expected prototype:\nstd::vector< long > mglGroup::p()\nClass arguments details:\n");
		}


		mglGroup* self=(Luna< mglGroup >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::vector< long > mglGroup::p(). Got : '%s'",typeid(Luna< mglGroup >::check(L,1)).name());
		}
		const std::vector< long >* lret = &self->p;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< std::vector< long > >::push(L,lret,false);

		return 1;
	}

	// int mglGroup::Id()
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglGroup::Id() function, expected prototype:\nint mglGroup::Id()\nClass arguments details:\n");
		}


		mglGroup* self=(Luna< mglGroup >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglGroup::Id(). Got : '%s'",typeid(Luna< mglGroup >::check(L,1)).name());
		}
		int lret = self->Id;
		lua_pushnumber(L,lret);

		return 1;
	}

	// std::string mglGroup::Lbl()
	static int _bind_getLbl(lua_State *L) {
		if (!_lg_typecheck_getLbl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string mglGroup::Lbl() function, expected prototype:\nstd::string mglGroup::Lbl()\nClass arguments details:\n");
		}


		mglGroup* self=(Luna< mglGroup >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string mglGroup::Lbl(). Got : '%s'",typeid(Luna< mglGroup >::check(L,1)).name());
		}
		std::string lret = self->Lbl;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void mglGroup::p(std::vector< long > value)
	static int _bind_setP(lua_State *L) {
		if (!_lg_typecheck_setP(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGroup::p(std::vector< long > value) function, expected prototype:\nvoid mglGroup::p(std::vector< long > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		std::vector< long >* value_ptr=(Luna< std::vector< long > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in mglGroup::p function");
		}
		std::vector< long > value=*value_ptr;

		mglGroup* self=(Luna< mglGroup >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGroup::p(std::vector< long >). Got : '%s'",typeid(Luna< mglGroup >::check(L,1)).name());
		}
		self->p = value;

		return 0;
	}

	// void mglGroup::Id(int value)
	static int _bind_setId(lua_State *L) {
		if (!_lg_typecheck_setId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGroup::Id(int value) function, expected prototype:\nvoid mglGroup::Id(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		mglGroup* self=(Luna< mglGroup >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGroup::Id(int). Got : '%s'",typeid(Luna< mglGroup >::check(L,1)).name());
		}
		self->Id = value;

		return 0;
	}

	// void mglGroup::Lbl(std::string value)
	static int _bind_setLbl(lua_State *L) {
		if (!_lg_typecheck_setLbl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGroup::Lbl(std::string value) function, expected prototype:\nvoid mglGroup::Lbl(std::string value)\nClass arguments details:\n");
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		mglGroup* self=(Luna< mglGroup >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGroup::Lbl(std::string). Got : '%s'",typeid(Luna< mglGroup >::check(L,1)).name());
		}
		self->Lbl = value;

		return 0;
	}


	// Operator binds:

};

mglGroup* LunaTraits< mglGroup >::_bind_ctor(lua_State *L) {
	return luna_wrapper_mglGroup::_bind_ctor(L);
}

void LunaTraits< mglGroup >::_bind_dtor(mglGroup* obj) {
	delete obj;
}

const char LunaTraits< mglGroup >::className[] = "mglGroup";
const char LunaTraits< mglGroup >::fullName[] = "mglGroup";
const char LunaTraits< mglGroup >::moduleName[] = "mathgl";
const char* LunaTraits< mglGroup >::parents[] = {0};
const int LunaTraits< mglGroup >::hash = 48686103;
const int LunaTraits< mglGroup >::uniqueIDs[] = {48686103,0};

luna_RegType LunaTraits< mglGroup >::methods[] = {
	{"getP", &luna_wrapper_mglGroup::_bind_getP},
	{"getId", &luna_wrapper_mglGroup::_bind_getId},
	{"getLbl", &luna_wrapper_mglGroup::_bind_getLbl},
	{"setP", &luna_wrapper_mglGroup::_bind_setP},
	{"setId", &luna_wrapper_mglGroup::_bind_setId},
	{"setLbl", &luna_wrapper_mglGroup::_bind_setLbl},
	{"dynCast", &luna_wrapper_mglGroup::_bind_dynCast},
	{"__eq", &luna_wrapper_mglGroup::_bind___eq},
	{"fromVoid", &luna_wrapper_mglGroup::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglGroup::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< mglGroup >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglGroup >::enumValues[] = {
	{0,0}
};


