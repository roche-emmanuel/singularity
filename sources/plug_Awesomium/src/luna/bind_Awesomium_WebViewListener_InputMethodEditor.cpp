#include <plug_common.h>

#include <luna/wrappers/wrapper_Awesomium_WebViewListener_InputMethodEditor.h>

class luna_wrapper_Awesomium_WebViewListener_InputMethodEditor {
public:
	typedef Luna< Awesomium::WebViewListener::InputMethodEditor > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		Awesomium::WebViewListener::InputMethodEditor* self=(Luna< Awesomium::WebViewListener::InputMethodEditor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<Awesomium::WebViewListener::InputMethodEditor,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,9490281) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::WebViewListener::InputMethodEditor*)");
		}

		Awesomium::WebViewListener::InputMethodEditor* rhs =(Luna< Awesomium::WebViewListener::InputMethodEditor >::check(L,2));
		Awesomium::WebViewListener::InputMethodEditor* self=(Luna< Awesomium::WebViewListener::InputMethodEditor >::check(L,1));
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

		Awesomium::WebViewListener::InputMethodEditor* self= (Awesomium::WebViewListener::InputMethodEditor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< Awesomium::WebViewListener::InputMethodEditor >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,9490281) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< Awesomium::WebViewListener::InputMethodEditor >::check(L,1));
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

		Awesomium::WebViewListener::InputMethodEditor* self=(Luna< Awesomium::WebViewListener::InputMethodEditor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebViewListener::InputMethodEditor");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebViewListener::InputMethodEditor",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_OnUpdateIME(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnCancelIME(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnChangeIMERange(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// Awesomium::WebViewListener::InputMethodEditor::InputMethodEditor(lua_Table * data)
	static Awesomium::WebViewListener::InputMethodEditor* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebViewListener::InputMethodEditor::InputMethodEditor(lua_Table * data) function, expected prototype:\nAwesomium::WebViewListener::InputMethodEditor::InputMethodEditor(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_Awesomium_WebViewListener_InputMethodEditor(L,NULL);
	}


	// Function binds:
	// void Awesomium::WebViewListener::InputMethodEditor::OnUpdateIME(Awesomium::WebView * caller, Awesomium::TextInputType type, int caret_x, int caret_y)
	static int _bind_OnUpdateIME(lua_State *L) {
		if (!_lg_typecheck_OnUpdateIME(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebViewListener::InputMethodEditor::OnUpdateIME(Awesomium::WebView * caller, Awesomium::TextInputType type, int caret_x, int caret_y) function, expected prototype:\nvoid Awesomium::WebViewListener::InputMethodEditor::OnUpdateIME(Awesomium::WebView * caller, Awesomium::TextInputType type, int caret_x, int caret_y)\nClass arguments details:\narg 1 ID = 613205\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		Awesomium::TextInputType type=(Awesomium::TextInputType)lua_tointeger(L,3);
		int caret_x=(int)lua_tointeger(L,4);
		int caret_y=(int)lua_tointeger(L,5);

		Awesomium::WebViewListener::InputMethodEditor* self=(Luna< Awesomium::WebViewListener::InputMethodEditor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebViewListener::InputMethodEditor::OnUpdateIME(Awesomium::WebView *, Awesomium::TextInputType, int, int). Got : '%s'",typeid(Luna< Awesomium::WebViewListener::InputMethodEditor >::check(L,1)).name());
		}
		self->OnUpdateIME(caller, type, caret_x, caret_y);

		return 0;
	}

	// void Awesomium::WebViewListener::InputMethodEditor::OnCancelIME(Awesomium::WebView * caller)
	static int _bind_OnCancelIME(lua_State *L) {
		if (!_lg_typecheck_OnCancelIME(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebViewListener::InputMethodEditor::OnCancelIME(Awesomium::WebView * caller) function, expected prototype:\nvoid Awesomium::WebViewListener::InputMethodEditor::OnCancelIME(Awesomium::WebView * caller)\nClass arguments details:\narg 1 ID = 613205\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));

		Awesomium::WebViewListener::InputMethodEditor* self=(Luna< Awesomium::WebViewListener::InputMethodEditor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebViewListener::InputMethodEditor::OnCancelIME(Awesomium::WebView *). Got : '%s'",typeid(Luna< Awesomium::WebViewListener::InputMethodEditor >::check(L,1)).name());
		}
		self->OnCancelIME(caller);

		return 0;
	}

	// void Awesomium::WebViewListener::InputMethodEditor::OnChangeIMERange(Awesomium::WebView * caller, unsigned int start, unsigned int end)
	static int _bind_OnChangeIMERange(lua_State *L) {
		if (!_lg_typecheck_OnChangeIMERange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebViewListener::InputMethodEditor::OnChangeIMERange(Awesomium::WebView * caller, unsigned int start, unsigned int end) function, expected prototype:\nvoid Awesomium::WebViewListener::InputMethodEditor::OnChangeIMERange(Awesomium::WebView * caller, unsigned int start, unsigned int end)\nClass arguments details:\narg 1 ID = 613205\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		unsigned int start=(unsigned int)lua_tointeger(L,3);
		unsigned int end=(unsigned int)lua_tointeger(L,4);

		Awesomium::WebViewListener::InputMethodEditor* self=(Luna< Awesomium::WebViewListener::InputMethodEditor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebViewListener::InputMethodEditor::OnChangeIMERange(Awesomium::WebView *, unsigned int, unsigned int). Got : '%s'",typeid(Luna< Awesomium::WebViewListener::InputMethodEditor >::check(L,1)).name());
		}
		self->OnChangeIMERange(caller, start, end);

		return 0;
	}


	// Operator binds:

};

Awesomium::WebViewListener::InputMethodEditor* LunaTraits< Awesomium::WebViewListener::InputMethodEditor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_WebViewListener_InputMethodEditor::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void Awesomium::WebViewListener::InputMethodEditor::OnUpdateIME(Awesomium::WebView * caller, Awesomium::TextInputType type, int caret_x, int caret_y)
	// void Awesomium::WebViewListener::InputMethodEditor::OnCancelIME(Awesomium::WebView * caller)
	// void Awesomium::WebViewListener::InputMethodEditor::OnChangeIMERange(Awesomium::WebView * caller, unsigned int start, unsigned int end)
}

void LunaTraits< Awesomium::WebViewListener::InputMethodEditor >::_bind_dtor(Awesomium::WebViewListener::InputMethodEditor* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< Awesomium::WebViewListener::InputMethodEditor >::className[] = "InputMethodEditor";
const char LunaTraits< Awesomium::WebViewListener::InputMethodEditor >::fullName[] = "Awesomium::WebViewListener::InputMethodEditor";
const char LunaTraits< Awesomium::WebViewListener::InputMethodEditor >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebViewListener::InputMethodEditor >::parents[] = {0};
const int LunaTraits< Awesomium::WebViewListener::InputMethodEditor >::hash = 9490281;
const int LunaTraits< Awesomium::WebViewListener::InputMethodEditor >::uniqueIDs[] = {9490281,0};

luna_RegType LunaTraits< Awesomium::WebViewListener::InputMethodEditor >::methods[] = {
	{"OnUpdateIME", &luna_wrapper_Awesomium_WebViewListener_InputMethodEditor::_bind_OnUpdateIME},
	{"OnCancelIME", &luna_wrapper_Awesomium_WebViewListener_InputMethodEditor::_bind_OnCancelIME},
	{"OnChangeIMERange", &luna_wrapper_Awesomium_WebViewListener_InputMethodEditor::_bind_OnChangeIMERange},
	{"dynCast", &luna_wrapper_Awesomium_WebViewListener_InputMethodEditor::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_WebViewListener_InputMethodEditor::_bind___eq},
	{"fromVoid", &luna_wrapper_Awesomium_WebViewListener_InputMethodEditor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_Awesomium_WebViewListener_InputMethodEditor::_bind_asVoid},
	{"getTable", &luna_wrapper_Awesomium_WebViewListener_InputMethodEditor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebViewListener::InputMethodEditor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebViewListener::InputMethodEditor >::enumValues[] = {
	{0,0}
};


