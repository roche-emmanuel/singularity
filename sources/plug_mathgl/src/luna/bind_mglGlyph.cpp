#include <plug_common.h>

class luna_wrapper_mglGlyph {
public:
	typedef Luna< mglGlyph > luna_t;

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

		mglGlyph* self= (mglGlyph*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglGlyph >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48516804) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< mglGlyph >::check(L,1));
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

		mglGlyph* self=(Luna< mglGlyph >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglGlyph");
		
		return luna_dynamicCast(L,converters,"mglGlyph",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48516804) ) return false;
		if( (!(Luna< mglGlyph >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNt(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTrig(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNl(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTrig(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLine(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 2 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48516804) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48516804) ) return false;
		return true;
	}


	// Constructor binds:
	// mglGlyph::mglGlyph()
	static mglGlyph* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglGlyph::mglGlyph() function, expected prototype:\nmglGlyph::mglGlyph()\nClass arguments details:\n");
		}


		return new mglGlyph();
	}

	// mglGlyph::mglGlyph(const mglGlyph & a)
	static mglGlyph* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglGlyph::mglGlyph(const mglGlyph & a) function, expected prototype:\nmglGlyph::mglGlyph(const mglGlyph & a)\nClass arguments details:\narg 1 ID = 48516804\n");
		}

		const mglGlyph* a_ptr=(Luna< mglGlyph >::check(L,1));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGlyph::mglGlyph function");
		}
		const mglGlyph & a=*a_ptr;

		return new mglGlyph(a);
	}

	// mglGlyph::mglGlyph(long Nt, long Nl)
	static mglGlyph* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglGlyph::mglGlyph(long Nt, long Nl) function, expected prototype:\nmglGlyph::mglGlyph(long Nt, long Nl)\nClass arguments details:\n");
		}

		long Nt=(long)lua_tointeger(L,1);
		long Nl=(long)lua_tointeger(L,2);

		return new mglGlyph(Nt, Nl);
	}

	// Overload binder for mglGlyph::mglGlyph
	static mglGlyph* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function mglGlyph, cannot match any of the overloads for function mglGlyph:\n  mglGlyph()\n  mglGlyph(const mglGlyph &)\n  mglGlyph(long, long)\n");
		return NULL;
	}


	// Function binds:
	// void mglGlyph::Create(long Nt, long Nl)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGlyph::Create(long Nt, long Nl) function, expected prototype:\nvoid mglGlyph::Create(long Nt, long Nl)\nClass arguments details:\n");
		}

		long Nt=(long)lua_tointeger(L,2);
		long Nl=(long)lua_tointeger(L,3);

		mglGlyph* self=(Luna< mglGlyph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGlyph::Create(long, long). Got : '%s'",typeid(Luna< mglGlyph >::check(L,1)).name());
		}
		self->Create(Nt, Nl);

		return 0;
	}

	// long mglGlyph::nt()
	static int _bind_getNt(lua_State *L) {
		if (!_lg_typecheck_getNt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglGlyph::nt() function, expected prototype:\nlong mglGlyph::nt()\nClass arguments details:\n");
		}


		mglGlyph* self=(Luna< mglGlyph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglGlyph::nt(). Got : '%s'",typeid(Luna< mglGlyph >::check(L,1)).name());
		}
		long lret = self->nt;
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglGlyph::nl()
	static int _bind_getNl(lua_State *L) {
		if (!_lg_typecheck_getNl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglGlyph::nl() function, expected prototype:\nlong mglGlyph::nl()\nClass arguments details:\n");
		}


		mglGlyph* self=(Luna< mglGlyph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglGlyph::nl(). Got : '%s'",typeid(Luna< mglGlyph >::check(L,1)).name());
		}
		long lret = self->nl;
		lua_pushnumber(L,lret);

		return 1;
	}

	// short * mglGlyph::trig()
	static int _bind_getTrig(lua_State *L) {
		if (!_lg_typecheck_getTrig(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in short * mglGlyph::trig() function, expected prototype:\nshort * mglGlyph::trig()\nClass arguments details:\n");
		}


		mglGlyph* self=(Luna< mglGlyph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call short * mglGlyph::trig(). Got : '%s'",typeid(Luna< mglGlyph >::check(L,1)).name());
		}
		short * lret = self->trig;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// short * mglGlyph::line()
	static int _bind_getLine(lua_State *L) {
		if (!_lg_typecheck_getLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in short * mglGlyph::line() function, expected prototype:\nshort * mglGlyph::line()\nClass arguments details:\n");
		}


		mglGlyph* self=(Luna< mglGlyph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call short * mglGlyph::line(). Got : '%s'",typeid(Luna< mglGlyph >::check(L,1)).name());
		}
		short * lret = self->line;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// void mglGlyph::nt(long value)
	static int _bind_setNt(lua_State *L) {
		if (!_lg_typecheck_setNt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGlyph::nt(long value) function, expected prototype:\nvoid mglGlyph::nt(long value)\nClass arguments details:\n");
		}

		long value=(long)lua_tointeger(L,2);

		mglGlyph* self=(Luna< mglGlyph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGlyph::nt(long). Got : '%s'",typeid(Luna< mglGlyph >::check(L,1)).name());
		}
		self->nt = value;

		return 0;
	}

	// void mglGlyph::nl(long value)
	static int _bind_setNl(lua_State *L) {
		if (!_lg_typecheck_setNl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGlyph::nl(long value) function, expected prototype:\nvoid mglGlyph::nl(long value)\nClass arguments details:\n");
		}

		long value=(long)lua_tointeger(L,2);

		mglGlyph* self=(Luna< mglGlyph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGlyph::nl(long). Got : '%s'",typeid(Luna< mglGlyph >::check(L,1)).name());
		}
		self->nl = value;

		return 0;
	}

	// void mglGlyph::trig(short * value)
	static int _bind_setTrig(lua_State *L) {
		if (!_lg_typecheck_setTrig(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGlyph::trig(short * value) function, expected prototype:\nvoid mglGlyph::trig(short * value)\nClass arguments details:\n");
		}

		short* value=(short*)Luna< void >::check(L,2);

		mglGlyph* self=(Luna< mglGlyph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGlyph::trig(short *). Got : '%s'",typeid(Luna< mglGlyph >::check(L,1)).name());
		}
		self->trig = value;

		return 0;
	}

	// void mglGlyph::line(short * value)
	static int _bind_setLine(lua_State *L) {
		if (!_lg_typecheck_setLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglGlyph::line(short * value) function, expected prototype:\nvoid mglGlyph::line(short * value)\nClass arguments details:\n");
		}

		short* value=(short*)Luna< void >::check(L,2);

		mglGlyph* self=(Luna< mglGlyph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglGlyph::line(short *). Got : '%s'",typeid(Luna< mglGlyph >::check(L,1)).name());
		}
		self->line = value;

		return 0;
	}


	// Operator binds:
	// bool mglGlyph::operator==(const mglGlyph & g)
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool mglGlyph::operator==(const mglGlyph & g) function, expected prototype:\nbool mglGlyph::operator==(const mglGlyph & g)\nClass arguments details:\narg 1 ID = 48516804\n");
		}

		const mglGlyph* g_ptr=(Luna< mglGlyph >::check(L,2));
		if( !g_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg g in mglGlyph::operator== function");
		}
		const mglGlyph & g=*g_ptr;

		mglGlyph* self=(Luna< mglGlyph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool mglGlyph::operator==(const mglGlyph &). Got : '%s'",typeid(Luna< mglGlyph >::check(L,1)).name());
		}
		bool lret = self->operator==(g);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// mglGlyph & mglGlyph::operator=(const mglGlyph & a)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglGlyph & mglGlyph::operator=(const mglGlyph & a) function, expected prototype:\nmglGlyph & mglGlyph::operator=(const mglGlyph & a)\nClass arguments details:\narg 1 ID = 48516804\n");
		}

		const mglGlyph* a_ptr=(Luna< mglGlyph >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglGlyph::operator= function");
		}
		const mglGlyph & a=*a_ptr;

		mglGlyph* self=(Luna< mglGlyph >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglGlyph & mglGlyph::operator=(const mglGlyph &). Got : '%s'",typeid(Luna< mglGlyph >::check(L,1)).name());
		}
		const mglGlyph* lret = &self->operator=(a);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglGlyph >::push(L,lret,false);

		return 1;
	}


};

mglGlyph* LunaTraits< mglGlyph >::_bind_ctor(lua_State *L) {
	return luna_wrapper_mglGlyph::_bind_ctor(L);
}

void LunaTraits< mglGlyph >::_bind_dtor(mglGlyph* obj) {
	delete obj;
}

const char LunaTraits< mglGlyph >::className[] = "mglGlyph";
const char LunaTraits< mglGlyph >::fullName[] = "mglGlyph";
const char LunaTraits< mglGlyph >::moduleName[] = "mathgl";
const char* LunaTraits< mglGlyph >::parents[] = {0};
const int LunaTraits< mglGlyph >::hash = 48516804;
const int LunaTraits< mglGlyph >::uniqueIDs[] = {48516804,0};

luna_RegType LunaTraits< mglGlyph >::methods[] = {
	{"Create", &luna_wrapper_mglGlyph::_bind_Create},
	{"getNt", &luna_wrapper_mglGlyph::_bind_getNt},
	{"getNl", &luna_wrapper_mglGlyph::_bind_getNl},
	{"getTrig", &luna_wrapper_mglGlyph::_bind_getTrig},
	{"getLine", &luna_wrapper_mglGlyph::_bind_getLine},
	{"setNt", &luna_wrapper_mglGlyph::_bind_setNt},
	{"setNl", &luna_wrapper_mglGlyph::_bind_setNl},
	{"setTrig", &luna_wrapper_mglGlyph::_bind_setTrig},
	{"setLine", &luna_wrapper_mglGlyph::_bind_setLine},
	{"__eq", &luna_wrapper_mglGlyph::_bind___eq},
	{"op_assign", &luna_wrapper_mglGlyph::_bind_op_assign},
	{"dynCast", &luna_wrapper_mglGlyph::_bind_dynCast},
	{"fromVoid", &luna_wrapper_mglGlyph::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglGlyph::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< mglGlyph >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglGlyph >::enumValues[] = {
	{0,0}
};


