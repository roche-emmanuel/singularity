#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHtmlTagsModule.h>

class luna_wrapper_wxHtmlTagsModule {
public:
	typedef Luna< wxHtmlTagsModule > luna_t;

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
		//wxHtmlTagsModule* ptr= dynamic_cast< wxHtmlTagsModule* >(Luna< wxObject >::check(L,1));
		wxHtmlTagsModule* ptr= luna_caster< wxObject, wxHtmlTagsModule >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHtmlTagsModule >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_FillHandlersTable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,65918681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_FillHandlersTable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,65918681)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void wxHtmlTagsModule::FillHandlersTable(wxHtmlWinParser * parser)
	static int _bind_FillHandlersTable(lua_State *L) {
		if (!_lg_typecheck_FillHandlersTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlTagsModule::FillHandlersTable(wxHtmlWinParser * parser) function, expected prototype:\nvoid wxHtmlTagsModule::FillHandlersTable(wxHtmlWinParser * parser)\nClass arguments details:\narg 1 ID = 65918681\n");
		}

		wxHtmlWinParser* parser=(Luna< wxHtmlParser >::checkSubType< wxHtmlWinParser >(L,2));

		wxHtmlTagsModule* self=Luna< wxObject >::checkSubType< wxHtmlTagsModule >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlTagsModule::FillHandlersTable(wxHtmlWinParser *)");
		}
		self->FillHandlersTable(parser);

		return 0;
	}

	// wxClassInfo * wxHtmlTagsModule::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxHtmlTagsModule::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxHtmlTagsModule::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxHtmlTagsModule* self=Luna< wxObject >::checkSubType< wxHtmlTagsModule >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxHtmlTagsModule::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxHtmlTagsModule::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// void wxHtmlTagsModule::base_FillHandlersTable(wxHtmlWinParser * parser)
	static int _bind_base_FillHandlersTable(lua_State *L) {
		if (!_lg_typecheck_base_FillHandlersTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlTagsModule::base_FillHandlersTable(wxHtmlWinParser * parser) function, expected prototype:\nvoid wxHtmlTagsModule::base_FillHandlersTable(wxHtmlWinParser * parser)\nClass arguments details:\narg 1 ID = 65918681\n");
		}

		wxHtmlWinParser* parser=(Luna< wxHtmlParser >::checkSubType< wxHtmlWinParser >(L,2));

		wxHtmlTagsModule* self=Luna< wxObject >::checkSubType< wxHtmlTagsModule >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlTagsModule::base_FillHandlersTable(wxHtmlWinParser *)");
		}
		self->wxHtmlTagsModule::FillHandlersTable(parser);

		return 0;
	}


	// Operator binds:

};

wxHtmlTagsModule* LunaTraits< wxHtmlTagsModule >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxModule::OnExit()
	// bool wxModule::OnInit()
}

void LunaTraits< wxHtmlTagsModule >::_bind_dtor(wxHtmlTagsModule* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlTagsModule >::className[] = "wxHtmlTagsModule";
const char LunaTraits< wxHtmlTagsModule >::fullName[] = "wxHtmlTagsModule";
const char LunaTraits< wxHtmlTagsModule >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlTagsModule >::parents[] = {"wx.wxModule", 0};
const int LunaTraits< wxHtmlTagsModule >::hash = 28582740;
const int LunaTraits< wxHtmlTagsModule >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxHtmlTagsModule >::methods[] = {
	{"FillHandlersTable", &luna_wrapper_wxHtmlTagsModule::_bind_FillHandlersTable},
	{"base_GetClassInfo", &luna_wrapper_wxHtmlTagsModule::_bind_base_GetClassInfo},
	{"base_FillHandlersTable", &luna_wrapper_wxHtmlTagsModule::_bind_base_FillHandlersTable},
	{"__eq", &luna_wrapper_wxHtmlTagsModule::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlTagsModule >::converters[] = {
	{"wxObject", &luna_wrapper_wxHtmlTagsModule::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlTagsModule >::enumValues[] = {
	{0,0}
};


