#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void register_defines(lua_State* L);
extern void register_global_functions(lua_State* L);

int luaopen_wx(lua_State* L) {
	lua_newtable(L); // container class

	Luna< void >::Register(L);
	Luna< wxApp >::Register(L);
	Luna< wxAppConsole >::Register(L);
	Luna< wxClassInfo >::Register(L);
	Luna< wxEvent >::Register(L);
	Luna< wxEvtHandler >::Register(L);
	Luna< wxObject >::Register(L);
	Luna< wxRefCounter >::Register(L);
	Luna< wxString >::Register(L);
	Luna< wxWindow >::Register(L);

	register_defines(L);

	register_global_functions(L);

	lua_setglobal(L,"wx");
	lua_getglobal(L,"wx");

	if(!wxTheApp) {
		std::cout << "Starting wxApp." << std::endl;
		wxDISABLE_DEBUG_SUPPORT();
	
		int num = 0;
		wxEntryStart(num,(wxChar**)NULL);
		std::cout << "wxApp started." << std::endl;
	}

	return 1;
}

#ifdef __cplusplus
}
#endif

