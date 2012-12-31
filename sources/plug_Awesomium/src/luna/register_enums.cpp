#include <plug_common.h>

#include <Awesomium/JSObject.h>
#include <Awesomium/Platform.h>
#include <Awesomium/WebConfig.h>
#include <Awesomium/WebMenuItem.h>
#include <Awesomium/WebTouchEvent.h>
#include <Awesomium/WebView.h>
#include <Awesomium/WebViewListener.h>

#ifdef __cplusplus
extern "C" {
#endif

void register_enums(lua_State* L) {
	lua_newtable(L); // enum JSObjectType

	lua_pushnumber(L,Awesomium::kJSObjectType_Local); lua_setfield(L,-2,"kJSObjectType_Local");
	lua_pushnumber(L,Awesomium::kJSObjectType_Remote); lua_setfield(L,-2,"kJSObjectType_Remote");
	lua_pushnumber(L,Awesomium::kJSObjectType_RemoteGlobal); lua_setfield(L,-2,"kJSObjectType_RemoteGlobal");

	lua_setfield(L,-2,"JSObjectType");

	lua_pushnumber(L,Awesomium::kJSObjectType_Local); lua_setfield(L,-2,"kJSObjectType_Local");
	lua_pushnumber(L,Awesomium::kJSObjectType_Remote); lua_setfield(L,-2,"kJSObjectType_Remote");
	lua_pushnumber(L,Awesomium::kJSObjectType_RemoteGlobal); lua_setfield(L,-2,"kJSObjectType_RemoteGlobal");


	lua_newtable(L); // enum Error

	lua_pushnumber(L,Awesomium::kError_None); lua_setfield(L,-2,"kError_None");
	lua_pushnumber(L,Awesomium::kError_BadParameters); lua_setfield(L,-2,"kError_BadParameters");
	lua_pushnumber(L,Awesomium::kError_ObjectGone); lua_setfield(L,-2,"kError_ObjectGone");
	lua_pushnumber(L,Awesomium::kError_ConnectionGone); lua_setfield(L,-2,"kError_ConnectionGone");
	lua_pushnumber(L,Awesomium::kError_TimedOut); lua_setfield(L,-2,"kError_TimedOut");
	lua_pushnumber(L,Awesomium::kError_WebViewGone); lua_setfield(L,-2,"kError_WebViewGone");
	lua_pushnumber(L,Awesomium::kError_Generic); lua_setfield(L,-2,"kError_Generic");

	lua_setfield(L,-2,"Error");

	lua_pushnumber(L,Awesomium::kError_None); lua_setfield(L,-2,"kError_None");
	lua_pushnumber(L,Awesomium::kError_BadParameters); lua_setfield(L,-2,"kError_BadParameters");
	lua_pushnumber(L,Awesomium::kError_ObjectGone); lua_setfield(L,-2,"kError_ObjectGone");
	lua_pushnumber(L,Awesomium::kError_ConnectionGone); lua_setfield(L,-2,"kError_ConnectionGone");
	lua_pushnumber(L,Awesomium::kError_TimedOut); lua_setfield(L,-2,"kError_TimedOut");
	lua_pushnumber(L,Awesomium::kError_WebViewGone); lua_setfield(L,-2,"kError_WebViewGone");
	lua_pushnumber(L,Awesomium::kError_Generic); lua_setfield(L,-2,"kError_Generic");


	lua_newtable(L); // enum LogLevel

	lua_pushnumber(L,Awesomium::kLogLevel_None); lua_setfield(L,-2,"kLogLevel_None");
	lua_pushnumber(L,Awesomium::kLogLevel_Normal); lua_setfield(L,-2,"kLogLevel_Normal");
	lua_pushnumber(L,Awesomium::kLogLevel_Verbose); lua_setfield(L,-2,"kLogLevel_Verbose");

	lua_setfield(L,-2,"LogLevel");

	lua_pushnumber(L,Awesomium::kLogLevel_None); lua_setfield(L,-2,"kLogLevel_None");
	lua_pushnumber(L,Awesomium::kLogLevel_Normal); lua_setfield(L,-2,"kLogLevel_Normal");
	lua_pushnumber(L,Awesomium::kLogLevel_Verbose); lua_setfield(L,-2,"kLogLevel_Verbose");


	lua_newtable(L); // enum WebMenuItemType

	lua_pushnumber(L,Awesomium::kWebMenuItemType_Option); lua_setfield(L,-2,"kWebMenuItemType_Option");
	lua_pushnumber(L,Awesomium::kWebMenuItemType_CheckableOption); lua_setfield(L,-2,"kWebMenuItemType_CheckableOption");
	lua_pushnumber(L,Awesomium::kWebMenuItemType_Group); lua_setfield(L,-2,"kWebMenuItemType_Group");
	lua_pushnumber(L,Awesomium::kWebMenuItemType_Separator); lua_setfield(L,-2,"kWebMenuItemType_Separator");

	lua_setfield(L,-2,"WebMenuItemType");

	lua_pushnumber(L,Awesomium::kWebMenuItemType_Option); lua_setfield(L,-2,"kWebMenuItemType_Option");
	lua_pushnumber(L,Awesomium::kWebMenuItemType_CheckableOption); lua_setfield(L,-2,"kWebMenuItemType_CheckableOption");
	lua_pushnumber(L,Awesomium::kWebMenuItemType_Group); lua_setfield(L,-2,"kWebMenuItemType_Group");
	lua_pushnumber(L,Awesomium::kWebMenuItemType_Separator); lua_setfield(L,-2,"kWebMenuItemType_Separator");


	lua_newtable(L); // enum WebTouchPointState

	lua_pushnumber(L,Awesomium::kWebTouchPointState_Undefined); lua_setfield(L,-2,"kWebTouchPointState_Undefined");
	lua_pushnumber(L,Awesomium::kWebTouchPointState_Released); lua_setfield(L,-2,"kWebTouchPointState_Released");
	lua_pushnumber(L,Awesomium::kWebTouchPointState_Pressed); lua_setfield(L,-2,"kWebTouchPointState_Pressed");
	lua_pushnumber(L,Awesomium::kWebTouchPointState_Moved); lua_setfield(L,-2,"kWebTouchPointState_Moved");
	lua_pushnumber(L,Awesomium::kWebTouchPointState_Stationary); lua_setfield(L,-2,"kWebTouchPointState_Stationary");
	lua_pushnumber(L,Awesomium::kWebTouchPointState_Cancelled); lua_setfield(L,-2,"kWebTouchPointState_Cancelled");

	lua_setfield(L,-2,"WebTouchPointState");

	lua_pushnumber(L,Awesomium::kWebTouchPointState_Undefined); lua_setfield(L,-2,"kWebTouchPointState_Undefined");
	lua_pushnumber(L,Awesomium::kWebTouchPointState_Released); lua_setfield(L,-2,"kWebTouchPointState_Released");
	lua_pushnumber(L,Awesomium::kWebTouchPointState_Pressed); lua_setfield(L,-2,"kWebTouchPointState_Pressed");
	lua_pushnumber(L,Awesomium::kWebTouchPointState_Moved); lua_setfield(L,-2,"kWebTouchPointState_Moved");
	lua_pushnumber(L,Awesomium::kWebTouchPointState_Stationary); lua_setfield(L,-2,"kWebTouchPointState_Stationary");
	lua_pushnumber(L,Awesomium::kWebTouchPointState_Cancelled); lua_setfield(L,-2,"kWebTouchPointState_Cancelled");


	lua_newtable(L); // enum WebTouchEventType

	lua_pushnumber(L,Awesomium::kWebTouchEventType_Start); lua_setfield(L,-2,"kWebTouchEventType_Start");
	lua_pushnumber(L,Awesomium::kWebTouchEventType_Move); lua_setfield(L,-2,"kWebTouchEventType_Move");
	lua_pushnumber(L,Awesomium::kWebTouchEventType_End); lua_setfield(L,-2,"kWebTouchEventType_End");
	lua_pushnumber(L,Awesomium::kWebTouchEventType_Cancel); lua_setfield(L,-2,"kWebTouchEventType_Cancel");

	lua_setfield(L,-2,"WebTouchEventType");

	lua_pushnumber(L,Awesomium::kWebTouchEventType_Start); lua_setfield(L,-2,"kWebTouchEventType_Start");
	lua_pushnumber(L,Awesomium::kWebTouchEventType_Move); lua_setfield(L,-2,"kWebTouchEventType_Move");
	lua_pushnumber(L,Awesomium::kWebTouchEventType_End); lua_setfield(L,-2,"kWebTouchEventType_End");
	lua_pushnumber(L,Awesomium::kWebTouchEventType_Cancel); lua_setfield(L,-2,"kWebTouchEventType_Cancel");


	lua_newtable(L); // enum WebViewType

	lua_pushnumber(L,Awesomium::kWebViewType_Offscreen); lua_setfield(L,-2,"kWebViewType_Offscreen");
	lua_pushnumber(L,Awesomium::kWebViewType_Window); lua_setfield(L,-2,"kWebViewType_Window");

	lua_setfield(L,-2,"WebViewType");

	lua_pushnumber(L,Awesomium::kWebViewType_Offscreen); lua_setfield(L,-2,"kWebViewType_Offscreen");
	lua_pushnumber(L,Awesomium::kWebViewType_Window); lua_setfield(L,-2,"kWebViewType_Window");


	lua_newtable(L); // enum MouseButton

	lua_pushnumber(L,Awesomium::kMouseButton_Left); lua_setfield(L,-2,"kMouseButton_Left");
	lua_pushnumber(L,Awesomium::kMouseButton_Middle); lua_setfield(L,-2,"kMouseButton_Middle");
	lua_pushnumber(L,Awesomium::kMouseButton_Right); lua_setfield(L,-2,"kMouseButton_Right");

	lua_setfield(L,-2,"MouseButton");

	lua_pushnumber(L,Awesomium::kMouseButton_Left); lua_setfield(L,-2,"kMouseButton_Left");
	lua_pushnumber(L,Awesomium::kMouseButton_Middle); lua_setfield(L,-2,"kMouseButton_Middle");
	lua_pushnumber(L,Awesomium::kMouseButton_Right); lua_setfield(L,-2,"kMouseButton_Right");


	lua_newtable(L); // enum Cursor

	lua_pushnumber(L,Awesomium::kCursor_Pointer); lua_setfield(L,-2,"kCursor_Pointer");
	lua_pushnumber(L,Awesomium::kCursor_Cross); lua_setfield(L,-2,"kCursor_Cross");
	lua_pushnumber(L,Awesomium::kCursor_Hand); lua_setfield(L,-2,"kCursor_Hand");
	lua_pushnumber(L,Awesomium::kCursor_IBeam); lua_setfield(L,-2,"kCursor_IBeam");
	lua_pushnumber(L,Awesomium::kCursor_Wait); lua_setfield(L,-2,"kCursor_Wait");
	lua_pushnumber(L,Awesomium::kCursor_Help); lua_setfield(L,-2,"kCursor_Help");
	lua_pushnumber(L,Awesomium::kCursor_EastResize); lua_setfield(L,-2,"kCursor_EastResize");
	lua_pushnumber(L,Awesomium::kCursor_NorthResize); lua_setfield(L,-2,"kCursor_NorthResize");
	lua_pushnumber(L,Awesomium::kCursor_NorthEastResize); lua_setfield(L,-2,"kCursor_NorthEastResize");
	lua_pushnumber(L,Awesomium::kCursor_NorthWestResize); lua_setfield(L,-2,"kCursor_NorthWestResize");
	lua_pushnumber(L,Awesomium::kCursor_SouthResize); lua_setfield(L,-2,"kCursor_SouthResize");
	lua_pushnumber(L,Awesomium::kCursor_SouthEastResize); lua_setfield(L,-2,"kCursor_SouthEastResize");
	lua_pushnumber(L,Awesomium::kCursor_SouthWestResize); lua_setfield(L,-2,"kCursor_SouthWestResize");
	lua_pushnumber(L,Awesomium::kCursor_WestResize); lua_setfield(L,-2,"kCursor_WestResize");
	lua_pushnumber(L,Awesomium::kCursor_NorthSouthResize); lua_setfield(L,-2,"kCursor_NorthSouthResize");
	lua_pushnumber(L,Awesomium::kCursor_EastWestResize); lua_setfield(L,-2,"kCursor_EastWestResize");
	lua_pushnumber(L,Awesomium::kCursor_NorthEastSouthWestResize); lua_setfield(L,-2,"kCursor_NorthEastSouthWestResize");
	lua_pushnumber(L,Awesomium::kCursor_NorthWestSouthEastResize); lua_setfield(L,-2,"kCursor_NorthWestSouthEastResize");
	lua_pushnumber(L,Awesomium::kCursor_ColumnResize); lua_setfield(L,-2,"kCursor_ColumnResize");
	lua_pushnumber(L,Awesomium::kCursor_RowResize); lua_setfield(L,-2,"kCursor_RowResize");
	lua_pushnumber(L,Awesomium::kCursor_MiddlePanning); lua_setfield(L,-2,"kCursor_MiddlePanning");
	lua_pushnumber(L,Awesomium::kCursor_EastPanning); lua_setfield(L,-2,"kCursor_EastPanning");
	lua_pushnumber(L,Awesomium::kCursor_NorthPanning); lua_setfield(L,-2,"kCursor_NorthPanning");
	lua_pushnumber(L,Awesomium::kCursor_NorthEastPanning); lua_setfield(L,-2,"kCursor_NorthEastPanning");
	lua_pushnumber(L,Awesomium::kCursor_NorthWestPanning); lua_setfield(L,-2,"kCursor_NorthWestPanning");
	lua_pushnumber(L,Awesomium::kCursor_SouthPanning); lua_setfield(L,-2,"kCursor_SouthPanning");
	lua_pushnumber(L,Awesomium::kCursor_SouthEastPanning); lua_setfield(L,-2,"kCursor_SouthEastPanning");
	lua_pushnumber(L,Awesomium::kCursor_SouthWestPanning); lua_setfield(L,-2,"kCursor_SouthWestPanning");
	lua_pushnumber(L,Awesomium::kCursor_WestPanning); lua_setfield(L,-2,"kCursor_WestPanning");
	lua_pushnumber(L,Awesomium::kCursor_Move); lua_setfield(L,-2,"kCursor_Move");
	lua_pushnumber(L,Awesomium::kCursor_VerticalText); lua_setfield(L,-2,"kCursor_VerticalText");
	lua_pushnumber(L,Awesomium::kCursor_Cell); lua_setfield(L,-2,"kCursor_Cell");
	lua_pushnumber(L,Awesomium::kCursor_ContextMenu); lua_setfield(L,-2,"kCursor_ContextMenu");
	lua_pushnumber(L,Awesomium::kCursor_Alias); lua_setfield(L,-2,"kCursor_Alias");
	lua_pushnumber(L,Awesomium::kCursor_Progress); lua_setfield(L,-2,"kCursor_Progress");
	lua_pushnumber(L,Awesomium::kCursor_NoDrop); lua_setfield(L,-2,"kCursor_NoDrop");
	lua_pushnumber(L,Awesomium::kCursor_Copy); lua_setfield(L,-2,"kCursor_Copy");
	lua_pushnumber(L,Awesomium::kCursor_None); lua_setfield(L,-2,"kCursor_None");
	lua_pushnumber(L,Awesomium::kCursor_NotAllowed); lua_setfield(L,-2,"kCursor_NotAllowed");
	lua_pushnumber(L,Awesomium::kCursor_ZoomIn); lua_setfield(L,-2,"kCursor_ZoomIn");
	lua_pushnumber(L,Awesomium::kCursor_ZoomOut); lua_setfield(L,-2,"kCursor_ZoomOut");
	lua_pushnumber(L,Awesomium::kCursor_Grab); lua_setfield(L,-2,"kCursor_Grab");
	lua_pushnumber(L,Awesomium::kCursor_Grabbing); lua_setfield(L,-2,"kCursor_Grabbing");
	lua_pushnumber(L,Awesomium::kCursor_Custom); lua_setfield(L,-2,"kCursor_Custom");

	lua_setfield(L,-2,"Cursor");

	lua_pushnumber(L,Awesomium::kCursor_Pointer); lua_setfield(L,-2,"kCursor_Pointer");
	lua_pushnumber(L,Awesomium::kCursor_Cross); lua_setfield(L,-2,"kCursor_Cross");
	lua_pushnumber(L,Awesomium::kCursor_Hand); lua_setfield(L,-2,"kCursor_Hand");
	lua_pushnumber(L,Awesomium::kCursor_IBeam); lua_setfield(L,-2,"kCursor_IBeam");
	lua_pushnumber(L,Awesomium::kCursor_Wait); lua_setfield(L,-2,"kCursor_Wait");
	lua_pushnumber(L,Awesomium::kCursor_Help); lua_setfield(L,-2,"kCursor_Help");
	lua_pushnumber(L,Awesomium::kCursor_EastResize); lua_setfield(L,-2,"kCursor_EastResize");
	lua_pushnumber(L,Awesomium::kCursor_NorthResize); lua_setfield(L,-2,"kCursor_NorthResize");
	lua_pushnumber(L,Awesomium::kCursor_NorthEastResize); lua_setfield(L,-2,"kCursor_NorthEastResize");
	lua_pushnumber(L,Awesomium::kCursor_NorthWestResize); lua_setfield(L,-2,"kCursor_NorthWestResize");
	lua_pushnumber(L,Awesomium::kCursor_SouthResize); lua_setfield(L,-2,"kCursor_SouthResize");
	lua_pushnumber(L,Awesomium::kCursor_SouthEastResize); lua_setfield(L,-2,"kCursor_SouthEastResize");
	lua_pushnumber(L,Awesomium::kCursor_SouthWestResize); lua_setfield(L,-2,"kCursor_SouthWestResize");
	lua_pushnumber(L,Awesomium::kCursor_WestResize); lua_setfield(L,-2,"kCursor_WestResize");
	lua_pushnumber(L,Awesomium::kCursor_NorthSouthResize); lua_setfield(L,-2,"kCursor_NorthSouthResize");
	lua_pushnumber(L,Awesomium::kCursor_EastWestResize); lua_setfield(L,-2,"kCursor_EastWestResize");
	lua_pushnumber(L,Awesomium::kCursor_NorthEastSouthWestResize); lua_setfield(L,-2,"kCursor_NorthEastSouthWestResize");
	lua_pushnumber(L,Awesomium::kCursor_NorthWestSouthEastResize); lua_setfield(L,-2,"kCursor_NorthWestSouthEastResize");
	lua_pushnumber(L,Awesomium::kCursor_ColumnResize); lua_setfield(L,-2,"kCursor_ColumnResize");
	lua_pushnumber(L,Awesomium::kCursor_RowResize); lua_setfield(L,-2,"kCursor_RowResize");
	lua_pushnumber(L,Awesomium::kCursor_MiddlePanning); lua_setfield(L,-2,"kCursor_MiddlePanning");
	lua_pushnumber(L,Awesomium::kCursor_EastPanning); lua_setfield(L,-2,"kCursor_EastPanning");
	lua_pushnumber(L,Awesomium::kCursor_NorthPanning); lua_setfield(L,-2,"kCursor_NorthPanning");
	lua_pushnumber(L,Awesomium::kCursor_NorthEastPanning); lua_setfield(L,-2,"kCursor_NorthEastPanning");
	lua_pushnumber(L,Awesomium::kCursor_NorthWestPanning); lua_setfield(L,-2,"kCursor_NorthWestPanning");
	lua_pushnumber(L,Awesomium::kCursor_SouthPanning); lua_setfield(L,-2,"kCursor_SouthPanning");
	lua_pushnumber(L,Awesomium::kCursor_SouthEastPanning); lua_setfield(L,-2,"kCursor_SouthEastPanning");
	lua_pushnumber(L,Awesomium::kCursor_SouthWestPanning); lua_setfield(L,-2,"kCursor_SouthWestPanning");
	lua_pushnumber(L,Awesomium::kCursor_WestPanning); lua_setfield(L,-2,"kCursor_WestPanning");
	lua_pushnumber(L,Awesomium::kCursor_Move); lua_setfield(L,-2,"kCursor_Move");
	lua_pushnumber(L,Awesomium::kCursor_VerticalText); lua_setfield(L,-2,"kCursor_VerticalText");
	lua_pushnumber(L,Awesomium::kCursor_Cell); lua_setfield(L,-2,"kCursor_Cell");
	lua_pushnumber(L,Awesomium::kCursor_ContextMenu); lua_setfield(L,-2,"kCursor_ContextMenu");
	lua_pushnumber(L,Awesomium::kCursor_Alias); lua_setfield(L,-2,"kCursor_Alias");
	lua_pushnumber(L,Awesomium::kCursor_Progress); lua_setfield(L,-2,"kCursor_Progress");
	lua_pushnumber(L,Awesomium::kCursor_NoDrop); lua_setfield(L,-2,"kCursor_NoDrop");
	lua_pushnumber(L,Awesomium::kCursor_Copy); lua_setfield(L,-2,"kCursor_Copy");
	lua_pushnumber(L,Awesomium::kCursor_None); lua_setfield(L,-2,"kCursor_None");
	lua_pushnumber(L,Awesomium::kCursor_NotAllowed); lua_setfield(L,-2,"kCursor_NotAllowed");
	lua_pushnumber(L,Awesomium::kCursor_ZoomIn); lua_setfield(L,-2,"kCursor_ZoomIn");
	lua_pushnumber(L,Awesomium::kCursor_ZoomOut); lua_setfield(L,-2,"kCursor_ZoomOut");
	lua_pushnumber(L,Awesomium::kCursor_Grab); lua_setfield(L,-2,"kCursor_Grab");
	lua_pushnumber(L,Awesomium::kCursor_Grabbing); lua_setfield(L,-2,"kCursor_Grabbing");
	lua_pushnumber(L,Awesomium::kCursor_Custom); lua_setfield(L,-2,"kCursor_Custom");


	lua_newtable(L); // enum FocusedElementType

	lua_pushnumber(L,Awesomium::kFocusedElementType_None); lua_setfield(L,-2,"kFocusedElementType_None");
	lua_pushnumber(L,Awesomium::kFocusedElementType_Text); lua_setfield(L,-2,"kFocusedElementType_Text");
	lua_pushnumber(L,Awesomium::kFocusedElementType_Link); lua_setfield(L,-2,"kFocusedElementType_Link");
	lua_pushnumber(L,Awesomium::kFocusedElementType_Input); lua_setfield(L,-2,"kFocusedElementType_Input");
	lua_pushnumber(L,Awesomium::kFocusedElementType_TextInput); lua_setfield(L,-2,"kFocusedElementType_TextInput");
	lua_pushnumber(L,Awesomium::kFocusedElementType_EditableContent); lua_setfield(L,-2,"kFocusedElementType_EditableContent");
	lua_pushnumber(L,Awesomium::kFocusedElementType_Plugin); lua_setfield(L,-2,"kFocusedElementType_Plugin");
	lua_pushnumber(L,Awesomium::kFocusedElementType_Other); lua_setfield(L,-2,"kFocusedElementType_Other");

	lua_setfield(L,-2,"FocusedElementType");

	lua_pushnumber(L,Awesomium::kFocusedElementType_None); lua_setfield(L,-2,"kFocusedElementType_None");
	lua_pushnumber(L,Awesomium::kFocusedElementType_Text); lua_setfield(L,-2,"kFocusedElementType_Text");
	lua_pushnumber(L,Awesomium::kFocusedElementType_Link); lua_setfield(L,-2,"kFocusedElementType_Link");
	lua_pushnumber(L,Awesomium::kFocusedElementType_Input); lua_setfield(L,-2,"kFocusedElementType_Input");
	lua_pushnumber(L,Awesomium::kFocusedElementType_TextInput); lua_setfield(L,-2,"kFocusedElementType_TextInput");
	lua_pushnumber(L,Awesomium::kFocusedElementType_EditableContent); lua_setfield(L,-2,"kFocusedElementType_EditableContent");
	lua_pushnumber(L,Awesomium::kFocusedElementType_Plugin); lua_setfield(L,-2,"kFocusedElementType_Plugin");
	lua_pushnumber(L,Awesomium::kFocusedElementType_Other); lua_setfield(L,-2,"kFocusedElementType_Other");


	lua_newtable(L); // enum TerminationStatus

	lua_pushnumber(L,Awesomium::kTerminationStatus_Normal); lua_setfield(L,-2,"kTerminationStatus_Normal");
	lua_pushnumber(L,Awesomium::kTerminationStatus_Abnormal); lua_setfield(L,-2,"kTerminationStatus_Abnormal");
	lua_pushnumber(L,Awesomium::kTerminationStatus_Killed); lua_setfield(L,-2,"kTerminationStatus_Killed");
	lua_pushnumber(L,Awesomium::kTerminationStatus_Crashed); lua_setfield(L,-2,"kTerminationStatus_Crashed");
	lua_pushnumber(L,Awesomium::kTerminationStatus_StillRunning); lua_setfield(L,-2,"kTerminationStatus_StillRunning");

	lua_setfield(L,-2,"TerminationStatus");

	lua_pushnumber(L,Awesomium::kTerminationStatus_Normal); lua_setfield(L,-2,"kTerminationStatus_Normal");
	lua_pushnumber(L,Awesomium::kTerminationStatus_Abnormal); lua_setfield(L,-2,"kTerminationStatus_Abnormal");
	lua_pushnumber(L,Awesomium::kTerminationStatus_Killed); lua_setfield(L,-2,"kTerminationStatus_Killed");
	lua_pushnumber(L,Awesomium::kTerminationStatus_Crashed); lua_setfield(L,-2,"kTerminationStatus_Crashed");
	lua_pushnumber(L,Awesomium::kTerminationStatus_StillRunning); lua_setfield(L,-2,"kTerminationStatus_StillRunning");


	lua_newtable(L); // enum TextInputType

	lua_pushnumber(L,Awesomium::kTextInputType_None); lua_setfield(L,-2,"kTextInputType_None");
	lua_pushnumber(L,Awesomium::kTextInputType_Text); lua_setfield(L,-2,"kTextInputType_Text");
	lua_pushnumber(L,Awesomium::kTextInputType_Password); lua_setfield(L,-2,"kTextInputType_Password");
	lua_pushnumber(L,Awesomium::kTextInputType_Search); lua_setfield(L,-2,"kTextInputType_Search");
	lua_pushnumber(L,Awesomium::kTextInputType_Email); lua_setfield(L,-2,"kTextInputType_Email");
	lua_pushnumber(L,Awesomium::kTextInputType_Number); lua_setfield(L,-2,"kTextInputType_Number");
	lua_pushnumber(L,Awesomium::kTextInputType_Telephone); lua_setfield(L,-2,"kTextInputType_Telephone");
	lua_pushnumber(L,Awesomium::kTextInputType_URL); lua_setfield(L,-2,"kTextInputType_URL");

	lua_setfield(L,-2,"TextInputType");

	lua_pushnumber(L,Awesomium::kTextInputType_None); lua_setfield(L,-2,"kTextInputType_None");
	lua_pushnumber(L,Awesomium::kTextInputType_Text); lua_setfield(L,-2,"kTextInputType_Text");
	lua_pushnumber(L,Awesomium::kTextInputType_Password); lua_setfield(L,-2,"kTextInputType_Password");
	lua_pushnumber(L,Awesomium::kTextInputType_Search); lua_setfield(L,-2,"kTextInputType_Search");
	lua_pushnumber(L,Awesomium::kTextInputType_Email); lua_setfield(L,-2,"kTextInputType_Email");
	lua_pushnumber(L,Awesomium::kTextInputType_Number); lua_setfield(L,-2,"kTextInputType_Number");
	lua_pushnumber(L,Awesomium::kTextInputType_Telephone); lua_setfield(L,-2,"kTextInputType_Telephone");
	lua_pushnumber(L,Awesomium::kTextInputType_URL); lua_setfield(L,-2,"kTextInputType_URL");


	lua_newtable(L); // enum WebFileChooserMode

	lua_pushnumber(L,Awesomium::kWebFileChooserMode_Open); lua_setfield(L,-2,"kWebFileChooserMode_Open");
	lua_pushnumber(L,Awesomium::kWebFileChooserMode_OpenMultiple); lua_setfield(L,-2,"kWebFileChooserMode_OpenMultiple");
	lua_pushnumber(L,Awesomium::kWebFileChooserMode_OpenFolder); lua_setfield(L,-2,"kWebFileChooserMode_OpenFolder");
	lua_pushnumber(L,Awesomium::kWebFileChooserMode_Save); lua_setfield(L,-2,"kWebFileChooserMode_Save");

	lua_setfield(L,-2,"WebFileChooserMode");

	lua_pushnumber(L,Awesomium::kWebFileChooserMode_Open); lua_setfield(L,-2,"kWebFileChooserMode_Open");
	lua_pushnumber(L,Awesomium::kWebFileChooserMode_OpenMultiple); lua_setfield(L,-2,"kWebFileChooserMode_OpenMultiple");
	lua_pushnumber(L,Awesomium::kWebFileChooserMode_OpenFolder); lua_setfield(L,-2,"kWebFileChooserMode_OpenFolder");
	lua_pushnumber(L,Awesomium::kWebFileChooserMode_Save); lua_setfield(L,-2,"kWebFileChooserMode_Save");


	lua_newtable(L); // enum MediaType

	lua_pushnumber(L,Awesomium::kMediaType_None); lua_setfield(L,-2,"kMediaType_None");
	lua_pushnumber(L,Awesomium::kMediaType_Image); lua_setfield(L,-2,"kMediaType_Image");
	lua_pushnumber(L,Awesomium::kMediaType_Video); lua_setfield(L,-2,"kMediaType_Video");
	lua_pushnumber(L,Awesomium::kMediaType_Audio); lua_setfield(L,-2,"kMediaType_Audio");
	lua_pushnumber(L,Awesomium::kMediaType_File); lua_setfield(L,-2,"kMediaType_File");
	lua_pushnumber(L,Awesomium::kMediaType_Plugin); lua_setfield(L,-2,"kMediaType_Plugin");

	lua_setfield(L,-2,"MediaType");

	lua_pushnumber(L,Awesomium::kMediaType_None); lua_setfield(L,-2,"kMediaType_None");
	lua_pushnumber(L,Awesomium::kMediaType_Image); lua_setfield(L,-2,"kMediaType_Image");
	lua_pushnumber(L,Awesomium::kMediaType_Video); lua_setfield(L,-2,"kMediaType_Video");
	lua_pushnumber(L,Awesomium::kMediaType_Audio); lua_setfield(L,-2,"kMediaType_Audio");
	lua_pushnumber(L,Awesomium::kMediaType_File); lua_setfield(L,-2,"kMediaType_File");
	lua_pushnumber(L,Awesomium::kMediaType_Plugin); lua_setfield(L,-2,"kMediaType_Plugin");


	lua_newtable(L); // enum MediaState

	lua_pushnumber(L,Awesomium::kMediaState_None); lua_setfield(L,-2,"kMediaState_None");
	lua_pushnumber(L,Awesomium::kMediaState_Error); lua_setfield(L,-2,"kMediaState_Error");
	lua_pushnumber(L,Awesomium::kMediaState_Paused); lua_setfield(L,-2,"kMediaState_Paused");
	lua_pushnumber(L,Awesomium::kMediaState_Muted); lua_setfield(L,-2,"kMediaState_Muted");
	lua_pushnumber(L,Awesomium::kMediaState_Loop); lua_setfield(L,-2,"kMediaState_Loop");
	lua_pushnumber(L,Awesomium::kMediaState_CanSave); lua_setfield(L,-2,"kMediaState_CanSave");
	lua_pushnumber(L,Awesomium::kMediaState_HasAudio); lua_setfield(L,-2,"kMediaState_HasAudio");
	lua_pushnumber(L,Awesomium::kMediaState_HasVideo); lua_setfield(L,-2,"kMediaState_HasVideo");

	lua_setfield(L,-2,"MediaState");

	lua_pushnumber(L,Awesomium::kMediaState_None); lua_setfield(L,-2,"kMediaState_None");
	lua_pushnumber(L,Awesomium::kMediaState_Error); lua_setfield(L,-2,"kMediaState_Error");
	lua_pushnumber(L,Awesomium::kMediaState_Paused); lua_setfield(L,-2,"kMediaState_Paused");
	lua_pushnumber(L,Awesomium::kMediaState_Muted); lua_setfield(L,-2,"kMediaState_Muted");
	lua_pushnumber(L,Awesomium::kMediaState_Loop); lua_setfield(L,-2,"kMediaState_Loop");
	lua_pushnumber(L,Awesomium::kMediaState_CanSave); lua_setfield(L,-2,"kMediaState_CanSave");
	lua_pushnumber(L,Awesomium::kMediaState_HasAudio); lua_setfield(L,-2,"kMediaState_HasAudio");
	lua_pushnumber(L,Awesomium::kMediaState_HasVideo); lua_setfield(L,-2,"kMediaState_HasVideo");


	lua_newtable(L); // enum CanEditFlags

	lua_pushnumber(L,Awesomium::kCan_EditNothing); lua_setfield(L,-2,"kCan_EditNothing");
	lua_pushnumber(L,Awesomium::kCan_Undo); lua_setfield(L,-2,"kCan_Undo");
	lua_pushnumber(L,Awesomium::kCan_Redo); lua_setfield(L,-2,"kCan_Redo");
	lua_pushnumber(L,Awesomium::kCan_Cut); lua_setfield(L,-2,"kCan_Cut");
	lua_pushnumber(L,Awesomium::kCan_Copy); lua_setfield(L,-2,"kCan_Copy");
	lua_pushnumber(L,Awesomium::kCan_Paste); lua_setfield(L,-2,"kCan_Paste");
	lua_pushnumber(L,Awesomium::kCan_Delete); lua_setfield(L,-2,"kCan_Delete");
	lua_pushnumber(L,Awesomium::kCan_SelectAll); lua_setfield(L,-2,"kCan_SelectAll");

	lua_setfield(L,-2,"CanEditFlags");

	lua_pushnumber(L,Awesomium::kCan_EditNothing); lua_setfield(L,-2,"kCan_EditNothing");
	lua_pushnumber(L,Awesomium::kCan_Undo); lua_setfield(L,-2,"kCan_Undo");
	lua_pushnumber(L,Awesomium::kCan_Redo); lua_setfield(L,-2,"kCan_Redo");
	lua_pushnumber(L,Awesomium::kCan_Cut); lua_setfield(L,-2,"kCan_Cut");
	lua_pushnumber(L,Awesomium::kCan_Copy); lua_setfield(L,-2,"kCan_Copy");
	lua_pushnumber(L,Awesomium::kCan_Paste); lua_setfield(L,-2,"kCan_Paste");
	lua_pushnumber(L,Awesomium::kCan_Delete); lua_setfield(L,-2,"kCan_Delete");
	lua_pushnumber(L,Awesomium::kCan_SelectAll); lua_setfield(L,-2,"kCan_SelectAll");


}

#ifdef __cplusplus
}
#endif


