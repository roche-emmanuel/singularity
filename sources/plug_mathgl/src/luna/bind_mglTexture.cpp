#include <plug_common.h>

class luna_wrapper_mglTexture {
public:
	typedef Luna< mglTexture > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,60998979) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglTexture*)");
		}

		mglTexture* rhs =(Luna< mglTexture >::check(L,2));
		mglTexture* self=(Luna< mglTexture >::check(L,1));
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

		mglTexture* self= (mglTexture*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglTexture >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,60998979) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< mglTexture >::check(L,1));
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

		mglTexture* self=(Luna< mglTexture >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglTexture");
		
		return luna_dynamicCast(L,converters,"mglTexture",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetC_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,18997795) ) return false;
		if( (!(Luna< mglPnt >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetC_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsSame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,60998979) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRGBA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRGBAOBJ(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getN(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSmooth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAlpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setN(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSmooth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAlpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// mglTexture::mglTexture()
	static mglTexture* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglTexture::mglTexture() function, expected prototype:\nmglTexture::mglTexture()\nClass arguments details:\n");
		}


		return new mglTexture();
	}

	// mglTexture::mglTexture(const char * cols, int smooth = 0, double alpha = 1)
	static mglTexture* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglTexture::mglTexture(const char * cols, int smooth = 0, double alpha = 1) function, expected prototype:\nmglTexture::mglTexture(const char * cols, int smooth = 0, double alpha = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * cols=(const char *)lua_tostring(L,1);
		int smooth=luatop>1 ? (int)lua_tointeger(L,2) : 0;
		double alpha=luatop>2 ? (double)lua_tonumber(L,3) : 1;

		return new mglTexture(cols, smooth, alpha);
	}

	// Overload binder for mglTexture::mglTexture
	static mglTexture* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function mglTexture, cannot match any of the overloads for function mglTexture:\n  mglTexture()\n  mglTexture(const char *, int, double)\n");
		return NULL;
	}


	// Function binds:
	// void mglTexture::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglTexture::Clear() function, expected prototype:\nvoid mglTexture::Clear()\nClass arguments details:\n");
		}


		mglTexture* self=(Luna< mglTexture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglTexture::Clear(). Got : '%s'",typeid(Luna< mglTexture >::check(L,1)).name());
		}
		self->Clear();

		return 0;
	}

	// void mglTexture::GetC(double u, double v, mglPnt & p) const
	static int _bind_GetC_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetC_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglTexture::GetC(double u, double v, mglPnt & p) const function, expected prototype:\nvoid mglTexture::GetC(double u, double v, mglPnt & p) const\nClass arguments details:\narg 3 ID = 18997795\n");
		}

		double u=(double)lua_tonumber(L,2);
		double v=(double)lua_tonumber(L,3);
		mglPnt* p_ptr=(Luna< mglPnt >::check(L,4));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in mglTexture::GetC function");
		}
		mglPnt & p=*p_ptr;

		mglTexture* self=(Luna< mglTexture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglTexture::GetC(double, double, mglPnt &) const. Got : '%s'",typeid(Luna< mglTexture >::check(L,1)).name());
		}
		self->GetC(u, v, p);

		return 0;
	}

	// mglColor mglTexture::GetC(double u, double v = 0) const
	static int _bind_GetC_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetC_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglColor mglTexture::GetC(double u, double v = 0) const function, expected prototype:\nmglColor mglTexture::GetC(double u, double v = 0) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double u=(double)lua_tonumber(L,2);
		double v=luatop>2 ? (double)lua_tonumber(L,3) : 0;

		mglTexture* self=(Luna< mglTexture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglColor mglTexture::GetC(double, double) const. Got : '%s'",typeid(Luna< mglTexture >::check(L,1)).name());
		}
		mglColor stack_lret = self->GetC(u, v);
		mglColor* lret = new mglColor(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglColor >::push(L,lret,true);

		return 1;
	}

	// Overload binder for mglTexture::GetC
	static int _bind_GetC(lua_State *L) {
		if (_lg_typecheck_GetC_overload_1(L)) return _bind_GetC_overload_1(L);
		if (_lg_typecheck_GetC_overload_2(L)) return _bind_GetC_overload_2(L);

		luaL_error(L, "error in function GetC, cannot match any of the overloads for function GetC:\n  GetC(double, double, mglPnt &)\n  GetC(double, double)\n");
		return 0;
	}

	// bool mglTexture::IsSame(const mglTexture & t) const
	static int _bind_IsSame(lua_State *L) {
		if (!_lg_typecheck_IsSame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool mglTexture::IsSame(const mglTexture & t) const function, expected prototype:\nbool mglTexture::IsSame(const mglTexture & t) const\nClass arguments details:\narg 1 ID = 60998979\n");
		}

		const mglTexture* t_ptr=(Luna< mglTexture >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in mglTexture::IsSame function");
		}
		const mglTexture & t=*t_ptr;

		mglTexture* self=(Luna< mglTexture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool mglTexture::IsSame(const mglTexture &) const. Got : '%s'",typeid(Luna< mglTexture >::check(L,1)).name());
		}
		bool lret = self->IsSame(t);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void mglTexture::GetRGBA(unsigned char * f) const
	static int _bind_GetRGBA(lua_State *L) {
		if (!_lg_typecheck_GetRGBA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglTexture::GetRGBA(unsigned char * f) const function, expected prototype:\nvoid mglTexture::GetRGBA(unsigned char * f) const\nClass arguments details:\n");
		}

		unsigned char f = (unsigned char)(lua_tointeger(L,2));

		mglTexture* self=(Luna< mglTexture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglTexture::GetRGBA(unsigned char *) const. Got : '%s'",typeid(Luna< mglTexture >::check(L,1)).name());
		}
		self->GetRGBA(&f);

		return 0;
	}

	// void mglTexture::GetRGBAOBJ(unsigned char * f) const
	static int _bind_GetRGBAOBJ(lua_State *L) {
		if (!_lg_typecheck_GetRGBAOBJ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglTexture::GetRGBAOBJ(unsigned char * f) const function, expected prototype:\nvoid mglTexture::GetRGBAOBJ(unsigned char * f) const\nClass arguments details:\n");
		}

		unsigned char f = (unsigned char)(lua_tointeger(L,2));

		mglTexture* self=(Luna< mglTexture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglTexture::GetRGBAOBJ(unsigned char *) const. Got : '%s'",typeid(Luna< mglTexture >::check(L,1)).name());
		}
		self->GetRGBAOBJ(&f);

		return 0;
	}

	// long mglTexture::n()
	static int _bind_getN(lua_State *L) {
		if (!_lg_typecheck_getN(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglTexture::n() function, expected prototype:\nlong mglTexture::n()\nClass arguments details:\n");
		}


		mglTexture* self=(Luna< mglTexture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglTexture::n(). Got : '%s'",typeid(Luna< mglTexture >::check(L,1)).name());
		}
		long lret = self->n;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglTexture::Smooth()
	static int _bind_getSmooth(lua_State *L) {
		if (!_lg_typecheck_getSmooth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglTexture::Smooth() function, expected prototype:\nint mglTexture::Smooth()\nClass arguments details:\n");
		}


		mglTexture* self=(Luna< mglTexture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglTexture::Smooth(). Got : '%s'",typeid(Luna< mglTexture >::check(L,1)).name());
		}
		int lret = self->Smooth;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglTexture::Alpha()
	static int _bind_getAlpha(lua_State *L) {
		if (!_lg_typecheck_getAlpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglTexture::Alpha() function, expected prototype:\ndouble mglTexture::Alpha()\nClass arguments details:\n");
		}


		mglTexture* self=(Luna< mglTexture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglTexture::Alpha(). Got : '%s'",typeid(Luna< mglTexture >::check(L,1)).name());
		}
		double lret = self->Alpha;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglTexture::n(long value)
	static int _bind_setN(lua_State *L) {
		if (!_lg_typecheck_setN(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglTexture::n(long value) function, expected prototype:\nvoid mglTexture::n(long value)\nClass arguments details:\n");
		}

		long value=(long)lua_tointeger(L,2);

		mglTexture* self=(Luna< mglTexture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglTexture::n(long). Got : '%s'",typeid(Luna< mglTexture >::check(L,1)).name());
		}
		self->n = value;

		return 0;
	}

	// void mglTexture::Smooth(int value)
	static int _bind_setSmooth(lua_State *L) {
		if (!_lg_typecheck_setSmooth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglTexture::Smooth(int value) function, expected prototype:\nvoid mglTexture::Smooth(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		mglTexture* self=(Luna< mglTexture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglTexture::Smooth(int). Got : '%s'",typeid(Luna< mglTexture >::check(L,1)).name());
		}
		self->Smooth = value;

		return 0;
	}

	// void mglTexture::Alpha(double value)
	static int _bind_setAlpha(lua_State *L) {
		if (!_lg_typecheck_setAlpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglTexture::Alpha(double value) function, expected prototype:\nvoid mglTexture::Alpha(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		mglTexture* self=(Luna< mglTexture >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglTexture::Alpha(double). Got : '%s'",typeid(Luna< mglTexture >::check(L,1)).name());
		}
		self->Alpha = value;

		return 0;
	}


	// Operator binds:

};

mglTexture* LunaTraits< mglTexture >::_bind_ctor(lua_State *L) {
	return luna_wrapper_mglTexture::_bind_ctor(L);
}

void LunaTraits< mglTexture >::_bind_dtor(mglTexture* obj) {
	delete obj;
}

const char LunaTraits< mglTexture >::className[] = "mglTexture";
const char LunaTraits< mglTexture >::fullName[] = "mglTexture";
const char LunaTraits< mglTexture >::moduleName[] = "mathgl";
const char* LunaTraits< mglTexture >::parents[] = {0};
const int LunaTraits< mglTexture >::hash = 60998979;
const int LunaTraits< mglTexture >::uniqueIDs[] = {60998979,0};

luna_RegType LunaTraits< mglTexture >::methods[] = {
	{"Clear", &luna_wrapper_mglTexture::_bind_Clear},
	{"GetC", &luna_wrapper_mglTexture::_bind_GetC},
	{"IsSame", &luna_wrapper_mglTexture::_bind_IsSame},
	{"GetRGBA", &luna_wrapper_mglTexture::_bind_GetRGBA},
	{"GetRGBAOBJ", &luna_wrapper_mglTexture::_bind_GetRGBAOBJ},
	{"getN", &luna_wrapper_mglTexture::_bind_getN},
	{"getSmooth", &luna_wrapper_mglTexture::_bind_getSmooth},
	{"getAlpha", &luna_wrapper_mglTexture::_bind_getAlpha},
	{"setN", &luna_wrapper_mglTexture::_bind_setN},
	{"setSmooth", &luna_wrapper_mglTexture::_bind_setSmooth},
	{"setAlpha", &luna_wrapper_mglTexture::_bind_setAlpha},
	{"dynCast", &luna_wrapper_mglTexture::_bind_dynCast},
	{"__eq", &luna_wrapper_mglTexture::_bind___eq},
	{"fromVoid", &luna_wrapper_mglTexture::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglTexture::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< mglTexture >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglTexture >::enumValues[] = {
	{0,0}
};


