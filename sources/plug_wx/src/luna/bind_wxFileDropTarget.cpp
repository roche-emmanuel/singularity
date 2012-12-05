#include <plug_common.h>

#include <luna/wrappers/wrapper_wxFileDropTarget.h>

class luna_wrapper_wxFileDropTarget {
public:
	typedef Luna< wxFileDropTarget > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,93694316) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDropTarget*)");
		}

		wxDropTarget* rhs =(Luna< wxDropTarget >::check(L,2));
		wxDropTarget* self=(Luna< wxDropTarget >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxDropTarget(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxFileDropTarget* ptr= dynamic_cast< wxFileDropTarget* >(Luna< wxDropTarget >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFileDropTarget >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_OnDrop(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnDropFiles(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,59507769) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxFileDropTarget::OnDrop(int x, int y)
	static int _bind_OnDrop(lua_State *L) {
		if (!_lg_typecheck_OnDrop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFileDropTarget::OnDrop(int x, int y) function, expected prototype:\nbool wxFileDropTarget::OnDrop(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxFileDropTarget* self=dynamic_cast< wxFileDropTarget* >(Luna< wxDropTarget >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFileDropTarget::OnDrop(int, int)");
		}
		bool lret = self->OnDrop(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileDropTarget::OnDropFiles(int x, int y, const wxArrayString & filenames)
	static int _bind_OnDropFiles(lua_State *L) {
		if (!_lg_typecheck_OnDropFiles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFileDropTarget::OnDropFiles(int x, int y, const wxArrayString & filenames) function, expected prototype:\nbool wxFileDropTarget::OnDropFiles(int x, int y, const wxArrayString & filenames)\nClass arguments details:\narg 3 ID = 59507769\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		const wxArrayString* filenames_ptr=(Luna< wxArrayString >::check(L,4));
		if( !filenames_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg filenames in wxFileDropTarget::OnDropFiles function");
		}
		const wxArrayString & filenames=*filenames_ptr;

		wxFileDropTarget* self=dynamic_cast< wxFileDropTarget* >(Luna< wxDropTarget >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFileDropTarget::OnDropFiles(int, int, const wxArrayString &)");
		}
		bool lret = self->OnDropFiles(x, y, filenames);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxFileDropTarget* LunaTraits< wxFileDropTarget >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool wxFileDropTarget::OnDropFiles(int x, int y, const wxArrayString & filenames)
	// bool wxDropTarget::GetData()
}

void LunaTraits< wxFileDropTarget >::_bind_dtor(wxFileDropTarget* obj) {
	delete obj;
}

const char LunaTraits< wxFileDropTarget >::className[] = "wxFileDropTarget";
const char LunaTraits< wxFileDropTarget >::fullName[] = "wxFileDropTarget";
const char LunaTraits< wxFileDropTarget >::moduleName[] = "wx";
const char* LunaTraits< wxFileDropTarget >::parents[] = {"wx.wxDropTarget", 0};
const int LunaTraits< wxFileDropTarget >::hash = 20399763;
const int LunaTraits< wxFileDropTarget >::uniqueIDs[] = {93694316,0};

luna_RegType LunaTraits< wxFileDropTarget >::methods[] = {
	{"OnDrop", &luna_wrapper_wxFileDropTarget::_bind_OnDrop},
	{"OnDropFiles", &luna_wrapper_wxFileDropTarget::_bind_OnDropFiles},
	{"__eq", &luna_wrapper_wxFileDropTarget::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxFileDropTarget >::converters[] = {
	{"wxDropTarget", &luna_wrapper_wxFileDropTarget::_cast_from_wxDropTarget},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFileDropTarget >::enumValues[] = {
	{0,0}
};


