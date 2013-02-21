#include "sgtCommon.h"
#include "lua/ModuleProvider.h"

#include <osgDB/ObjectWrapper>

namespace sgt {

IMPLEMENT_SINGLETON(ModuleProvider, ModuleManager);

bool ModuleProvider::hasModule(const String& moduleName) {
	ModuleProvider& prov = sgtModuleManager::instance();
	return prov._modules.find(moduleName)!=prov._modules.end();
}

bool ModuleProvider::registerModule(const String& moduleName, const String& data) {
	CHECK_RET(!hasModule(moduleName),false,"The module named " << moduleName << " was already registered.")
	
	ModuleProvider& prov = sgtModuleManager::instance();
	prov._modules[moduleName]=data;
	return true;
}

bool ModuleProvider::unregisterModule(const String& moduleName) {
	ModuleProvider& prov = sgtModuleManager::instance();
	ModuleMap::iterator it = prov._modules.find(moduleName);
	if(it==prov._modules.end())
		return false;
		
	prov._modules.erase(it);
	return true;
}

String ModuleProvider::getModule(const String& moduleName) {
	ModuleProvider& prov = sgtModuleManager::instance();
	ModuleMap::iterator it = prov._modules.find(moduleName);
	if(it==prov._modules.end())
		return "";
		
	return it->second;
}

void ModuleProvider::loadPackage(const String& packageFile) {
	logDEBUG2_V("Trying to load library from " << packageFile);
	osgDB::DynamicLibrary* lib = osgDB::DynamicLibrary::loadLibrary(packageFile);
	if(lib) {
		logINFO("Successfully loaded library from " << packageFile);
		ModuleProvider& prov = sgtModuleManager::instance();
		prov._packages.push_back(lib);
	}
}


} // namespace giCommon
