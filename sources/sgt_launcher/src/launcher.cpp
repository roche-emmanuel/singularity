/*
 * launcher.cpp
 *
 *  Created on: 24 janv. 2012
 *      Author: kenshin
 */

#include <iostream>
#include <lua.hpp>
#include <string>
#include <algorithm>

#include "sgtCommon.h"
#include "log/FileLogger.h"
#include "log/StdLogger.h"

#include <boost/program_options.hpp>

// This simple launcher will use the boost program options library to parse the command line options if any.
namespace po = boost::program_options;


#ifdef WIN32
#pragma comment(linker,"/manifestdependency:\"type='win32' "\
               "name='Microsoft.Windows.Common-Controls' "\
               "version='6.0.0.0' "\
               "processorArchitecture='x86' "\
               "publicKeyToken='6595b64144ccf1df' "\
               "language='*' "\
               "\"")
			   
#include <direct.h>

std::string getExecutablePath()
{
	char pBuf[FILENAME_MAX];

	int bytes = GetModuleFileName(NULL, pBuf, FILENAME_MAX);
	if(bytes == 0) {
		logERROR("Cannot retrieve executable path.");
		return std::string();
	}

	return std::string(pBuf);
}
#else
#include <unistd.h>
std::string getExecutablePath()
{
	char pBuf[FILENAME_MAX];
	char szTmp[32];
	sprintf(szTmp, "/proc/%d/exe", getpid());
	int bytes = readlink(szTmp, pBuf, FILENAME_MAX);

	if(bytes == 0) {
		logERROR("Cannot retrieve executable path.");
		return std::string();
	}

	return std::string(pBuf);
}
#endif

bool setupLuaEnv(lua_State* L, const std::string& path) {
	std::string platform="unknown";
	std::string shared_ext = "dll";

#if defined(MINGW64)
	platform = "mingw64";
#elif defined(MINGW32)
	platform = "mingw32";
#elif defined(WIN32)
	platform = "win32";
#elif defined(LINUX64)
	platform = "linux64";
	shared_ext = "so";
#elif defined(LINUX32)
	platform = "linux32";
	shared_ext = "so";
#elif defined(DS411)
	platform = "ds411";
	shared_ext = "so";	
#endif

	lua_pushstring(L,platform.c_str());
	lua_setglobal(L,"flavor");

	lua_pushstring(L,path.c_str());
	lua_setglobal(L,"root_path");

	lua_getglobal(L,"package"); // push package table.
	CHECK_RET(lua_type(L,-1)==LUA_TTABLE,false,"Invalid package table.");

	lua_pushstring(L,"cpath");
	lua_rawget(L,-2);
	CHECK_RET(lua_type(L,-1)==LUA_TSTRING,false,"Invalid package.cpath string, type="<<lua_type(L,-1));

	std::string cpath = lua_tostring(L,-1);
	lua_pop(L,1); // remove the string from the stack.

	cpath = path +"bin/"+platform+"/libraries/?."+shared_ext+";"+cpath;
	cpath = path +"bin/"+platform+"/libraries/?51."+shared_ext+";"+cpath; // also support IUP style dlls
	cpath = path +"bin/"+platform+"/modules/?.sgp;" + cpath;
	logINFO_V("Setting package.cpath="<< cpath);

	lua_pushstring(L,"cpath");
	lua_pushstring(L,cpath.c_str());
	lua_rawset(L,-3);

	// retrieve path:
	lua_pushstring(L,"path");
	lua_rawget(L,-2);
	CHECK_RET(lua_type(L,-1)==LUA_TSTRING,false,"Invalid package.path string, type="<<lua_type(L,-1));

	std::string lpath = lua_tostring(L,-1);
	lua_pop(L,1); // remove the string from the stack.

	lpath = path +"lua/libraries/?.lua;"+lpath;
	lpath = path +"lua/libraries/?/?.lua;"+lpath;
	lpath = path +"lua/libraries/?/init.lua;"+lpath;
	lpath = path +"lua/modules/?.lua;" + lpath;
	lpath = path +"lua/modules/?/?.lua;" + lpath;
	logINFO_V("Setting package.path="<< lpath);

	lua_pushstring(L,"path");
	lua_pushstring(L,lpath.c_str());
	lua_rawset(L,-3);

	// now pop the package table:
	lua_pop(L,1);

	return true; // success.
}

void setupLogging(std::string logFile) {
	// Init the log system.
	sgtLogManager::instance().setDefaultLevelFlags(sgtLogManager::TIME_STAMP);
	sgtLogManager::instance().setDefaultTraceFlags(sgtLogManager::TIME_STAMP);
	sgtLogManager::instance().addLevelFlags(sgtLogManager::FATAL,sgtLogManager::FILE_NAME|sgtLogManager::LINE_NUMBER);
	sgtLogManager::instance().addLevelFlags(sgtLogManager::ERROR,sgtLogManager::FILE_NAME|sgtLogManager::LINE_NUMBER);
	sgtLogManager::instance().addLevelFlags(sgtLogManager::WARNING,sgtLogManager::FILE_NAME|sgtLogManager::LINE_NUMBER);

	sgtLogManager::instance().setVerbose(true);
	sgtLogManager::instance().setNotifyLevel(sgtLogManager::DEBUG0); // Log until DEBUG0 level only.

	if(!logFile.empty())
		sgtLogManager::instance().addSink(new sgtFileLogger(logFile));

	sgtLogManager::instance().addSink(new sgtStdLogger());
}

// The entry point of the complete application:
#ifdef SGT_WINDOWS
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
#else
int main(int argc, char *argv[]) {
#endif
	TRY {
		// Declare the supported options.
		po::options_description desc("Allowed options");
		desc.add_options()
		    ("help", "produce help message")
		    ("script", po::value< std::string >(), "input script file")
		    ("log", po::value< std::string >(), "log file")
		;

		po::positional_options_description p;
		p.add("script", -1);

		po::variables_map vm;
#ifdef SGT_WINDOWS
		std::vector<std::string> args = po::split_winmain(lpCmdLine);
		po::store(po::command_line_parser(args).options(desc).positional(p).run(), vm);
#else
		po::store(po::command_line_parser(argc, argv).options(desc).positional(p).run(), vm);
#endif
		po::notify(vm);

		if (vm.count("help")) {
		    std::cout << desc << "\n";
		    return 1;
		}

		std::string initScript;

		if (vm.count("script"))
		{
			initScript = vm["script"].as< std::string >();
		}

		std::string logFile;
#ifdef WIN32
		// On windows we should specify a default log file or the log ouputs could be just lost if no file
		// is provided here.
		logFile="singularity.log";
#endif

		if (vm.count("log"))
		{
			logFile = vm["log"].as< std::string >();
		}

		setupLogging(logFile);
		
		logDEBUG0_V("Retrieving executable path...");
		std::string path = getExecutablePath();
		std::replace(path.begin(), path.end(), '\\', '/');

		int index = path.rfind("/");
		index = path.rfind("/",index-1);
		index = path.rfind("/",index-1);

		CHECK_RET(index != std::string::npos,1,"Cannot parse executable path " << path)

		// Remove the executable name:
		path = path.substr(0,index+1);

		logDEBUG0_V("Root path is: " << path);

		// open an new lua state:
		logDEBUG0_V("Opening Lua state...");
		lua_State* L = luaL_newstate();

		luaL_openlibs(L);

		// Setup the package paths:
		if(!setupLuaEnv(L,path)) {
			logERROR("Could not setup lua environment.");
			lua_close(L);
			return 1;
		}

		if(initScript.empty()) {
			initScript = path+"sgt_init.lua";
		}

		logDEBUG0_V("Executing init script " << initScript << "...");
		if(luaL_dofile(L, initScript.c_str()) != 0) {
			logERROR("Error occurred in init script:\n" << lua_tostring(L,-1));
			sgt::LogManager::instance().removeAllSinks(); // This is needed to prevent issues with
			lua_close(L);
			return 1;
		}

		// close the lua state
		logDEBUG0_V("Closing Lua state...");
		lua_close(L);
		
		// exit the program
		std::cout << "(cout) Exiting." << std::endl;
		logDEBUG0_V("Exiting.");
	}
	CATCH("in main entry point.");
	return 0;
}
