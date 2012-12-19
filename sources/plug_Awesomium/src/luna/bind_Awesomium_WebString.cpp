#include <plug_common.h>

class luna_wrapper_Awesomium_WebString {
public:
	typedef Luna< Awesomium::WebString > luna_t;

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

		Awesomium::WebString* self=(Luna< Awesomium::WebString >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebString");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebString",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isstring(L,1)==0) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isstring(L,1)==0) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_data(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_length(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsEmpty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isstring(L,2)==0) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Assign_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isstring(L,2)==0) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Assign_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isstring(L,2)==0) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Assign_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Assign_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Append(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isstring(L,2)==0) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isstring(L,2)==0) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToUTF8(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CreateFromUTF8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 3 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isstring(L,2)==0) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isstring(L,2)==0) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isstring(L,2)==0) ) return false;
		return true;
	}


	// Constructor binds:
	// Awesomium::WebString::WebString()
	static Awesomium::WebString* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString::WebString() function, expected prototype:\nAwesomium::WebString::WebString()\nClass arguments details:\n");
		}


		return new Awesomium::WebString();
	}

	// Awesomium::WebString::WebString(const Awesomium::WebString & src, unsigned int pos, unsigned int n)
	static Awesomium::WebString* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString::WebString(const Awesomium::WebString & src, unsigned int pos, unsigned int n) function, expected prototype:\nAwesomium::WebString::WebString(const Awesomium::WebString & src, unsigned int pos, unsigned int n)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string src_str(lua_tostring(L,1),lua_objlen(L,1));
		Awesomium::WebString src = Awesomium::ToWebString(src_str);
		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int n=(unsigned int)lua_tointeger(L,3);

		return new Awesomium::WebString(src, pos, n);
	}

	// Awesomium::WebString::WebString(const unsigned short * data)
	static Awesomium::WebString* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString::WebString(const unsigned short * data) function, expected prototype:\nAwesomium::WebString::WebString(const unsigned short * data)\nClass arguments details:\n");
		}

		unsigned short data=(unsigned short)lua_tointeger(L,1);

		return new Awesomium::WebString(&data);
	}

	// Awesomium::WebString::WebString(const unsigned short * data, unsigned int len)
	static Awesomium::WebString* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString::WebString(const unsigned short * data, unsigned int len) function, expected prototype:\nAwesomium::WebString::WebString(const unsigned short * data, unsigned int len)\nClass arguments details:\n");
		}

		unsigned short data=(unsigned short)lua_tointeger(L,1);
		unsigned int len=(unsigned int)lua_tointeger(L,2);

		return new Awesomium::WebString(&data, len);
	}

	// Awesomium::WebString::WebString(const Awesomium::WebString & src)
	static Awesomium::WebString* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString::WebString(const Awesomium::WebString & src) function, expected prototype:\nAwesomium::WebString::WebString(const Awesomium::WebString & src)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string src_str(lua_tostring(L,1),lua_objlen(L,1));
		Awesomium::WebString src = Awesomium::ToWebString(src_str);

		return new Awesomium::WebString(src);
	}

	// Overload binder for Awesomium::WebString::WebString
	static Awesomium::WebString* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);

		luaL_error(L, "error in function WebString, cannot match any of the overloads for function WebString:\n  WebString()\n  WebString(const Awesomium::WebString &, unsigned int, unsigned int)\n  WebString(const unsigned short *)\n  WebString(const unsigned short *, unsigned int)\n  WebString(const Awesomium::WebString &)\n");
		return NULL;
	}


	// Function binds:
	// const unsigned short * Awesomium::WebString::data() const
	static int _bind_data(lua_State *L) {
		if (!_lg_typecheck_data(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const unsigned short * Awesomium::WebString::data() const function, expected prototype:\nconst unsigned short * Awesomium::WebString::data() const\nClass arguments details:\n");
		}


		Awesomium::WebString* self=(Luna< Awesomium::WebString >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const unsigned short * Awesomium::WebString::data() const");
		}
		const unsigned short * lret = self->data();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// unsigned int Awesomium::WebString::length() const
	static int _bind_length(lua_State *L) {
		if (!_lg_typecheck_length(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int Awesomium::WebString::length() const function, expected prototype:\nunsigned int Awesomium::WebString::length() const\nClass arguments details:\n");
		}


		Awesomium::WebString* self=(Luna< Awesomium::WebString >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int Awesomium::WebString::length() const");
		}
		unsigned int lret = self->length();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool Awesomium::WebString::IsEmpty() const
	static int _bind_IsEmpty(lua_State *L) {
		if (!_lg_typecheck_IsEmpty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebString::IsEmpty() const function, expected prototype:\nbool Awesomium::WebString::IsEmpty() const\nClass arguments details:\n");
		}


		Awesomium::WebString* self=(Luna< Awesomium::WebString >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebString::IsEmpty() const");
		}
		bool lret = self->IsEmpty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int Awesomium::WebString::Compare(const Awesomium::WebString & src) const
	static int _bind_Compare(lua_State *L) {
		if (!_lg_typecheck_Compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int Awesomium::WebString::Compare(const Awesomium::WebString & src) const function, expected prototype:\nint Awesomium::WebString::Compare(const Awesomium::WebString & src) const\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string src_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString src = Awesomium::ToWebString(src_str);

		Awesomium::WebString* self=(Luna< Awesomium::WebString >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int Awesomium::WebString::Compare(const Awesomium::WebString &) const");
		}
		int lret = self->Compare(src);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Awesomium::WebString & Awesomium::WebString::Assign(const Awesomium::WebString & src)
	static int _bind_Assign_overload_1(lua_State *L) {
		if (!_lg_typecheck_Assign_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString & Awesomium::WebString::Assign(const Awesomium::WebString & src) function, expected prototype:\nAwesomium::WebString & Awesomium::WebString::Assign(const Awesomium::WebString & src)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string src_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString src = Awesomium::ToWebString(src_str);

		Awesomium::WebString* self=(Luna< Awesomium::WebString >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString & Awesomium::WebString::Assign(const Awesomium::WebString &)");
		}
		Awesomium::WebString & lret = self->Assign(src);
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// Awesomium::WebString & Awesomium::WebString::Assign(const Awesomium::WebString & src, unsigned int pos, unsigned int n)
	static int _bind_Assign_overload_2(lua_State *L) {
		if (!_lg_typecheck_Assign_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString & Awesomium::WebString::Assign(const Awesomium::WebString & src, unsigned int pos, unsigned int n) function, expected prototype:\nAwesomium::WebString & Awesomium::WebString::Assign(const Awesomium::WebString & src, unsigned int pos, unsigned int n)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string src_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString src = Awesomium::ToWebString(src_str);
		unsigned int pos=(unsigned int)lua_tointeger(L,3);
		unsigned int n=(unsigned int)lua_tointeger(L,4);

		Awesomium::WebString* self=(Luna< Awesomium::WebString >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString & Awesomium::WebString::Assign(const Awesomium::WebString &, unsigned int, unsigned int)");
		}
		Awesomium::WebString & lret = self->Assign(src, pos, n);
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// Awesomium::WebString & Awesomium::WebString::Assign(const unsigned short * data)
	static int _bind_Assign_overload_3(lua_State *L) {
		if (!_lg_typecheck_Assign_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString & Awesomium::WebString::Assign(const unsigned short * data) function, expected prototype:\nAwesomium::WebString & Awesomium::WebString::Assign(const unsigned short * data)\nClass arguments details:\n");
		}

		unsigned short data=(unsigned short)lua_tointeger(L,2);

		Awesomium::WebString* self=(Luna< Awesomium::WebString >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString & Awesomium::WebString::Assign(const unsigned short *)");
		}
		Awesomium::WebString & lret = self->Assign(&data);
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// Awesomium::WebString & Awesomium::WebString::Assign(const unsigned short * data, unsigned int len)
	static int _bind_Assign_overload_4(lua_State *L) {
		if (!_lg_typecheck_Assign_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString & Awesomium::WebString::Assign(const unsigned short * data, unsigned int len) function, expected prototype:\nAwesomium::WebString & Awesomium::WebString::Assign(const unsigned short * data, unsigned int len)\nClass arguments details:\n");
		}

		unsigned short data=(unsigned short)lua_tointeger(L,2);
		unsigned int len=(unsigned int)lua_tointeger(L,3);

		Awesomium::WebString* self=(Luna< Awesomium::WebString >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString & Awesomium::WebString::Assign(const unsigned short *, unsigned int)");
		}
		Awesomium::WebString & lret = self->Assign(&data, len);
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// Overload binder for Awesomium::WebString::Assign
	static int _bind_Assign(lua_State *L) {
		if (_lg_typecheck_Assign_overload_1(L)) return _bind_Assign_overload_1(L);
		if (_lg_typecheck_Assign_overload_2(L)) return _bind_Assign_overload_2(L);
		if (_lg_typecheck_Assign_overload_3(L)) return _bind_Assign_overload_3(L);
		if (_lg_typecheck_Assign_overload_4(L)) return _bind_Assign_overload_4(L);

		luaL_error(L, "error in function Assign, cannot match any of the overloads for function Assign:\n  Assign(const Awesomium::WebString &)\n  Assign(const Awesomium::WebString &, unsigned int, unsigned int)\n  Assign(const unsigned short *)\n  Assign(const unsigned short *, unsigned int)\n");
		return 0;
	}

	// Awesomium::WebString & Awesomium::WebString::Append(const Awesomium::WebString & src)
	static int _bind_Append(lua_State *L) {
		if (!_lg_typecheck_Append(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString & Awesomium::WebString::Append(const Awesomium::WebString & src) function, expected prototype:\nAwesomium::WebString & Awesomium::WebString::Append(const Awesomium::WebString & src)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string src_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString src = Awesomium::ToWebString(src_str);

		Awesomium::WebString* self=(Luna< Awesomium::WebString >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString & Awesomium::WebString::Append(const Awesomium::WebString &)");
		}
		Awesomium::WebString & lret = self->Append(src);
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// void Awesomium::WebString::Swap(Awesomium::WebString & src)
	static int _bind_Swap(lua_State *L) {
		if (!_lg_typecheck_Swap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebString::Swap(Awesomium::WebString & src) function, expected prototype:\nvoid Awesomium::WebString::Swap(Awesomium::WebString & src)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string src_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString src = Awesomium::ToWebString(src_str);

		Awesomium::WebString* self=(Luna< Awesomium::WebString >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebString::Swap(Awesomium::WebString &)");
		}
		self->Swap(src);

		return 0;
	}

	// void Awesomium::WebString::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebString::Clear() function, expected prototype:\nvoid Awesomium::WebString::Clear()\nClass arguments details:\n");
		}


		Awesomium::WebString* self=(Luna< Awesomium::WebString >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebString::Clear()");
		}
		self->Clear();

		return 0;
	}

	// unsigned int Awesomium::WebString::ToUTF8(char * dest, unsigned int len) const
	static int _bind_ToUTF8(lua_State *L) {
		if (!_lg_typecheck_ToUTF8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int Awesomium::WebString::ToUTF8(char * dest, unsigned int len) const function, expected prototype:\nunsigned int Awesomium::WebString::ToUTF8(char * dest, unsigned int len) const\nClass arguments details:\n");
		}

		char dest=(char)lua_tointeger(L,2);
		unsigned int len=(unsigned int)lua_tointeger(L,3);

		Awesomium::WebString* self=(Luna< Awesomium::WebString >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int Awesomium::WebString::ToUTF8(char *, unsigned int) const");
		}
		unsigned int lret = self->ToUTF8(&dest, len);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static Awesomium::WebString Awesomium::WebString::CreateFromUTF8(const char * data, unsigned int len)
	static int _bind_CreateFromUTF8(lua_State *L) {
		if (!_lg_typecheck_CreateFromUTF8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static Awesomium::WebString Awesomium::WebString::CreateFromUTF8(const char * data, unsigned int len) function, expected prototype:\nstatic Awesomium::WebString Awesomium::WebString::CreateFromUTF8(const char * data, unsigned int len)\nClass arguments details:\n");
		}

		const char * data=(const char *)lua_tostring(L,1);
		unsigned int len=(unsigned int)lua_tointeger(L,2);

		Awesomium::WebString stack_lret = Awesomium::WebString::CreateFromUTF8(data, len);
		Awesomium::WebString* lret = new Awesomium::WebString(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebString >::push(L,lret,true);

		return 1;
	}


	// Operator binds:
	// bool Awesomium::WebString::operator==(const Awesomium::WebString & other) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebString::operator==(const Awesomium::WebString & other) const function, expected prototype:\nbool Awesomium::WebString::operator==(const Awesomium::WebString & other) const\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string other_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString other = Awesomium::ToWebString(other_str);

		Awesomium::WebString* self=(Luna< Awesomium::WebString >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebString::operator==(const Awesomium::WebString &) const");
		}
		bool lret = self->operator==(other);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::WebString::operator!=(const Awesomium::WebString & other) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebString::operator!=(const Awesomium::WebString & other) const function, expected prototype:\nbool Awesomium::WebString::operator!=(const Awesomium::WebString & other) const\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string other_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString other = Awesomium::ToWebString(other_str);

		Awesomium::WebString* self=(Luna< Awesomium::WebString >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebString::operator!=(const Awesomium::WebString &) const");
		}
		bool lret = self->operator!=(other);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::WebString::operator<(const Awesomium::WebString & other) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebString::operator<(const Awesomium::WebString & other) const function, expected prototype:\nbool Awesomium::WebString::operator<(const Awesomium::WebString & other) const\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string other_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString other = Awesomium::ToWebString(other_str);

		Awesomium::WebString* self=(Luna< Awesomium::WebString >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebString::operator<(const Awesomium::WebString &) const");
		}
		bool lret = self->operator<(other);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

Awesomium::WebString* LunaTraits< Awesomium::WebString >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_WebString::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< Awesomium::WebString >::_bind_dtor(Awesomium::WebString* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::WebString >::className[] = "WebString";
const char LunaTraits< Awesomium::WebString >::fullName[] = "Awesomium::WebString";
const char LunaTraits< Awesomium::WebString >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebString >::parents[] = {0};
const int LunaTraits< Awesomium::WebString >::hash = 13938525;
const int LunaTraits< Awesomium::WebString >::uniqueIDs[] = {13938525,0};

luna_RegType LunaTraits< Awesomium::WebString >::methods[] = {
	{"data", &luna_wrapper_Awesomium_WebString::_bind_data},
	{"length", &luna_wrapper_Awesomium_WebString::_bind_length},
	{"IsEmpty", &luna_wrapper_Awesomium_WebString::_bind_IsEmpty},
	{"Compare", &luna_wrapper_Awesomium_WebString::_bind_Compare},
	{"Assign", &luna_wrapper_Awesomium_WebString::_bind_Assign},
	{"Append", &luna_wrapper_Awesomium_WebString::_bind_Append},
	{"Swap", &luna_wrapper_Awesomium_WebString::_bind_Swap},
	{"Clear", &luna_wrapper_Awesomium_WebString::_bind_Clear},
	{"ToUTF8", &luna_wrapper_Awesomium_WebString::_bind_ToUTF8},
	{"CreateFromUTF8", &luna_wrapper_Awesomium_WebString::_bind_CreateFromUTF8},
	{"__eq", &luna_wrapper_Awesomium_WebString::_bind___eq},
	{"op_neq", &luna_wrapper_Awesomium_WebString::_bind_op_neq},
	{"__lt", &luna_wrapper_Awesomium_WebString::_bind___lt},
	{"dynCast", &luna_wrapper_Awesomium_WebString::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebString >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebString >::enumValues[] = {
	{0,0}
};


