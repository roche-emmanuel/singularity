#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

int luaopen_wx(lua_State* L)
{

	// Open the luabind support:
	using namespace luabind;
	luabind::open(L);

    luabind::module(L, "wx")
    [

		register_wxObject(),
		register_wxEvtHandler(),
		register_wxAppConsole(),
		register_wxApp(),
		register_wxClassInfo(),
		register_wxEvent(),
		register_wxRefCounter(),
		register_wxString(),
		register_wxWindow(),
		register_global_functions()
	];
	
	// Register all converters:
	registerwxObjectConverters();
    
	if(!wxTheApp) {
		std::cout << "Starting wxApp." << std::endl;
		wxDISABLE_DEBUG_SUPPORT();

		int num = 0;
		wxEntryStart(num,(wxChar**)NULL);
		std::cout << "wxApp started." << std::endl;
	}

    wxMessageBox("Hello world!");
    
	return 0;
}

#ifdef __cplusplus
}
#endif

