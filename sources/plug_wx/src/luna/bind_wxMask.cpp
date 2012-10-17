#include <plug_common.h>

class luna_wrapper_wxMask {
public:
	typedef Luna< wxMask > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxObject*)");
		}

		wxObject* rhs =(Luna< wxObject >::check(L,2));
		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxMask* ptr= dynamic_cast< wxMask* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMask >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxMask::wxMask()
	static wxMask* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMask::wxMask() function, expected prototype:\nwxMask::wxMask()\nClass arguments details:\n");
		}


		return new wxMask();
	}

	// wxMask::wxMask(const wxBitmap & bitmap, int index)
	static wxMask* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMask::wxMask(const wxBitmap & bitmap, int index) function, expected prototype:\nwxMask::wxMask(const wxBitmap & bitmap, int index)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,1));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxMask::wxMask function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		int index=(int)lua_tointeger(L,2);

		return new wxMask(bitmap, index);
	}

	// wxMask::wxMask(const wxBitmap & bitmap)
	static wxMask* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMask::wxMask(const wxBitmap & bitmap) function, expected prototype:\nwxMask::wxMask(const wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,1));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxMask::wxMask function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		return new wxMask(bitmap);
	}

	// wxMask::wxMask(const wxBitmap & bitmap, const wxColour & colour)
	static wxMask* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMask::wxMask(const wxBitmap & bitmap, const wxColour & colour) function, expected prototype:\nwxMask::wxMask(const wxBitmap & bitmap, const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,1));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxMask::wxMask function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		const wxColour* colour_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxMask::wxMask function");
		}
		const wxColour & colour=*colour_ptr;

		return new wxMask(bitmap, colour);
	}

	// Overload binder for wxMask::wxMask
	static wxMask* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxMask, cannot match any of the overloads for function wxMask:\n  wxMask()\n  wxMask(const wxBitmap &, int)\n  wxMask(const wxBitmap &)\n  wxMask(const wxBitmap &, const wxColour &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxMask::Create(const wxBitmap & bitmap, int index)
	static int _bind_Create_overload_1(lua_State *L) {
		if (!_lg_typecheck_Create_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMask::Create(const wxBitmap & bitmap, int index) function, expected prototype:\nbool wxMask::Create(const wxBitmap & bitmap, int index)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxMask::Create function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		int index=(int)lua_tointeger(L,3);

		wxMask* self=dynamic_cast< wxMask* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMask::Create(const wxBitmap &, int)");
		}
		bool lret = self->Create(bitmap, index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMask::Create(const wxBitmap & bitmap)
	static int _bind_Create_overload_2(lua_State *L) {
		if (!_lg_typecheck_Create_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMask::Create(const wxBitmap & bitmap) function, expected prototype:\nbool wxMask::Create(const wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxMask::Create function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxMask* self=dynamic_cast< wxMask* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMask::Create(const wxBitmap &)");
		}
		bool lret = self->Create(bitmap);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMask::Create(const wxBitmap & bitmap, const wxColour & colour)
	static int _bind_Create_overload_3(lua_State *L) {
		if (!_lg_typecheck_Create_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMask::Create(const wxBitmap & bitmap, const wxColour & colour) function, expected prototype:\nbool wxMask::Create(const wxBitmap & bitmap, const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxMask::Create function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		const wxColour* colour_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,3));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxMask::Create function");
		}
		const wxColour & colour=*colour_ptr;

		wxMask* self=dynamic_cast< wxMask* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMask::Create(const wxBitmap &, const wxColour &)");
		}
		bool lret = self->Create(bitmap, colour);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxMask::Create
	static int _bind_Create(lua_State *L) {
		if (_lg_typecheck_Create_overload_1(L)) return _bind_Create_overload_1(L);
		if (_lg_typecheck_Create_overload_2(L)) return _bind_Create_overload_2(L);
		if (_lg_typecheck_Create_overload_3(L)) return _bind_Create_overload_3(L);

		luaL_error(L, "error in function Create, cannot match any of the overloads for function Create:\n  Create(const wxBitmap &, int)\n  Create(const wxBitmap &)\n  Create(const wxBitmap &, const wxColour &)\n");
		return 0;
	}


	// Operator binds:

};

wxMask* LunaTraits< wxMask >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMask::_bind_ctor(L);
}

void LunaTraits< wxMask >::_bind_dtor(wxMask* obj) {
	delete obj;
}

const char LunaTraits< wxMask >::className[] = "wxMask";
const char LunaTraits< wxMask >::fullName[] = "wxMask";
const char LunaTraits< wxMask >::moduleName[] = "wx";
const char* LunaTraits< wxMask >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxMask >::hash = 20082106;
const int LunaTraits< wxMask >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxMask >::methods[] = {
	{"Create", &luna_wrapper_wxMask::_bind_Create},
	{"__eq", &luna_wrapper_wxMask::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxMask >::converters[] = {
	{"wxObject", &luna_wrapper_wxMask::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMask >::enumValues[] = {
	{0,0}
};


