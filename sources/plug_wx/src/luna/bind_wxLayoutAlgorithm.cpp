#include <plug_common.h>

class luna_wrapper_wxLayoutAlgorithm {
public:
	typedef Luna< wxLayoutAlgorithm > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxLayoutAlgorithm* ptr= dynamic_cast< wxLayoutAlgorithm* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxLayoutAlgorithm >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_LayoutFrame(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LayoutMDIFrame(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,20234418)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LayoutWindow(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxLayoutAlgorithm::wxLayoutAlgorithm()
	static wxLayoutAlgorithm* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLayoutAlgorithm::wxLayoutAlgorithm() function, expected prototype:\nwxLayoutAlgorithm::wxLayoutAlgorithm()\nClass arguments details:\n");
		}


		return new wxLayoutAlgorithm();
	}


	// Function binds:
	// bool wxLayoutAlgorithm::LayoutFrame(wxFrame * frame, wxWindow * mainWindow = NULL)
	static int _bind_LayoutFrame(lua_State *L) {
		if (!_lg_typecheck_LayoutFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxLayoutAlgorithm::LayoutFrame(wxFrame * frame, wxWindow * mainWindow = NULL) function, expected prototype:\nbool wxLayoutAlgorithm::LayoutFrame(wxFrame * frame, wxWindow * mainWindow = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxFrame* frame=dynamic_cast< wxFrame* >(Luna< wxObject >::check(L,2));
		wxWindow* mainWindow=luatop>2 ? dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3)) : (wxWindow*)NULL;

		wxLayoutAlgorithm* self=dynamic_cast< wxLayoutAlgorithm* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxLayoutAlgorithm::LayoutFrame(wxFrame *, wxWindow *)");
		}
		bool lret = self->LayoutFrame(frame, mainWindow);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxLayoutAlgorithm::LayoutMDIFrame(wxMDIParentFrame * frame, wxRect * rect = NULL)
	static int _bind_LayoutMDIFrame(lua_State *L) {
		if (!_lg_typecheck_LayoutMDIFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxLayoutAlgorithm::LayoutMDIFrame(wxMDIParentFrame * frame, wxRect * rect = NULL) function, expected prototype:\nbool wxLayoutAlgorithm::LayoutMDIFrame(wxMDIParentFrame * frame, wxRect * rect = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		wxMDIParentFrame* frame=dynamic_cast< wxMDIParentFrame* >(Luna< wxObject >::check(L,2));
		wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (wxRect*)NULL;

		wxLayoutAlgorithm* self=dynamic_cast< wxLayoutAlgorithm* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxLayoutAlgorithm::LayoutMDIFrame(wxMDIParentFrame *, wxRect *)");
		}
		bool lret = self->LayoutMDIFrame(frame, rect);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxLayoutAlgorithm::LayoutWindow(wxWindow * parent, wxWindow * mainWindow = NULL)
	static int _bind_LayoutWindow(lua_State *L) {
		if (!_lg_typecheck_LayoutWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxLayoutAlgorithm::LayoutWindow(wxWindow * parent, wxWindow * mainWindow = NULL) function, expected prototype:\nbool wxLayoutAlgorithm::LayoutWindow(wxWindow * parent, wxWindow * mainWindow = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxWindow* mainWindow=luatop>2 ? dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3)) : (wxWindow*)NULL;

		wxLayoutAlgorithm* self=dynamic_cast< wxLayoutAlgorithm* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxLayoutAlgorithm::LayoutWindow(wxWindow *, wxWindow *)");
		}
		bool lret = self->LayoutWindow(parent, mainWindow);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxLayoutAlgorithm* LunaTraits< wxLayoutAlgorithm >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxLayoutAlgorithm::_bind_ctor(L);
}

void LunaTraits< wxLayoutAlgorithm >::_bind_dtor(wxLayoutAlgorithm* obj) {
	delete obj;
}

const char LunaTraits< wxLayoutAlgorithm >::className[] = "wxLayoutAlgorithm";
const char LunaTraits< wxLayoutAlgorithm >::fullName[] = "wxLayoutAlgorithm";
const char LunaTraits< wxLayoutAlgorithm >::moduleName[] = "wx";
const char* LunaTraits< wxLayoutAlgorithm >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxLayoutAlgorithm >::hash = 94873594;
const int LunaTraits< wxLayoutAlgorithm >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxLayoutAlgorithm >::methods[] = {
	{"LayoutFrame", &luna_wrapper_wxLayoutAlgorithm::_bind_LayoutFrame},
	{"LayoutMDIFrame", &luna_wrapper_wxLayoutAlgorithm::_bind_LayoutMDIFrame},
	{"LayoutWindow", &luna_wrapper_wxLayoutAlgorithm::_bind_LayoutWindow},
	{0,0}
};

luna_ConverterType LunaTraits< wxLayoutAlgorithm >::converters[] = {
	{"wxObject", &luna_wrapper_wxLayoutAlgorithm::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxLayoutAlgorithm >::enumValues[] = {
	{0,0}
};


