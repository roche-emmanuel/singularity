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


	lua_newtable(L); // enum CertError

	lua_pushnumber(L,Awesomium::kCertError_None); lua_setfield(L,-2,"kCertError_None");
	lua_pushnumber(L,Awesomium::kCertError_CommonNameInvalid); lua_setfield(L,-2,"kCertError_CommonNameInvalid");
	lua_pushnumber(L,Awesomium::kCertError_DateInvalid); lua_setfield(L,-2,"kCertError_DateInvalid");
	lua_pushnumber(L,Awesomium::kCertError_AuthorityInvalid); lua_setfield(L,-2,"kCertError_AuthorityInvalid");
	lua_pushnumber(L,Awesomium::kCertError_ContainsErrors); lua_setfield(L,-2,"kCertError_ContainsErrors");
	lua_pushnumber(L,Awesomium::kCertError_NoRevocationMechanism); lua_setfield(L,-2,"kCertError_NoRevocationMechanism");
	lua_pushnumber(L,Awesomium::kCertError_UnableToCheckRevocation); lua_setfield(L,-2,"kCertError_UnableToCheckRevocation");
	lua_pushnumber(L,Awesomium::kCertError_Revoked); lua_setfield(L,-2,"kCertError_Revoked");
	lua_pushnumber(L,Awesomium::kCertError_Invalid); lua_setfield(L,-2,"kCertError_Invalid");
	lua_pushnumber(L,Awesomium::kCertError_WeakSignatureAlgorithm); lua_setfield(L,-2,"kCertError_WeakSignatureAlgorithm");
	lua_pushnumber(L,Awesomium::kCertError_WeakKey); lua_setfield(L,-2,"kCertError_WeakKey");
	lua_pushnumber(L,Awesomium::kCertError_NotInDNS); lua_setfield(L,-2,"kCertError_NotInDNS");
	lua_pushnumber(L,Awesomium::kCertError_Unknown); lua_setfield(L,-2,"kCertError_Unknown");

	lua_setfield(L,-2,"CertError");

	lua_pushnumber(L,Awesomium::kCertError_None); lua_setfield(L,-2,"kCertError_None");
	lua_pushnumber(L,Awesomium::kCertError_CommonNameInvalid); lua_setfield(L,-2,"kCertError_CommonNameInvalid");
	lua_pushnumber(L,Awesomium::kCertError_DateInvalid); lua_setfield(L,-2,"kCertError_DateInvalid");
	lua_pushnumber(L,Awesomium::kCertError_AuthorityInvalid); lua_setfield(L,-2,"kCertError_AuthorityInvalid");
	lua_pushnumber(L,Awesomium::kCertError_ContainsErrors); lua_setfield(L,-2,"kCertError_ContainsErrors");
	lua_pushnumber(L,Awesomium::kCertError_NoRevocationMechanism); lua_setfield(L,-2,"kCertError_NoRevocationMechanism");
	lua_pushnumber(L,Awesomium::kCertError_UnableToCheckRevocation); lua_setfield(L,-2,"kCertError_UnableToCheckRevocation");
	lua_pushnumber(L,Awesomium::kCertError_Revoked); lua_setfield(L,-2,"kCertError_Revoked");
	lua_pushnumber(L,Awesomium::kCertError_Invalid); lua_setfield(L,-2,"kCertError_Invalid");
	lua_pushnumber(L,Awesomium::kCertError_WeakSignatureAlgorithm); lua_setfield(L,-2,"kCertError_WeakSignatureAlgorithm");
	lua_pushnumber(L,Awesomium::kCertError_WeakKey); lua_setfield(L,-2,"kCertError_WeakKey");
	lua_pushnumber(L,Awesomium::kCertError_NotInDNS); lua_setfield(L,-2,"kCertError_NotInDNS");
	lua_pushnumber(L,Awesomium::kCertError_Unknown); lua_setfield(L,-2,"kCertError_Unknown");


	lua_newtable(L); // enum SecurityStatus

	lua_pushnumber(L,Awesomium::kSecurityStatus_Unknown); lua_setfield(L,-2,"kSecurityStatus_Unknown");
	lua_pushnumber(L,Awesomium::kSecurityStatus_Unauthenticated); lua_setfield(L,-2,"kSecurityStatus_Unauthenticated");
	lua_pushnumber(L,Awesomium::kSecurityStatus_AuthenticationBroken); lua_setfield(L,-2,"kSecurityStatus_AuthenticationBroken");
	lua_pushnumber(L,Awesomium::kSecurityStatus_Authenticated); lua_setfield(L,-2,"kSecurityStatus_Authenticated");

	lua_setfield(L,-2,"SecurityStatus");

	lua_pushnumber(L,Awesomium::kSecurityStatus_Unknown); lua_setfield(L,-2,"kSecurityStatus_Unknown");
	lua_pushnumber(L,Awesomium::kSecurityStatus_Unauthenticated); lua_setfield(L,-2,"kSecurityStatus_Unauthenticated");
	lua_pushnumber(L,Awesomium::kSecurityStatus_AuthenticationBroken); lua_setfield(L,-2,"kSecurityStatus_AuthenticationBroken");
	lua_pushnumber(L,Awesomium::kSecurityStatus_Authenticated); lua_setfield(L,-2,"kSecurityStatus_Authenticated");


	lua_newtable(L); // enum ContentStatusFlags

	lua_pushnumber(L,Awesomium::kContentStatusFlags_Normal); lua_setfield(L,-2,"kContentStatusFlags_Normal");
	lua_pushnumber(L,Awesomium::kContentStatusFlags_DisplayedInsecureContent); lua_setfield(L,-2,"kContentStatusFlags_DisplayedInsecureContent");
	lua_pushnumber(L,Awesomium::kContentStatusFlags_RanInsecureContent); lua_setfield(L,-2,"kContentStatusFlags_RanInsecureContent");

	lua_setfield(L,-2,"ContentStatusFlags");

	lua_pushnumber(L,Awesomium::kContentStatusFlags_Normal); lua_setfield(L,-2,"kContentStatusFlags_Normal");
	lua_pushnumber(L,Awesomium::kContentStatusFlags_DisplayedInsecureContent); lua_setfield(L,-2,"kContentStatusFlags_DisplayedInsecureContent");
	lua_pushnumber(L,Awesomium::kContentStatusFlags_RanInsecureContent); lua_setfield(L,-2,"kContentStatusFlags_RanInsecureContent");


	lua_newtable(L); // enum KeyCodes

	lua_pushnumber(L,KeyCodes::AK_BACK); lua_setfield(L,-2,"AK_BACK");
	lua_pushnumber(L,KeyCodes::AK_TAB); lua_setfield(L,-2,"AK_TAB");
	lua_pushnumber(L,KeyCodes::AK_CLEAR); lua_setfield(L,-2,"AK_CLEAR");
	lua_pushnumber(L,KeyCodes::AK_RETURN); lua_setfield(L,-2,"AK_RETURN");
	lua_pushnumber(L,KeyCodes::AK_SHIFT); lua_setfield(L,-2,"AK_SHIFT");
	lua_pushnumber(L,KeyCodes::AK_CONTROL); lua_setfield(L,-2,"AK_CONTROL");
	lua_pushnumber(L,KeyCodes::AK_MENU); lua_setfield(L,-2,"AK_MENU");
	lua_pushnumber(L,KeyCodes::AK_PAUSE); lua_setfield(L,-2,"AK_PAUSE");
	lua_pushnumber(L,KeyCodes::AK_CAPITAL); lua_setfield(L,-2,"AK_CAPITAL");
	lua_pushnumber(L,KeyCodes::AK_KANA); lua_setfield(L,-2,"AK_KANA");
	lua_pushnumber(L,KeyCodes::AK_HANGUL); lua_setfield(L,-2,"AK_HANGUL");
	lua_pushnumber(L,KeyCodes::AK_JUNJA); lua_setfield(L,-2,"AK_JUNJA");
	lua_pushnumber(L,KeyCodes::AK_FINAL); lua_setfield(L,-2,"AK_FINAL");
	lua_pushnumber(L,KeyCodes::AK_HANJA); lua_setfield(L,-2,"AK_HANJA");
	lua_pushnumber(L,KeyCodes::AK_KANJI); lua_setfield(L,-2,"AK_KANJI");
	lua_pushnumber(L,KeyCodes::AK_ESCAPE); lua_setfield(L,-2,"AK_ESCAPE");
	lua_pushnumber(L,KeyCodes::AK_CONVERT); lua_setfield(L,-2,"AK_CONVERT");
	lua_pushnumber(L,KeyCodes::AK_NONCONVERT); lua_setfield(L,-2,"AK_NONCONVERT");
	lua_pushnumber(L,KeyCodes::AK_ACCEPT); lua_setfield(L,-2,"AK_ACCEPT");
	lua_pushnumber(L,KeyCodes::AK_MODECHANGE); lua_setfield(L,-2,"AK_MODECHANGE");
	lua_pushnumber(L,KeyCodes::AK_SPACE); lua_setfield(L,-2,"AK_SPACE");
	lua_pushnumber(L,KeyCodes::AK_PRIOR); lua_setfield(L,-2,"AK_PRIOR");
	lua_pushnumber(L,KeyCodes::AK_NEXT); lua_setfield(L,-2,"AK_NEXT");
	lua_pushnumber(L,KeyCodes::AK_END); lua_setfield(L,-2,"AK_END");
	lua_pushnumber(L,KeyCodes::AK_HOME); lua_setfield(L,-2,"AK_HOME");
	lua_pushnumber(L,KeyCodes::AK_LEFT); lua_setfield(L,-2,"AK_LEFT");
	lua_pushnumber(L,KeyCodes::AK_UP); lua_setfield(L,-2,"AK_UP");
	lua_pushnumber(L,KeyCodes::AK_RIGHT); lua_setfield(L,-2,"AK_RIGHT");
	lua_pushnumber(L,KeyCodes::AK_DOWN); lua_setfield(L,-2,"AK_DOWN");
	lua_pushnumber(L,KeyCodes::AK_SELECT); lua_setfield(L,-2,"AK_SELECT");
	lua_pushnumber(L,KeyCodes::AK_PRINT); lua_setfield(L,-2,"AK_PRINT");
	lua_pushnumber(L,KeyCodes::AK_EXECUTE); lua_setfield(L,-2,"AK_EXECUTE");
	lua_pushnumber(L,KeyCodes::AK_SNAPSHOT); lua_setfield(L,-2,"AK_SNAPSHOT");
	lua_pushnumber(L,KeyCodes::AK_INSERT); lua_setfield(L,-2,"AK_INSERT");
	lua_pushnumber(L,KeyCodes::AK_DELETE); lua_setfield(L,-2,"AK_DELETE");
	lua_pushnumber(L,KeyCodes::AK_HELP); lua_setfield(L,-2,"AK_HELP");
	lua_pushnumber(L,KeyCodes::AK_0); lua_setfield(L,-2,"AK_0");
	lua_pushnumber(L,KeyCodes::AK_1); lua_setfield(L,-2,"AK_1");
	lua_pushnumber(L,KeyCodes::AK_2); lua_setfield(L,-2,"AK_2");
	lua_pushnumber(L,KeyCodes::AK_3); lua_setfield(L,-2,"AK_3");
	lua_pushnumber(L,KeyCodes::AK_4); lua_setfield(L,-2,"AK_4");
	lua_pushnumber(L,KeyCodes::AK_5); lua_setfield(L,-2,"AK_5");
	lua_pushnumber(L,KeyCodes::AK_6); lua_setfield(L,-2,"AK_6");
	lua_pushnumber(L,KeyCodes::AK_7); lua_setfield(L,-2,"AK_7");
	lua_pushnumber(L,KeyCodes::AK_8); lua_setfield(L,-2,"AK_8");
	lua_pushnumber(L,KeyCodes::AK_9); lua_setfield(L,-2,"AK_9");
	lua_pushnumber(L,KeyCodes::AK_A); lua_setfield(L,-2,"AK_A");
	lua_pushnumber(L,KeyCodes::AK_B); lua_setfield(L,-2,"AK_B");
	lua_pushnumber(L,KeyCodes::AK_C); lua_setfield(L,-2,"AK_C");
	lua_pushnumber(L,KeyCodes::AK_D); lua_setfield(L,-2,"AK_D");
	lua_pushnumber(L,KeyCodes::AK_E); lua_setfield(L,-2,"AK_E");
	lua_pushnumber(L,KeyCodes::AK_F); lua_setfield(L,-2,"AK_F");
	lua_pushnumber(L,KeyCodes::AK_G); lua_setfield(L,-2,"AK_G");
	lua_pushnumber(L,KeyCodes::AK_H); lua_setfield(L,-2,"AK_H");
	lua_pushnumber(L,KeyCodes::AK_I); lua_setfield(L,-2,"AK_I");
	lua_pushnumber(L,KeyCodes::AK_J); lua_setfield(L,-2,"AK_J");
	lua_pushnumber(L,KeyCodes::AK_K); lua_setfield(L,-2,"AK_K");
	lua_pushnumber(L,KeyCodes::AK_L); lua_setfield(L,-2,"AK_L");
	lua_pushnumber(L,KeyCodes::AK_M); lua_setfield(L,-2,"AK_M");
	lua_pushnumber(L,KeyCodes::AK_N); lua_setfield(L,-2,"AK_N");
	lua_pushnumber(L,KeyCodes::AK_O); lua_setfield(L,-2,"AK_O");
	lua_pushnumber(L,KeyCodes::AK_P); lua_setfield(L,-2,"AK_P");
	lua_pushnumber(L,KeyCodes::AK_Q); lua_setfield(L,-2,"AK_Q");
	lua_pushnumber(L,KeyCodes::AK_R); lua_setfield(L,-2,"AK_R");
	lua_pushnumber(L,KeyCodes::AK_S); lua_setfield(L,-2,"AK_S");
	lua_pushnumber(L,KeyCodes::AK_T); lua_setfield(L,-2,"AK_T");
	lua_pushnumber(L,KeyCodes::AK_U); lua_setfield(L,-2,"AK_U");
	lua_pushnumber(L,KeyCodes::AK_V); lua_setfield(L,-2,"AK_V");
	lua_pushnumber(L,KeyCodes::AK_W); lua_setfield(L,-2,"AK_W");
	lua_pushnumber(L,KeyCodes::AK_X); lua_setfield(L,-2,"AK_X");
	lua_pushnumber(L,KeyCodes::AK_Y); lua_setfield(L,-2,"AK_Y");
	lua_pushnumber(L,KeyCodes::AK_Z); lua_setfield(L,-2,"AK_Z");
	lua_pushnumber(L,KeyCodes::AK_LWIN); lua_setfield(L,-2,"AK_LWIN");
	lua_pushnumber(L,KeyCodes::AK_RWIN); lua_setfield(L,-2,"AK_RWIN");
	lua_pushnumber(L,KeyCodes::AK_APPS); lua_setfield(L,-2,"AK_APPS");
	lua_pushnumber(L,KeyCodes::AK_SLEEP); lua_setfield(L,-2,"AK_SLEEP");
	lua_pushnumber(L,KeyCodes::AK_NUMPAD0); lua_setfield(L,-2,"AK_NUMPAD0");
	lua_pushnumber(L,KeyCodes::AK_NUMPAD1); lua_setfield(L,-2,"AK_NUMPAD1");
	lua_pushnumber(L,KeyCodes::AK_NUMPAD2); lua_setfield(L,-2,"AK_NUMPAD2");
	lua_pushnumber(L,KeyCodes::AK_NUMPAD3); lua_setfield(L,-2,"AK_NUMPAD3");
	lua_pushnumber(L,KeyCodes::AK_NUMPAD4); lua_setfield(L,-2,"AK_NUMPAD4");
	lua_pushnumber(L,KeyCodes::AK_NUMPAD5); lua_setfield(L,-2,"AK_NUMPAD5");
	lua_pushnumber(L,KeyCodes::AK_NUMPAD6); lua_setfield(L,-2,"AK_NUMPAD6");
	lua_pushnumber(L,KeyCodes::AK_NUMPAD7); lua_setfield(L,-2,"AK_NUMPAD7");
	lua_pushnumber(L,KeyCodes::AK_NUMPAD8); lua_setfield(L,-2,"AK_NUMPAD8");
	lua_pushnumber(L,KeyCodes::AK_NUMPAD9); lua_setfield(L,-2,"AK_NUMPAD9");
	lua_pushnumber(L,KeyCodes::AK_MULTIPLY); lua_setfield(L,-2,"AK_MULTIPLY");
	lua_pushnumber(L,KeyCodes::AK_ADD); lua_setfield(L,-2,"AK_ADD");
	lua_pushnumber(L,KeyCodes::AK_SEPARATOR); lua_setfield(L,-2,"AK_SEPARATOR");
	lua_pushnumber(L,KeyCodes::AK_SUBTRACT); lua_setfield(L,-2,"AK_SUBTRACT");
	lua_pushnumber(L,KeyCodes::AK_DECIMAL); lua_setfield(L,-2,"AK_DECIMAL");
	lua_pushnumber(L,KeyCodes::AK_DIVIDE); lua_setfield(L,-2,"AK_DIVIDE");
	lua_pushnumber(L,KeyCodes::AK_F1); lua_setfield(L,-2,"AK_F1");
	lua_pushnumber(L,KeyCodes::AK_F2); lua_setfield(L,-2,"AK_F2");
	lua_pushnumber(L,KeyCodes::AK_F3); lua_setfield(L,-2,"AK_F3");
	lua_pushnumber(L,KeyCodes::AK_F4); lua_setfield(L,-2,"AK_F4");
	lua_pushnumber(L,KeyCodes::AK_F5); lua_setfield(L,-2,"AK_F5");
	lua_pushnumber(L,KeyCodes::AK_F6); lua_setfield(L,-2,"AK_F6");
	lua_pushnumber(L,KeyCodes::AK_F7); lua_setfield(L,-2,"AK_F7");
	lua_pushnumber(L,KeyCodes::AK_F8); lua_setfield(L,-2,"AK_F8");
	lua_pushnumber(L,KeyCodes::AK_F9); lua_setfield(L,-2,"AK_F9");
	lua_pushnumber(L,KeyCodes::AK_F10); lua_setfield(L,-2,"AK_F10");
	lua_pushnumber(L,KeyCodes::AK_F11); lua_setfield(L,-2,"AK_F11");
	lua_pushnumber(L,KeyCodes::AK_F12); lua_setfield(L,-2,"AK_F12");
	lua_pushnumber(L,KeyCodes::AK_F13); lua_setfield(L,-2,"AK_F13");
	lua_pushnumber(L,KeyCodes::AK_F14); lua_setfield(L,-2,"AK_F14");
	lua_pushnumber(L,KeyCodes::AK_F15); lua_setfield(L,-2,"AK_F15");
	lua_pushnumber(L,KeyCodes::AK_F16); lua_setfield(L,-2,"AK_F16");
	lua_pushnumber(L,KeyCodes::AK_F17); lua_setfield(L,-2,"AK_F17");
	lua_pushnumber(L,KeyCodes::AK_F18); lua_setfield(L,-2,"AK_F18");
	lua_pushnumber(L,KeyCodes::AK_F19); lua_setfield(L,-2,"AK_F19");
	lua_pushnumber(L,KeyCodes::AK_F20); lua_setfield(L,-2,"AK_F20");
	lua_pushnumber(L,KeyCodes::AK_F21); lua_setfield(L,-2,"AK_F21");
	lua_pushnumber(L,KeyCodes::AK_F22); lua_setfield(L,-2,"AK_F22");
	lua_pushnumber(L,KeyCodes::AK_F23); lua_setfield(L,-2,"AK_F23");
	lua_pushnumber(L,KeyCodes::AK_F24); lua_setfield(L,-2,"AK_F24");
	lua_pushnumber(L,KeyCodes::AK_NUMLOCK); lua_setfield(L,-2,"AK_NUMLOCK");
	lua_pushnumber(L,KeyCodes::AK_SCROLL); lua_setfield(L,-2,"AK_SCROLL");
	lua_pushnumber(L,KeyCodes::AK_LSHIFT); lua_setfield(L,-2,"AK_LSHIFT");
	lua_pushnumber(L,KeyCodes::AK_RSHIFT); lua_setfield(L,-2,"AK_RSHIFT");
	lua_pushnumber(L,KeyCodes::AK_LCONTROL); lua_setfield(L,-2,"AK_LCONTROL");
	lua_pushnumber(L,KeyCodes::AK_RCONTROL); lua_setfield(L,-2,"AK_RCONTROL");
	lua_pushnumber(L,KeyCodes::AK_LMENU); lua_setfield(L,-2,"AK_LMENU");
	lua_pushnumber(L,KeyCodes::AK_RMENU); lua_setfield(L,-2,"AK_RMENU");
	lua_pushnumber(L,KeyCodes::AK_BROWSER_BACK); lua_setfield(L,-2,"AK_BROWSER_BACK");
	lua_pushnumber(L,KeyCodes::AK_BROWSER_FORWARD); lua_setfield(L,-2,"AK_BROWSER_FORWARD");
	lua_pushnumber(L,KeyCodes::AK_BROWSER_REFRESH); lua_setfield(L,-2,"AK_BROWSER_REFRESH");
	lua_pushnumber(L,KeyCodes::AK_BROWSER_STOP); lua_setfield(L,-2,"AK_BROWSER_STOP");
	lua_pushnumber(L,KeyCodes::AK_BROWSER_SEARCH); lua_setfield(L,-2,"AK_BROWSER_SEARCH");
	lua_pushnumber(L,KeyCodes::AK_BROWSER_FAVORITES); lua_setfield(L,-2,"AK_BROWSER_FAVORITES");
	lua_pushnumber(L,KeyCodes::AK_BROWSER_HOME); lua_setfield(L,-2,"AK_BROWSER_HOME");
	lua_pushnumber(L,KeyCodes::AK_VOLUME_MUTE); lua_setfield(L,-2,"AK_VOLUME_MUTE");
	lua_pushnumber(L,KeyCodes::AK_VOLUME_DOWN); lua_setfield(L,-2,"AK_VOLUME_DOWN");
	lua_pushnumber(L,KeyCodes::AK_VOLUME_UP); lua_setfield(L,-2,"AK_VOLUME_UP");
	lua_pushnumber(L,KeyCodes::AK_MEDIA_NEXT_TRACK); lua_setfield(L,-2,"AK_MEDIA_NEXT_TRACK");
	lua_pushnumber(L,KeyCodes::AK_MEDIA_PREV_TRACK); lua_setfield(L,-2,"AK_MEDIA_PREV_TRACK");
	lua_pushnumber(L,KeyCodes::AK_MEDIA_STOP); lua_setfield(L,-2,"AK_MEDIA_STOP");
	lua_pushnumber(L,KeyCodes::AK_MEDIA_PLAY_PAUSE); lua_setfield(L,-2,"AK_MEDIA_PLAY_PAUSE");
	lua_pushnumber(L,KeyCodes::AK_MEDIA_LAUNCH_MAIL); lua_setfield(L,-2,"AK_MEDIA_LAUNCH_MAIL");
	lua_pushnumber(L,KeyCodes::AK_MEDIA_LAUNCH_MEDIA_SELECT); lua_setfield(L,-2,"AK_MEDIA_LAUNCH_MEDIA_SELECT");
	lua_pushnumber(L,KeyCodes::AK_MEDIA_LAUNCH_APP1); lua_setfield(L,-2,"AK_MEDIA_LAUNCH_APP1");
	lua_pushnumber(L,KeyCodes::AK_MEDIA_LAUNCH_APP2); lua_setfield(L,-2,"AK_MEDIA_LAUNCH_APP2");
	lua_pushnumber(L,KeyCodes::AK_OEM_1); lua_setfield(L,-2,"AK_OEM_1");
	lua_pushnumber(L,KeyCodes::AK_OEM_PLUS); lua_setfield(L,-2,"AK_OEM_PLUS");
	lua_pushnumber(L,KeyCodes::AK_OEM_COMMA); lua_setfield(L,-2,"AK_OEM_COMMA");
	lua_pushnumber(L,KeyCodes::AK_OEM_MINUS); lua_setfield(L,-2,"AK_OEM_MINUS");
	lua_pushnumber(L,KeyCodes::AK_OEM_PERIOD); lua_setfield(L,-2,"AK_OEM_PERIOD");
	lua_pushnumber(L,KeyCodes::AK_OEM_2); lua_setfield(L,-2,"AK_OEM_2");
	lua_pushnumber(L,KeyCodes::AK_OEM_3); lua_setfield(L,-2,"AK_OEM_3");
	lua_pushnumber(L,KeyCodes::AK_OEM_4); lua_setfield(L,-2,"AK_OEM_4");
	lua_pushnumber(L,KeyCodes::AK_OEM_5); lua_setfield(L,-2,"AK_OEM_5");
	lua_pushnumber(L,KeyCodes::AK_OEM_6); lua_setfield(L,-2,"AK_OEM_6");
	lua_pushnumber(L,KeyCodes::AK_OEM_7); lua_setfield(L,-2,"AK_OEM_7");
	lua_pushnumber(L,KeyCodes::AK_OEM_8); lua_setfield(L,-2,"AK_OEM_8");
	lua_pushnumber(L,KeyCodes::AK_OEM_102); lua_setfield(L,-2,"AK_OEM_102");
	lua_pushnumber(L,KeyCodes::AK_PROCESSKEY); lua_setfield(L,-2,"AK_PROCESSKEY");
	lua_pushnumber(L,KeyCodes::AK_PACKET); lua_setfield(L,-2,"AK_PACKET");
	lua_pushnumber(L,KeyCodes::AK_ATTN); lua_setfield(L,-2,"AK_ATTN");
	lua_pushnumber(L,KeyCodes::AK_CRSEL); lua_setfield(L,-2,"AK_CRSEL");
	lua_pushnumber(L,KeyCodes::AK_EXSEL); lua_setfield(L,-2,"AK_EXSEL");
	lua_pushnumber(L,KeyCodes::AK_EREOF); lua_setfield(L,-2,"AK_EREOF");
	lua_pushnumber(L,KeyCodes::AK_PLAY); lua_setfield(L,-2,"AK_PLAY");
	lua_pushnumber(L,KeyCodes::AK_ZOOM); lua_setfield(L,-2,"AK_ZOOM");
	lua_pushnumber(L,KeyCodes::AK_NONAME); lua_setfield(L,-2,"AK_NONAME");
	lua_pushnumber(L,KeyCodes::AK_PA1); lua_setfield(L,-2,"AK_PA1");
	lua_pushnumber(L,KeyCodes::AK_OEM_CLEAR); lua_setfield(L,-2,"AK_OEM_CLEAR");
	lua_pushnumber(L,KeyCodes::AK_UNKNOWN); lua_setfield(L,-2,"AK_UNKNOWN");

	lua_setfield(L,-2,"KeyCodes");

	lua_pushnumber(L,KeyCodes::AK_BACK); lua_setfield(L,-2,"AK_BACK");
	lua_pushnumber(L,KeyCodes::AK_TAB); lua_setfield(L,-2,"AK_TAB");
	lua_pushnumber(L,KeyCodes::AK_CLEAR); lua_setfield(L,-2,"AK_CLEAR");
	lua_pushnumber(L,KeyCodes::AK_RETURN); lua_setfield(L,-2,"AK_RETURN");
	lua_pushnumber(L,KeyCodes::AK_SHIFT); lua_setfield(L,-2,"AK_SHIFT");
	lua_pushnumber(L,KeyCodes::AK_CONTROL); lua_setfield(L,-2,"AK_CONTROL");
	lua_pushnumber(L,KeyCodes::AK_MENU); lua_setfield(L,-2,"AK_MENU");
	lua_pushnumber(L,KeyCodes::AK_PAUSE); lua_setfield(L,-2,"AK_PAUSE");
	lua_pushnumber(L,KeyCodes::AK_CAPITAL); lua_setfield(L,-2,"AK_CAPITAL");
	lua_pushnumber(L,KeyCodes::AK_KANA); lua_setfield(L,-2,"AK_KANA");
	lua_pushnumber(L,KeyCodes::AK_HANGUL); lua_setfield(L,-2,"AK_HANGUL");
	lua_pushnumber(L,KeyCodes::AK_JUNJA); lua_setfield(L,-2,"AK_JUNJA");
	lua_pushnumber(L,KeyCodes::AK_FINAL); lua_setfield(L,-2,"AK_FINAL");
	lua_pushnumber(L,KeyCodes::AK_HANJA); lua_setfield(L,-2,"AK_HANJA");
	lua_pushnumber(L,KeyCodes::AK_KANJI); lua_setfield(L,-2,"AK_KANJI");
	lua_pushnumber(L,KeyCodes::AK_ESCAPE); lua_setfield(L,-2,"AK_ESCAPE");
	lua_pushnumber(L,KeyCodes::AK_CONVERT); lua_setfield(L,-2,"AK_CONVERT");
	lua_pushnumber(L,KeyCodes::AK_NONCONVERT); lua_setfield(L,-2,"AK_NONCONVERT");
	lua_pushnumber(L,KeyCodes::AK_ACCEPT); lua_setfield(L,-2,"AK_ACCEPT");
	lua_pushnumber(L,KeyCodes::AK_MODECHANGE); lua_setfield(L,-2,"AK_MODECHANGE");
	lua_pushnumber(L,KeyCodes::AK_SPACE); lua_setfield(L,-2,"AK_SPACE");
	lua_pushnumber(L,KeyCodes::AK_PRIOR); lua_setfield(L,-2,"AK_PRIOR");
	lua_pushnumber(L,KeyCodes::AK_NEXT); lua_setfield(L,-2,"AK_NEXT");
	lua_pushnumber(L,KeyCodes::AK_END); lua_setfield(L,-2,"AK_END");
	lua_pushnumber(L,KeyCodes::AK_HOME); lua_setfield(L,-2,"AK_HOME");
	lua_pushnumber(L,KeyCodes::AK_LEFT); lua_setfield(L,-2,"AK_LEFT");
	lua_pushnumber(L,KeyCodes::AK_UP); lua_setfield(L,-2,"AK_UP");
	lua_pushnumber(L,KeyCodes::AK_RIGHT); lua_setfield(L,-2,"AK_RIGHT");
	lua_pushnumber(L,KeyCodes::AK_DOWN); lua_setfield(L,-2,"AK_DOWN");
	lua_pushnumber(L,KeyCodes::AK_SELECT); lua_setfield(L,-2,"AK_SELECT");
	lua_pushnumber(L,KeyCodes::AK_PRINT); lua_setfield(L,-2,"AK_PRINT");
	lua_pushnumber(L,KeyCodes::AK_EXECUTE); lua_setfield(L,-2,"AK_EXECUTE");
	lua_pushnumber(L,KeyCodes::AK_SNAPSHOT); lua_setfield(L,-2,"AK_SNAPSHOT");
	lua_pushnumber(L,KeyCodes::AK_INSERT); lua_setfield(L,-2,"AK_INSERT");
	lua_pushnumber(L,KeyCodes::AK_DELETE); lua_setfield(L,-2,"AK_DELETE");
	lua_pushnumber(L,KeyCodes::AK_HELP); lua_setfield(L,-2,"AK_HELP");
	lua_pushnumber(L,KeyCodes::AK_0); lua_setfield(L,-2,"AK_0");
	lua_pushnumber(L,KeyCodes::AK_1); lua_setfield(L,-2,"AK_1");
	lua_pushnumber(L,KeyCodes::AK_2); lua_setfield(L,-2,"AK_2");
	lua_pushnumber(L,KeyCodes::AK_3); lua_setfield(L,-2,"AK_3");
	lua_pushnumber(L,KeyCodes::AK_4); lua_setfield(L,-2,"AK_4");
	lua_pushnumber(L,KeyCodes::AK_5); lua_setfield(L,-2,"AK_5");
	lua_pushnumber(L,KeyCodes::AK_6); lua_setfield(L,-2,"AK_6");
	lua_pushnumber(L,KeyCodes::AK_7); lua_setfield(L,-2,"AK_7");
	lua_pushnumber(L,KeyCodes::AK_8); lua_setfield(L,-2,"AK_8");
	lua_pushnumber(L,KeyCodes::AK_9); lua_setfield(L,-2,"AK_9");
	lua_pushnumber(L,KeyCodes::AK_A); lua_setfield(L,-2,"AK_A");
	lua_pushnumber(L,KeyCodes::AK_B); lua_setfield(L,-2,"AK_B");
	lua_pushnumber(L,KeyCodes::AK_C); lua_setfield(L,-2,"AK_C");
	lua_pushnumber(L,KeyCodes::AK_D); lua_setfield(L,-2,"AK_D");
	lua_pushnumber(L,KeyCodes::AK_E); lua_setfield(L,-2,"AK_E");
	lua_pushnumber(L,KeyCodes::AK_F); lua_setfield(L,-2,"AK_F");
	lua_pushnumber(L,KeyCodes::AK_G); lua_setfield(L,-2,"AK_G");
	lua_pushnumber(L,KeyCodes::AK_H); lua_setfield(L,-2,"AK_H");
	lua_pushnumber(L,KeyCodes::AK_I); lua_setfield(L,-2,"AK_I");
	lua_pushnumber(L,KeyCodes::AK_J); lua_setfield(L,-2,"AK_J");
	lua_pushnumber(L,KeyCodes::AK_K); lua_setfield(L,-2,"AK_K");
	lua_pushnumber(L,KeyCodes::AK_L); lua_setfield(L,-2,"AK_L");
	lua_pushnumber(L,KeyCodes::AK_M); lua_setfield(L,-2,"AK_M");
	lua_pushnumber(L,KeyCodes::AK_N); lua_setfield(L,-2,"AK_N");
	lua_pushnumber(L,KeyCodes::AK_O); lua_setfield(L,-2,"AK_O");
	lua_pushnumber(L,KeyCodes::AK_P); lua_setfield(L,-2,"AK_P");
	lua_pushnumber(L,KeyCodes::AK_Q); lua_setfield(L,-2,"AK_Q");
	lua_pushnumber(L,KeyCodes::AK_R); lua_setfield(L,-2,"AK_R");
	lua_pushnumber(L,KeyCodes::AK_S); lua_setfield(L,-2,"AK_S");
	lua_pushnumber(L,KeyCodes::AK_T); lua_setfield(L,-2,"AK_T");
	lua_pushnumber(L,KeyCodes::AK_U); lua_setfield(L,-2,"AK_U");
	lua_pushnumber(L,KeyCodes::AK_V); lua_setfield(L,-2,"AK_V");
	lua_pushnumber(L,KeyCodes::AK_W); lua_setfield(L,-2,"AK_W");
	lua_pushnumber(L,KeyCodes::AK_X); lua_setfield(L,-2,"AK_X");
	lua_pushnumber(L,KeyCodes::AK_Y); lua_setfield(L,-2,"AK_Y");
	lua_pushnumber(L,KeyCodes::AK_Z); lua_setfield(L,-2,"AK_Z");
	lua_pushnumber(L,KeyCodes::AK_LWIN); lua_setfield(L,-2,"AK_LWIN");
	lua_pushnumber(L,KeyCodes::AK_RWIN); lua_setfield(L,-2,"AK_RWIN");
	lua_pushnumber(L,KeyCodes::AK_APPS); lua_setfield(L,-2,"AK_APPS");
	lua_pushnumber(L,KeyCodes::AK_SLEEP); lua_setfield(L,-2,"AK_SLEEP");
	lua_pushnumber(L,KeyCodes::AK_NUMPAD0); lua_setfield(L,-2,"AK_NUMPAD0");
	lua_pushnumber(L,KeyCodes::AK_NUMPAD1); lua_setfield(L,-2,"AK_NUMPAD1");
	lua_pushnumber(L,KeyCodes::AK_NUMPAD2); lua_setfield(L,-2,"AK_NUMPAD2");
	lua_pushnumber(L,KeyCodes::AK_NUMPAD3); lua_setfield(L,-2,"AK_NUMPAD3");
	lua_pushnumber(L,KeyCodes::AK_NUMPAD4); lua_setfield(L,-2,"AK_NUMPAD4");
	lua_pushnumber(L,KeyCodes::AK_NUMPAD5); lua_setfield(L,-2,"AK_NUMPAD5");
	lua_pushnumber(L,KeyCodes::AK_NUMPAD6); lua_setfield(L,-2,"AK_NUMPAD6");
	lua_pushnumber(L,KeyCodes::AK_NUMPAD7); lua_setfield(L,-2,"AK_NUMPAD7");
	lua_pushnumber(L,KeyCodes::AK_NUMPAD8); lua_setfield(L,-2,"AK_NUMPAD8");
	lua_pushnumber(L,KeyCodes::AK_NUMPAD9); lua_setfield(L,-2,"AK_NUMPAD9");
	lua_pushnumber(L,KeyCodes::AK_MULTIPLY); lua_setfield(L,-2,"AK_MULTIPLY");
	lua_pushnumber(L,KeyCodes::AK_ADD); lua_setfield(L,-2,"AK_ADD");
	lua_pushnumber(L,KeyCodes::AK_SEPARATOR); lua_setfield(L,-2,"AK_SEPARATOR");
	lua_pushnumber(L,KeyCodes::AK_SUBTRACT); lua_setfield(L,-2,"AK_SUBTRACT");
	lua_pushnumber(L,KeyCodes::AK_DECIMAL); lua_setfield(L,-2,"AK_DECIMAL");
	lua_pushnumber(L,KeyCodes::AK_DIVIDE); lua_setfield(L,-2,"AK_DIVIDE");
	lua_pushnumber(L,KeyCodes::AK_F1); lua_setfield(L,-2,"AK_F1");
	lua_pushnumber(L,KeyCodes::AK_F2); lua_setfield(L,-2,"AK_F2");
	lua_pushnumber(L,KeyCodes::AK_F3); lua_setfield(L,-2,"AK_F3");
	lua_pushnumber(L,KeyCodes::AK_F4); lua_setfield(L,-2,"AK_F4");
	lua_pushnumber(L,KeyCodes::AK_F5); lua_setfield(L,-2,"AK_F5");
	lua_pushnumber(L,KeyCodes::AK_F6); lua_setfield(L,-2,"AK_F6");
	lua_pushnumber(L,KeyCodes::AK_F7); lua_setfield(L,-2,"AK_F7");
	lua_pushnumber(L,KeyCodes::AK_F8); lua_setfield(L,-2,"AK_F8");
	lua_pushnumber(L,KeyCodes::AK_F9); lua_setfield(L,-2,"AK_F9");
	lua_pushnumber(L,KeyCodes::AK_F10); lua_setfield(L,-2,"AK_F10");
	lua_pushnumber(L,KeyCodes::AK_F11); lua_setfield(L,-2,"AK_F11");
	lua_pushnumber(L,KeyCodes::AK_F12); lua_setfield(L,-2,"AK_F12");
	lua_pushnumber(L,KeyCodes::AK_F13); lua_setfield(L,-2,"AK_F13");
	lua_pushnumber(L,KeyCodes::AK_F14); lua_setfield(L,-2,"AK_F14");
	lua_pushnumber(L,KeyCodes::AK_F15); lua_setfield(L,-2,"AK_F15");
	lua_pushnumber(L,KeyCodes::AK_F16); lua_setfield(L,-2,"AK_F16");
	lua_pushnumber(L,KeyCodes::AK_F17); lua_setfield(L,-2,"AK_F17");
	lua_pushnumber(L,KeyCodes::AK_F18); lua_setfield(L,-2,"AK_F18");
	lua_pushnumber(L,KeyCodes::AK_F19); lua_setfield(L,-2,"AK_F19");
	lua_pushnumber(L,KeyCodes::AK_F20); lua_setfield(L,-2,"AK_F20");
	lua_pushnumber(L,KeyCodes::AK_F21); lua_setfield(L,-2,"AK_F21");
	lua_pushnumber(L,KeyCodes::AK_F22); lua_setfield(L,-2,"AK_F22");
	lua_pushnumber(L,KeyCodes::AK_F23); lua_setfield(L,-2,"AK_F23");
	lua_pushnumber(L,KeyCodes::AK_F24); lua_setfield(L,-2,"AK_F24");
	lua_pushnumber(L,KeyCodes::AK_NUMLOCK); lua_setfield(L,-2,"AK_NUMLOCK");
	lua_pushnumber(L,KeyCodes::AK_SCROLL); lua_setfield(L,-2,"AK_SCROLL");
	lua_pushnumber(L,KeyCodes::AK_LSHIFT); lua_setfield(L,-2,"AK_LSHIFT");
	lua_pushnumber(L,KeyCodes::AK_RSHIFT); lua_setfield(L,-2,"AK_RSHIFT");
	lua_pushnumber(L,KeyCodes::AK_LCONTROL); lua_setfield(L,-2,"AK_LCONTROL");
	lua_pushnumber(L,KeyCodes::AK_RCONTROL); lua_setfield(L,-2,"AK_RCONTROL");
	lua_pushnumber(L,KeyCodes::AK_LMENU); lua_setfield(L,-2,"AK_LMENU");
	lua_pushnumber(L,KeyCodes::AK_RMENU); lua_setfield(L,-2,"AK_RMENU");
	lua_pushnumber(L,KeyCodes::AK_BROWSER_BACK); lua_setfield(L,-2,"AK_BROWSER_BACK");
	lua_pushnumber(L,KeyCodes::AK_BROWSER_FORWARD); lua_setfield(L,-2,"AK_BROWSER_FORWARD");
	lua_pushnumber(L,KeyCodes::AK_BROWSER_REFRESH); lua_setfield(L,-2,"AK_BROWSER_REFRESH");
	lua_pushnumber(L,KeyCodes::AK_BROWSER_STOP); lua_setfield(L,-2,"AK_BROWSER_STOP");
	lua_pushnumber(L,KeyCodes::AK_BROWSER_SEARCH); lua_setfield(L,-2,"AK_BROWSER_SEARCH");
	lua_pushnumber(L,KeyCodes::AK_BROWSER_FAVORITES); lua_setfield(L,-2,"AK_BROWSER_FAVORITES");
	lua_pushnumber(L,KeyCodes::AK_BROWSER_HOME); lua_setfield(L,-2,"AK_BROWSER_HOME");
	lua_pushnumber(L,KeyCodes::AK_VOLUME_MUTE); lua_setfield(L,-2,"AK_VOLUME_MUTE");
	lua_pushnumber(L,KeyCodes::AK_VOLUME_DOWN); lua_setfield(L,-2,"AK_VOLUME_DOWN");
	lua_pushnumber(L,KeyCodes::AK_VOLUME_UP); lua_setfield(L,-2,"AK_VOLUME_UP");
	lua_pushnumber(L,KeyCodes::AK_MEDIA_NEXT_TRACK); lua_setfield(L,-2,"AK_MEDIA_NEXT_TRACK");
	lua_pushnumber(L,KeyCodes::AK_MEDIA_PREV_TRACK); lua_setfield(L,-2,"AK_MEDIA_PREV_TRACK");
	lua_pushnumber(L,KeyCodes::AK_MEDIA_STOP); lua_setfield(L,-2,"AK_MEDIA_STOP");
	lua_pushnumber(L,KeyCodes::AK_MEDIA_PLAY_PAUSE); lua_setfield(L,-2,"AK_MEDIA_PLAY_PAUSE");
	lua_pushnumber(L,KeyCodes::AK_MEDIA_LAUNCH_MAIL); lua_setfield(L,-2,"AK_MEDIA_LAUNCH_MAIL");
	lua_pushnumber(L,KeyCodes::AK_MEDIA_LAUNCH_MEDIA_SELECT); lua_setfield(L,-2,"AK_MEDIA_LAUNCH_MEDIA_SELECT");
	lua_pushnumber(L,KeyCodes::AK_MEDIA_LAUNCH_APP1); lua_setfield(L,-2,"AK_MEDIA_LAUNCH_APP1");
	lua_pushnumber(L,KeyCodes::AK_MEDIA_LAUNCH_APP2); lua_setfield(L,-2,"AK_MEDIA_LAUNCH_APP2");
	lua_pushnumber(L,KeyCodes::AK_OEM_1); lua_setfield(L,-2,"AK_OEM_1");
	lua_pushnumber(L,KeyCodes::AK_OEM_PLUS); lua_setfield(L,-2,"AK_OEM_PLUS");
	lua_pushnumber(L,KeyCodes::AK_OEM_COMMA); lua_setfield(L,-2,"AK_OEM_COMMA");
	lua_pushnumber(L,KeyCodes::AK_OEM_MINUS); lua_setfield(L,-2,"AK_OEM_MINUS");
	lua_pushnumber(L,KeyCodes::AK_OEM_PERIOD); lua_setfield(L,-2,"AK_OEM_PERIOD");
	lua_pushnumber(L,KeyCodes::AK_OEM_2); lua_setfield(L,-2,"AK_OEM_2");
	lua_pushnumber(L,KeyCodes::AK_OEM_3); lua_setfield(L,-2,"AK_OEM_3");
	lua_pushnumber(L,KeyCodes::AK_OEM_4); lua_setfield(L,-2,"AK_OEM_4");
	lua_pushnumber(L,KeyCodes::AK_OEM_5); lua_setfield(L,-2,"AK_OEM_5");
	lua_pushnumber(L,KeyCodes::AK_OEM_6); lua_setfield(L,-2,"AK_OEM_6");
	lua_pushnumber(L,KeyCodes::AK_OEM_7); lua_setfield(L,-2,"AK_OEM_7");
	lua_pushnumber(L,KeyCodes::AK_OEM_8); lua_setfield(L,-2,"AK_OEM_8");
	lua_pushnumber(L,KeyCodes::AK_OEM_102); lua_setfield(L,-2,"AK_OEM_102");
	lua_pushnumber(L,KeyCodes::AK_PROCESSKEY); lua_setfield(L,-2,"AK_PROCESSKEY");
	lua_pushnumber(L,KeyCodes::AK_PACKET); lua_setfield(L,-2,"AK_PACKET");
	lua_pushnumber(L,KeyCodes::AK_ATTN); lua_setfield(L,-2,"AK_ATTN");
	lua_pushnumber(L,KeyCodes::AK_CRSEL); lua_setfield(L,-2,"AK_CRSEL");
	lua_pushnumber(L,KeyCodes::AK_EXSEL); lua_setfield(L,-2,"AK_EXSEL");
	lua_pushnumber(L,KeyCodes::AK_EREOF); lua_setfield(L,-2,"AK_EREOF");
	lua_pushnumber(L,KeyCodes::AK_PLAY); lua_setfield(L,-2,"AK_PLAY");
	lua_pushnumber(L,KeyCodes::AK_ZOOM); lua_setfield(L,-2,"AK_ZOOM");
	lua_pushnumber(L,KeyCodes::AK_NONAME); lua_setfield(L,-2,"AK_NONAME");
	lua_pushnumber(L,KeyCodes::AK_PA1); lua_setfield(L,-2,"AK_PA1");
	lua_pushnumber(L,KeyCodes::AK_OEM_CLEAR); lua_setfield(L,-2,"AK_OEM_CLEAR");
	lua_pushnumber(L,KeyCodes::AK_UNKNOWN); lua_setfield(L,-2,"AK_UNKNOWN");


}

#ifdef __cplusplus
}
#endif


