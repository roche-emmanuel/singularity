#include <plug_common.h>

#include <AntTweakBar.h>

#ifdef __cplusplus
extern "C" {
#endif

void register_enums(lua_State* L) {
	lua_newtable(L); // enum TwType

	lua_pushnumber(L,::TW_TYPE_UNDEF); lua_setfield(L,-2,"TW_TYPE_UNDEF");
	lua_pushnumber(L,::TW_TYPE_BOOLCPP); lua_setfield(L,-2,"TW_TYPE_BOOLCPP");
	lua_pushnumber(L,::TW_TYPE_BOOL8); lua_setfield(L,-2,"TW_TYPE_BOOL8");
	lua_pushnumber(L,::TW_TYPE_BOOL16); lua_setfield(L,-2,"TW_TYPE_BOOL16");
	lua_pushnumber(L,::TW_TYPE_BOOL32); lua_setfield(L,-2,"TW_TYPE_BOOL32");
	lua_pushnumber(L,::TW_TYPE_CHAR); lua_setfield(L,-2,"TW_TYPE_CHAR");
	lua_pushnumber(L,::TW_TYPE_INT8); lua_setfield(L,-2,"TW_TYPE_INT8");
	lua_pushnumber(L,::TW_TYPE_UINT8); lua_setfield(L,-2,"TW_TYPE_UINT8");
	lua_pushnumber(L,::TW_TYPE_INT16); lua_setfield(L,-2,"TW_TYPE_INT16");
	lua_pushnumber(L,::TW_TYPE_UINT16); lua_setfield(L,-2,"TW_TYPE_UINT16");
	lua_pushnumber(L,::TW_TYPE_INT32); lua_setfield(L,-2,"TW_TYPE_INT32");
	lua_pushnumber(L,::TW_TYPE_UINT32); lua_setfield(L,-2,"TW_TYPE_UINT32");
	lua_pushnumber(L,::TW_TYPE_FLOAT); lua_setfield(L,-2,"TW_TYPE_FLOAT");
	lua_pushnumber(L,::TW_TYPE_DOUBLE); lua_setfield(L,-2,"TW_TYPE_DOUBLE");
	lua_pushnumber(L,::TW_TYPE_COLOR32); lua_setfield(L,-2,"TW_TYPE_COLOR32");
	lua_pushnumber(L,::TW_TYPE_COLOR3F); lua_setfield(L,-2,"TW_TYPE_COLOR3F");
	lua_pushnumber(L,::TW_TYPE_COLOR4F); lua_setfield(L,-2,"TW_TYPE_COLOR4F");
	lua_pushnumber(L,::TW_TYPE_CDSTRING); lua_setfield(L,-2,"TW_TYPE_CDSTRING");
	lua_pushnumber(L,::TW_TYPE_STDSTRING); lua_setfield(L,-2,"TW_TYPE_STDSTRING");
	lua_pushnumber(L,::TW_TYPE_QUAT4F); lua_setfield(L,-2,"TW_TYPE_QUAT4F");
	lua_pushnumber(L,::TW_TYPE_QUAT4D); lua_setfield(L,-2,"TW_TYPE_QUAT4D");
	lua_pushnumber(L,::TW_TYPE_DIR3F); lua_setfield(L,-2,"TW_TYPE_DIR3F");
	lua_pushnumber(L,::TW_TYPE_DIR3D); lua_setfield(L,-2,"TW_TYPE_DIR3D");

	lua_setfield(L,-2,"TwType");

	lua_pushnumber(L,::TW_TYPE_UNDEF); lua_setfield(L,-2,"TW_TYPE_UNDEF");
	lua_pushnumber(L,::TW_TYPE_BOOLCPP); lua_setfield(L,-2,"TW_TYPE_BOOLCPP");
	lua_pushnumber(L,::TW_TYPE_BOOL8); lua_setfield(L,-2,"TW_TYPE_BOOL8");
	lua_pushnumber(L,::TW_TYPE_BOOL16); lua_setfield(L,-2,"TW_TYPE_BOOL16");
	lua_pushnumber(L,::TW_TYPE_BOOL32); lua_setfield(L,-2,"TW_TYPE_BOOL32");
	lua_pushnumber(L,::TW_TYPE_CHAR); lua_setfield(L,-2,"TW_TYPE_CHAR");
	lua_pushnumber(L,::TW_TYPE_INT8); lua_setfield(L,-2,"TW_TYPE_INT8");
	lua_pushnumber(L,::TW_TYPE_UINT8); lua_setfield(L,-2,"TW_TYPE_UINT8");
	lua_pushnumber(L,::TW_TYPE_INT16); lua_setfield(L,-2,"TW_TYPE_INT16");
	lua_pushnumber(L,::TW_TYPE_UINT16); lua_setfield(L,-2,"TW_TYPE_UINT16");
	lua_pushnumber(L,::TW_TYPE_INT32); lua_setfield(L,-2,"TW_TYPE_INT32");
	lua_pushnumber(L,::TW_TYPE_UINT32); lua_setfield(L,-2,"TW_TYPE_UINT32");
	lua_pushnumber(L,::TW_TYPE_FLOAT); lua_setfield(L,-2,"TW_TYPE_FLOAT");
	lua_pushnumber(L,::TW_TYPE_DOUBLE); lua_setfield(L,-2,"TW_TYPE_DOUBLE");
	lua_pushnumber(L,::TW_TYPE_COLOR32); lua_setfield(L,-2,"TW_TYPE_COLOR32");
	lua_pushnumber(L,::TW_TYPE_COLOR3F); lua_setfield(L,-2,"TW_TYPE_COLOR3F");
	lua_pushnumber(L,::TW_TYPE_COLOR4F); lua_setfield(L,-2,"TW_TYPE_COLOR4F");
	lua_pushnumber(L,::TW_TYPE_CDSTRING); lua_setfield(L,-2,"TW_TYPE_CDSTRING");
	lua_pushnumber(L,::TW_TYPE_STDSTRING); lua_setfield(L,-2,"TW_TYPE_STDSTRING");
	lua_pushnumber(L,::TW_TYPE_QUAT4F); lua_setfield(L,-2,"TW_TYPE_QUAT4F");
	lua_pushnumber(L,::TW_TYPE_QUAT4D); lua_setfield(L,-2,"TW_TYPE_QUAT4D");
	lua_pushnumber(L,::TW_TYPE_DIR3F); lua_setfield(L,-2,"TW_TYPE_DIR3F");
	lua_pushnumber(L,::TW_TYPE_DIR3D); lua_setfield(L,-2,"TW_TYPE_DIR3D");


	lua_newtable(L); // enum TwParamValueType

	lua_pushnumber(L,::TW_PARAM_INT32); lua_setfield(L,-2,"TW_PARAM_INT32");
	lua_pushnumber(L,::TW_PARAM_FLOAT); lua_setfield(L,-2,"TW_PARAM_FLOAT");
	lua_pushnumber(L,::TW_PARAM_DOUBLE); lua_setfield(L,-2,"TW_PARAM_DOUBLE");
	lua_pushnumber(L,::TW_PARAM_CSTRING); lua_setfield(L,-2,"TW_PARAM_CSTRING");

	lua_setfield(L,-2,"TwParamValueType");

	lua_pushnumber(L,::TW_PARAM_INT32); lua_setfield(L,-2,"TW_PARAM_INT32");
	lua_pushnumber(L,::TW_PARAM_FLOAT); lua_setfield(L,-2,"TW_PARAM_FLOAT");
	lua_pushnumber(L,::TW_PARAM_DOUBLE); lua_setfield(L,-2,"TW_PARAM_DOUBLE");
	lua_pushnumber(L,::TW_PARAM_CSTRING); lua_setfield(L,-2,"TW_PARAM_CSTRING");


	lua_newtable(L); // enum TwGraphAPI

	lua_pushnumber(L,::TW_OPENGL); lua_setfield(L,-2,"TW_OPENGL");
	lua_pushnumber(L,::TW_DIRECT3D9); lua_setfield(L,-2,"TW_DIRECT3D9");
	lua_pushnumber(L,::TW_DIRECT3D10); lua_setfield(L,-2,"TW_DIRECT3D10");
	lua_pushnumber(L,::TW_DIRECT3D11); lua_setfield(L,-2,"TW_DIRECT3D11");
	lua_pushnumber(L,::TW_OPENGL_CORE); lua_setfield(L,-2,"TW_OPENGL_CORE");

	lua_setfield(L,-2,"TwGraphAPI");

	lua_pushnumber(L,::TW_OPENGL); lua_setfield(L,-2,"TW_OPENGL");
	lua_pushnumber(L,::TW_DIRECT3D9); lua_setfield(L,-2,"TW_DIRECT3D9");
	lua_pushnumber(L,::TW_DIRECT3D10); lua_setfield(L,-2,"TW_DIRECT3D10");
	lua_pushnumber(L,::TW_DIRECT3D11); lua_setfield(L,-2,"TW_DIRECT3D11");
	lua_pushnumber(L,::TW_OPENGL_CORE); lua_setfield(L,-2,"TW_OPENGL_CORE");


	lua_newtable(L); // enum TwKeyModifier

	lua_pushnumber(L,::TW_KMOD_NONE); lua_setfield(L,-2,"TW_KMOD_NONE");
	lua_pushnumber(L,::TW_KMOD_SHIFT); lua_setfield(L,-2,"TW_KMOD_SHIFT");
	lua_pushnumber(L,::TW_KMOD_CTRL); lua_setfield(L,-2,"TW_KMOD_CTRL");
	lua_pushnumber(L,::TW_KMOD_ALT); lua_setfield(L,-2,"TW_KMOD_ALT");
	lua_pushnumber(L,::TW_KMOD_META); lua_setfield(L,-2,"TW_KMOD_META");

	lua_setfield(L,-2,"TwKeyModifier");

	lua_pushnumber(L,::TW_KMOD_NONE); lua_setfield(L,-2,"TW_KMOD_NONE");
	lua_pushnumber(L,::TW_KMOD_SHIFT); lua_setfield(L,-2,"TW_KMOD_SHIFT");
	lua_pushnumber(L,::TW_KMOD_CTRL); lua_setfield(L,-2,"TW_KMOD_CTRL");
	lua_pushnumber(L,::TW_KMOD_ALT); lua_setfield(L,-2,"TW_KMOD_ALT");
	lua_pushnumber(L,::TW_KMOD_META); lua_setfield(L,-2,"TW_KMOD_META");


	lua_newtable(L); // enum TwKeySpecial

	lua_pushnumber(L,::TW_KEY_BACKSPACE); lua_setfield(L,-2,"TW_KEY_BACKSPACE");
	lua_pushnumber(L,::TW_KEY_TAB); lua_setfield(L,-2,"TW_KEY_TAB");
	lua_pushnumber(L,::TW_KEY_CLEAR); lua_setfield(L,-2,"TW_KEY_CLEAR");
	lua_pushnumber(L,::TW_KEY_RETURN); lua_setfield(L,-2,"TW_KEY_RETURN");
	lua_pushnumber(L,::TW_KEY_PAUSE); lua_setfield(L,-2,"TW_KEY_PAUSE");
	lua_pushnumber(L,::TW_KEY_ESCAPE); lua_setfield(L,-2,"TW_KEY_ESCAPE");
	lua_pushnumber(L,::TW_KEY_SPACE); lua_setfield(L,-2,"TW_KEY_SPACE");
	lua_pushnumber(L,::TW_KEY_DELETE); lua_setfield(L,-2,"TW_KEY_DELETE");
	lua_pushnumber(L,::TW_KEY_UP); lua_setfield(L,-2,"TW_KEY_UP");
	lua_pushnumber(L,::TW_KEY_DOWN); lua_setfield(L,-2,"TW_KEY_DOWN");
	lua_pushnumber(L,::TW_KEY_RIGHT); lua_setfield(L,-2,"TW_KEY_RIGHT");
	lua_pushnumber(L,::TW_KEY_LEFT); lua_setfield(L,-2,"TW_KEY_LEFT");
	lua_pushnumber(L,::TW_KEY_INSERT); lua_setfield(L,-2,"TW_KEY_INSERT");
	lua_pushnumber(L,::TW_KEY_HOME); lua_setfield(L,-2,"TW_KEY_HOME");
	lua_pushnumber(L,::TW_KEY_END); lua_setfield(L,-2,"TW_KEY_END");
	lua_pushnumber(L,::TW_KEY_PAGE_UP); lua_setfield(L,-2,"TW_KEY_PAGE_UP");
	lua_pushnumber(L,::TW_KEY_PAGE_DOWN); lua_setfield(L,-2,"TW_KEY_PAGE_DOWN");
	lua_pushnumber(L,::TW_KEY_F1); lua_setfield(L,-2,"TW_KEY_F1");
	lua_pushnumber(L,::TW_KEY_F2); lua_setfield(L,-2,"TW_KEY_F2");
	lua_pushnumber(L,::TW_KEY_F3); lua_setfield(L,-2,"TW_KEY_F3");
	lua_pushnumber(L,::TW_KEY_F4); lua_setfield(L,-2,"TW_KEY_F4");
	lua_pushnumber(L,::TW_KEY_F5); lua_setfield(L,-2,"TW_KEY_F5");
	lua_pushnumber(L,::TW_KEY_F6); lua_setfield(L,-2,"TW_KEY_F6");
	lua_pushnumber(L,::TW_KEY_F7); lua_setfield(L,-2,"TW_KEY_F7");
	lua_pushnumber(L,::TW_KEY_F8); lua_setfield(L,-2,"TW_KEY_F8");
	lua_pushnumber(L,::TW_KEY_F9); lua_setfield(L,-2,"TW_KEY_F9");
	lua_pushnumber(L,::TW_KEY_F10); lua_setfield(L,-2,"TW_KEY_F10");
	lua_pushnumber(L,::TW_KEY_F11); lua_setfield(L,-2,"TW_KEY_F11");
	lua_pushnumber(L,::TW_KEY_F12); lua_setfield(L,-2,"TW_KEY_F12");
	lua_pushnumber(L,::TW_KEY_F13); lua_setfield(L,-2,"TW_KEY_F13");
	lua_pushnumber(L,::TW_KEY_F14); lua_setfield(L,-2,"TW_KEY_F14");
	lua_pushnumber(L,::TW_KEY_F15); lua_setfield(L,-2,"TW_KEY_F15");
	lua_pushnumber(L,::TW_KEY_LAST); lua_setfield(L,-2,"TW_KEY_LAST");

	lua_setfield(L,-2,"TwKeySpecial");

	lua_pushnumber(L,::TW_KEY_BACKSPACE); lua_setfield(L,-2,"TW_KEY_BACKSPACE");
	lua_pushnumber(L,::TW_KEY_TAB); lua_setfield(L,-2,"TW_KEY_TAB");
	lua_pushnumber(L,::TW_KEY_CLEAR); lua_setfield(L,-2,"TW_KEY_CLEAR");
	lua_pushnumber(L,::TW_KEY_RETURN); lua_setfield(L,-2,"TW_KEY_RETURN");
	lua_pushnumber(L,::TW_KEY_PAUSE); lua_setfield(L,-2,"TW_KEY_PAUSE");
	lua_pushnumber(L,::TW_KEY_ESCAPE); lua_setfield(L,-2,"TW_KEY_ESCAPE");
	lua_pushnumber(L,::TW_KEY_SPACE); lua_setfield(L,-2,"TW_KEY_SPACE");
	lua_pushnumber(L,::TW_KEY_DELETE); lua_setfield(L,-2,"TW_KEY_DELETE");
	lua_pushnumber(L,::TW_KEY_UP); lua_setfield(L,-2,"TW_KEY_UP");
	lua_pushnumber(L,::TW_KEY_DOWN); lua_setfield(L,-2,"TW_KEY_DOWN");
	lua_pushnumber(L,::TW_KEY_RIGHT); lua_setfield(L,-2,"TW_KEY_RIGHT");
	lua_pushnumber(L,::TW_KEY_LEFT); lua_setfield(L,-2,"TW_KEY_LEFT");
	lua_pushnumber(L,::TW_KEY_INSERT); lua_setfield(L,-2,"TW_KEY_INSERT");
	lua_pushnumber(L,::TW_KEY_HOME); lua_setfield(L,-2,"TW_KEY_HOME");
	lua_pushnumber(L,::TW_KEY_END); lua_setfield(L,-2,"TW_KEY_END");
	lua_pushnumber(L,::TW_KEY_PAGE_UP); lua_setfield(L,-2,"TW_KEY_PAGE_UP");
	lua_pushnumber(L,::TW_KEY_PAGE_DOWN); lua_setfield(L,-2,"TW_KEY_PAGE_DOWN");
	lua_pushnumber(L,::TW_KEY_F1); lua_setfield(L,-2,"TW_KEY_F1");
	lua_pushnumber(L,::TW_KEY_F2); lua_setfield(L,-2,"TW_KEY_F2");
	lua_pushnumber(L,::TW_KEY_F3); lua_setfield(L,-2,"TW_KEY_F3");
	lua_pushnumber(L,::TW_KEY_F4); lua_setfield(L,-2,"TW_KEY_F4");
	lua_pushnumber(L,::TW_KEY_F5); lua_setfield(L,-2,"TW_KEY_F5");
	lua_pushnumber(L,::TW_KEY_F6); lua_setfield(L,-2,"TW_KEY_F6");
	lua_pushnumber(L,::TW_KEY_F7); lua_setfield(L,-2,"TW_KEY_F7");
	lua_pushnumber(L,::TW_KEY_F8); lua_setfield(L,-2,"TW_KEY_F8");
	lua_pushnumber(L,::TW_KEY_F9); lua_setfield(L,-2,"TW_KEY_F9");
	lua_pushnumber(L,::TW_KEY_F10); lua_setfield(L,-2,"TW_KEY_F10");
	lua_pushnumber(L,::TW_KEY_F11); lua_setfield(L,-2,"TW_KEY_F11");
	lua_pushnumber(L,::TW_KEY_F12); lua_setfield(L,-2,"TW_KEY_F12");
	lua_pushnumber(L,::TW_KEY_F13); lua_setfield(L,-2,"TW_KEY_F13");
	lua_pushnumber(L,::TW_KEY_F14); lua_setfield(L,-2,"TW_KEY_F14");
	lua_pushnumber(L,::TW_KEY_F15); lua_setfield(L,-2,"TW_KEY_F15");
	lua_pushnumber(L,::TW_KEY_LAST); lua_setfield(L,-2,"TW_KEY_LAST");


	lua_newtable(L); // enum TwMouseAction

	lua_pushnumber(L,::TW_MOUSE_RELEASED); lua_setfield(L,-2,"TW_MOUSE_RELEASED");
	lua_pushnumber(L,::TW_MOUSE_PRESSED); lua_setfield(L,-2,"TW_MOUSE_PRESSED");

	lua_setfield(L,-2,"TwMouseAction");

	lua_pushnumber(L,::TW_MOUSE_RELEASED); lua_setfield(L,-2,"TW_MOUSE_RELEASED");
	lua_pushnumber(L,::TW_MOUSE_PRESSED); lua_setfield(L,-2,"TW_MOUSE_PRESSED");


	lua_newtable(L); // enum TwMouseButtonID

	lua_pushnumber(L,::TW_MOUSE_LEFT); lua_setfield(L,-2,"TW_MOUSE_LEFT");
	lua_pushnumber(L,::TW_MOUSE_MIDDLE); lua_setfield(L,-2,"TW_MOUSE_MIDDLE");
	lua_pushnumber(L,::TW_MOUSE_RIGHT); lua_setfield(L,-2,"TW_MOUSE_RIGHT");

	lua_setfield(L,-2,"TwMouseButtonID");

	lua_pushnumber(L,::TW_MOUSE_LEFT); lua_setfield(L,-2,"TW_MOUSE_LEFT");
	lua_pushnumber(L,::TW_MOUSE_MIDDLE); lua_setfield(L,-2,"TW_MOUSE_MIDDLE");
	lua_pushnumber(L,::TW_MOUSE_RIGHT); lua_setfield(L,-2,"TW_MOUSE_RIGHT");


}

#ifdef __cplusplus
}
#endif


