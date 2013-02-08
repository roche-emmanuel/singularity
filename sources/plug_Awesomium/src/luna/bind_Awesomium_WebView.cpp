#include <plug_common.h>

#include <luna/wrappers/wrapper_Awesomium_WebView.h>

class luna_wrapper_Awesomium_WebView {
public:
	typedef Luna< Awesomium::WebView > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<Awesomium::WebView,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,613205) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::WebView*)");
		}

		Awesomium::WebView* rhs =(Luna< Awesomium::WebView >::check(L,2));
		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
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

		Awesomium::WebView* self= (Awesomium::WebView*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< Awesomium::WebView >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,613205) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< Awesomium::WebView >::check(L,1));
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

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebView");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebView",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Destroy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_type(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_process_id(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_view_listener(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,9977401)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_load_listener(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,9685114)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_process_listener(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,78037157)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_menu_listener(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,9705715)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_dialog_listener(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,72828454)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_print_listener(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,4030006)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_download_listener(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44749586)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_input_method_editor_listener(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,9490281)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_view_listener(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_load_listener(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_process_listener(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_menu_listener(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_dialog_listener(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_print_listener(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_download_listener(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_input_method_editor_listener(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LoadURL(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3243885) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GoBack(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GoForward(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GoToHistoryOffset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Stop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Reload(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CanGoBack(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CanGoForward(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_surface(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_url(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_title(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_session(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsLoading(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsCrashed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Resize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTransparent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsTransparent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PauseRendering(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ResumeRendering(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Focus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Unfocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_focused_element_type(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InjectMouseMove(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InjectMouseDown(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InjectMouseUp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InjectMouseWheel(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InjectKeyboardEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,95002106) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InjectTouchEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,93381335) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ActivateIME(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetIMEComposition(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isstring(L,2)==0) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ConfirmIMEComposition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isstring(L,2)==0) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CancelIMEComposition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Undo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Redo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Cut(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Copy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CopyImageAt(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Paste(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PasteAndMatchStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SelectAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PrintToFile(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isstring(L,2)==0) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,23715294) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_last_error(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CreateGlobalJavascriptObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isstring(L,2)==0) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ExecuteJavascript(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isstring(L,2)==0) ) return false;
		if( (lua_isstring(L,3)==0) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ExecuteJavascriptWithResult(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isstring(L,2)==0) ) return false;
		if( (lua_isstring(L,3)==0) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_js_method_handler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91373609)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_js_method_handler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DidSelectPopupMenuItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DidCancelPopupMenu(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DidChooseFiles(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,16354805) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DidLogin(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isstring(L,3)==0) ) return false;
		if( (lua_isstring(L,4)==0) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DidCancelLogin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DidChooseDownloadPath(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isstring(L,3)==0) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DidCancelDownload(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// Awesomium::WebView::WebView(lua_Table * data)
	static Awesomium::WebView* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebView::WebView(lua_Table * data) function, expected prototype:\nAwesomium::WebView::WebView(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_Awesomium_WebView(L,NULL);
	}


	// Function binds:
	// void Awesomium::WebView::Destroy()
	static int _bind_Destroy(lua_State *L) {
		if (!_lg_typecheck_Destroy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::Destroy() function, expected prototype:\nvoid Awesomium::WebView::Destroy()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::Destroy(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->Destroy();

		return 0;
	}

	// Awesomium::WebViewType Awesomium::WebView::type()
	static int _bind_type(lua_State *L) {
		if (!_lg_typecheck_type(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebViewType Awesomium::WebView::type() function, expected prototype:\nAwesomium::WebViewType Awesomium::WebView::type()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebViewType Awesomium::WebView::type(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		Awesomium::WebViewType lret = self->type();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int Awesomium::WebView::process_id()
	static int _bind_process_id(lua_State *L) {
		if (!_lg_typecheck_process_id(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int Awesomium::WebView::process_id() function, expected prototype:\nint Awesomium::WebView::process_id()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int Awesomium::WebView::process_id(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		int lret = self->process_id();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void Awesomium::WebView::set_view_listener(Awesomium::WebViewListener::View * listener)
	static int _bind_set_view_listener(lua_State *L) {
		if (!_lg_typecheck_set_view_listener(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::set_view_listener(Awesomium::WebViewListener::View * listener) function, expected prototype:\nvoid Awesomium::WebView::set_view_listener(Awesomium::WebViewListener::View * listener)\nClass arguments details:\narg 1 ID = 9977401\n");
		}

		Awesomium::WebViewListener::View* listener=(Luna< Awesomium::WebViewListener::View >::check(L,2));

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::set_view_listener(Awesomium::WebViewListener::View *). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->set_view_listener(listener);

		return 0;
	}

	// void Awesomium::WebView::set_load_listener(Awesomium::WebViewListener::Load * listener)
	static int _bind_set_load_listener(lua_State *L) {
		if (!_lg_typecheck_set_load_listener(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::set_load_listener(Awesomium::WebViewListener::Load * listener) function, expected prototype:\nvoid Awesomium::WebView::set_load_listener(Awesomium::WebViewListener::Load * listener)\nClass arguments details:\narg 1 ID = 9685114\n");
		}

		Awesomium::WebViewListener::Load* listener=(Luna< Awesomium::WebViewListener::Load >::check(L,2));

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::set_load_listener(Awesomium::WebViewListener::Load *). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->set_load_listener(listener);

		return 0;
	}

	// void Awesomium::WebView::set_process_listener(Awesomium::WebViewListener::Process * listener)
	static int _bind_set_process_listener(lua_State *L) {
		if (!_lg_typecheck_set_process_listener(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::set_process_listener(Awesomium::WebViewListener::Process * listener) function, expected prototype:\nvoid Awesomium::WebView::set_process_listener(Awesomium::WebViewListener::Process * listener)\nClass arguments details:\narg 1 ID = 78037157\n");
		}

		Awesomium::WebViewListener::Process* listener=(Luna< Awesomium::WebViewListener::Process >::check(L,2));

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::set_process_listener(Awesomium::WebViewListener::Process *). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->set_process_listener(listener);

		return 0;
	}

	// void Awesomium::WebView::set_menu_listener(Awesomium::WebViewListener::Menu * listener)
	static int _bind_set_menu_listener(lua_State *L) {
		if (!_lg_typecheck_set_menu_listener(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::set_menu_listener(Awesomium::WebViewListener::Menu * listener) function, expected prototype:\nvoid Awesomium::WebView::set_menu_listener(Awesomium::WebViewListener::Menu * listener)\nClass arguments details:\narg 1 ID = 9705715\n");
		}

		Awesomium::WebViewListener::Menu* listener=(Luna< Awesomium::WebViewListener::Menu >::check(L,2));

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::set_menu_listener(Awesomium::WebViewListener::Menu *). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->set_menu_listener(listener);

		return 0;
	}

	// void Awesomium::WebView::set_dialog_listener(Awesomium::WebViewListener::Dialog * listener)
	static int _bind_set_dialog_listener(lua_State *L) {
		if (!_lg_typecheck_set_dialog_listener(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::set_dialog_listener(Awesomium::WebViewListener::Dialog * listener) function, expected prototype:\nvoid Awesomium::WebView::set_dialog_listener(Awesomium::WebViewListener::Dialog * listener)\nClass arguments details:\narg 1 ID = 72828454\n");
		}

		Awesomium::WebViewListener::Dialog* listener=(Luna< Awesomium::WebViewListener::Dialog >::check(L,2));

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::set_dialog_listener(Awesomium::WebViewListener::Dialog *). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->set_dialog_listener(listener);

		return 0;
	}

	// void Awesomium::WebView::set_print_listener(Awesomium::WebViewListener::Print * listener)
	static int _bind_set_print_listener(lua_State *L) {
		if (!_lg_typecheck_set_print_listener(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::set_print_listener(Awesomium::WebViewListener::Print * listener) function, expected prototype:\nvoid Awesomium::WebView::set_print_listener(Awesomium::WebViewListener::Print * listener)\nClass arguments details:\narg 1 ID = 4030006\n");
		}

		Awesomium::WebViewListener::Print* listener=(Luna< Awesomium::WebViewListener::Print >::check(L,2));

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::set_print_listener(Awesomium::WebViewListener::Print *). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->set_print_listener(listener);

		return 0;
	}

	// void Awesomium::WebView::set_download_listener(Awesomium::WebViewListener::Download * listener)
	static int _bind_set_download_listener(lua_State *L) {
		if (!_lg_typecheck_set_download_listener(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::set_download_listener(Awesomium::WebViewListener::Download * listener) function, expected prototype:\nvoid Awesomium::WebView::set_download_listener(Awesomium::WebViewListener::Download * listener)\nClass arguments details:\narg 1 ID = 44749586\n");
		}

		Awesomium::WebViewListener::Download* listener=(Luna< Awesomium::WebViewListener::Download >::check(L,2));

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::set_download_listener(Awesomium::WebViewListener::Download *). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->set_download_listener(listener);

		return 0;
	}

	// void Awesomium::WebView::set_input_method_editor_listener(Awesomium::WebViewListener::InputMethodEditor * listener)
	static int _bind_set_input_method_editor_listener(lua_State *L) {
		if (!_lg_typecheck_set_input_method_editor_listener(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::set_input_method_editor_listener(Awesomium::WebViewListener::InputMethodEditor * listener) function, expected prototype:\nvoid Awesomium::WebView::set_input_method_editor_listener(Awesomium::WebViewListener::InputMethodEditor * listener)\nClass arguments details:\narg 1 ID = 9490281\n");
		}

		Awesomium::WebViewListener::InputMethodEditor* listener=(Luna< Awesomium::WebViewListener::InputMethodEditor >::check(L,2));

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::set_input_method_editor_listener(Awesomium::WebViewListener::InputMethodEditor *). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->set_input_method_editor_listener(listener);

		return 0;
	}

	// Awesomium::WebViewListener::View * Awesomium::WebView::view_listener()
	static int _bind_view_listener(lua_State *L) {
		if (!_lg_typecheck_view_listener(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebViewListener::View * Awesomium::WebView::view_listener() function, expected prototype:\nAwesomium::WebViewListener::View * Awesomium::WebView::view_listener()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebViewListener::View * Awesomium::WebView::view_listener(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		Awesomium::WebViewListener::View * lret = self->view_listener();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebViewListener::View >::push(L,lret,false);

		return 1;
	}

	// Awesomium::WebViewListener::Load * Awesomium::WebView::load_listener()
	static int _bind_load_listener(lua_State *L) {
		if (!_lg_typecheck_load_listener(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebViewListener::Load * Awesomium::WebView::load_listener() function, expected prototype:\nAwesomium::WebViewListener::Load * Awesomium::WebView::load_listener()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebViewListener::Load * Awesomium::WebView::load_listener(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		Awesomium::WebViewListener::Load * lret = self->load_listener();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebViewListener::Load >::push(L,lret,false);

		return 1;
	}

	// Awesomium::WebViewListener::Process * Awesomium::WebView::process_listener()
	static int _bind_process_listener(lua_State *L) {
		if (!_lg_typecheck_process_listener(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebViewListener::Process * Awesomium::WebView::process_listener() function, expected prototype:\nAwesomium::WebViewListener::Process * Awesomium::WebView::process_listener()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebViewListener::Process * Awesomium::WebView::process_listener(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		Awesomium::WebViewListener::Process * lret = self->process_listener();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebViewListener::Process >::push(L,lret,false);

		return 1;
	}

	// Awesomium::WebViewListener::Menu * Awesomium::WebView::menu_listener()
	static int _bind_menu_listener(lua_State *L) {
		if (!_lg_typecheck_menu_listener(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebViewListener::Menu * Awesomium::WebView::menu_listener() function, expected prototype:\nAwesomium::WebViewListener::Menu * Awesomium::WebView::menu_listener()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebViewListener::Menu * Awesomium::WebView::menu_listener(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		Awesomium::WebViewListener::Menu * lret = self->menu_listener();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebViewListener::Menu >::push(L,lret,false);

		return 1;
	}

	// Awesomium::WebViewListener::Dialog * Awesomium::WebView::dialog_listener()
	static int _bind_dialog_listener(lua_State *L) {
		if (!_lg_typecheck_dialog_listener(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebViewListener::Dialog * Awesomium::WebView::dialog_listener() function, expected prototype:\nAwesomium::WebViewListener::Dialog * Awesomium::WebView::dialog_listener()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebViewListener::Dialog * Awesomium::WebView::dialog_listener(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		Awesomium::WebViewListener::Dialog * lret = self->dialog_listener();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebViewListener::Dialog >::push(L,lret,false);

		return 1;
	}

	// Awesomium::WebViewListener::Print * Awesomium::WebView::print_listener()
	static int _bind_print_listener(lua_State *L) {
		if (!_lg_typecheck_print_listener(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebViewListener::Print * Awesomium::WebView::print_listener() function, expected prototype:\nAwesomium::WebViewListener::Print * Awesomium::WebView::print_listener()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebViewListener::Print * Awesomium::WebView::print_listener(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		Awesomium::WebViewListener::Print * lret = self->print_listener();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebViewListener::Print >::push(L,lret,false);

		return 1;
	}

	// Awesomium::WebViewListener::Download * Awesomium::WebView::download_listener()
	static int _bind_download_listener(lua_State *L) {
		if (!_lg_typecheck_download_listener(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebViewListener::Download * Awesomium::WebView::download_listener() function, expected prototype:\nAwesomium::WebViewListener::Download * Awesomium::WebView::download_listener()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebViewListener::Download * Awesomium::WebView::download_listener(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		Awesomium::WebViewListener::Download * lret = self->download_listener();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebViewListener::Download >::push(L,lret,false);

		return 1;
	}

	// Awesomium::WebViewListener::InputMethodEditor * Awesomium::WebView::input_method_editor_listener()
	static int _bind_input_method_editor_listener(lua_State *L) {
		if (!_lg_typecheck_input_method_editor_listener(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebViewListener::InputMethodEditor * Awesomium::WebView::input_method_editor_listener() function, expected prototype:\nAwesomium::WebViewListener::InputMethodEditor * Awesomium::WebView::input_method_editor_listener()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebViewListener::InputMethodEditor * Awesomium::WebView::input_method_editor_listener(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		Awesomium::WebViewListener::InputMethodEditor * lret = self->input_method_editor_listener();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebViewListener::InputMethodEditor >::push(L,lret,false);

		return 1;
	}

	// void Awesomium::WebView::LoadURL(const Awesomium::WebURL & url)
	static int _bind_LoadURL(lua_State *L) {
		if (!_lg_typecheck_LoadURL(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::LoadURL(const Awesomium::WebURL & url) function, expected prototype:\nvoid Awesomium::WebView::LoadURL(const Awesomium::WebURL & url)\nClass arguments details:\narg 1 ID = 3243885\n");
		}

		const Awesomium::WebURL* url_ptr=(Luna< Awesomium::WebURL >::check(L,2));
		if( !url_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg url in Awesomium::WebView::LoadURL function");
		}
		const Awesomium::WebURL & url=*url_ptr;

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::LoadURL(const Awesomium::WebURL &). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->LoadURL(url);

		return 0;
	}

	// void Awesomium::WebView::GoBack()
	static int _bind_GoBack(lua_State *L) {
		if (!_lg_typecheck_GoBack(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::GoBack() function, expected prototype:\nvoid Awesomium::WebView::GoBack()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::GoBack(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->GoBack();

		return 0;
	}

	// void Awesomium::WebView::GoForward()
	static int _bind_GoForward(lua_State *L) {
		if (!_lg_typecheck_GoForward(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::GoForward() function, expected prototype:\nvoid Awesomium::WebView::GoForward()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::GoForward(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->GoForward();

		return 0;
	}

	// void Awesomium::WebView::GoToHistoryOffset(int offset)
	static int _bind_GoToHistoryOffset(lua_State *L) {
		if (!_lg_typecheck_GoToHistoryOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::GoToHistoryOffset(int offset) function, expected prototype:\nvoid Awesomium::WebView::GoToHistoryOffset(int offset)\nClass arguments details:\n");
		}

		int offset=(int)lua_tointeger(L,2);

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::GoToHistoryOffset(int). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->GoToHistoryOffset(offset);

		return 0;
	}

	// void Awesomium::WebView::Stop()
	static int _bind_Stop(lua_State *L) {
		if (!_lg_typecheck_Stop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::Stop() function, expected prototype:\nvoid Awesomium::WebView::Stop()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::Stop(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->Stop();

		return 0;
	}

	// void Awesomium::WebView::Reload(bool ignore_cache)
	static int _bind_Reload(lua_State *L) {
		if (!_lg_typecheck_Reload(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::Reload(bool ignore_cache) function, expected prototype:\nvoid Awesomium::WebView::Reload(bool ignore_cache)\nClass arguments details:\n");
		}

		bool ignore_cache=(bool)(lua_toboolean(L,2)==1);

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::Reload(bool). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->Reload(ignore_cache);

		return 0;
	}

	// bool Awesomium::WebView::CanGoBack()
	static int _bind_CanGoBack(lua_State *L) {
		if (!_lg_typecheck_CanGoBack(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebView::CanGoBack() function, expected prototype:\nbool Awesomium::WebView::CanGoBack()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebView::CanGoBack(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		bool lret = self->CanGoBack();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::WebView::CanGoForward()
	static int _bind_CanGoForward(lua_State *L) {
		if (!_lg_typecheck_CanGoForward(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebView::CanGoForward() function, expected prototype:\nbool Awesomium::WebView::CanGoForward()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebView::CanGoForward(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		bool lret = self->CanGoForward();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Awesomium::Surface * Awesomium::WebView::surface()
	static int _bind_surface(lua_State *L) {
		if (!_lg_typecheck_surface(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::Surface * Awesomium::WebView::surface() function, expected prototype:\nAwesomium::Surface * Awesomium::WebView::surface()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::Surface * Awesomium::WebView::surface(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		Awesomium::Surface * lret = self->surface();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::Surface >::push(L,lret,false);

		return 1;
	}

	// Awesomium::WebURL Awesomium::WebView::url()
	static int _bind_url(lua_State *L) {
		if (!_lg_typecheck_url(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebURL Awesomium::WebView::url() function, expected prototype:\nAwesomium::WebURL Awesomium::WebView::url()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebURL Awesomium::WebView::url(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		Awesomium::WebURL stack_lret = self->url();
		Awesomium::WebURL* lret = new Awesomium::WebURL(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebURL >::push(L,lret,true);

		return 1;
	}

	// Awesomium::WebString Awesomium::WebView::title()
	static int _bind_title(lua_State *L) {
		if (!_lg_typecheck_title(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebView::title() function, expected prototype:\nAwesomium::WebString Awesomium::WebView::title()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebView::title(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		Awesomium::WebString lret = self->title();
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// Awesomium::WebSession * Awesomium::WebView::session()
	static int _bind_session(lua_State *L) {
		if (!_lg_typecheck_session(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebSession * Awesomium::WebView::session() function, expected prototype:\nAwesomium::WebSession * Awesomium::WebView::session()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebSession * Awesomium::WebView::session(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		Awesomium::WebSession * lret = self->session();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebSession >::push(L,lret,false);

		return 1;
	}

	// bool Awesomium::WebView::IsLoading()
	static int _bind_IsLoading(lua_State *L) {
		if (!_lg_typecheck_IsLoading(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebView::IsLoading() function, expected prototype:\nbool Awesomium::WebView::IsLoading()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebView::IsLoading(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		bool lret = self->IsLoading();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::WebView::IsCrashed()
	static int _bind_IsCrashed(lua_State *L) {
		if (!_lg_typecheck_IsCrashed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebView::IsCrashed() function, expected prototype:\nbool Awesomium::WebView::IsCrashed()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebView::IsCrashed(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		bool lret = self->IsCrashed();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void Awesomium::WebView::Resize(int width, int height)
	static int _bind_Resize(lua_State *L) {
		if (!_lg_typecheck_Resize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::Resize(int width, int height) function, expected prototype:\nvoid Awesomium::WebView::Resize(int width, int height)\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::Resize(int, int). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->Resize(width, height);

		return 0;
	}

	// void Awesomium::WebView::SetTransparent(bool is_transparent)
	static int _bind_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_SetTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::SetTransparent(bool is_transparent) function, expected prototype:\nvoid Awesomium::WebView::SetTransparent(bool is_transparent)\nClass arguments details:\n");
		}

		bool is_transparent=(bool)(lua_toboolean(L,2)==1);

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::SetTransparent(bool). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->SetTransparent(is_transparent);

		return 0;
	}

	// bool Awesomium::WebView::IsTransparent()
	static int _bind_IsTransparent(lua_State *L) {
		if (!_lg_typecheck_IsTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebView::IsTransparent() function, expected prototype:\nbool Awesomium::WebView::IsTransparent()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebView::IsTransparent(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		bool lret = self->IsTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void Awesomium::WebView::PauseRendering()
	static int _bind_PauseRendering(lua_State *L) {
		if (!_lg_typecheck_PauseRendering(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::PauseRendering() function, expected prototype:\nvoid Awesomium::WebView::PauseRendering()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::PauseRendering(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->PauseRendering();

		return 0;
	}

	// void Awesomium::WebView::ResumeRendering()
	static int _bind_ResumeRendering(lua_State *L) {
		if (!_lg_typecheck_ResumeRendering(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::ResumeRendering() function, expected prototype:\nvoid Awesomium::WebView::ResumeRendering()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::ResumeRendering(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->ResumeRendering();

		return 0;
	}

	// void Awesomium::WebView::Focus()
	static int _bind_Focus(lua_State *L) {
		if (!_lg_typecheck_Focus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::Focus() function, expected prototype:\nvoid Awesomium::WebView::Focus()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::Focus(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->Focus();

		return 0;
	}

	// void Awesomium::WebView::Unfocus()
	static int _bind_Unfocus(lua_State *L) {
		if (!_lg_typecheck_Unfocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::Unfocus() function, expected prototype:\nvoid Awesomium::WebView::Unfocus()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::Unfocus(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->Unfocus();

		return 0;
	}

	// Awesomium::FocusedElementType Awesomium::WebView::focused_element_type()
	static int _bind_focused_element_type(lua_State *L) {
		if (!_lg_typecheck_focused_element_type(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::FocusedElementType Awesomium::WebView::focused_element_type() function, expected prototype:\nAwesomium::FocusedElementType Awesomium::WebView::focused_element_type()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::FocusedElementType Awesomium::WebView::focused_element_type(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		Awesomium::FocusedElementType lret = self->focused_element_type();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void Awesomium::WebView::InjectMouseMove(int x, int y)
	static int _bind_InjectMouseMove(lua_State *L) {
		if (!_lg_typecheck_InjectMouseMove(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::InjectMouseMove(int x, int y) function, expected prototype:\nvoid Awesomium::WebView::InjectMouseMove(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::InjectMouseMove(int, int). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->InjectMouseMove(x, y);

		return 0;
	}

	// void Awesomium::WebView::InjectMouseDown(Awesomium::MouseButton button)
	static int _bind_InjectMouseDown(lua_State *L) {
		if (!_lg_typecheck_InjectMouseDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::InjectMouseDown(Awesomium::MouseButton button) function, expected prototype:\nvoid Awesomium::WebView::InjectMouseDown(Awesomium::MouseButton button)\nClass arguments details:\n");
		}

		Awesomium::MouseButton button=(Awesomium::MouseButton)lua_tointeger(L,2);

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::InjectMouseDown(Awesomium::MouseButton). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->InjectMouseDown(button);

		return 0;
	}

	// void Awesomium::WebView::InjectMouseUp(Awesomium::MouseButton button)
	static int _bind_InjectMouseUp(lua_State *L) {
		if (!_lg_typecheck_InjectMouseUp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::InjectMouseUp(Awesomium::MouseButton button) function, expected prototype:\nvoid Awesomium::WebView::InjectMouseUp(Awesomium::MouseButton button)\nClass arguments details:\n");
		}

		Awesomium::MouseButton button=(Awesomium::MouseButton)lua_tointeger(L,2);

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::InjectMouseUp(Awesomium::MouseButton). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->InjectMouseUp(button);

		return 0;
	}

	// void Awesomium::WebView::InjectMouseWheel(int scroll_vert, int scroll_horz)
	static int _bind_InjectMouseWheel(lua_State *L) {
		if (!_lg_typecheck_InjectMouseWheel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::InjectMouseWheel(int scroll_vert, int scroll_horz) function, expected prototype:\nvoid Awesomium::WebView::InjectMouseWheel(int scroll_vert, int scroll_horz)\nClass arguments details:\n");
		}

		int scroll_vert=(int)lua_tointeger(L,2);
		int scroll_horz=(int)lua_tointeger(L,3);

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::InjectMouseWheel(int, int). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->InjectMouseWheel(scroll_vert, scroll_horz);

		return 0;
	}

	// void Awesomium::WebView::InjectKeyboardEvent(const Awesomium::WebKeyboardEvent & key_event)
	static int _bind_InjectKeyboardEvent(lua_State *L) {
		if (!_lg_typecheck_InjectKeyboardEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::InjectKeyboardEvent(const Awesomium::WebKeyboardEvent & key_event) function, expected prototype:\nvoid Awesomium::WebView::InjectKeyboardEvent(const Awesomium::WebKeyboardEvent & key_event)\nClass arguments details:\narg 1 ID = 95002106\n");
		}

		const Awesomium::WebKeyboardEvent* key_event_ptr=(Luna< Awesomium::WebKeyboardEvent >::check(L,2));
		if( !key_event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg key_event in Awesomium::WebView::InjectKeyboardEvent function");
		}
		const Awesomium::WebKeyboardEvent & key_event=*key_event_ptr;

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::InjectKeyboardEvent(const Awesomium::WebKeyboardEvent &). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->InjectKeyboardEvent(key_event);

		return 0;
	}

	// void Awesomium::WebView::InjectTouchEvent(const Awesomium::WebTouchEvent & touch_event)
	static int _bind_InjectTouchEvent(lua_State *L) {
		if (!_lg_typecheck_InjectTouchEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::InjectTouchEvent(const Awesomium::WebTouchEvent & touch_event) function, expected prototype:\nvoid Awesomium::WebView::InjectTouchEvent(const Awesomium::WebTouchEvent & touch_event)\nClass arguments details:\narg 1 ID = 93381335\n");
		}

		const Awesomium::WebTouchEvent* touch_event_ptr=(Luna< Awesomium::WebTouchEvent >::check(L,2));
		if( !touch_event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg touch_event in Awesomium::WebView::InjectTouchEvent function");
		}
		const Awesomium::WebTouchEvent & touch_event=*touch_event_ptr;

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::InjectTouchEvent(const Awesomium::WebTouchEvent &). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->InjectTouchEvent(touch_event);

		return 0;
	}

	// void Awesomium::WebView::ActivateIME(bool activate)
	static int _bind_ActivateIME(lua_State *L) {
		if (!_lg_typecheck_ActivateIME(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::ActivateIME(bool activate) function, expected prototype:\nvoid Awesomium::WebView::ActivateIME(bool activate)\nClass arguments details:\n");
		}

		bool activate=(bool)(lua_toboolean(L,2)==1);

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::ActivateIME(bool). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->ActivateIME(activate);

		return 0;
	}

	// void Awesomium::WebView::SetIMEComposition(const Awesomium::WebString & input_string, int cursor_pos, int target_start, int target_end)
	static int _bind_SetIMEComposition(lua_State *L) {
		if (!_lg_typecheck_SetIMEComposition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::SetIMEComposition(const Awesomium::WebString & input_string, int cursor_pos, int target_start, int target_end) function, expected prototype:\nvoid Awesomium::WebView::SetIMEComposition(const Awesomium::WebString & input_string, int cursor_pos, int target_start, int target_end)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string input_string_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString input_string = Awesomium::ToWebString(input_string_str);
		int cursor_pos=(int)lua_tointeger(L,3);
		int target_start=(int)lua_tointeger(L,4);
		int target_end=(int)lua_tointeger(L,5);

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::SetIMEComposition(const Awesomium::WebString &, int, int, int). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->SetIMEComposition(input_string, cursor_pos, target_start, target_end);

		return 0;
	}

	// void Awesomium::WebView::ConfirmIMEComposition(const Awesomium::WebString & input_string)
	static int _bind_ConfirmIMEComposition(lua_State *L) {
		if (!_lg_typecheck_ConfirmIMEComposition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::ConfirmIMEComposition(const Awesomium::WebString & input_string) function, expected prototype:\nvoid Awesomium::WebView::ConfirmIMEComposition(const Awesomium::WebString & input_string)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string input_string_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString input_string = Awesomium::ToWebString(input_string_str);

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::ConfirmIMEComposition(const Awesomium::WebString &). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->ConfirmIMEComposition(input_string);

		return 0;
	}

	// void Awesomium::WebView::CancelIMEComposition()
	static int _bind_CancelIMEComposition(lua_State *L) {
		if (!_lg_typecheck_CancelIMEComposition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::CancelIMEComposition() function, expected prototype:\nvoid Awesomium::WebView::CancelIMEComposition()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::CancelIMEComposition(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->CancelIMEComposition();

		return 0;
	}

	// void Awesomium::WebView::Undo()
	static int _bind_Undo(lua_State *L) {
		if (!_lg_typecheck_Undo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::Undo() function, expected prototype:\nvoid Awesomium::WebView::Undo()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::Undo(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->Undo();

		return 0;
	}

	// void Awesomium::WebView::Redo()
	static int _bind_Redo(lua_State *L) {
		if (!_lg_typecheck_Redo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::Redo() function, expected prototype:\nvoid Awesomium::WebView::Redo()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::Redo(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->Redo();

		return 0;
	}

	// void Awesomium::WebView::Cut()
	static int _bind_Cut(lua_State *L) {
		if (!_lg_typecheck_Cut(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::Cut() function, expected prototype:\nvoid Awesomium::WebView::Cut()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::Cut(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->Cut();

		return 0;
	}

	// void Awesomium::WebView::Copy()
	static int _bind_Copy(lua_State *L) {
		if (!_lg_typecheck_Copy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::Copy() function, expected prototype:\nvoid Awesomium::WebView::Copy()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::Copy(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->Copy();

		return 0;
	}

	// void Awesomium::WebView::CopyImageAt(int x, int y)
	static int _bind_CopyImageAt(lua_State *L) {
		if (!_lg_typecheck_CopyImageAt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::CopyImageAt(int x, int y) function, expected prototype:\nvoid Awesomium::WebView::CopyImageAt(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::CopyImageAt(int, int). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->CopyImageAt(x, y);

		return 0;
	}

	// void Awesomium::WebView::Paste()
	static int _bind_Paste(lua_State *L) {
		if (!_lg_typecheck_Paste(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::Paste() function, expected prototype:\nvoid Awesomium::WebView::Paste()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::Paste(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->Paste();

		return 0;
	}

	// void Awesomium::WebView::PasteAndMatchStyle()
	static int _bind_PasteAndMatchStyle(lua_State *L) {
		if (!_lg_typecheck_PasteAndMatchStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::PasteAndMatchStyle() function, expected prototype:\nvoid Awesomium::WebView::PasteAndMatchStyle()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::PasteAndMatchStyle(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->PasteAndMatchStyle();

		return 0;
	}

	// void Awesomium::WebView::SelectAll()
	static int _bind_SelectAll(lua_State *L) {
		if (!_lg_typecheck_SelectAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::SelectAll() function, expected prototype:\nvoid Awesomium::WebView::SelectAll()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::SelectAll(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->SelectAll();

		return 0;
	}

	// int Awesomium::WebView::PrintToFile(const Awesomium::WebString & output_directory, const Awesomium::PrintConfig & config)
	static int _bind_PrintToFile(lua_State *L) {
		if (!_lg_typecheck_PrintToFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int Awesomium::WebView::PrintToFile(const Awesomium::WebString & output_directory, const Awesomium::PrintConfig & config) function, expected prototype:\nint Awesomium::WebView::PrintToFile(const Awesomium::WebString & output_directory, const Awesomium::PrintConfig & config)\nClass arguments details:\narg 1 ID = 13938525\narg 2 ID = 23715294\n");
		}

		std::string output_directory_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString output_directory = Awesomium::ToWebString(output_directory_str);
		const Awesomium::PrintConfig* config_ptr=(Luna< Awesomium::PrintConfig >::check(L,3));
		if( !config_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg config in Awesomium::WebView::PrintToFile function");
		}
		const Awesomium::PrintConfig & config=*config_ptr;

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int Awesomium::WebView::PrintToFile(const Awesomium::WebString &, const Awesomium::PrintConfig &). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		int lret = self->PrintToFile(output_directory, config);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Awesomium::Error Awesomium::WebView::last_error() const
	static int _bind_last_error(lua_State *L) {
		if (!_lg_typecheck_last_error(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::Error Awesomium::WebView::last_error() const function, expected prototype:\nAwesomium::Error Awesomium::WebView::last_error() const\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::Error Awesomium::WebView::last_error() const. Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		Awesomium::Error lret = self->last_error();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Awesomium::JSValue Awesomium::WebView::CreateGlobalJavascriptObject(const Awesomium::WebString & name)
	static int _bind_CreateGlobalJavascriptObject(lua_State *L) {
		if (!_lg_typecheck_CreateGlobalJavascriptObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::JSValue Awesomium::WebView::CreateGlobalJavascriptObject(const Awesomium::WebString & name) function, expected prototype:\nAwesomium::JSValue Awesomium::WebView::CreateGlobalJavascriptObject(const Awesomium::WebString & name)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string name_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString name = Awesomium::ToWebString(name_str);

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::JSValue Awesomium::WebView::CreateGlobalJavascriptObject(const Awesomium::WebString &). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		Awesomium::JSValue stack_lret = self->CreateGlobalJavascriptObject(name);
		Awesomium::JSValue* lret = new Awesomium::JSValue(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::JSValue >::push(L,lret,true);

		return 1;
	}

	// void Awesomium::WebView::ExecuteJavascript(const Awesomium::WebString & script, const Awesomium::WebString & frame_xpath)
	static int _bind_ExecuteJavascript(lua_State *L) {
		if (!_lg_typecheck_ExecuteJavascript(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::ExecuteJavascript(const Awesomium::WebString & script, const Awesomium::WebString & frame_xpath) function, expected prototype:\nvoid Awesomium::WebView::ExecuteJavascript(const Awesomium::WebString & script, const Awesomium::WebString & frame_xpath)\nClass arguments details:\narg 1 ID = 13938525\narg 2 ID = 13938525\n");
		}

		std::string script_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString script = Awesomium::ToWebString(script_str);
		std::string frame_xpath_str(lua_tostring(L,3),lua_objlen(L,3));
		Awesomium::WebString frame_xpath = Awesomium::ToWebString(frame_xpath_str);

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::ExecuteJavascript(const Awesomium::WebString &, const Awesomium::WebString &). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->ExecuteJavascript(script, frame_xpath);

		return 0;
	}

	// Awesomium::JSValue Awesomium::WebView::ExecuteJavascriptWithResult(const Awesomium::WebString & script, const Awesomium::WebString & frame_xpath)
	static int _bind_ExecuteJavascriptWithResult(lua_State *L) {
		if (!_lg_typecheck_ExecuteJavascriptWithResult(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::JSValue Awesomium::WebView::ExecuteJavascriptWithResult(const Awesomium::WebString & script, const Awesomium::WebString & frame_xpath) function, expected prototype:\nAwesomium::JSValue Awesomium::WebView::ExecuteJavascriptWithResult(const Awesomium::WebString & script, const Awesomium::WebString & frame_xpath)\nClass arguments details:\narg 1 ID = 13938525\narg 2 ID = 13938525\n");
		}

		std::string script_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString script = Awesomium::ToWebString(script_str);
		std::string frame_xpath_str(lua_tostring(L,3),lua_objlen(L,3));
		Awesomium::WebString frame_xpath = Awesomium::ToWebString(frame_xpath_str);

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::JSValue Awesomium::WebView::ExecuteJavascriptWithResult(const Awesomium::WebString &, const Awesomium::WebString &). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		Awesomium::JSValue stack_lret = self->ExecuteJavascriptWithResult(script, frame_xpath);
		Awesomium::JSValue* lret = new Awesomium::JSValue(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::JSValue >::push(L,lret,true);

		return 1;
	}

	// void Awesomium::WebView::set_js_method_handler(Awesomium::JSMethodHandler * handler)
	static int _bind_set_js_method_handler(lua_State *L) {
		if (!_lg_typecheck_set_js_method_handler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::set_js_method_handler(Awesomium::JSMethodHandler * handler) function, expected prototype:\nvoid Awesomium::WebView::set_js_method_handler(Awesomium::JSMethodHandler * handler)\nClass arguments details:\narg 1 ID = 91373609\n");
		}

		Awesomium::JSMethodHandler* handler=(Luna< Awesomium::JSMethodHandler >::check(L,2));

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::set_js_method_handler(Awesomium::JSMethodHandler *). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->set_js_method_handler(handler);

		return 0;
	}

	// Awesomium::JSMethodHandler * Awesomium::WebView::js_method_handler()
	static int _bind_js_method_handler(lua_State *L) {
		if (!_lg_typecheck_js_method_handler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::JSMethodHandler * Awesomium::WebView::js_method_handler() function, expected prototype:\nAwesomium::JSMethodHandler * Awesomium::WebView::js_method_handler()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::JSMethodHandler * Awesomium::WebView::js_method_handler(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		Awesomium::JSMethodHandler * lret = self->js_method_handler();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::JSMethodHandler >::push(L,lret,false);

		return 1;
	}

	// void Awesomium::WebView::DidSelectPopupMenuItem(int item_index)
	static int _bind_DidSelectPopupMenuItem(lua_State *L) {
		if (!_lg_typecheck_DidSelectPopupMenuItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::DidSelectPopupMenuItem(int item_index) function, expected prototype:\nvoid Awesomium::WebView::DidSelectPopupMenuItem(int item_index)\nClass arguments details:\n");
		}

		int item_index=(int)lua_tointeger(L,2);

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::DidSelectPopupMenuItem(int). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->DidSelectPopupMenuItem(item_index);

		return 0;
	}

	// void Awesomium::WebView::DidCancelPopupMenu()
	static int _bind_DidCancelPopupMenu(lua_State *L) {
		if (!_lg_typecheck_DidCancelPopupMenu(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::DidCancelPopupMenu() function, expected prototype:\nvoid Awesomium::WebView::DidCancelPopupMenu()\nClass arguments details:\n");
		}


		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::DidCancelPopupMenu(). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->DidCancelPopupMenu();

		return 0;
	}

	// void Awesomium::WebView::DidChooseFiles(const Awesomium::WebStringArray & files, bool should_write_files)
	static int _bind_DidChooseFiles(lua_State *L) {
		if (!_lg_typecheck_DidChooseFiles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::DidChooseFiles(const Awesomium::WebStringArray & files, bool should_write_files) function, expected prototype:\nvoid Awesomium::WebView::DidChooseFiles(const Awesomium::WebStringArray & files, bool should_write_files)\nClass arguments details:\narg 1 ID = 16354805\n");
		}

		const Awesomium::WebStringArray* files_ptr=(Luna< Awesomium::WebStringArray >::check(L,2));
		if( !files_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg files in Awesomium::WebView::DidChooseFiles function");
		}
		const Awesomium::WebStringArray & files=*files_ptr;
		bool should_write_files=(bool)(lua_toboolean(L,3)==1);

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::DidChooseFiles(const Awesomium::WebStringArray &, bool). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->DidChooseFiles(files, should_write_files);

		return 0;
	}

	// void Awesomium::WebView::DidLogin(int request_id, const Awesomium::WebString & username, const Awesomium::WebString & password)
	static int _bind_DidLogin(lua_State *L) {
		if (!_lg_typecheck_DidLogin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::DidLogin(int request_id, const Awesomium::WebString & username, const Awesomium::WebString & password) function, expected prototype:\nvoid Awesomium::WebView::DidLogin(int request_id, const Awesomium::WebString & username, const Awesomium::WebString & password)\nClass arguments details:\narg 2 ID = 13938525\narg 3 ID = 13938525\n");
		}

		int request_id=(int)lua_tointeger(L,2);
		std::string username_str(lua_tostring(L,3),lua_objlen(L,3));
		Awesomium::WebString username = Awesomium::ToWebString(username_str);
		std::string password_str(lua_tostring(L,4),lua_objlen(L,4));
		Awesomium::WebString password = Awesomium::ToWebString(password_str);

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::DidLogin(int, const Awesomium::WebString &, const Awesomium::WebString &). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->DidLogin(request_id, username, password);

		return 0;
	}

	// void Awesomium::WebView::DidCancelLogin(int request_id)
	static int _bind_DidCancelLogin(lua_State *L) {
		if (!_lg_typecheck_DidCancelLogin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::DidCancelLogin(int request_id) function, expected prototype:\nvoid Awesomium::WebView::DidCancelLogin(int request_id)\nClass arguments details:\n");
		}

		int request_id=(int)lua_tointeger(L,2);

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::DidCancelLogin(int). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->DidCancelLogin(request_id);

		return 0;
	}

	// void Awesomium::WebView::DidChooseDownloadPath(int download_id, const Awesomium::WebString & path)
	static int _bind_DidChooseDownloadPath(lua_State *L) {
		if (!_lg_typecheck_DidChooseDownloadPath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::DidChooseDownloadPath(int download_id, const Awesomium::WebString & path) function, expected prototype:\nvoid Awesomium::WebView::DidChooseDownloadPath(int download_id, const Awesomium::WebString & path)\nClass arguments details:\narg 2 ID = 13938525\n");
		}

		int download_id=(int)lua_tointeger(L,2);
		std::string path_str(lua_tostring(L,3),lua_objlen(L,3));
		Awesomium::WebString path = Awesomium::ToWebString(path_str);

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::DidChooseDownloadPath(int, const Awesomium::WebString &). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->DidChooseDownloadPath(download_id, path);

		return 0;
	}

	// void Awesomium::WebView::DidCancelDownload(int download_id)
	static int _bind_DidCancelDownload(lua_State *L) {
		if (!_lg_typecheck_DidCancelDownload(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebView::DidCancelDownload(int download_id) function, expected prototype:\nvoid Awesomium::WebView::DidCancelDownload(int download_id)\nClass arguments details:\n");
		}

		int download_id=(int)lua_tointeger(L,2);

		Awesomium::WebView* self=(Luna< Awesomium::WebView >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebView::DidCancelDownload(int). Got : '%s'",typeid(Luna< Awesomium::WebView >::check(L,1)).name());
		}
		self->DidCancelDownload(download_id);

		return 0;
	}


	// Operator binds:

};

Awesomium::WebView* LunaTraits< Awesomium::WebView >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_WebView::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void Awesomium::WebView::Destroy()
	// Awesomium::WebViewType Awesomium::WebView::type()
	// int Awesomium::WebView::process_id()
	// ProcessHandle Awesomium::WebView::process_handle()
	// void Awesomium::WebView::set_parent_window(NativeWindow parent)
	// NativeWindow Awesomium::WebView::parent_window()
	// NativeWindow Awesomium::WebView::window()
	// void Awesomium::WebView::set_view_listener(Awesomium::WebViewListener::View * listener)
	// void Awesomium::WebView::set_load_listener(Awesomium::WebViewListener::Load * listener)
	// void Awesomium::WebView::set_process_listener(Awesomium::WebViewListener::Process * listener)
	// void Awesomium::WebView::set_menu_listener(Awesomium::WebViewListener::Menu * listener)
	// void Awesomium::WebView::set_dialog_listener(Awesomium::WebViewListener::Dialog * listener)
	// void Awesomium::WebView::set_print_listener(Awesomium::WebViewListener::Print * listener)
	// void Awesomium::WebView::set_download_listener(Awesomium::WebViewListener::Download * listener)
	// void Awesomium::WebView::set_input_method_editor_listener(Awesomium::WebViewListener::InputMethodEditor * listener)
	// Awesomium::WebViewListener::View * Awesomium::WebView::view_listener()
	// Awesomium::WebViewListener::Load * Awesomium::WebView::load_listener()
	// Awesomium::WebViewListener::Process * Awesomium::WebView::process_listener()
	// Awesomium::WebViewListener::Menu * Awesomium::WebView::menu_listener()
	// Awesomium::WebViewListener::Dialog * Awesomium::WebView::dialog_listener()
	// Awesomium::WebViewListener::Print * Awesomium::WebView::print_listener()
	// Awesomium::WebViewListener::Download * Awesomium::WebView::download_listener()
	// Awesomium::WebViewListener::InputMethodEditor * Awesomium::WebView::input_method_editor_listener()
	// void Awesomium::WebView::LoadURL(const Awesomium::WebURL & url)
	// void Awesomium::WebView::GoBack()
	// void Awesomium::WebView::GoForward()
	// void Awesomium::WebView::GoToHistoryOffset(int offset)
	// void Awesomium::WebView::Stop()
	// void Awesomium::WebView::Reload(bool ignore_cache)
	// bool Awesomium::WebView::CanGoBack()
	// bool Awesomium::WebView::CanGoForward()
	// Awesomium::Surface * Awesomium::WebView::surface()
	// Awesomium::WebURL Awesomium::WebView::url()
	// Awesomium::WebString Awesomium::WebView::title()
	// Awesomium::WebSession * Awesomium::WebView::session()
	// bool Awesomium::WebView::IsLoading()
	// bool Awesomium::WebView::IsCrashed()
	// void Awesomium::WebView::Resize(int width, int height)
	// void Awesomium::WebView::SetTransparent(bool is_transparent)
	// bool Awesomium::WebView::IsTransparent()
	// void Awesomium::WebView::PauseRendering()
	// void Awesomium::WebView::ResumeRendering()
	// void Awesomium::WebView::Focus()
	// void Awesomium::WebView::Unfocus()
	// Awesomium::FocusedElementType Awesomium::WebView::focused_element_type()
	// void Awesomium::WebView::InjectMouseMove(int x, int y)
	// void Awesomium::WebView::InjectMouseDown(Awesomium::MouseButton button)
	// void Awesomium::WebView::InjectMouseUp(Awesomium::MouseButton button)
	// void Awesomium::WebView::InjectMouseWheel(int scroll_vert, int scroll_horz)
	// void Awesomium::WebView::InjectKeyboardEvent(const Awesomium::WebKeyboardEvent & key_event)
	// void Awesomium::WebView::InjectTouchEvent(const Awesomium::WebTouchEvent & touch_event)
	// void Awesomium::WebView::ActivateIME(bool activate)
	// void Awesomium::WebView::SetIMEComposition(const Awesomium::WebString & input_string, int cursor_pos, int target_start, int target_end)
	// void Awesomium::WebView::ConfirmIMEComposition(const Awesomium::WebString & input_string)
	// void Awesomium::WebView::CancelIMEComposition()
	// void Awesomium::WebView::Undo()
	// void Awesomium::WebView::Redo()
	// void Awesomium::WebView::Cut()
	// void Awesomium::WebView::Copy()
	// void Awesomium::WebView::CopyImageAt(int x, int y)
	// void Awesomium::WebView::Paste()
	// void Awesomium::WebView::PasteAndMatchStyle()
	// void Awesomium::WebView::SelectAll()
	// int Awesomium::WebView::PrintToFile(const Awesomium::WebString & output_directory, const Awesomium::PrintConfig & config)
	// Awesomium::Error Awesomium::WebView::last_error() const
	// Awesomium::JSValue Awesomium::WebView::CreateGlobalJavascriptObject(const Awesomium::WebString & name)
	// void Awesomium::WebView::ExecuteJavascript(const Awesomium::WebString & script, const Awesomium::WebString & frame_xpath)
	// Awesomium::JSValue Awesomium::WebView::ExecuteJavascriptWithResult(const Awesomium::WebString & script, const Awesomium::WebString & frame_xpath)
	// void Awesomium::WebView::set_js_method_handler(Awesomium::JSMethodHandler * handler)
	// Awesomium::JSMethodHandler * Awesomium::WebView::js_method_handler()
	// void Awesomium::WebView::DidSelectPopupMenuItem(int item_index)
	// void Awesomium::WebView::DidCancelPopupMenu()
	// void Awesomium::WebView::DidChooseFiles(const Awesomium::WebStringArray & files, bool should_write_files)
	// void Awesomium::WebView::DidLogin(int request_id, const Awesomium::WebString & username, const Awesomium::WebString & password)
	// void Awesomium::WebView::DidCancelLogin(int request_id)
	// void Awesomium::WebView::DidChooseDownloadPath(int download_id, const Awesomium::WebString & path)
	// void Awesomium::WebView::DidCancelDownload(int download_id)
}

void LunaTraits< Awesomium::WebView >::_bind_dtor(Awesomium::WebView* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< Awesomium::WebView >::className[] = "WebView";
const char LunaTraits< Awesomium::WebView >::fullName[] = "Awesomium::WebView";
const char LunaTraits< Awesomium::WebView >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebView >::parents[] = {0};
const int LunaTraits< Awesomium::WebView >::hash = 613205;
const int LunaTraits< Awesomium::WebView >::uniqueIDs[] = {613205,0};

luna_RegType LunaTraits< Awesomium::WebView >::methods[] = {
	{"Destroy", &luna_wrapper_Awesomium_WebView::_bind_Destroy},
	{"type", &luna_wrapper_Awesomium_WebView::_bind_type},
	{"process_id", &luna_wrapper_Awesomium_WebView::_bind_process_id},
	{"set_view_listener", &luna_wrapper_Awesomium_WebView::_bind_set_view_listener},
	{"set_load_listener", &luna_wrapper_Awesomium_WebView::_bind_set_load_listener},
	{"set_process_listener", &luna_wrapper_Awesomium_WebView::_bind_set_process_listener},
	{"set_menu_listener", &luna_wrapper_Awesomium_WebView::_bind_set_menu_listener},
	{"set_dialog_listener", &luna_wrapper_Awesomium_WebView::_bind_set_dialog_listener},
	{"set_print_listener", &luna_wrapper_Awesomium_WebView::_bind_set_print_listener},
	{"set_download_listener", &luna_wrapper_Awesomium_WebView::_bind_set_download_listener},
	{"set_input_method_editor_listener", &luna_wrapper_Awesomium_WebView::_bind_set_input_method_editor_listener},
	{"view_listener", &luna_wrapper_Awesomium_WebView::_bind_view_listener},
	{"load_listener", &luna_wrapper_Awesomium_WebView::_bind_load_listener},
	{"process_listener", &luna_wrapper_Awesomium_WebView::_bind_process_listener},
	{"menu_listener", &luna_wrapper_Awesomium_WebView::_bind_menu_listener},
	{"dialog_listener", &luna_wrapper_Awesomium_WebView::_bind_dialog_listener},
	{"print_listener", &luna_wrapper_Awesomium_WebView::_bind_print_listener},
	{"download_listener", &luna_wrapper_Awesomium_WebView::_bind_download_listener},
	{"input_method_editor_listener", &luna_wrapper_Awesomium_WebView::_bind_input_method_editor_listener},
	{"LoadURL", &luna_wrapper_Awesomium_WebView::_bind_LoadURL},
	{"GoBack", &luna_wrapper_Awesomium_WebView::_bind_GoBack},
	{"GoForward", &luna_wrapper_Awesomium_WebView::_bind_GoForward},
	{"GoToHistoryOffset", &luna_wrapper_Awesomium_WebView::_bind_GoToHistoryOffset},
	{"Stop", &luna_wrapper_Awesomium_WebView::_bind_Stop},
	{"Reload", &luna_wrapper_Awesomium_WebView::_bind_Reload},
	{"CanGoBack", &luna_wrapper_Awesomium_WebView::_bind_CanGoBack},
	{"CanGoForward", &luna_wrapper_Awesomium_WebView::_bind_CanGoForward},
	{"surface", &luna_wrapper_Awesomium_WebView::_bind_surface},
	{"url", &luna_wrapper_Awesomium_WebView::_bind_url},
	{"title", &luna_wrapper_Awesomium_WebView::_bind_title},
	{"session", &luna_wrapper_Awesomium_WebView::_bind_session},
	{"IsLoading", &luna_wrapper_Awesomium_WebView::_bind_IsLoading},
	{"IsCrashed", &luna_wrapper_Awesomium_WebView::_bind_IsCrashed},
	{"Resize", &luna_wrapper_Awesomium_WebView::_bind_Resize},
	{"SetTransparent", &luna_wrapper_Awesomium_WebView::_bind_SetTransparent},
	{"IsTransparent", &luna_wrapper_Awesomium_WebView::_bind_IsTransparent},
	{"PauseRendering", &luna_wrapper_Awesomium_WebView::_bind_PauseRendering},
	{"ResumeRendering", &luna_wrapper_Awesomium_WebView::_bind_ResumeRendering},
	{"Focus", &luna_wrapper_Awesomium_WebView::_bind_Focus},
	{"Unfocus", &luna_wrapper_Awesomium_WebView::_bind_Unfocus},
	{"focused_element_type", &luna_wrapper_Awesomium_WebView::_bind_focused_element_type},
	{"InjectMouseMove", &luna_wrapper_Awesomium_WebView::_bind_InjectMouseMove},
	{"InjectMouseDown", &luna_wrapper_Awesomium_WebView::_bind_InjectMouseDown},
	{"InjectMouseUp", &luna_wrapper_Awesomium_WebView::_bind_InjectMouseUp},
	{"InjectMouseWheel", &luna_wrapper_Awesomium_WebView::_bind_InjectMouseWheel},
	{"InjectKeyboardEvent", &luna_wrapper_Awesomium_WebView::_bind_InjectKeyboardEvent},
	{"InjectTouchEvent", &luna_wrapper_Awesomium_WebView::_bind_InjectTouchEvent},
	{"ActivateIME", &luna_wrapper_Awesomium_WebView::_bind_ActivateIME},
	{"SetIMEComposition", &luna_wrapper_Awesomium_WebView::_bind_SetIMEComposition},
	{"ConfirmIMEComposition", &luna_wrapper_Awesomium_WebView::_bind_ConfirmIMEComposition},
	{"CancelIMEComposition", &luna_wrapper_Awesomium_WebView::_bind_CancelIMEComposition},
	{"Undo", &luna_wrapper_Awesomium_WebView::_bind_Undo},
	{"Redo", &luna_wrapper_Awesomium_WebView::_bind_Redo},
	{"Cut", &luna_wrapper_Awesomium_WebView::_bind_Cut},
	{"Copy", &luna_wrapper_Awesomium_WebView::_bind_Copy},
	{"CopyImageAt", &luna_wrapper_Awesomium_WebView::_bind_CopyImageAt},
	{"Paste", &luna_wrapper_Awesomium_WebView::_bind_Paste},
	{"PasteAndMatchStyle", &luna_wrapper_Awesomium_WebView::_bind_PasteAndMatchStyle},
	{"SelectAll", &luna_wrapper_Awesomium_WebView::_bind_SelectAll},
	{"PrintToFile", &luna_wrapper_Awesomium_WebView::_bind_PrintToFile},
	{"last_error", &luna_wrapper_Awesomium_WebView::_bind_last_error},
	{"CreateGlobalJavascriptObject", &luna_wrapper_Awesomium_WebView::_bind_CreateGlobalJavascriptObject},
	{"ExecuteJavascript", &luna_wrapper_Awesomium_WebView::_bind_ExecuteJavascript},
	{"ExecuteJavascriptWithResult", &luna_wrapper_Awesomium_WebView::_bind_ExecuteJavascriptWithResult},
	{"set_js_method_handler", &luna_wrapper_Awesomium_WebView::_bind_set_js_method_handler},
	{"js_method_handler", &luna_wrapper_Awesomium_WebView::_bind_js_method_handler},
	{"DidSelectPopupMenuItem", &luna_wrapper_Awesomium_WebView::_bind_DidSelectPopupMenuItem},
	{"DidCancelPopupMenu", &luna_wrapper_Awesomium_WebView::_bind_DidCancelPopupMenu},
	{"DidChooseFiles", &luna_wrapper_Awesomium_WebView::_bind_DidChooseFiles},
	{"DidLogin", &luna_wrapper_Awesomium_WebView::_bind_DidLogin},
	{"DidCancelLogin", &luna_wrapper_Awesomium_WebView::_bind_DidCancelLogin},
	{"DidChooseDownloadPath", &luna_wrapper_Awesomium_WebView::_bind_DidChooseDownloadPath},
	{"DidCancelDownload", &luna_wrapper_Awesomium_WebView::_bind_DidCancelDownload},
	{"dynCast", &luna_wrapper_Awesomium_WebView::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_WebView::_bind___eq},
	{"fromVoid", &luna_wrapper_Awesomium_WebView::_bind_fromVoid},
	{"asVoid", &luna_wrapper_Awesomium_WebView::_bind_asVoid},
	{"getTable", &luna_wrapper_Awesomium_WebView::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebView >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebView >::enumValues[] = {
	{0,0}
};


