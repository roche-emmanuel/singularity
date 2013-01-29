#include <plug_common.h>

#include <luna/wrappers/wrapper_mglDraw.h>

class luna_wrapper_mglDraw {
public:
	typedef Luna< mglDraw > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		mglDraw* self=(Luna< mglDraw >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<mglDraw,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88577492) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglDraw*)");
		}

		mglDraw* rhs =(Luna< mglDraw >::check(L,2));
		mglDraw* self=(Luna< mglDraw >::check(L,1));
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

		mglDraw* self= (mglDraw*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglDraw >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88577492) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< mglDraw >::check(L,1));
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

		mglDraw* self=(Luna< mglDraw >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglDraw");
		
		return luna_dynamicCast(L,converters,"mglDraw",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Draw(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,48672486)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Reload(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Click(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Reload(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Click(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// mglDraw::mglDraw(lua_Table * data)
	static mglDraw* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglDraw::mglDraw(lua_Table * data) function, expected prototype:\nmglDraw::mglDraw(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_mglDraw(L,NULL);
	}


	// Function binds:
	// int mglDraw::Draw(mglGraph * arg1)
	static int _bind_Draw(lua_State *L) {
		if (!_lg_typecheck_Draw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglDraw::Draw(mglGraph * arg1) function, expected prototype:\nint mglDraw::Draw(mglGraph * arg1)\nClass arguments details:\narg 1 ID = 48672486\n");
		}

		mglGraph* _arg1=(Luna< mglGraph >::check(L,2));

		mglDraw* self=(Luna< mglDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglDraw::Draw(mglGraph *). Got : '%s'",typeid(Luna< mglDraw >::check(L,1)).name());
		}
		int lret = self->Draw(_arg1);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglDraw::Reload()
	static int _bind_Reload(lua_State *L) {
		if (!_lg_typecheck_Reload(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDraw::Reload() function, expected prototype:\nvoid mglDraw::Reload()\nClass arguments details:\n");
		}


		mglDraw* self=(Luna< mglDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDraw::Reload(). Got : '%s'",typeid(Luna< mglDraw >::check(L,1)).name());
		}
		self->Reload();

		return 0;
	}

	// void mglDraw::Click()
	static int _bind_Click(lua_State *L) {
		if (!_lg_typecheck_Click(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDraw::Click() function, expected prototype:\nvoid mglDraw::Click()\nClass arguments details:\n");
		}


		mglDraw* self=(Luna< mglDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDraw::Click(). Got : '%s'",typeid(Luna< mglDraw >::check(L,1)).name());
		}
		self->Click();

		return 0;
	}

	// void mglDraw::base_Reload()
	static int _bind_base_Reload(lua_State *L) {
		if (!_lg_typecheck_base_Reload(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDraw::base_Reload() function, expected prototype:\nvoid mglDraw::base_Reload()\nClass arguments details:\n");
		}


		mglDraw* self=(Luna< mglDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDraw::base_Reload(). Got : '%s'",typeid(Luna< mglDraw >::check(L,1)).name());
		}
		self->mglDraw::Reload();

		return 0;
	}

	// void mglDraw::base_Click()
	static int _bind_base_Click(lua_State *L) {
		if (!_lg_typecheck_base_Click(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDraw::base_Click() function, expected prototype:\nvoid mglDraw::base_Click()\nClass arguments details:\n");
		}


		mglDraw* self=(Luna< mglDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDraw::base_Click(). Got : '%s'",typeid(Luna< mglDraw >::check(L,1)).name());
		}
		self->mglDraw::Click();

		return 0;
	}


	// Operator binds:

};

mglDraw* LunaTraits< mglDraw >::_bind_ctor(lua_State *L) {
	return luna_wrapper_mglDraw::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// int mglDraw::Draw(mglGraph * arg1)
}

void LunaTraits< mglDraw >::_bind_dtor(mglDraw* obj) {
	delete obj;
}

const char LunaTraits< mglDraw >::className[] = "mglDraw";
const char LunaTraits< mglDraw >::fullName[] = "mglDraw";
const char LunaTraits< mglDraw >::moduleName[] = "mathgl";
const char* LunaTraits< mglDraw >::parents[] = {0};
const int LunaTraits< mglDraw >::hash = 88577492;
const int LunaTraits< mglDraw >::uniqueIDs[] = {88577492,0};

luna_RegType LunaTraits< mglDraw >::methods[] = {
	{"Draw", &luna_wrapper_mglDraw::_bind_Draw},
	{"Reload", &luna_wrapper_mglDraw::_bind_Reload},
	{"Click", &luna_wrapper_mglDraw::_bind_Click},
	{"base_Reload", &luna_wrapper_mglDraw::_bind_base_Reload},
	{"base_Click", &luna_wrapper_mglDraw::_bind_base_Click},
	{"dynCast", &luna_wrapper_mglDraw::_bind_dynCast},
	{"__eq", &luna_wrapper_mglDraw::_bind___eq},
	{"fromVoid", &luna_wrapper_mglDraw::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglDraw::_bind_asVoid},
	{"getTable", &luna_wrapper_mglDraw::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< mglDraw >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglDraw >::enumValues[] = {
	{0,0}
};


