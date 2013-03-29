#include <plug_common.h>

class luna_wrapper_mglFont {
public:
	typedef Luna< mglFont > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88634591) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglFont*)");
		}

		mglFont* rhs =(Luna< mglFont >::check(L,2));
		mglFont* self=(Luna< mglFont >::check(L,1));
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

		mglFont* self= (mglFont*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglFont >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88634591) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< mglFont >::check(L,1));
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

		mglFont* self=(Luna< mglFont >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglFont");
		
		return luna_dynamicCast(L,converters,"mglFont",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Load(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Copy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,88634591)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Restore(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Ready(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Height_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Height_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Puts(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Width(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Internal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNumGlyph(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTr(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLn(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNt(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNl(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetWidth(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFact(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,88502113)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setParse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// mglFont::mglFont(const char * name = 0, const char * path = 0)
	static mglFont* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglFont::mglFont(const char * name = 0, const char * path = 0) function, expected prototype:\nmglFont::mglFont(const char * name = 0, const char * path = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * name=luatop>0 ? (const char *)lua_tostring(L,1) : (const char*)0;
		const char * path=luatop>1 ? (const char *)lua_tostring(L,2) : (const char*)0;

		return new mglFont(name, path);
	}


	// Function binds:
	// bool mglFont::Load(const char * base, const char * path = 0)
	static int _bind_Load(lua_State *L) {
		if (!_lg_typecheck_Load(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool mglFont::Load(const char * base, const char * path = 0) function, expected prototype:\nbool mglFont::Load(const char * base, const char * path = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * base=(const char *)lua_tostring(L,2);
		const char * path=luatop>2 ? (const char *)lua_tostring(L,3) : (const char*)0;

		mglFont* self=(Luna< mglFont >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool mglFont::Load(const char *, const char *). Got : '%s'",typeid(Luna< mglFont >::check(L,1)).name());
		}
		bool lret = self->Load(base, path);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void mglFont::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglFont::Clear() function, expected prototype:\nvoid mglFont::Clear()\nClass arguments details:\n");
		}


		mglFont* self=(Luna< mglFont >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglFont::Clear(). Got : '%s'",typeid(Luna< mglFont >::check(L,1)).name());
		}
		self->Clear();

		return 0;
	}

	// void mglFont::Copy(mglFont * arg1)
	static int _bind_Copy(lua_State *L) {
		if (!_lg_typecheck_Copy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglFont::Copy(mglFont * arg1) function, expected prototype:\nvoid mglFont::Copy(mglFont * arg1)\nClass arguments details:\narg 1 ID = 88634591\n");
		}

		mglFont* _arg1=(Luna< mglFont >::check(L,2));

		mglFont* self=(Luna< mglFont >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglFont::Copy(mglFont *). Got : '%s'",typeid(Luna< mglFont >::check(L,1)).name());
		}
		self->Copy(_arg1);

		return 0;
	}

	// void mglFont::Restore()
	static int _bind_Restore(lua_State *L) {
		if (!_lg_typecheck_Restore(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglFont::Restore() function, expected prototype:\nvoid mglFont::Restore()\nClass arguments details:\n");
		}


		mglFont* self=(Luna< mglFont >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglFont::Restore(). Got : '%s'",typeid(Luna< mglFont >::check(L,1)).name());
		}
		self->Restore();

		return 0;
	}

	// bool mglFont::Ready() const
	static int _bind_Ready(lua_State *L) {
		if (!_lg_typecheck_Ready(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool mglFont::Ready() const function, expected prototype:\nbool mglFont::Ready() const\nClass arguments details:\n");
		}


		mglFont* self=(Luna< mglFont >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool mglFont::Ready() const. Got : '%s'",typeid(Luna< mglFont >::check(L,1)).name());
		}
		bool lret = self->Ready();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float mglFont::Height(int font) const
	static int _bind_Height_overload_1(lua_State *L) {
		if (!_lg_typecheck_Height_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float mglFont::Height(int font) const function, expected prototype:\nfloat mglFont::Height(int font) const\nClass arguments details:\n");
		}

		int font=(int)lua_tointeger(L,2);

		mglFont* self=(Luna< mglFont >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float mglFont::Height(int) const. Got : '%s'",typeid(Luna< mglFont >::check(L,1)).name());
		}
		float lret = self->Height(font);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float mglFont::Height(const char * how) const
	static int _bind_Height_overload_2(lua_State *L) {
		if (!_lg_typecheck_Height_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float mglFont::Height(const char * how) const function, expected prototype:\nfloat mglFont::Height(const char * how) const\nClass arguments details:\n");
		}

		const char * how=(const char *)lua_tostring(L,2);

		mglFont* self=(Luna< mglFont >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float mglFont::Height(const char *) const. Got : '%s'",typeid(Luna< mglFont >::check(L,1)).name());
		}
		float lret = self->Height(how);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for mglFont::Height
	static int _bind_Height(lua_State *L) {
		if (_lg_typecheck_Height_overload_1(L)) return _bind_Height_overload_1(L);
		if (_lg_typecheck_Height_overload_2(L)) return _bind_Height_overload_2(L);

		luaL_error(L, "error in function Height, cannot match any of the overloads for function Height:\n  Height(int)\n  Height(const char *)\n");
		return 0;
	}

	// float mglFont::Puts(const char * str, const char * how, float col) const
	static int _bind_Puts(lua_State *L) {
		if (!_lg_typecheck_Puts(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float mglFont::Puts(const char * str, const char * how, float col) const function, expected prototype:\nfloat mglFont::Puts(const char * str, const char * how, float col) const\nClass arguments details:\n");
		}

		const char * str=(const char *)lua_tostring(L,2);
		const char * how=(const char *)lua_tostring(L,3);
		float col=(float)lua_tonumber(L,4);

		mglFont* self=(Luna< mglFont >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float mglFont::Puts(const char *, const char *, float) const. Got : '%s'",typeid(Luna< mglFont >::check(L,1)).name());
		}
		float lret = self->Puts(str, how, col);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float mglFont::Width(const char * str, const char * how) const
	static int _bind_Width(lua_State *L) {
		if (!_lg_typecheck_Width(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float mglFont::Width(const char * str, const char * how) const function, expected prototype:\nfloat mglFont::Width(const char * str, const char * how) const\nClass arguments details:\n");
		}

		const char * str=(const char *)lua_tostring(L,2);
		const char * how=(const char *)lua_tostring(L,3);

		mglFont* self=(Luna< mglFont >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float mglFont::Width(const char *, const char *) const. Got : '%s'",typeid(Luna< mglFont >::check(L,1)).name());
		}
		float lret = self->Width(str, how);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglFont::Internal(unsigned int s) const
	static int _bind_Internal(lua_State *L) {
		if (!_lg_typecheck_Internal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglFont::Internal(unsigned int s) const function, expected prototype:\nlong mglFont::Internal(unsigned int s) const\nClass arguments details:\n");
		}

		unsigned s=(unsigned)lua_tointeger(L,2);

		mglFont* self=(Luna< mglFont >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglFont::Internal(unsigned int) const. Got : '%s'",typeid(Luna< mglFont >::check(L,1)).name());
		}
		long lret = self->Internal(s);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int mglFont::GetNumGlyph() const
	static int _bind_GetNumGlyph(lua_State *L) {
		if (!_lg_typecheck_GetNumGlyph(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int mglFont::GetNumGlyph() const function, expected prototype:\nunsigned int mglFont::GetNumGlyph() const\nClass arguments details:\n");
		}


		mglFont* self=(Luna< mglFont >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int mglFont::GetNumGlyph() const. Got : '%s'",typeid(Luna< mglFont >::check(L,1)).name());
		}
		unsigned int lret = self->GetNumGlyph();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const short * mglFont::GetTr(int s, long j) const
	static int _bind_GetTr(lua_State *L) {
		if (!_lg_typecheck_GetTr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const short * mglFont::GetTr(int s, long j) const function, expected prototype:\nconst short * mglFont::GetTr(int s, long j) const\nClass arguments details:\n");
		}

		int s=(int)lua_tointeger(L,2);
		long j=(long)lua_tointeger(L,3);

		mglFont* self=(Luna< mglFont >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const short * mglFont::GetTr(int, long) const. Got : '%s'",typeid(Luna< mglFont >::check(L,1)).name());
		}
		const short * lret = self->GetTr(s, j);
		lua_pushnumber(L,*lret);

		return 1;
	}

	// const short * mglFont::GetLn(int s, long j) const
	static int _bind_GetLn(lua_State *L) {
		if (!_lg_typecheck_GetLn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const short * mglFont::GetLn(int s, long j) const function, expected prototype:\nconst short * mglFont::GetLn(int s, long j) const\nClass arguments details:\n");
		}

		int s=(int)lua_tointeger(L,2);
		long j=(long)lua_tointeger(L,3);

		mglFont* self=(Luna< mglFont >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const short * mglFont::GetLn(int, long) const. Got : '%s'",typeid(Luna< mglFont >::check(L,1)).name());
		}
		const short * lret = self->GetLn(s, j);
		lua_pushnumber(L,*lret);

		return 1;
	}

	// int mglFont::GetNt(int s, long j) const
	static int _bind_GetNt(lua_State *L) {
		if (!_lg_typecheck_GetNt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglFont::GetNt(int s, long j) const function, expected prototype:\nint mglFont::GetNt(int s, long j) const\nClass arguments details:\n");
		}

		int s=(int)lua_tointeger(L,2);
		long j=(long)lua_tointeger(L,3);

		mglFont* self=(Luna< mglFont >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglFont::GetNt(int, long) const. Got : '%s'",typeid(Luna< mglFont >::check(L,1)).name());
		}
		int lret = self->GetNt(s, j);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglFont::GetNl(int s, long j) const
	static int _bind_GetNl(lua_State *L) {
		if (!_lg_typecheck_GetNl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglFont::GetNl(int s, long j) const function, expected prototype:\nint mglFont::GetNl(int s, long j) const\nClass arguments details:\n");
		}

		int s=(int)lua_tointeger(L,2);
		long j=(long)lua_tointeger(L,3);

		mglFont* self=(Luna< mglFont >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglFont::GetNl(int, long) const. Got : '%s'",typeid(Luna< mglFont >::check(L,1)).name());
		}
		int lret = self->GetNl(s, j);
		lua_pushnumber(L,lret);

		return 1;
	}

	// short mglFont::GetWidth(int s, long j) const
	static int _bind_GetWidth(lua_State *L) {
		if (!_lg_typecheck_GetWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in short mglFont::GetWidth(int s, long j) const function, expected prototype:\nshort mglFont::GetWidth(int s, long j) const\nClass arguments details:\n");
		}

		int s=(int)lua_tointeger(L,2);
		long j=(long)lua_tointeger(L,3);

		mglFont* self=(Luna< mglFont >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call short mglFont::GetWidth(int, long) const. Got : '%s'",typeid(Luna< mglFont >::check(L,1)).name());
		}
		short lret = self->GetWidth(s, j);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float mglFont::GetFact(int s) const
	static int _bind_GetFact(lua_State *L) {
		if (!_lg_typecheck_GetFact(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float mglFont::GetFact(int s) const function, expected prototype:\nfloat mglFont::GetFact(int s) const\nClass arguments details:\n");
		}

		int s=(int)lua_tointeger(L,2);

		mglFont* self=(Luna< mglFont >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float mglFont::GetFact(int) const. Got : '%s'",typeid(Luna< mglFont >::check(L,1)).name());
		}
		float lret = self->GetFact(s);
		lua_pushnumber(L,lret);

		return 1;
	}

	// mglBase * mglFont::gr()
	static int _bind_getGr(lua_State *L) {
		if (!_lg_typecheck_getGr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglBase * mglFont::gr() function, expected prototype:\nmglBase * mglFont::gr()\nClass arguments details:\n");
		}


		mglFont* self=(Luna< mglFont >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglBase * mglFont::gr(). Got : '%s'",typeid(Luna< mglFont >::check(L,1)).name());
		}
		mglBase * lret = self->gr;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglBase >::push(L,lret,false);

		return 1;
	}

	// bool mglFont::parse()
	static int _bind_getParse(lua_State *L) {
		if (!_lg_typecheck_getParse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool mglFont::parse() function, expected prototype:\nbool mglFont::parse()\nClass arguments details:\n");
		}


		mglFont* self=(Luna< mglFont >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool mglFont::parse(). Got : '%s'",typeid(Luna< mglFont >::check(L,1)).name());
		}
		bool lret = self->parse;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void mglFont::gr(mglBase * value)
	static int _bind_setGr(lua_State *L) {
		if (!_lg_typecheck_setGr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglFont::gr(mglBase * value) function, expected prototype:\nvoid mglFont::gr(mglBase * value)\nClass arguments details:\narg 1 ID = 88502113\n");
		}

		mglBase* value=(Luna< mglBase >::check(L,2));

		mglFont* self=(Luna< mglFont >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglFont::gr(mglBase *). Got : '%s'",typeid(Luna< mglFont >::check(L,1)).name());
		}
		self->gr = value;

		return 0;
	}

	// void mglFont::parse(bool value)
	static int _bind_setParse(lua_State *L) {
		if (!_lg_typecheck_setParse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglFont::parse(bool value) function, expected prototype:\nvoid mglFont::parse(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		mglFont* self=(Luna< mglFont >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglFont::parse(bool). Got : '%s'",typeid(Luna< mglFont >::check(L,1)).name());
		}
		self->parse = value;

		return 0;
	}


	// Operator binds:

};

mglFont* LunaTraits< mglFont >::_bind_ctor(lua_State *L) {
	return luna_wrapper_mglFont::_bind_ctor(L);
}

void LunaTraits< mglFont >::_bind_dtor(mglFont* obj) {
	delete obj;
}

const char LunaTraits< mglFont >::className[] = "mglFont";
const char LunaTraits< mglFont >::fullName[] = "mglFont";
const char LunaTraits< mglFont >::moduleName[] = "mathgl";
const char* LunaTraits< mglFont >::parents[] = {0};
const int LunaTraits< mglFont >::hash = 88634591;
const int LunaTraits< mglFont >::uniqueIDs[] = {88634591,0};

luna_RegType LunaTraits< mglFont >::methods[] = {
	{"Load", &luna_wrapper_mglFont::_bind_Load},
	{"Clear", &luna_wrapper_mglFont::_bind_Clear},
	{"Copy", &luna_wrapper_mglFont::_bind_Copy},
	{"Restore", &luna_wrapper_mglFont::_bind_Restore},
	{"Ready", &luna_wrapper_mglFont::_bind_Ready},
	{"Height", &luna_wrapper_mglFont::_bind_Height},
	{"Puts", &luna_wrapper_mglFont::_bind_Puts},
	{"Width", &luna_wrapper_mglFont::_bind_Width},
	{"Internal", &luna_wrapper_mglFont::_bind_Internal},
	{"GetNumGlyph", &luna_wrapper_mglFont::_bind_GetNumGlyph},
	{"GetTr", &luna_wrapper_mglFont::_bind_GetTr},
	{"GetLn", &luna_wrapper_mglFont::_bind_GetLn},
	{"GetNt", &luna_wrapper_mglFont::_bind_GetNt},
	{"GetNl", &luna_wrapper_mglFont::_bind_GetNl},
	{"GetWidth", &luna_wrapper_mglFont::_bind_GetWidth},
	{"GetFact", &luna_wrapper_mglFont::_bind_GetFact},
	{"getGr", &luna_wrapper_mglFont::_bind_getGr},
	{"getParse", &luna_wrapper_mglFont::_bind_getParse},
	{"setGr", &luna_wrapper_mglFont::_bind_setGr},
	{"setParse", &luna_wrapper_mglFont::_bind_setParse},
	{"dynCast", &luna_wrapper_mglFont::_bind_dynCast},
	{"__eq", &luna_wrapper_mglFont::_bind___eq},
	{"fromVoid", &luna_wrapper_mglFont::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglFont::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< mglFont >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglFont >::enumValues[] = {
	{0,0}
};


