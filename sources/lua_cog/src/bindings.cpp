#include <sgtCommon.h>
#include <lua/ModuleProvider.h>


class Loader_cog {
public:
	Loader_cog() {
		logDEBUG3("Now loading all modules for package 'cog'");

	}
	
	~Loader_cog() {
		logDEBUG3("Unloading module loader for package 'cog'");
	}
};
	
static Loader_cog loader_object;

	