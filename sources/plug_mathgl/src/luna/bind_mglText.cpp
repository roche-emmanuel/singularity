#include <plug_common.h>

class luna_wrapper_mglText {
public:
	typedef Luna< mglText > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,89042365) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglText*)");
		}

		mglText* rhs =(Luna< mglText >::check(L,2));
		mglText* self=(Luna< mglText >::check(L,1));
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

		mglText* self= (mglText*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglText >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,89042365) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< mglText >::check(L,1));
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

		mglText* self=(Luna< mglText >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglText");
		
		return luna_dynamicCast(L,converters,"mglText",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStl(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// mglText::mglText(const std::wstring & txt, double v = 0)
	static mglText* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglText::mglText(const std::wstring & txt, double v = 0) function, expected prototype:\nmglText::mglText(const std::wstring & txt, double v = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		std::string txt_str(lua_tostring(L,1),lua_objlen(L,1));
		std::wstring txt = sgt::s2ws(txt_str);
		double v=luatop>1 ? (double)lua_tonumber(L,2) : (double)0;

		return new mglText(txt, v);
	}


	// Function binds:
	// std::wstring mglText::text()
	static int _bind_getText(lua_State *L) {
		if (!_lg_typecheck_getText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::wstring mglText::text() function, expected prototype:\nstd::wstring mglText::text()\nClass arguments details:\n");
		}


		mglText* self=(Luna< mglText >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::wstring mglText::text(). Got : '%s'",typeid(Luna< mglText >::check(L,1)).name());
		}
		std::wstring lret = self->text;
		std::string lret_str = sgt::ws2s(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// std::string mglText::stl()
	static int _bind_getStl(lua_State *L) {
		if (!_lg_typecheck_getStl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string mglText::stl() function, expected prototype:\nstd::string mglText::stl()\nClass arguments details:\n");
		}


		mglText* self=(Luna< mglText >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string mglText::stl(). Got : '%s'",typeid(Luna< mglText >::check(L,1)).name());
		}
		std::string lret = self->stl;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// double mglText::val()
	static int _bind_getVal(lua_State *L) {
		if (!_lg_typecheck_getVal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglText::val() function, expected prototype:\ndouble mglText::val()\nClass arguments details:\n");
		}


		mglText* self=(Luna< mglText >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglText::val(). Got : '%s'",typeid(Luna< mglText >::check(L,1)).name());
		}
		double lret = self->val;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglText::text(std::wstring value)
	static int _bind_setText(lua_State *L) {
		if (!_lg_typecheck_setText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglText::text(std::wstring value) function, expected prototype:\nvoid mglText::text(std::wstring value)\nClass arguments details:\n");
		}

		std::string value_str(lua_tostring(L,2),lua_objlen(L,2));
		std::wstring value = sgt::s2ws(value_str);

		mglText* self=(Luna< mglText >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglText::text(std::wstring). Got : '%s'",typeid(Luna< mglText >::check(L,1)).name());
		}
		self->text = value;

		return 0;
	}

	// void mglText::stl(std::string value)
	static int _bind_setStl(lua_State *L) {
		if (!_lg_typecheck_setStl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglText::stl(std::string value) function, expected prototype:\nvoid mglText::stl(std::string value)\nClass arguments details:\n");
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		mglText* self=(Luna< mglText >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglText::stl(std::string). Got : '%s'",typeid(Luna< mglText >::check(L,1)).name());
		}
		self->stl = value;

		return 0;
	}

	// void mglText::val(double value)
	static int _bind_setVal(lua_State *L) {
		if (!_lg_typecheck_setVal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglText::val(double value) function, expected prototype:\nvoid mglText::val(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		mglText* self=(Luna< mglText >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglText::val(double). Got : '%s'",typeid(Luna< mglText >::check(L,1)).name());
		}
		self->val = value;

		return 0;
	}


	// Operator binds:

};

mglText* LunaTraits< mglText >::_bind_ctor(lua_State *L) {
	return luna_wrapper_mglText::_bind_ctor(L);
}

void LunaTraits< mglText >::_bind_dtor(mglText* obj) {
	delete obj;
}

const char LunaTraits< mglText >::className[] = "mglText";
const char LunaTraits< mglText >::fullName[] = "mglText";
const char LunaTraits< mglText >::moduleName[] = "mathgl";
const char* LunaTraits< mglText >::parents[] = {0};
const int LunaTraits< mglText >::hash = 89042365;
const int LunaTraits< mglText >::uniqueIDs[] = {89042365,0};

luna_RegType LunaTraits< mglText >::methods[] = {
	{"getText", &luna_wrapper_mglText::_bind_getText},
	{"getStl", &luna_wrapper_mglText::_bind_getStl},
	{"getVal", &luna_wrapper_mglText::_bind_getVal},
	{"setText", &luna_wrapper_mglText::_bind_setText},
	{"setStl", &luna_wrapper_mglText::_bind_setStl},
	{"setVal", &luna_wrapper_mglText::_bind_setVal},
	{"dynCast", &luna_wrapper_mglText::_bind_dynCast},
	{"__eq", &luna_wrapper_mglText::_bind___eq},
	{"fromVoid", &luna_wrapper_mglText::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglText::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< mglText >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglText >::enumValues[] = {
	{0,0}
};


