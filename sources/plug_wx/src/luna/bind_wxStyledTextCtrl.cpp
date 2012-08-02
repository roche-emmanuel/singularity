#include <plug_common.h>

class luna_wrapper_wxStyledTextCtrl {
public:
	typedef Luna< wxStyledTextCtrl > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxStyledTextCtrl* ptr= dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxStyledTextCtrl >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>6 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddRefDocument(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddTextRaw(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Allocate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendTextRaw(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AutoCompActive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AutoCompCancel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AutoCompComplete(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AutoCompGetAutoHide(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AutoCompGetCancelAtStart(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AutoCompGetChooseSingle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AutoCompGetCurrent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AutoCompGetDropRestOfWord(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AutoCompGetIgnoreCase(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AutoCompGetMaxHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AutoCompGetMaxWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AutoCompGetSeparator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AutoCompGetTypeSeparator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AutoCompPosStart(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AutoCompSelect(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AutoCompSetAutoHide(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AutoCompSetCancelAtStart(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AutoCompSetChooseSingle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AutoCompSetDropRestOfWord(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AutoCompSetFillUps(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AutoCompSetIgnoreCase(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AutoCompSetMaxHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AutoCompSetMaxWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AutoCompSetSeparator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AutoCompSetTypeSeparator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AutoCompShow(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AutoCompStops(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_BackTab(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_BeginUndoAction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_BraceBadLight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_BraceHighlight(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_BraceMatch(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CallTipActive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CallTipCancel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CallTipPosAtStart(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CallTipSetBackground(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CallTipSetForeground(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CallTipSetForegroundHighlight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CallTipSetHighlight(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CallTipShow(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CallTipUseStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CanPaste(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CanRedo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CanUndo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Cancel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CharLeft(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CharLeftExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CharLeftRectExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CharRight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CharRightExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CharRightRectExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ChooseCaretX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ClearAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ClearDocumentStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ClearRegisteredImages(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CmdKeyAssign(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CmdKeyClear(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CmdKeyClearAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CmdKeyExecute(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Colourise(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ConvertEOLs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Copy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CopyRange(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CopyText(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CreateDocument(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Cut(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DelLineLeft(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DelLineRight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DelWordLeft(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DelWordRight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DeleteBack(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DeleteBackNotLine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DoDragOver(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DoDropText(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DocLineFromVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DocumentEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DocumentEndExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DocumentStart(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DocumentStartExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EditToggleOvertype(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EndUndoAction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EnsureCaretVisible(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EnsureVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnsureVisibleEnforcePolicy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindColumn(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindText(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FormFeed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FormatRange(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,56813631)) ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,20234418) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAnchor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBackSpaceUnIndents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCaretForeground(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCaretLineBackAlpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCaretLineBackground(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCaretLineVisible(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCaretPeriod(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCaretSticky(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCaretWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCharAt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCodePage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetControlCharSymbol(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCurLine(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCurrentLine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCurrentPos(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDocPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEOLMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEdgeColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEdgeColumn(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEdgeMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEndAtLastLine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEndStyled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFirstVisibleLine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFoldExpanded(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFoldLevel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFoldParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetHighlightGuide(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetIndent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetIndentationGuides(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLastChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLastKeydownProcessed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLayoutCache(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLexer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLine(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLineCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLineEndPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLineIndentPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLineIndentation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLineSelEndPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLineSelStartPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLineState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLineVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMarginLeft(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMarginMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMarginRight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMarginSensitive(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMarginType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMarginWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMaxLineState(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetModEventMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetModify(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMouseDownCaptures(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMouseDwellTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOvertype(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPasteConvertEndings(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPrintColourMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPrintMagnification(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPrintWrapMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetProperty(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPropertyExpanded(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPropertyInt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetReadOnly(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSTCCursor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSTCFocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetScrollWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSearchFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelAlpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelectedText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSelectionEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelectionMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelectionStart(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetStatus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetStyleAt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetStyleBits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetStyleBitsNeeded(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTabIndents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTabWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTargetEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTargetStart(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTextLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTextRange(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTwoPhaseDraw(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUndoCollection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUseAntiAliasing(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUseHorizontalScrollBar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUseTabs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUseVerticalScrollBar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetViewEOL(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetViewWhiteSpace(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWrapMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWrapStartIndent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWrapVisualFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWrapVisualFlagsLocation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetXOffset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetZoom(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GotoLine(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GotoPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HideLines(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HideSelection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Home(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HomeDisplay(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HomeDisplayExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HomeExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HomeRectExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HomeWrap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HomeWrapExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IndicatorGetForeground(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IndicatorGetStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IndicatorSetForeground(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IndicatorSetStyle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertText(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertTextRaw(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LineCopy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LineCut(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LineDelete(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LineDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LineDownExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LineDownRectExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LineDuplicate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LineEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LineEndDisplay(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LineEndDisplayExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LineEndExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LineEndRectExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LineEndWrap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LineEndWrapExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LineFromPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LineLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LineScroll(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LineScrollDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LineScrollUp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LineTranspose(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LineUp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LineUpExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LineUpRectExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LinesJoin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LinesOnScreen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LinesSplit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadFile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LowerCase(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MarkerAdd(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MarkerAddSet(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MarkerDefine(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MarkerDefineBitmap(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MarkerDelete(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MarkerDeleteAll(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MarkerDeleteHandle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MarkerGet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MarkerLineFromHandle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MarkerNext(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MarkerPrevious(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MarkerSetAlpha(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MarkerSetBackground(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MarkerSetForeground(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveCaretInsideView(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_NewLine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PageDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PageDownExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PageDownRectExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PageUp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PageUpExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PageUpRectExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ParaDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ParaDownExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ParaUp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ParaUpExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Paste(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PointFromPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PositionAfter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PositionBefore(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PositionFromLine(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PositionFromPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PositionFromPointClose(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Redo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RegisterImage(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ReleaseDocument(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ReplaceSelection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ReplaceTarget(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ReplaceTargetRE(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SaveFile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScrollToColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScrollToLine(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SearchAnchor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SearchInTarget(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SearchNext(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SearchPrev(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SelectAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SelectionDuplicate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SelectionIsRectangle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAnchor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBackSpaceUnIndents(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCaretForeground(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCaretLineBackAlpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCaretLineBackground(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCaretLineVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCaretPeriod(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCaretSticky(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCaretWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCharsDefault(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCodePage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetControlCharSymbol(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCurrentPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDocPointer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetEOLMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetEdgeColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetEdgeColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetEdgeMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetEndAtLastLine(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFoldExpanded(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFoldFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFoldLevel(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFoldMarginColour(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFoldMarginHiColour(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetHScrollBar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetHighlightGuide(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetHotspotActiveBackground(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetHotspotActiveForeground(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetHotspotActiveUnderline(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetHotspotSingleLine(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetIndent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetIndentationGuides(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetKeyWords(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLastKeydownProcessed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLayoutCache(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLexer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLexerLanguage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLineIndentation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLineState(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMarginLeft(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMarginMask(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMarginRight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMarginSensitive(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMarginType(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMarginWidth(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMargins(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetModEventMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMouseDownCaptures(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMouseDwellTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetOvertype(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPasteConvertEndings(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPrintColourMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPrintMagnification(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPrintWrapMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetProperty(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetReadOnly(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSTCCursor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSTCFocus(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSavePoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetScrollWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSearchFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelAlpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelBackground(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelForeground(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelection(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelectionEnd(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelectionMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelectionStart(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStatus(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStyleBits(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStyleBytes(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStyling(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTabIndents(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTabWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTargetEnd(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTargetStart(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTextRaw(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTwoPhaseDraw(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetUndoCollection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetUseAntiAliasing(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetUseHorizontalScrollBar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetUseTabs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetUseVerticalScrollBar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVScrollBar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetViewEOL(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetViewWhiteSpace(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVisiblePolicy(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWhitespaceBackground(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWhitespaceChars(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWhitespaceForeground(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWhitespaceSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetWhitespaceSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetWordChars(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWrapMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWrapStartIndent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWrapVisualFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWrapVisualFlagsLocation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetXCaretPolicy(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetXOffset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetYCaretPolicy(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetZoom(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowLines(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StartRecord(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_StartStyling(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StopRecord(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_StutteredPageDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_StutteredPageDownExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_StutteredPageUp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_StutteredPageUpExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_StyleClearAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_StyleResetDefault(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_StyleSetBackground(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StyleSetBold(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StyleSetCase(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StyleSetChangeable(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StyleSetCharacterSet(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StyleSetEOLFilled(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StyleSetFaceName(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StyleSetFont(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StyleSetFontAttr(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>8 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
		if( lua_isboolean(L,7)==0 ) return false;
		if( luatop>7 && (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StyleSetFontEncoding(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StyleSetForeground(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StyleSetHotSpot(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StyleSetItalic(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StyleSetSize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StyleSetSpec(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StyleSetUnderline(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StyleSetVisible(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Tab(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_TargetFromSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_TextHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TextWidth(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ToggleCaretSticky(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToggleFold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Undo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_UpperCase(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_UsePopUp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UserListShow(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_VCHome(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_VCHomeExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_VCHomeRectExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_VCHomeWrap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_VCHomeWrapExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_VisibleFromDocLine(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WordEndPosition(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WordLeft(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_WordLeftEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_WordLeftEndExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_WordLeftExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_WordPartLeft(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_WordPartLeftExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_WordPartRight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_WordPartRightExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_WordRight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_WordRightEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_WordRightEndExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_WordRightExtend(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_WordStartPosition(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WrapCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ZoomIn(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ZoomOut(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetWrapIndentMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetWrapIndentMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFirstVisibleLine(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CopyAllowLine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCharacterPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetKeysUnicode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetKeysUnicode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IndicatorSetAlpha(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IndicatorGetAlpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetExtraAscent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetExtraAscent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetExtraDescent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetExtraDescent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMarkerSymbolDefined(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MarginSetText(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MarginGetText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MarginSetStyle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MarginGetStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MarginSetStyles(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MarginGetStyles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MarginTextClearAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MarginSetStyleOffset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MarginGetStyleOffset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AnnotationSetText(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AnnotationGetText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AnnotationSetStyle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AnnotationGetStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AnnotationSetStyles(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AnnotationGetStyles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AnnotationGetLines(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AnnotationClearAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AnnotationSetVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AnnotationGetVisible(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AnnotationSetStyleOffset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AnnotationGetStyleOffset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AddUndoAction(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CharPositionFromPoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CharPositionFromPointClose(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMultipleSelection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMultipleSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAdditionalSelectionTyping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAdditionalSelectionTyping(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAdditionalCaretsBlink(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAdditionalCaretsBlink(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAdditionalCaretsVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAdditionalCaretsVisible(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelections(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ClearSelections(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AddSelection(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMainSelection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMainSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetSelectionNCaret(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSelectionNCaret(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelectionNAnchor(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSelectionNAnchor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelectionNCaretVirtualSpace(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSelectionNCaretVirtualSpace(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelectionNAnchorVirtualSpace(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSelectionNAnchorVirtualSpace(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelectionNStart(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSelectionNStart(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelectionNEnd(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSelectionNEnd(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRectangularSelectionCaret(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRectangularSelectionCaret(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetRectangularSelectionAnchor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRectangularSelectionAnchor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetRectangularSelectionCaretVirtualSpace(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRectangularSelectionCaretVirtualSpace(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetRectangularSelectionAnchorVirtualSpace(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRectangularSelectionAnchorVirtualSpace(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetVirtualSpaceOptions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetVirtualSpaceOptions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetRectangularSelectionModifier(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRectangularSelectionModifier(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAdditionalSelForeground(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAdditionalSelBackground(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAdditionalSelAlpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAdditionalSelAlpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAdditionalCaretForeground(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAdditionalCaretForeground(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RotateSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SwapMainAnchorCaret(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxStyledTextCtrl::wxStyledTextCtrl(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxSTCNameStr)
	static wxStyledTextCtrl* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStyledTextCtrl::wxStyledTextCtrl(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxSTCNameStr) function, expected prototype:\nwxStyledTextCtrl::wxStyledTextCtrl(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxSTCNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=luatop>1 ? (int)lua_tointeger(L,2) : wxID_ANY;
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxStyledTextCtrl::wxStyledTextCtrl function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxStyledTextCtrl::wxStyledTextCtrl function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : wxDefaultSize;
		long style=luatop>4 ? (long)lua_tointeger(L,5) : 0;
		wxString name(lua_tostring(L,6),lua_objlen(L,6));

		return new wxStyledTextCtrl(parent, id, pos, size, style, name);
	}


	// Function binds:
	// void wxStyledTextCtrl::AddRefDocument(void * docPointer)
	static int _bind_AddRefDocument(lua_State *L) {
		if (!_lg_typecheck_AddRefDocument(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::AddRefDocument(void * docPointer) function, expected prototype:\nvoid wxStyledTextCtrl::AddRefDocument(void * docPointer)\nClass arguments details:\n");
		}

		void* docPointer=(Luna< void >::check(L,2));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::AddRefDocument(void *)");
		}
		self->AddRefDocument(docPointer);

		return 0;
	}

	// void wxStyledTextCtrl::AddText(const wxString & text)
	static int _bind_AddText(lua_State *L) {
		if (!_lg_typecheck_AddText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::AddText(const wxString & text) function, expected prototype:\nvoid wxStyledTextCtrl::AddText(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::AddText(const wxString &)");
		}
		self->AddText(text);

		return 0;
	}

	// void wxStyledTextCtrl::AddTextRaw(const char * text)
	static int _bind_AddTextRaw(lua_State *L) {
		if (!_lg_typecheck_AddTextRaw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::AddTextRaw(const char * text) function, expected prototype:\nvoid wxStyledTextCtrl::AddTextRaw(const char * text)\nClass arguments details:\n");
		}

		const char * text=(const char *)lua_tostring(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::AddTextRaw(const char *)");
		}
		self->AddTextRaw(text);

		return 0;
	}

	// void wxStyledTextCtrl::Allocate(int bytes)
	static int _bind_Allocate(lua_State *L) {
		if (!_lg_typecheck_Allocate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::Allocate(int bytes) function, expected prototype:\nvoid wxStyledTextCtrl::Allocate(int bytes)\nClass arguments details:\n");
		}

		int bytes=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::Allocate(int)");
		}
		self->Allocate(bytes);

		return 0;
	}

	// void wxStyledTextCtrl::AppendText(const wxString & text)
	static int _bind_AppendText(lua_State *L) {
		if (!_lg_typecheck_AppendText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::AppendText(const wxString & text) function, expected prototype:\nvoid wxStyledTextCtrl::AppendText(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::AppendText(const wxString &)");
		}
		self->AppendText(text);

		return 0;
	}

	// void wxStyledTextCtrl::AppendTextRaw(const char * text)
	static int _bind_AppendTextRaw(lua_State *L) {
		if (!_lg_typecheck_AppendTextRaw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::AppendTextRaw(const char * text) function, expected prototype:\nvoid wxStyledTextCtrl::AppendTextRaw(const char * text)\nClass arguments details:\n");
		}

		const char * text=(const char *)lua_tostring(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::AppendTextRaw(const char *)");
		}
		self->AppendTextRaw(text);

		return 0;
	}

	// bool wxStyledTextCtrl::AutoCompActive()
	static int _bind_AutoCompActive(lua_State *L) {
		if (!_lg_typecheck_AutoCompActive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::AutoCompActive() function, expected prototype:\nbool wxStyledTextCtrl::AutoCompActive()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::AutoCompActive()");
		}
		bool lret = self->AutoCompActive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxStyledTextCtrl::AutoCompCancel()
	static int _bind_AutoCompCancel(lua_State *L) {
		if (!_lg_typecheck_AutoCompCancel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::AutoCompCancel() function, expected prototype:\nvoid wxStyledTextCtrl::AutoCompCancel()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::AutoCompCancel()");
		}
		self->AutoCompCancel();

		return 0;
	}

	// void wxStyledTextCtrl::AutoCompComplete()
	static int _bind_AutoCompComplete(lua_State *L) {
		if (!_lg_typecheck_AutoCompComplete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::AutoCompComplete() function, expected prototype:\nvoid wxStyledTextCtrl::AutoCompComplete()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::AutoCompComplete()");
		}
		self->AutoCompComplete();

		return 0;
	}

	// bool wxStyledTextCtrl::AutoCompGetAutoHide() const
	static int _bind_AutoCompGetAutoHide(lua_State *L) {
		if (!_lg_typecheck_AutoCompGetAutoHide(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::AutoCompGetAutoHide() const function, expected prototype:\nbool wxStyledTextCtrl::AutoCompGetAutoHide() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::AutoCompGetAutoHide() const");
		}
		bool lret = self->AutoCompGetAutoHide();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStyledTextCtrl::AutoCompGetCancelAtStart() const
	static int _bind_AutoCompGetCancelAtStart(lua_State *L) {
		if (!_lg_typecheck_AutoCompGetCancelAtStart(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::AutoCompGetCancelAtStart() const function, expected prototype:\nbool wxStyledTextCtrl::AutoCompGetCancelAtStart() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::AutoCompGetCancelAtStart() const");
		}
		bool lret = self->AutoCompGetCancelAtStart();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStyledTextCtrl::AutoCompGetChooseSingle() const
	static int _bind_AutoCompGetChooseSingle(lua_State *L) {
		if (!_lg_typecheck_AutoCompGetChooseSingle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::AutoCompGetChooseSingle() const function, expected prototype:\nbool wxStyledTextCtrl::AutoCompGetChooseSingle() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::AutoCompGetChooseSingle() const");
		}
		bool lret = self->AutoCompGetChooseSingle();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxStyledTextCtrl::AutoCompGetCurrent()
	static int _bind_AutoCompGetCurrent(lua_State *L) {
		if (!_lg_typecheck_AutoCompGetCurrent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::AutoCompGetCurrent() function, expected prototype:\nint wxStyledTextCtrl::AutoCompGetCurrent()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::AutoCompGetCurrent()");
		}
		int lret = self->AutoCompGetCurrent();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxStyledTextCtrl::AutoCompGetDropRestOfWord() const
	static int _bind_AutoCompGetDropRestOfWord(lua_State *L) {
		if (!_lg_typecheck_AutoCompGetDropRestOfWord(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::AutoCompGetDropRestOfWord() const function, expected prototype:\nbool wxStyledTextCtrl::AutoCompGetDropRestOfWord() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::AutoCompGetDropRestOfWord() const");
		}
		bool lret = self->AutoCompGetDropRestOfWord();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStyledTextCtrl::AutoCompGetIgnoreCase() const
	static int _bind_AutoCompGetIgnoreCase(lua_State *L) {
		if (!_lg_typecheck_AutoCompGetIgnoreCase(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::AutoCompGetIgnoreCase() const function, expected prototype:\nbool wxStyledTextCtrl::AutoCompGetIgnoreCase() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::AutoCompGetIgnoreCase() const");
		}
		bool lret = self->AutoCompGetIgnoreCase();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxStyledTextCtrl::AutoCompGetMaxHeight() const
	static int _bind_AutoCompGetMaxHeight(lua_State *L) {
		if (!_lg_typecheck_AutoCompGetMaxHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::AutoCompGetMaxHeight() const function, expected prototype:\nint wxStyledTextCtrl::AutoCompGetMaxHeight() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::AutoCompGetMaxHeight() const");
		}
		int lret = self->AutoCompGetMaxHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::AutoCompGetMaxWidth() const
	static int _bind_AutoCompGetMaxWidth(lua_State *L) {
		if (!_lg_typecheck_AutoCompGetMaxWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::AutoCompGetMaxWidth() const function, expected prototype:\nint wxStyledTextCtrl::AutoCompGetMaxWidth() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::AutoCompGetMaxWidth() const");
		}
		int lret = self->AutoCompGetMaxWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::AutoCompGetSeparator() const
	static int _bind_AutoCompGetSeparator(lua_State *L) {
		if (!_lg_typecheck_AutoCompGetSeparator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::AutoCompGetSeparator() const function, expected prototype:\nint wxStyledTextCtrl::AutoCompGetSeparator() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::AutoCompGetSeparator() const");
		}
		int lret = self->AutoCompGetSeparator();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::AutoCompGetTypeSeparator() const
	static int _bind_AutoCompGetTypeSeparator(lua_State *L) {
		if (!_lg_typecheck_AutoCompGetTypeSeparator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::AutoCompGetTypeSeparator() const function, expected prototype:\nint wxStyledTextCtrl::AutoCompGetTypeSeparator() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::AutoCompGetTypeSeparator() const");
		}
		int lret = self->AutoCompGetTypeSeparator();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::AutoCompPosStart()
	static int _bind_AutoCompPosStart(lua_State *L) {
		if (!_lg_typecheck_AutoCompPosStart(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::AutoCompPosStart() function, expected prototype:\nint wxStyledTextCtrl::AutoCompPosStart()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::AutoCompPosStart()");
		}
		int lret = self->AutoCompPosStart();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::AutoCompSelect(const wxString & text)
	static int _bind_AutoCompSelect(lua_State *L) {
		if (!_lg_typecheck_AutoCompSelect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::AutoCompSelect(const wxString & text) function, expected prototype:\nvoid wxStyledTextCtrl::AutoCompSelect(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::AutoCompSelect(const wxString &)");
		}
		self->AutoCompSelect(text);

		return 0;
	}

	// void wxStyledTextCtrl::AutoCompSetAutoHide(bool autoHide)
	static int _bind_AutoCompSetAutoHide(lua_State *L) {
		if (!_lg_typecheck_AutoCompSetAutoHide(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::AutoCompSetAutoHide(bool autoHide) function, expected prototype:\nvoid wxStyledTextCtrl::AutoCompSetAutoHide(bool autoHide)\nClass arguments details:\n");
		}

		bool autoHide=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::AutoCompSetAutoHide(bool)");
		}
		self->AutoCompSetAutoHide(autoHide);

		return 0;
	}

	// void wxStyledTextCtrl::AutoCompSetCancelAtStart(bool cancel)
	static int _bind_AutoCompSetCancelAtStart(lua_State *L) {
		if (!_lg_typecheck_AutoCompSetCancelAtStart(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::AutoCompSetCancelAtStart(bool cancel) function, expected prototype:\nvoid wxStyledTextCtrl::AutoCompSetCancelAtStart(bool cancel)\nClass arguments details:\n");
		}

		bool cancel=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::AutoCompSetCancelAtStart(bool)");
		}
		self->AutoCompSetCancelAtStart(cancel);

		return 0;
	}

	// void wxStyledTextCtrl::AutoCompSetChooseSingle(bool chooseSingle)
	static int _bind_AutoCompSetChooseSingle(lua_State *L) {
		if (!_lg_typecheck_AutoCompSetChooseSingle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::AutoCompSetChooseSingle(bool chooseSingle) function, expected prototype:\nvoid wxStyledTextCtrl::AutoCompSetChooseSingle(bool chooseSingle)\nClass arguments details:\n");
		}

		bool chooseSingle=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::AutoCompSetChooseSingle(bool)");
		}
		self->AutoCompSetChooseSingle(chooseSingle);

		return 0;
	}

	// void wxStyledTextCtrl::AutoCompSetDropRestOfWord(bool dropRestOfWord)
	static int _bind_AutoCompSetDropRestOfWord(lua_State *L) {
		if (!_lg_typecheck_AutoCompSetDropRestOfWord(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::AutoCompSetDropRestOfWord(bool dropRestOfWord) function, expected prototype:\nvoid wxStyledTextCtrl::AutoCompSetDropRestOfWord(bool dropRestOfWord)\nClass arguments details:\n");
		}

		bool dropRestOfWord=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::AutoCompSetDropRestOfWord(bool)");
		}
		self->AutoCompSetDropRestOfWord(dropRestOfWord);

		return 0;
	}

	// void wxStyledTextCtrl::AutoCompSetFillUps(const wxString & characterSet)
	static int _bind_AutoCompSetFillUps(lua_State *L) {
		if (!_lg_typecheck_AutoCompSetFillUps(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::AutoCompSetFillUps(const wxString & characterSet) function, expected prototype:\nvoid wxStyledTextCtrl::AutoCompSetFillUps(const wxString & characterSet)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString characterSet(lua_tostring(L,2),lua_objlen(L,2));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::AutoCompSetFillUps(const wxString &)");
		}
		self->AutoCompSetFillUps(characterSet);

		return 0;
	}

	// void wxStyledTextCtrl::AutoCompSetIgnoreCase(bool ignoreCase)
	static int _bind_AutoCompSetIgnoreCase(lua_State *L) {
		if (!_lg_typecheck_AutoCompSetIgnoreCase(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::AutoCompSetIgnoreCase(bool ignoreCase) function, expected prototype:\nvoid wxStyledTextCtrl::AutoCompSetIgnoreCase(bool ignoreCase)\nClass arguments details:\n");
		}

		bool ignoreCase=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::AutoCompSetIgnoreCase(bool)");
		}
		self->AutoCompSetIgnoreCase(ignoreCase);

		return 0;
	}

	// void wxStyledTextCtrl::AutoCompSetMaxHeight(int rowCount)
	static int _bind_AutoCompSetMaxHeight(lua_State *L) {
		if (!_lg_typecheck_AutoCompSetMaxHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::AutoCompSetMaxHeight(int rowCount) function, expected prototype:\nvoid wxStyledTextCtrl::AutoCompSetMaxHeight(int rowCount)\nClass arguments details:\n");
		}

		int rowCount=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::AutoCompSetMaxHeight(int)");
		}
		self->AutoCompSetMaxHeight(rowCount);

		return 0;
	}

	// void wxStyledTextCtrl::AutoCompSetMaxWidth(int characterCount)
	static int _bind_AutoCompSetMaxWidth(lua_State *L) {
		if (!_lg_typecheck_AutoCompSetMaxWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::AutoCompSetMaxWidth(int characterCount) function, expected prototype:\nvoid wxStyledTextCtrl::AutoCompSetMaxWidth(int characterCount)\nClass arguments details:\n");
		}

		int characterCount=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::AutoCompSetMaxWidth(int)");
		}
		self->AutoCompSetMaxWidth(characterCount);

		return 0;
	}

	// void wxStyledTextCtrl::AutoCompSetSeparator(int separatorCharacter)
	static int _bind_AutoCompSetSeparator(lua_State *L) {
		if (!_lg_typecheck_AutoCompSetSeparator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::AutoCompSetSeparator(int separatorCharacter) function, expected prototype:\nvoid wxStyledTextCtrl::AutoCompSetSeparator(int separatorCharacter)\nClass arguments details:\n");
		}

		int separatorCharacter=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::AutoCompSetSeparator(int)");
		}
		self->AutoCompSetSeparator(separatorCharacter);

		return 0;
	}

	// void wxStyledTextCtrl::AutoCompSetTypeSeparator(int separatorCharacter)
	static int _bind_AutoCompSetTypeSeparator(lua_State *L) {
		if (!_lg_typecheck_AutoCompSetTypeSeparator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::AutoCompSetTypeSeparator(int separatorCharacter) function, expected prototype:\nvoid wxStyledTextCtrl::AutoCompSetTypeSeparator(int separatorCharacter)\nClass arguments details:\n");
		}

		int separatorCharacter=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::AutoCompSetTypeSeparator(int)");
		}
		self->AutoCompSetTypeSeparator(separatorCharacter);

		return 0;
	}

	// void wxStyledTextCtrl::AutoCompShow(int lenEntered, const wxString & itemList)
	static int _bind_AutoCompShow(lua_State *L) {
		if (!_lg_typecheck_AutoCompShow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::AutoCompShow(int lenEntered, const wxString & itemList) function, expected prototype:\nvoid wxStyledTextCtrl::AutoCompShow(int lenEntered, const wxString & itemList)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int lenEntered=(int)lua_tointeger(L,2);
		wxString itemList(lua_tostring(L,3),lua_objlen(L,3));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::AutoCompShow(int, const wxString &)");
		}
		self->AutoCompShow(lenEntered, itemList);

		return 0;
	}

	// void wxStyledTextCtrl::AutoCompStops(const wxString & characterSet)
	static int _bind_AutoCompStops(lua_State *L) {
		if (!_lg_typecheck_AutoCompStops(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::AutoCompStops(const wxString & characterSet) function, expected prototype:\nvoid wxStyledTextCtrl::AutoCompStops(const wxString & characterSet)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString characterSet(lua_tostring(L,2),lua_objlen(L,2));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::AutoCompStops(const wxString &)");
		}
		self->AutoCompStops(characterSet);

		return 0;
	}

	// void wxStyledTextCtrl::BackTab()
	static int _bind_BackTab(lua_State *L) {
		if (!_lg_typecheck_BackTab(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::BackTab() function, expected prototype:\nvoid wxStyledTextCtrl::BackTab()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::BackTab()");
		}
		self->BackTab();

		return 0;
	}

	// void wxStyledTextCtrl::BeginUndoAction()
	static int _bind_BeginUndoAction(lua_State *L) {
		if (!_lg_typecheck_BeginUndoAction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::BeginUndoAction() function, expected prototype:\nvoid wxStyledTextCtrl::BeginUndoAction()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::BeginUndoAction()");
		}
		self->BeginUndoAction();

		return 0;
	}

	// void wxStyledTextCtrl::BraceBadLight(int pos)
	static int _bind_BraceBadLight(lua_State *L) {
		if (!_lg_typecheck_BraceBadLight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::BraceBadLight(int pos) function, expected prototype:\nvoid wxStyledTextCtrl::BraceBadLight(int pos)\nClass arguments details:\n");
		}

		int pos=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::BraceBadLight(int)");
		}
		self->BraceBadLight(pos);

		return 0;
	}

	// void wxStyledTextCtrl::BraceHighlight(int pos1, int pos2)
	static int _bind_BraceHighlight(lua_State *L) {
		if (!_lg_typecheck_BraceHighlight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::BraceHighlight(int pos1, int pos2) function, expected prototype:\nvoid wxStyledTextCtrl::BraceHighlight(int pos1, int pos2)\nClass arguments details:\n");
		}

		int pos1=(int)lua_tointeger(L,2);
		int pos2=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::BraceHighlight(int, int)");
		}
		self->BraceHighlight(pos1, pos2);

		return 0;
	}

	// int wxStyledTextCtrl::BraceMatch(int pos)
	static int _bind_BraceMatch(lua_State *L) {
		if (!_lg_typecheck_BraceMatch(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::BraceMatch(int pos) function, expected prototype:\nint wxStyledTextCtrl::BraceMatch(int pos)\nClass arguments details:\n");
		}

		int pos=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::BraceMatch(int)");
		}
		int lret = self->BraceMatch(pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxStyledTextCtrl::CallTipActive()
	static int _bind_CallTipActive(lua_State *L) {
		if (!_lg_typecheck_CallTipActive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::CallTipActive() function, expected prototype:\nbool wxStyledTextCtrl::CallTipActive()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::CallTipActive()");
		}
		bool lret = self->CallTipActive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxStyledTextCtrl::CallTipCancel()
	static int _bind_CallTipCancel(lua_State *L) {
		if (!_lg_typecheck_CallTipCancel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::CallTipCancel() function, expected prototype:\nvoid wxStyledTextCtrl::CallTipCancel()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::CallTipCancel()");
		}
		self->CallTipCancel();

		return 0;
	}

	// int wxStyledTextCtrl::CallTipPosAtStart()
	static int _bind_CallTipPosAtStart(lua_State *L) {
		if (!_lg_typecheck_CallTipPosAtStart(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::CallTipPosAtStart() function, expected prototype:\nint wxStyledTextCtrl::CallTipPosAtStart()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::CallTipPosAtStart()");
		}
		int lret = self->CallTipPosAtStart();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::CallTipSetBackground(const wxColour & back)
	static int _bind_CallTipSetBackground(lua_State *L) {
		if (!_lg_typecheck_CallTipSetBackground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::CallTipSetBackground(const wxColour & back) function, expected prototype:\nvoid wxStyledTextCtrl::CallTipSetBackground(const wxColour & back)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* back_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !back_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg back in wxStyledTextCtrl::CallTipSetBackground function");
		}
		const wxColour & back=*back_ptr;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::CallTipSetBackground(const wxColour &)");
		}
		self->CallTipSetBackground(back);

		return 0;
	}

	// void wxStyledTextCtrl::CallTipSetForeground(const wxColour & fore)
	static int _bind_CallTipSetForeground(lua_State *L) {
		if (!_lg_typecheck_CallTipSetForeground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::CallTipSetForeground(const wxColour & fore) function, expected prototype:\nvoid wxStyledTextCtrl::CallTipSetForeground(const wxColour & fore)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* fore_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !fore_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fore in wxStyledTextCtrl::CallTipSetForeground function");
		}
		const wxColour & fore=*fore_ptr;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::CallTipSetForeground(const wxColour &)");
		}
		self->CallTipSetForeground(fore);

		return 0;
	}

	// void wxStyledTextCtrl::CallTipSetForegroundHighlight(const wxColour & fore)
	static int _bind_CallTipSetForegroundHighlight(lua_State *L) {
		if (!_lg_typecheck_CallTipSetForegroundHighlight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::CallTipSetForegroundHighlight(const wxColour & fore) function, expected prototype:\nvoid wxStyledTextCtrl::CallTipSetForegroundHighlight(const wxColour & fore)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* fore_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !fore_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fore in wxStyledTextCtrl::CallTipSetForegroundHighlight function");
		}
		const wxColour & fore=*fore_ptr;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::CallTipSetForegroundHighlight(const wxColour &)");
		}
		self->CallTipSetForegroundHighlight(fore);

		return 0;
	}

	// void wxStyledTextCtrl::CallTipSetHighlight(int start, int end)
	static int _bind_CallTipSetHighlight(lua_State *L) {
		if (!_lg_typecheck_CallTipSetHighlight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::CallTipSetHighlight(int start, int end) function, expected prototype:\nvoid wxStyledTextCtrl::CallTipSetHighlight(int start, int end)\nClass arguments details:\n");
		}

		int start=(int)lua_tointeger(L,2);
		int end=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::CallTipSetHighlight(int, int)");
		}
		self->CallTipSetHighlight(start, end);

		return 0;
	}

	// void wxStyledTextCtrl::CallTipShow(int pos, const wxString & definition)
	static int _bind_CallTipShow(lua_State *L) {
		if (!_lg_typecheck_CallTipShow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::CallTipShow(int pos, const wxString & definition) function, expected prototype:\nvoid wxStyledTextCtrl::CallTipShow(int pos, const wxString & definition)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int pos=(int)lua_tointeger(L,2);
		wxString definition(lua_tostring(L,3),lua_objlen(L,3));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::CallTipShow(int, const wxString &)");
		}
		self->CallTipShow(pos, definition);

		return 0;
	}

	// void wxStyledTextCtrl::CallTipUseStyle(int tabSize)
	static int _bind_CallTipUseStyle(lua_State *L) {
		if (!_lg_typecheck_CallTipUseStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::CallTipUseStyle(int tabSize) function, expected prototype:\nvoid wxStyledTextCtrl::CallTipUseStyle(int tabSize)\nClass arguments details:\n");
		}

		int tabSize=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::CallTipUseStyle(int)");
		}
		self->CallTipUseStyle(tabSize);

		return 0;
	}

	// bool wxStyledTextCtrl::CanPaste() const
	static int _bind_CanPaste(lua_State *L) {
		if (!_lg_typecheck_CanPaste(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::CanPaste() const function, expected prototype:\nbool wxStyledTextCtrl::CanPaste() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::CanPaste() const");
		}
		bool lret = self->CanPaste();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStyledTextCtrl::CanRedo() const
	static int _bind_CanRedo(lua_State *L) {
		if (!_lg_typecheck_CanRedo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::CanRedo() const function, expected prototype:\nbool wxStyledTextCtrl::CanRedo() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::CanRedo() const");
		}
		bool lret = self->CanRedo();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStyledTextCtrl::CanUndo() const
	static int _bind_CanUndo(lua_State *L) {
		if (!_lg_typecheck_CanUndo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::CanUndo() const function, expected prototype:\nbool wxStyledTextCtrl::CanUndo() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::CanUndo() const");
		}
		bool lret = self->CanUndo();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxStyledTextCtrl::Cancel()
	static int _bind_Cancel(lua_State *L) {
		if (!_lg_typecheck_Cancel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::Cancel() function, expected prototype:\nvoid wxStyledTextCtrl::Cancel()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::Cancel()");
		}
		self->Cancel();

		return 0;
	}

	// void wxStyledTextCtrl::CharLeft()
	static int _bind_CharLeft(lua_State *L) {
		if (!_lg_typecheck_CharLeft(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::CharLeft() function, expected prototype:\nvoid wxStyledTextCtrl::CharLeft()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::CharLeft()");
		}
		self->CharLeft();

		return 0;
	}

	// void wxStyledTextCtrl::CharLeftExtend()
	static int _bind_CharLeftExtend(lua_State *L) {
		if (!_lg_typecheck_CharLeftExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::CharLeftExtend() function, expected prototype:\nvoid wxStyledTextCtrl::CharLeftExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::CharLeftExtend()");
		}
		self->CharLeftExtend();

		return 0;
	}

	// void wxStyledTextCtrl::CharLeftRectExtend()
	static int _bind_CharLeftRectExtend(lua_State *L) {
		if (!_lg_typecheck_CharLeftRectExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::CharLeftRectExtend() function, expected prototype:\nvoid wxStyledTextCtrl::CharLeftRectExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::CharLeftRectExtend()");
		}
		self->CharLeftRectExtend();

		return 0;
	}

	// void wxStyledTextCtrl::CharRight()
	static int _bind_CharRight(lua_State *L) {
		if (!_lg_typecheck_CharRight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::CharRight() function, expected prototype:\nvoid wxStyledTextCtrl::CharRight()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::CharRight()");
		}
		self->CharRight();

		return 0;
	}

	// void wxStyledTextCtrl::CharRightExtend()
	static int _bind_CharRightExtend(lua_State *L) {
		if (!_lg_typecheck_CharRightExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::CharRightExtend() function, expected prototype:\nvoid wxStyledTextCtrl::CharRightExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::CharRightExtend()");
		}
		self->CharRightExtend();

		return 0;
	}

	// void wxStyledTextCtrl::CharRightRectExtend()
	static int _bind_CharRightRectExtend(lua_State *L) {
		if (!_lg_typecheck_CharRightRectExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::CharRightRectExtend() function, expected prototype:\nvoid wxStyledTextCtrl::CharRightRectExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::CharRightRectExtend()");
		}
		self->CharRightRectExtend();

		return 0;
	}

	// void wxStyledTextCtrl::ChooseCaretX()
	static int _bind_ChooseCaretX(lua_State *L) {
		if (!_lg_typecheck_ChooseCaretX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::ChooseCaretX() function, expected prototype:\nvoid wxStyledTextCtrl::ChooseCaretX()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::ChooseCaretX()");
		}
		self->ChooseCaretX();

		return 0;
	}

	// void wxStyledTextCtrl::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::Clear() function, expected prototype:\nvoid wxStyledTextCtrl::Clear()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::Clear()");
		}
		self->Clear();

		return 0;
	}

	// void wxStyledTextCtrl::ClearAll()
	static int _bind_ClearAll(lua_State *L) {
		if (!_lg_typecheck_ClearAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::ClearAll() function, expected prototype:\nvoid wxStyledTextCtrl::ClearAll()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::ClearAll()");
		}
		self->ClearAll();

		return 0;
	}

	// void wxStyledTextCtrl::ClearDocumentStyle()
	static int _bind_ClearDocumentStyle(lua_State *L) {
		if (!_lg_typecheck_ClearDocumentStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::ClearDocumentStyle() function, expected prototype:\nvoid wxStyledTextCtrl::ClearDocumentStyle()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::ClearDocumentStyle()");
		}
		self->ClearDocumentStyle();

		return 0;
	}

	// void wxStyledTextCtrl::ClearRegisteredImages()
	static int _bind_ClearRegisteredImages(lua_State *L) {
		if (!_lg_typecheck_ClearRegisteredImages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::ClearRegisteredImages() function, expected prototype:\nvoid wxStyledTextCtrl::ClearRegisteredImages()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::ClearRegisteredImages()");
		}
		self->ClearRegisteredImages();

		return 0;
	}

	// void wxStyledTextCtrl::CmdKeyAssign(int key, int modifiers, int cmd)
	static int _bind_CmdKeyAssign(lua_State *L) {
		if (!_lg_typecheck_CmdKeyAssign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::CmdKeyAssign(int key, int modifiers, int cmd) function, expected prototype:\nvoid wxStyledTextCtrl::CmdKeyAssign(int key, int modifiers, int cmd)\nClass arguments details:\n");
		}

		int key=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int cmd=(int)lua_tointeger(L,4);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::CmdKeyAssign(int, int, int)");
		}
		self->CmdKeyAssign(key, modifiers, cmd);

		return 0;
	}

	// void wxStyledTextCtrl::CmdKeyClear(int key, int modifiers)
	static int _bind_CmdKeyClear(lua_State *L) {
		if (!_lg_typecheck_CmdKeyClear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::CmdKeyClear(int key, int modifiers) function, expected prototype:\nvoid wxStyledTextCtrl::CmdKeyClear(int key, int modifiers)\nClass arguments details:\n");
		}

		int key=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::CmdKeyClear(int, int)");
		}
		self->CmdKeyClear(key, modifiers);

		return 0;
	}

	// void wxStyledTextCtrl::CmdKeyClearAll()
	static int _bind_CmdKeyClearAll(lua_State *L) {
		if (!_lg_typecheck_CmdKeyClearAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::CmdKeyClearAll() function, expected prototype:\nvoid wxStyledTextCtrl::CmdKeyClearAll()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::CmdKeyClearAll()");
		}
		self->CmdKeyClearAll();

		return 0;
	}

	// void wxStyledTextCtrl::CmdKeyExecute(int cmd)
	static int _bind_CmdKeyExecute(lua_State *L) {
		if (!_lg_typecheck_CmdKeyExecute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::CmdKeyExecute(int cmd) function, expected prototype:\nvoid wxStyledTextCtrl::CmdKeyExecute(int cmd)\nClass arguments details:\n");
		}

		int cmd=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::CmdKeyExecute(int)");
		}
		self->CmdKeyExecute(cmd);

		return 0;
	}

	// void wxStyledTextCtrl::Colourise(int start, int end)
	static int _bind_Colourise(lua_State *L) {
		if (!_lg_typecheck_Colourise(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::Colourise(int start, int end) function, expected prototype:\nvoid wxStyledTextCtrl::Colourise(int start, int end)\nClass arguments details:\n");
		}

		int start=(int)lua_tointeger(L,2);
		int end=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::Colourise(int, int)");
		}
		self->Colourise(start, end);

		return 0;
	}

	// void wxStyledTextCtrl::ConvertEOLs(int eolMode)
	static int _bind_ConvertEOLs(lua_State *L) {
		if (!_lg_typecheck_ConvertEOLs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::ConvertEOLs(int eolMode) function, expected prototype:\nvoid wxStyledTextCtrl::ConvertEOLs(int eolMode)\nClass arguments details:\n");
		}

		int eolMode=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::ConvertEOLs(int)");
		}
		self->ConvertEOLs(eolMode);

		return 0;
	}

	// void wxStyledTextCtrl::Copy()
	static int _bind_Copy(lua_State *L) {
		if (!_lg_typecheck_Copy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::Copy() function, expected prototype:\nvoid wxStyledTextCtrl::Copy()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::Copy()");
		}
		self->Copy();

		return 0;
	}

	// void wxStyledTextCtrl::CopyRange(int start, int end)
	static int _bind_CopyRange(lua_State *L) {
		if (!_lg_typecheck_CopyRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::CopyRange(int start, int end) function, expected prototype:\nvoid wxStyledTextCtrl::CopyRange(int start, int end)\nClass arguments details:\n");
		}

		int start=(int)lua_tointeger(L,2);
		int end=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::CopyRange(int, int)");
		}
		self->CopyRange(start, end);

		return 0;
	}

	// void wxStyledTextCtrl::CopyText(int length, const wxString & text)
	static int _bind_CopyText(lua_State *L) {
		if (!_lg_typecheck_CopyText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::CopyText(int length, const wxString & text) function, expected prototype:\nvoid wxStyledTextCtrl::CopyText(int length, const wxString & text)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int length=(int)lua_tointeger(L,2);
		wxString text(lua_tostring(L,3),lua_objlen(L,3));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::CopyText(int, const wxString &)");
		}
		self->CopyText(length, text);

		return 0;
	}

	// bool wxStyledTextCtrl::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxSTCNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxSTCNameStr) function, expected prototype:\nbool wxStyledTextCtrl::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxSTCNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : wxID_ANY;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxStyledTextCtrl::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxStyledTextCtrl::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : 0;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::Create(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)");
		}
		bool lret = self->Create(parent, id, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void * wxStyledTextCtrl::CreateDocument()
	static int _bind_CreateDocument(lua_State *L) {
		if (!_lg_typecheck_CreateDocument(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * wxStyledTextCtrl::CreateDocument() function, expected prototype:\nvoid * wxStyledTextCtrl::CreateDocument()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * wxStyledTextCtrl::CreateDocument()");
		}
		void * lret = self->CreateDocument();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void wxStyledTextCtrl::Cut()
	static int _bind_Cut(lua_State *L) {
		if (!_lg_typecheck_Cut(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::Cut() function, expected prototype:\nvoid wxStyledTextCtrl::Cut()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::Cut()");
		}
		self->Cut();

		return 0;
	}

	// void wxStyledTextCtrl::DelLineLeft()
	static int _bind_DelLineLeft(lua_State *L) {
		if (!_lg_typecheck_DelLineLeft(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::DelLineLeft() function, expected prototype:\nvoid wxStyledTextCtrl::DelLineLeft()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::DelLineLeft()");
		}
		self->DelLineLeft();

		return 0;
	}

	// void wxStyledTextCtrl::DelLineRight()
	static int _bind_DelLineRight(lua_State *L) {
		if (!_lg_typecheck_DelLineRight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::DelLineRight() function, expected prototype:\nvoid wxStyledTextCtrl::DelLineRight()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::DelLineRight()");
		}
		self->DelLineRight();

		return 0;
	}

	// void wxStyledTextCtrl::DelWordLeft()
	static int _bind_DelWordLeft(lua_State *L) {
		if (!_lg_typecheck_DelWordLeft(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::DelWordLeft() function, expected prototype:\nvoid wxStyledTextCtrl::DelWordLeft()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::DelWordLeft()");
		}
		self->DelWordLeft();

		return 0;
	}

	// void wxStyledTextCtrl::DelWordRight()
	static int _bind_DelWordRight(lua_State *L) {
		if (!_lg_typecheck_DelWordRight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::DelWordRight() function, expected prototype:\nvoid wxStyledTextCtrl::DelWordRight()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::DelWordRight()");
		}
		self->DelWordRight();

		return 0;
	}

	// void wxStyledTextCtrl::DeleteBack()
	static int _bind_DeleteBack(lua_State *L) {
		if (!_lg_typecheck_DeleteBack(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::DeleteBack() function, expected prototype:\nvoid wxStyledTextCtrl::DeleteBack()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::DeleteBack()");
		}
		self->DeleteBack();

		return 0;
	}

	// void wxStyledTextCtrl::DeleteBackNotLine()
	static int _bind_DeleteBackNotLine(lua_State *L) {
		if (!_lg_typecheck_DeleteBackNotLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::DeleteBackNotLine() function, expected prototype:\nvoid wxStyledTextCtrl::DeleteBackNotLine()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::DeleteBackNotLine()");
		}
		self->DeleteBackNotLine();

		return 0;
	}

	// wxDragResult wxStyledTextCtrl::DoDragOver(int x, int y, wxDragResult def)
	static int _bind_DoDragOver(lua_State *L) {
		if (!_lg_typecheck_DoDragOver(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDragResult wxStyledTextCtrl::DoDragOver(int x, int y, wxDragResult def) function, expected prototype:\nwxDragResult wxStyledTextCtrl::DoDragOver(int x, int y, wxDragResult def)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		wxDragResult def=(wxDragResult)lua_tointeger(L,4);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDragResult wxStyledTextCtrl::DoDragOver(int, int, wxDragResult)");
		}
		wxDragResult lret = self->DoDragOver(x, y, def);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxStyledTextCtrl::DoDropText(long x, long y, const wxString & data)
	static int _bind_DoDropText(lua_State *L) {
		if (!_lg_typecheck_DoDropText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::DoDropText(long x, long y, const wxString & data) function, expected prototype:\nbool wxStyledTextCtrl::DoDropText(long x, long y, const wxString & data)\nClass arguments details:\narg 3 ID = 88196105\n");
		}

		long x=(long)lua_tointeger(L,2);
		long y=(long)lua_tointeger(L,3);
		wxString data(lua_tostring(L,4),lua_objlen(L,4));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::DoDropText(long, long, const wxString &)");
		}
		bool lret = self->DoDropText(x, y, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxStyledTextCtrl::DocLineFromVisible(int lineDisplay)
	static int _bind_DocLineFromVisible(lua_State *L) {
		if (!_lg_typecheck_DocLineFromVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::DocLineFromVisible(int lineDisplay) function, expected prototype:\nint wxStyledTextCtrl::DocLineFromVisible(int lineDisplay)\nClass arguments details:\n");
		}

		int lineDisplay=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::DocLineFromVisible(int)");
		}
		int lret = self->DocLineFromVisible(lineDisplay);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::DocumentEnd()
	static int _bind_DocumentEnd(lua_State *L) {
		if (!_lg_typecheck_DocumentEnd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::DocumentEnd() function, expected prototype:\nvoid wxStyledTextCtrl::DocumentEnd()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::DocumentEnd()");
		}
		self->DocumentEnd();

		return 0;
	}

	// void wxStyledTextCtrl::DocumentEndExtend()
	static int _bind_DocumentEndExtend(lua_State *L) {
		if (!_lg_typecheck_DocumentEndExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::DocumentEndExtend() function, expected prototype:\nvoid wxStyledTextCtrl::DocumentEndExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::DocumentEndExtend()");
		}
		self->DocumentEndExtend();

		return 0;
	}

	// void wxStyledTextCtrl::DocumentStart()
	static int _bind_DocumentStart(lua_State *L) {
		if (!_lg_typecheck_DocumentStart(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::DocumentStart() function, expected prototype:\nvoid wxStyledTextCtrl::DocumentStart()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::DocumentStart()");
		}
		self->DocumentStart();

		return 0;
	}

	// void wxStyledTextCtrl::DocumentStartExtend()
	static int _bind_DocumentStartExtend(lua_State *L) {
		if (!_lg_typecheck_DocumentStartExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::DocumentStartExtend() function, expected prototype:\nvoid wxStyledTextCtrl::DocumentStartExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::DocumentStartExtend()");
		}
		self->DocumentStartExtend();

		return 0;
	}

	// void wxStyledTextCtrl::EditToggleOvertype()
	static int _bind_EditToggleOvertype(lua_State *L) {
		if (!_lg_typecheck_EditToggleOvertype(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::EditToggleOvertype() function, expected prototype:\nvoid wxStyledTextCtrl::EditToggleOvertype()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::EditToggleOvertype()");
		}
		self->EditToggleOvertype();

		return 0;
	}

	// void wxStyledTextCtrl::EndUndoAction()
	static int _bind_EndUndoAction(lua_State *L) {
		if (!_lg_typecheck_EndUndoAction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::EndUndoAction() function, expected prototype:\nvoid wxStyledTextCtrl::EndUndoAction()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::EndUndoAction()");
		}
		self->EndUndoAction();

		return 0;
	}

	// void wxStyledTextCtrl::EnsureCaretVisible()
	static int _bind_EnsureCaretVisible(lua_State *L) {
		if (!_lg_typecheck_EnsureCaretVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::EnsureCaretVisible() function, expected prototype:\nvoid wxStyledTextCtrl::EnsureCaretVisible()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::EnsureCaretVisible()");
		}
		self->EnsureCaretVisible();

		return 0;
	}

	// void wxStyledTextCtrl::EnsureVisible(int line)
	static int _bind_EnsureVisible(lua_State *L) {
		if (!_lg_typecheck_EnsureVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::EnsureVisible(int line) function, expected prototype:\nvoid wxStyledTextCtrl::EnsureVisible(int line)\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::EnsureVisible(int)");
		}
		self->EnsureVisible(line);

		return 0;
	}

	// void wxStyledTextCtrl::EnsureVisibleEnforcePolicy(int line)
	static int _bind_EnsureVisibleEnforcePolicy(lua_State *L) {
		if (!_lg_typecheck_EnsureVisibleEnforcePolicy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::EnsureVisibleEnforcePolicy(int line) function, expected prototype:\nvoid wxStyledTextCtrl::EnsureVisibleEnforcePolicy(int line)\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::EnsureVisibleEnforcePolicy(int)");
		}
		self->EnsureVisibleEnforcePolicy(line);

		return 0;
	}

	// int wxStyledTextCtrl::FindColumn(int line, int column)
	static int _bind_FindColumn(lua_State *L) {
		if (!_lg_typecheck_FindColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::FindColumn(int line, int column) function, expected prototype:\nint wxStyledTextCtrl::FindColumn(int line, int column)\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);
		int column=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::FindColumn(int, int)");
		}
		int lret = self->FindColumn(line, column);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::FindText(int minPos, int maxPos, const wxString & text, int flags = 0)
	static int _bind_FindText(lua_State *L) {
		if (!_lg_typecheck_FindText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::FindText(int minPos, int maxPos, const wxString & text, int flags = 0) function, expected prototype:\nint wxStyledTextCtrl::FindText(int minPos, int maxPos, const wxString & text, int flags = 0)\nClass arguments details:\narg 3 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		int minPos=(int)lua_tointeger(L,2);
		int maxPos=(int)lua_tointeger(L,3);
		wxString text(lua_tostring(L,4),lua_objlen(L,4));
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : 0;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::FindText(int, int, const wxString &, int)");
		}
		int lret = self->FindText(minPos, maxPos, text, flags);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::FormFeed()
	static int _bind_FormFeed(lua_State *L) {
		if (!_lg_typecheck_FormFeed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::FormFeed() function, expected prototype:\nvoid wxStyledTextCtrl::FormFeed()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::FormFeed()");
		}
		self->FormFeed();

		return 0;
	}

	// int wxStyledTextCtrl::FormatRange(bool doDraw, int startPos, int endPos, wxDC * draw, wxDC * target, wxRect renderRect, wxRect pageRect)
	static int _bind_FormatRange(lua_State *L) {
		if (!_lg_typecheck_FormatRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::FormatRange(bool doDraw, int startPos, int endPos, wxDC * draw, wxDC * target, wxRect renderRect, wxRect pageRect) function, expected prototype:\nint wxStyledTextCtrl::FormatRange(bool doDraw, int startPos, int endPos, wxDC * draw, wxDC * target, wxRect renderRect, wxRect pageRect)\nClass arguments details:\narg 4 ID = 56813631\narg 5 ID = 56813631\narg 6 ID = 20234418\narg 7 ID = 20234418\n");
		}

		bool doDraw=(bool)(lua_toboolean(L,2)==1);
		int startPos=(int)lua_tointeger(L,3);
		int endPos=(int)lua_tointeger(L,4);
		wxDC* draw=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,5));
		wxDC* target=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,6));
		wxRect* renderRect_ptr=(Luna< wxRect >::check(L,7));
		if( !renderRect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderRect in wxStyledTextCtrl::FormatRange function");
		}
		wxRect renderRect=*renderRect_ptr;
		wxRect* pageRect_ptr=(Luna< wxRect >::check(L,8));
		if( !pageRect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pageRect in wxStyledTextCtrl::FormatRange function");
		}
		wxRect pageRect=*pageRect_ptr;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::FormatRange(bool, int, int, wxDC *, wxDC *, wxRect, wxRect)");
		}
		int lret = self->FormatRange(doDraw, startPos, endPos, draw, target, renderRect, pageRect);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetAnchor() const
	static int _bind_GetAnchor(lua_State *L) {
		if (!_lg_typecheck_GetAnchor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetAnchor() const function, expected prototype:\nint wxStyledTextCtrl::GetAnchor() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetAnchor() const");
		}
		int lret = self->GetAnchor();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxStyledTextCtrl::GetBackSpaceUnIndents() const
	static int _bind_GetBackSpaceUnIndents(lua_State *L) {
		if (!_lg_typecheck_GetBackSpaceUnIndents(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::GetBackSpaceUnIndents() const function, expected prototype:\nbool wxStyledTextCtrl::GetBackSpaceUnIndents() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::GetBackSpaceUnIndents() const");
		}
		bool lret = self->GetBackSpaceUnIndents();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxColour wxStyledTextCtrl::GetCaretForeground() const
	static int _bind_GetCaretForeground(lua_State *L) {
		if (!_lg_typecheck_GetCaretForeground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxStyledTextCtrl::GetCaretForeground() const function, expected prototype:\nwxColour wxStyledTextCtrl::GetCaretForeground() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxStyledTextCtrl::GetCaretForeground() const");
		}
		wxColour stack_lret = self->GetCaretForeground();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// int wxStyledTextCtrl::GetCaretLineBackAlpha() const
	static int _bind_GetCaretLineBackAlpha(lua_State *L) {
		if (!_lg_typecheck_GetCaretLineBackAlpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetCaretLineBackAlpha() const function, expected prototype:\nint wxStyledTextCtrl::GetCaretLineBackAlpha() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetCaretLineBackAlpha() const");
		}
		int lret = self->GetCaretLineBackAlpha();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxColour wxStyledTextCtrl::GetCaretLineBackground() const
	static int _bind_GetCaretLineBackground(lua_State *L) {
		if (!_lg_typecheck_GetCaretLineBackground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxStyledTextCtrl::GetCaretLineBackground() const function, expected prototype:\nwxColour wxStyledTextCtrl::GetCaretLineBackground() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxStyledTextCtrl::GetCaretLineBackground() const");
		}
		wxColour stack_lret = self->GetCaretLineBackground();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// bool wxStyledTextCtrl::GetCaretLineVisible() const
	static int _bind_GetCaretLineVisible(lua_State *L) {
		if (!_lg_typecheck_GetCaretLineVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::GetCaretLineVisible() const function, expected prototype:\nbool wxStyledTextCtrl::GetCaretLineVisible() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::GetCaretLineVisible() const");
		}
		bool lret = self->GetCaretLineVisible();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxStyledTextCtrl::GetCaretPeriod() const
	static int _bind_GetCaretPeriod(lua_State *L) {
		if (!_lg_typecheck_GetCaretPeriod(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetCaretPeriod() const function, expected prototype:\nint wxStyledTextCtrl::GetCaretPeriod() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetCaretPeriod() const");
		}
		int lret = self->GetCaretPeriod();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxStyledTextCtrl::GetCaretSticky() const
	static int _bind_GetCaretSticky(lua_State *L) {
		if (!_lg_typecheck_GetCaretSticky(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::GetCaretSticky() const function, expected prototype:\nbool wxStyledTextCtrl::GetCaretSticky() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::GetCaretSticky() const");
		}
		bool lret = self->GetCaretSticky();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxStyledTextCtrl::GetCaretWidth() const
	static int _bind_GetCaretWidth(lua_State *L) {
		if (!_lg_typecheck_GetCaretWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetCaretWidth() const function, expected prototype:\nint wxStyledTextCtrl::GetCaretWidth() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetCaretWidth() const");
		}
		int lret = self->GetCaretWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetCharAt(int pos) const
	static int _bind_GetCharAt(lua_State *L) {
		if (!_lg_typecheck_GetCharAt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetCharAt(int pos) const function, expected prototype:\nint wxStyledTextCtrl::GetCharAt(int pos) const\nClass arguments details:\n");
		}

		int pos=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetCharAt(int) const");
		}
		int lret = self->GetCharAt(pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetCodePage() const
	static int _bind_GetCodePage(lua_State *L) {
		if (!_lg_typecheck_GetCodePage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetCodePage() const function, expected prototype:\nint wxStyledTextCtrl::GetCodePage() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetCodePage() const");
		}
		int lret = self->GetCodePage();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetColumn(int pos) const
	static int _bind_GetColumn(lua_State *L) {
		if (!_lg_typecheck_GetColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetColumn(int pos) const function, expected prototype:\nint wxStyledTextCtrl::GetColumn(int pos) const\nClass arguments details:\n");
		}

		int pos=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetColumn(int) const");
		}
		int lret = self->GetColumn(pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetControlCharSymbol() const
	static int _bind_GetControlCharSymbol(lua_State *L) {
		if (!_lg_typecheck_GetControlCharSymbol(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetControlCharSymbol() const function, expected prototype:\nint wxStyledTextCtrl::GetControlCharSymbol() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetControlCharSymbol() const");
		}
		int lret = self->GetControlCharSymbol();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxStyledTextCtrl::GetCurLine(int * linePos = NULL)
	static int _bind_GetCurLine(lua_State *L) {
		if (!_lg_typecheck_GetCurLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxStyledTextCtrl::GetCurLine(int * linePos = NULL) function, expected prototype:\nwxString wxStyledTextCtrl::GetCurLine(int * linePos = NULL)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int linePos=luatop>1 ? (int)lua_tointeger(L,2) : NULL;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxStyledTextCtrl::GetCurLine(int *)");
		}
		wxString lret = self->GetCurLine(&linePos);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxStyledTextCtrl::GetCurrentLine()
	static int _bind_GetCurrentLine(lua_State *L) {
		if (!_lg_typecheck_GetCurrentLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetCurrentLine() function, expected prototype:\nint wxStyledTextCtrl::GetCurrentLine()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetCurrentLine()");
		}
		int lret = self->GetCurrentLine();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetCurrentPos() const
	static int _bind_GetCurrentPos(lua_State *L) {
		if (!_lg_typecheck_GetCurrentPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetCurrentPos() const function, expected prototype:\nint wxStyledTextCtrl::GetCurrentPos() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetCurrentPos() const");
		}
		int lret = self->GetCurrentPos();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void * wxStyledTextCtrl::GetDocPointer()
	static int _bind_GetDocPointer(lua_State *L) {
		if (!_lg_typecheck_GetDocPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * wxStyledTextCtrl::GetDocPointer() function, expected prototype:\nvoid * wxStyledTextCtrl::GetDocPointer()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * wxStyledTextCtrl::GetDocPointer()");
		}
		void * lret = self->GetDocPointer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// int wxStyledTextCtrl::GetEOLMode() const
	static int _bind_GetEOLMode(lua_State *L) {
		if (!_lg_typecheck_GetEOLMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetEOLMode() const function, expected prototype:\nint wxStyledTextCtrl::GetEOLMode() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetEOLMode() const");
		}
		int lret = self->GetEOLMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxColour wxStyledTextCtrl::GetEdgeColour() const
	static int _bind_GetEdgeColour(lua_State *L) {
		if (!_lg_typecheck_GetEdgeColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxStyledTextCtrl::GetEdgeColour() const function, expected prototype:\nwxColour wxStyledTextCtrl::GetEdgeColour() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxStyledTextCtrl::GetEdgeColour() const");
		}
		wxColour stack_lret = self->GetEdgeColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// int wxStyledTextCtrl::GetEdgeColumn() const
	static int _bind_GetEdgeColumn(lua_State *L) {
		if (!_lg_typecheck_GetEdgeColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetEdgeColumn() const function, expected prototype:\nint wxStyledTextCtrl::GetEdgeColumn() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetEdgeColumn() const");
		}
		int lret = self->GetEdgeColumn();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetEdgeMode() const
	static int _bind_GetEdgeMode(lua_State *L) {
		if (!_lg_typecheck_GetEdgeMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetEdgeMode() const function, expected prototype:\nint wxStyledTextCtrl::GetEdgeMode() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetEdgeMode() const");
		}
		int lret = self->GetEdgeMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxStyledTextCtrl::GetEndAtLastLine() const
	static int _bind_GetEndAtLastLine(lua_State *L) {
		if (!_lg_typecheck_GetEndAtLastLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::GetEndAtLastLine() const function, expected prototype:\nbool wxStyledTextCtrl::GetEndAtLastLine() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::GetEndAtLastLine() const");
		}
		bool lret = self->GetEndAtLastLine();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxStyledTextCtrl::GetEndStyled() const
	static int _bind_GetEndStyled(lua_State *L) {
		if (!_lg_typecheck_GetEndStyled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetEndStyled() const function, expected prototype:\nint wxStyledTextCtrl::GetEndStyled() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetEndStyled() const");
		}
		int lret = self->GetEndStyled();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetFirstVisibleLine() const
	static int _bind_GetFirstVisibleLine(lua_State *L) {
		if (!_lg_typecheck_GetFirstVisibleLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetFirstVisibleLine() const function, expected prototype:\nint wxStyledTextCtrl::GetFirstVisibleLine() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetFirstVisibleLine() const");
		}
		int lret = self->GetFirstVisibleLine();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxStyledTextCtrl::GetFoldExpanded(int line) const
	static int _bind_GetFoldExpanded(lua_State *L) {
		if (!_lg_typecheck_GetFoldExpanded(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::GetFoldExpanded(int line) const function, expected prototype:\nbool wxStyledTextCtrl::GetFoldExpanded(int line) const\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::GetFoldExpanded(int) const");
		}
		bool lret = self->GetFoldExpanded(line);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxStyledTextCtrl::GetFoldLevel(int line) const
	static int _bind_GetFoldLevel(lua_State *L) {
		if (!_lg_typecheck_GetFoldLevel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetFoldLevel(int line) const function, expected prototype:\nint wxStyledTextCtrl::GetFoldLevel(int line) const\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetFoldLevel(int) const");
		}
		int lret = self->GetFoldLevel(line);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetFoldParent(int line) const
	static int _bind_GetFoldParent(lua_State *L) {
		if (!_lg_typecheck_GetFoldParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetFoldParent(int line) const function, expected prototype:\nint wxStyledTextCtrl::GetFoldParent(int line) const\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetFoldParent(int) const");
		}
		int lret = self->GetFoldParent(line);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetHighlightGuide() const
	static int _bind_GetHighlightGuide(lua_State *L) {
		if (!_lg_typecheck_GetHighlightGuide(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetHighlightGuide() const function, expected prototype:\nint wxStyledTextCtrl::GetHighlightGuide() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetHighlightGuide() const");
		}
		int lret = self->GetHighlightGuide();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetIndent() const
	static int _bind_GetIndent(lua_State *L) {
		if (!_lg_typecheck_GetIndent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetIndent() const function, expected prototype:\nint wxStyledTextCtrl::GetIndent() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetIndent() const");
		}
		int lret = self->GetIndent();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetIndentationGuides() const
	static int _bind_GetIndentationGuides(lua_State *L) {
		if (!_lg_typecheck_GetIndentationGuides(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetIndentationGuides() const function, expected prototype:\nint wxStyledTextCtrl::GetIndentationGuides() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetIndentationGuides() const");
		}
		int lret = self->GetIndentationGuides();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetLastChild(int line, int level) const
	static int _bind_GetLastChild(lua_State *L) {
		if (!_lg_typecheck_GetLastChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetLastChild(int line, int level) const function, expected prototype:\nint wxStyledTextCtrl::GetLastChild(int line, int level) const\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);
		int level=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetLastChild(int, int) const");
		}
		int lret = self->GetLastChild(line, level);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxStyledTextCtrl::GetLastKeydownProcessed()
	static int _bind_GetLastKeydownProcessed(lua_State *L) {
		if (!_lg_typecheck_GetLastKeydownProcessed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::GetLastKeydownProcessed() function, expected prototype:\nbool wxStyledTextCtrl::GetLastKeydownProcessed()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::GetLastKeydownProcessed()");
		}
		bool lret = self->GetLastKeydownProcessed();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxStyledTextCtrl::GetLayoutCache() const
	static int _bind_GetLayoutCache(lua_State *L) {
		if (!_lg_typecheck_GetLayoutCache(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetLayoutCache() const function, expected prototype:\nint wxStyledTextCtrl::GetLayoutCache() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetLayoutCache() const");
		}
		int lret = self->GetLayoutCache();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetLength() const
	static int _bind_GetLength(lua_State *L) {
		if (!_lg_typecheck_GetLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetLength() const function, expected prototype:\nint wxStyledTextCtrl::GetLength() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetLength() const");
		}
		int lret = self->GetLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetLexer() const
	static int _bind_GetLexer(lua_State *L) {
		if (!_lg_typecheck_GetLexer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetLexer() const function, expected prototype:\nint wxStyledTextCtrl::GetLexer() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetLexer() const");
		}
		int lret = self->GetLexer();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxStyledTextCtrl::GetLine(int line) const
	static int _bind_GetLine(lua_State *L) {
		if (!_lg_typecheck_GetLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxStyledTextCtrl::GetLine(int line) const function, expected prototype:\nwxString wxStyledTextCtrl::GetLine(int line) const\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxStyledTextCtrl::GetLine(int) const");
		}
		wxString lret = self->GetLine(line);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxStyledTextCtrl::GetLineCount() const
	static int _bind_GetLineCount(lua_State *L) {
		if (!_lg_typecheck_GetLineCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetLineCount() const function, expected prototype:\nint wxStyledTextCtrl::GetLineCount() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetLineCount() const");
		}
		int lret = self->GetLineCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetLineEndPosition(int line) const
	static int _bind_GetLineEndPosition(lua_State *L) {
		if (!_lg_typecheck_GetLineEndPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetLineEndPosition(int line) const function, expected prototype:\nint wxStyledTextCtrl::GetLineEndPosition(int line) const\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetLineEndPosition(int) const");
		}
		int lret = self->GetLineEndPosition(line);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetLineIndentPosition(int line) const
	static int _bind_GetLineIndentPosition(lua_State *L) {
		if (!_lg_typecheck_GetLineIndentPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetLineIndentPosition(int line) const function, expected prototype:\nint wxStyledTextCtrl::GetLineIndentPosition(int line) const\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetLineIndentPosition(int) const");
		}
		int lret = self->GetLineIndentPosition(line);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetLineIndentation(int line) const
	static int _bind_GetLineIndentation(lua_State *L) {
		if (!_lg_typecheck_GetLineIndentation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetLineIndentation(int line) const function, expected prototype:\nint wxStyledTextCtrl::GetLineIndentation(int line) const\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetLineIndentation(int) const");
		}
		int lret = self->GetLineIndentation(line);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetLineSelEndPosition(int line)
	static int _bind_GetLineSelEndPosition(lua_State *L) {
		if (!_lg_typecheck_GetLineSelEndPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetLineSelEndPosition(int line) function, expected prototype:\nint wxStyledTextCtrl::GetLineSelEndPosition(int line)\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetLineSelEndPosition(int)");
		}
		int lret = self->GetLineSelEndPosition(line);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetLineSelStartPosition(int line)
	static int _bind_GetLineSelStartPosition(lua_State *L) {
		if (!_lg_typecheck_GetLineSelStartPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetLineSelStartPosition(int line) function, expected prototype:\nint wxStyledTextCtrl::GetLineSelStartPosition(int line)\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetLineSelStartPosition(int)");
		}
		int lret = self->GetLineSelStartPosition(line);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetLineState(int line) const
	static int _bind_GetLineState(lua_State *L) {
		if (!_lg_typecheck_GetLineState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetLineState(int line) const function, expected prototype:\nint wxStyledTextCtrl::GetLineState(int line) const\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetLineState(int) const");
		}
		int lret = self->GetLineState(line);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxStyledTextCtrl::GetLineVisible(int line) const
	static int _bind_GetLineVisible(lua_State *L) {
		if (!_lg_typecheck_GetLineVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::GetLineVisible(int line) const function, expected prototype:\nbool wxStyledTextCtrl::GetLineVisible(int line) const\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::GetLineVisible(int) const");
		}
		bool lret = self->GetLineVisible(line);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxStyledTextCtrl::GetMarginLeft() const
	static int _bind_GetMarginLeft(lua_State *L) {
		if (!_lg_typecheck_GetMarginLeft(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetMarginLeft() const function, expected prototype:\nint wxStyledTextCtrl::GetMarginLeft() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetMarginLeft() const");
		}
		int lret = self->GetMarginLeft();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetMarginMask(int margin) const
	static int _bind_GetMarginMask(lua_State *L) {
		if (!_lg_typecheck_GetMarginMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetMarginMask(int margin) const function, expected prototype:\nint wxStyledTextCtrl::GetMarginMask(int margin) const\nClass arguments details:\n");
		}

		int margin=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetMarginMask(int) const");
		}
		int lret = self->GetMarginMask(margin);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetMarginRight() const
	static int _bind_GetMarginRight(lua_State *L) {
		if (!_lg_typecheck_GetMarginRight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetMarginRight() const function, expected prototype:\nint wxStyledTextCtrl::GetMarginRight() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetMarginRight() const");
		}
		int lret = self->GetMarginRight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxStyledTextCtrl::GetMarginSensitive(int margin) const
	static int _bind_GetMarginSensitive(lua_State *L) {
		if (!_lg_typecheck_GetMarginSensitive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::GetMarginSensitive(int margin) const function, expected prototype:\nbool wxStyledTextCtrl::GetMarginSensitive(int margin) const\nClass arguments details:\n");
		}

		int margin=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::GetMarginSensitive(int) const");
		}
		bool lret = self->GetMarginSensitive(margin);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxStyledTextCtrl::GetMarginType(int margin) const
	static int _bind_GetMarginType(lua_State *L) {
		if (!_lg_typecheck_GetMarginType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetMarginType(int margin) const function, expected prototype:\nint wxStyledTextCtrl::GetMarginType(int margin) const\nClass arguments details:\n");
		}

		int margin=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetMarginType(int) const");
		}
		int lret = self->GetMarginType(margin);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetMarginWidth(int margin) const
	static int _bind_GetMarginWidth(lua_State *L) {
		if (!_lg_typecheck_GetMarginWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetMarginWidth(int margin) const function, expected prototype:\nint wxStyledTextCtrl::GetMarginWidth(int margin) const\nClass arguments details:\n");
		}

		int margin=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetMarginWidth(int) const");
		}
		int lret = self->GetMarginWidth(margin);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetMaxLineState() const
	static int _bind_GetMaxLineState(lua_State *L) {
		if (!_lg_typecheck_GetMaxLineState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetMaxLineState() const function, expected prototype:\nint wxStyledTextCtrl::GetMaxLineState() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetMaxLineState() const");
		}
		int lret = self->GetMaxLineState();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetModEventMask() const
	static int _bind_GetModEventMask(lua_State *L) {
		if (!_lg_typecheck_GetModEventMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetModEventMask() const function, expected prototype:\nint wxStyledTextCtrl::GetModEventMask() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetModEventMask() const");
		}
		int lret = self->GetModEventMask();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxStyledTextCtrl::GetModify() const
	static int _bind_GetModify(lua_State *L) {
		if (!_lg_typecheck_GetModify(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::GetModify() const function, expected prototype:\nbool wxStyledTextCtrl::GetModify() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::GetModify() const");
		}
		bool lret = self->GetModify();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStyledTextCtrl::GetMouseDownCaptures() const
	static int _bind_GetMouseDownCaptures(lua_State *L) {
		if (!_lg_typecheck_GetMouseDownCaptures(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::GetMouseDownCaptures() const function, expected prototype:\nbool wxStyledTextCtrl::GetMouseDownCaptures() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::GetMouseDownCaptures() const");
		}
		bool lret = self->GetMouseDownCaptures();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxStyledTextCtrl::GetMouseDwellTime() const
	static int _bind_GetMouseDwellTime(lua_State *L) {
		if (!_lg_typecheck_GetMouseDwellTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetMouseDwellTime() const function, expected prototype:\nint wxStyledTextCtrl::GetMouseDwellTime() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetMouseDwellTime() const");
		}
		int lret = self->GetMouseDwellTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxStyledTextCtrl::GetOvertype() const
	static int _bind_GetOvertype(lua_State *L) {
		if (!_lg_typecheck_GetOvertype(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::GetOvertype() const function, expected prototype:\nbool wxStyledTextCtrl::GetOvertype() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::GetOvertype() const");
		}
		bool lret = self->GetOvertype();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStyledTextCtrl::GetPasteConvertEndings() const
	static int _bind_GetPasteConvertEndings(lua_State *L) {
		if (!_lg_typecheck_GetPasteConvertEndings(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::GetPasteConvertEndings() const function, expected prototype:\nbool wxStyledTextCtrl::GetPasteConvertEndings() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::GetPasteConvertEndings() const");
		}
		bool lret = self->GetPasteConvertEndings();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxStyledTextCtrl::GetPrintColourMode() const
	static int _bind_GetPrintColourMode(lua_State *L) {
		if (!_lg_typecheck_GetPrintColourMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetPrintColourMode() const function, expected prototype:\nint wxStyledTextCtrl::GetPrintColourMode() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetPrintColourMode() const");
		}
		int lret = self->GetPrintColourMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetPrintMagnification() const
	static int _bind_GetPrintMagnification(lua_State *L) {
		if (!_lg_typecheck_GetPrintMagnification(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetPrintMagnification() const function, expected prototype:\nint wxStyledTextCtrl::GetPrintMagnification() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetPrintMagnification() const");
		}
		int lret = self->GetPrintMagnification();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetPrintWrapMode() const
	static int _bind_GetPrintWrapMode(lua_State *L) {
		if (!_lg_typecheck_GetPrintWrapMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetPrintWrapMode() const function, expected prototype:\nint wxStyledTextCtrl::GetPrintWrapMode() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetPrintWrapMode() const");
		}
		int lret = self->GetPrintWrapMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxStyledTextCtrl::GetProperty(const wxString & key)
	static int _bind_GetProperty(lua_State *L) {
		if (!_lg_typecheck_GetProperty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxStyledTextCtrl::GetProperty(const wxString & key) function, expected prototype:\nwxString wxStyledTextCtrl::GetProperty(const wxString & key)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString key(lua_tostring(L,2),lua_objlen(L,2));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxStyledTextCtrl::GetProperty(const wxString &)");
		}
		wxString lret = self->GetProperty(key);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStyledTextCtrl::GetPropertyExpanded(const wxString & key)
	static int _bind_GetPropertyExpanded(lua_State *L) {
		if (!_lg_typecheck_GetPropertyExpanded(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxStyledTextCtrl::GetPropertyExpanded(const wxString & key) function, expected prototype:\nwxString wxStyledTextCtrl::GetPropertyExpanded(const wxString & key)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString key(lua_tostring(L,2),lua_objlen(L,2));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxStyledTextCtrl::GetPropertyExpanded(const wxString &)");
		}
		wxString lret = self->GetPropertyExpanded(key);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxStyledTextCtrl::GetPropertyInt(const wxString & key) const
	static int _bind_GetPropertyInt(lua_State *L) {
		if (!_lg_typecheck_GetPropertyInt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetPropertyInt(const wxString & key) const function, expected prototype:\nint wxStyledTextCtrl::GetPropertyInt(const wxString & key) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString key(lua_tostring(L,2),lua_objlen(L,2));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetPropertyInt(const wxString &) const");
		}
		int lret = self->GetPropertyInt(key);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxStyledTextCtrl::GetReadOnly() const
	static int _bind_GetReadOnly(lua_State *L) {
		if (!_lg_typecheck_GetReadOnly(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::GetReadOnly() const function, expected prototype:\nbool wxStyledTextCtrl::GetReadOnly() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::GetReadOnly() const");
		}
		bool lret = self->GetReadOnly();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxStyledTextCtrl::GetSTCCursor() const
	static int _bind_GetSTCCursor(lua_State *L) {
		if (!_lg_typecheck_GetSTCCursor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetSTCCursor() const function, expected prototype:\nint wxStyledTextCtrl::GetSTCCursor() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetSTCCursor() const");
		}
		int lret = self->GetSTCCursor();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxStyledTextCtrl::GetSTCFocus() const
	static int _bind_GetSTCFocus(lua_State *L) {
		if (!_lg_typecheck_GetSTCFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::GetSTCFocus() const function, expected prototype:\nbool wxStyledTextCtrl::GetSTCFocus() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::GetSTCFocus() const");
		}
		bool lret = self->GetSTCFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxStyledTextCtrl::GetScrollWidth() const
	static int _bind_GetScrollWidth(lua_State *L) {
		if (!_lg_typecheck_GetScrollWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetScrollWidth() const function, expected prototype:\nint wxStyledTextCtrl::GetScrollWidth() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetScrollWidth() const");
		}
		int lret = self->GetScrollWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetSearchFlags() const
	static int _bind_GetSearchFlags(lua_State *L) {
		if (!_lg_typecheck_GetSearchFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetSearchFlags() const function, expected prototype:\nint wxStyledTextCtrl::GetSearchFlags() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetSearchFlags() const");
		}
		int lret = self->GetSearchFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetSelAlpha() const
	static int _bind_GetSelAlpha(lua_State *L) {
		if (!_lg_typecheck_GetSelAlpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetSelAlpha() const function, expected prototype:\nint wxStyledTextCtrl::GetSelAlpha() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetSelAlpha() const");
		}
		int lret = self->GetSelAlpha();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxStyledTextCtrl::GetSelectedText()
	static int _bind_GetSelectedText(lua_State *L) {
		if (!_lg_typecheck_GetSelectedText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxStyledTextCtrl::GetSelectedText() function, expected prototype:\nwxString wxStyledTextCtrl::GetSelectedText()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxStyledTextCtrl::GetSelectedText()");
		}
		wxString lret = self->GetSelectedText();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxStyledTextCtrl::GetSelection(int * INTPUT, int * OUTPUT)
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::GetSelection(int * INTPUT, int * OUTPUT) function, expected prototype:\nvoid wxStyledTextCtrl::GetSelection(int * INTPUT, int * OUTPUT)\nClass arguments details:\n");
		}

		int INTPUT=(int)lua_tointeger(L,2);
		int OUTPUT=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::GetSelection(int *, int *)");
		}
		self->GetSelection(&INTPUT, &OUTPUT);

		return 0;
	}

	// int wxStyledTextCtrl::GetSelectionEnd() const
	static int _bind_GetSelectionEnd(lua_State *L) {
		if (!_lg_typecheck_GetSelectionEnd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetSelectionEnd() const function, expected prototype:\nint wxStyledTextCtrl::GetSelectionEnd() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetSelectionEnd() const");
		}
		int lret = self->GetSelectionEnd();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetSelectionMode() const
	static int _bind_GetSelectionMode(lua_State *L) {
		if (!_lg_typecheck_GetSelectionMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetSelectionMode() const function, expected prototype:\nint wxStyledTextCtrl::GetSelectionMode() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetSelectionMode() const");
		}
		int lret = self->GetSelectionMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetSelectionStart() const
	static int _bind_GetSelectionStart(lua_State *L) {
		if (!_lg_typecheck_GetSelectionStart(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetSelectionStart() const function, expected prototype:\nint wxStyledTextCtrl::GetSelectionStart() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetSelectionStart() const");
		}
		int lret = self->GetSelectionStart();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetStatus() const
	static int _bind_GetStatus(lua_State *L) {
		if (!_lg_typecheck_GetStatus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetStatus() const function, expected prototype:\nint wxStyledTextCtrl::GetStatus() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetStatus() const");
		}
		int lret = self->GetStatus();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetStyleAt(int pos) const
	static int _bind_GetStyleAt(lua_State *L) {
		if (!_lg_typecheck_GetStyleAt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetStyleAt(int pos) const function, expected prototype:\nint wxStyledTextCtrl::GetStyleAt(int pos) const\nClass arguments details:\n");
		}

		int pos=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetStyleAt(int) const");
		}
		int lret = self->GetStyleAt(pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetStyleBits() const
	static int _bind_GetStyleBits(lua_State *L) {
		if (!_lg_typecheck_GetStyleBits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetStyleBits() const function, expected prototype:\nint wxStyledTextCtrl::GetStyleBits() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetStyleBits() const");
		}
		int lret = self->GetStyleBits();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetStyleBitsNeeded() const
	static int _bind_GetStyleBitsNeeded(lua_State *L) {
		if (!_lg_typecheck_GetStyleBitsNeeded(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetStyleBitsNeeded() const function, expected prototype:\nint wxStyledTextCtrl::GetStyleBitsNeeded() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetStyleBitsNeeded() const");
		}
		int lret = self->GetStyleBitsNeeded();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxStyledTextCtrl::GetTabIndents() const
	static int _bind_GetTabIndents(lua_State *L) {
		if (!_lg_typecheck_GetTabIndents(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::GetTabIndents() const function, expected prototype:\nbool wxStyledTextCtrl::GetTabIndents() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::GetTabIndents() const");
		}
		bool lret = self->GetTabIndents();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxStyledTextCtrl::GetTabWidth() const
	static int _bind_GetTabWidth(lua_State *L) {
		if (!_lg_typecheck_GetTabWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetTabWidth() const function, expected prototype:\nint wxStyledTextCtrl::GetTabWidth() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetTabWidth() const");
		}
		int lret = self->GetTabWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetTargetEnd() const
	static int _bind_GetTargetEnd(lua_State *L) {
		if (!_lg_typecheck_GetTargetEnd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetTargetEnd() const function, expected prototype:\nint wxStyledTextCtrl::GetTargetEnd() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetTargetEnd() const");
		}
		int lret = self->GetTargetEnd();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetTargetStart() const
	static int _bind_GetTargetStart(lua_State *L) {
		if (!_lg_typecheck_GetTargetStart(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetTargetStart() const function, expected prototype:\nint wxStyledTextCtrl::GetTargetStart() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetTargetStart() const");
		}
		int lret = self->GetTargetStart();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxStyledTextCtrl::GetText() const
	static int _bind_GetText(lua_State *L) {
		if (!_lg_typecheck_GetText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxStyledTextCtrl::GetText() const function, expected prototype:\nwxString wxStyledTextCtrl::GetText() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxStyledTextCtrl::GetText() const");
		}
		wxString lret = self->GetText();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxStyledTextCtrl::GetTextLength() const
	static int _bind_GetTextLength(lua_State *L) {
		if (!_lg_typecheck_GetTextLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetTextLength() const function, expected prototype:\nint wxStyledTextCtrl::GetTextLength() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetTextLength() const");
		}
		int lret = self->GetTextLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxStyledTextCtrl::GetTextRange(int startPos, int endPos)
	static int _bind_GetTextRange(lua_State *L) {
		if (!_lg_typecheck_GetTextRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxStyledTextCtrl::GetTextRange(int startPos, int endPos) function, expected prototype:\nwxString wxStyledTextCtrl::GetTextRange(int startPos, int endPos)\nClass arguments details:\n");
		}

		int startPos=(int)lua_tointeger(L,2);
		int endPos=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxStyledTextCtrl::GetTextRange(int, int)");
		}
		wxString lret = self->GetTextRange(startPos, endPos);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxStyledTextCtrl::GetTwoPhaseDraw() const
	static int _bind_GetTwoPhaseDraw(lua_State *L) {
		if (!_lg_typecheck_GetTwoPhaseDraw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::GetTwoPhaseDraw() const function, expected prototype:\nbool wxStyledTextCtrl::GetTwoPhaseDraw() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::GetTwoPhaseDraw() const");
		}
		bool lret = self->GetTwoPhaseDraw();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStyledTextCtrl::GetUndoCollection() const
	static int _bind_GetUndoCollection(lua_State *L) {
		if (!_lg_typecheck_GetUndoCollection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::GetUndoCollection() const function, expected prototype:\nbool wxStyledTextCtrl::GetUndoCollection() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::GetUndoCollection() const");
		}
		bool lret = self->GetUndoCollection();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStyledTextCtrl::GetUseAntiAliasing()
	static int _bind_GetUseAntiAliasing(lua_State *L) {
		if (!_lg_typecheck_GetUseAntiAliasing(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::GetUseAntiAliasing() function, expected prototype:\nbool wxStyledTextCtrl::GetUseAntiAliasing()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::GetUseAntiAliasing()");
		}
		bool lret = self->GetUseAntiAliasing();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStyledTextCtrl::GetUseHorizontalScrollBar() const
	static int _bind_GetUseHorizontalScrollBar(lua_State *L) {
		if (!_lg_typecheck_GetUseHorizontalScrollBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::GetUseHorizontalScrollBar() const function, expected prototype:\nbool wxStyledTextCtrl::GetUseHorizontalScrollBar() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::GetUseHorizontalScrollBar() const");
		}
		bool lret = self->GetUseHorizontalScrollBar();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStyledTextCtrl::GetUseTabs() const
	static int _bind_GetUseTabs(lua_State *L) {
		if (!_lg_typecheck_GetUseTabs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::GetUseTabs() const function, expected prototype:\nbool wxStyledTextCtrl::GetUseTabs() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::GetUseTabs() const");
		}
		bool lret = self->GetUseTabs();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStyledTextCtrl::GetUseVerticalScrollBar() const
	static int _bind_GetUseVerticalScrollBar(lua_State *L) {
		if (!_lg_typecheck_GetUseVerticalScrollBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::GetUseVerticalScrollBar() const function, expected prototype:\nbool wxStyledTextCtrl::GetUseVerticalScrollBar() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::GetUseVerticalScrollBar() const");
		}
		bool lret = self->GetUseVerticalScrollBar();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStyledTextCtrl::GetViewEOL() const
	static int _bind_GetViewEOL(lua_State *L) {
		if (!_lg_typecheck_GetViewEOL(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::GetViewEOL() const function, expected prototype:\nbool wxStyledTextCtrl::GetViewEOL() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::GetViewEOL() const");
		}
		bool lret = self->GetViewEOL();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxStyledTextCtrl::GetViewWhiteSpace() const
	static int _bind_GetViewWhiteSpace(lua_State *L) {
		if (!_lg_typecheck_GetViewWhiteSpace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetViewWhiteSpace() const function, expected prototype:\nint wxStyledTextCtrl::GetViewWhiteSpace() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetViewWhiteSpace() const");
		}
		int lret = self->GetViewWhiteSpace();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetWrapMode() const
	static int _bind_GetWrapMode(lua_State *L) {
		if (!_lg_typecheck_GetWrapMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetWrapMode() const function, expected prototype:\nint wxStyledTextCtrl::GetWrapMode() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetWrapMode() const");
		}
		int lret = self->GetWrapMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetWrapStartIndent() const
	static int _bind_GetWrapStartIndent(lua_State *L) {
		if (!_lg_typecheck_GetWrapStartIndent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetWrapStartIndent() const function, expected prototype:\nint wxStyledTextCtrl::GetWrapStartIndent() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetWrapStartIndent() const");
		}
		int lret = self->GetWrapStartIndent();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetWrapVisualFlags() const
	static int _bind_GetWrapVisualFlags(lua_State *L) {
		if (!_lg_typecheck_GetWrapVisualFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetWrapVisualFlags() const function, expected prototype:\nint wxStyledTextCtrl::GetWrapVisualFlags() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetWrapVisualFlags() const");
		}
		int lret = self->GetWrapVisualFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetWrapVisualFlagsLocation() const
	static int _bind_GetWrapVisualFlagsLocation(lua_State *L) {
		if (!_lg_typecheck_GetWrapVisualFlagsLocation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetWrapVisualFlagsLocation() const function, expected prototype:\nint wxStyledTextCtrl::GetWrapVisualFlagsLocation() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetWrapVisualFlagsLocation() const");
		}
		int lret = self->GetWrapVisualFlagsLocation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetXOffset() const
	static int _bind_GetXOffset(lua_State *L) {
		if (!_lg_typecheck_GetXOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetXOffset() const function, expected prototype:\nint wxStyledTextCtrl::GetXOffset() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetXOffset() const");
		}
		int lret = self->GetXOffset();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetZoom() const
	static int _bind_GetZoom(lua_State *L) {
		if (!_lg_typecheck_GetZoom(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetZoom() const function, expected prototype:\nint wxStyledTextCtrl::GetZoom() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetZoom() const");
		}
		int lret = self->GetZoom();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::GotoLine(int line)
	static int _bind_GotoLine(lua_State *L) {
		if (!_lg_typecheck_GotoLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::GotoLine(int line) function, expected prototype:\nvoid wxStyledTextCtrl::GotoLine(int line)\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::GotoLine(int)");
		}
		self->GotoLine(line);

		return 0;
	}

	// void wxStyledTextCtrl::GotoPos(int pos)
	static int _bind_GotoPos(lua_State *L) {
		if (!_lg_typecheck_GotoPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::GotoPos(int pos) function, expected prototype:\nvoid wxStyledTextCtrl::GotoPos(int pos)\nClass arguments details:\n");
		}

		int pos=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::GotoPos(int)");
		}
		self->GotoPos(pos);

		return 0;
	}

	// void wxStyledTextCtrl::HideLines(int lineStart, int lineEnd)
	static int _bind_HideLines(lua_State *L) {
		if (!_lg_typecheck_HideLines(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::HideLines(int lineStart, int lineEnd) function, expected prototype:\nvoid wxStyledTextCtrl::HideLines(int lineStart, int lineEnd)\nClass arguments details:\n");
		}

		int lineStart=(int)lua_tointeger(L,2);
		int lineEnd=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::HideLines(int, int)");
		}
		self->HideLines(lineStart, lineEnd);

		return 0;
	}

	// void wxStyledTextCtrl::HideSelection(bool normal)
	static int _bind_HideSelection(lua_State *L) {
		if (!_lg_typecheck_HideSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::HideSelection(bool normal) function, expected prototype:\nvoid wxStyledTextCtrl::HideSelection(bool normal)\nClass arguments details:\n");
		}

		bool normal=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::HideSelection(bool)");
		}
		self->HideSelection(normal);

		return 0;
	}

	// void wxStyledTextCtrl::Home()
	static int _bind_Home(lua_State *L) {
		if (!_lg_typecheck_Home(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::Home() function, expected prototype:\nvoid wxStyledTextCtrl::Home()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::Home()");
		}
		self->Home();

		return 0;
	}

	// void wxStyledTextCtrl::HomeDisplay()
	static int _bind_HomeDisplay(lua_State *L) {
		if (!_lg_typecheck_HomeDisplay(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::HomeDisplay() function, expected prototype:\nvoid wxStyledTextCtrl::HomeDisplay()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::HomeDisplay()");
		}
		self->HomeDisplay();

		return 0;
	}

	// void wxStyledTextCtrl::HomeDisplayExtend()
	static int _bind_HomeDisplayExtend(lua_State *L) {
		if (!_lg_typecheck_HomeDisplayExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::HomeDisplayExtend() function, expected prototype:\nvoid wxStyledTextCtrl::HomeDisplayExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::HomeDisplayExtend()");
		}
		self->HomeDisplayExtend();

		return 0;
	}

	// void wxStyledTextCtrl::HomeExtend()
	static int _bind_HomeExtend(lua_State *L) {
		if (!_lg_typecheck_HomeExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::HomeExtend() function, expected prototype:\nvoid wxStyledTextCtrl::HomeExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::HomeExtend()");
		}
		self->HomeExtend();

		return 0;
	}

	// void wxStyledTextCtrl::HomeRectExtend()
	static int _bind_HomeRectExtend(lua_State *L) {
		if (!_lg_typecheck_HomeRectExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::HomeRectExtend() function, expected prototype:\nvoid wxStyledTextCtrl::HomeRectExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::HomeRectExtend()");
		}
		self->HomeRectExtend();

		return 0;
	}

	// void wxStyledTextCtrl::HomeWrap()
	static int _bind_HomeWrap(lua_State *L) {
		if (!_lg_typecheck_HomeWrap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::HomeWrap() function, expected prototype:\nvoid wxStyledTextCtrl::HomeWrap()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::HomeWrap()");
		}
		self->HomeWrap();

		return 0;
	}

	// void wxStyledTextCtrl::HomeWrapExtend()
	static int _bind_HomeWrapExtend(lua_State *L) {
		if (!_lg_typecheck_HomeWrapExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::HomeWrapExtend() function, expected prototype:\nvoid wxStyledTextCtrl::HomeWrapExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::HomeWrapExtend()");
		}
		self->HomeWrapExtend();

		return 0;
	}

	// wxColour wxStyledTextCtrl::IndicatorGetForeground(int indic) const
	static int _bind_IndicatorGetForeground(lua_State *L) {
		if (!_lg_typecheck_IndicatorGetForeground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxStyledTextCtrl::IndicatorGetForeground(int indic) const function, expected prototype:\nwxColour wxStyledTextCtrl::IndicatorGetForeground(int indic) const\nClass arguments details:\n");
		}

		int indic=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxStyledTextCtrl::IndicatorGetForeground(int) const");
		}
		wxColour stack_lret = self->IndicatorGetForeground(indic);
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// int wxStyledTextCtrl::IndicatorGetStyle(int indic) const
	static int _bind_IndicatorGetStyle(lua_State *L) {
		if (!_lg_typecheck_IndicatorGetStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::IndicatorGetStyle(int indic) const function, expected prototype:\nint wxStyledTextCtrl::IndicatorGetStyle(int indic) const\nClass arguments details:\n");
		}

		int indic=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::IndicatorGetStyle(int) const");
		}
		int lret = self->IndicatorGetStyle(indic);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::IndicatorSetForeground(int indic, const wxColour & fore)
	static int _bind_IndicatorSetForeground(lua_State *L) {
		if (!_lg_typecheck_IndicatorSetForeground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::IndicatorSetForeground(int indic, const wxColour & fore) function, expected prototype:\nvoid wxStyledTextCtrl::IndicatorSetForeground(int indic, const wxColour & fore)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		int indic=(int)lua_tointeger(L,2);
		const wxColour* fore_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,3));
		if( !fore_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fore in wxStyledTextCtrl::IndicatorSetForeground function");
		}
		const wxColour & fore=*fore_ptr;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::IndicatorSetForeground(int, const wxColour &)");
		}
		self->IndicatorSetForeground(indic, fore);

		return 0;
	}

	// void wxStyledTextCtrl::IndicatorSetStyle(int indic, int style)
	static int _bind_IndicatorSetStyle(lua_State *L) {
		if (!_lg_typecheck_IndicatorSetStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::IndicatorSetStyle(int indic, int style) function, expected prototype:\nvoid wxStyledTextCtrl::IndicatorSetStyle(int indic, int style)\nClass arguments details:\n");
		}

		int indic=(int)lua_tointeger(L,2);
		int style=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::IndicatorSetStyle(int, int)");
		}
		self->IndicatorSetStyle(indic, style);

		return 0;
	}

	// void wxStyledTextCtrl::InsertText(int pos, const wxString & text)
	static int _bind_InsertText(lua_State *L) {
		if (!_lg_typecheck_InsertText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::InsertText(int pos, const wxString & text) function, expected prototype:\nvoid wxStyledTextCtrl::InsertText(int pos, const wxString & text)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int pos=(int)lua_tointeger(L,2);
		wxString text(lua_tostring(L,3),lua_objlen(L,3));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::InsertText(int, const wxString &)");
		}
		self->InsertText(pos, text);

		return 0;
	}

	// void wxStyledTextCtrl::InsertTextRaw(int pos, const char * text)
	static int _bind_InsertTextRaw(lua_State *L) {
		if (!_lg_typecheck_InsertTextRaw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::InsertTextRaw(int pos, const char * text) function, expected prototype:\nvoid wxStyledTextCtrl::InsertTextRaw(int pos, const char * text)\nClass arguments details:\n");
		}

		int pos=(int)lua_tointeger(L,2);
		const char * text=(const char *)lua_tostring(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::InsertTextRaw(int, const char *)");
		}
		self->InsertTextRaw(pos, text);

		return 0;
	}

	// void wxStyledTextCtrl::LineCopy()
	static int _bind_LineCopy(lua_State *L) {
		if (!_lg_typecheck_LineCopy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::LineCopy() function, expected prototype:\nvoid wxStyledTextCtrl::LineCopy()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::LineCopy()");
		}
		self->LineCopy();

		return 0;
	}

	// void wxStyledTextCtrl::LineCut()
	static int _bind_LineCut(lua_State *L) {
		if (!_lg_typecheck_LineCut(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::LineCut() function, expected prototype:\nvoid wxStyledTextCtrl::LineCut()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::LineCut()");
		}
		self->LineCut();

		return 0;
	}

	// void wxStyledTextCtrl::LineDelete()
	static int _bind_LineDelete(lua_State *L) {
		if (!_lg_typecheck_LineDelete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::LineDelete() function, expected prototype:\nvoid wxStyledTextCtrl::LineDelete()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::LineDelete()");
		}
		self->LineDelete();

		return 0;
	}

	// void wxStyledTextCtrl::LineDown()
	static int _bind_LineDown(lua_State *L) {
		if (!_lg_typecheck_LineDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::LineDown() function, expected prototype:\nvoid wxStyledTextCtrl::LineDown()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::LineDown()");
		}
		self->LineDown();

		return 0;
	}

	// void wxStyledTextCtrl::LineDownExtend()
	static int _bind_LineDownExtend(lua_State *L) {
		if (!_lg_typecheck_LineDownExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::LineDownExtend() function, expected prototype:\nvoid wxStyledTextCtrl::LineDownExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::LineDownExtend()");
		}
		self->LineDownExtend();

		return 0;
	}

	// void wxStyledTextCtrl::LineDownRectExtend()
	static int _bind_LineDownRectExtend(lua_State *L) {
		if (!_lg_typecheck_LineDownRectExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::LineDownRectExtend() function, expected prototype:\nvoid wxStyledTextCtrl::LineDownRectExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::LineDownRectExtend()");
		}
		self->LineDownRectExtend();

		return 0;
	}

	// void wxStyledTextCtrl::LineDuplicate()
	static int _bind_LineDuplicate(lua_State *L) {
		if (!_lg_typecheck_LineDuplicate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::LineDuplicate() function, expected prototype:\nvoid wxStyledTextCtrl::LineDuplicate()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::LineDuplicate()");
		}
		self->LineDuplicate();

		return 0;
	}

	// void wxStyledTextCtrl::LineEnd()
	static int _bind_LineEnd(lua_State *L) {
		if (!_lg_typecheck_LineEnd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::LineEnd() function, expected prototype:\nvoid wxStyledTextCtrl::LineEnd()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::LineEnd()");
		}
		self->LineEnd();

		return 0;
	}

	// void wxStyledTextCtrl::LineEndDisplay()
	static int _bind_LineEndDisplay(lua_State *L) {
		if (!_lg_typecheck_LineEndDisplay(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::LineEndDisplay() function, expected prototype:\nvoid wxStyledTextCtrl::LineEndDisplay()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::LineEndDisplay()");
		}
		self->LineEndDisplay();

		return 0;
	}

	// void wxStyledTextCtrl::LineEndDisplayExtend()
	static int _bind_LineEndDisplayExtend(lua_State *L) {
		if (!_lg_typecheck_LineEndDisplayExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::LineEndDisplayExtend() function, expected prototype:\nvoid wxStyledTextCtrl::LineEndDisplayExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::LineEndDisplayExtend()");
		}
		self->LineEndDisplayExtend();

		return 0;
	}

	// void wxStyledTextCtrl::LineEndExtend()
	static int _bind_LineEndExtend(lua_State *L) {
		if (!_lg_typecheck_LineEndExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::LineEndExtend() function, expected prototype:\nvoid wxStyledTextCtrl::LineEndExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::LineEndExtend()");
		}
		self->LineEndExtend();

		return 0;
	}

	// void wxStyledTextCtrl::LineEndRectExtend()
	static int _bind_LineEndRectExtend(lua_State *L) {
		if (!_lg_typecheck_LineEndRectExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::LineEndRectExtend() function, expected prototype:\nvoid wxStyledTextCtrl::LineEndRectExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::LineEndRectExtend()");
		}
		self->LineEndRectExtend();

		return 0;
	}

	// void wxStyledTextCtrl::LineEndWrap()
	static int _bind_LineEndWrap(lua_State *L) {
		if (!_lg_typecheck_LineEndWrap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::LineEndWrap() function, expected prototype:\nvoid wxStyledTextCtrl::LineEndWrap()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::LineEndWrap()");
		}
		self->LineEndWrap();

		return 0;
	}

	// void wxStyledTextCtrl::LineEndWrapExtend()
	static int _bind_LineEndWrapExtend(lua_State *L) {
		if (!_lg_typecheck_LineEndWrapExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::LineEndWrapExtend() function, expected prototype:\nvoid wxStyledTextCtrl::LineEndWrapExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::LineEndWrapExtend()");
		}
		self->LineEndWrapExtend();

		return 0;
	}

	// int wxStyledTextCtrl::LineFromPosition(int pos) const
	static int _bind_LineFromPosition(lua_State *L) {
		if (!_lg_typecheck_LineFromPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::LineFromPosition(int pos) const function, expected prototype:\nint wxStyledTextCtrl::LineFromPosition(int pos) const\nClass arguments details:\n");
		}

		int pos=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::LineFromPosition(int) const");
		}
		int lret = self->LineFromPosition(pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::LineLength(int line) const
	static int _bind_LineLength(lua_State *L) {
		if (!_lg_typecheck_LineLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::LineLength(int line) const function, expected prototype:\nint wxStyledTextCtrl::LineLength(int line) const\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::LineLength(int) const");
		}
		int lret = self->LineLength(line);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::LineScroll(int columns, int lines)
	static int _bind_LineScroll(lua_State *L) {
		if (!_lg_typecheck_LineScroll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::LineScroll(int columns, int lines) function, expected prototype:\nvoid wxStyledTextCtrl::LineScroll(int columns, int lines)\nClass arguments details:\n");
		}

		int columns=(int)lua_tointeger(L,2);
		int lines=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::LineScroll(int, int)");
		}
		self->LineScroll(columns, lines);

		return 0;
	}

	// void wxStyledTextCtrl::LineScrollDown()
	static int _bind_LineScrollDown(lua_State *L) {
		if (!_lg_typecheck_LineScrollDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::LineScrollDown() function, expected prototype:\nvoid wxStyledTextCtrl::LineScrollDown()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::LineScrollDown()");
		}
		self->LineScrollDown();

		return 0;
	}

	// void wxStyledTextCtrl::LineScrollUp()
	static int _bind_LineScrollUp(lua_State *L) {
		if (!_lg_typecheck_LineScrollUp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::LineScrollUp() function, expected prototype:\nvoid wxStyledTextCtrl::LineScrollUp()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::LineScrollUp()");
		}
		self->LineScrollUp();

		return 0;
	}

	// void wxStyledTextCtrl::LineTranspose()
	static int _bind_LineTranspose(lua_State *L) {
		if (!_lg_typecheck_LineTranspose(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::LineTranspose() function, expected prototype:\nvoid wxStyledTextCtrl::LineTranspose()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::LineTranspose()");
		}
		self->LineTranspose();

		return 0;
	}

	// void wxStyledTextCtrl::LineUp()
	static int _bind_LineUp(lua_State *L) {
		if (!_lg_typecheck_LineUp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::LineUp() function, expected prototype:\nvoid wxStyledTextCtrl::LineUp()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::LineUp()");
		}
		self->LineUp();

		return 0;
	}

	// void wxStyledTextCtrl::LineUpExtend()
	static int _bind_LineUpExtend(lua_State *L) {
		if (!_lg_typecheck_LineUpExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::LineUpExtend() function, expected prototype:\nvoid wxStyledTextCtrl::LineUpExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::LineUpExtend()");
		}
		self->LineUpExtend();

		return 0;
	}

	// void wxStyledTextCtrl::LineUpRectExtend()
	static int _bind_LineUpRectExtend(lua_State *L) {
		if (!_lg_typecheck_LineUpRectExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::LineUpRectExtend() function, expected prototype:\nvoid wxStyledTextCtrl::LineUpRectExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::LineUpRectExtend()");
		}
		self->LineUpRectExtend();

		return 0;
	}

	// void wxStyledTextCtrl::LinesJoin()
	static int _bind_LinesJoin(lua_State *L) {
		if (!_lg_typecheck_LinesJoin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::LinesJoin() function, expected prototype:\nvoid wxStyledTextCtrl::LinesJoin()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::LinesJoin()");
		}
		self->LinesJoin();

		return 0;
	}

	// int wxStyledTextCtrl::LinesOnScreen() const
	static int _bind_LinesOnScreen(lua_State *L) {
		if (!_lg_typecheck_LinesOnScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::LinesOnScreen() const function, expected prototype:\nint wxStyledTextCtrl::LinesOnScreen() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::LinesOnScreen() const");
		}
		int lret = self->LinesOnScreen();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::LinesSplit(int pixelWidth)
	static int _bind_LinesSplit(lua_State *L) {
		if (!_lg_typecheck_LinesSplit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::LinesSplit(int pixelWidth) function, expected prototype:\nvoid wxStyledTextCtrl::LinesSplit(int pixelWidth)\nClass arguments details:\n");
		}

		int pixelWidth=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::LinesSplit(int)");
		}
		self->LinesSplit(pixelWidth);

		return 0;
	}

	// bool wxStyledTextCtrl::LoadFile(const wxString & file, int fileType = wxTEXT_TYPE_ANY)
	static int _bind_LoadFile(lua_State *L) {
		if (!_lg_typecheck_LoadFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::LoadFile(const wxString & file, int fileType = wxTEXT_TYPE_ANY) function, expected prototype:\nbool wxStyledTextCtrl::LoadFile(const wxString & file, int fileType = wxTEXT_TYPE_ANY)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString file(lua_tostring(L,2),lua_objlen(L,2));
		int fileType=luatop>2 ? (int)lua_tointeger(L,3) : wxTEXT_TYPE_ANY;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::LoadFile(const wxString &, int)");
		}
		bool lret = self->LoadFile(file, fileType);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxStyledTextCtrl::LowerCase()
	static int _bind_LowerCase(lua_State *L) {
		if (!_lg_typecheck_LowerCase(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::LowerCase() function, expected prototype:\nvoid wxStyledTextCtrl::LowerCase()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::LowerCase()");
		}
		self->LowerCase();

		return 0;
	}

	// int wxStyledTextCtrl::MarkerAdd(int line, int markerNumber)
	static int _bind_MarkerAdd(lua_State *L) {
		if (!_lg_typecheck_MarkerAdd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::MarkerAdd(int line, int markerNumber) function, expected prototype:\nint wxStyledTextCtrl::MarkerAdd(int line, int markerNumber)\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);
		int markerNumber=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::MarkerAdd(int, int)");
		}
		int lret = self->MarkerAdd(line, markerNumber);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::MarkerAddSet(int line, int set)
	static int _bind_MarkerAddSet(lua_State *L) {
		if (!_lg_typecheck_MarkerAddSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::MarkerAddSet(int line, int set) function, expected prototype:\nvoid wxStyledTextCtrl::MarkerAddSet(int line, int set)\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);
		int set=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::MarkerAddSet(int, int)");
		}
		self->MarkerAddSet(line, set);

		return 0;
	}

	// void wxStyledTextCtrl::MarkerDefine(int markerNumber, int markerSymbol, const wxColour & foreground = wxNullColour, const wxColour & background = wxNullColour)
	static int _bind_MarkerDefine(lua_State *L) {
		if (!_lg_typecheck_MarkerDefine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::MarkerDefine(int markerNumber, int markerSymbol, const wxColour & foreground = wxNullColour, const wxColour & background = wxNullColour) function, expected prototype:\nvoid wxStyledTextCtrl::MarkerDefine(int markerNumber, int markerSymbol, const wxColour & foreground = wxNullColour, const wxColour & background = wxNullColour)\nClass arguments details:\narg 3 ID = 56813631\narg 4 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		int markerNumber=(int)lua_tointeger(L,2);
		int markerSymbol=(int)lua_tointeger(L,3);
		const wxColour* foreground_ptr=luatop>3 ? dynamic_cast< wxColour* >(Luna< wxObject >::check(L,4)) : NULL;
		if( luatop>3 && !foreground_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg foreground in wxStyledTextCtrl::MarkerDefine function");
		}
		const wxColour & foreground=luatop>3 ? *foreground_ptr : wxNullColour;
		const wxColour* background_ptr=luatop>4 ? dynamic_cast< wxColour* >(Luna< wxObject >::check(L,5)) : NULL;
		if( luatop>4 && !background_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg background in wxStyledTextCtrl::MarkerDefine function");
		}
		const wxColour & background=luatop>4 ? *background_ptr : wxNullColour;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::MarkerDefine(int, int, const wxColour &, const wxColour &)");
		}
		self->MarkerDefine(markerNumber, markerSymbol, foreground, background);

		return 0;
	}

	// void wxStyledTextCtrl::MarkerDefineBitmap(int markerNumber, const wxBitmap & bmp)
	static int _bind_MarkerDefineBitmap(lua_State *L) {
		if (!_lg_typecheck_MarkerDefineBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::MarkerDefineBitmap(int markerNumber, const wxBitmap & bmp) function, expected prototype:\nvoid wxStyledTextCtrl::MarkerDefineBitmap(int markerNumber, const wxBitmap & bmp)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		int markerNumber=(int)lua_tointeger(L,2);
		const wxBitmap* bmp_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,3));
		if( !bmp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmp in wxStyledTextCtrl::MarkerDefineBitmap function");
		}
		const wxBitmap & bmp=*bmp_ptr;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::MarkerDefineBitmap(int, const wxBitmap &)");
		}
		self->MarkerDefineBitmap(markerNumber, bmp);

		return 0;
	}

	// void wxStyledTextCtrl::MarkerDelete(int line, int markerNumber)
	static int _bind_MarkerDelete(lua_State *L) {
		if (!_lg_typecheck_MarkerDelete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::MarkerDelete(int line, int markerNumber) function, expected prototype:\nvoid wxStyledTextCtrl::MarkerDelete(int line, int markerNumber)\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);
		int markerNumber=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::MarkerDelete(int, int)");
		}
		self->MarkerDelete(line, markerNumber);

		return 0;
	}

	// void wxStyledTextCtrl::MarkerDeleteAll(int markerNumber)
	static int _bind_MarkerDeleteAll(lua_State *L) {
		if (!_lg_typecheck_MarkerDeleteAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::MarkerDeleteAll(int markerNumber) function, expected prototype:\nvoid wxStyledTextCtrl::MarkerDeleteAll(int markerNumber)\nClass arguments details:\n");
		}

		int markerNumber=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::MarkerDeleteAll(int)");
		}
		self->MarkerDeleteAll(markerNumber);

		return 0;
	}

	// void wxStyledTextCtrl::MarkerDeleteHandle(int handle)
	static int _bind_MarkerDeleteHandle(lua_State *L) {
		if (!_lg_typecheck_MarkerDeleteHandle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::MarkerDeleteHandle(int handle) function, expected prototype:\nvoid wxStyledTextCtrl::MarkerDeleteHandle(int handle)\nClass arguments details:\n");
		}

		int handle=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::MarkerDeleteHandle(int)");
		}
		self->MarkerDeleteHandle(handle);

		return 0;
	}

	// int wxStyledTextCtrl::MarkerGet(int line)
	static int _bind_MarkerGet(lua_State *L) {
		if (!_lg_typecheck_MarkerGet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::MarkerGet(int line) function, expected prototype:\nint wxStyledTextCtrl::MarkerGet(int line)\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::MarkerGet(int)");
		}
		int lret = self->MarkerGet(line);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::MarkerLineFromHandle(int handle)
	static int _bind_MarkerLineFromHandle(lua_State *L) {
		if (!_lg_typecheck_MarkerLineFromHandle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::MarkerLineFromHandle(int handle) function, expected prototype:\nint wxStyledTextCtrl::MarkerLineFromHandle(int handle)\nClass arguments details:\n");
		}

		int handle=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::MarkerLineFromHandle(int)");
		}
		int lret = self->MarkerLineFromHandle(handle);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::MarkerNext(int lineStart, int markerMask)
	static int _bind_MarkerNext(lua_State *L) {
		if (!_lg_typecheck_MarkerNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::MarkerNext(int lineStart, int markerMask) function, expected prototype:\nint wxStyledTextCtrl::MarkerNext(int lineStart, int markerMask)\nClass arguments details:\n");
		}

		int lineStart=(int)lua_tointeger(L,2);
		int markerMask=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::MarkerNext(int, int)");
		}
		int lret = self->MarkerNext(lineStart, markerMask);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::MarkerPrevious(int lineStart, int markerMask)
	static int _bind_MarkerPrevious(lua_State *L) {
		if (!_lg_typecheck_MarkerPrevious(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::MarkerPrevious(int lineStart, int markerMask) function, expected prototype:\nint wxStyledTextCtrl::MarkerPrevious(int lineStart, int markerMask)\nClass arguments details:\n");
		}

		int lineStart=(int)lua_tointeger(L,2);
		int markerMask=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::MarkerPrevious(int, int)");
		}
		int lret = self->MarkerPrevious(lineStart, markerMask);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::MarkerSetAlpha(int markerNumber, int alpha)
	static int _bind_MarkerSetAlpha(lua_State *L) {
		if (!_lg_typecheck_MarkerSetAlpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::MarkerSetAlpha(int markerNumber, int alpha) function, expected prototype:\nvoid wxStyledTextCtrl::MarkerSetAlpha(int markerNumber, int alpha)\nClass arguments details:\n");
		}

		int markerNumber=(int)lua_tointeger(L,2);
		int alpha=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::MarkerSetAlpha(int, int)");
		}
		self->MarkerSetAlpha(markerNumber, alpha);

		return 0;
	}

	// void wxStyledTextCtrl::MarkerSetBackground(int markerNumber, const wxColour & back)
	static int _bind_MarkerSetBackground(lua_State *L) {
		if (!_lg_typecheck_MarkerSetBackground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::MarkerSetBackground(int markerNumber, const wxColour & back) function, expected prototype:\nvoid wxStyledTextCtrl::MarkerSetBackground(int markerNumber, const wxColour & back)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		int markerNumber=(int)lua_tointeger(L,2);
		const wxColour* back_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,3));
		if( !back_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg back in wxStyledTextCtrl::MarkerSetBackground function");
		}
		const wxColour & back=*back_ptr;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::MarkerSetBackground(int, const wxColour &)");
		}
		self->MarkerSetBackground(markerNumber, back);

		return 0;
	}

	// void wxStyledTextCtrl::MarkerSetForeground(int markerNumber, const wxColour & fore)
	static int _bind_MarkerSetForeground(lua_State *L) {
		if (!_lg_typecheck_MarkerSetForeground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::MarkerSetForeground(int markerNumber, const wxColour & fore) function, expected prototype:\nvoid wxStyledTextCtrl::MarkerSetForeground(int markerNumber, const wxColour & fore)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		int markerNumber=(int)lua_tointeger(L,2);
		const wxColour* fore_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,3));
		if( !fore_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fore in wxStyledTextCtrl::MarkerSetForeground function");
		}
		const wxColour & fore=*fore_ptr;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::MarkerSetForeground(int, const wxColour &)");
		}
		self->MarkerSetForeground(markerNumber, fore);

		return 0;
	}

	// void wxStyledTextCtrl::MoveCaretInsideView()
	static int _bind_MoveCaretInsideView(lua_State *L) {
		if (!_lg_typecheck_MoveCaretInsideView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::MoveCaretInsideView() function, expected prototype:\nvoid wxStyledTextCtrl::MoveCaretInsideView()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::MoveCaretInsideView()");
		}
		self->MoveCaretInsideView();

		return 0;
	}

	// void wxStyledTextCtrl::NewLine()
	static int _bind_NewLine(lua_State *L) {
		if (!_lg_typecheck_NewLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::NewLine() function, expected prototype:\nvoid wxStyledTextCtrl::NewLine()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::NewLine()");
		}
		self->NewLine();

		return 0;
	}

	// void wxStyledTextCtrl::PageDown()
	static int _bind_PageDown(lua_State *L) {
		if (!_lg_typecheck_PageDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::PageDown() function, expected prototype:\nvoid wxStyledTextCtrl::PageDown()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::PageDown()");
		}
		self->PageDown();

		return 0;
	}

	// void wxStyledTextCtrl::PageDownExtend()
	static int _bind_PageDownExtend(lua_State *L) {
		if (!_lg_typecheck_PageDownExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::PageDownExtend() function, expected prototype:\nvoid wxStyledTextCtrl::PageDownExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::PageDownExtend()");
		}
		self->PageDownExtend();

		return 0;
	}

	// void wxStyledTextCtrl::PageDownRectExtend()
	static int _bind_PageDownRectExtend(lua_State *L) {
		if (!_lg_typecheck_PageDownRectExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::PageDownRectExtend() function, expected prototype:\nvoid wxStyledTextCtrl::PageDownRectExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::PageDownRectExtend()");
		}
		self->PageDownRectExtend();

		return 0;
	}

	// void wxStyledTextCtrl::PageUp()
	static int _bind_PageUp(lua_State *L) {
		if (!_lg_typecheck_PageUp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::PageUp() function, expected prototype:\nvoid wxStyledTextCtrl::PageUp()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::PageUp()");
		}
		self->PageUp();

		return 0;
	}

	// void wxStyledTextCtrl::PageUpExtend()
	static int _bind_PageUpExtend(lua_State *L) {
		if (!_lg_typecheck_PageUpExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::PageUpExtend() function, expected prototype:\nvoid wxStyledTextCtrl::PageUpExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::PageUpExtend()");
		}
		self->PageUpExtend();

		return 0;
	}

	// void wxStyledTextCtrl::PageUpRectExtend()
	static int _bind_PageUpRectExtend(lua_State *L) {
		if (!_lg_typecheck_PageUpRectExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::PageUpRectExtend() function, expected prototype:\nvoid wxStyledTextCtrl::PageUpRectExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::PageUpRectExtend()");
		}
		self->PageUpRectExtend();

		return 0;
	}

	// void wxStyledTextCtrl::ParaDown()
	static int _bind_ParaDown(lua_State *L) {
		if (!_lg_typecheck_ParaDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::ParaDown() function, expected prototype:\nvoid wxStyledTextCtrl::ParaDown()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::ParaDown()");
		}
		self->ParaDown();

		return 0;
	}

	// void wxStyledTextCtrl::ParaDownExtend()
	static int _bind_ParaDownExtend(lua_State *L) {
		if (!_lg_typecheck_ParaDownExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::ParaDownExtend() function, expected prototype:\nvoid wxStyledTextCtrl::ParaDownExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::ParaDownExtend()");
		}
		self->ParaDownExtend();

		return 0;
	}

	// void wxStyledTextCtrl::ParaUp()
	static int _bind_ParaUp(lua_State *L) {
		if (!_lg_typecheck_ParaUp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::ParaUp() function, expected prototype:\nvoid wxStyledTextCtrl::ParaUp()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::ParaUp()");
		}
		self->ParaUp();

		return 0;
	}

	// void wxStyledTextCtrl::ParaUpExtend()
	static int _bind_ParaUpExtend(lua_State *L) {
		if (!_lg_typecheck_ParaUpExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::ParaUpExtend() function, expected prototype:\nvoid wxStyledTextCtrl::ParaUpExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::ParaUpExtend()");
		}
		self->ParaUpExtend();

		return 0;
	}

	// void wxStyledTextCtrl::Paste()
	static int _bind_Paste(lua_State *L) {
		if (!_lg_typecheck_Paste(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::Paste() function, expected prototype:\nvoid wxStyledTextCtrl::Paste()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::Paste()");
		}
		self->Paste();

		return 0;
	}

	// wxPoint wxStyledTextCtrl::PointFromPosition(int pos)
	static int _bind_PointFromPosition(lua_State *L) {
		if (!_lg_typecheck_PointFromPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxStyledTextCtrl::PointFromPosition(int pos) function, expected prototype:\nwxPoint wxStyledTextCtrl::PointFromPosition(int pos)\nClass arguments details:\n");
		}

		int pos=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxStyledTextCtrl::PointFromPosition(int)");
		}
		wxPoint stack_lret = self->PointFromPosition(pos);
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// int wxStyledTextCtrl::PositionAfter(int pos)
	static int _bind_PositionAfter(lua_State *L) {
		if (!_lg_typecheck_PositionAfter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::PositionAfter(int pos) function, expected prototype:\nint wxStyledTextCtrl::PositionAfter(int pos)\nClass arguments details:\n");
		}

		int pos=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::PositionAfter(int)");
		}
		int lret = self->PositionAfter(pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::PositionBefore(int pos)
	static int _bind_PositionBefore(lua_State *L) {
		if (!_lg_typecheck_PositionBefore(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::PositionBefore(int pos) function, expected prototype:\nint wxStyledTextCtrl::PositionBefore(int pos)\nClass arguments details:\n");
		}

		int pos=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::PositionBefore(int)");
		}
		int lret = self->PositionBefore(pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::PositionFromLine(int line) const
	static int _bind_PositionFromLine(lua_State *L) {
		if (!_lg_typecheck_PositionFromLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::PositionFromLine(int line) const function, expected prototype:\nint wxStyledTextCtrl::PositionFromLine(int line) const\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::PositionFromLine(int) const");
		}
		int lret = self->PositionFromLine(line);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::PositionFromPoint(wxPoint pt) const
	static int _bind_PositionFromPoint(lua_State *L) {
		if (!_lg_typecheck_PositionFromPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::PositionFromPoint(wxPoint pt) const function, expected prototype:\nint wxStyledTextCtrl::PositionFromPoint(wxPoint pt) const\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxStyledTextCtrl::PositionFromPoint function");
		}
		wxPoint pt=*pt_ptr;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::PositionFromPoint(wxPoint) const");
		}
		int lret = self->PositionFromPoint(pt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::PositionFromPointClose(int x, int y)
	static int _bind_PositionFromPointClose(lua_State *L) {
		if (!_lg_typecheck_PositionFromPointClose(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::PositionFromPointClose(int x, int y) function, expected prototype:\nint wxStyledTextCtrl::PositionFromPointClose(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::PositionFromPointClose(int, int)");
		}
		int lret = self->PositionFromPointClose(x, y);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::Redo()
	static int _bind_Redo(lua_State *L) {
		if (!_lg_typecheck_Redo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::Redo() function, expected prototype:\nvoid wxStyledTextCtrl::Redo()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::Redo()");
		}
		self->Redo();

		return 0;
	}

	// void wxStyledTextCtrl::RegisterImage(int type, const wxBitmap & bmp)
	static int _bind_RegisterImage(lua_State *L) {
		if (!_lg_typecheck_RegisterImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::RegisterImage(int type, const wxBitmap & bmp) function, expected prototype:\nvoid wxStyledTextCtrl::RegisterImage(int type, const wxBitmap & bmp)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		int type=(int)lua_tointeger(L,2);
		const wxBitmap* bmp_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,3));
		if( !bmp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmp in wxStyledTextCtrl::RegisterImage function");
		}
		const wxBitmap & bmp=*bmp_ptr;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::RegisterImage(int, const wxBitmap &)");
		}
		self->RegisterImage(type, bmp);

		return 0;
	}

	// void wxStyledTextCtrl::ReleaseDocument(void * docPointer)
	static int _bind_ReleaseDocument(lua_State *L) {
		if (!_lg_typecheck_ReleaseDocument(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::ReleaseDocument(void * docPointer) function, expected prototype:\nvoid wxStyledTextCtrl::ReleaseDocument(void * docPointer)\nClass arguments details:\n");
		}

		void* docPointer=(Luna< void >::check(L,2));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::ReleaseDocument(void *)");
		}
		self->ReleaseDocument(docPointer);

		return 0;
	}

	// void wxStyledTextCtrl::ReplaceSelection(const wxString & text)
	static int _bind_ReplaceSelection(lua_State *L) {
		if (!_lg_typecheck_ReplaceSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::ReplaceSelection(const wxString & text) function, expected prototype:\nvoid wxStyledTextCtrl::ReplaceSelection(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::ReplaceSelection(const wxString &)");
		}
		self->ReplaceSelection(text);

		return 0;
	}

	// int wxStyledTextCtrl::ReplaceTarget(const wxString & text)
	static int _bind_ReplaceTarget(lua_State *L) {
		if (!_lg_typecheck_ReplaceTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::ReplaceTarget(const wxString & text) function, expected prototype:\nint wxStyledTextCtrl::ReplaceTarget(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::ReplaceTarget(const wxString &)");
		}
		int lret = self->ReplaceTarget(text);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::ReplaceTargetRE(const wxString & text)
	static int _bind_ReplaceTargetRE(lua_State *L) {
		if (!_lg_typecheck_ReplaceTargetRE(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::ReplaceTargetRE(const wxString & text) function, expected prototype:\nint wxStyledTextCtrl::ReplaceTargetRE(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::ReplaceTargetRE(const wxString &)");
		}
		int lret = self->ReplaceTargetRE(text);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxStyledTextCtrl::SaveFile(const wxString & file = wxEmptyString, int fileType = wxTEXT_TYPE_ANY)
	static int _bind_SaveFile(lua_State *L) {
		if (!_lg_typecheck_SaveFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::SaveFile(const wxString & file = wxEmptyString, int fileType = wxTEXT_TYPE_ANY) function, expected prototype:\nbool wxStyledTextCtrl::SaveFile(const wxString & file = wxEmptyString, int fileType = wxTEXT_TYPE_ANY)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString file(lua_tostring(L,2),lua_objlen(L,2));
		int fileType=luatop>2 ? (int)lua_tointeger(L,3) : wxTEXT_TYPE_ANY;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::SaveFile(const wxString &, int)");
		}
		bool lret = self->SaveFile(file, fileType);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxStyledTextCtrl::ScrollToColumn(int column)
	static int _bind_ScrollToColumn(lua_State *L) {
		if (!_lg_typecheck_ScrollToColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::ScrollToColumn(int column) function, expected prototype:\nvoid wxStyledTextCtrl::ScrollToColumn(int column)\nClass arguments details:\n");
		}

		int column=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::ScrollToColumn(int)");
		}
		self->ScrollToColumn(column);

		return 0;
	}

	// void wxStyledTextCtrl::ScrollToLine(int line)
	static int _bind_ScrollToLine(lua_State *L) {
		if (!_lg_typecheck_ScrollToLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::ScrollToLine(int line) function, expected prototype:\nvoid wxStyledTextCtrl::ScrollToLine(int line)\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::ScrollToLine(int)");
		}
		self->ScrollToLine(line);

		return 0;
	}

	// void wxStyledTextCtrl::SearchAnchor()
	static int _bind_SearchAnchor(lua_State *L) {
		if (!_lg_typecheck_SearchAnchor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SearchAnchor() function, expected prototype:\nvoid wxStyledTextCtrl::SearchAnchor()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SearchAnchor()");
		}
		self->SearchAnchor();

		return 0;
	}

	// int wxStyledTextCtrl::SearchInTarget(const wxString & text)
	static int _bind_SearchInTarget(lua_State *L) {
		if (!_lg_typecheck_SearchInTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::SearchInTarget(const wxString & text) function, expected prototype:\nint wxStyledTextCtrl::SearchInTarget(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::SearchInTarget(const wxString &)");
		}
		int lret = self->SearchInTarget(text);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::SearchNext(int flags, const wxString & text)
	static int _bind_SearchNext(lua_State *L) {
		if (!_lg_typecheck_SearchNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::SearchNext(int flags, const wxString & text) function, expected prototype:\nint wxStyledTextCtrl::SearchNext(int flags, const wxString & text)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int flags=(int)lua_tointeger(L,2);
		wxString text(lua_tostring(L,3),lua_objlen(L,3));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::SearchNext(int, const wxString &)");
		}
		int lret = self->SearchNext(flags, text);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::SearchPrev(int flags, const wxString & text)
	static int _bind_SearchPrev(lua_State *L) {
		if (!_lg_typecheck_SearchPrev(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::SearchPrev(int flags, const wxString & text) function, expected prototype:\nint wxStyledTextCtrl::SearchPrev(int flags, const wxString & text)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int flags=(int)lua_tointeger(L,2);
		wxString text(lua_tostring(L,3),lua_objlen(L,3));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::SearchPrev(int, const wxString &)");
		}
		int lret = self->SearchPrev(flags, text);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::SelectAll()
	static int _bind_SelectAll(lua_State *L) {
		if (!_lg_typecheck_SelectAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SelectAll() function, expected prototype:\nvoid wxStyledTextCtrl::SelectAll()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SelectAll()");
		}
		self->SelectAll();

		return 0;
	}

	// void wxStyledTextCtrl::SelectionDuplicate()
	static int _bind_SelectionDuplicate(lua_State *L) {
		if (!_lg_typecheck_SelectionDuplicate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SelectionDuplicate() function, expected prototype:\nvoid wxStyledTextCtrl::SelectionDuplicate()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SelectionDuplicate()");
		}
		self->SelectionDuplicate();

		return 0;
	}

	// bool wxStyledTextCtrl::SelectionIsRectangle() const
	static int _bind_SelectionIsRectangle(lua_State *L) {
		if (!_lg_typecheck_SelectionIsRectangle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::SelectionIsRectangle() const function, expected prototype:\nbool wxStyledTextCtrl::SelectionIsRectangle() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::SelectionIsRectangle() const");
		}
		bool lret = self->SelectionIsRectangle();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxStyledTextCtrl::SetAnchor(int posAnchor)
	static int _bind_SetAnchor(lua_State *L) {
		if (!_lg_typecheck_SetAnchor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetAnchor(int posAnchor) function, expected prototype:\nvoid wxStyledTextCtrl::SetAnchor(int posAnchor)\nClass arguments details:\n");
		}

		int posAnchor=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetAnchor(int)");
		}
		self->SetAnchor(posAnchor);

		return 0;
	}

	// void wxStyledTextCtrl::SetBackSpaceUnIndents(bool bsUnIndents)
	static int _bind_SetBackSpaceUnIndents(lua_State *L) {
		if (!_lg_typecheck_SetBackSpaceUnIndents(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetBackSpaceUnIndents(bool bsUnIndents) function, expected prototype:\nvoid wxStyledTextCtrl::SetBackSpaceUnIndents(bool bsUnIndents)\nClass arguments details:\n");
		}

		bool bsUnIndents=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetBackSpaceUnIndents(bool)");
		}
		self->SetBackSpaceUnIndents(bsUnIndents);

		return 0;
	}

	// void wxStyledTextCtrl::SetCaretForeground(const wxColour & fore)
	static int _bind_SetCaretForeground(lua_State *L) {
		if (!_lg_typecheck_SetCaretForeground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetCaretForeground(const wxColour & fore) function, expected prototype:\nvoid wxStyledTextCtrl::SetCaretForeground(const wxColour & fore)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* fore_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !fore_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fore in wxStyledTextCtrl::SetCaretForeground function");
		}
		const wxColour & fore=*fore_ptr;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetCaretForeground(const wxColour &)");
		}
		self->SetCaretForeground(fore);

		return 0;
	}

	// void wxStyledTextCtrl::SetCaretLineBackAlpha(int alpha)
	static int _bind_SetCaretLineBackAlpha(lua_State *L) {
		if (!_lg_typecheck_SetCaretLineBackAlpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetCaretLineBackAlpha(int alpha) function, expected prototype:\nvoid wxStyledTextCtrl::SetCaretLineBackAlpha(int alpha)\nClass arguments details:\n");
		}

		int alpha=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetCaretLineBackAlpha(int)");
		}
		self->SetCaretLineBackAlpha(alpha);

		return 0;
	}

	// void wxStyledTextCtrl::SetCaretLineBackground(const wxColour & back)
	static int _bind_SetCaretLineBackground(lua_State *L) {
		if (!_lg_typecheck_SetCaretLineBackground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetCaretLineBackground(const wxColour & back) function, expected prototype:\nvoid wxStyledTextCtrl::SetCaretLineBackground(const wxColour & back)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* back_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !back_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg back in wxStyledTextCtrl::SetCaretLineBackground function");
		}
		const wxColour & back=*back_ptr;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetCaretLineBackground(const wxColour &)");
		}
		self->SetCaretLineBackground(back);

		return 0;
	}

	// void wxStyledTextCtrl::SetCaretLineVisible(bool show)
	static int _bind_SetCaretLineVisible(lua_State *L) {
		if (!_lg_typecheck_SetCaretLineVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetCaretLineVisible(bool show) function, expected prototype:\nvoid wxStyledTextCtrl::SetCaretLineVisible(bool show)\nClass arguments details:\n");
		}

		bool show=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetCaretLineVisible(bool)");
		}
		self->SetCaretLineVisible(show);

		return 0;
	}

	// void wxStyledTextCtrl::SetCaretPeriod(int periodMilliseconds)
	static int _bind_SetCaretPeriod(lua_State *L) {
		if (!_lg_typecheck_SetCaretPeriod(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetCaretPeriod(int periodMilliseconds) function, expected prototype:\nvoid wxStyledTextCtrl::SetCaretPeriod(int periodMilliseconds)\nClass arguments details:\n");
		}

		int periodMilliseconds=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetCaretPeriod(int)");
		}
		self->SetCaretPeriod(periodMilliseconds);

		return 0;
	}

	// void wxStyledTextCtrl::SetCaretSticky(bool useCaretStickyBehaviour)
	static int _bind_SetCaretSticky(lua_State *L) {
		if (!_lg_typecheck_SetCaretSticky(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetCaretSticky(bool useCaretStickyBehaviour) function, expected prototype:\nvoid wxStyledTextCtrl::SetCaretSticky(bool useCaretStickyBehaviour)\nClass arguments details:\n");
		}

		bool useCaretStickyBehaviour=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetCaretSticky(bool)");
		}
		self->SetCaretSticky(useCaretStickyBehaviour);

		return 0;
	}

	// void wxStyledTextCtrl::SetCaretWidth(int pixelWidth)
	static int _bind_SetCaretWidth(lua_State *L) {
		if (!_lg_typecheck_SetCaretWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetCaretWidth(int pixelWidth) function, expected prototype:\nvoid wxStyledTextCtrl::SetCaretWidth(int pixelWidth)\nClass arguments details:\n");
		}

		int pixelWidth=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetCaretWidth(int)");
		}
		self->SetCaretWidth(pixelWidth);

		return 0;
	}

	// void wxStyledTextCtrl::SetCharsDefault()
	static int _bind_SetCharsDefault(lua_State *L) {
		if (!_lg_typecheck_SetCharsDefault(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetCharsDefault() function, expected prototype:\nvoid wxStyledTextCtrl::SetCharsDefault()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetCharsDefault()");
		}
		self->SetCharsDefault();

		return 0;
	}

	// void wxStyledTextCtrl::SetCodePage(int codePage)
	static int _bind_SetCodePage(lua_State *L) {
		if (!_lg_typecheck_SetCodePage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetCodePage(int codePage) function, expected prototype:\nvoid wxStyledTextCtrl::SetCodePage(int codePage)\nClass arguments details:\n");
		}

		int codePage=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetCodePage(int)");
		}
		self->SetCodePage(codePage);

		return 0;
	}

	// void wxStyledTextCtrl::SetControlCharSymbol(int symbol)
	static int _bind_SetControlCharSymbol(lua_State *L) {
		if (!_lg_typecheck_SetControlCharSymbol(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetControlCharSymbol(int symbol) function, expected prototype:\nvoid wxStyledTextCtrl::SetControlCharSymbol(int symbol)\nClass arguments details:\n");
		}

		int symbol=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetControlCharSymbol(int)");
		}
		self->SetControlCharSymbol(symbol);

		return 0;
	}

	// void wxStyledTextCtrl::SetCurrentPos(int pos)
	static int _bind_SetCurrentPos(lua_State *L) {
		if (!_lg_typecheck_SetCurrentPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetCurrentPos(int pos) function, expected prototype:\nvoid wxStyledTextCtrl::SetCurrentPos(int pos)\nClass arguments details:\n");
		}

		int pos=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetCurrentPos(int)");
		}
		self->SetCurrentPos(pos);

		return 0;
	}

	// void wxStyledTextCtrl::SetDocPointer(void * docPointer)
	static int _bind_SetDocPointer(lua_State *L) {
		if (!_lg_typecheck_SetDocPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetDocPointer(void * docPointer) function, expected prototype:\nvoid wxStyledTextCtrl::SetDocPointer(void * docPointer)\nClass arguments details:\n");
		}

		void* docPointer=(Luna< void >::check(L,2));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetDocPointer(void *)");
		}
		self->SetDocPointer(docPointer);

		return 0;
	}

	// void wxStyledTextCtrl::SetEOLMode(int eolMode)
	static int _bind_SetEOLMode(lua_State *L) {
		if (!_lg_typecheck_SetEOLMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetEOLMode(int eolMode) function, expected prototype:\nvoid wxStyledTextCtrl::SetEOLMode(int eolMode)\nClass arguments details:\n");
		}

		int eolMode=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetEOLMode(int)");
		}
		self->SetEOLMode(eolMode);

		return 0;
	}

	// void wxStyledTextCtrl::SetEdgeColour(const wxColour & edgeColour)
	static int _bind_SetEdgeColour(lua_State *L) {
		if (!_lg_typecheck_SetEdgeColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetEdgeColour(const wxColour & edgeColour) function, expected prototype:\nvoid wxStyledTextCtrl::SetEdgeColour(const wxColour & edgeColour)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* edgeColour_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !edgeColour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg edgeColour in wxStyledTextCtrl::SetEdgeColour function");
		}
		const wxColour & edgeColour=*edgeColour_ptr;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetEdgeColour(const wxColour &)");
		}
		self->SetEdgeColour(edgeColour);

		return 0;
	}

	// void wxStyledTextCtrl::SetEdgeColumn(int column)
	static int _bind_SetEdgeColumn(lua_State *L) {
		if (!_lg_typecheck_SetEdgeColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetEdgeColumn(int column) function, expected prototype:\nvoid wxStyledTextCtrl::SetEdgeColumn(int column)\nClass arguments details:\n");
		}

		int column=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetEdgeColumn(int)");
		}
		self->SetEdgeColumn(column);

		return 0;
	}

	// void wxStyledTextCtrl::SetEdgeMode(int mode)
	static int _bind_SetEdgeMode(lua_State *L) {
		if (!_lg_typecheck_SetEdgeMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetEdgeMode(int mode) function, expected prototype:\nvoid wxStyledTextCtrl::SetEdgeMode(int mode)\nClass arguments details:\n");
		}

		int mode=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetEdgeMode(int)");
		}
		self->SetEdgeMode(mode);

		return 0;
	}

	// void wxStyledTextCtrl::SetEndAtLastLine(bool endAtLastLine)
	static int _bind_SetEndAtLastLine(lua_State *L) {
		if (!_lg_typecheck_SetEndAtLastLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetEndAtLastLine(bool endAtLastLine) function, expected prototype:\nvoid wxStyledTextCtrl::SetEndAtLastLine(bool endAtLastLine)\nClass arguments details:\n");
		}

		bool endAtLastLine=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetEndAtLastLine(bool)");
		}
		self->SetEndAtLastLine(endAtLastLine);

		return 0;
	}

	// void wxStyledTextCtrl::SetFoldExpanded(int line, bool expanded)
	static int _bind_SetFoldExpanded(lua_State *L) {
		if (!_lg_typecheck_SetFoldExpanded(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetFoldExpanded(int line, bool expanded) function, expected prototype:\nvoid wxStyledTextCtrl::SetFoldExpanded(int line, bool expanded)\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);
		bool expanded=(bool)(lua_toboolean(L,3)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetFoldExpanded(int, bool)");
		}
		self->SetFoldExpanded(line, expanded);

		return 0;
	}

	// void wxStyledTextCtrl::SetFoldFlags(int flags)
	static int _bind_SetFoldFlags(lua_State *L) {
		if (!_lg_typecheck_SetFoldFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetFoldFlags(int flags) function, expected prototype:\nvoid wxStyledTextCtrl::SetFoldFlags(int flags)\nClass arguments details:\n");
		}

		int flags=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetFoldFlags(int)");
		}
		self->SetFoldFlags(flags);

		return 0;
	}

	// void wxStyledTextCtrl::SetFoldLevel(int line, int level)
	static int _bind_SetFoldLevel(lua_State *L) {
		if (!_lg_typecheck_SetFoldLevel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetFoldLevel(int line, int level) function, expected prototype:\nvoid wxStyledTextCtrl::SetFoldLevel(int line, int level)\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);
		int level=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetFoldLevel(int, int)");
		}
		self->SetFoldLevel(line, level);

		return 0;
	}

	// void wxStyledTextCtrl::SetFoldMarginColour(bool useSetting, const wxColour & back)
	static int _bind_SetFoldMarginColour(lua_State *L) {
		if (!_lg_typecheck_SetFoldMarginColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetFoldMarginColour(bool useSetting, const wxColour & back) function, expected prototype:\nvoid wxStyledTextCtrl::SetFoldMarginColour(bool useSetting, const wxColour & back)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		bool useSetting=(bool)(lua_toboolean(L,2)==1);
		const wxColour* back_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,3));
		if( !back_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg back in wxStyledTextCtrl::SetFoldMarginColour function");
		}
		const wxColour & back=*back_ptr;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetFoldMarginColour(bool, const wxColour &)");
		}
		self->SetFoldMarginColour(useSetting, back);

		return 0;
	}

	// void wxStyledTextCtrl::SetFoldMarginHiColour(bool useSetting, const wxColour & fore)
	static int _bind_SetFoldMarginHiColour(lua_State *L) {
		if (!_lg_typecheck_SetFoldMarginHiColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetFoldMarginHiColour(bool useSetting, const wxColour & fore) function, expected prototype:\nvoid wxStyledTextCtrl::SetFoldMarginHiColour(bool useSetting, const wxColour & fore)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		bool useSetting=(bool)(lua_toboolean(L,2)==1);
		const wxColour* fore_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,3));
		if( !fore_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fore in wxStyledTextCtrl::SetFoldMarginHiColour function");
		}
		const wxColour & fore=*fore_ptr;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetFoldMarginHiColour(bool, const wxColour &)");
		}
		self->SetFoldMarginHiColour(useSetting, fore);

		return 0;
	}

	// void wxStyledTextCtrl::SetHScrollBar(wxScrollBar * bar)
	static int _bind_SetHScrollBar(lua_State *L) {
		if (!_lg_typecheck_SetHScrollBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetHScrollBar(wxScrollBar * bar) function, expected prototype:\nvoid wxStyledTextCtrl::SetHScrollBar(wxScrollBar * bar)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxScrollBar* bar=dynamic_cast< wxScrollBar* >(Luna< wxObject >::check(L,2));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetHScrollBar(wxScrollBar *)");
		}
		self->SetHScrollBar(bar);

		return 0;
	}

	// void wxStyledTextCtrl::SetHighlightGuide(int column)
	static int _bind_SetHighlightGuide(lua_State *L) {
		if (!_lg_typecheck_SetHighlightGuide(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetHighlightGuide(int column) function, expected prototype:\nvoid wxStyledTextCtrl::SetHighlightGuide(int column)\nClass arguments details:\n");
		}

		int column=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetHighlightGuide(int)");
		}
		self->SetHighlightGuide(column);

		return 0;
	}

	// void wxStyledTextCtrl::SetHotspotActiveBackground(bool useSetting, const wxColour & back)
	static int _bind_SetHotspotActiveBackground(lua_State *L) {
		if (!_lg_typecheck_SetHotspotActiveBackground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetHotspotActiveBackground(bool useSetting, const wxColour & back) function, expected prototype:\nvoid wxStyledTextCtrl::SetHotspotActiveBackground(bool useSetting, const wxColour & back)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		bool useSetting=(bool)(lua_toboolean(L,2)==1);
		const wxColour* back_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,3));
		if( !back_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg back in wxStyledTextCtrl::SetHotspotActiveBackground function");
		}
		const wxColour & back=*back_ptr;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetHotspotActiveBackground(bool, const wxColour &)");
		}
		self->SetHotspotActiveBackground(useSetting, back);

		return 0;
	}

	// void wxStyledTextCtrl::SetHotspotActiveForeground(bool useSetting, const wxColour & fore)
	static int _bind_SetHotspotActiveForeground(lua_State *L) {
		if (!_lg_typecheck_SetHotspotActiveForeground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetHotspotActiveForeground(bool useSetting, const wxColour & fore) function, expected prototype:\nvoid wxStyledTextCtrl::SetHotspotActiveForeground(bool useSetting, const wxColour & fore)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		bool useSetting=(bool)(lua_toboolean(L,2)==1);
		const wxColour* fore_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,3));
		if( !fore_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fore in wxStyledTextCtrl::SetHotspotActiveForeground function");
		}
		const wxColour & fore=*fore_ptr;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetHotspotActiveForeground(bool, const wxColour &)");
		}
		self->SetHotspotActiveForeground(useSetting, fore);

		return 0;
	}

	// void wxStyledTextCtrl::SetHotspotActiveUnderline(bool underline)
	static int _bind_SetHotspotActiveUnderline(lua_State *L) {
		if (!_lg_typecheck_SetHotspotActiveUnderline(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetHotspotActiveUnderline(bool underline) function, expected prototype:\nvoid wxStyledTextCtrl::SetHotspotActiveUnderline(bool underline)\nClass arguments details:\n");
		}

		bool underline=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetHotspotActiveUnderline(bool)");
		}
		self->SetHotspotActiveUnderline(underline);

		return 0;
	}

	// void wxStyledTextCtrl::SetHotspotSingleLine(bool singleLine)
	static int _bind_SetHotspotSingleLine(lua_State *L) {
		if (!_lg_typecheck_SetHotspotSingleLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetHotspotSingleLine(bool singleLine) function, expected prototype:\nvoid wxStyledTextCtrl::SetHotspotSingleLine(bool singleLine)\nClass arguments details:\n");
		}

		bool singleLine=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetHotspotSingleLine(bool)");
		}
		self->SetHotspotSingleLine(singleLine);

		return 0;
	}

	// void wxStyledTextCtrl::SetIndent(int indentSize)
	static int _bind_SetIndent(lua_State *L) {
		if (!_lg_typecheck_SetIndent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetIndent(int indentSize) function, expected prototype:\nvoid wxStyledTextCtrl::SetIndent(int indentSize)\nClass arguments details:\n");
		}

		int indentSize=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetIndent(int)");
		}
		self->SetIndent(indentSize);

		return 0;
	}

	// void wxStyledTextCtrl::SetIndentationGuides(int indentView)
	static int _bind_SetIndentationGuides(lua_State *L) {
		if (!_lg_typecheck_SetIndentationGuides(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetIndentationGuides(int indentView) function, expected prototype:\nvoid wxStyledTextCtrl::SetIndentationGuides(int indentView)\nClass arguments details:\n");
		}

		int indentView=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetIndentationGuides(int)");
		}
		self->SetIndentationGuides(indentView);

		return 0;
	}

	// void wxStyledTextCtrl::SetKeyWords(int keywordSet, const wxString & keyWords)
	static int _bind_SetKeyWords(lua_State *L) {
		if (!_lg_typecheck_SetKeyWords(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetKeyWords(int keywordSet, const wxString & keyWords) function, expected prototype:\nvoid wxStyledTextCtrl::SetKeyWords(int keywordSet, const wxString & keyWords)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int keywordSet=(int)lua_tointeger(L,2);
		wxString keyWords(lua_tostring(L,3),lua_objlen(L,3));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetKeyWords(int, const wxString &)");
		}
		self->SetKeyWords(keywordSet, keyWords);

		return 0;
	}

	// void wxStyledTextCtrl::SetLastKeydownProcessed(bool val)
	static int _bind_SetLastKeydownProcessed(lua_State *L) {
		if (!_lg_typecheck_SetLastKeydownProcessed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetLastKeydownProcessed(bool val) function, expected prototype:\nvoid wxStyledTextCtrl::SetLastKeydownProcessed(bool val)\nClass arguments details:\n");
		}

		bool val=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetLastKeydownProcessed(bool)");
		}
		self->SetLastKeydownProcessed(val);

		return 0;
	}

	// void wxStyledTextCtrl::SetLayoutCache(int mode)
	static int _bind_SetLayoutCache(lua_State *L) {
		if (!_lg_typecheck_SetLayoutCache(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetLayoutCache(int mode) function, expected prototype:\nvoid wxStyledTextCtrl::SetLayoutCache(int mode)\nClass arguments details:\n");
		}

		int mode=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetLayoutCache(int)");
		}
		self->SetLayoutCache(mode);

		return 0;
	}

	// void wxStyledTextCtrl::SetLexer(int lexer)
	static int _bind_SetLexer(lua_State *L) {
		if (!_lg_typecheck_SetLexer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetLexer(int lexer) function, expected prototype:\nvoid wxStyledTextCtrl::SetLexer(int lexer)\nClass arguments details:\n");
		}

		int lexer=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetLexer(int)");
		}
		self->SetLexer(lexer);

		return 0;
	}

	// void wxStyledTextCtrl::SetLexerLanguage(const wxString & language)
	static int _bind_SetLexerLanguage(lua_State *L) {
		if (!_lg_typecheck_SetLexerLanguage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetLexerLanguage(const wxString & language) function, expected prototype:\nvoid wxStyledTextCtrl::SetLexerLanguage(const wxString & language)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString language(lua_tostring(L,2),lua_objlen(L,2));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetLexerLanguage(const wxString &)");
		}
		self->SetLexerLanguage(language);

		return 0;
	}

	// void wxStyledTextCtrl::SetLineIndentation(int line, int indentSize)
	static int _bind_SetLineIndentation(lua_State *L) {
		if (!_lg_typecheck_SetLineIndentation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetLineIndentation(int line, int indentSize) function, expected prototype:\nvoid wxStyledTextCtrl::SetLineIndentation(int line, int indentSize)\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);
		int indentSize=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetLineIndentation(int, int)");
		}
		self->SetLineIndentation(line, indentSize);

		return 0;
	}

	// void wxStyledTextCtrl::SetLineState(int line, int state)
	static int _bind_SetLineState(lua_State *L) {
		if (!_lg_typecheck_SetLineState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetLineState(int line, int state) function, expected prototype:\nvoid wxStyledTextCtrl::SetLineState(int line, int state)\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);
		int state=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetLineState(int, int)");
		}
		self->SetLineState(line, state);

		return 0;
	}

	// void wxStyledTextCtrl::SetMarginLeft(int pixelWidth)
	static int _bind_SetMarginLeft(lua_State *L) {
		if (!_lg_typecheck_SetMarginLeft(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetMarginLeft(int pixelWidth) function, expected prototype:\nvoid wxStyledTextCtrl::SetMarginLeft(int pixelWidth)\nClass arguments details:\n");
		}

		int pixelWidth=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetMarginLeft(int)");
		}
		self->SetMarginLeft(pixelWidth);

		return 0;
	}

	// void wxStyledTextCtrl::SetMarginMask(int margin, int mask)
	static int _bind_SetMarginMask(lua_State *L) {
		if (!_lg_typecheck_SetMarginMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetMarginMask(int margin, int mask) function, expected prototype:\nvoid wxStyledTextCtrl::SetMarginMask(int margin, int mask)\nClass arguments details:\n");
		}

		int margin=(int)lua_tointeger(L,2);
		int mask=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetMarginMask(int, int)");
		}
		self->SetMarginMask(margin, mask);

		return 0;
	}

	// void wxStyledTextCtrl::SetMarginRight(int pixelWidth)
	static int _bind_SetMarginRight(lua_State *L) {
		if (!_lg_typecheck_SetMarginRight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetMarginRight(int pixelWidth) function, expected prototype:\nvoid wxStyledTextCtrl::SetMarginRight(int pixelWidth)\nClass arguments details:\n");
		}

		int pixelWidth=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetMarginRight(int)");
		}
		self->SetMarginRight(pixelWidth);

		return 0;
	}

	// void wxStyledTextCtrl::SetMarginSensitive(int margin, bool sensitive)
	static int _bind_SetMarginSensitive(lua_State *L) {
		if (!_lg_typecheck_SetMarginSensitive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetMarginSensitive(int margin, bool sensitive) function, expected prototype:\nvoid wxStyledTextCtrl::SetMarginSensitive(int margin, bool sensitive)\nClass arguments details:\n");
		}

		int margin=(int)lua_tointeger(L,2);
		bool sensitive=(bool)(lua_toboolean(L,3)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetMarginSensitive(int, bool)");
		}
		self->SetMarginSensitive(margin, sensitive);

		return 0;
	}

	// void wxStyledTextCtrl::SetMarginType(int margin, int marginType)
	static int _bind_SetMarginType(lua_State *L) {
		if (!_lg_typecheck_SetMarginType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetMarginType(int margin, int marginType) function, expected prototype:\nvoid wxStyledTextCtrl::SetMarginType(int margin, int marginType)\nClass arguments details:\n");
		}

		int margin=(int)lua_tointeger(L,2);
		int marginType=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetMarginType(int, int)");
		}
		self->SetMarginType(margin, marginType);

		return 0;
	}

	// void wxStyledTextCtrl::SetMarginWidth(int margin, int pixelWidth)
	static int _bind_SetMarginWidth(lua_State *L) {
		if (!_lg_typecheck_SetMarginWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetMarginWidth(int margin, int pixelWidth) function, expected prototype:\nvoid wxStyledTextCtrl::SetMarginWidth(int margin, int pixelWidth)\nClass arguments details:\n");
		}

		int margin=(int)lua_tointeger(L,2);
		int pixelWidth=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetMarginWidth(int, int)");
		}
		self->SetMarginWidth(margin, pixelWidth);

		return 0;
	}

	// void wxStyledTextCtrl::SetMargins(int left, int right)
	static int _bind_SetMargins(lua_State *L) {
		if (!_lg_typecheck_SetMargins(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetMargins(int left, int right) function, expected prototype:\nvoid wxStyledTextCtrl::SetMargins(int left, int right)\nClass arguments details:\n");
		}

		int left=(int)lua_tointeger(L,2);
		int right=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetMargins(int, int)");
		}
		self->SetMargins(left, right);

		return 0;
	}

	// void wxStyledTextCtrl::SetModEventMask(int mask)
	static int _bind_SetModEventMask(lua_State *L) {
		if (!_lg_typecheck_SetModEventMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetModEventMask(int mask) function, expected prototype:\nvoid wxStyledTextCtrl::SetModEventMask(int mask)\nClass arguments details:\n");
		}

		int mask=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetModEventMask(int)");
		}
		self->SetModEventMask(mask);

		return 0;
	}

	// void wxStyledTextCtrl::SetMouseDownCaptures(bool captures)
	static int _bind_SetMouseDownCaptures(lua_State *L) {
		if (!_lg_typecheck_SetMouseDownCaptures(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetMouseDownCaptures(bool captures) function, expected prototype:\nvoid wxStyledTextCtrl::SetMouseDownCaptures(bool captures)\nClass arguments details:\n");
		}

		bool captures=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetMouseDownCaptures(bool)");
		}
		self->SetMouseDownCaptures(captures);

		return 0;
	}

	// void wxStyledTextCtrl::SetMouseDwellTime(int periodMilliseconds)
	static int _bind_SetMouseDwellTime(lua_State *L) {
		if (!_lg_typecheck_SetMouseDwellTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetMouseDwellTime(int periodMilliseconds) function, expected prototype:\nvoid wxStyledTextCtrl::SetMouseDwellTime(int periodMilliseconds)\nClass arguments details:\n");
		}

		int periodMilliseconds=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetMouseDwellTime(int)");
		}
		self->SetMouseDwellTime(periodMilliseconds);

		return 0;
	}

	// void wxStyledTextCtrl::SetOvertype(bool overtype)
	static int _bind_SetOvertype(lua_State *L) {
		if (!_lg_typecheck_SetOvertype(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetOvertype(bool overtype) function, expected prototype:\nvoid wxStyledTextCtrl::SetOvertype(bool overtype)\nClass arguments details:\n");
		}

		bool overtype=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetOvertype(bool)");
		}
		self->SetOvertype(overtype);

		return 0;
	}

	// void wxStyledTextCtrl::SetPasteConvertEndings(bool convert)
	static int _bind_SetPasteConvertEndings(lua_State *L) {
		if (!_lg_typecheck_SetPasteConvertEndings(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetPasteConvertEndings(bool convert) function, expected prototype:\nvoid wxStyledTextCtrl::SetPasteConvertEndings(bool convert)\nClass arguments details:\n");
		}

		bool convert=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetPasteConvertEndings(bool)");
		}
		self->SetPasteConvertEndings(convert);

		return 0;
	}

	// void wxStyledTextCtrl::SetPrintColourMode(int mode)
	static int _bind_SetPrintColourMode(lua_State *L) {
		if (!_lg_typecheck_SetPrintColourMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetPrintColourMode(int mode) function, expected prototype:\nvoid wxStyledTextCtrl::SetPrintColourMode(int mode)\nClass arguments details:\n");
		}

		int mode=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetPrintColourMode(int)");
		}
		self->SetPrintColourMode(mode);

		return 0;
	}

	// void wxStyledTextCtrl::SetPrintMagnification(int magnification)
	static int _bind_SetPrintMagnification(lua_State *L) {
		if (!_lg_typecheck_SetPrintMagnification(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetPrintMagnification(int magnification) function, expected prototype:\nvoid wxStyledTextCtrl::SetPrintMagnification(int magnification)\nClass arguments details:\n");
		}

		int magnification=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetPrintMagnification(int)");
		}
		self->SetPrintMagnification(magnification);

		return 0;
	}

	// void wxStyledTextCtrl::SetPrintWrapMode(int mode)
	static int _bind_SetPrintWrapMode(lua_State *L) {
		if (!_lg_typecheck_SetPrintWrapMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetPrintWrapMode(int mode) function, expected prototype:\nvoid wxStyledTextCtrl::SetPrintWrapMode(int mode)\nClass arguments details:\n");
		}

		int mode=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetPrintWrapMode(int)");
		}
		self->SetPrintWrapMode(mode);

		return 0;
	}

	// void wxStyledTextCtrl::SetProperty(const wxString & key, const wxString & value)
	static int _bind_SetProperty(lua_State *L) {
		if (!_lg_typecheck_SetProperty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetProperty(const wxString & key, const wxString & value) function, expected prototype:\nvoid wxStyledTextCtrl::SetProperty(const wxString & key, const wxString & value)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		wxString key(lua_tostring(L,2),lua_objlen(L,2));
		wxString value(lua_tostring(L,3),lua_objlen(L,3));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetProperty(const wxString &, const wxString &)");
		}
		self->SetProperty(key, value);

		return 0;
	}

	// void wxStyledTextCtrl::SetReadOnly(bool readOnly)
	static int _bind_SetReadOnly(lua_State *L) {
		if (!_lg_typecheck_SetReadOnly(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetReadOnly(bool readOnly) function, expected prototype:\nvoid wxStyledTextCtrl::SetReadOnly(bool readOnly)\nClass arguments details:\n");
		}

		bool readOnly=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetReadOnly(bool)");
		}
		self->SetReadOnly(readOnly);

		return 0;
	}

	// void wxStyledTextCtrl::SetSTCCursor(int cursorType)
	static int _bind_SetSTCCursor(lua_State *L) {
		if (!_lg_typecheck_SetSTCCursor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetSTCCursor(int cursorType) function, expected prototype:\nvoid wxStyledTextCtrl::SetSTCCursor(int cursorType)\nClass arguments details:\n");
		}

		int cursorType=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetSTCCursor(int)");
		}
		self->SetSTCCursor(cursorType);

		return 0;
	}

	// void wxStyledTextCtrl::SetSTCFocus(bool focus)
	static int _bind_SetSTCFocus(lua_State *L) {
		if (!_lg_typecheck_SetSTCFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetSTCFocus(bool focus) function, expected prototype:\nvoid wxStyledTextCtrl::SetSTCFocus(bool focus)\nClass arguments details:\n");
		}

		bool focus=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetSTCFocus(bool)");
		}
		self->SetSTCFocus(focus);

		return 0;
	}

	// void wxStyledTextCtrl::SetSavePoint()
	static int _bind_SetSavePoint(lua_State *L) {
		if (!_lg_typecheck_SetSavePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetSavePoint() function, expected prototype:\nvoid wxStyledTextCtrl::SetSavePoint()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetSavePoint()");
		}
		self->SetSavePoint();

		return 0;
	}

	// void wxStyledTextCtrl::SetScrollWidth(int pixelWidth)
	static int _bind_SetScrollWidth(lua_State *L) {
		if (!_lg_typecheck_SetScrollWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetScrollWidth(int pixelWidth) function, expected prototype:\nvoid wxStyledTextCtrl::SetScrollWidth(int pixelWidth)\nClass arguments details:\n");
		}

		int pixelWidth=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetScrollWidth(int)");
		}
		self->SetScrollWidth(pixelWidth);

		return 0;
	}

	// void wxStyledTextCtrl::SetSearchFlags(int flags)
	static int _bind_SetSearchFlags(lua_State *L) {
		if (!_lg_typecheck_SetSearchFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetSearchFlags(int flags) function, expected prototype:\nvoid wxStyledTextCtrl::SetSearchFlags(int flags)\nClass arguments details:\n");
		}

		int flags=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetSearchFlags(int)");
		}
		self->SetSearchFlags(flags);

		return 0;
	}

	// void wxStyledTextCtrl::SetSelAlpha(int alpha)
	static int _bind_SetSelAlpha(lua_State *L) {
		if (!_lg_typecheck_SetSelAlpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetSelAlpha(int alpha) function, expected prototype:\nvoid wxStyledTextCtrl::SetSelAlpha(int alpha)\nClass arguments details:\n");
		}

		int alpha=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetSelAlpha(int)");
		}
		self->SetSelAlpha(alpha);

		return 0;
	}

	// void wxStyledTextCtrl::SetSelBackground(bool useSetting, const wxColour & back)
	static int _bind_SetSelBackground(lua_State *L) {
		if (!_lg_typecheck_SetSelBackground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetSelBackground(bool useSetting, const wxColour & back) function, expected prototype:\nvoid wxStyledTextCtrl::SetSelBackground(bool useSetting, const wxColour & back)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		bool useSetting=(bool)(lua_toboolean(L,2)==1);
		const wxColour* back_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,3));
		if( !back_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg back in wxStyledTextCtrl::SetSelBackground function");
		}
		const wxColour & back=*back_ptr;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetSelBackground(bool, const wxColour &)");
		}
		self->SetSelBackground(useSetting, back);

		return 0;
	}

	// void wxStyledTextCtrl::SetSelForeground(bool useSetting, const wxColour & fore)
	static int _bind_SetSelForeground(lua_State *L) {
		if (!_lg_typecheck_SetSelForeground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetSelForeground(bool useSetting, const wxColour & fore) function, expected prototype:\nvoid wxStyledTextCtrl::SetSelForeground(bool useSetting, const wxColour & fore)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		bool useSetting=(bool)(lua_toboolean(L,2)==1);
		const wxColour* fore_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,3));
		if( !fore_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fore in wxStyledTextCtrl::SetSelForeground function");
		}
		const wxColour & fore=*fore_ptr;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetSelForeground(bool, const wxColour &)");
		}
		self->SetSelForeground(useSetting, fore);

		return 0;
	}

	// void wxStyledTextCtrl::SetSelection(long from, long to)
	static int _bind_SetSelection(lua_State *L) {
		if (!_lg_typecheck_SetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetSelection(long from, long to) function, expected prototype:\nvoid wxStyledTextCtrl::SetSelection(long from, long to)\nClass arguments details:\n");
		}

		long from=(long)lua_tointeger(L,2);
		long to=(long)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetSelection(long, long)");
		}
		self->SetSelection(from, to);

		return 0;
	}

	// void wxStyledTextCtrl::SetSelectionEnd(int pos)
	static int _bind_SetSelectionEnd(lua_State *L) {
		if (!_lg_typecheck_SetSelectionEnd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetSelectionEnd(int pos) function, expected prototype:\nvoid wxStyledTextCtrl::SetSelectionEnd(int pos)\nClass arguments details:\n");
		}

		int pos=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetSelectionEnd(int)");
		}
		self->SetSelectionEnd(pos);

		return 0;
	}

	// void wxStyledTextCtrl::SetSelectionMode(int mode)
	static int _bind_SetSelectionMode(lua_State *L) {
		if (!_lg_typecheck_SetSelectionMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetSelectionMode(int mode) function, expected prototype:\nvoid wxStyledTextCtrl::SetSelectionMode(int mode)\nClass arguments details:\n");
		}

		int mode=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetSelectionMode(int)");
		}
		self->SetSelectionMode(mode);

		return 0;
	}

	// void wxStyledTextCtrl::SetSelectionStart(int pos)
	static int _bind_SetSelectionStart(lua_State *L) {
		if (!_lg_typecheck_SetSelectionStart(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetSelectionStart(int pos) function, expected prototype:\nvoid wxStyledTextCtrl::SetSelectionStart(int pos)\nClass arguments details:\n");
		}

		int pos=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetSelectionStart(int)");
		}
		self->SetSelectionStart(pos);

		return 0;
	}

	// void wxStyledTextCtrl::SetStatus(int statusCode)
	static int _bind_SetStatus(lua_State *L) {
		if (!_lg_typecheck_SetStatus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetStatus(int statusCode) function, expected prototype:\nvoid wxStyledTextCtrl::SetStatus(int statusCode)\nClass arguments details:\n");
		}

		int statusCode=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetStatus(int)");
		}
		self->SetStatus(statusCode);

		return 0;
	}

	// void wxStyledTextCtrl::SetStyleBits(int bits)
	static int _bind_SetStyleBits(lua_State *L) {
		if (!_lg_typecheck_SetStyleBits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetStyleBits(int bits) function, expected prototype:\nvoid wxStyledTextCtrl::SetStyleBits(int bits)\nClass arguments details:\n");
		}

		int bits=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetStyleBits(int)");
		}
		self->SetStyleBits(bits);

		return 0;
	}

	// void wxStyledTextCtrl::SetStyleBytes(int length, char * styleBytes)
	static int _bind_SetStyleBytes(lua_State *L) {
		if (!_lg_typecheck_SetStyleBytes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetStyleBytes(int length, char * styleBytes) function, expected prototype:\nvoid wxStyledTextCtrl::SetStyleBytes(int length, char * styleBytes)\nClass arguments details:\n");
		}

		int length=(int)lua_tointeger(L,2);
		char styleBytes=(char)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetStyleBytes(int, char *)");
		}
		self->SetStyleBytes(length, &styleBytes);

		return 0;
	}

	// void wxStyledTextCtrl::SetStyling(int length, int style)
	static int _bind_SetStyling(lua_State *L) {
		if (!_lg_typecheck_SetStyling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetStyling(int length, int style) function, expected prototype:\nvoid wxStyledTextCtrl::SetStyling(int length, int style)\nClass arguments details:\n");
		}

		int length=(int)lua_tointeger(L,2);
		int style=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetStyling(int, int)");
		}
		self->SetStyling(length, style);

		return 0;
	}

	// void wxStyledTextCtrl::SetTabIndents(bool tabIndents)
	static int _bind_SetTabIndents(lua_State *L) {
		if (!_lg_typecheck_SetTabIndents(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetTabIndents(bool tabIndents) function, expected prototype:\nvoid wxStyledTextCtrl::SetTabIndents(bool tabIndents)\nClass arguments details:\n");
		}

		bool tabIndents=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetTabIndents(bool)");
		}
		self->SetTabIndents(tabIndents);

		return 0;
	}

	// void wxStyledTextCtrl::SetTabWidth(int tabWidth)
	static int _bind_SetTabWidth(lua_State *L) {
		if (!_lg_typecheck_SetTabWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetTabWidth(int tabWidth) function, expected prototype:\nvoid wxStyledTextCtrl::SetTabWidth(int tabWidth)\nClass arguments details:\n");
		}

		int tabWidth=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetTabWidth(int)");
		}
		self->SetTabWidth(tabWidth);

		return 0;
	}

	// void wxStyledTextCtrl::SetTargetEnd(int pos)
	static int _bind_SetTargetEnd(lua_State *L) {
		if (!_lg_typecheck_SetTargetEnd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetTargetEnd(int pos) function, expected prototype:\nvoid wxStyledTextCtrl::SetTargetEnd(int pos)\nClass arguments details:\n");
		}

		int pos=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetTargetEnd(int)");
		}
		self->SetTargetEnd(pos);

		return 0;
	}

	// void wxStyledTextCtrl::SetTargetStart(int pos)
	static int _bind_SetTargetStart(lua_State *L) {
		if (!_lg_typecheck_SetTargetStart(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetTargetStart(int pos) function, expected prototype:\nvoid wxStyledTextCtrl::SetTargetStart(int pos)\nClass arguments details:\n");
		}

		int pos=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetTargetStart(int)");
		}
		self->SetTargetStart(pos);

		return 0;
	}

	// void wxStyledTextCtrl::SetText(const wxString & text)
	static int _bind_SetText(lua_State *L) {
		if (!_lg_typecheck_SetText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetText(const wxString & text) function, expected prototype:\nvoid wxStyledTextCtrl::SetText(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetText(const wxString &)");
		}
		self->SetText(text);

		return 0;
	}

	// void wxStyledTextCtrl::SetTextRaw(const char * text)
	static int _bind_SetTextRaw(lua_State *L) {
		if (!_lg_typecheck_SetTextRaw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetTextRaw(const char * text) function, expected prototype:\nvoid wxStyledTextCtrl::SetTextRaw(const char * text)\nClass arguments details:\n");
		}

		const char * text=(const char *)lua_tostring(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetTextRaw(const char *)");
		}
		self->SetTextRaw(text);

		return 0;
	}

	// void wxStyledTextCtrl::SetTwoPhaseDraw(bool twoPhase)
	static int _bind_SetTwoPhaseDraw(lua_State *L) {
		if (!_lg_typecheck_SetTwoPhaseDraw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetTwoPhaseDraw(bool twoPhase) function, expected prototype:\nvoid wxStyledTextCtrl::SetTwoPhaseDraw(bool twoPhase)\nClass arguments details:\n");
		}

		bool twoPhase=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetTwoPhaseDraw(bool)");
		}
		self->SetTwoPhaseDraw(twoPhase);

		return 0;
	}

	// void wxStyledTextCtrl::SetUndoCollection(bool collectUndo)
	static int _bind_SetUndoCollection(lua_State *L) {
		if (!_lg_typecheck_SetUndoCollection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetUndoCollection(bool collectUndo) function, expected prototype:\nvoid wxStyledTextCtrl::SetUndoCollection(bool collectUndo)\nClass arguments details:\n");
		}

		bool collectUndo=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetUndoCollection(bool)");
		}
		self->SetUndoCollection(collectUndo);

		return 0;
	}

	// void wxStyledTextCtrl::SetUseAntiAliasing(bool useAA)
	static int _bind_SetUseAntiAliasing(lua_State *L) {
		if (!_lg_typecheck_SetUseAntiAliasing(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetUseAntiAliasing(bool useAA) function, expected prototype:\nvoid wxStyledTextCtrl::SetUseAntiAliasing(bool useAA)\nClass arguments details:\n");
		}

		bool useAA=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetUseAntiAliasing(bool)");
		}
		self->SetUseAntiAliasing(useAA);

		return 0;
	}

	// void wxStyledTextCtrl::SetUseHorizontalScrollBar(bool show)
	static int _bind_SetUseHorizontalScrollBar(lua_State *L) {
		if (!_lg_typecheck_SetUseHorizontalScrollBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetUseHorizontalScrollBar(bool show) function, expected prototype:\nvoid wxStyledTextCtrl::SetUseHorizontalScrollBar(bool show)\nClass arguments details:\n");
		}

		bool show=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetUseHorizontalScrollBar(bool)");
		}
		self->SetUseHorizontalScrollBar(show);

		return 0;
	}

	// void wxStyledTextCtrl::SetUseTabs(bool useTabs)
	static int _bind_SetUseTabs(lua_State *L) {
		if (!_lg_typecheck_SetUseTabs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetUseTabs(bool useTabs) function, expected prototype:\nvoid wxStyledTextCtrl::SetUseTabs(bool useTabs)\nClass arguments details:\n");
		}

		bool useTabs=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetUseTabs(bool)");
		}
		self->SetUseTabs(useTabs);

		return 0;
	}

	// void wxStyledTextCtrl::SetUseVerticalScrollBar(bool show)
	static int _bind_SetUseVerticalScrollBar(lua_State *L) {
		if (!_lg_typecheck_SetUseVerticalScrollBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetUseVerticalScrollBar(bool show) function, expected prototype:\nvoid wxStyledTextCtrl::SetUseVerticalScrollBar(bool show)\nClass arguments details:\n");
		}

		bool show=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetUseVerticalScrollBar(bool)");
		}
		self->SetUseVerticalScrollBar(show);

		return 0;
	}

	// void wxStyledTextCtrl::SetVScrollBar(wxScrollBar * bar)
	static int _bind_SetVScrollBar(lua_State *L) {
		if (!_lg_typecheck_SetVScrollBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetVScrollBar(wxScrollBar * bar) function, expected prototype:\nvoid wxStyledTextCtrl::SetVScrollBar(wxScrollBar * bar)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxScrollBar* bar=dynamic_cast< wxScrollBar* >(Luna< wxObject >::check(L,2));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetVScrollBar(wxScrollBar *)");
		}
		self->SetVScrollBar(bar);

		return 0;
	}

	// void wxStyledTextCtrl::SetViewEOL(bool visible)
	static int _bind_SetViewEOL(lua_State *L) {
		if (!_lg_typecheck_SetViewEOL(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetViewEOL(bool visible) function, expected prototype:\nvoid wxStyledTextCtrl::SetViewEOL(bool visible)\nClass arguments details:\n");
		}

		bool visible=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetViewEOL(bool)");
		}
		self->SetViewEOL(visible);

		return 0;
	}

	// void wxStyledTextCtrl::SetViewWhiteSpace(int viewWS)
	static int _bind_SetViewWhiteSpace(lua_State *L) {
		if (!_lg_typecheck_SetViewWhiteSpace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetViewWhiteSpace(int viewWS) function, expected prototype:\nvoid wxStyledTextCtrl::SetViewWhiteSpace(int viewWS)\nClass arguments details:\n");
		}

		int viewWS=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetViewWhiteSpace(int)");
		}
		self->SetViewWhiteSpace(viewWS);

		return 0;
	}

	// void wxStyledTextCtrl::SetVisiblePolicy(int visiblePolicy, int visibleSlop)
	static int _bind_SetVisiblePolicy(lua_State *L) {
		if (!_lg_typecheck_SetVisiblePolicy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetVisiblePolicy(int visiblePolicy, int visibleSlop) function, expected prototype:\nvoid wxStyledTextCtrl::SetVisiblePolicy(int visiblePolicy, int visibleSlop)\nClass arguments details:\n");
		}

		int visiblePolicy=(int)lua_tointeger(L,2);
		int visibleSlop=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetVisiblePolicy(int, int)");
		}
		self->SetVisiblePolicy(visiblePolicy, visibleSlop);

		return 0;
	}

	// void wxStyledTextCtrl::SetWhitespaceBackground(bool useSetting, const wxColour & back)
	static int _bind_SetWhitespaceBackground(lua_State *L) {
		if (!_lg_typecheck_SetWhitespaceBackground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetWhitespaceBackground(bool useSetting, const wxColour & back) function, expected prototype:\nvoid wxStyledTextCtrl::SetWhitespaceBackground(bool useSetting, const wxColour & back)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		bool useSetting=(bool)(lua_toboolean(L,2)==1);
		const wxColour* back_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,3));
		if( !back_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg back in wxStyledTextCtrl::SetWhitespaceBackground function");
		}
		const wxColour & back=*back_ptr;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetWhitespaceBackground(bool, const wxColour &)");
		}
		self->SetWhitespaceBackground(useSetting, back);

		return 0;
	}

	// void wxStyledTextCtrl::SetWhitespaceChars(const wxString & characters)
	static int _bind_SetWhitespaceChars(lua_State *L) {
		if (!_lg_typecheck_SetWhitespaceChars(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetWhitespaceChars(const wxString & characters) function, expected prototype:\nvoid wxStyledTextCtrl::SetWhitespaceChars(const wxString & characters)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString characters(lua_tostring(L,2),lua_objlen(L,2));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetWhitespaceChars(const wxString &)");
		}
		self->SetWhitespaceChars(characters);

		return 0;
	}

	// void wxStyledTextCtrl::SetWhitespaceForeground(bool useSetting, const wxColour & fore)
	static int _bind_SetWhitespaceForeground(lua_State *L) {
		if (!_lg_typecheck_SetWhitespaceForeground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetWhitespaceForeground(bool useSetting, const wxColour & fore) function, expected prototype:\nvoid wxStyledTextCtrl::SetWhitespaceForeground(bool useSetting, const wxColour & fore)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		bool useSetting=(bool)(lua_toboolean(L,2)==1);
		const wxColour* fore_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,3));
		if( !fore_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fore in wxStyledTextCtrl::SetWhitespaceForeground function");
		}
		const wxColour & fore=*fore_ptr;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetWhitespaceForeground(bool, const wxColour &)");
		}
		self->SetWhitespaceForeground(useSetting, fore);

		return 0;
	}

	// void wxStyledTextCtrl::SetWhitespaceSize(int size)
	static int _bind_SetWhitespaceSize(lua_State *L) {
		if (!_lg_typecheck_SetWhitespaceSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetWhitespaceSize(int size) function, expected prototype:\nvoid wxStyledTextCtrl::SetWhitespaceSize(int size)\nClass arguments details:\n");
		}

		int size=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetWhitespaceSize(int)");
		}
		self->SetWhitespaceSize(size);

		return 0;
	}

	// int wxStyledTextCtrl::GetWhitespaceSize() const
	static int _bind_GetWhitespaceSize(lua_State *L) {
		if (!_lg_typecheck_GetWhitespaceSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetWhitespaceSize() const function, expected prototype:\nint wxStyledTextCtrl::GetWhitespaceSize() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetWhitespaceSize() const");
		}
		int lret = self->GetWhitespaceSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::SetWordChars(const wxString & characters)
	static int _bind_SetWordChars(lua_State *L) {
		if (!_lg_typecheck_SetWordChars(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetWordChars(const wxString & characters) function, expected prototype:\nvoid wxStyledTextCtrl::SetWordChars(const wxString & characters)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString characters(lua_tostring(L,2),lua_objlen(L,2));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetWordChars(const wxString &)");
		}
		self->SetWordChars(characters);

		return 0;
	}

	// void wxStyledTextCtrl::SetWrapMode(int mode)
	static int _bind_SetWrapMode(lua_State *L) {
		if (!_lg_typecheck_SetWrapMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetWrapMode(int mode) function, expected prototype:\nvoid wxStyledTextCtrl::SetWrapMode(int mode)\nClass arguments details:\n");
		}

		int mode=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetWrapMode(int)");
		}
		self->SetWrapMode(mode);

		return 0;
	}

	// void wxStyledTextCtrl::SetWrapStartIndent(int indent)
	static int _bind_SetWrapStartIndent(lua_State *L) {
		if (!_lg_typecheck_SetWrapStartIndent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetWrapStartIndent(int indent) function, expected prototype:\nvoid wxStyledTextCtrl::SetWrapStartIndent(int indent)\nClass arguments details:\n");
		}

		int indent=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetWrapStartIndent(int)");
		}
		self->SetWrapStartIndent(indent);

		return 0;
	}

	// void wxStyledTextCtrl::SetWrapVisualFlags(int wrapVisualFlags)
	static int _bind_SetWrapVisualFlags(lua_State *L) {
		if (!_lg_typecheck_SetWrapVisualFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetWrapVisualFlags(int wrapVisualFlags) function, expected prototype:\nvoid wxStyledTextCtrl::SetWrapVisualFlags(int wrapVisualFlags)\nClass arguments details:\n");
		}

		int wrapVisualFlags=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetWrapVisualFlags(int)");
		}
		self->SetWrapVisualFlags(wrapVisualFlags);

		return 0;
	}

	// void wxStyledTextCtrl::SetWrapVisualFlagsLocation(int wrapVisualFlagsLocation)
	static int _bind_SetWrapVisualFlagsLocation(lua_State *L) {
		if (!_lg_typecheck_SetWrapVisualFlagsLocation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetWrapVisualFlagsLocation(int wrapVisualFlagsLocation) function, expected prototype:\nvoid wxStyledTextCtrl::SetWrapVisualFlagsLocation(int wrapVisualFlagsLocation)\nClass arguments details:\n");
		}

		int wrapVisualFlagsLocation=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetWrapVisualFlagsLocation(int)");
		}
		self->SetWrapVisualFlagsLocation(wrapVisualFlagsLocation);

		return 0;
	}

	// void wxStyledTextCtrl::SetXCaretPolicy(int caretPolicy, int caretSlop)
	static int _bind_SetXCaretPolicy(lua_State *L) {
		if (!_lg_typecheck_SetXCaretPolicy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetXCaretPolicy(int caretPolicy, int caretSlop) function, expected prototype:\nvoid wxStyledTextCtrl::SetXCaretPolicy(int caretPolicy, int caretSlop)\nClass arguments details:\n");
		}

		int caretPolicy=(int)lua_tointeger(L,2);
		int caretSlop=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetXCaretPolicy(int, int)");
		}
		self->SetXCaretPolicy(caretPolicy, caretSlop);

		return 0;
	}

	// void wxStyledTextCtrl::SetXOffset(int newOffset)
	static int _bind_SetXOffset(lua_State *L) {
		if (!_lg_typecheck_SetXOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetXOffset(int newOffset) function, expected prototype:\nvoid wxStyledTextCtrl::SetXOffset(int newOffset)\nClass arguments details:\n");
		}

		int newOffset=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetXOffset(int)");
		}
		self->SetXOffset(newOffset);

		return 0;
	}

	// void wxStyledTextCtrl::SetYCaretPolicy(int caretPolicy, int caretSlop)
	static int _bind_SetYCaretPolicy(lua_State *L) {
		if (!_lg_typecheck_SetYCaretPolicy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetYCaretPolicy(int caretPolicy, int caretSlop) function, expected prototype:\nvoid wxStyledTextCtrl::SetYCaretPolicy(int caretPolicy, int caretSlop)\nClass arguments details:\n");
		}

		int caretPolicy=(int)lua_tointeger(L,2);
		int caretSlop=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetYCaretPolicy(int, int)");
		}
		self->SetYCaretPolicy(caretPolicy, caretSlop);

		return 0;
	}

	// void wxStyledTextCtrl::SetZoom(int zoom)
	static int _bind_SetZoom(lua_State *L) {
		if (!_lg_typecheck_SetZoom(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetZoom(int zoom) function, expected prototype:\nvoid wxStyledTextCtrl::SetZoom(int zoom)\nClass arguments details:\n");
		}

		int zoom=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetZoom(int)");
		}
		self->SetZoom(zoom);

		return 0;
	}

	// void wxStyledTextCtrl::ShowLines(int lineStart, int lineEnd)
	static int _bind_ShowLines(lua_State *L) {
		if (!_lg_typecheck_ShowLines(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::ShowLines(int lineStart, int lineEnd) function, expected prototype:\nvoid wxStyledTextCtrl::ShowLines(int lineStart, int lineEnd)\nClass arguments details:\n");
		}

		int lineStart=(int)lua_tointeger(L,2);
		int lineEnd=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::ShowLines(int, int)");
		}
		self->ShowLines(lineStart, lineEnd);

		return 0;
	}

	// void wxStyledTextCtrl::StartRecord()
	static int _bind_StartRecord(lua_State *L) {
		if (!_lg_typecheck_StartRecord(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::StartRecord() function, expected prototype:\nvoid wxStyledTextCtrl::StartRecord()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::StartRecord()");
		}
		self->StartRecord();

		return 0;
	}

	// void wxStyledTextCtrl::StartStyling(int pos, int mask)
	static int _bind_StartStyling(lua_State *L) {
		if (!_lg_typecheck_StartStyling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::StartStyling(int pos, int mask) function, expected prototype:\nvoid wxStyledTextCtrl::StartStyling(int pos, int mask)\nClass arguments details:\n");
		}

		int pos=(int)lua_tointeger(L,2);
		int mask=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::StartStyling(int, int)");
		}
		self->StartStyling(pos, mask);

		return 0;
	}

	// void wxStyledTextCtrl::StopRecord()
	static int _bind_StopRecord(lua_State *L) {
		if (!_lg_typecheck_StopRecord(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::StopRecord() function, expected prototype:\nvoid wxStyledTextCtrl::StopRecord()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::StopRecord()");
		}
		self->StopRecord();

		return 0;
	}

	// void wxStyledTextCtrl::StutteredPageDown()
	static int _bind_StutteredPageDown(lua_State *L) {
		if (!_lg_typecheck_StutteredPageDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::StutteredPageDown() function, expected prototype:\nvoid wxStyledTextCtrl::StutteredPageDown()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::StutteredPageDown()");
		}
		self->StutteredPageDown();

		return 0;
	}

	// void wxStyledTextCtrl::StutteredPageDownExtend()
	static int _bind_StutteredPageDownExtend(lua_State *L) {
		if (!_lg_typecheck_StutteredPageDownExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::StutteredPageDownExtend() function, expected prototype:\nvoid wxStyledTextCtrl::StutteredPageDownExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::StutteredPageDownExtend()");
		}
		self->StutteredPageDownExtend();

		return 0;
	}

	// void wxStyledTextCtrl::StutteredPageUp()
	static int _bind_StutteredPageUp(lua_State *L) {
		if (!_lg_typecheck_StutteredPageUp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::StutteredPageUp() function, expected prototype:\nvoid wxStyledTextCtrl::StutteredPageUp()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::StutteredPageUp()");
		}
		self->StutteredPageUp();

		return 0;
	}

	// void wxStyledTextCtrl::StutteredPageUpExtend()
	static int _bind_StutteredPageUpExtend(lua_State *L) {
		if (!_lg_typecheck_StutteredPageUpExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::StutteredPageUpExtend() function, expected prototype:\nvoid wxStyledTextCtrl::StutteredPageUpExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::StutteredPageUpExtend()");
		}
		self->StutteredPageUpExtend();

		return 0;
	}

	// void wxStyledTextCtrl::StyleClearAll()
	static int _bind_StyleClearAll(lua_State *L) {
		if (!_lg_typecheck_StyleClearAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::StyleClearAll() function, expected prototype:\nvoid wxStyledTextCtrl::StyleClearAll()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::StyleClearAll()");
		}
		self->StyleClearAll();

		return 0;
	}

	// void wxStyledTextCtrl::StyleResetDefault()
	static int _bind_StyleResetDefault(lua_State *L) {
		if (!_lg_typecheck_StyleResetDefault(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::StyleResetDefault() function, expected prototype:\nvoid wxStyledTextCtrl::StyleResetDefault()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::StyleResetDefault()");
		}
		self->StyleResetDefault();

		return 0;
	}

	// void wxStyledTextCtrl::StyleSetBackground(int style, const wxColour & back)
	static int _bind_StyleSetBackground(lua_State *L) {
		if (!_lg_typecheck_StyleSetBackground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::StyleSetBackground(int style, const wxColour & back) function, expected prototype:\nvoid wxStyledTextCtrl::StyleSetBackground(int style, const wxColour & back)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		int style=(int)lua_tointeger(L,2);
		const wxColour* back_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,3));
		if( !back_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg back in wxStyledTextCtrl::StyleSetBackground function");
		}
		const wxColour & back=*back_ptr;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::StyleSetBackground(int, const wxColour &)");
		}
		self->StyleSetBackground(style, back);

		return 0;
	}

	// void wxStyledTextCtrl::StyleSetBold(int style, bool bold)
	static int _bind_StyleSetBold(lua_State *L) {
		if (!_lg_typecheck_StyleSetBold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::StyleSetBold(int style, bool bold) function, expected prototype:\nvoid wxStyledTextCtrl::StyleSetBold(int style, bool bold)\nClass arguments details:\n");
		}

		int style=(int)lua_tointeger(L,2);
		bool bold=(bool)(lua_toboolean(L,3)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::StyleSetBold(int, bool)");
		}
		self->StyleSetBold(style, bold);

		return 0;
	}

	// void wxStyledTextCtrl::StyleSetCase(int style, int caseForce)
	static int _bind_StyleSetCase(lua_State *L) {
		if (!_lg_typecheck_StyleSetCase(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::StyleSetCase(int style, int caseForce) function, expected prototype:\nvoid wxStyledTextCtrl::StyleSetCase(int style, int caseForce)\nClass arguments details:\n");
		}

		int style=(int)lua_tointeger(L,2);
		int caseForce=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::StyleSetCase(int, int)");
		}
		self->StyleSetCase(style, caseForce);

		return 0;
	}

	// void wxStyledTextCtrl::StyleSetChangeable(int style, bool changeable)
	static int _bind_StyleSetChangeable(lua_State *L) {
		if (!_lg_typecheck_StyleSetChangeable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::StyleSetChangeable(int style, bool changeable) function, expected prototype:\nvoid wxStyledTextCtrl::StyleSetChangeable(int style, bool changeable)\nClass arguments details:\n");
		}

		int style=(int)lua_tointeger(L,2);
		bool changeable=(bool)(lua_toboolean(L,3)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::StyleSetChangeable(int, bool)");
		}
		self->StyleSetChangeable(style, changeable);

		return 0;
	}

	// void wxStyledTextCtrl::StyleSetCharacterSet(int style, int characterSet)
	static int _bind_StyleSetCharacterSet(lua_State *L) {
		if (!_lg_typecheck_StyleSetCharacterSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::StyleSetCharacterSet(int style, int characterSet) function, expected prototype:\nvoid wxStyledTextCtrl::StyleSetCharacterSet(int style, int characterSet)\nClass arguments details:\n");
		}

		int style=(int)lua_tointeger(L,2);
		int characterSet=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::StyleSetCharacterSet(int, int)");
		}
		self->StyleSetCharacterSet(style, characterSet);

		return 0;
	}

	// void wxStyledTextCtrl::StyleSetEOLFilled(int style, bool filled)
	static int _bind_StyleSetEOLFilled(lua_State *L) {
		if (!_lg_typecheck_StyleSetEOLFilled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::StyleSetEOLFilled(int style, bool filled) function, expected prototype:\nvoid wxStyledTextCtrl::StyleSetEOLFilled(int style, bool filled)\nClass arguments details:\n");
		}

		int style=(int)lua_tointeger(L,2);
		bool filled=(bool)(lua_toboolean(L,3)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::StyleSetEOLFilled(int, bool)");
		}
		self->StyleSetEOLFilled(style, filled);

		return 0;
	}

	// void wxStyledTextCtrl::StyleSetFaceName(int style, const wxString & fontName)
	static int _bind_StyleSetFaceName(lua_State *L) {
		if (!_lg_typecheck_StyleSetFaceName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::StyleSetFaceName(int style, const wxString & fontName) function, expected prototype:\nvoid wxStyledTextCtrl::StyleSetFaceName(int style, const wxString & fontName)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int style=(int)lua_tointeger(L,2);
		wxString fontName(lua_tostring(L,3),lua_objlen(L,3));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::StyleSetFaceName(int, const wxString &)");
		}
		self->StyleSetFaceName(style, fontName);

		return 0;
	}

	// void wxStyledTextCtrl::StyleSetFont(int styleNum, wxFont & font)
	static int _bind_StyleSetFont(lua_State *L) {
		if (!_lg_typecheck_StyleSetFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::StyleSetFont(int styleNum, wxFont & font) function, expected prototype:\nvoid wxStyledTextCtrl::StyleSetFont(int styleNum, wxFont & font)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		int styleNum=(int)lua_tointeger(L,2);
		wxFont* font_ptr=dynamic_cast< wxFont* >(Luna< wxObject >::check(L,3));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxStyledTextCtrl::StyleSetFont function");
		}
		wxFont & font=*font_ptr;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::StyleSetFont(int, wxFont &)");
		}
		self->StyleSetFont(styleNum, font);

		return 0;
	}

	// void wxStyledTextCtrl::StyleSetFontAttr(int styleNum, int size, const wxString & faceName, bool bold, bool italic, bool underline, wxFontEncoding encoding = wxFONTENCODING_DEFAULT)
	static int _bind_StyleSetFontAttr(lua_State *L) {
		if (!_lg_typecheck_StyleSetFontAttr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::StyleSetFontAttr(int styleNum, int size, const wxString & faceName, bool bold, bool italic, bool underline, wxFontEncoding encoding = wxFONTENCODING_DEFAULT) function, expected prototype:\nvoid wxStyledTextCtrl::StyleSetFontAttr(int styleNum, int size, const wxString & faceName, bool bold, bool italic, bool underline, wxFontEncoding encoding = wxFONTENCODING_DEFAULT)\nClass arguments details:\narg 3 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		int styleNum=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		wxString faceName(lua_tostring(L,4),lua_objlen(L,4));
		bool bold=(bool)(lua_toboolean(L,5)==1);
		bool italic=(bool)(lua_toboolean(L,6)==1);
		bool underline=(bool)(lua_toboolean(L,7)==1);
		wxFontEncoding encoding=luatop>7 ? (wxFontEncoding)lua_tointeger(L,8) : wxFONTENCODING_DEFAULT;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::StyleSetFontAttr(int, int, const wxString &, bool, bool, bool, wxFontEncoding)");
		}
		self->StyleSetFontAttr(styleNum, size, faceName, bold, italic, underline, encoding);

		return 0;
	}

	// void wxStyledTextCtrl::StyleSetFontEncoding(int style, wxFontEncoding encoding)
	static int _bind_StyleSetFontEncoding(lua_State *L) {
		if (!_lg_typecheck_StyleSetFontEncoding(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::StyleSetFontEncoding(int style, wxFontEncoding encoding) function, expected prototype:\nvoid wxStyledTextCtrl::StyleSetFontEncoding(int style, wxFontEncoding encoding)\nClass arguments details:\n");
		}

		int style=(int)lua_tointeger(L,2);
		wxFontEncoding encoding=(wxFontEncoding)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::StyleSetFontEncoding(int, wxFontEncoding)");
		}
		self->StyleSetFontEncoding(style, encoding);

		return 0;
	}

	// void wxStyledTextCtrl::StyleSetForeground(int style, const wxColour & fore)
	static int _bind_StyleSetForeground(lua_State *L) {
		if (!_lg_typecheck_StyleSetForeground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::StyleSetForeground(int style, const wxColour & fore) function, expected prototype:\nvoid wxStyledTextCtrl::StyleSetForeground(int style, const wxColour & fore)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		int style=(int)lua_tointeger(L,2);
		const wxColour* fore_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,3));
		if( !fore_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fore in wxStyledTextCtrl::StyleSetForeground function");
		}
		const wxColour & fore=*fore_ptr;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::StyleSetForeground(int, const wxColour &)");
		}
		self->StyleSetForeground(style, fore);

		return 0;
	}

	// void wxStyledTextCtrl::StyleSetHotSpot(int style, bool hotspot)
	static int _bind_StyleSetHotSpot(lua_State *L) {
		if (!_lg_typecheck_StyleSetHotSpot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::StyleSetHotSpot(int style, bool hotspot) function, expected prototype:\nvoid wxStyledTextCtrl::StyleSetHotSpot(int style, bool hotspot)\nClass arguments details:\n");
		}

		int style=(int)lua_tointeger(L,2);
		bool hotspot=(bool)(lua_toboolean(L,3)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::StyleSetHotSpot(int, bool)");
		}
		self->StyleSetHotSpot(style, hotspot);

		return 0;
	}

	// void wxStyledTextCtrl::StyleSetItalic(int style, bool italic)
	static int _bind_StyleSetItalic(lua_State *L) {
		if (!_lg_typecheck_StyleSetItalic(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::StyleSetItalic(int style, bool italic) function, expected prototype:\nvoid wxStyledTextCtrl::StyleSetItalic(int style, bool italic)\nClass arguments details:\n");
		}

		int style=(int)lua_tointeger(L,2);
		bool italic=(bool)(lua_toboolean(L,3)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::StyleSetItalic(int, bool)");
		}
		self->StyleSetItalic(style, italic);

		return 0;
	}

	// void wxStyledTextCtrl::StyleSetSize(int style, int sizePoints)
	static int _bind_StyleSetSize(lua_State *L) {
		if (!_lg_typecheck_StyleSetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::StyleSetSize(int style, int sizePoints) function, expected prototype:\nvoid wxStyledTextCtrl::StyleSetSize(int style, int sizePoints)\nClass arguments details:\n");
		}

		int style=(int)lua_tointeger(L,2);
		int sizePoints=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::StyleSetSize(int, int)");
		}
		self->StyleSetSize(style, sizePoints);

		return 0;
	}

	// void wxStyledTextCtrl::StyleSetSpec(int styleNum, const wxString & spec)
	static int _bind_StyleSetSpec(lua_State *L) {
		if (!_lg_typecheck_StyleSetSpec(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::StyleSetSpec(int styleNum, const wxString & spec) function, expected prototype:\nvoid wxStyledTextCtrl::StyleSetSpec(int styleNum, const wxString & spec)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int styleNum=(int)lua_tointeger(L,2);
		wxString spec(lua_tostring(L,3),lua_objlen(L,3));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::StyleSetSpec(int, const wxString &)");
		}
		self->StyleSetSpec(styleNum, spec);

		return 0;
	}

	// void wxStyledTextCtrl::StyleSetUnderline(int style, bool underline)
	static int _bind_StyleSetUnderline(lua_State *L) {
		if (!_lg_typecheck_StyleSetUnderline(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::StyleSetUnderline(int style, bool underline) function, expected prototype:\nvoid wxStyledTextCtrl::StyleSetUnderline(int style, bool underline)\nClass arguments details:\n");
		}

		int style=(int)lua_tointeger(L,2);
		bool underline=(bool)(lua_toboolean(L,3)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::StyleSetUnderline(int, bool)");
		}
		self->StyleSetUnderline(style, underline);

		return 0;
	}

	// void wxStyledTextCtrl::StyleSetVisible(int style, bool visible)
	static int _bind_StyleSetVisible(lua_State *L) {
		if (!_lg_typecheck_StyleSetVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::StyleSetVisible(int style, bool visible) function, expected prototype:\nvoid wxStyledTextCtrl::StyleSetVisible(int style, bool visible)\nClass arguments details:\n");
		}

		int style=(int)lua_tointeger(L,2);
		bool visible=(bool)(lua_toboolean(L,3)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::StyleSetVisible(int, bool)");
		}
		self->StyleSetVisible(style, visible);

		return 0;
	}

	// void wxStyledTextCtrl::Tab()
	static int _bind_Tab(lua_State *L) {
		if (!_lg_typecheck_Tab(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::Tab() function, expected prototype:\nvoid wxStyledTextCtrl::Tab()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::Tab()");
		}
		self->Tab();

		return 0;
	}

	// void wxStyledTextCtrl::TargetFromSelection()
	static int _bind_TargetFromSelection(lua_State *L) {
		if (!_lg_typecheck_TargetFromSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::TargetFromSelection() function, expected prototype:\nvoid wxStyledTextCtrl::TargetFromSelection()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::TargetFromSelection()");
		}
		self->TargetFromSelection();

		return 0;
	}

	// int wxStyledTextCtrl::TextHeight(int line)
	static int _bind_TextHeight(lua_State *L) {
		if (!_lg_typecheck_TextHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::TextHeight(int line) function, expected prototype:\nint wxStyledTextCtrl::TextHeight(int line)\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::TextHeight(int)");
		}
		int lret = self->TextHeight(line);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::TextWidth(int style, const wxString & text)
	static int _bind_TextWidth(lua_State *L) {
		if (!_lg_typecheck_TextWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::TextWidth(int style, const wxString & text) function, expected prototype:\nint wxStyledTextCtrl::TextWidth(int style, const wxString & text)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int style=(int)lua_tointeger(L,2);
		wxString text(lua_tostring(L,3),lua_objlen(L,3));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::TextWidth(int, const wxString &)");
		}
		int lret = self->TextWidth(style, text);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::ToggleCaretSticky()
	static int _bind_ToggleCaretSticky(lua_State *L) {
		if (!_lg_typecheck_ToggleCaretSticky(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::ToggleCaretSticky() function, expected prototype:\nvoid wxStyledTextCtrl::ToggleCaretSticky()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::ToggleCaretSticky()");
		}
		self->ToggleCaretSticky();

		return 0;
	}

	// void wxStyledTextCtrl::ToggleFold(int line)
	static int _bind_ToggleFold(lua_State *L) {
		if (!_lg_typecheck_ToggleFold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::ToggleFold(int line) function, expected prototype:\nvoid wxStyledTextCtrl::ToggleFold(int line)\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::ToggleFold(int)");
		}
		self->ToggleFold(line);

		return 0;
	}

	// void wxStyledTextCtrl::Undo()
	static int _bind_Undo(lua_State *L) {
		if (!_lg_typecheck_Undo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::Undo() function, expected prototype:\nvoid wxStyledTextCtrl::Undo()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::Undo()");
		}
		self->Undo();

		return 0;
	}

	// void wxStyledTextCtrl::UpperCase()
	static int _bind_UpperCase(lua_State *L) {
		if (!_lg_typecheck_UpperCase(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::UpperCase() function, expected prototype:\nvoid wxStyledTextCtrl::UpperCase()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::UpperCase()");
		}
		self->UpperCase();

		return 0;
	}

	// void wxStyledTextCtrl::UsePopUp(bool allowPopUp)
	static int _bind_UsePopUp(lua_State *L) {
		if (!_lg_typecheck_UsePopUp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::UsePopUp(bool allowPopUp) function, expected prototype:\nvoid wxStyledTextCtrl::UsePopUp(bool allowPopUp)\nClass arguments details:\n");
		}

		bool allowPopUp=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::UsePopUp(bool)");
		}
		self->UsePopUp(allowPopUp);

		return 0;
	}

	// void wxStyledTextCtrl::UserListShow(int listType, const wxString & itemList)
	static int _bind_UserListShow(lua_State *L) {
		if (!_lg_typecheck_UserListShow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::UserListShow(int listType, const wxString & itemList) function, expected prototype:\nvoid wxStyledTextCtrl::UserListShow(int listType, const wxString & itemList)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int listType=(int)lua_tointeger(L,2);
		wxString itemList(lua_tostring(L,3),lua_objlen(L,3));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::UserListShow(int, const wxString &)");
		}
		self->UserListShow(listType, itemList);

		return 0;
	}

	// void wxStyledTextCtrl::VCHome()
	static int _bind_VCHome(lua_State *L) {
		if (!_lg_typecheck_VCHome(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::VCHome() function, expected prototype:\nvoid wxStyledTextCtrl::VCHome()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::VCHome()");
		}
		self->VCHome();

		return 0;
	}

	// void wxStyledTextCtrl::VCHomeExtend()
	static int _bind_VCHomeExtend(lua_State *L) {
		if (!_lg_typecheck_VCHomeExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::VCHomeExtend() function, expected prototype:\nvoid wxStyledTextCtrl::VCHomeExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::VCHomeExtend()");
		}
		self->VCHomeExtend();

		return 0;
	}

	// void wxStyledTextCtrl::VCHomeRectExtend()
	static int _bind_VCHomeRectExtend(lua_State *L) {
		if (!_lg_typecheck_VCHomeRectExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::VCHomeRectExtend() function, expected prototype:\nvoid wxStyledTextCtrl::VCHomeRectExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::VCHomeRectExtend()");
		}
		self->VCHomeRectExtend();

		return 0;
	}

	// void wxStyledTextCtrl::VCHomeWrap()
	static int _bind_VCHomeWrap(lua_State *L) {
		if (!_lg_typecheck_VCHomeWrap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::VCHomeWrap() function, expected prototype:\nvoid wxStyledTextCtrl::VCHomeWrap()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::VCHomeWrap()");
		}
		self->VCHomeWrap();

		return 0;
	}

	// void wxStyledTextCtrl::VCHomeWrapExtend()
	static int _bind_VCHomeWrapExtend(lua_State *L) {
		if (!_lg_typecheck_VCHomeWrapExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::VCHomeWrapExtend() function, expected prototype:\nvoid wxStyledTextCtrl::VCHomeWrapExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::VCHomeWrapExtend()");
		}
		self->VCHomeWrapExtend();

		return 0;
	}

	// int wxStyledTextCtrl::VisibleFromDocLine(int line)
	static int _bind_VisibleFromDocLine(lua_State *L) {
		if (!_lg_typecheck_VisibleFromDocLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::VisibleFromDocLine(int line) function, expected prototype:\nint wxStyledTextCtrl::VisibleFromDocLine(int line)\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::VisibleFromDocLine(int)");
		}
		int lret = self->VisibleFromDocLine(line);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::WordEndPosition(int pos, bool onlyWordCharacters)
	static int _bind_WordEndPosition(lua_State *L) {
		if (!_lg_typecheck_WordEndPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::WordEndPosition(int pos, bool onlyWordCharacters) function, expected prototype:\nint wxStyledTextCtrl::WordEndPosition(int pos, bool onlyWordCharacters)\nClass arguments details:\n");
		}

		int pos=(int)lua_tointeger(L,2);
		bool onlyWordCharacters=(bool)(lua_toboolean(L,3)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::WordEndPosition(int, bool)");
		}
		int lret = self->WordEndPosition(pos, onlyWordCharacters);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::WordLeft()
	static int _bind_WordLeft(lua_State *L) {
		if (!_lg_typecheck_WordLeft(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::WordLeft() function, expected prototype:\nvoid wxStyledTextCtrl::WordLeft()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::WordLeft()");
		}
		self->WordLeft();

		return 0;
	}

	// void wxStyledTextCtrl::WordLeftEnd()
	static int _bind_WordLeftEnd(lua_State *L) {
		if (!_lg_typecheck_WordLeftEnd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::WordLeftEnd() function, expected prototype:\nvoid wxStyledTextCtrl::WordLeftEnd()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::WordLeftEnd()");
		}
		self->WordLeftEnd();

		return 0;
	}

	// void wxStyledTextCtrl::WordLeftEndExtend()
	static int _bind_WordLeftEndExtend(lua_State *L) {
		if (!_lg_typecheck_WordLeftEndExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::WordLeftEndExtend() function, expected prototype:\nvoid wxStyledTextCtrl::WordLeftEndExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::WordLeftEndExtend()");
		}
		self->WordLeftEndExtend();

		return 0;
	}

	// void wxStyledTextCtrl::WordLeftExtend()
	static int _bind_WordLeftExtend(lua_State *L) {
		if (!_lg_typecheck_WordLeftExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::WordLeftExtend() function, expected prototype:\nvoid wxStyledTextCtrl::WordLeftExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::WordLeftExtend()");
		}
		self->WordLeftExtend();

		return 0;
	}

	// void wxStyledTextCtrl::WordPartLeft()
	static int _bind_WordPartLeft(lua_State *L) {
		if (!_lg_typecheck_WordPartLeft(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::WordPartLeft() function, expected prototype:\nvoid wxStyledTextCtrl::WordPartLeft()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::WordPartLeft()");
		}
		self->WordPartLeft();

		return 0;
	}

	// void wxStyledTextCtrl::WordPartLeftExtend()
	static int _bind_WordPartLeftExtend(lua_State *L) {
		if (!_lg_typecheck_WordPartLeftExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::WordPartLeftExtend() function, expected prototype:\nvoid wxStyledTextCtrl::WordPartLeftExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::WordPartLeftExtend()");
		}
		self->WordPartLeftExtend();

		return 0;
	}

	// void wxStyledTextCtrl::WordPartRight()
	static int _bind_WordPartRight(lua_State *L) {
		if (!_lg_typecheck_WordPartRight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::WordPartRight() function, expected prototype:\nvoid wxStyledTextCtrl::WordPartRight()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::WordPartRight()");
		}
		self->WordPartRight();

		return 0;
	}

	// void wxStyledTextCtrl::WordPartRightExtend()
	static int _bind_WordPartRightExtend(lua_State *L) {
		if (!_lg_typecheck_WordPartRightExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::WordPartRightExtend() function, expected prototype:\nvoid wxStyledTextCtrl::WordPartRightExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::WordPartRightExtend()");
		}
		self->WordPartRightExtend();

		return 0;
	}

	// void wxStyledTextCtrl::WordRight()
	static int _bind_WordRight(lua_State *L) {
		if (!_lg_typecheck_WordRight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::WordRight() function, expected prototype:\nvoid wxStyledTextCtrl::WordRight()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::WordRight()");
		}
		self->WordRight();

		return 0;
	}

	// void wxStyledTextCtrl::WordRightEnd()
	static int _bind_WordRightEnd(lua_State *L) {
		if (!_lg_typecheck_WordRightEnd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::WordRightEnd() function, expected prototype:\nvoid wxStyledTextCtrl::WordRightEnd()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::WordRightEnd()");
		}
		self->WordRightEnd();

		return 0;
	}

	// void wxStyledTextCtrl::WordRightEndExtend()
	static int _bind_WordRightEndExtend(lua_State *L) {
		if (!_lg_typecheck_WordRightEndExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::WordRightEndExtend() function, expected prototype:\nvoid wxStyledTextCtrl::WordRightEndExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::WordRightEndExtend()");
		}
		self->WordRightEndExtend();

		return 0;
	}

	// void wxStyledTextCtrl::WordRightExtend()
	static int _bind_WordRightExtend(lua_State *L) {
		if (!_lg_typecheck_WordRightExtend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::WordRightExtend() function, expected prototype:\nvoid wxStyledTextCtrl::WordRightExtend()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::WordRightExtend()");
		}
		self->WordRightExtend();

		return 0;
	}

	// int wxStyledTextCtrl::WordStartPosition(int pos, bool onlyWordCharacters)
	static int _bind_WordStartPosition(lua_State *L) {
		if (!_lg_typecheck_WordStartPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::WordStartPosition(int pos, bool onlyWordCharacters) function, expected prototype:\nint wxStyledTextCtrl::WordStartPosition(int pos, bool onlyWordCharacters)\nClass arguments details:\n");
		}

		int pos=(int)lua_tointeger(L,2);
		bool onlyWordCharacters=(bool)(lua_toboolean(L,3)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::WordStartPosition(int, bool)");
		}
		int lret = self->WordStartPosition(pos, onlyWordCharacters);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::WrapCount(int line)
	static int _bind_WrapCount(lua_State *L) {
		if (!_lg_typecheck_WrapCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::WrapCount(int line) function, expected prototype:\nint wxStyledTextCtrl::WrapCount(int line)\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::WrapCount(int)");
		}
		int lret = self->WrapCount(line);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::ZoomIn()
	static int _bind_ZoomIn(lua_State *L) {
		if (!_lg_typecheck_ZoomIn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::ZoomIn() function, expected prototype:\nvoid wxStyledTextCtrl::ZoomIn()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::ZoomIn()");
		}
		self->ZoomIn();

		return 0;
	}

	// void wxStyledTextCtrl::ZoomOut()
	static int _bind_ZoomOut(lua_State *L) {
		if (!_lg_typecheck_ZoomOut(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::ZoomOut() function, expected prototype:\nvoid wxStyledTextCtrl::ZoomOut()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::ZoomOut()");
		}
		self->ZoomOut();

		return 0;
	}

	// void wxStyledTextCtrl::SetWrapIndentMode(int mode)
	static int _bind_SetWrapIndentMode(lua_State *L) {
		if (!_lg_typecheck_SetWrapIndentMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetWrapIndentMode(int mode) function, expected prototype:\nvoid wxStyledTextCtrl::SetWrapIndentMode(int mode)\nClass arguments details:\n");
		}

		int mode=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetWrapIndentMode(int)");
		}
		self->SetWrapIndentMode(mode);

		return 0;
	}

	// int wxStyledTextCtrl::GetWrapIndentMode() const
	static int _bind_GetWrapIndentMode(lua_State *L) {
		if (!_lg_typecheck_GetWrapIndentMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetWrapIndentMode() const function, expected prototype:\nint wxStyledTextCtrl::GetWrapIndentMode() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetWrapIndentMode() const");
		}
		int lret = self->GetWrapIndentMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::SetFirstVisibleLine(int lineDisplay)
	static int _bind_SetFirstVisibleLine(lua_State *L) {
		if (!_lg_typecheck_SetFirstVisibleLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetFirstVisibleLine(int lineDisplay) function, expected prototype:\nvoid wxStyledTextCtrl::SetFirstVisibleLine(int lineDisplay)\nClass arguments details:\n");
		}

		int lineDisplay=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetFirstVisibleLine(int)");
		}
		self->SetFirstVisibleLine(lineDisplay);

		return 0;
	}

	// void wxStyledTextCtrl::CopyAllowLine()
	static int _bind_CopyAllowLine(lua_State *L) {
		if (!_lg_typecheck_CopyAllowLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::CopyAllowLine() function, expected prototype:\nvoid wxStyledTextCtrl::CopyAllowLine()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::CopyAllowLine()");
		}
		self->CopyAllowLine();

		return 0;
	}

	// const char * wxStyledTextCtrl::GetCharacterPointer()
	static int _bind_GetCharacterPointer(lua_State *L) {
		if (!_lg_typecheck_GetCharacterPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * wxStyledTextCtrl::GetCharacterPointer() function, expected prototype:\nconst char * wxStyledTextCtrl::GetCharacterPointer()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * wxStyledTextCtrl::GetCharacterPointer()");
		}
		const char * lret = self->GetCharacterPointer();
		lua_pushstring(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::SetKeysUnicode(bool keysUnicode)
	static int _bind_SetKeysUnicode(lua_State *L) {
		if (!_lg_typecheck_SetKeysUnicode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetKeysUnicode(bool keysUnicode) function, expected prototype:\nvoid wxStyledTextCtrl::SetKeysUnicode(bool keysUnicode)\nClass arguments details:\n");
		}

		bool keysUnicode=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetKeysUnicode(bool)");
		}
		self->SetKeysUnicode(keysUnicode);

		return 0;
	}

	// bool wxStyledTextCtrl::GetKeysUnicode() const
	static int _bind_GetKeysUnicode(lua_State *L) {
		if (!_lg_typecheck_GetKeysUnicode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::GetKeysUnicode() const function, expected prototype:\nbool wxStyledTextCtrl::GetKeysUnicode() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::GetKeysUnicode() const");
		}
		bool lret = self->GetKeysUnicode();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxStyledTextCtrl::IndicatorSetAlpha(int indicator, int alpha)
	static int _bind_IndicatorSetAlpha(lua_State *L) {
		if (!_lg_typecheck_IndicatorSetAlpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::IndicatorSetAlpha(int indicator, int alpha) function, expected prototype:\nvoid wxStyledTextCtrl::IndicatorSetAlpha(int indicator, int alpha)\nClass arguments details:\n");
		}

		int indicator=(int)lua_tointeger(L,2);
		int alpha=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::IndicatorSetAlpha(int, int)");
		}
		self->IndicatorSetAlpha(indicator, alpha);

		return 0;
	}

	// int wxStyledTextCtrl::IndicatorGetAlpha(int indicator) const
	static int _bind_IndicatorGetAlpha(lua_State *L) {
		if (!_lg_typecheck_IndicatorGetAlpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::IndicatorGetAlpha(int indicator) const function, expected prototype:\nint wxStyledTextCtrl::IndicatorGetAlpha(int indicator) const\nClass arguments details:\n");
		}

		int indicator=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::IndicatorGetAlpha(int) const");
		}
		int lret = self->IndicatorGetAlpha(indicator);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::SetExtraAscent(int extraAscent)
	static int _bind_SetExtraAscent(lua_State *L) {
		if (!_lg_typecheck_SetExtraAscent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetExtraAscent(int extraAscent) function, expected prototype:\nvoid wxStyledTextCtrl::SetExtraAscent(int extraAscent)\nClass arguments details:\n");
		}

		int extraAscent=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetExtraAscent(int)");
		}
		self->SetExtraAscent(extraAscent);

		return 0;
	}

	// int wxStyledTextCtrl::GetExtraAscent() const
	static int _bind_GetExtraAscent(lua_State *L) {
		if (!_lg_typecheck_GetExtraAscent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetExtraAscent() const function, expected prototype:\nint wxStyledTextCtrl::GetExtraAscent() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetExtraAscent() const");
		}
		int lret = self->GetExtraAscent();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::SetExtraDescent(int extraDescent)
	static int _bind_SetExtraDescent(lua_State *L) {
		if (!_lg_typecheck_SetExtraDescent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetExtraDescent(int extraDescent) function, expected prototype:\nvoid wxStyledTextCtrl::SetExtraDescent(int extraDescent)\nClass arguments details:\n");
		}

		int extraDescent=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetExtraDescent(int)");
		}
		self->SetExtraDescent(extraDescent);

		return 0;
	}

	// int wxStyledTextCtrl::GetExtraDescent() const
	static int _bind_GetExtraDescent(lua_State *L) {
		if (!_lg_typecheck_GetExtraDescent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetExtraDescent() const function, expected prototype:\nint wxStyledTextCtrl::GetExtraDescent() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetExtraDescent() const");
		}
		int lret = self->GetExtraDescent();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::GetMarkerSymbolDefined(int markerNumber)
	static int _bind_GetMarkerSymbolDefined(lua_State *L) {
		if (!_lg_typecheck_GetMarkerSymbolDefined(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetMarkerSymbolDefined(int markerNumber) function, expected prototype:\nint wxStyledTextCtrl::GetMarkerSymbolDefined(int markerNumber)\nClass arguments details:\n");
		}

		int markerNumber=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetMarkerSymbolDefined(int)");
		}
		int lret = self->GetMarkerSymbolDefined(markerNumber);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::MarginSetText(int line, const wxString & text)
	static int _bind_MarginSetText(lua_State *L) {
		if (!_lg_typecheck_MarginSetText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::MarginSetText(int line, const wxString & text) function, expected prototype:\nvoid wxStyledTextCtrl::MarginSetText(int line, const wxString & text)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int line=(int)lua_tointeger(L,2);
		wxString text(lua_tostring(L,3),lua_objlen(L,3));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::MarginSetText(int, const wxString &)");
		}
		self->MarginSetText(line, text);

		return 0;
	}

	// wxString wxStyledTextCtrl::MarginGetText(int line) const
	static int _bind_MarginGetText(lua_State *L) {
		if (!_lg_typecheck_MarginGetText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxStyledTextCtrl::MarginGetText(int line) const function, expected prototype:\nwxString wxStyledTextCtrl::MarginGetText(int line) const\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxStyledTextCtrl::MarginGetText(int) const");
		}
		wxString lret = self->MarginGetText(line);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxStyledTextCtrl::MarginSetStyle(int line, int style)
	static int _bind_MarginSetStyle(lua_State *L) {
		if (!_lg_typecheck_MarginSetStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::MarginSetStyle(int line, int style) function, expected prototype:\nvoid wxStyledTextCtrl::MarginSetStyle(int line, int style)\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);
		int style=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::MarginSetStyle(int, int)");
		}
		self->MarginSetStyle(line, style);

		return 0;
	}

	// int wxStyledTextCtrl::MarginGetStyle(int line) const
	static int _bind_MarginGetStyle(lua_State *L) {
		if (!_lg_typecheck_MarginGetStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::MarginGetStyle(int line) const function, expected prototype:\nint wxStyledTextCtrl::MarginGetStyle(int line) const\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::MarginGetStyle(int) const");
		}
		int lret = self->MarginGetStyle(line);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::MarginSetStyles(int line, const wxString & styles)
	static int _bind_MarginSetStyles(lua_State *L) {
		if (!_lg_typecheck_MarginSetStyles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::MarginSetStyles(int line, const wxString & styles) function, expected prototype:\nvoid wxStyledTextCtrl::MarginSetStyles(int line, const wxString & styles)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int line=(int)lua_tointeger(L,2);
		wxString styles(lua_tostring(L,3),lua_objlen(L,3));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::MarginSetStyles(int, const wxString &)");
		}
		self->MarginSetStyles(line, styles);

		return 0;
	}

	// wxString wxStyledTextCtrl::MarginGetStyles(int line) const
	static int _bind_MarginGetStyles(lua_State *L) {
		if (!_lg_typecheck_MarginGetStyles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxStyledTextCtrl::MarginGetStyles(int line) const function, expected prototype:\nwxString wxStyledTextCtrl::MarginGetStyles(int line) const\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxStyledTextCtrl::MarginGetStyles(int) const");
		}
		wxString lret = self->MarginGetStyles(line);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxStyledTextCtrl::MarginTextClearAll()
	static int _bind_MarginTextClearAll(lua_State *L) {
		if (!_lg_typecheck_MarginTextClearAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::MarginTextClearAll() function, expected prototype:\nvoid wxStyledTextCtrl::MarginTextClearAll()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::MarginTextClearAll()");
		}
		self->MarginTextClearAll();

		return 0;
	}

	// void wxStyledTextCtrl::MarginSetStyleOffset(int style)
	static int _bind_MarginSetStyleOffset(lua_State *L) {
		if (!_lg_typecheck_MarginSetStyleOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::MarginSetStyleOffset(int style) function, expected prototype:\nvoid wxStyledTextCtrl::MarginSetStyleOffset(int style)\nClass arguments details:\n");
		}

		int style=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::MarginSetStyleOffset(int)");
		}
		self->MarginSetStyleOffset(style);

		return 0;
	}

	// int wxStyledTextCtrl::MarginGetStyleOffset() const
	static int _bind_MarginGetStyleOffset(lua_State *L) {
		if (!_lg_typecheck_MarginGetStyleOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::MarginGetStyleOffset() const function, expected prototype:\nint wxStyledTextCtrl::MarginGetStyleOffset() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::MarginGetStyleOffset() const");
		}
		int lret = self->MarginGetStyleOffset();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::AnnotationSetText(int line, const wxString & text)
	static int _bind_AnnotationSetText(lua_State *L) {
		if (!_lg_typecheck_AnnotationSetText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::AnnotationSetText(int line, const wxString & text) function, expected prototype:\nvoid wxStyledTextCtrl::AnnotationSetText(int line, const wxString & text)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int line=(int)lua_tointeger(L,2);
		wxString text(lua_tostring(L,3),lua_objlen(L,3));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::AnnotationSetText(int, const wxString &)");
		}
		self->AnnotationSetText(line, text);

		return 0;
	}

	// wxString wxStyledTextCtrl::AnnotationGetText(int line) const
	static int _bind_AnnotationGetText(lua_State *L) {
		if (!_lg_typecheck_AnnotationGetText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxStyledTextCtrl::AnnotationGetText(int line) const function, expected prototype:\nwxString wxStyledTextCtrl::AnnotationGetText(int line) const\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxStyledTextCtrl::AnnotationGetText(int) const");
		}
		wxString lret = self->AnnotationGetText(line);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxStyledTextCtrl::AnnotationSetStyle(int line, int style)
	static int _bind_AnnotationSetStyle(lua_State *L) {
		if (!_lg_typecheck_AnnotationSetStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::AnnotationSetStyle(int line, int style) function, expected prototype:\nvoid wxStyledTextCtrl::AnnotationSetStyle(int line, int style)\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);
		int style=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::AnnotationSetStyle(int, int)");
		}
		self->AnnotationSetStyle(line, style);

		return 0;
	}

	// int wxStyledTextCtrl::AnnotationGetStyle(int line) const
	static int _bind_AnnotationGetStyle(lua_State *L) {
		if (!_lg_typecheck_AnnotationGetStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::AnnotationGetStyle(int line) const function, expected prototype:\nint wxStyledTextCtrl::AnnotationGetStyle(int line) const\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::AnnotationGetStyle(int) const");
		}
		int lret = self->AnnotationGetStyle(line);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::AnnotationSetStyles(int line, const wxString & styles)
	static int _bind_AnnotationSetStyles(lua_State *L) {
		if (!_lg_typecheck_AnnotationSetStyles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::AnnotationSetStyles(int line, const wxString & styles) function, expected prototype:\nvoid wxStyledTextCtrl::AnnotationSetStyles(int line, const wxString & styles)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int line=(int)lua_tointeger(L,2);
		wxString styles(lua_tostring(L,3),lua_objlen(L,3));

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::AnnotationSetStyles(int, const wxString &)");
		}
		self->AnnotationSetStyles(line, styles);

		return 0;
	}

	// wxString wxStyledTextCtrl::AnnotationGetStyles(int line) const
	static int _bind_AnnotationGetStyles(lua_State *L) {
		if (!_lg_typecheck_AnnotationGetStyles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxStyledTextCtrl::AnnotationGetStyles(int line) const function, expected prototype:\nwxString wxStyledTextCtrl::AnnotationGetStyles(int line) const\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxStyledTextCtrl::AnnotationGetStyles(int) const");
		}
		wxString lret = self->AnnotationGetStyles(line);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxStyledTextCtrl::AnnotationGetLines(int line) const
	static int _bind_AnnotationGetLines(lua_State *L) {
		if (!_lg_typecheck_AnnotationGetLines(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::AnnotationGetLines(int line) const function, expected prototype:\nint wxStyledTextCtrl::AnnotationGetLines(int line) const\nClass arguments details:\n");
		}

		int line=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::AnnotationGetLines(int) const");
		}
		int lret = self->AnnotationGetLines(line);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::AnnotationClearAll()
	static int _bind_AnnotationClearAll(lua_State *L) {
		if (!_lg_typecheck_AnnotationClearAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::AnnotationClearAll() function, expected prototype:\nvoid wxStyledTextCtrl::AnnotationClearAll()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::AnnotationClearAll()");
		}
		self->AnnotationClearAll();

		return 0;
	}

	// void wxStyledTextCtrl::AnnotationSetVisible(int visible)
	static int _bind_AnnotationSetVisible(lua_State *L) {
		if (!_lg_typecheck_AnnotationSetVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::AnnotationSetVisible(int visible) function, expected prototype:\nvoid wxStyledTextCtrl::AnnotationSetVisible(int visible)\nClass arguments details:\n");
		}

		int visible=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::AnnotationSetVisible(int)");
		}
		self->AnnotationSetVisible(visible);

		return 0;
	}

	// int wxStyledTextCtrl::AnnotationGetVisible() const
	static int _bind_AnnotationGetVisible(lua_State *L) {
		if (!_lg_typecheck_AnnotationGetVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::AnnotationGetVisible() const function, expected prototype:\nint wxStyledTextCtrl::AnnotationGetVisible() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::AnnotationGetVisible() const");
		}
		int lret = self->AnnotationGetVisible();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::AnnotationSetStyleOffset(int style)
	static int _bind_AnnotationSetStyleOffset(lua_State *L) {
		if (!_lg_typecheck_AnnotationSetStyleOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::AnnotationSetStyleOffset(int style) function, expected prototype:\nvoid wxStyledTextCtrl::AnnotationSetStyleOffset(int style)\nClass arguments details:\n");
		}

		int style=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::AnnotationSetStyleOffset(int)");
		}
		self->AnnotationSetStyleOffset(style);

		return 0;
	}

	// int wxStyledTextCtrl::AnnotationGetStyleOffset() const
	static int _bind_AnnotationGetStyleOffset(lua_State *L) {
		if (!_lg_typecheck_AnnotationGetStyleOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::AnnotationGetStyleOffset() const function, expected prototype:\nint wxStyledTextCtrl::AnnotationGetStyleOffset() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::AnnotationGetStyleOffset() const");
		}
		int lret = self->AnnotationGetStyleOffset();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::AddUndoAction(int token, int flags)
	static int _bind_AddUndoAction(lua_State *L) {
		if (!_lg_typecheck_AddUndoAction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::AddUndoAction(int token, int flags) function, expected prototype:\nvoid wxStyledTextCtrl::AddUndoAction(int token, int flags)\nClass arguments details:\n");
		}

		int token=(int)lua_tointeger(L,2);
		int flags=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::AddUndoAction(int, int)");
		}
		self->AddUndoAction(token, flags);

		return 0;
	}

	// int wxStyledTextCtrl::CharPositionFromPoint(int x, int y)
	static int _bind_CharPositionFromPoint(lua_State *L) {
		if (!_lg_typecheck_CharPositionFromPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::CharPositionFromPoint(int x, int y) function, expected prototype:\nint wxStyledTextCtrl::CharPositionFromPoint(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::CharPositionFromPoint(int, int)");
		}
		int lret = self->CharPositionFromPoint(x, y);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextCtrl::CharPositionFromPointClose(int x, int y)
	static int _bind_CharPositionFromPointClose(lua_State *L) {
		if (!_lg_typecheck_CharPositionFromPointClose(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::CharPositionFromPointClose(int x, int y) function, expected prototype:\nint wxStyledTextCtrl::CharPositionFromPointClose(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::CharPositionFromPointClose(int, int)");
		}
		int lret = self->CharPositionFromPointClose(x, y);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::SetMultipleSelection(bool multipleSelection)
	static int _bind_SetMultipleSelection(lua_State *L) {
		if (!_lg_typecheck_SetMultipleSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetMultipleSelection(bool multipleSelection) function, expected prototype:\nvoid wxStyledTextCtrl::SetMultipleSelection(bool multipleSelection)\nClass arguments details:\n");
		}

		bool multipleSelection=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetMultipleSelection(bool)");
		}
		self->SetMultipleSelection(multipleSelection);

		return 0;
	}

	// bool wxStyledTextCtrl::GetMultipleSelection() const
	static int _bind_GetMultipleSelection(lua_State *L) {
		if (!_lg_typecheck_GetMultipleSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::GetMultipleSelection() const function, expected prototype:\nbool wxStyledTextCtrl::GetMultipleSelection() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::GetMultipleSelection() const");
		}
		bool lret = self->GetMultipleSelection();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxStyledTextCtrl::SetAdditionalSelectionTyping(bool additionalSelectionTyping)
	static int _bind_SetAdditionalSelectionTyping(lua_State *L) {
		if (!_lg_typecheck_SetAdditionalSelectionTyping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetAdditionalSelectionTyping(bool additionalSelectionTyping) function, expected prototype:\nvoid wxStyledTextCtrl::SetAdditionalSelectionTyping(bool additionalSelectionTyping)\nClass arguments details:\n");
		}

		bool additionalSelectionTyping=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetAdditionalSelectionTyping(bool)");
		}
		self->SetAdditionalSelectionTyping(additionalSelectionTyping);

		return 0;
	}

	// bool wxStyledTextCtrl::GetAdditionalSelectionTyping() const
	static int _bind_GetAdditionalSelectionTyping(lua_State *L) {
		if (!_lg_typecheck_GetAdditionalSelectionTyping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::GetAdditionalSelectionTyping() const function, expected prototype:\nbool wxStyledTextCtrl::GetAdditionalSelectionTyping() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::GetAdditionalSelectionTyping() const");
		}
		bool lret = self->GetAdditionalSelectionTyping();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxStyledTextCtrl::SetAdditionalCaretsBlink(bool additionalCaretsBlink)
	static int _bind_SetAdditionalCaretsBlink(lua_State *L) {
		if (!_lg_typecheck_SetAdditionalCaretsBlink(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetAdditionalCaretsBlink(bool additionalCaretsBlink) function, expected prototype:\nvoid wxStyledTextCtrl::SetAdditionalCaretsBlink(bool additionalCaretsBlink)\nClass arguments details:\n");
		}

		bool additionalCaretsBlink=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetAdditionalCaretsBlink(bool)");
		}
		self->SetAdditionalCaretsBlink(additionalCaretsBlink);

		return 0;
	}

	// bool wxStyledTextCtrl::GetAdditionalCaretsBlink() const
	static int _bind_GetAdditionalCaretsBlink(lua_State *L) {
		if (!_lg_typecheck_GetAdditionalCaretsBlink(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::GetAdditionalCaretsBlink() const function, expected prototype:\nbool wxStyledTextCtrl::GetAdditionalCaretsBlink() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::GetAdditionalCaretsBlink() const");
		}
		bool lret = self->GetAdditionalCaretsBlink();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxStyledTextCtrl::SetAdditionalCaretsVisible(bool additionalCaretsBlink)
	static int _bind_SetAdditionalCaretsVisible(lua_State *L) {
		if (!_lg_typecheck_SetAdditionalCaretsVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetAdditionalCaretsVisible(bool additionalCaretsBlink) function, expected prototype:\nvoid wxStyledTextCtrl::SetAdditionalCaretsVisible(bool additionalCaretsBlink)\nClass arguments details:\n");
		}

		bool additionalCaretsBlink=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetAdditionalCaretsVisible(bool)");
		}
		self->SetAdditionalCaretsVisible(additionalCaretsBlink);

		return 0;
	}

	// bool wxStyledTextCtrl::GetAdditionalCaretsVisible() const
	static int _bind_GetAdditionalCaretsVisible(lua_State *L) {
		if (!_lg_typecheck_GetAdditionalCaretsVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextCtrl::GetAdditionalCaretsVisible() const function, expected prototype:\nbool wxStyledTextCtrl::GetAdditionalCaretsVisible() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextCtrl::GetAdditionalCaretsVisible() const");
		}
		bool lret = self->GetAdditionalCaretsVisible();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxStyledTextCtrl::GetSelections() const
	static int _bind_GetSelections(lua_State *L) {
		if (!_lg_typecheck_GetSelections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetSelections() const function, expected prototype:\nint wxStyledTextCtrl::GetSelections() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetSelections() const");
		}
		int lret = self->GetSelections();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::ClearSelections()
	static int _bind_ClearSelections(lua_State *L) {
		if (!_lg_typecheck_ClearSelections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::ClearSelections() function, expected prototype:\nvoid wxStyledTextCtrl::ClearSelections()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::ClearSelections()");
		}
		self->ClearSelections();

		return 0;
	}

	// int wxStyledTextCtrl::AddSelection(int caret, int anchor)
	static int _bind_AddSelection(lua_State *L) {
		if (!_lg_typecheck_AddSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::AddSelection(int caret, int anchor) function, expected prototype:\nint wxStyledTextCtrl::AddSelection(int caret, int anchor)\nClass arguments details:\n");
		}

		int caret=(int)lua_tointeger(L,2);
		int anchor=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::AddSelection(int, int)");
		}
		int lret = self->AddSelection(caret, anchor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::SetMainSelection(int selection)
	static int _bind_SetMainSelection(lua_State *L) {
		if (!_lg_typecheck_SetMainSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetMainSelection(int selection) function, expected prototype:\nvoid wxStyledTextCtrl::SetMainSelection(int selection)\nClass arguments details:\n");
		}

		int selection=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetMainSelection(int)");
		}
		self->SetMainSelection(selection);

		return 0;
	}

	// int wxStyledTextCtrl::GetMainSelection() const
	static int _bind_GetMainSelection(lua_State *L) {
		if (!_lg_typecheck_GetMainSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetMainSelection() const function, expected prototype:\nint wxStyledTextCtrl::GetMainSelection() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetMainSelection() const");
		}
		int lret = self->GetMainSelection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::SetSelectionNCaret(int selection, int pos)
	static int _bind_SetSelectionNCaret(lua_State *L) {
		if (!_lg_typecheck_SetSelectionNCaret(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetSelectionNCaret(int selection, int pos) function, expected prototype:\nvoid wxStyledTextCtrl::SetSelectionNCaret(int selection, int pos)\nClass arguments details:\n");
		}

		int selection=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetSelectionNCaret(int, int)");
		}
		self->SetSelectionNCaret(selection, pos);

		return 0;
	}

	// int wxStyledTextCtrl::GetSelectionNCaret(int selection) const
	static int _bind_GetSelectionNCaret(lua_State *L) {
		if (!_lg_typecheck_GetSelectionNCaret(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetSelectionNCaret(int selection) const function, expected prototype:\nint wxStyledTextCtrl::GetSelectionNCaret(int selection) const\nClass arguments details:\n");
		}

		int selection=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetSelectionNCaret(int) const");
		}
		int lret = self->GetSelectionNCaret(selection);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::SetSelectionNAnchor(int selection, int posAnchor)
	static int _bind_SetSelectionNAnchor(lua_State *L) {
		if (!_lg_typecheck_SetSelectionNAnchor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetSelectionNAnchor(int selection, int posAnchor) function, expected prototype:\nvoid wxStyledTextCtrl::SetSelectionNAnchor(int selection, int posAnchor)\nClass arguments details:\n");
		}

		int selection=(int)lua_tointeger(L,2);
		int posAnchor=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetSelectionNAnchor(int, int)");
		}
		self->SetSelectionNAnchor(selection, posAnchor);

		return 0;
	}

	// int wxStyledTextCtrl::GetSelectionNAnchor(int selection) const
	static int _bind_GetSelectionNAnchor(lua_State *L) {
		if (!_lg_typecheck_GetSelectionNAnchor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetSelectionNAnchor(int selection) const function, expected prototype:\nint wxStyledTextCtrl::GetSelectionNAnchor(int selection) const\nClass arguments details:\n");
		}

		int selection=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetSelectionNAnchor(int) const");
		}
		int lret = self->GetSelectionNAnchor(selection);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::SetSelectionNCaretVirtualSpace(int selection, int space)
	static int _bind_SetSelectionNCaretVirtualSpace(lua_State *L) {
		if (!_lg_typecheck_SetSelectionNCaretVirtualSpace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetSelectionNCaretVirtualSpace(int selection, int space) function, expected prototype:\nvoid wxStyledTextCtrl::SetSelectionNCaretVirtualSpace(int selection, int space)\nClass arguments details:\n");
		}

		int selection=(int)lua_tointeger(L,2);
		int space=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetSelectionNCaretVirtualSpace(int, int)");
		}
		self->SetSelectionNCaretVirtualSpace(selection, space);

		return 0;
	}

	// int wxStyledTextCtrl::GetSelectionNCaretVirtualSpace(int selection) const
	static int _bind_GetSelectionNCaretVirtualSpace(lua_State *L) {
		if (!_lg_typecheck_GetSelectionNCaretVirtualSpace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetSelectionNCaretVirtualSpace(int selection) const function, expected prototype:\nint wxStyledTextCtrl::GetSelectionNCaretVirtualSpace(int selection) const\nClass arguments details:\n");
		}

		int selection=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetSelectionNCaretVirtualSpace(int) const");
		}
		int lret = self->GetSelectionNCaretVirtualSpace(selection);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::SetSelectionNAnchorVirtualSpace(int selection, int space)
	static int _bind_SetSelectionNAnchorVirtualSpace(lua_State *L) {
		if (!_lg_typecheck_SetSelectionNAnchorVirtualSpace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetSelectionNAnchorVirtualSpace(int selection, int space) function, expected prototype:\nvoid wxStyledTextCtrl::SetSelectionNAnchorVirtualSpace(int selection, int space)\nClass arguments details:\n");
		}

		int selection=(int)lua_tointeger(L,2);
		int space=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetSelectionNAnchorVirtualSpace(int, int)");
		}
		self->SetSelectionNAnchorVirtualSpace(selection, space);

		return 0;
	}

	// int wxStyledTextCtrl::GetSelectionNAnchorVirtualSpace(int selection) const
	static int _bind_GetSelectionNAnchorVirtualSpace(lua_State *L) {
		if (!_lg_typecheck_GetSelectionNAnchorVirtualSpace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetSelectionNAnchorVirtualSpace(int selection) const function, expected prototype:\nint wxStyledTextCtrl::GetSelectionNAnchorVirtualSpace(int selection) const\nClass arguments details:\n");
		}

		int selection=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetSelectionNAnchorVirtualSpace(int) const");
		}
		int lret = self->GetSelectionNAnchorVirtualSpace(selection);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::SetSelectionNStart(int selection, int pos)
	static int _bind_SetSelectionNStart(lua_State *L) {
		if (!_lg_typecheck_SetSelectionNStart(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetSelectionNStart(int selection, int pos) function, expected prototype:\nvoid wxStyledTextCtrl::SetSelectionNStart(int selection, int pos)\nClass arguments details:\n");
		}

		int selection=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetSelectionNStart(int, int)");
		}
		self->SetSelectionNStart(selection, pos);

		return 0;
	}

	// int wxStyledTextCtrl::GetSelectionNStart(int selection) const
	static int _bind_GetSelectionNStart(lua_State *L) {
		if (!_lg_typecheck_GetSelectionNStart(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetSelectionNStart(int selection) const function, expected prototype:\nint wxStyledTextCtrl::GetSelectionNStart(int selection) const\nClass arguments details:\n");
		}

		int selection=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetSelectionNStart(int) const");
		}
		int lret = self->GetSelectionNStart(selection);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::SetSelectionNEnd(int selection, int pos)
	static int _bind_SetSelectionNEnd(lua_State *L) {
		if (!_lg_typecheck_SetSelectionNEnd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetSelectionNEnd(int selection, int pos) function, expected prototype:\nvoid wxStyledTextCtrl::SetSelectionNEnd(int selection, int pos)\nClass arguments details:\n");
		}

		int selection=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetSelectionNEnd(int, int)");
		}
		self->SetSelectionNEnd(selection, pos);

		return 0;
	}

	// int wxStyledTextCtrl::GetSelectionNEnd(int selection) const
	static int _bind_GetSelectionNEnd(lua_State *L) {
		if (!_lg_typecheck_GetSelectionNEnd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetSelectionNEnd(int selection) const function, expected prototype:\nint wxStyledTextCtrl::GetSelectionNEnd(int selection) const\nClass arguments details:\n");
		}

		int selection=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetSelectionNEnd(int) const");
		}
		int lret = self->GetSelectionNEnd(selection);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::SetRectangularSelectionCaret(int pos)
	static int _bind_SetRectangularSelectionCaret(lua_State *L) {
		if (!_lg_typecheck_SetRectangularSelectionCaret(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetRectangularSelectionCaret(int pos) function, expected prototype:\nvoid wxStyledTextCtrl::SetRectangularSelectionCaret(int pos)\nClass arguments details:\n");
		}

		int pos=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetRectangularSelectionCaret(int)");
		}
		self->SetRectangularSelectionCaret(pos);

		return 0;
	}

	// int wxStyledTextCtrl::GetRectangularSelectionCaret() const
	static int _bind_GetRectangularSelectionCaret(lua_State *L) {
		if (!_lg_typecheck_GetRectangularSelectionCaret(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetRectangularSelectionCaret() const function, expected prototype:\nint wxStyledTextCtrl::GetRectangularSelectionCaret() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetRectangularSelectionCaret() const");
		}
		int lret = self->GetRectangularSelectionCaret();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::SetRectangularSelectionAnchor(int posAnchor)
	static int _bind_SetRectangularSelectionAnchor(lua_State *L) {
		if (!_lg_typecheck_SetRectangularSelectionAnchor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetRectangularSelectionAnchor(int posAnchor) function, expected prototype:\nvoid wxStyledTextCtrl::SetRectangularSelectionAnchor(int posAnchor)\nClass arguments details:\n");
		}

		int posAnchor=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetRectangularSelectionAnchor(int)");
		}
		self->SetRectangularSelectionAnchor(posAnchor);

		return 0;
	}

	// int wxStyledTextCtrl::GetRectangularSelectionAnchor() const
	static int _bind_GetRectangularSelectionAnchor(lua_State *L) {
		if (!_lg_typecheck_GetRectangularSelectionAnchor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetRectangularSelectionAnchor() const function, expected prototype:\nint wxStyledTextCtrl::GetRectangularSelectionAnchor() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetRectangularSelectionAnchor() const");
		}
		int lret = self->GetRectangularSelectionAnchor();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::SetRectangularSelectionCaretVirtualSpace(int space)
	static int _bind_SetRectangularSelectionCaretVirtualSpace(lua_State *L) {
		if (!_lg_typecheck_SetRectangularSelectionCaretVirtualSpace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetRectangularSelectionCaretVirtualSpace(int space) function, expected prototype:\nvoid wxStyledTextCtrl::SetRectangularSelectionCaretVirtualSpace(int space)\nClass arguments details:\n");
		}

		int space=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetRectangularSelectionCaretVirtualSpace(int)");
		}
		self->SetRectangularSelectionCaretVirtualSpace(space);

		return 0;
	}

	// int wxStyledTextCtrl::GetRectangularSelectionCaretVirtualSpace() const
	static int _bind_GetRectangularSelectionCaretVirtualSpace(lua_State *L) {
		if (!_lg_typecheck_GetRectangularSelectionCaretVirtualSpace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetRectangularSelectionCaretVirtualSpace() const function, expected prototype:\nint wxStyledTextCtrl::GetRectangularSelectionCaretVirtualSpace() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetRectangularSelectionCaretVirtualSpace() const");
		}
		int lret = self->GetRectangularSelectionCaretVirtualSpace();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::SetRectangularSelectionAnchorVirtualSpace(int space)
	static int _bind_SetRectangularSelectionAnchorVirtualSpace(lua_State *L) {
		if (!_lg_typecheck_SetRectangularSelectionAnchorVirtualSpace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetRectangularSelectionAnchorVirtualSpace(int space) function, expected prototype:\nvoid wxStyledTextCtrl::SetRectangularSelectionAnchorVirtualSpace(int space)\nClass arguments details:\n");
		}

		int space=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetRectangularSelectionAnchorVirtualSpace(int)");
		}
		self->SetRectangularSelectionAnchorVirtualSpace(space);

		return 0;
	}

	// int wxStyledTextCtrl::GetRectangularSelectionAnchorVirtualSpace() const
	static int _bind_GetRectangularSelectionAnchorVirtualSpace(lua_State *L) {
		if (!_lg_typecheck_GetRectangularSelectionAnchorVirtualSpace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetRectangularSelectionAnchorVirtualSpace() const function, expected prototype:\nint wxStyledTextCtrl::GetRectangularSelectionAnchorVirtualSpace() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetRectangularSelectionAnchorVirtualSpace() const");
		}
		int lret = self->GetRectangularSelectionAnchorVirtualSpace();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::SetVirtualSpaceOptions(int virtualSpaceOptions)
	static int _bind_SetVirtualSpaceOptions(lua_State *L) {
		if (!_lg_typecheck_SetVirtualSpaceOptions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetVirtualSpaceOptions(int virtualSpaceOptions) function, expected prototype:\nvoid wxStyledTextCtrl::SetVirtualSpaceOptions(int virtualSpaceOptions)\nClass arguments details:\n");
		}

		int virtualSpaceOptions=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetVirtualSpaceOptions(int)");
		}
		self->SetVirtualSpaceOptions(virtualSpaceOptions);

		return 0;
	}

	// int wxStyledTextCtrl::GetVirtualSpaceOptions() const
	static int _bind_GetVirtualSpaceOptions(lua_State *L) {
		if (!_lg_typecheck_GetVirtualSpaceOptions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetVirtualSpaceOptions() const function, expected prototype:\nint wxStyledTextCtrl::GetVirtualSpaceOptions() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetVirtualSpaceOptions() const");
		}
		int lret = self->GetVirtualSpaceOptions();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::SetRectangularSelectionModifier(int modifier)
	static int _bind_SetRectangularSelectionModifier(lua_State *L) {
		if (!_lg_typecheck_SetRectangularSelectionModifier(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetRectangularSelectionModifier(int modifier) function, expected prototype:\nvoid wxStyledTextCtrl::SetRectangularSelectionModifier(int modifier)\nClass arguments details:\n");
		}

		int modifier=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetRectangularSelectionModifier(int)");
		}
		self->SetRectangularSelectionModifier(modifier);

		return 0;
	}

	// int wxStyledTextCtrl::GetRectangularSelectionModifier() const
	static int _bind_GetRectangularSelectionModifier(lua_State *L) {
		if (!_lg_typecheck_GetRectangularSelectionModifier(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetRectangularSelectionModifier() const function, expected prototype:\nint wxStyledTextCtrl::GetRectangularSelectionModifier() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetRectangularSelectionModifier() const");
		}
		int lret = self->GetRectangularSelectionModifier();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::SetAdditionalSelForeground(const wxColour & fore)
	static int _bind_SetAdditionalSelForeground(lua_State *L) {
		if (!_lg_typecheck_SetAdditionalSelForeground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetAdditionalSelForeground(const wxColour & fore) function, expected prototype:\nvoid wxStyledTextCtrl::SetAdditionalSelForeground(const wxColour & fore)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* fore_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !fore_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fore in wxStyledTextCtrl::SetAdditionalSelForeground function");
		}
		const wxColour & fore=*fore_ptr;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetAdditionalSelForeground(const wxColour &)");
		}
		self->SetAdditionalSelForeground(fore);

		return 0;
	}

	// void wxStyledTextCtrl::SetAdditionalSelBackground(const wxColour & back)
	static int _bind_SetAdditionalSelBackground(lua_State *L) {
		if (!_lg_typecheck_SetAdditionalSelBackground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetAdditionalSelBackground(const wxColour & back) function, expected prototype:\nvoid wxStyledTextCtrl::SetAdditionalSelBackground(const wxColour & back)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* back_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !back_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg back in wxStyledTextCtrl::SetAdditionalSelBackground function");
		}
		const wxColour & back=*back_ptr;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetAdditionalSelBackground(const wxColour &)");
		}
		self->SetAdditionalSelBackground(back);

		return 0;
	}

	// void wxStyledTextCtrl::SetAdditionalSelAlpha(int alpha)
	static int _bind_SetAdditionalSelAlpha(lua_State *L) {
		if (!_lg_typecheck_SetAdditionalSelAlpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetAdditionalSelAlpha(int alpha) function, expected prototype:\nvoid wxStyledTextCtrl::SetAdditionalSelAlpha(int alpha)\nClass arguments details:\n");
		}

		int alpha=(int)lua_tointeger(L,2);

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetAdditionalSelAlpha(int)");
		}
		self->SetAdditionalSelAlpha(alpha);

		return 0;
	}

	// int wxStyledTextCtrl::GetAdditionalSelAlpha() const
	static int _bind_GetAdditionalSelAlpha(lua_State *L) {
		if (!_lg_typecheck_GetAdditionalSelAlpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextCtrl::GetAdditionalSelAlpha() const function, expected prototype:\nint wxStyledTextCtrl::GetAdditionalSelAlpha() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextCtrl::GetAdditionalSelAlpha() const");
		}
		int lret = self->GetAdditionalSelAlpha();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextCtrl::SetAdditionalCaretForeground(const wxColour & fore)
	static int _bind_SetAdditionalCaretForeground(lua_State *L) {
		if (!_lg_typecheck_SetAdditionalCaretForeground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SetAdditionalCaretForeground(const wxColour & fore) function, expected prototype:\nvoid wxStyledTextCtrl::SetAdditionalCaretForeground(const wxColour & fore)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* fore_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !fore_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fore in wxStyledTextCtrl::SetAdditionalCaretForeground function");
		}
		const wxColour & fore=*fore_ptr;

		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SetAdditionalCaretForeground(const wxColour &)");
		}
		self->SetAdditionalCaretForeground(fore);

		return 0;
	}

	// wxColour wxStyledTextCtrl::GetAdditionalCaretForeground() const
	static int _bind_GetAdditionalCaretForeground(lua_State *L) {
		if (!_lg_typecheck_GetAdditionalCaretForeground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxStyledTextCtrl::GetAdditionalCaretForeground() const function, expected prototype:\nwxColour wxStyledTextCtrl::GetAdditionalCaretForeground() const\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxStyledTextCtrl::GetAdditionalCaretForeground() const");
		}
		wxColour stack_lret = self->GetAdditionalCaretForeground();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// void wxStyledTextCtrl::RotateSelection()
	static int _bind_RotateSelection(lua_State *L) {
		if (!_lg_typecheck_RotateSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::RotateSelection() function, expected prototype:\nvoid wxStyledTextCtrl::RotateSelection()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::RotateSelection()");
		}
		self->RotateSelection();

		return 0;
	}

	// void wxStyledTextCtrl::SwapMainAnchorCaret()
	static int _bind_SwapMainAnchorCaret(lua_State *L) {
		if (!_lg_typecheck_SwapMainAnchorCaret(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextCtrl::SwapMainAnchorCaret() function, expected prototype:\nvoid wxStyledTextCtrl::SwapMainAnchorCaret()\nClass arguments details:\n");
		}


		wxStyledTextCtrl* self=dynamic_cast< wxStyledTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextCtrl::SwapMainAnchorCaret()");
		}
		self->SwapMainAnchorCaret();

		return 0;
	}


	// Operator binds:

};

wxStyledTextCtrl* LunaTraits< wxStyledTextCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxStyledTextCtrl::_bind_ctor(L);
}

void LunaTraits< wxStyledTextCtrl >::_bind_dtor(wxStyledTextCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxStyledTextCtrl >::className[] = "wxStyledTextCtrl";
const char LunaTraits< wxStyledTextCtrl >::fullName[] = "wxStyledTextCtrl";
const char LunaTraits< wxStyledTextCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxStyledTextCtrl >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxStyledTextCtrl >::hash = 38644753;
const int LunaTraits< wxStyledTextCtrl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxStyledTextCtrl >::methods[] = {
	{"AddRefDocument", &luna_wrapper_wxStyledTextCtrl::_bind_AddRefDocument},
	{"AddText", &luna_wrapper_wxStyledTextCtrl::_bind_AddText},
	{"AddTextRaw", &luna_wrapper_wxStyledTextCtrl::_bind_AddTextRaw},
	{"Allocate", &luna_wrapper_wxStyledTextCtrl::_bind_Allocate},
	{"AppendText", &luna_wrapper_wxStyledTextCtrl::_bind_AppendText},
	{"AppendTextRaw", &luna_wrapper_wxStyledTextCtrl::_bind_AppendTextRaw},
	{"AutoCompActive", &luna_wrapper_wxStyledTextCtrl::_bind_AutoCompActive},
	{"AutoCompCancel", &luna_wrapper_wxStyledTextCtrl::_bind_AutoCompCancel},
	{"AutoCompComplete", &luna_wrapper_wxStyledTextCtrl::_bind_AutoCompComplete},
	{"AutoCompGetAutoHide", &luna_wrapper_wxStyledTextCtrl::_bind_AutoCompGetAutoHide},
	{"AutoCompGetCancelAtStart", &luna_wrapper_wxStyledTextCtrl::_bind_AutoCompGetCancelAtStart},
	{"AutoCompGetChooseSingle", &luna_wrapper_wxStyledTextCtrl::_bind_AutoCompGetChooseSingle},
	{"AutoCompGetCurrent", &luna_wrapper_wxStyledTextCtrl::_bind_AutoCompGetCurrent},
	{"AutoCompGetDropRestOfWord", &luna_wrapper_wxStyledTextCtrl::_bind_AutoCompGetDropRestOfWord},
	{"AutoCompGetIgnoreCase", &luna_wrapper_wxStyledTextCtrl::_bind_AutoCompGetIgnoreCase},
	{"AutoCompGetMaxHeight", &luna_wrapper_wxStyledTextCtrl::_bind_AutoCompGetMaxHeight},
	{"AutoCompGetMaxWidth", &luna_wrapper_wxStyledTextCtrl::_bind_AutoCompGetMaxWidth},
	{"AutoCompGetSeparator", &luna_wrapper_wxStyledTextCtrl::_bind_AutoCompGetSeparator},
	{"AutoCompGetTypeSeparator", &luna_wrapper_wxStyledTextCtrl::_bind_AutoCompGetTypeSeparator},
	{"AutoCompPosStart", &luna_wrapper_wxStyledTextCtrl::_bind_AutoCompPosStart},
	{"AutoCompSelect", &luna_wrapper_wxStyledTextCtrl::_bind_AutoCompSelect},
	{"AutoCompSetAutoHide", &luna_wrapper_wxStyledTextCtrl::_bind_AutoCompSetAutoHide},
	{"AutoCompSetCancelAtStart", &luna_wrapper_wxStyledTextCtrl::_bind_AutoCompSetCancelAtStart},
	{"AutoCompSetChooseSingle", &luna_wrapper_wxStyledTextCtrl::_bind_AutoCompSetChooseSingle},
	{"AutoCompSetDropRestOfWord", &luna_wrapper_wxStyledTextCtrl::_bind_AutoCompSetDropRestOfWord},
	{"AutoCompSetFillUps", &luna_wrapper_wxStyledTextCtrl::_bind_AutoCompSetFillUps},
	{"AutoCompSetIgnoreCase", &luna_wrapper_wxStyledTextCtrl::_bind_AutoCompSetIgnoreCase},
	{"AutoCompSetMaxHeight", &luna_wrapper_wxStyledTextCtrl::_bind_AutoCompSetMaxHeight},
	{"AutoCompSetMaxWidth", &luna_wrapper_wxStyledTextCtrl::_bind_AutoCompSetMaxWidth},
	{"AutoCompSetSeparator", &luna_wrapper_wxStyledTextCtrl::_bind_AutoCompSetSeparator},
	{"AutoCompSetTypeSeparator", &luna_wrapper_wxStyledTextCtrl::_bind_AutoCompSetTypeSeparator},
	{"AutoCompShow", &luna_wrapper_wxStyledTextCtrl::_bind_AutoCompShow},
	{"AutoCompStops", &luna_wrapper_wxStyledTextCtrl::_bind_AutoCompStops},
	{"BackTab", &luna_wrapper_wxStyledTextCtrl::_bind_BackTab},
	{"BeginUndoAction", &luna_wrapper_wxStyledTextCtrl::_bind_BeginUndoAction},
	{"BraceBadLight", &luna_wrapper_wxStyledTextCtrl::_bind_BraceBadLight},
	{"BraceHighlight", &luna_wrapper_wxStyledTextCtrl::_bind_BraceHighlight},
	{"BraceMatch", &luna_wrapper_wxStyledTextCtrl::_bind_BraceMatch},
	{"CallTipActive", &luna_wrapper_wxStyledTextCtrl::_bind_CallTipActive},
	{"CallTipCancel", &luna_wrapper_wxStyledTextCtrl::_bind_CallTipCancel},
	{"CallTipPosAtStart", &luna_wrapper_wxStyledTextCtrl::_bind_CallTipPosAtStart},
	{"CallTipSetBackground", &luna_wrapper_wxStyledTextCtrl::_bind_CallTipSetBackground},
	{"CallTipSetForeground", &luna_wrapper_wxStyledTextCtrl::_bind_CallTipSetForeground},
	{"CallTipSetForegroundHighlight", &luna_wrapper_wxStyledTextCtrl::_bind_CallTipSetForegroundHighlight},
	{"CallTipSetHighlight", &luna_wrapper_wxStyledTextCtrl::_bind_CallTipSetHighlight},
	{"CallTipShow", &luna_wrapper_wxStyledTextCtrl::_bind_CallTipShow},
	{"CallTipUseStyle", &luna_wrapper_wxStyledTextCtrl::_bind_CallTipUseStyle},
	{"CanPaste", &luna_wrapper_wxStyledTextCtrl::_bind_CanPaste},
	{"CanRedo", &luna_wrapper_wxStyledTextCtrl::_bind_CanRedo},
	{"CanUndo", &luna_wrapper_wxStyledTextCtrl::_bind_CanUndo},
	{"Cancel", &luna_wrapper_wxStyledTextCtrl::_bind_Cancel},
	{"CharLeft", &luna_wrapper_wxStyledTextCtrl::_bind_CharLeft},
	{"CharLeftExtend", &luna_wrapper_wxStyledTextCtrl::_bind_CharLeftExtend},
	{"CharLeftRectExtend", &luna_wrapper_wxStyledTextCtrl::_bind_CharLeftRectExtend},
	{"CharRight", &luna_wrapper_wxStyledTextCtrl::_bind_CharRight},
	{"CharRightExtend", &luna_wrapper_wxStyledTextCtrl::_bind_CharRightExtend},
	{"CharRightRectExtend", &luna_wrapper_wxStyledTextCtrl::_bind_CharRightRectExtend},
	{"ChooseCaretX", &luna_wrapper_wxStyledTextCtrl::_bind_ChooseCaretX},
	{"Clear", &luna_wrapper_wxStyledTextCtrl::_bind_Clear},
	{"ClearAll", &luna_wrapper_wxStyledTextCtrl::_bind_ClearAll},
	{"ClearDocumentStyle", &luna_wrapper_wxStyledTextCtrl::_bind_ClearDocumentStyle},
	{"ClearRegisteredImages", &luna_wrapper_wxStyledTextCtrl::_bind_ClearRegisteredImages},
	{"CmdKeyAssign", &luna_wrapper_wxStyledTextCtrl::_bind_CmdKeyAssign},
	{"CmdKeyClear", &luna_wrapper_wxStyledTextCtrl::_bind_CmdKeyClear},
	{"CmdKeyClearAll", &luna_wrapper_wxStyledTextCtrl::_bind_CmdKeyClearAll},
	{"CmdKeyExecute", &luna_wrapper_wxStyledTextCtrl::_bind_CmdKeyExecute},
	{"Colourise", &luna_wrapper_wxStyledTextCtrl::_bind_Colourise},
	{"ConvertEOLs", &luna_wrapper_wxStyledTextCtrl::_bind_ConvertEOLs},
	{"Copy", &luna_wrapper_wxStyledTextCtrl::_bind_Copy},
	{"CopyRange", &luna_wrapper_wxStyledTextCtrl::_bind_CopyRange},
	{"CopyText", &luna_wrapper_wxStyledTextCtrl::_bind_CopyText},
	{"Create", &luna_wrapper_wxStyledTextCtrl::_bind_Create},
	{"CreateDocument", &luna_wrapper_wxStyledTextCtrl::_bind_CreateDocument},
	{"Cut", &luna_wrapper_wxStyledTextCtrl::_bind_Cut},
	{"DelLineLeft", &luna_wrapper_wxStyledTextCtrl::_bind_DelLineLeft},
	{"DelLineRight", &luna_wrapper_wxStyledTextCtrl::_bind_DelLineRight},
	{"DelWordLeft", &luna_wrapper_wxStyledTextCtrl::_bind_DelWordLeft},
	{"DelWordRight", &luna_wrapper_wxStyledTextCtrl::_bind_DelWordRight},
	{"DeleteBack", &luna_wrapper_wxStyledTextCtrl::_bind_DeleteBack},
	{"DeleteBackNotLine", &luna_wrapper_wxStyledTextCtrl::_bind_DeleteBackNotLine},
	{"DoDragOver", &luna_wrapper_wxStyledTextCtrl::_bind_DoDragOver},
	{"DoDropText", &luna_wrapper_wxStyledTextCtrl::_bind_DoDropText},
	{"DocLineFromVisible", &luna_wrapper_wxStyledTextCtrl::_bind_DocLineFromVisible},
	{"DocumentEnd", &luna_wrapper_wxStyledTextCtrl::_bind_DocumentEnd},
	{"DocumentEndExtend", &luna_wrapper_wxStyledTextCtrl::_bind_DocumentEndExtend},
	{"DocumentStart", &luna_wrapper_wxStyledTextCtrl::_bind_DocumentStart},
	{"DocumentStartExtend", &luna_wrapper_wxStyledTextCtrl::_bind_DocumentStartExtend},
	{"EditToggleOvertype", &luna_wrapper_wxStyledTextCtrl::_bind_EditToggleOvertype},
	{"EndUndoAction", &luna_wrapper_wxStyledTextCtrl::_bind_EndUndoAction},
	{"EnsureCaretVisible", &luna_wrapper_wxStyledTextCtrl::_bind_EnsureCaretVisible},
	{"EnsureVisible", &luna_wrapper_wxStyledTextCtrl::_bind_EnsureVisible},
	{"EnsureVisibleEnforcePolicy", &luna_wrapper_wxStyledTextCtrl::_bind_EnsureVisibleEnforcePolicy},
	{"FindColumn", &luna_wrapper_wxStyledTextCtrl::_bind_FindColumn},
	{"FindText", &luna_wrapper_wxStyledTextCtrl::_bind_FindText},
	{"FormFeed", &luna_wrapper_wxStyledTextCtrl::_bind_FormFeed},
	{"FormatRange", &luna_wrapper_wxStyledTextCtrl::_bind_FormatRange},
	{"GetAnchor", &luna_wrapper_wxStyledTextCtrl::_bind_GetAnchor},
	{"GetBackSpaceUnIndents", &luna_wrapper_wxStyledTextCtrl::_bind_GetBackSpaceUnIndents},
	{"GetCaretForeground", &luna_wrapper_wxStyledTextCtrl::_bind_GetCaretForeground},
	{"GetCaretLineBackAlpha", &luna_wrapper_wxStyledTextCtrl::_bind_GetCaretLineBackAlpha},
	{"GetCaretLineBackground", &luna_wrapper_wxStyledTextCtrl::_bind_GetCaretLineBackground},
	{"GetCaretLineVisible", &luna_wrapper_wxStyledTextCtrl::_bind_GetCaretLineVisible},
	{"GetCaretPeriod", &luna_wrapper_wxStyledTextCtrl::_bind_GetCaretPeriod},
	{"GetCaretSticky", &luna_wrapper_wxStyledTextCtrl::_bind_GetCaretSticky},
	{"GetCaretWidth", &luna_wrapper_wxStyledTextCtrl::_bind_GetCaretWidth},
	{"GetCharAt", &luna_wrapper_wxStyledTextCtrl::_bind_GetCharAt},
	{"GetCodePage", &luna_wrapper_wxStyledTextCtrl::_bind_GetCodePage},
	{"GetColumn", &luna_wrapper_wxStyledTextCtrl::_bind_GetColumn},
	{"GetControlCharSymbol", &luna_wrapper_wxStyledTextCtrl::_bind_GetControlCharSymbol},
	{"GetCurLine", &luna_wrapper_wxStyledTextCtrl::_bind_GetCurLine},
	{"GetCurrentLine", &luna_wrapper_wxStyledTextCtrl::_bind_GetCurrentLine},
	{"GetCurrentPos", &luna_wrapper_wxStyledTextCtrl::_bind_GetCurrentPos},
	{"GetDocPointer", &luna_wrapper_wxStyledTextCtrl::_bind_GetDocPointer},
	{"GetEOLMode", &luna_wrapper_wxStyledTextCtrl::_bind_GetEOLMode},
	{"GetEdgeColour", &luna_wrapper_wxStyledTextCtrl::_bind_GetEdgeColour},
	{"GetEdgeColumn", &luna_wrapper_wxStyledTextCtrl::_bind_GetEdgeColumn},
	{"GetEdgeMode", &luna_wrapper_wxStyledTextCtrl::_bind_GetEdgeMode},
	{"GetEndAtLastLine", &luna_wrapper_wxStyledTextCtrl::_bind_GetEndAtLastLine},
	{"GetEndStyled", &luna_wrapper_wxStyledTextCtrl::_bind_GetEndStyled},
	{"GetFirstVisibleLine", &luna_wrapper_wxStyledTextCtrl::_bind_GetFirstVisibleLine},
	{"GetFoldExpanded", &luna_wrapper_wxStyledTextCtrl::_bind_GetFoldExpanded},
	{"GetFoldLevel", &luna_wrapper_wxStyledTextCtrl::_bind_GetFoldLevel},
	{"GetFoldParent", &luna_wrapper_wxStyledTextCtrl::_bind_GetFoldParent},
	{"GetHighlightGuide", &luna_wrapper_wxStyledTextCtrl::_bind_GetHighlightGuide},
	{"GetIndent", &luna_wrapper_wxStyledTextCtrl::_bind_GetIndent},
	{"GetIndentationGuides", &luna_wrapper_wxStyledTextCtrl::_bind_GetIndentationGuides},
	{"GetLastChild", &luna_wrapper_wxStyledTextCtrl::_bind_GetLastChild},
	{"GetLastKeydownProcessed", &luna_wrapper_wxStyledTextCtrl::_bind_GetLastKeydownProcessed},
	{"GetLayoutCache", &luna_wrapper_wxStyledTextCtrl::_bind_GetLayoutCache},
	{"GetLength", &luna_wrapper_wxStyledTextCtrl::_bind_GetLength},
	{"GetLexer", &luna_wrapper_wxStyledTextCtrl::_bind_GetLexer},
	{"GetLine", &luna_wrapper_wxStyledTextCtrl::_bind_GetLine},
	{"GetLineCount", &luna_wrapper_wxStyledTextCtrl::_bind_GetLineCount},
	{"GetLineEndPosition", &luna_wrapper_wxStyledTextCtrl::_bind_GetLineEndPosition},
	{"GetLineIndentPosition", &luna_wrapper_wxStyledTextCtrl::_bind_GetLineIndentPosition},
	{"GetLineIndentation", &luna_wrapper_wxStyledTextCtrl::_bind_GetLineIndentation},
	{"GetLineSelEndPosition", &luna_wrapper_wxStyledTextCtrl::_bind_GetLineSelEndPosition},
	{"GetLineSelStartPosition", &luna_wrapper_wxStyledTextCtrl::_bind_GetLineSelStartPosition},
	{"GetLineState", &luna_wrapper_wxStyledTextCtrl::_bind_GetLineState},
	{"GetLineVisible", &luna_wrapper_wxStyledTextCtrl::_bind_GetLineVisible},
	{"GetMarginLeft", &luna_wrapper_wxStyledTextCtrl::_bind_GetMarginLeft},
	{"GetMarginMask", &luna_wrapper_wxStyledTextCtrl::_bind_GetMarginMask},
	{"GetMarginRight", &luna_wrapper_wxStyledTextCtrl::_bind_GetMarginRight},
	{"GetMarginSensitive", &luna_wrapper_wxStyledTextCtrl::_bind_GetMarginSensitive},
	{"GetMarginType", &luna_wrapper_wxStyledTextCtrl::_bind_GetMarginType},
	{"GetMarginWidth", &luna_wrapper_wxStyledTextCtrl::_bind_GetMarginWidth},
	{"GetMaxLineState", &luna_wrapper_wxStyledTextCtrl::_bind_GetMaxLineState},
	{"GetModEventMask", &luna_wrapper_wxStyledTextCtrl::_bind_GetModEventMask},
	{"GetModify", &luna_wrapper_wxStyledTextCtrl::_bind_GetModify},
	{"GetMouseDownCaptures", &luna_wrapper_wxStyledTextCtrl::_bind_GetMouseDownCaptures},
	{"GetMouseDwellTime", &luna_wrapper_wxStyledTextCtrl::_bind_GetMouseDwellTime},
	{"GetOvertype", &luna_wrapper_wxStyledTextCtrl::_bind_GetOvertype},
	{"GetPasteConvertEndings", &luna_wrapper_wxStyledTextCtrl::_bind_GetPasteConvertEndings},
	{"GetPrintColourMode", &luna_wrapper_wxStyledTextCtrl::_bind_GetPrintColourMode},
	{"GetPrintMagnification", &luna_wrapper_wxStyledTextCtrl::_bind_GetPrintMagnification},
	{"GetPrintWrapMode", &luna_wrapper_wxStyledTextCtrl::_bind_GetPrintWrapMode},
	{"GetProperty", &luna_wrapper_wxStyledTextCtrl::_bind_GetProperty},
	{"GetPropertyExpanded", &luna_wrapper_wxStyledTextCtrl::_bind_GetPropertyExpanded},
	{"GetPropertyInt", &luna_wrapper_wxStyledTextCtrl::_bind_GetPropertyInt},
	{"GetReadOnly", &luna_wrapper_wxStyledTextCtrl::_bind_GetReadOnly},
	{"GetSTCCursor", &luna_wrapper_wxStyledTextCtrl::_bind_GetSTCCursor},
	{"GetSTCFocus", &luna_wrapper_wxStyledTextCtrl::_bind_GetSTCFocus},
	{"GetScrollWidth", &luna_wrapper_wxStyledTextCtrl::_bind_GetScrollWidth},
	{"GetSearchFlags", &luna_wrapper_wxStyledTextCtrl::_bind_GetSearchFlags},
	{"GetSelAlpha", &luna_wrapper_wxStyledTextCtrl::_bind_GetSelAlpha},
	{"GetSelectedText", &luna_wrapper_wxStyledTextCtrl::_bind_GetSelectedText},
	{"GetSelection", &luna_wrapper_wxStyledTextCtrl::_bind_GetSelection},
	{"GetSelectionEnd", &luna_wrapper_wxStyledTextCtrl::_bind_GetSelectionEnd},
	{"GetSelectionMode", &luna_wrapper_wxStyledTextCtrl::_bind_GetSelectionMode},
	{"GetSelectionStart", &luna_wrapper_wxStyledTextCtrl::_bind_GetSelectionStart},
	{"GetStatus", &luna_wrapper_wxStyledTextCtrl::_bind_GetStatus},
	{"GetStyleAt", &luna_wrapper_wxStyledTextCtrl::_bind_GetStyleAt},
	{"GetStyleBits", &luna_wrapper_wxStyledTextCtrl::_bind_GetStyleBits},
	{"GetStyleBitsNeeded", &luna_wrapper_wxStyledTextCtrl::_bind_GetStyleBitsNeeded},
	{"GetTabIndents", &luna_wrapper_wxStyledTextCtrl::_bind_GetTabIndents},
	{"GetTabWidth", &luna_wrapper_wxStyledTextCtrl::_bind_GetTabWidth},
	{"GetTargetEnd", &luna_wrapper_wxStyledTextCtrl::_bind_GetTargetEnd},
	{"GetTargetStart", &luna_wrapper_wxStyledTextCtrl::_bind_GetTargetStart},
	{"GetText", &luna_wrapper_wxStyledTextCtrl::_bind_GetText},
	{"GetTextLength", &luna_wrapper_wxStyledTextCtrl::_bind_GetTextLength},
	{"GetTextRange", &luna_wrapper_wxStyledTextCtrl::_bind_GetTextRange},
	{"GetTwoPhaseDraw", &luna_wrapper_wxStyledTextCtrl::_bind_GetTwoPhaseDraw},
	{"GetUndoCollection", &luna_wrapper_wxStyledTextCtrl::_bind_GetUndoCollection},
	{"GetUseAntiAliasing", &luna_wrapper_wxStyledTextCtrl::_bind_GetUseAntiAliasing},
	{"GetUseHorizontalScrollBar", &luna_wrapper_wxStyledTextCtrl::_bind_GetUseHorizontalScrollBar},
	{"GetUseTabs", &luna_wrapper_wxStyledTextCtrl::_bind_GetUseTabs},
	{"GetUseVerticalScrollBar", &luna_wrapper_wxStyledTextCtrl::_bind_GetUseVerticalScrollBar},
	{"GetViewEOL", &luna_wrapper_wxStyledTextCtrl::_bind_GetViewEOL},
	{"GetViewWhiteSpace", &luna_wrapper_wxStyledTextCtrl::_bind_GetViewWhiteSpace},
	{"GetWrapMode", &luna_wrapper_wxStyledTextCtrl::_bind_GetWrapMode},
	{"GetWrapStartIndent", &luna_wrapper_wxStyledTextCtrl::_bind_GetWrapStartIndent},
	{"GetWrapVisualFlags", &luna_wrapper_wxStyledTextCtrl::_bind_GetWrapVisualFlags},
	{"GetWrapVisualFlagsLocation", &luna_wrapper_wxStyledTextCtrl::_bind_GetWrapVisualFlagsLocation},
	{"GetXOffset", &luna_wrapper_wxStyledTextCtrl::_bind_GetXOffset},
	{"GetZoom", &luna_wrapper_wxStyledTextCtrl::_bind_GetZoom},
	{"GotoLine", &luna_wrapper_wxStyledTextCtrl::_bind_GotoLine},
	{"GotoPos", &luna_wrapper_wxStyledTextCtrl::_bind_GotoPos},
	{"HideLines", &luna_wrapper_wxStyledTextCtrl::_bind_HideLines},
	{"HideSelection", &luna_wrapper_wxStyledTextCtrl::_bind_HideSelection},
	{"Home", &luna_wrapper_wxStyledTextCtrl::_bind_Home},
	{"HomeDisplay", &luna_wrapper_wxStyledTextCtrl::_bind_HomeDisplay},
	{"HomeDisplayExtend", &luna_wrapper_wxStyledTextCtrl::_bind_HomeDisplayExtend},
	{"HomeExtend", &luna_wrapper_wxStyledTextCtrl::_bind_HomeExtend},
	{"HomeRectExtend", &luna_wrapper_wxStyledTextCtrl::_bind_HomeRectExtend},
	{"HomeWrap", &luna_wrapper_wxStyledTextCtrl::_bind_HomeWrap},
	{"HomeWrapExtend", &luna_wrapper_wxStyledTextCtrl::_bind_HomeWrapExtend},
	{"IndicatorGetForeground", &luna_wrapper_wxStyledTextCtrl::_bind_IndicatorGetForeground},
	{"IndicatorGetStyle", &luna_wrapper_wxStyledTextCtrl::_bind_IndicatorGetStyle},
	{"IndicatorSetForeground", &luna_wrapper_wxStyledTextCtrl::_bind_IndicatorSetForeground},
	{"IndicatorSetStyle", &luna_wrapper_wxStyledTextCtrl::_bind_IndicatorSetStyle},
	{"InsertText", &luna_wrapper_wxStyledTextCtrl::_bind_InsertText},
	{"InsertTextRaw", &luna_wrapper_wxStyledTextCtrl::_bind_InsertTextRaw},
	{"LineCopy", &luna_wrapper_wxStyledTextCtrl::_bind_LineCopy},
	{"LineCut", &luna_wrapper_wxStyledTextCtrl::_bind_LineCut},
	{"LineDelete", &luna_wrapper_wxStyledTextCtrl::_bind_LineDelete},
	{"LineDown", &luna_wrapper_wxStyledTextCtrl::_bind_LineDown},
	{"LineDownExtend", &luna_wrapper_wxStyledTextCtrl::_bind_LineDownExtend},
	{"LineDownRectExtend", &luna_wrapper_wxStyledTextCtrl::_bind_LineDownRectExtend},
	{"LineDuplicate", &luna_wrapper_wxStyledTextCtrl::_bind_LineDuplicate},
	{"LineEnd", &luna_wrapper_wxStyledTextCtrl::_bind_LineEnd},
	{"LineEndDisplay", &luna_wrapper_wxStyledTextCtrl::_bind_LineEndDisplay},
	{"LineEndDisplayExtend", &luna_wrapper_wxStyledTextCtrl::_bind_LineEndDisplayExtend},
	{"LineEndExtend", &luna_wrapper_wxStyledTextCtrl::_bind_LineEndExtend},
	{"LineEndRectExtend", &luna_wrapper_wxStyledTextCtrl::_bind_LineEndRectExtend},
	{"LineEndWrap", &luna_wrapper_wxStyledTextCtrl::_bind_LineEndWrap},
	{"LineEndWrapExtend", &luna_wrapper_wxStyledTextCtrl::_bind_LineEndWrapExtend},
	{"LineFromPosition", &luna_wrapper_wxStyledTextCtrl::_bind_LineFromPosition},
	{"LineLength", &luna_wrapper_wxStyledTextCtrl::_bind_LineLength},
	{"LineScroll", &luna_wrapper_wxStyledTextCtrl::_bind_LineScroll},
	{"LineScrollDown", &luna_wrapper_wxStyledTextCtrl::_bind_LineScrollDown},
	{"LineScrollUp", &luna_wrapper_wxStyledTextCtrl::_bind_LineScrollUp},
	{"LineTranspose", &luna_wrapper_wxStyledTextCtrl::_bind_LineTranspose},
	{"LineUp", &luna_wrapper_wxStyledTextCtrl::_bind_LineUp},
	{"LineUpExtend", &luna_wrapper_wxStyledTextCtrl::_bind_LineUpExtend},
	{"LineUpRectExtend", &luna_wrapper_wxStyledTextCtrl::_bind_LineUpRectExtend},
	{"LinesJoin", &luna_wrapper_wxStyledTextCtrl::_bind_LinesJoin},
	{"LinesOnScreen", &luna_wrapper_wxStyledTextCtrl::_bind_LinesOnScreen},
	{"LinesSplit", &luna_wrapper_wxStyledTextCtrl::_bind_LinesSplit},
	{"LoadFile", &luna_wrapper_wxStyledTextCtrl::_bind_LoadFile},
	{"LowerCase", &luna_wrapper_wxStyledTextCtrl::_bind_LowerCase},
	{"MarkerAdd", &luna_wrapper_wxStyledTextCtrl::_bind_MarkerAdd},
	{"MarkerAddSet", &luna_wrapper_wxStyledTextCtrl::_bind_MarkerAddSet},
	{"MarkerDefine", &luna_wrapper_wxStyledTextCtrl::_bind_MarkerDefine},
	{"MarkerDefineBitmap", &luna_wrapper_wxStyledTextCtrl::_bind_MarkerDefineBitmap},
	{"MarkerDelete", &luna_wrapper_wxStyledTextCtrl::_bind_MarkerDelete},
	{"MarkerDeleteAll", &luna_wrapper_wxStyledTextCtrl::_bind_MarkerDeleteAll},
	{"MarkerDeleteHandle", &luna_wrapper_wxStyledTextCtrl::_bind_MarkerDeleteHandle},
	{"MarkerGet", &luna_wrapper_wxStyledTextCtrl::_bind_MarkerGet},
	{"MarkerLineFromHandle", &luna_wrapper_wxStyledTextCtrl::_bind_MarkerLineFromHandle},
	{"MarkerNext", &luna_wrapper_wxStyledTextCtrl::_bind_MarkerNext},
	{"MarkerPrevious", &luna_wrapper_wxStyledTextCtrl::_bind_MarkerPrevious},
	{"MarkerSetAlpha", &luna_wrapper_wxStyledTextCtrl::_bind_MarkerSetAlpha},
	{"MarkerSetBackground", &luna_wrapper_wxStyledTextCtrl::_bind_MarkerSetBackground},
	{"MarkerSetForeground", &luna_wrapper_wxStyledTextCtrl::_bind_MarkerSetForeground},
	{"MoveCaretInsideView", &luna_wrapper_wxStyledTextCtrl::_bind_MoveCaretInsideView},
	{"NewLine", &luna_wrapper_wxStyledTextCtrl::_bind_NewLine},
	{"PageDown", &luna_wrapper_wxStyledTextCtrl::_bind_PageDown},
	{"PageDownExtend", &luna_wrapper_wxStyledTextCtrl::_bind_PageDownExtend},
	{"PageDownRectExtend", &luna_wrapper_wxStyledTextCtrl::_bind_PageDownRectExtend},
	{"PageUp", &luna_wrapper_wxStyledTextCtrl::_bind_PageUp},
	{"PageUpExtend", &luna_wrapper_wxStyledTextCtrl::_bind_PageUpExtend},
	{"PageUpRectExtend", &luna_wrapper_wxStyledTextCtrl::_bind_PageUpRectExtend},
	{"ParaDown", &luna_wrapper_wxStyledTextCtrl::_bind_ParaDown},
	{"ParaDownExtend", &luna_wrapper_wxStyledTextCtrl::_bind_ParaDownExtend},
	{"ParaUp", &luna_wrapper_wxStyledTextCtrl::_bind_ParaUp},
	{"ParaUpExtend", &luna_wrapper_wxStyledTextCtrl::_bind_ParaUpExtend},
	{"Paste", &luna_wrapper_wxStyledTextCtrl::_bind_Paste},
	{"PointFromPosition", &luna_wrapper_wxStyledTextCtrl::_bind_PointFromPosition},
	{"PositionAfter", &luna_wrapper_wxStyledTextCtrl::_bind_PositionAfter},
	{"PositionBefore", &luna_wrapper_wxStyledTextCtrl::_bind_PositionBefore},
	{"PositionFromLine", &luna_wrapper_wxStyledTextCtrl::_bind_PositionFromLine},
	{"PositionFromPoint", &luna_wrapper_wxStyledTextCtrl::_bind_PositionFromPoint},
	{"PositionFromPointClose", &luna_wrapper_wxStyledTextCtrl::_bind_PositionFromPointClose},
	{"Redo", &luna_wrapper_wxStyledTextCtrl::_bind_Redo},
	{"RegisterImage", &luna_wrapper_wxStyledTextCtrl::_bind_RegisterImage},
	{"ReleaseDocument", &luna_wrapper_wxStyledTextCtrl::_bind_ReleaseDocument},
	{"ReplaceSelection", &luna_wrapper_wxStyledTextCtrl::_bind_ReplaceSelection},
	{"ReplaceTarget", &luna_wrapper_wxStyledTextCtrl::_bind_ReplaceTarget},
	{"ReplaceTargetRE", &luna_wrapper_wxStyledTextCtrl::_bind_ReplaceTargetRE},
	{"SaveFile", &luna_wrapper_wxStyledTextCtrl::_bind_SaveFile},
	{"ScrollToColumn", &luna_wrapper_wxStyledTextCtrl::_bind_ScrollToColumn},
	{"ScrollToLine", &luna_wrapper_wxStyledTextCtrl::_bind_ScrollToLine},
	{"SearchAnchor", &luna_wrapper_wxStyledTextCtrl::_bind_SearchAnchor},
	{"SearchInTarget", &luna_wrapper_wxStyledTextCtrl::_bind_SearchInTarget},
	{"SearchNext", &luna_wrapper_wxStyledTextCtrl::_bind_SearchNext},
	{"SearchPrev", &luna_wrapper_wxStyledTextCtrl::_bind_SearchPrev},
	{"SelectAll", &luna_wrapper_wxStyledTextCtrl::_bind_SelectAll},
	{"SelectionDuplicate", &luna_wrapper_wxStyledTextCtrl::_bind_SelectionDuplicate},
	{"SelectionIsRectangle", &luna_wrapper_wxStyledTextCtrl::_bind_SelectionIsRectangle},
	{"SetAnchor", &luna_wrapper_wxStyledTextCtrl::_bind_SetAnchor},
	{"SetBackSpaceUnIndents", &luna_wrapper_wxStyledTextCtrl::_bind_SetBackSpaceUnIndents},
	{"SetCaretForeground", &luna_wrapper_wxStyledTextCtrl::_bind_SetCaretForeground},
	{"SetCaretLineBackAlpha", &luna_wrapper_wxStyledTextCtrl::_bind_SetCaretLineBackAlpha},
	{"SetCaretLineBackground", &luna_wrapper_wxStyledTextCtrl::_bind_SetCaretLineBackground},
	{"SetCaretLineVisible", &luna_wrapper_wxStyledTextCtrl::_bind_SetCaretLineVisible},
	{"SetCaretPeriod", &luna_wrapper_wxStyledTextCtrl::_bind_SetCaretPeriod},
	{"SetCaretSticky", &luna_wrapper_wxStyledTextCtrl::_bind_SetCaretSticky},
	{"SetCaretWidth", &luna_wrapper_wxStyledTextCtrl::_bind_SetCaretWidth},
	{"SetCharsDefault", &luna_wrapper_wxStyledTextCtrl::_bind_SetCharsDefault},
	{"SetCodePage", &luna_wrapper_wxStyledTextCtrl::_bind_SetCodePage},
	{"SetControlCharSymbol", &luna_wrapper_wxStyledTextCtrl::_bind_SetControlCharSymbol},
	{"SetCurrentPos", &luna_wrapper_wxStyledTextCtrl::_bind_SetCurrentPos},
	{"SetDocPointer", &luna_wrapper_wxStyledTextCtrl::_bind_SetDocPointer},
	{"SetEOLMode", &luna_wrapper_wxStyledTextCtrl::_bind_SetEOLMode},
	{"SetEdgeColour", &luna_wrapper_wxStyledTextCtrl::_bind_SetEdgeColour},
	{"SetEdgeColumn", &luna_wrapper_wxStyledTextCtrl::_bind_SetEdgeColumn},
	{"SetEdgeMode", &luna_wrapper_wxStyledTextCtrl::_bind_SetEdgeMode},
	{"SetEndAtLastLine", &luna_wrapper_wxStyledTextCtrl::_bind_SetEndAtLastLine},
	{"SetFoldExpanded", &luna_wrapper_wxStyledTextCtrl::_bind_SetFoldExpanded},
	{"SetFoldFlags", &luna_wrapper_wxStyledTextCtrl::_bind_SetFoldFlags},
	{"SetFoldLevel", &luna_wrapper_wxStyledTextCtrl::_bind_SetFoldLevel},
	{"SetFoldMarginColour", &luna_wrapper_wxStyledTextCtrl::_bind_SetFoldMarginColour},
	{"SetFoldMarginHiColour", &luna_wrapper_wxStyledTextCtrl::_bind_SetFoldMarginHiColour},
	{"SetHScrollBar", &luna_wrapper_wxStyledTextCtrl::_bind_SetHScrollBar},
	{"SetHighlightGuide", &luna_wrapper_wxStyledTextCtrl::_bind_SetHighlightGuide},
	{"SetHotspotActiveBackground", &luna_wrapper_wxStyledTextCtrl::_bind_SetHotspotActiveBackground},
	{"SetHotspotActiveForeground", &luna_wrapper_wxStyledTextCtrl::_bind_SetHotspotActiveForeground},
	{"SetHotspotActiveUnderline", &luna_wrapper_wxStyledTextCtrl::_bind_SetHotspotActiveUnderline},
	{"SetHotspotSingleLine", &luna_wrapper_wxStyledTextCtrl::_bind_SetHotspotSingleLine},
	{"SetIndent", &luna_wrapper_wxStyledTextCtrl::_bind_SetIndent},
	{"SetIndentationGuides", &luna_wrapper_wxStyledTextCtrl::_bind_SetIndentationGuides},
	{"SetKeyWords", &luna_wrapper_wxStyledTextCtrl::_bind_SetKeyWords},
	{"SetLastKeydownProcessed", &luna_wrapper_wxStyledTextCtrl::_bind_SetLastKeydownProcessed},
	{"SetLayoutCache", &luna_wrapper_wxStyledTextCtrl::_bind_SetLayoutCache},
	{"SetLexer", &luna_wrapper_wxStyledTextCtrl::_bind_SetLexer},
	{"SetLexerLanguage", &luna_wrapper_wxStyledTextCtrl::_bind_SetLexerLanguage},
	{"SetLineIndentation", &luna_wrapper_wxStyledTextCtrl::_bind_SetLineIndentation},
	{"SetLineState", &luna_wrapper_wxStyledTextCtrl::_bind_SetLineState},
	{"SetMarginLeft", &luna_wrapper_wxStyledTextCtrl::_bind_SetMarginLeft},
	{"SetMarginMask", &luna_wrapper_wxStyledTextCtrl::_bind_SetMarginMask},
	{"SetMarginRight", &luna_wrapper_wxStyledTextCtrl::_bind_SetMarginRight},
	{"SetMarginSensitive", &luna_wrapper_wxStyledTextCtrl::_bind_SetMarginSensitive},
	{"SetMarginType", &luna_wrapper_wxStyledTextCtrl::_bind_SetMarginType},
	{"SetMarginWidth", &luna_wrapper_wxStyledTextCtrl::_bind_SetMarginWidth},
	{"SetMargins", &luna_wrapper_wxStyledTextCtrl::_bind_SetMargins},
	{"SetModEventMask", &luna_wrapper_wxStyledTextCtrl::_bind_SetModEventMask},
	{"SetMouseDownCaptures", &luna_wrapper_wxStyledTextCtrl::_bind_SetMouseDownCaptures},
	{"SetMouseDwellTime", &luna_wrapper_wxStyledTextCtrl::_bind_SetMouseDwellTime},
	{"SetOvertype", &luna_wrapper_wxStyledTextCtrl::_bind_SetOvertype},
	{"SetPasteConvertEndings", &luna_wrapper_wxStyledTextCtrl::_bind_SetPasteConvertEndings},
	{"SetPrintColourMode", &luna_wrapper_wxStyledTextCtrl::_bind_SetPrintColourMode},
	{"SetPrintMagnification", &luna_wrapper_wxStyledTextCtrl::_bind_SetPrintMagnification},
	{"SetPrintWrapMode", &luna_wrapper_wxStyledTextCtrl::_bind_SetPrintWrapMode},
	{"SetProperty", &luna_wrapper_wxStyledTextCtrl::_bind_SetProperty},
	{"SetReadOnly", &luna_wrapper_wxStyledTextCtrl::_bind_SetReadOnly},
	{"SetSTCCursor", &luna_wrapper_wxStyledTextCtrl::_bind_SetSTCCursor},
	{"SetSTCFocus", &luna_wrapper_wxStyledTextCtrl::_bind_SetSTCFocus},
	{"SetSavePoint", &luna_wrapper_wxStyledTextCtrl::_bind_SetSavePoint},
	{"SetScrollWidth", &luna_wrapper_wxStyledTextCtrl::_bind_SetScrollWidth},
	{"SetSearchFlags", &luna_wrapper_wxStyledTextCtrl::_bind_SetSearchFlags},
	{"SetSelAlpha", &luna_wrapper_wxStyledTextCtrl::_bind_SetSelAlpha},
	{"SetSelBackground", &luna_wrapper_wxStyledTextCtrl::_bind_SetSelBackground},
	{"SetSelForeground", &luna_wrapper_wxStyledTextCtrl::_bind_SetSelForeground},
	{"SetSelection", &luna_wrapper_wxStyledTextCtrl::_bind_SetSelection},
	{"SetSelectionEnd", &luna_wrapper_wxStyledTextCtrl::_bind_SetSelectionEnd},
	{"SetSelectionMode", &luna_wrapper_wxStyledTextCtrl::_bind_SetSelectionMode},
	{"SetSelectionStart", &luna_wrapper_wxStyledTextCtrl::_bind_SetSelectionStart},
	{"SetStatus", &luna_wrapper_wxStyledTextCtrl::_bind_SetStatus},
	{"SetStyleBits", &luna_wrapper_wxStyledTextCtrl::_bind_SetStyleBits},
	{"SetStyleBytes", &luna_wrapper_wxStyledTextCtrl::_bind_SetStyleBytes},
	{"SetStyling", &luna_wrapper_wxStyledTextCtrl::_bind_SetStyling},
	{"SetTabIndents", &luna_wrapper_wxStyledTextCtrl::_bind_SetTabIndents},
	{"SetTabWidth", &luna_wrapper_wxStyledTextCtrl::_bind_SetTabWidth},
	{"SetTargetEnd", &luna_wrapper_wxStyledTextCtrl::_bind_SetTargetEnd},
	{"SetTargetStart", &luna_wrapper_wxStyledTextCtrl::_bind_SetTargetStart},
	{"SetText", &luna_wrapper_wxStyledTextCtrl::_bind_SetText},
	{"SetTextRaw", &luna_wrapper_wxStyledTextCtrl::_bind_SetTextRaw},
	{"SetTwoPhaseDraw", &luna_wrapper_wxStyledTextCtrl::_bind_SetTwoPhaseDraw},
	{"SetUndoCollection", &luna_wrapper_wxStyledTextCtrl::_bind_SetUndoCollection},
	{"SetUseAntiAliasing", &luna_wrapper_wxStyledTextCtrl::_bind_SetUseAntiAliasing},
	{"SetUseHorizontalScrollBar", &luna_wrapper_wxStyledTextCtrl::_bind_SetUseHorizontalScrollBar},
	{"SetUseTabs", &luna_wrapper_wxStyledTextCtrl::_bind_SetUseTabs},
	{"SetUseVerticalScrollBar", &luna_wrapper_wxStyledTextCtrl::_bind_SetUseVerticalScrollBar},
	{"SetVScrollBar", &luna_wrapper_wxStyledTextCtrl::_bind_SetVScrollBar},
	{"SetViewEOL", &luna_wrapper_wxStyledTextCtrl::_bind_SetViewEOL},
	{"SetViewWhiteSpace", &luna_wrapper_wxStyledTextCtrl::_bind_SetViewWhiteSpace},
	{"SetVisiblePolicy", &luna_wrapper_wxStyledTextCtrl::_bind_SetVisiblePolicy},
	{"SetWhitespaceBackground", &luna_wrapper_wxStyledTextCtrl::_bind_SetWhitespaceBackground},
	{"SetWhitespaceChars", &luna_wrapper_wxStyledTextCtrl::_bind_SetWhitespaceChars},
	{"SetWhitespaceForeground", &luna_wrapper_wxStyledTextCtrl::_bind_SetWhitespaceForeground},
	{"SetWhitespaceSize", &luna_wrapper_wxStyledTextCtrl::_bind_SetWhitespaceSize},
	{"GetWhitespaceSize", &luna_wrapper_wxStyledTextCtrl::_bind_GetWhitespaceSize},
	{"SetWordChars", &luna_wrapper_wxStyledTextCtrl::_bind_SetWordChars},
	{"SetWrapMode", &luna_wrapper_wxStyledTextCtrl::_bind_SetWrapMode},
	{"SetWrapStartIndent", &luna_wrapper_wxStyledTextCtrl::_bind_SetWrapStartIndent},
	{"SetWrapVisualFlags", &luna_wrapper_wxStyledTextCtrl::_bind_SetWrapVisualFlags},
	{"SetWrapVisualFlagsLocation", &luna_wrapper_wxStyledTextCtrl::_bind_SetWrapVisualFlagsLocation},
	{"SetXCaretPolicy", &luna_wrapper_wxStyledTextCtrl::_bind_SetXCaretPolicy},
	{"SetXOffset", &luna_wrapper_wxStyledTextCtrl::_bind_SetXOffset},
	{"SetYCaretPolicy", &luna_wrapper_wxStyledTextCtrl::_bind_SetYCaretPolicy},
	{"SetZoom", &luna_wrapper_wxStyledTextCtrl::_bind_SetZoom},
	{"ShowLines", &luna_wrapper_wxStyledTextCtrl::_bind_ShowLines},
	{"StartRecord", &luna_wrapper_wxStyledTextCtrl::_bind_StartRecord},
	{"StartStyling", &luna_wrapper_wxStyledTextCtrl::_bind_StartStyling},
	{"StopRecord", &luna_wrapper_wxStyledTextCtrl::_bind_StopRecord},
	{"StutteredPageDown", &luna_wrapper_wxStyledTextCtrl::_bind_StutteredPageDown},
	{"StutteredPageDownExtend", &luna_wrapper_wxStyledTextCtrl::_bind_StutteredPageDownExtend},
	{"StutteredPageUp", &luna_wrapper_wxStyledTextCtrl::_bind_StutteredPageUp},
	{"StutteredPageUpExtend", &luna_wrapper_wxStyledTextCtrl::_bind_StutteredPageUpExtend},
	{"StyleClearAll", &luna_wrapper_wxStyledTextCtrl::_bind_StyleClearAll},
	{"StyleResetDefault", &luna_wrapper_wxStyledTextCtrl::_bind_StyleResetDefault},
	{"StyleSetBackground", &luna_wrapper_wxStyledTextCtrl::_bind_StyleSetBackground},
	{"StyleSetBold", &luna_wrapper_wxStyledTextCtrl::_bind_StyleSetBold},
	{"StyleSetCase", &luna_wrapper_wxStyledTextCtrl::_bind_StyleSetCase},
	{"StyleSetChangeable", &luna_wrapper_wxStyledTextCtrl::_bind_StyleSetChangeable},
	{"StyleSetCharacterSet", &luna_wrapper_wxStyledTextCtrl::_bind_StyleSetCharacterSet},
	{"StyleSetEOLFilled", &luna_wrapper_wxStyledTextCtrl::_bind_StyleSetEOLFilled},
	{"StyleSetFaceName", &luna_wrapper_wxStyledTextCtrl::_bind_StyleSetFaceName},
	{"StyleSetFont", &luna_wrapper_wxStyledTextCtrl::_bind_StyleSetFont},
	{"StyleSetFontAttr", &luna_wrapper_wxStyledTextCtrl::_bind_StyleSetFontAttr},
	{"StyleSetFontEncoding", &luna_wrapper_wxStyledTextCtrl::_bind_StyleSetFontEncoding},
	{"StyleSetForeground", &luna_wrapper_wxStyledTextCtrl::_bind_StyleSetForeground},
	{"StyleSetHotSpot", &luna_wrapper_wxStyledTextCtrl::_bind_StyleSetHotSpot},
	{"StyleSetItalic", &luna_wrapper_wxStyledTextCtrl::_bind_StyleSetItalic},
	{"StyleSetSize", &luna_wrapper_wxStyledTextCtrl::_bind_StyleSetSize},
	{"StyleSetSpec", &luna_wrapper_wxStyledTextCtrl::_bind_StyleSetSpec},
	{"StyleSetUnderline", &luna_wrapper_wxStyledTextCtrl::_bind_StyleSetUnderline},
	{"StyleSetVisible", &luna_wrapper_wxStyledTextCtrl::_bind_StyleSetVisible},
	{"Tab", &luna_wrapper_wxStyledTextCtrl::_bind_Tab},
	{"TargetFromSelection", &luna_wrapper_wxStyledTextCtrl::_bind_TargetFromSelection},
	{"TextHeight", &luna_wrapper_wxStyledTextCtrl::_bind_TextHeight},
	{"TextWidth", &luna_wrapper_wxStyledTextCtrl::_bind_TextWidth},
	{"ToggleCaretSticky", &luna_wrapper_wxStyledTextCtrl::_bind_ToggleCaretSticky},
	{"ToggleFold", &luna_wrapper_wxStyledTextCtrl::_bind_ToggleFold},
	{"Undo", &luna_wrapper_wxStyledTextCtrl::_bind_Undo},
	{"UpperCase", &luna_wrapper_wxStyledTextCtrl::_bind_UpperCase},
	{"UsePopUp", &luna_wrapper_wxStyledTextCtrl::_bind_UsePopUp},
	{"UserListShow", &luna_wrapper_wxStyledTextCtrl::_bind_UserListShow},
	{"VCHome", &luna_wrapper_wxStyledTextCtrl::_bind_VCHome},
	{"VCHomeExtend", &luna_wrapper_wxStyledTextCtrl::_bind_VCHomeExtend},
	{"VCHomeRectExtend", &luna_wrapper_wxStyledTextCtrl::_bind_VCHomeRectExtend},
	{"VCHomeWrap", &luna_wrapper_wxStyledTextCtrl::_bind_VCHomeWrap},
	{"VCHomeWrapExtend", &luna_wrapper_wxStyledTextCtrl::_bind_VCHomeWrapExtend},
	{"VisibleFromDocLine", &luna_wrapper_wxStyledTextCtrl::_bind_VisibleFromDocLine},
	{"WordEndPosition", &luna_wrapper_wxStyledTextCtrl::_bind_WordEndPosition},
	{"WordLeft", &luna_wrapper_wxStyledTextCtrl::_bind_WordLeft},
	{"WordLeftEnd", &luna_wrapper_wxStyledTextCtrl::_bind_WordLeftEnd},
	{"WordLeftEndExtend", &luna_wrapper_wxStyledTextCtrl::_bind_WordLeftEndExtend},
	{"WordLeftExtend", &luna_wrapper_wxStyledTextCtrl::_bind_WordLeftExtend},
	{"WordPartLeft", &luna_wrapper_wxStyledTextCtrl::_bind_WordPartLeft},
	{"WordPartLeftExtend", &luna_wrapper_wxStyledTextCtrl::_bind_WordPartLeftExtend},
	{"WordPartRight", &luna_wrapper_wxStyledTextCtrl::_bind_WordPartRight},
	{"WordPartRightExtend", &luna_wrapper_wxStyledTextCtrl::_bind_WordPartRightExtend},
	{"WordRight", &luna_wrapper_wxStyledTextCtrl::_bind_WordRight},
	{"WordRightEnd", &luna_wrapper_wxStyledTextCtrl::_bind_WordRightEnd},
	{"WordRightEndExtend", &luna_wrapper_wxStyledTextCtrl::_bind_WordRightEndExtend},
	{"WordRightExtend", &luna_wrapper_wxStyledTextCtrl::_bind_WordRightExtend},
	{"WordStartPosition", &luna_wrapper_wxStyledTextCtrl::_bind_WordStartPosition},
	{"WrapCount", &luna_wrapper_wxStyledTextCtrl::_bind_WrapCount},
	{"ZoomIn", &luna_wrapper_wxStyledTextCtrl::_bind_ZoomIn},
	{"ZoomOut", &luna_wrapper_wxStyledTextCtrl::_bind_ZoomOut},
	{"SetWrapIndentMode", &luna_wrapper_wxStyledTextCtrl::_bind_SetWrapIndentMode},
	{"GetWrapIndentMode", &luna_wrapper_wxStyledTextCtrl::_bind_GetWrapIndentMode},
	{"SetFirstVisibleLine", &luna_wrapper_wxStyledTextCtrl::_bind_SetFirstVisibleLine},
	{"CopyAllowLine", &luna_wrapper_wxStyledTextCtrl::_bind_CopyAllowLine},
	{"GetCharacterPointer", &luna_wrapper_wxStyledTextCtrl::_bind_GetCharacterPointer},
	{"SetKeysUnicode", &luna_wrapper_wxStyledTextCtrl::_bind_SetKeysUnicode},
	{"GetKeysUnicode", &luna_wrapper_wxStyledTextCtrl::_bind_GetKeysUnicode},
	{"IndicatorSetAlpha", &luna_wrapper_wxStyledTextCtrl::_bind_IndicatorSetAlpha},
	{"IndicatorGetAlpha", &luna_wrapper_wxStyledTextCtrl::_bind_IndicatorGetAlpha},
	{"SetExtraAscent", &luna_wrapper_wxStyledTextCtrl::_bind_SetExtraAscent},
	{"GetExtraAscent", &luna_wrapper_wxStyledTextCtrl::_bind_GetExtraAscent},
	{"SetExtraDescent", &luna_wrapper_wxStyledTextCtrl::_bind_SetExtraDescent},
	{"GetExtraDescent", &luna_wrapper_wxStyledTextCtrl::_bind_GetExtraDescent},
	{"GetMarkerSymbolDefined", &luna_wrapper_wxStyledTextCtrl::_bind_GetMarkerSymbolDefined},
	{"MarginSetText", &luna_wrapper_wxStyledTextCtrl::_bind_MarginSetText},
	{"MarginGetText", &luna_wrapper_wxStyledTextCtrl::_bind_MarginGetText},
	{"MarginSetStyle", &luna_wrapper_wxStyledTextCtrl::_bind_MarginSetStyle},
	{"MarginGetStyle", &luna_wrapper_wxStyledTextCtrl::_bind_MarginGetStyle},
	{"MarginSetStyles", &luna_wrapper_wxStyledTextCtrl::_bind_MarginSetStyles},
	{"MarginGetStyles", &luna_wrapper_wxStyledTextCtrl::_bind_MarginGetStyles},
	{"MarginTextClearAll", &luna_wrapper_wxStyledTextCtrl::_bind_MarginTextClearAll},
	{"MarginSetStyleOffset", &luna_wrapper_wxStyledTextCtrl::_bind_MarginSetStyleOffset},
	{"MarginGetStyleOffset", &luna_wrapper_wxStyledTextCtrl::_bind_MarginGetStyleOffset},
	{"AnnotationSetText", &luna_wrapper_wxStyledTextCtrl::_bind_AnnotationSetText},
	{"AnnotationGetText", &luna_wrapper_wxStyledTextCtrl::_bind_AnnotationGetText},
	{"AnnotationSetStyle", &luna_wrapper_wxStyledTextCtrl::_bind_AnnotationSetStyle},
	{"AnnotationGetStyle", &luna_wrapper_wxStyledTextCtrl::_bind_AnnotationGetStyle},
	{"AnnotationSetStyles", &luna_wrapper_wxStyledTextCtrl::_bind_AnnotationSetStyles},
	{"AnnotationGetStyles", &luna_wrapper_wxStyledTextCtrl::_bind_AnnotationGetStyles},
	{"AnnotationGetLines", &luna_wrapper_wxStyledTextCtrl::_bind_AnnotationGetLines},
	{"AnnotationClearAll", &luna_wrapper_wxStyledTextCtrl::_bind_AnnotationClearAll},
	{"AnnotationSetVisible", &luna_wrapper_wxStyledTextCtrl::_bind_AnnotationSetVisible},
	{"AnnotationGetVisible", &luna_wrapper_wxStyledTextCtrl::_bind_AnnotationGetVisible},
	{"AnnotationSetStyleOffset", &luna_wrapper_wxStyledTextCtrl::_bind_AnnotationSetStyleOffset},
	{"AnnotationGetStyleOffset", &luna_wrapper_wxStyledTextCtrl::_bind_AnnotationGetStyleOffset},
	{"AddUndoAction", &luna_wrapper_wxStyledTextCtrl::_bind_AddUndoAction},
	{"CharPositionFromPoint", &luna_wrapper_wxStyledTextCtrl::_bind_CharPositionFromPoint},
	{"CharPositionFromPointClose", &luna_wrapper_wxStyledTextCtrl::_bind_CharPositionFromPointClose},
	{"SetMultipleSelection", &luna_wrapper_wxStyledTextCtrl::_bind_SetMultipleSelection},
	{"GetMultipleSelection", &luna_wrapper_wxStyledTextCtrl::_bind_GetMultipleSelection},
	{"SetAdditionalSelectionTyping", &luna_wrapper_wxStyledTextCtrl::_bind_SetAdditionalSelectionTyping},
	{"GetAdditionalSelectionTyping", &luna_wrapper_wxStyledTextCtrl::_bind_GetAdditionalSelectionTyping},
	{"SetAdditionalCaretsBlink", &luna_wrapper_wxStyledTextCtrl::_bind_SetAdditionalCaretsBlink},
	{"GetAdditionalCaretsBlink", &luna_wrapper_wxStyledTextCtrl::_bind_GetAdditionalCaretsBlink},
	{"SetAdditionalCaretsVisible", &luna_wrapper_wxStyledTextCtrl::_bind_SetAdditionalCaretsVisible},
	{"GetAdditionalCaretsVisible", &luna_wrapper_wxStyledTextCtrl::_bind_GetAdditionalCaretsVisible},
	{"GetSelections", &luna_wrapper_wxStyledTextCtrl::_bind_GetSelections},
	{"ClearSelections", &luna_wrapper_wxStyledTextCtrl::_bind_ClearSelections},
	{"AddSelection", &luna_wrapper_wxStyledTextCtrl::_bind_AddSelection},
	{"SetMainSelection", &luna_wrapper_wxStyledTextCtrl::_bind_SetMainSelection},
	{"GetMainSelection", &luna_wrapper_wxStyledTextCtrl::_bind_GetMainSelection},
	{"SetSelectionNCaret", &luna_wrapper_wxStyledTextCtrl::_bind_SetSelectionNCaret},
	{"GetSelectionNCaret", &luna_wrapper_wxStyledTextCtrl::_bind_GetSelectionNCaret},
	{"SetSelectionNAnchor", &luna_wrapper_wxStyledTextCtrl::_bind_SetSelectionNAnchor},
	{"GetSelectionNAnchor", &luna_wrapper_wxStyledTextCtrl::_bind_GetSelectionNAnchor},
	{"SetSelectionNCaretVirtualSpace", &luna_wrapper_wxStyledTextCtrl::_bind_SetSelectionNCaretVirtualSpace},
	{"GetSelectionNCaretVirtualSpace", &luna_wrapper_wxStyledTextCtrl::_bind_GetSelectionNCaretVirtualSpace},
	{"SetSelectionNAnchorVirtualSpace", &luna_wrapper_wxStyledTextCtrl::_bind_SetSelectionNAnchorVirtualSpace},
	{"GetSelectionNAnchorVirtualSpace", &luna_wrapper_wxStyledTextCtrl::_bind_GetSelectionNAnchorVirtualSpace},
	{"SetSelectionNStart", &luna_wrapper_wxStyledTextCtrl::_bind_SetSelectionNStart},
	{"GetSelectionNStart", &luna_wrapper_wxStyledTextCtrl::_bind_GetSelectionNStart},
	{"SetSelectionNEnd", &luna_wrapper_wxStyledTextCtrl::_bind_SetSelectionNEnd},
	{"GetSelectionNEnd", &luna_wrapper_wxStyledTextCtrl::_bind_GetSelectionNEnd},
	{"SetRectangularSelectionCaret", &luna_wrapper_wxStyledTextCtrl::_bind_SetRectangularSelectionCaret},
	{"GetRectangularSelectionCaret", &luna_wrapper_wxStyledTextCtrl::_bind_GetRectangularSelectionCaret},
	{"SetRectangularSelectionAnchor", &luna_wrapper_wxStyledTextCtrl::_bind_SetRectangularSelectionAnchor},
	{"GetRectangularSelectionAnchor", &luna_wrapper_wxStyledTextCtrl::_bind_GetRectangularSelectionAnchor},
	{"SetRectangularSelectionCaretVirtualSpace", &luna_wrapper_wxStyledTextCtrl::_bind_SetRectangularSelectionCaretVirtualSpace},
	{"GetRectangularSelectionCaretVirtualSpace", &luna_wrapper_wxStyledTextCtrl::_bind_GetRectangularSelectionCaretVirtualSpace},
	{"SetRectangularSelectionAnchorVirtualSpace", &luna_wrapper_wxStyledTextCtrl::_bind_SetRectangularSelectionAnchorVirtualSpace},
	{"GetRectangularSelectionAnchorVirtualSpace", &luna_wrapper_wxStyledTextCtrl::_bind_GetRectangularSelectionAnchorVirtualSpace},
	{"SetVirtualSpaceOptions", &luna_wrapper_wxStyledTextCtrl::_bind_SetVirtualSpaceOptions},
	{"GetVirtualSpaceOptions", &luna_wrapper_wxStyledTextCtrl::_bind_GetVirtualSpaceOptions},
	{"SetRectangularSelectionModifier", &luna_wrapper_wxStyledTextCtrl::_bind_SetRectangularSelectionModifier},
	{"GetRectangularSelectionModifier", &luna_wrapper_wxStyledTextCtrl::_bind_GetRectangularSelectionModifier},
	{"SetAdditionalSelForeground", &luna_wrapper_wxStyledTextCtrl::_bind_SetAdditionalSelForeground},
	{"SetAdditionalSelBackground", &luna_wrapper_wxStyledTextCtrl::_bind_SetAdditionalSelBackground},
	{"SetAdditionalSelAlpha", &luna_wrapper_wxStyledTextCtrl::_bind_SetAdditionalSelAlpha},
	{"GetAdditionalSelAlpha", &luna_wrapper_wxStyledTextCtrl::_bind_GetAdditionalSelAlpha},
	{"SetAdditionalCaretForeground", &luna_wrapper_wxStyledTextCtrl::_bind_SetAdditionalCaretForeground},
	{"GetAdditionalCaretForeground", &luna_wrapper_wxStyledTextCtrl::_bind_GetAdditionalCaretForeground},
	{"RotateSelection", &luna_wrapper_wxStyledTextCtrl::_bind_RotateSelection},
	{"SwapMainAnchorCaret", &luna_wrapper_wxStyledTextCtrl::_bind_SwapMainAnchorCaret},
	{0,0}
};

luna_ConverterType LunaTraits< wxStyledTextCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxStyledTextCtrl::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxStyledTextCtrl >::enumValues[] = {
	{0,0}
};


