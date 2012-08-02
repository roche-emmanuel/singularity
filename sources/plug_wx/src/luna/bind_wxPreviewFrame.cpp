#include <plug_common.h>

class luna_wrapper_wxPreviewFrame {
public:
	typedef Luna< wxPreviewFrame > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxPreviewFrame* ptr= dynamic_cast< wxPreviewFrame* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPreviewFrame >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_CreateCanvas(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CreateControlBar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Initialize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InitializeWithModality(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnCloseWindow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void wxPreviewFrame::CreateCanvas()
	static int _bind_CreateCanvas(lua_State *L) {
		if (!_lg_typecheck_CreateCanvas(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::CreateCanvas() function, expected prototype:\nvoid wxPreviewFrame::CreateCanvas()\nClass arguments details:\n");
		}


		wxPreviewFrame* self=dynamic_cast< wxPreviewFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::CreateCanvas()");
		}
		self->CreateCanvas();

		return 0;
	}

	// void wxPreviewFrame::CreateControlBar()
	static int _bind_CreateControlBar(lua_State *L) {
		if (!_lg_typecheck_CreateControlBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::CreateControlBar() function, expected prototype:\nvoid wxPreviewFrame::CreateControlBar()\nClass arguments details:\n");
		}


		wxPreviewFrame* self=dynamic_cast< wxPreviewFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::CreateControlBar()");
		}
		self->CreateControlBar();

		return 0;
	}

	// void wxPreviewFrame::Initialize()
	static int _bind_Initialize(lua_State *L) {
		if (!_lg_typecheck_Initialize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::Initialize() function, expected prototype:\nvoid wxPreviewFrame::Initialize()\nClass arguments details:\n");
		}


		wxPreviewFrame* self=dynamic_cast< wxPreviewFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::Initialize()");
		}
		self->Initialize();

		return 0;
	}

	// void wxPreviewFrame::InitializeWithModality(wxPreviewFrameModalityKind kind)
	static int _bind_InitializeWithModality(lua_State *L) {
		if (!_lg_typecheck_InitializeWithModality(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::InitializeWithModality(wxPreviewFrameModalityKind kind) function, expected prototype:\nvoid wxPreviewFrame::InitializeWithModality(wxPreviewFrameModalityKind kind)\nClass arguments details:\n");
		}

		wxPreviewFrameModalityKind kind=(wxPreviewFrameModalityKind)lua_tointeger(L,2);

		wxPreviewFrame* self=dynamic_cast< wxPreviewFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::InitializeWithModality(wxPreviewFrameModalityKind)");
		}
		self->InitializeWithModality(kind);

		return 0;
	}

	// void wxPreviewFrame::OnCloseWindow(wxCloseEvent & event)
	static int _bind_OnCloseWindow(lua_State *L) {
		if (!_lg_typecheck_OnCloseWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPreviewFrame::OnCloseWindow(wxCloseEvent & event) function, expected prototype:\nvoid wxPreviewFrame::OnCloseWindow(wxCloseEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxCloseEvent* event_ptr=dynamic_cast< wxCloseEvent* >(Luna< wxObject >::check(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxPreviewFrame::OnCloseWindow function");
		}
		wxCloseEvent & event=*event_ptr;

		wxPreviewFrame* self=dynamic_cast< wxPreviewFrame* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPreviewFrame::OnCloseWindow(wxCloseEvent &)");
		}
		self->OnCloseWindow(event);

		return 0;
	}


	// Operator binds:

};

wxPreviewFrame* LunaTraits< wxPreviewFrame >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxPreviewFrame >::_bind_dtor(wxPreviewFrame* obj) {
	delete obj;
}

const char LunaTraits< wxPreviewFrame >::className[] = "wxPreviewFrame";
const char LunaTraits< wxPreviewFrame >::fullName[] = "wxPreviewFrame";
const char LunaTraits< wxPreviewFrame >::moduleName[] = "wx";
const char* LunaTraits< wxPreviewFrame >::parents[] = {"wx.wxFrame", 0};
const int LunaTraits< wxPreviewFrame >::hash = 98029135;
const int LunaTraits< wxPreviewFrame >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxPreviewFrame >::methods[] = {
	{"CreateCanvas", &luna_wrapper_wxPreviewFrame::_bind_CreateCanvas},
	{"CreateControlBar", &luna_wrapper_wxPreviewFrame::_bind_CreateControlBar},
	{"Initialize", &luna_wrapper_wxPreviewFrame::_bind_Initialize},
	{"InitializeWithModality", &luna_wrapper_wxPreviewFrame::_bind_InitializeWithModality},
	{"OnCloseWindow", &luna_wrapper_wxPreviewFrame::_bind_OnCloseWindow},
	{0,0}
};

luna_ConverterType LunaTraits< wxPreviewFrame >::converters[] = {
	{"wxObject", &luna_wrapper_wxPreviewFrame::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPreviewFrame >::enumValues[] = {
	{0,0}
};


