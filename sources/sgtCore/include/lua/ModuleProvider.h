#ifndef _MODULEMANAGER_H
#define _MODULEMANAGER_H

#include "sgtCommon.h"
#include "base/Object.h"
#include "base/Singleton.h"
#include <osgDB/DynamicLibrary>

namespace sgt {

class SGTCORE_EXPORT ModuleProvider : public sgtObject {
protected:
	typedef std::map<String,String> ModuleMap;
	typedef std::map<String,osg::ref_ptr<osgDB::DynamicLibrary> > PackageMap;
	
	ModuleMap _modules;
	PackageMap _packages;
	
public:
    ModuleProvider()
	{	
		logINFO("Creating Module provider instance.");
	};

    ~ModuleProvider() {
		logINFO("Destroying module provider instance.");	
	};

	ModuleProvider(const ModuleProvider& tm, const sgtCopyOp& co = sgtCopyOp::SHALLOW_COPY):
		sgtObject(tm,co)
	{};
	
	Object_META(sgt, ModuleProvider);
	
	static bool hasModule(const String& moduleName);
	static bool registerModule(const String& moduleName, const String& data);
	static bool unregisterModule(const String& moduleName);
	static String getModule(const String& moduleName);
	static void loadPackage(const String& packageFile);
};

DECLARE_SINGLETON(ModuleProvider, ModuleManager, SGTCORE_EXPORT);

} // namespace sgt

typedef sgt::ModuleProvider sgtModuleProvider;
typedef sgt::ModuleManager sgtModuleManager;

#endif
