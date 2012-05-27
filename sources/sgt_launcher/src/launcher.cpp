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

#ifdef WIN32
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


// The entry point of the complete application:
#ifdef SGT_WINDOWS
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
#else
int main(int argc, char *argv[]) {
#endif

	// Init the log system.
	sgtLogManager::instance().setDefaultLevelFlags(sgtLogManager::TIME_STAMP);
	sgtLogManager::instance().setDefaultTraceFlags(sgtLogManager::TIME_STAMP);
	sgtLogManager::instance().addLevelFlags(sgtLogManager::FATAL,sgtLogManager::FILE_NAME|sgtLogManager::LINE_NUMBER);
	sgtLogManager::instance().addLevelFlags(sgtLogManager::ERROR,sgtLogManager::FILE_NAME|sgtLogManager::LINE_NUMBER);
	sgtLogManager::instance().addLevelFlags(sgtLogManager::WARNING,sgtLogManager::FILE_NAME|sgtLogManager::LINE_NUMBER);

	sgtLogManager::instance().setVerbose(true);
	sgtLogManager::instance().setNotifyLevel(sgtLogManager::DEBUG0); // Log until DEBUG0 level only.

	sgtLogManager::instance().addSink(new sgtFileLogger("singularity.log"));
	sgtLogManager::instance().addSink(new sgtStdLogger());
	
	logDEBUG0_V("Retrieving executable path...");
	std::string path = getExecutablePath();
	std::replace(path.begin(), path.end(), '\\', '/');

	int index = path.rfind("/");
	index = path.rfind("/",index-1);
	index = path.rfind("/",index-1);

	if(index == std::string::npos) {
		// use the current working directory as path:
		logERROR("Cannot parse executable path " << path);
		return 1;
	}

	// Remove the executable name:
	path = path.substr(0,index+1);

	logDEBUG0_V("Root path is: " << path);

	// open an new lua state:
	logDEBUG0_V("Opening Lua state...");
	lua_State* L = luaL_newstate();

	luaL_openlibs(L);

	std::string platform="unknown";

#if defined(MINGW64)
	platform = "mingw64";
#elif defined(MINGW32)
	platform = "mingw32";
#elif defined(WIN32)
	platform = "win32";
#elif defined(LINUX64)
	platform = "linux64";
#elif defined(LINUX32)
	platform = "linux32";
#endif

	lua_pushstring(L,platform.c_str());
	lua_setglobal(L,"flavor");

	lua_pushstring(L,path.c_str());
	lua_setglobal(L,"root_path");

	std::string initScript = path+"init.lua";

	logDEBUG0_V("Executing init script " << initScript << "...");
	if(luaL_dofile(L, initScript.c_str()) != 0) {
		logERROR("Error occurred in init script:\n" << lua_tostring(L,-1));
		lua_close(L);
		return 1;
	}

	// close the lua state
	logDEBUG0_V("Closing Lua state...");
	lua_close(L);

	// exit the program
	logDEBUG0_V("Exiting.");
	return 0;
}
