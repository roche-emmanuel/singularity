#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDropSource.h>

class luna_wrapper_wxDropSource {
public:
	typedef Luna< wxDropSource > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78094326) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDropSource*)");
		}

		wxDropSource* rhs =(Luna< wxDropSource >::check(L,2));
		wxDropSource* self=(Luna< wxDropSource >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
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

		wxDropSource* self=(Luna< wxDropSource >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDropSource");
		
		return luna_dynamicCast(L,converters,"wxDropSource",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>4 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( luatop>0 && (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>1 && (!dynamic_cast< wxCursor* >(Luna< wxObject >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( luatop>2 && (!dynamic_cast< wxCursor* >(Luna< wxObject >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>3 && (!dynamic_cast< wxCursor* >(Luna< wxObject >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,55398761) ) return false;
		if( (!dynamic_cast< wxDataObject* >(Luna< wxDataObject >::check(L,1))) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( luatop>2 && (!dynamic_cast< wxCursor* >(Luna< wxObject >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>3 && (!dynamic_cast< wxCursor* >(Luna< wxObject >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( luatop>4 && (!dynamic_cast< wxCursor* >(Luna< wxObject >::check(L,5))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( luatop>2 && (!dynamic_cast< wxCursor* >(Luna< wxObject >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>3 && (!dynamic_cast< wxCursor* >(Luna< wxObject >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( luatop>4 && (!dynamic_cast< wxCursor* >(Luna< wxObject >::check(L,5))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,55398761) ) return false;
		if( (!dynamic_cast< wxDataObject* >(Luna< wxDataObject >::check(L,2))) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3)) ) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>3 && (!dynamic_cast< wxCursor* >(Luna< wxObject >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( luatop>4 && (!dynamic_cast< wxCursor* >(Luna< wxObject >::check(L,5))) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,56813631) ) return false;
		if( luatop>5 && (!dynamic_cast< wxCursor* >(Luna< wxObject >::check(L,6))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_DoDragDrop(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDataObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GiveFeedback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCursor(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,55398761) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DoDragDrop(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GiveFeedback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDropSource::wxDropSource(wxWindow * win = NULL, const wxCursor & iconCopy = wxNullCursor, const wxCursor & iconMove = wxNullCursor, const wxCursor & iconNone = wxNullCursor)
	static wxDropSource* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDropSource::wxDropSource(wxWindow * win = NULL, const wxCursor & iconCopy = wxNullCursor, const wxCursor & iconMove = wxNullCursor, const wxCursor & iconNone = wxNullCursor) function, expected prototype:\nwxDropSource::wxDropSource(wxWindow * win = NULL, const wxCursor & iconCopy = wxNullCursor, const wxCursor & iconMove = wxNullCursor, const wxCursor & iconNone = wxNullCursor)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 56813631\narg 4 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=luatop>0 ? (Luna< wxObject >::checkSubType< wxWindow >(L,1)) : (wxWindow*)NULL;
		const wxCursor* iconCopy_ptr=luatop>1 ? (Luna< wxObject >::checkSubType< wxCursor >(L,2)) : NULL;
		if( luatop>1 && !iconCopy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iconCopy in wxDropSource::wxDropSource function");
		}
		const wxCursor & iconCopy=luatop>1 ? *iconCopy_ptr : wxNullCursor;
		const wxCursor* iconMove_ptr=luatop>2 ? (Luna< wxObject >::checkSubType< wxCursor >(L,3)) : NULL;
		if( luatop>2 && !iconMove_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iconMove in wxDropSource::wxDropSource function");
		}
		const wxCursor & iconMove=luatop>2 ? *iconMove_ptr : wxNullCursor;
		const wxCursor* iconNone_ptr=luatop>3 ? (Luna< wxObject >::checkSubType< wxCursor >(L,4)) : NULL;
		if( luatop>3 && !iconNone_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iconNone in wxDropSource::wxDropSource function");
		}
		const wxCursor & iconNone=luatop>3 ? *iconNone_ptr : wxNullCursor;

		return new wxDropSource(win, iconCopy, iconMove, iconNone);
	}

	// wxDropSource::wxDropSource(wxDataObject & data, wxWindow * win = NULL, const wxCursor & iconCopy = wxNullCursor, const wxCursor & iconMove = wxNullCursor, const wxCursor & iconNone = wxNullCursor)
	static wxDropSource* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDropSource::wxDropSource(wxDataObject & data, wxWindow * win = NULL, const wxCursor & iconCopy = wxNullCursor, const wxCursor & iconMove = wxNullCursor, const wxCursor & iconNone = wxNullCursor) function, expected prototype:\nwxDropSource::wxDropSource(wxDataObject & data, wxWindow * win = NULL, const wxCursor & iconCopy = wxNullCursor, const wxCursor & iconMove = wxNullCursor, const wxCursor & iconNone = wxNullCursor)\nClass arguments details:\narg 1 ID = 55398761\narg 2 ID = 56813631\narg 3 ID = 56813631\narg 4 ID = 56813631\narg 5 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxDataObject* data_ptr=(Luna< wxDataObject >::check(L,1));
		if( !data_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg data in wxDropSource::wxDropSource function");
		}
		wxDataObject & data=*data_ptr;
		wxWindow* win=luatop>1 ? (Luna< wxObject >::checkSubType< wxWindow >(L,2)) : (wxWindow*)NULL;
		const wxCursor* iconCopy_ptr=luatop>2 ? (Luna< wxObject >::checkSubType< wxCursor >(L,3)) : NULL;
		if( luatop>2 && !iconCopy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iconCopy in wxDropSource::wxDropSource function");
		}
		const wxCursor & iconCopy=luatop>2 ? *iconCopy_ptr : wxNullCursor;
		const wxCursor* iconMove_ptr=luatop>3 ? (Luna< wxObject >::checkSubType< wxCursor >(L,4)) : NULL;
		if( luatop>3 && !iconMove_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iconMove in wxDropSource::wxDropSource function");
		}
		const wxCursor & iconMove=luatop>3 ? *iconMove_ptr : wxNullCursor;
		const wxCursor* iconNone_ptr=luatop>4 ? (Luna< wxObject >::checkSubType< wxCursor >(L,5)) : NULL;
		if( luatop>4 && !iconNone_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iconNone in wxDropSource::wxDropSource function");
		}
		const wxCursor & iconNone=luatop>4 ? *iconNone_ptr : wxNullCursor;

		return new wxDropSource(data, win, iconCopy, iconMove, iconNone);
	}

	// wxDropSource::wxDropSource(lua_Table * data, wxWindow * win = NULL, const wxCursor & iconCopy = wxNullCursor, const wxCursor & iconMove = wxNullCursor, const wxCursor & iconNone = wxNullCursor)
	static wxDropSource* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDropSource::wxDropSource(lua_Table * data, wxWindow * win = NULL, const wxCursor & iconCopy = wxNullCursor, const wxCursor & iconMove = wxNullCursor, const wxCursor & iconNone = wxNullCursor) function, expected prototype:\nwxDropSource::wxDropSource(lua_Table * data, wxWindow * win = NULL, const wxCursor & iconCopy = wxNullCursor, const wxCursor & iconMove = wxNullCursor, const wxCursor & iconNone = wxNullCursor)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 56813631\narg 4 ID = 56813631\narg 5 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=luatop>1 ? (Luna< wxObject >::checkSubType< wxWindow >(L,2)) : (wxWindow*)NULL;
		const wxCursor* iconCopy_ptr=luatop>2 ? (Luna< wxObject >::checkSubType< wxCursor >(L,3)) : NULL;
		if( luatop>2 && !iconCopy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iconCopy in wxDropSource::wxDropSource function");
		}
		const wxCursor & iconCopy=luatop>2 ? *iconCopy_ptr : wxNullCursor;
		const wxCursor* iconMove_ptr=luatop>3 ? (Luna< wxObject >::checkSubType< wxCursor >(L,4)) : NULL;
		if( luatop>3 && !iconMove_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iconMove in wxDropSource::wxDropSource function");
		}
		const wxCursor & iconMove=luatop>3 ? *iconMove_ptr : wxNullCursor;
		const wxCursor* iconNone_ptr=luatop>4 ? (Luna< wxObject >::checkSubType< wxCursor >(L,5)) : NULL;
		if( luatop>4 && !iconNone_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iconNone in wxDropSource::wxDropSource function");
		}
		const wxCursor & iconNone=luatop>4 ? *iconNone_ptr : wxNullCursor;

		return new wrapper_wxDropSource(L,NULL, win, iconCopy, iconMove, iconNone);
	}

	// wxDropSource::wxDropSource(lua_Table * data, wxDataObject & data, wxWindow * win = NULL, const wxCursor & iconCopy = wxNullCursor, const wxCursor & iconMove = wxNullCursor, const wxCursor & iconNone = wxNullCursor)
	static wxDropSource* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDropSource::wxDropSource(lua_Table * data, wxDataObject & data, wxWindow * win = NULL, const wxCursor & iconCopy = wxNullCursor, const wxCursor & iconMove = wxNullCursor, const wxCursor & iconNone = wxNullCursor) function, expected prototype:\nwxDropSource::wxDropSource(lua_Table * data, wxDataObject & data, wxWindow * win = NULL, const wxCursor & iconCopy = wxNullCursor, const wxCursor & iconMove = wxNullCursor, const wxCursor & iconNone = wxNullCursor)\nClass arguments details:\narg 2 ID = 55398761\narg 3 ID = 56813631\narg 4 ID = 56813631\narg 5 ID = 56813631\narg 6 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxDataObject* data_ptr=(Luna< wxDataObject >::check(L,2));
		if( !data_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg data in wxDropSource::wxDropSource function");
		}
		wxDataObject & data=*data_ptr;
		wxWindow* win=luatop>2 ? (Luna< wxObject >::checkSubType< wxWindow >(L,3)) : (wxWindow*)NULL;
		const wxCursor* iconCopy_ptr=luatop>3 ? (Luna< wxObject >::checkSubType< wxCursor >(L,4)) : NULL;
		if( luatop>3 && !iconCopy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iconCopy in wxDropSource::wxDropSource function");
		}
		const wxCursor & iconCopy=luatop>3 ? *iconCopy_ptr : wxNullCursor;
		const wxCursor* iconMove_ptr=luatop>4 ? (Luna< wxObject >::checkSubType< wxCursor >(L,5)) : NULL;
		if( luatop>4 && !iconMove_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iconMove in wxDropSource::wxDropSource function");
		}
		const wxCursor & iconMove=luatop>4 ? *iconMove_ptr : wxNullCursor;
		const wxCursor* iconNone_ptr=luatop>5 ? (Luna< wxObject >::checkSubType< wxCursor >(L,6)) : NULL;
		if( luatop>5 && !iconNone_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iconNone in wxDropSource::wxDropSource function");
		}
		const wxCursor & iconNone=luatop>5 ? *iconNone_ptr : wxNullCursor;

		return new wrapper_wxDropSource(L,NULL, data, win, iconCopy, iconMove, iconNone);
	}

	// Overload binder for wxDropSource::wxDropSource
	static wxDropSource* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxDropSource, cannot match any of the overloads for function wxDropSource:\n  wxDropSource(wxWindow *, const wxCursor &, const wxCursor &, const wxCursor &)\n  wxDropSource(wxDataObject &, wxWindow *, const wxCursor &, const wxCursor &, const wxCursor &)\n  wxDropSource(lua_Table *, wxWindow *, const wxCursor &, const wxCursor &, const wxCursor &)\n  wxDropSource(lua_Table *, wxDataObject &, wxWindow *, const wxCursor &, const wxCursor &, const wxCursor &)\n");
		return NULL;
	}


	// Function binds:
	// wxDragResult wxDropSource::DoDragDrop(int flags = ::wxDrag_CopyOnly)
	static int _bind_DoDragDrop(lua_State *L) {
		if (!_lg_typecheck_DoDragDrop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDragResult wxDropSource::DoDragDrop(int flags = ::wxDrag_CopyOnly) function, expected prototype:\nwxDragResult wxDropSource::DoDragDrop(int flags = ::wxDrag_CopyOnly)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : ::wxDrag_CopyOnly;

		wxDropSource* self=(Luna< wxDropSource >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDragResult wxDropSource::DoDragDrop(int)");
		}
		wxDragResult lret = self->DoDragDrop(flags);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDataObject * wxDropSource::GetDataObject()
	static int _bind_GetDataObject(lua_State *L) {
		if (!_lg_typecheck_GetDataObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataObject * wxDropSource::GetDataObject() function, expected prototype:\nwxDataObject * wxDropSource::GetDataObject()\nClass arguments details:\n");
		}


		wxDropSource* self=(Luna< wxDropSource >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataObject * wxDropSource::GetDataObject()");
		}
		wxDataObject * lret = self->GetDataObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataObject >::push(L,lret,false);

		return 1;
	}

	// bool wxDropSource::GiveFeedback(wxDragResult effect)
	static int _bind_GiveFeedback(lua_State *L) {
		if (!_lg_typecheck_GiveFeedback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDropSource::GiveFeedback(wxDragResult effect) function, expected prototype:\nbool wxDropSource::GiveFeedback(wxDragResult effect)\nClass arguments details:\n");
		}

		wxDragResult effect=(wxDragResult)lua_tointeger(L,2);

		wxDropSource* self=(Luna< wxDropSource >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDropSource::GiveFeedback(wxDragResult)");
		}
		bool lret = self->GiveFeedback(effect);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDropSource::SetCursor(wxDragResult res, const wxCursor & cursor)
	static int _bind_SetCursor(lua_State *L) {
		if (!_lg_typecheck_SetCursor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDropSource::SetCursor(wxDragResult res, const wxCursor & cursor) function, expected prototype:\nvoid wxDropSource::SetCursor(wxDragResult res, const wxCursor & cursor)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		wxDragResult res=(wxDragResult)lua_tointeger(L,2);
		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,3));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxDropSource::SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxDropSource* self=(Luna< wxDropSource >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDropSource::SetCursor(wxDragResult, const wxCursor &)");
		}
		self->SetCursor(res, cursor);

		return 0;
	}

	// void wxDropSource::SetData(wxDataObject & data)
	static int _bind_SetData(lua_State *L) {
		if (!_lg_typecheck_SetData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDropSource::SetData(wxDataObject & data) function, expected prototype:\nvoid wxDropSource::SetData(wxDataObject & data)\nClass arguments details:\narg 1 ID = 55398761\n");
		}

		wxDataObject* data_ptr=(Luna< wxDataObject >::check(L,2));
		if( !data_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg data in wxDropSource::SetData function");
		}
		wxDataObject & data=*data_ptr;

		wxDropSource* self=(Luna< wxDropSource >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDropSource::SetData(wxDataObject &)");
		}
		self->SetData(data);

		return 0;
	}

	// wxDragResult wxDropSource::base_DoDragDrop(int flags = ::wxDrag_CopyOnly)
	static int _bind_base_DoDragDrop(lua_State *L) {
		if (!_lg_typecheck_base_DoDragDrop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDragResult wxDropSource::base_DoDragDrop(int flags = ::wxDrag_CopyOnly) function, expected prototype:\nwxDragResult wxDropSource::base_DoDragDrop(int flags = ::wxDrag_CopyOnly)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : ::wxDrag_CopyOnly;

		wxDropSource* self=(Luna< wxDropSource >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDragResult wxDropSource::base_DoDragDrop(int)");
		}
		wxDragResult lret = self->wxDropSource::DoDragDrop(flags);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxDropSource::base_GiveFeedback(wxDragResult effect)
	static int _bind_base_GiveFeedback(lua_State *L) {
		if (!_lg_typecheck_base_GiveFeedback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDropSource::base_GiveFeedback(wxDragResult effect) function, expected prototype:\nbool wxDropSource::base_GiveFeedback(wxDragResult effect)\nClass arguments details:\n");
		}

		wxDragResult effect=(wxDragResult)lua_tointeger(L,2);

		wxDropSource* self=(Luna< wxDropSource >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDropSource::base_GiveFeedback(wxDragResult)");
		}
		bool lret = self->wxDropSource::GiveFeedback(effect);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxDropSource* LunaTraits< wxDropSource >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDropSource::_bind_ctor(L);
}

void LunaTraits< wxDropSource >::_bind_dtor(wxDropSource* obj) {
	delete obj;
}

const char LunaTraits< wxDropSource >::className[] = "wxDropSource";
const char LunaTraits< wxDropSource >::fullName[] = "wxDropSource";
const char LunaTraits< wxDropSource >::moduleName[] = "wx";
const char* LunaTraits< wxDropSource >::parents[] = {0};
const int LunaTraits< wxDropSource >::hash = 78094326;
const int LunaTraits< wxDropSource >::uniqueIDs[] = {78094326,0};

luna_RegType LunaTraits< wxDropSource >::methods[] = {
	{"DoDragDrop", &luna_wrapper_wxDropSource::_bind_DoDragDrop},
	{"GetDataObject", &luna_wrapper_wxDropSource::_bind_GetDataObject},
	{"GiveFeedback", &luna_wrapper_wxDropSource::_bind_GiveFeedback},
	{"SetCursor", &luna_wrapper_wxDropSource::_bind_SetCursor},
	{"SetData", &luna_wrapper_wxDropSource::_bind_SetData},
	{"base_DoDragDrop", &luna_wrapper_wxDropSource::_bind_base_DoDragDrop},
	{"base_GiveFeedback", &luna_wrapper_wxDropSource::_bind_base_GiveFeedback},
	{"dynCast", &luna_wrapper_wxDropSource::_bind_dynCast},
	{"__eq", &luna_wrapper_wxDropSource::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxDropSource >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDropSource >::enumValues[] = {
	{0,0}
};


