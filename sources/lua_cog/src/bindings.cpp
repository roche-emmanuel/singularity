#include <sgtCommon.h>
#include <lua/ModuleProvider.h>


static const unsigned char buf_combo_Vertex[]={
 27, 76, 74,  1,  0, 78, 64, 87, 58, 47, 67,108,111,117,100, 47, 80,114,111,106,
101, 99,116,115, 47,115,105,110,103,117,108, 97,114,105,116,121, 47,115,111,117,
114, 99,101,115, 47,108,117, 97, 95, 99,111,103, 47,115,114, 99, 47, 46, 46, 47,
109,111,100,117,108,101,115, 47, 99,111,109, 98,111, 47, 86,101,114,116,101,120,
 46,108,117, 97,108,  2,  0,  2,  0,  3,  0,  6, 15,  0,  4, 52,  0,  0,  0, 37,
  1,  1,  0, 62,  0,  2,  2, 51,  1,  2,  0, 62,  0,  2,  2, 72,  0,  2,  0,  1,
  0,  2, 10, 98, 97,115,101,115, 16, 98, 97,115,101, 46, 79, 98,106,101, 99,116,
  9,110, 97,109,101, 16, 67,111,109, 98,111, 86,101,114,116,101,120, 17, 99,108,
 97,115,115, 66,117,105,108,100,101,114, 12,114,101,113,117,105,114,101,  1,  1,
  1,  1,  1,  3, 67,108, 97,115,115,  0,  6,  1,  0,  0,
};

class Loader_cog {
public:
	Loader_cog() {
		logDEBUG3("Now loading all modules for package 'cog'");

		sgtModuleProvider::registerModule("combo.Vertex",sgt::String((const char*)buf_combo_Vertex,sizeof(buf_combo_Vertex)));
	}
	
	~Loader_cog() {
		logDEBUG3("Unloading module loader for package 'cog'");
	}
};
	
static Loader_cog loader_object;

	