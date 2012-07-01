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
	lpath = path +"lua/modules/?.lua;" + lpath;
	logINFO_V("Setting package.path="<< lpath);

	lua_pushstring(L,"path");
	lua_pushstring(L,lpath.c_str());
	lua_rawset(L,-3);

	// now pop the package table:
	lua_pop(L,1);

	return true; // success.
}

// The entry point of the complete application:
#ifdef SGT_WINDOWS
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
#else
int main(int argc, char *argv[]) {
#endif
	TRY {
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

		std::string initScript = path+"sgt_init.lua";

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
	}
	CATCH("in main entry point.");
	return 0;
}
