#include <plug_common.h>

#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgDB/Version>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgDB/Archive>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgDB/ConvertUTF>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgDB/FileNameUtils>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgDB/FileUtils>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgDB/ObjectWrapper>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgDB/PluginQuery>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgDB/ReadFile>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgDB/Registry>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgDB/WriteFile>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgDB/XmlParser>

// Function checkers:
inline static bool _lg_typecheck_osgDBGetVersion(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_osgDBGetLibraryName(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}


// Function binds:
// const char * osgDBGetVersion()
static int _bind_osgDBGetVersion(lua_State *L) {
	if (!_lg_typecheck_osgDBGetVersion(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in const char * osgDBGetVersion() function, expected prototype:\nconst char * osgDBGetVersion()\nClass arguments details:\n");
	}


	const char * lret = osgDBGetVersion();
	lua_pushstring(L,lret);

	return 1;
}

// const char * osgDBGetLibraryName()
static int _bind_osgDBGetLibraryName(lua_State *L) {
	if (!_lg_typecheck_osgDBGetLibraryName(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in const char * osgDBGetLibraryName() function, expected prototype:\nconst char * osgDBGetLibraryName()\nClass arguments details:\n");
	}


	const char * lret = osgDBGetLibraryName();
	lua_pushstring(L,lret);

	return 1;
}


// Function checkers:

// Function binds:

// Function checkers:
inline static bool _lg_typecheck_openArchive_overload_1(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<2 || luatop>3 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_openArchive_overload_2(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_convertStringFromCurrentCodePageToUTF8_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_convertStringFromCurrentCodePageToUTF8_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_convertStringFromCurrentCodePageToUTF8_overload_3(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_convertStringFromUTF8toCurrentCodePage_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_convertStringFromUTF8toCurrentCodePage_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_convertStringFromUTF8toCurrentCodePage_overload_3(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_getFilePath(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_getFileExtension(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_getFileExtensionIncludingDot(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_getLowerCaseFileExtension(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_getSimpleFileName(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_getNameLessExtension(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_getNameLessAllExtensions(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_getStrippedName(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_getPathRelative(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_getPathRoot(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_isAbsolutePath(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_convertFileNameToWindowsStyle(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_convertFileNameToUnixStyle(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_convertToLowerCase(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_getNativePathSeparator(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_isFileNameNativeStyle(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_convertFileNameToNativeStyle(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_equalCaseInsensitive_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_equalCaseInsensitive_overload_2(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_containsServerAddress(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_getServerProtocol(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_getServerAddress(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_getServerFileName(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_concatPaths(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_getRealPath(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_makeDirectory(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_makeDirectoryForFile(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_getCurrentWorkingDirectory(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_setCurrentWorkingDirectory(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_fileExists(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_fileType(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_findFileInPath(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<2 || luatop>3 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( !Luna<void>::has_uniqueid(L,2,54591957) ) return false;
	if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_findFileInDirectory(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<2 || luatop>3 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_getDirectoryContents(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_expandWildcardsInFilename(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_copyFile(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_setDataFilePathList_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,54591957) ) return false;
	return true;
}

inline static bool _lg_typecheck_setDataFilePathList_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_getDataFilePathList(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_findDataFile_overload_1(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_findDataFile_overload_2(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<2 || luatop>3 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_setLibraryFilePathList_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,54591957) ) return false;
	return true;
}

inline static bool _lg_typecheck_setLibraryFilePathList_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_getLibraryFilePathList(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_findLibraryFile(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_convertStringPathIntoFilePathList(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( !Luna<void>::has_uniqueid(L,2,54591957) ) return false;
	return true;
}

inline static bool _lg_typecheck_appendPlatformSpecificLibraryFilePaths(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,54591957) ) return false;
	return true;
}

inline static bool _lg_typecheck_appendPlatformSpecificResourceFilePaths(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,54591957) ) return false;
	return true;
}

inline static bool _lg_typecheck_split(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<2 || luatop>3 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( !Luna<void>::has_uniqueid(L,2,52401783) ) return false;
	if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_listAllAvailablePlugins(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_queryPlugin(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( !Luna<void>::has_uniqueid(L,2,75164642) ) return false;
	return true;
}

inline static bool _lg_typecheck_readObjectFile_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_readObjectFile_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_readImageFile_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_readImageFile_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_readHeightFieldFile_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_readHeightFieldFile_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_readNodeFile_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_readNodeFile_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_readShaderFile_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_readShaderFile_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_readShaderFile_overload_3(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_readShaderFile_overload_4(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_readRefObjectFile_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_readRefObjectFile_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_readRefImageFile_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_readRefImageFile_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_readRefHeightFieldFile_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_readRefHeightFieldFile_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_readRefNodeFile_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_readRefNodeFile_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_readRefShaderFile_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_readRefShaderFile_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_readCommandLine(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,99527028) ) return false;
	return true;
}

inline static bool _lg_typecheck_writeObjectFile_overload_1(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_writeObjectFile_overload_2(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_writeImageFile_overload_1(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_writeImageFile_overload_2(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_writeHeightFieldFile_overload_1(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_writeHeightFieldFile_overload_2(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_writeNodeFile_overload_1(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_writeNodeFile_overload_2(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_writeShaderFile_overload_1(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_writeShaderFile_overload_2(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_readXmlFile_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_readXmlFile_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_trimEnclosingSpaces(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}


// Function binds:
// osgDB::Archive * osgDB::openArchive(const std::string & filename, osgDB::ReaderWriter::ArchiveStatus status, unsigned int indexBlockSizeHint = 4096)
static int _bind_openArchive_overload_1(lua_State *L) {
	if (!_lg_typecheck_openArchive_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osgDB::Archive * osgDB::openArchive(const std::string & filename, osgDB::ReaderWriter::ArchiveStatus status, unsigned int indexBlockSizeHint = 4096) function, expected prototype:\nosgDB::Archive * osgDB::openArchive(const std::string & filename, osgDB::ReaderWriter::ArchiveStatus status, unsigned int indexBlockSizeHint = 4096)\nClass arguments details:\n");
	}

	int luatop = lua_gettop(L);

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	osgDB::ReaderWriter::ArchiveStatus status=(osgDB::ReaderWriter::ArchiveStatus)lua_tointeger(L,2);
	unsigned int indexBlockSizeHint=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 4096;

	osgDB::Archive * lret = openArchive(filename, status, indexBlockSizeHint);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osgDB::Archive >::push(L,lret,false);

	return 1;
}

// osgDB::Archive * osgDB::openArchive(const std::string & filename, osgDB::ReaderWriter::ArchiveStatus status, unsigned int indexBlockSizeHint, osgDB::Options * options)
static int _bind_openArchive_overload_2(lua_State *L) {
	if (!_lg_typecheck_openArchive_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osgDB::Archive * osgDB::openArchive(const std::string & filename, osgDB::ReaderWriter::ArchiveStatus status, unsigned int indexBlockSizeHint, osgDB::Options * options) function, expected prototype:\nosgDB::Archive * osgDB::openArchive(const std::string & filename, osgDB::ReaderWriter::ArchiveStatus status, unsigned int indexBlockSizeHint, osgDB::Options * options)\nClass arguments details:\narg 4 ID = 50169651\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	osgDB::ReaderWriter::ArchiveStatus status=(osgDB::ReaderWriter::ArchiveStatus)lua_tointeger(L,2);
	unsigned int indexBlockSizeHint=(unsigned int)lua_tointeger(L,3);
	osgDB::Options* options=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,4));

	osgDB::Archive * lret = openArchive(filename, status, indexBlockSizeHint, options);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osgDB::Archive >::push(L,lret,false);

	return 1;
}

// Overload binder for osgDB::openArchive
static int _bind_openArchive(lua_State *L) {
	if (_lg_typecheck_openArchive_overload_1(L)) return _bind_openArchive_overload_1(L);
	if (_lg_typecheck_openArchive_overload_2(L)) return _bind_openArchive_overload_2(L);

	luaL_error(L, "error in function openArchive, cannot match any of the overloads for function openArchive:\n  openArchive(const std::string &, osgDB::ReaderWriter::ArchiveStatus, unsigned int)\n  openArchive(const std::string &, osgDB::ReaderWriter::ArchiveStatus, unsigned int, osgDB::Options *)\n");
	return 0;
}

// std::string osgDB::convertStringFromCurrentCodePageToUTF8(const char * source, unsigned sourceLength)
static int _bind_convertStringFromCurrentCodePageToUTF8_overload_1(lua_State *L) {
	if (!_lg_typecheck_convertStringFromCurrentCodePageToUTF8_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgDB::convertStringFromCurrentCodePageToUTF8(const char * source, unsigned sourceLength) function, expected prototype:\nstd::string osgDB::convertStringFromCurrentCodePageToUTF8(const char * source, unsigned sourceLength)\nClass arguments details:\n");
	}

	const char * source=(const char *)lua_tostring(L,1);
	unsigned sourceLength=(unsigned)lua_tointeger(L,2);

	std::string lret = convertStringFromCurrentCodePageToUTF8(source, sourceLength);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::convertStringFromCurrentCodePageToUTF8(const std::string & s)
static int _bind_convertStringFromCurrentCodePageToUTF8_overload_2(lua_State *L) {
	if (!_lg_typecheck_convertStringFromCurrentCodePageToUTF8_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgDB::convertStringFromCurrentCodePageToUTF8(const std::string & s) function, expected prototype:\nstd::string osgDB::convertStringFromCurrentCodePageToUTF8(const std::string & s)\nClass arguments details:\n");
	}

	std::string s(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = convertStringFromCurrentCodePageToUTF8(s);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::convertStringFromCurrentCodePageToUTF8(const char * s)
static int _bind_convertStringFromCurrentCodePageToUTF8_overload_3(lua_State *L) {
	if (!_lg_typecheck_convertStringFromCurrentCodePageToUTF8_overload_3(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgDB::convertStringFromCurrentCodePageToUTF8(const char * s) function, expected prototype:\nstd::string osgDB::convertStringFromCurrentCodePageToUTF8(const char * s)\nClass arguments details:\n");
	}

	const char * s=(const char *)lua_tostring(L,1);

	std::string lret = convertStringFromCurrentCodePageToUTF8(s);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// Overload binder for osgDB::convertStringFromCurrentCodePageToUTF8
static int _bind_convertStringFromCurrentCodePageToUTF8(lua_State *L) {
	if (_lg_typecheck_convertStringFromCurrentCodePageToUTF8_overload_1(L)) return _bind_convertStringFromCurrentCodePageToUTF8_overload_1(L);
	if (_lg_typecheck_convertStringFromCurrentCodePageToUTF8_overload_2(L)) return _bind_convertStringFromCurrentCodePageToUTF8_overload_2(L);
	if (_lg_typecheck_convertStringFromCurrentCodePageToUTF8_overload_3(L)) return _bind_convertStringFromCurrentCodePageToUTF8_overload_3(L);

	luaL_error(L, "error in function convertStringFromCurrentCodePageToUTF8, cannot match any of the overloads for function convertStringFromCurrentCodePageToUTF8:\n  convertStringFromCurrentCodePageToUTF8(const char *, unsigned)\n  convertStringFromCurrentCodePageToUTF8(const std::string &)\n  convertStringFromCurrentCodePageToUTF8(const char *)\n");
	return 0;
}

// std::string osgDB::convertStringFromUTF8toCurrentCodePage(const char * source, unsigned sourceLength)
static int _bind_convertStringFromUTF8toCurrentCodePage_overload_1(lua_State *L) {
	if (!_lg_typecheck_convertStringFromUTF8toCurrentCodePage_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgDB::convertStringFromUTF8toCurrentCodePage(const char * source, unsigned sourceLength) function, expected prototype:\nstd::string osgDB::convertStringFromUTF8toCurrentCodePage(const char * source, unsigned sourceLength)\nClass arguments details:\n");
	}

	const char * source=(const char *)lua_tostring(L,1);
	unsigned sourceLength=(unsigned)lua_tointeger(L,2);

	std::string lret = convertStringFromUTF8toCurrentCodePage(source, sourceLength);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::convertStringFromUTF8toCurrentCodePage(const std::string & s)
static int _bind_convertStringFromUTF8toCurrentCodePage_overload_2(lua_State *L) {
	if (!_lg_typecheck_convertStringFromUTF8toCurrentCodePage_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgDB::convertStringFromUTF8toCurrentCodePage(const std::string & s) function, expected prototype:\nstd::string osgDB::convertStringFromUTF8toCurrentCodePage(const std::string & s)\nClass arguments details:\n");
	}

	std::string s(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = convertStringFromUTF8toCurrentCodePage(s);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::convertStringFromUTF8toCurrentCodePage(const char * s)
static int _bind_convertStringFromUTF8toCurrentCodePage_overload_3(lua_State *L) {
	if (!_lg_typecheck_convertStringFromUTF8toCurrentCodePage_overload_3(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgDB::convertStringFromUTF8toCurrentCodePage(const char * s) function, expected prototype:\nstd::string osgDB::convertStringFromUTF8toCurrentCodePage(const char * s)\nClass arguments details:\n");
	}

	const char * s=(const char *)lua_tostring(L,1);

	std::string lret = convertStringFromUTF8toCurrentCodePage(s);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// Overload binder for osgDB::convertStringFromUTF8toCurrentCodePage
static int _bind_convertStringFromUTF8toCurrentCodePage(lua_State *L) {
	if (_lg_typecheck_convertStringFromUTF8toCurrentCodePage_overload_1(L)) return _bind_convertStringFromUTF8toCurrentCodePage_overload_1(L);
	if (_lg_typecheck_convertStringFromUTF8toCurrentCodePage_overload_2(L)) return _bind_convertStringFromUTF8toCurrentCodePage_overload_2(L);
	if (_lg_typecheck_convertStringFromUTF8toCurrentCodePage_overload_3(L)) return _bind_convertStringFromUTF8toCurrentCodePage_overload_3(L);

	luaL_error(L, "error in function convertStringFromUTF8toCurrentCodePage, cannot match any of the overloads for function convertStringFromUTF8toCurrentCodePage:\n  convertStringFromUTF8toCurrentCodePage(const char *, unsigned)\n  convertStringFromUTF8toCurrentCodePage(const std::string &)\n  convertStringFromUTF8toCurrentCodePage(const char *)\n");
	return 0;
}

// std::string osgDB::getFilePath(const std::string & filename)
static int _bind_getFilePath(lua_State *L) {
	if (!_lg_typecheck_getFilePath(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgDB::getFilePath(const std::string & filename) function, expected prototype:\nstd::string osgDB::getFilePath(const std::string & filename)\nClass arguments details:\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = getFilePath(filename);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::getFileExtension(const std::string & filename)
static int _bind_getFileExtension(lua_State *L) {
	if (!_lg_typecheck_getFileExtension(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgDB::getFileExtension(const std::string & filename) function, expected prototype:\nstd::string osgDB::getFileExtension(const std::string & filename)\nClass arguments details:\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = getFileExtension(filename);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::getFileExtensionIncludingDot(const std::string & filename)
static int _bind_getFileExtensionIncludingDot(lua_State *L) {
	if (!_lg_typecheck_getFileExtensionIncludingDot(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgDB::getFileExtensionIncludingDot(const std::string & filename) function, expected prototype:\nstd::string osgDB::getFileExtensionIncludingDot(const std::string & filename)\nClass arguments details:\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = getFileExtensionIncludingDot(filename);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::getLowerCaseFileExtension(const std::string & filename)
static int _bind_getLowerCaseFileExtension(lua_State *L) {
	if (!_lg_typecheck_getLowerCaseFileExtension(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgDB::getLowerCaseFileExtension(const std::string & filename) function, expected prototype:\nstd::string osgDB::getLowerCaseFileExtension(const std::string & filename)\nClass arguments details:\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = getLowerCaseFileExtension(filename);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::getSimpleFileName(const std::string & fileName)
static int _bind_getSimpleFileName(lua_State *L) {
	if (!_lg_typecheck_getSimpleFileName(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgDB::getSimpleFileName(const std::string & fileName) function, expected prototype:\nstd::string osgDB::getSimpleFileName(const std::string & fileName)\nClass arguments details:\n");
	}

	std::string fileName(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = getSimpleFileName(fileName);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::getNameLessExtension(const std::string & fileName)
static int _bind_getNameLessExtension(lua_State *L) {
	if (!_lg_typecheck_getNameLessExtension(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgDB::getNameLessExtension(const std::string & fileName) function, expected prototype:\nstd::string osgDB::getNameLessExtension(const std::string & fileName)\nClass arguments details:\n");
	}

	std::string fileName(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = getNameLessExtension(fileName);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::getNameLessAllExtensions(const std::string & fileName)
static int _bind_getNameLessAllExtensions(lua_State *L) {
	if (!_lg_typecheck_getNameLessAllExtensions(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgDB::getNameLessAllExtensions(const std::string & fileName) function, expected prototype:\nstd::string osgDB::getNameLessAllExtensions(const std::string & fileName)\nClass arguments details:\n");
	}

	std::string fileName(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = getNameLessAllExtensions(fileName);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::getStrippedName(const std::string & fileName)
static int _bind_getStrippedName(lua_State *L) {
	if (!_lg_typecheck_getStrippedName(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgDB::getStrippedName(const std::string & fileName) function, expected prototype:\nstd::string osgDB::getStrippedName(const std::string & fileName)\nClass arguments details:\n");
	}

	std::string fileName(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = getStrippedName(fileName);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::getPathRelative(const std::string & from, const std::string & to)
static int _bind_getPathRelative(lua_State *L) {
	if (!_lg_typecheck_getPathRelative(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgDB::getPathRelative(const std::string & from, const std::string & to) function, expected prototype:\nstd::string osgDB::getPathRelative(const std::string & from, const std::string & to)\nClass arguments details:\n");
	}

	std::string from(lua_tostring(L,1),lua_objlen(L,1));
	std::string to(lua_tostring(L,2),lua_objlen(L,2));

	std::string lret = getPathRelative(from, to);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::getPathRoot(const std::string & path)
static int _bind_getPathRoot(lua_State *L) {
	if (!_lg_typecheck_getPathRoot(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgDB::getPathRoot(const std::string & path) function, expected prototype:\nstd::string osgDB::getPathRoot(const std::string & path)\nClass arguments details:\n");
	}

	std::string path(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = getPathRoot(path);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// bool osgDB::isAbsolutePath(const std::string & path)
static int _bind_isAbsolutePath(lua_State *L) {
	if (!_lg_typecheck_isAbsolutePath(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osgDB::isAbsolutePath(const std::string & path) function, expected prototype:\nbool osgDB::isAbsolutePath(const std::string & path)\nClass arguments details:\n");
	}

	std::string path(lua_tostring(L,1),lua_objlen(L,1));

	bool lret = isAbsolutePath(path);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// std::string osgDB::convertFileNameToWindowsStyle(const std::string & fileName)
static int _bind_convertFileNameToWindowsStyle(lua_State *L) {
	if (!_lg_typecheck_convertFileNameToWindowsStyle(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgDB::convertFileNameToWindowsStyle(const std::string & fileName) function, expected prototype:\nstd::string osgDB::convertFileNameToWindowsStyle(const std::string & fileName)\nClass arguments details:\n");
	}

	std::string fileName(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = convertFileNameToWindowsStyle(fileName);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::convertFileNameToUnixStyle(const std::string & fileName)
static int _bind_convertFileNameToUnixStyle(lua_State *L) {
	if (!_lg_typecheck_convertFileNameToUnixStyle(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgDB::convertFileNameToUnixStyle(const std::string & fileName) function, expected prototype:\nstd::string osgDB::convertFileNameToUnixStyle(const std::string & fileName)\nClass arguments details:\n");
	}

	std::string fileName(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = convertFileNameToUnixStyle(fileName);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::convertToLowerCase(const std::string & fileName)
static int _bind_convertToLowerCase(lua_State *L) {
	if (!_lg_typecheck_convertToLowerCase(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgDB::convertToLowerCase(const std::string & fileName) function, expected prototype:\nstd::string osgDB::convertToLowerCase(const std::string & fileName)\nClass arguments details:\n");
	}

	std::string fileName(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = convertToLowerCase(fileName);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// char osgDB::getNativePathSeparator()
static int _bind_getNativePathSeparator(lua_State *L) {
	if (!_lg_typecheck_getNativePathSeparator(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in char osgDB::getNativePathSeparator() function, expected prototype:\nchar osgDB::getNativePathSeparator()\nClass arguments details:\n");
	}


	char lret = getNativePathSeparator();
	lua_pushnumber(L,lret);

	return 1;
}

// bool osgDB::isFileNameNativeStyle(const std::string & fileName)
static int _bind_isFileNameNativeStyle(lua_State *L) {
	if (!_lg_typecheck_isFileNameNativeStyle(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osgDB::isFileNameNativeStyle(const std::string & fileName) function, expected prototype:\nbool osgDB::isFileNameNativeStyle(const std::string & fileName)\nClass arguments details:\n");
	}

	std::string fileName(lua_tostring(L,1),lua_objlen(L,1));

	bool lret = isFileNameNativeStyle(fileName);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// std::string osgDB::convertFileNameToNativeStyle(const std::string & fileName)
static int _bind_convertFileNameToNativeStyle(lua_State *L) {
	if (!_lg_typecheck_convertFileNameToNativeStyle(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgDB::convertFileNameToNativeStyle(const std::string & fileName) function, expected prototype:\nstd::string osgDB::convertFileNameToNativeStyle(const std::string & fileName)\nClass arguments details:\n");
	}

	std::string fileName(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = convertFileNameToNativeStyle(fileName);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// bool osgDB::equalCaseInsensitive(const std::string & lhs, const std::string & rhs)
static int _bind_equalCaseInsensitive_overload_1(lua_State *L) {
	if (!_lg_typecheck_equalCaseInsensitive_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osgDB::equalCaseInsensitive(const std::string & lhs, const std::string & rhs) function, expected prototype:\nbool osgDB::equalCaseInsensitive(const std::string & lhs, const std::string & rhs)\nClass arguments details:\n");
	}

	std::string lhs(lua_tostring(L,1),lua_objlen(L,1));
	std::string rhs(lua_tostring(L,2),lua_objlen(L,2));

	bool lret = equalCaseInsensitive(lhs, rhs);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool osgDB::equalCaseInsensitive(const std::string & lhs, const char * rhs)
static int _bind_equalCaseInsensitive_overload_2(lua_State *L) {
	if (!_lg_typecheck_equalCaseInsensitive_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osgDB::equalCaseInsensitive(const std::string & lhs, const char * rhs) function, expected prototype:\nbool osgDB::equalCaseInsensitive(const std::string & lhs, const char * rhs)\nClass arguments details:\n");
	}

	std::string lhs(lua_tostring(L,1),lua_objlen(L,1));
	const char * rhs=(const char *)lua_tostring(L,2);

	bool lret = equalCaseInsensitive(lhs, rhs);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// Overload binder for osgDB::equalCaseInsensitive
static int _bind_equalCaseInsensitive(lua_State *L) {
	if (_lg_typecheck_equalCaseInsensitive_overload_1(L)) return _bind_equalCaseInsensitive_overload_1(L);
	if (_lg_typecheck_equalCaseInsensitive_overload_2(L)) return _bind_equalCaseInsensitive_overload_2(L);

	luaL_error(L, "error in function equalCaseInsensitive, cannot match any of the overloads for function equalCaseInsensitive:\n  equalCaseInsensitive(const std::string &, const std::string &)\n  equalCaseInsensitive(const std::string &, const char *)\n");
	return 0;
}

// bool osgDB::containsServerAddress(const std::string & filename)
static int _bind_containsServerAddress(lua_State *L) {
	if (!_lg_typecheck_containsServerAddress(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osgDB::containsServerAddress(const std::string & filename) function, expected prototype:\nbool osgDB::containsServerAddress(const std::string & filename)\nClass arguments details:\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	bool lret = containsServerAddress(filename);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// std::string osgDB::getServerProtocol(const std::string & filename)
static int _bind_getServerProtocol(lua_State *L) {
	if (!_lg_typecheck_getServerProtocol(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgDB::getServerProtocol(const std::string & filename) function, expected prototype:\nstd::string osgDB::getServerProtocol(const std::string & filename)\nClass arguments details:\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = getServerProtocol(filename);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::getServerAddress(const std::string & filename)
static int _bind_getServerAddress(lua_State *L) {
	if (!_lg_typecheck_getServerAddress(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgDB::getServerAddress(const std::string & filename) function, expected prototype:\nstd::string osgDB::getServerAddress(const std::string & filename)\nClass arguments details:\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = getServerAddress(filename);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::getServerFileName(const std::string & filename)
static int _bind_getServerFileName(lua_State *L) {
	if (!_lg_typecheck_getServerFileName(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgDB::getServerFileName(const std::string & filename) function, expected prototype:\nstd::string osgDB::getServerFileName(const std::string & filename)\nClass arguments details:\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = getServerFileName(filename);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::concatPaths(const std::string & left, const std::string & right)
static int _bind_concatPaths(lua_State *L) {
	if (!_lg_typecheck_concatPaths(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgDB::concatPaths(const std::string & left, const std::string & right) function, expected prototype:\nstd::string osgDB::concatPaths(const std::string & left, const std::string & right)\nClass arguments details:\n");
	}

	std::string left(lua_tostring(L,1),lua_objlen(L,1));
	std::string right(lua_tostring(L,2),lua_objlen(L,2));

	std::string lret = concatPaths(left, right);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::getRealPath(const std::string & path)
static int _bind_getRealPath(lua_State *L) {
	if (!_lg_typecheck_getRealPath(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgDB::getRealPath(const std::string & path) function, expected prototype:\nstd::string osgDB::getRealPath(const std::string & path)\nClass arguments details:\n");
	}

	std::string path(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = getRealPath(path);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// bool osgDB::makeDirectory(const std::string & directoryPath)
static int _bind_makeDirectory(lua_State *L) {
	if (!_lg_typecheck_makeDirectory(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osgDB::makeDirectory(const std::string & directoryPath) function, expected prototype:\nbool osgDB::makeDirectory(const std::string & directoryPath)\nClass arguments details:\n");
	}

	std::string directoryPath(lua_tostring(L,1),lua_objlen(L,1));

	bool lret = makeDirectory(directoryPath);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool osgDB::makeDirectoryForFile(const std::string & filePath)
static int _bind_makeDirectoryForFile(lua_State *L) {
	if (!_lg_typecheck_makeDirectoryForFile(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osgDB::makeDirectoryForFile(const std::string & filePath) function, expected prototype:\nbool osgDB::makeDirectoryForFile(const std::string & filePath)\nClass arguments details:\n");
	}

	std::string filePath(lua_tostring(L,1),lua_objlen(L,1));

	bool lret = makeDirectoryForFile(filePath);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// std::string osgDB::getCurrentWorkingDirectory()
static int _bind_getCurrentWorkingDirectory(lua_State *L) {
	if (!_lg_typecheck_getCurrentWorkingDirectory(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgDB::getCurrentWorkingDirectory() function, expected prototype:\nstd::string osgDB::getCurrentWorkingDirectory()\nClass arguments details:\n");
	}


	std::string lret = getCurrentWorkingDirectory();
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// bool osgDB::setCurrentWorkingDirectory(const std::string & newCurrentWorkingDirectory)
static int _bind_setCurrentWorkingDirectory(lua_State *L) {
	if (!_lg_typecheck_setCurrentWorkingDirectory(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osgDB::setCurrentWorkingDirectory(const std::string & newCurrentWorkingDirectory) function, expected prototype:\nbool osgDB::setCurrentWorkingDirectory(const std::string & newCurrentWorkingDirectory)\nClass arguments details:\n");
	}

	std::string newCurrentWorkingDirectory(lua_tostring(L,1),lua_objlen(L,1));

	bool lret = setCurrentWorkingDirectory(newCurrentWorkingDirectory);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool osgDB::fileExists(const std::string & filename)
static int _bind_fileExists(lua_State *L) {
	if (!_lg_typecheck_fileExists(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osgDB::fileExists(const std::string & filename) function, expected prototype:\nbool osgDB::fileExists(const std::string & filename)\nClass arguments details:\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	bool lret = fileExists(filename);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// osgDB::FileType osgDB::fileType(const std::string & filename)
static int _bind_fileType(lua_State *L) {
	if (!_lg_typecheck_fileType(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osgDB::FileType osgDB::fileType(const std::string & filename) function, expected prototype:\nosgDB::FileType osgDB::fileType(const std::string & filename)\nClass arguments details:\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	osgDB::FileType lret = fileType(filename);
	lua_pushnumber(L,lret);

	return 1;
}

// std::string osgDB::findFileInPath(const std::string & filename, const osgDB::FilePathList & filePath, osgDB::CaseSensitivity caseSensitivity = osgDB::CASE_SENSITIVE)
static int _bind_findFileInPath(lua_State *L) {
	if (!_lg_typecheck_findFileInPath(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgDB::findFileInPath(const std::string & filename, const osgDB::FilePathList & filePath, osgDB::CaseSensitivity caseSensitivity = osgDB::CASE_SENSITIVE) function, expected prototype:\nstd::string osgDB::findFileInPath(const std::string & filename, const osgDB::FilePathList & filePath, osgDB::CaseSensitivity caseSensitivity = osgDB::CASE_SENSITIVE)\nClass arguments details:\narg 2 ID = 54591957\n");
	}

	int luatop = lua_gettop(L);

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::FilePathList* filePath_ptr=(Luna< osgDB::FilePathList >::check(L,2));
	if( !filePath_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg filePath in osgDB::findFileInPath function");
	}
	const osgDB::FilePathList & filePath=*filePath_ptr;
	osgDB::CaseSensitivity caseSensitivity=luatop>2 ? (osgDB::CaseSensitivity)lua_tointeger(L,3) : osgDB::CASE_SENSITIVE;

	std::string lret = findFileInPath(filename, filePath, caseSensitivity);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::findFileInDirectory(const std::string & fileName, const std::string & dirName, osgDB::CaseSensitivity caseSensitivity = osgDB::CASE_SENSITIVE)
static int _bind_findFileInDirectory(lua_State *L) {
	if (!_lg_typecheck_findFileInDirectory(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgDB::findFileInDirectory(const std::string & fileName, const std::string & dirName, osgDB::CaseSensitivity caseSensitivity = osgDB::CASE_SENSITIVE) function, expected prototype:\nstd::string osgDB::findFileInDirectory(const std::string & fileName, const std::string & dirName, osgDB::CaseSensitivity caseSensitivity = osgDB::CASE_SENSITIVE)\nClass arguments details:\n");
	}

	int luatop = lua_gettop(L);

	std::string fileName(lua_tostring(L,1),lua_objlen(L,1));
	std::string dirName(lua_tostring(L,2),lua_objlen(L,2));
	osgDB::CaseSensitivity caseSensitivity=luatop>2 ? (osgDB::CaseSensitivity)lua_tointeger(L,3) : osgDB::CASE_SENSITIVE;

	std::string lret = findFileInDirectory(fileName, dirName, caseSensitivity);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// osgDB::DirectoryContents osgDB::getDirectoryContents(const std::string & dirName)
static int _bind_getDirectoryContents(lua_State *L) {
	if (!_lg_typecheck_getDirectoryContents(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osgDB::DirectoryContents osgDB::getDirectoryContents(const std::string & dirName) function, expected prototype:\nosgDB::DirectoryContents osgDB::getDirectoryContents(const std::string & dirName)\nClass arguments details:\n");
	}

	std::string dirName(lua_tostring(L,1),lua_objlen(L,1));

	osgDB::DirectoryContents stack_lret = getDirectoryContents(dirName);
	osgDB::DirectoryContents* lret = new osgDB::DirectoryContents(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osgDB::DirectoryContents >::push(L,lret,true);

	return 1;
}

// osgDB::DirectoryContents osgDB::expandWildcardsInFilename(const std::string & filename)
static int _bind_expandWildcardsInFilename(lua_State *L) {
	if (!_lg_typecheck_expandWildcardsInFilename(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osgDB::DirectoryContents osgDB::expandWildcardsInFilename(const std::string & filename) function, expected prototype:\nosgDB::DirectoryContents osgDB::expandWildcardsInFilename(const std::string & filename)\nClass arguments details:\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	osgDB::DirectoryContents stack_lret = expandWildcardsInFilename(filename);
	osgDB::DirectoryContents* lret = new osgDB::DirectoryContents(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osgDB::DirectoryContents >::push(L,lret,true);

	return 1;
}

// FileOpResult::Value osgDB::copyFile(const std::string & source, const std::string & destination)
static int _bind_copyFile(lua_State *L) {
	if (!_lg_typecheck_copyFile(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in FileOpResult::Value osgDB::copyFile(const std::string & source, const std::string & destination) function, expected prototype:\nFileOpResult::Value osgDB::copyFile(const std::string & source, const std::string & destination)\nClass arguments details:\n");
	}

	std::string source(lua_tostring(L,1),lua_objlen(L,1));
	std::string destination(lua_tostring(L,2),lua_objlen(L,2));

	FileOpResult::Value lret = copyFile(source, destination);
	lua_pushnumber(L,lret);

	return 1;
}

// void osgDB::setDataFilePathList(const osgDB::FilePathList & filepath)
static int _bind_setDataFilePathList_overload_1(lua_State *L) {
	if (!_lg_typecheck_setDataFilePathList_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osgDB::setDataFilePathList(const osgDB::FilePathList & filepath) function, expected prototype:\nvoid osgDB::setDataFilePathList(const osgDB::FilePathList & filepath)\nClass arguments details:\narg 1 ID = 54591957\n");
	}

	const osgDB::FilePathList* filepath_ptr=(Luna< osgDB::FilePathList >::check(L,1));
	if( !filepath_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg filepath in osgDB::setDataFilePathList function");
	}
	const osgDB::FilePathList & filepath=*filepath_ptr;

	setDataFilePathList(filepath);

	return 0;
}

// void osgDB::setDataFilePathList(const std::string & paths)
static int _bind_setDataFilePathList_overload_2(lua_State *L) {
	if (!_lg_typecheck_setDataFilePathList_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osgDB::setDataFilePathList(const std::string & paths) function, expected prototype:\nvoid osgDB::setDataFilePathList(const std::string & paths)\nClass arguments details:\n");
	}

	std::string paths(lua_tostring(L,1),lua_objlen(L,1));

	setDataFilePathList(paths);

	return 0;
}

// Overload binder for osgDB::setDataFilePathList
static int _bind_setDataFilePathList(lua_State *L) {
	if (_lg_typecheck_setDataFilePathList_overload_1(L)) return _bind_setDataFilePathList_overload_1(L);
	if (_lg_typecheck_setDataFilePathList_overload_2(L)) return _bind_setDataFilePathList_overload_2(L);

	luaL_error(L, "error in function setDataFilePathList, cannot match any of the overloads for function setDataFilePathList:\n  setDataFilePathList(const osgDB::FilePathList &)\n  setDataFilePathList(const std::string &)\n");
	return 0;
}

// osgDB::FilePathList & osgDB::getDataFilePathList()
static int _bind_getDataFilePathList(lua_State *L) {
	if (!_lg_typecheck_getDataFilePathList(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osgDB::FilePathList & osgDB::getDataFilePathList() function, expected prototype:\nosgDB::FilePathList & osgDB::getDataFilePathList()\nClass arguments details:\n");
	}


	const osgDB::FilePathList* lret = &getDataFilePathList();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osgDB::FilePathList >::push(L,lret,false);

	return 1;
}

// std::string osgDB::findDataFile(const std::string & filename, osgDB::CaseSensitivity caseSensitivity = osgDB::CASE_SENSITIVE)
static int _bind_findDataFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_findDataFile_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgDB::findDataFile(const std::string & filename, osgDB::CaseSensitivity caseSensitivity = osgDB::CASE_SENSITIVE) function, expected prototype:\nstd::string osgDB::findDataFile(const std::string & filename, osgDB::CaseSensitivity caseSensitivity = osgDB::CASE_SENSITIVE)\nClass arguments details:\n");
	}

	int luatop = lua_gettop(L);

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	osgDB::CaseSensitivity caseSensitivity=luatop>1 ? (osgDB::CaseSensitivity)lua_tointeger(L,2) : osgDB::CASE_SENSITIVE;

	std::string lret = findDataFile(filename, caseSensitivity);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// std::string osgDB::findDataFile(const std::string & filename, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity = osgDB::CASE_SENSITIVE)
static int _bind_findDataFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_findDataFile_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgDB::findDataFile(const std::string & filename, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity = osgDB::CASE_SENSITIVE) function, expected prototype:\nstd::string osgDB::findDataFile(const std::string & filename, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity = osgDB::CASE_SENSITIVE)\nClass arguments details:\narg 2 ID = 50169651\n");
	}

	int luatop = lua_gettop(L);

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::Options* options=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,2));
	osgDB::CaseSensitivity caseSensitivity=luatop>2 ? (osgDB::CaseSensitivity)lua_tointeger(L,3) : osgDB::CASE_SENSITIVE;

	std::string lret = findDataFile(filename, options, caseSensitivity);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// Overload binder for osgDB::findDataFile
static int _bind_findDataFile(lua_State *L) {
	if (_lg_typecheck_findDataFile_overload_1(L)) return _bind_findDataFile_overload_1(L);
	if (_lg_typecheck_findDataFile_overload_2(L)) return _bind_findDataFile_overload_2(L);

	luaL_error(L, "error in function findDataFile, cannot match any of the overloads for function findDataFile:\n  findDataFile(const std::string &, osgDB::CaseSensitivity)\n  findDataFile(const std::string &, const osgDB::Options *, osgDB::CaseSensitivity)\n");
	return 0;
}

// void osgDB::setLibraryFilePathList(const osgDB::FilePathList & filepaths)
static int _bind_setLibraryFilePathList_overload_1(lua_State *L) {
	if (!_lg_typecheck_setLibraryFilePathList_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osgDB::setLibraryFilePathList(const osgDB::FilePathList & filepaths) function, expected prototype:\nvoid osgDB::setLibraryFilePathList(const osgDB::FilePathList & filepaths)\nClass arguments details:\narg 1 ID = 54591957\n");
	}

	const osgDB::FilePathList* filepaths_ptr=(Luna< osgDB::FilePathList >::check(L,1));
	if( !filepaths_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg filepaths in osgDB::setLibraryFilePathList function");
	}
	const osgDB::FilePathList & filepaths=*filepaths_ptr;

	setLibraryFilePathList(filepaths);

	return 0;
}

// void osgDB::setLibraryFilePathList(const std::string & paths)
static int _bind_setLibraryFilePathList_overload_2(lua_State *L) {
	if (!_lg_typecheck_setLibraryFilePathList_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osgDB::setLibraryFilePathList(const std::string & paths) function, expected prototype:\nvoid osgDB::setLibraryFilePathList(const std::string & paths)\nClass arguments details:\n");
	}

	std::string paths(lua_tostring(L,1),lua_objlen(L,1));

	setLibraryFilePathList(paths);

	return 0;
}

// Overload binder for osgDB::setLibraryFilePathList
static int _bind_setLibraryFilePathList(lua_State *L) {
	if (_lg_typecheck_setLibraryFilePathList_overload_1(L)) return _bind_setLibraryFilePathList_overload_1(L);
	if (_lg_typecheck_setLibraryFilePathList_overload_2(L)) return _bind_setLibraryFilePathList_overload_2(L);

	luaL_error(L, "error in function setLibraryFilePathList, cannot match any of the overloads for function setLibraryFilePathList:\n  setLibraryFilePathList(const osgDB::FilePathList &)\n  setLibraryFilePathList(const std::string &)\n");
	return 0;
}

// osgDB::FilePathList & osgDB::getLibraryFilePathList()
static int _bind_getLibraryFilePathList(lua_State *L) {
	if (!_lg_typecheck_getLibraryFilePathList(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osgDB::FilePathList & osgDB::getLibraryFilePathList() function, expected prototype:\nosgDB::FilePathList & osgDB::getLibraryFilePathList()\nClass arguments details:\n");
	}


	const osgDB::FilePathList* lret = &getLibraryFilePathList();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osgDB::FilePathList >::push(L,lret,false);

	return 1;
}

// std::string osgDB::findLibraryFile(const std::string & filename, osgDB::CaseSensitivity caseSensitivity = osgDB::CASE_SENSITIVE)
static int _bind_findLibraryFile(lua_State *L) {
	if (!_lg_typecheck_findLibraryFile(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgDB::findLibraryFile(const std::string & filename, osgDB::CaseSensitivity caseSensitivity = osgDB::CASE_SENSITIVE) function, expected prototype:\nstd::string osgDB::findLibraryFile(const std::string & filename, osgDB::CaseSensitivity caseSensitivity = osgDB::CASE_SENSITIVE)\nClass arguments details:\n");
	}

	int luatop = lua_gettop(L);

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	osgDB::CaseSensitivity caseSensitivity=luatop>1 ? (osgDB::CaseSensitivity)lua_tointeger(L,2) : osgDB::CASE_SENSITIVE;

	std::string lret = findLibraryFile(filename, caseSensitivity);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// void osgDB::convertStringPathIntoFilePathList(const std::string & paths, osgDB::FilePathList & filepath)
static int _bind_convertStringPathIntoFilePathList(lua_State *L) {
	if (!_lg_typecheck_convertStringPathIntoFilePathList(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osgDB::convertStringPathIntoFilePathList(const std::string & paths, osgDB::FilePathList & filepath) function, expected prototype:\nvoid osgDB::convertStringPathIntoFilePathList(const std::string & paths, osgDB::FilePathList & filepath)\nClass arguments details:\narg 2 ID = 54591957\n");
	}

	std::string paths(lua_tostring(L,1),lua_objlen(L,1));
	osgDB::FilePathList* filepath_ptr=(Luna< osgDB::FilePathList >::check(L,2));
	if( !filepath_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg filepath in osgDB::convertStringPathIntoFilePathList function");
	}
	osgDB::FilePathList & filepath=*filepath_ptr;

	convertStringPathIntoFilePathList(paths, filepath);

	return 0;
}

// void osgDB::appendPlatformSpecificLibraryFilePaths(osgDB::FilePathList & filepath)
static int _bind_appendPlatformSpecificLibraryFilePaths(lua_State *L) {
	if (!_lg_typecheck_appendPlatformSpecificLibraryFilePaths(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osgDB::appendPlatformSpecificLibraryFilePaths(osgDB::FilePathList & filepath) function, expected prototype:\nvoid osgDB::appendPlatformSpecificLibraryFilePaths(osgDB::FilePathList & filepath)\nClass arguments details:\narg 1 ID = 54591957\n");
	}

	osgDB::FilePathList* filepath_ptr=(Luna< osgDB::FilePathList >::check(L,1));
	if( !filepath_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg filepath in osgDB::appendPlatformSpecificLibraryFilePaths function");
	}
	osgDB::FilePathList & filepath=*filepath_ptr;

	appendPlatformSpecificLibraryFilePaths(filepath);

	return 0;
}

// void osgDB::appendPlatformSpecificResourceFilePaths(osgDB::FilePathList & filepath)
static int _bind_appendPlatformSpecificResourceFilePaths(lua_State *L) {
	if (!_lg_typecheck_appendPlatformSpecificResourceFilePaths(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osgDB::appendPlatformSpecificResourceFilePaths(osgDB::FilePathList & filepath) function, expected prototype:\nvoid osgDB::appendPlatformSpecificResourceFilePaths(osgDB::FilePathList & filepath)\nClass arguments details:\narg 1 ID = 54591957\n");
	}

	osgDB::FilePathList* filepath_ptr=(Luna< osgDB::FilePathList >::check(L,1));
	if( !filepath_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg filepath in osgDB::appendPlatformSpecificResourceFilePaths function");
	}
	osgDB::FilePathList & filepath=*filepath_ptr;

	appendPlatformSpecificResourceFilePaths(filepath);

	return 0;
}

// void osgDB::split(const std::string & src, osgDB::StringList & list, char separator = ' ')
static int _bind_split(lua_State *L) {
	if (!_lg_typecheck_split(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osgDB::split(const std::string & src, osgDB::StringList & list, char separator = ' ') function, expected prototype:\nvoid osgDB::split(const std::string & src, osgDB::StringList & list, char separator = ' ')\nClass arguments details:\narg 2 ID = 52401783\n");
	}

	int luatop = lua_gettop(L);

	std::string src(lua_tostring(L,1),lua_objlen(L,1));
	osgDB::StringList* list_ptr=(Luna< osgDB::StringList >::check(L,2));
	if( !list_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg list in osgDB::split function");
	}
	osgDB::StringList & list=*list_ptr;
	char separator=luatop>2 ? (char)lua_tointeger(L,3) : ' ';

	split(src, list, separator);

	return 0;
}

// osgDB::FileNameList osgDB::listAllAvailablePlugins()
static int _bind_listAllAvailablePlugins(lua_State *L) {
	if (!_lg_typecheck_listAllAvailablePlugins(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osgDB::FileNameList osgDB::listAllAvailablePlugins() function, expected prototype:\nosgDB::FileNameList osgDB::listAllAvailablePlugins()\nClass arguments details:\n");
	}


	osgDB::FileNameList stack_lret = listAllAvailablePlugins();
	osgDB::FileNameList* lret = new osgDB::FileNameList(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osgDB::FileNameList >::push(L,lret,true);

	return 1;
}

// bool osgDB::queryPlugin(const std::string & fileName, osgDB::ReaderWriterInfoList & infoList)
static int _bind_queryPlugin(lua_State *L) {
	if (!_lg_typecheck_queryPlugin(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osgDB::queryPlugin(const std::string & fileName, osgDB::ReaderWriterInfoList & infoList) function, expected prototype:\nbool osgDB::queryPlugin(const std::string & fileName, osgDB::ReaderWriterInfoList & infoList)\nClass arguments details:\narg 2 ID = 75164642\n");
	}

	std::string fileName(lua_tostring(L,1),lua_objlen(L,1));
	osgDB::ReaderWriterInfoList* infoList_ptr=(Luna< osgDB::ReaderWriterInfoList >::check(L,2));
	if( !infoList_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg infoList in osgDB::queryPlugin function");
	}
	osgDB::ReaderWriterInfoList & infoList=*infoList_ptr;

	bool lret = queryPlugin(fileName, infoList);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// osg::Object * osgDB::readObjectFile(const std::string & filename, const osgDB::Options * options)
static int _bind_readObjectFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_readObjectFile_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Object * osgDB::readObjectFile(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosg::Object * osgDB::readObjectFile(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::Options* options=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,2));

	osg::Object * lret = readObjectFile(filename, options);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Object >::push(L,lret,false);

	return 1;
}

// osg::Object * osgDB::readObjectFile(const std::string & filename)
static int _bind_readObjectFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_readObjectFile_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Object * osgDB::readObjectFile(const std::string & filename) function, expected prototype:\nosg::Object * osgDB::readObjectFile(const std::string & filename)\nClass arguments details:\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	osg::Object * lret = readObjectFile(filename);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Object >::push(L,lret,false);

	return 1;
}

// Overload binder for osgDB::readObjectFile
static int _bind_readObjectFile(lua_State *L) {
	if (_lg_typecheck_readObjectFile_overload_1(L)) return _bind_readObjectFile_overload_1(L);
	if (_lg_typecheck_readObjectFile_overload_2(L)) return _bind_readObjectFile_overload_2(L);

	luaL_error(L, "error in function readObjectFile, cannot match any of the overloads for function readObjectFile:\n  readObjectFile(const std::string &, const osgDB::Options *)\n  readObjectFile(const std::string &)\n");
	return 0;
}

// osg::Image * osgDB::readImageFile(const std::string & filename, const osgDB::Options * options)
static int _bind_readImageFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_readImageFile_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Image * osgDB::readImageFile(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosg::Image * osgDB::readImageFile(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::Options* options=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,2));

	osg::Image * lret = readImageFile(filename, options);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Image >::push(L,lret,false);

	return 1;
}

// osg::Image * osgDB::readImageFile(const std::string & filename)
static int _bind_readImageFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_readImageFile_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Image * osgDB::readImageFile(const std::string & filename) function, expected prototype:\nosg::Image * osgDB::readImageFile(const std::string & filename)\nClass arguments details:\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	osg::Image * lret = readImageFile(filename);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Image >::push(L,lret,false);

	return 1;
}

// Overload binder for osgDB::readImageFile
static int _bind_readImageFile(lua_State *L) {
	if (_lg_typecheck_readImageFile_overload_1(L)) return _bind_readImageFile_overload_1(L);
	if (_lg_typecheck_readImageFile_overload_2(L)) return _bind_readImageFile_overload_2(L);

	luaL_error(L, "error in function readImageFile, cannot match any of the overloads for function readImageFile:\n  readImageFile(const std::string &, const osgDB::Options *)\n  readImageFile(const std::string &)\n");
	return 0;
}

// osg::HeightField * osgDB::readHeightFieldFile(const std::string & filename, const osgDB::Options * options)
static int _bind_readHeightFieldFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_readHeightFieldFile_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::HeightField * osgDB::readHeightFieldFile(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosg::HeightField * osgDB::readHeightFieldFile(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::Options* options=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,2));

	osg::HeightField * lret = readHeightFieldFile(filename, options);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::HeightField >::push(L,lret,false);

	return 1;
}

// osg::HeightField * osgDB::readHeightFieldFile(const std::string & filename)
static int _bind_readHeightFieldFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_readHeightFieldFile_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::HeightField * osgDB::readHeightFieldFile(const std::string & filename) function, expected prototype:\nosg::HeightField * osgDB::readHeightFieldFile(const std::string & filename)\nClass arguments details:\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	osg::HeightField * lret = readHeightFieldFile(filename);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::HeightField >::push(L,lret,false);

	return 1;
}

// Overload binder for osgDB::readHeightFieldFile
static int _bind_readHeightFieldFile(lua_State *L) {
	if (_lg_typecheck_readHeightFieldFile_overload_1(L)) return _bind_readHeightFieldFile_overload_1(L);
	if (_lg_typecheck_readHeightFieldFile_overload_2(L)) return _bind_readHeightFieldFile_overload_2(L);

	luaL_error(L, "error in function readHeightFieldFile, cannot match any of the overloads for function readHeightFieldFile:\n  readHeightFieldFile(const std::string &, const osgDB::Options *)\n  readHeightFieldFile(const std::string &)\n");
	return 0;
}

// osg::Node * osgDB::readNodeFile(const std::string & filename, const osgDB::Options * options)
static int _bind_readNodeFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_readNodeFile_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Node * osgDB::readNodeFile(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosg::Node * osgDB::readNodeFile(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::Options* options=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,2));

	osg::Node * lret = readNodeFile(filename, options);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Node >::push(L,lret,false);

	return 1;
}

// osg::Node * osgDB::readNodeFile(const std::string & filename)
static int _bind_readNodeFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_readNodeFile_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Node * osgDB::readNodeFile(const std::string & filename) function, expected prototype:\nosg::Node * osgDB::readNodeFile(const std::string & filename)\nClass arguments details:\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	osg::Node * lret = readNodeFile(filename);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Node >::push(L,lret,false);

	return 1;
}

// Overload binder for osgDB::readNodeFile
static int _bind_readNodeFile(lua_State *L) {
	if (_lg_typecheck_readNodeFile_overload_1(L)) return _bind_readNodeFile_overload_1(L);
	if (_lg_typecheck_readNodeFile_overload_2(L)) return _bind_readNodeFile_overload_2(L);

	luaL_error(L, "error in function readNodeFile, cannot match any of the overloads for function readNodeFile:\n  readNodeFile(const std::string &, const osgDB::Options *)\n  readNodeFile(const std::string &)\n");
	return 0;
}

// osg::Shader * osgDB::readShaderFile(const std::string & filename, const osgDB::Options * options)
static int _bind_readShaderFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_readShaderFile_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Shader * osgDB::readShaderFile(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosg::Shader * osgDB::readShaderFile(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::Options* options=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,2));

	osg::Shader * lret = readShaderFile(filename, options);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Shader >::push(L,lret,false);

	return 1;
}

// osg::Shader * osgDB::readShaderFile(const std::string & filename)
static int _bind_readShaderFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_readShaderFile_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Shader * osgDB::readShaderFile(const std::string & filename) function, expected prototype:\nosg::Shader * osgDB::readShaderFile(const std::string & filename)\nClass arguments details:\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	osg::Shader * lret = readShaderFile(filename);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Shader >::push(L,lret,false);

	return 1;
}

// osg::Shader * osgDB::readShaderFile(osg::Shader::Type type, const std::string & filename, const osgDB::Options * options)
static int _bind_readShaderFile_overload_3(lua_State *L) {
	if (!_lg_typecheck_readShaderFile_overload_3(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Shader * osgDB::readShaderFile(osg::Shader::Type type, const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosg::Shader * osgDB::readShaderFile(osg::Shader::Type type, const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 3 ID = 50169651\n");
	}

	osg::Shader::Type type=(osg::Shader::Type)lua_tointeger(L,1);
	std::string filename(lua_tostring(L,2),lua_objlen(L,2));
	const osgDB::Options* options=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,3));

	osg::Shader * lret = readShaderFile(type, filename, options);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Shader >::push(L,lret,false);

	return 1;
}

// osg::Shader * osgDB::readShaderFile(osg::Shader::Type type, const std::string & filename)
static int _bind_readShaderFile_overload_4(lua_State *L) {
	if (!_lg_typecheck_readShaderFile_overload_4(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Shader * osgDB::readShaderFile(osg::Shader::Type type, const std::string & filename) function, expected prototype:\nosg::Shader * osgDB::readShaderFile(osg::Shader::Type type, const std::string & filename)\nClass arguments details:\n");
	}

	osg::Shader::Type type=(osg::Shader::Type)lua_tointeger(L,1);
	std::string filename(lua_tostring(L,2),lua_objlen(L,2));

	osg::Shader * lret = readShaderFile(type, filename);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Shader >::push(L,lret,false);

	return 1;
}

// Overload binder for osgDB::readShaderFile
static int _bind_readShaderFile(lua_State *L) {
	if (_lg_typecheck_readShaderFile_overload_1(L)) return _bind_readShaderFile_overload_1(L);
	if (_lg_typecheck_readShaderFile_overload_2(L)) return _bind_readShaderFile_overload_2(L);
	if (_lg_typecheck_readShaderFile_overload_3(L)) return _bind_readShaderFile_overload_3(L);
	if (_lg_typecheck_readShaderFile_overload_4(L)) return _bind_readShaderFile_overload_4(L);

	luaL_error(L, "error in function readShaderFile, cannot match any of the overloads for function readShaderFile:\n  readShaderFile(const std::string &, const osgDB::Options *)\n  readShaderFile(const std::string &)\n  readShaderFile(osg::Shader::Type, const std::string &, const osgDB::Options *)\n  readShaderFile(osg::Shader::Type, const std::string &)\n");
	return 0;
}

// osg::ref_ptr< osg::Object > osgDB::readRefObjectFile(const std::string & filename, const osgDB::Options * options)
static int _bind_readRefObjectFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_readRefObjectFile_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Object > osgDB::readRefObjectFile(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosg::ref_ptr< osg::Object > osgDB::readRefObjectFile(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::Options* options=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,2));

	osg::ref_ptr< osg::Object > lret = readRefObjectFile(filename, options);
	Luna< osg::Object >::push(L,lret.get(),false);

	return 1;
}

// osg::ref_ptr< osg::Object > osgDB::readRefObjectFile(const std::string & filename)
static int _bind_readRefObjectFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_readRefObjectFile_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Object > osgDB::readRefObjectFile(const std::string & filename) function, expected prototype:\nosg::ref_ptr< osg::Object > osgDB::readRefObjectFile(const std::string & filename)\nClass arguments details:\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	osg::ref_ptr< osg::Object > lret = readRefObjectFile(filename);
	Luna< osg::Object >::push(L,lret.get(),false);

	return 1;
}

// Overload binder for osgDB::readRefObjectFile
static int _bind_readRefObjectFile(lua_State *L) {
	if (_lg_typecheck_readRefObjectFile_overload_1(L)) return _bind_readRefObjectFile_overload_1(L);
	if (_lg_typecheck_readRefObjectFile_overload_2(L)) return _bind_readRefObjectFile_overload_2(L);

	luaL_error(L, "error in function readRefObjectFile, cannot match any of the overloads for function readRefObjectFile:\n  readRefObjectFile(const std::string &, const osgDB::Options *)\n  readRefObjectFile(const std::string &)\n");
	return 0;
}

// osg::ref_ptr< osg::Image > osgDB::readRefImageFile(const std::string & filename, const osgDB::Options * options)
static int _bind_readRefImageFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_readRefImageFile_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Image > osgDB::readRefImageFile(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosg::ref_ptr< osg::Image > osgDB::readRefImageFile(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::Options* options=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,2));

	osg::ref_ptr< osg::Image > lret = readRefImageFile(filename, options);
	Luna< osg::Image >::push(L,lret.get(),false);

	return 1;
}

// osg::ref_ptr< osg::Image > osgDB::readRefImageFile(const std::string & filename)
static int _bind_readRefImageFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_readRefImageFile_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Image > osgDB::readRefImageFile(const std::string & filename) function, expected prototype:\nosg::ref_ptr< osg::Image > osgDB::readRefImageFile(const std::string & filename)\nClass arguments details:\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	osg::ref_ptr< osg::Image > lret = readRefImageFile(filename);
	Luna< osg::Image >::push(L,lret.get(),false);

	return 1;
}

// Overload binder for osgDB::readRefImageFile
static int _bind_readRefImageFile(lua_State *L) {
	if (_lg_typecheck_readRefImageFile_overload_1(L)) return _bind_readRefImageFile_overload_1(L);
	if (_lg_typecheck_readRefImageFile_overload_2(L)) return _bind_readRefImageFile_overload_2(L);

	luaL_error(L, "error in function readRefImageFile, cannot match any of the overloads for function readRefImageFile:\n  readRefImageFile(const std::string &, const osgDB::Options *)\n  readRefImageFile(const std::string &)\n");
	return 0;
}

// osg::ref_ptr< osg::HeightField > osgDB::readRefHeightFieldFile(const std::string & filename, const osgDB::Options * options)
static int _bind_readRefHeightFieldFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_readRefHeightFieldFile_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::HeightField > osgDB::readRefHeightFieldFile(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosg::ref_ptr< osg::HeightField > osgDB::readRefHeightFieldFile(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::Options* options=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,2));

	osg::ref_ptr< osg::HeightField > lret = readRefHeightFieldFile(filename, options);
	Luna< osg::HeightField >::push(L,lret.get(),false);

	return 1;
}

// osg::ref_ptr< osg::HeightField > osgDB::readRefHeightFieldFile(const std::string & filename)
static int _bind_readRefHeightFieldFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_readRefHeightFieldFile_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::HeightField > osgDB::readRefHeightFieldFile(const std::string & filename) function, expected prototype:\nosg::ref_ptr< osg::HeightField > osgDB::readRefHeightFieldFile(const std::string & filename)\nClass arguments details:\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	osg::ref_ptr< osg::HeightField > lret = readRefHeightFieldFile(filename);
	Luna< osg::HeightField >::push(L,lret.get(),false);

	return 1;
}

// Overload binder for osgDB::readRefHeightFieldFile
static int _bind_readRefHeightFieldFile(lua_State *L) {
	if (_lg_typecheck_readRefHeightFieldFile_overload_1(L)) return _bind_readRefHeightFieldFile_overload_1(L);
	if (_lg_typecheck_readRefHeightFieldFile_overload_2(L)) return _bind_readRefHeightFieldFile_overload_2(L);

	luaL_error(L, "error in function readRefHeightFieldFile, cannot match any of the overloads for function readRefHeightFieldFile:\n  readRefHeightFieldFile(const std::string &, const osgDB::Options *)\n  readRefHeightFieldFile(const std::string &)\n");
	return 0;
}

// osg::ref_ptr< osg::Node > osgDB::readRefNodeFile(const std::string & filename, const osgDB::Options * options)
static int _bind_readRefNodeFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_readRefNodeFile_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Node > osgDB::readRefNodeFile(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosg::ref_ptr< osg::Node > osgDB::readRefNodeFile(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::Options* options=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,2));

	osg::ref_ptr< osg::Node > lret = readRefNodeFile(filename, options);
	Luna< osg::Node >::push(L,lret.get(),false);

	return 1;
}

// osg::ref_ptr< osg::Node > osgDB::readRefNodeFile(const std::string & filename)
static int _bind_readRefNodeFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_readRefNodeFile_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Node > osgDB::readRefNodeFile(const std::string & filename) function, expected prototype:\nosg::ref_ptr< osg::Node > osgDB::readRefNodeFile(const std::string & filename)\nClass arguments details:\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	osg::ref_ptr< osg::Node > lret = readRefNodeFile(filename);
	Luna< osg::Node >::push(L,lret.get(),false);

	return 1;
}

// Overload binder for osgDB::readRefNodeFile
static int _bind_readRefNodeFile(lua_State *L) {
	if (_lg_typecheck_readRefNodeFile_overload_1(L)) return _bind_readRefNodeFile_overload_1(L);
	if (_lg_typecheck_readRefNodeFile_overload_2(L)) return _bind_readRefNodeFile_overload_2(L);

	luaL_error(L, "error in function readRefNodeFile, cannot match any of the overloads for function readRefNodeFile:\n  readRefNodeFile(const std::string &, const osgDB::Options *)\n  readRefNodeFile(const std::string &)\n");
	return 0;
}

// osg::ref_ptr< osg::Shader > osgDB::readRefShaderFile(const std::string & filename, const osgDB::Options * options)
static int _bind_readRefShaderFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_readRefShaderFile_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Shader > osgDB::readRefShaderFile(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosg::ref_ptr< osg::Shader > osgDB::readRefShaderFile(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::Options* options=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,2));

	osg::ref_ptr< osg::Shader > lret = readRefShaderFile(filename, options);
	Luna< osg::Shader >::push(L,lret.get(),false);

	return 1;
}

// osg::ref_ptr< osg::Shader > osgDB::readRefShaderFile(const std::string & filename)
static int _bind_readRefShaderFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_readRefShaderFile_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Shader > osgDB::readRefShaderFile(const std::string & filename) function, expected prototype:\nosg::ref_ptr< osg::Shader > osgDB::readRefShaderFile(const std::string & filename)\nClass arguments details:\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	osg::ref_ptr< osg::Shader > lret = readRefShaderFile(filename);
	Luna< osg::Shader >::push(L,lret.get(),false);

	return 1;
}

// Overload binder for osgDB::readRefShaderFile
static int _bind_readRefShaderFile(lua_State *L) {
	if (_lg_typecheck_readRefShaderFile_overload_1(L)) return _bind_readRefShaderFile_overload_1(L);
	if (_lg_typecheck_readRefShaderFile_overload_2(L)) return _bind_readRefShaderFile_overload_2(L);

	luaL_error(L, "error in function readRefShaderFile, cannot match any of the overloads for function readRefShaderFile:\n  readRefShaderFile(const std::string &, const osgDB::Options *)\n  readRefShaderFile(const std::string &)\n");
	return 0;
}

// void osgDB::readCommandLine(osg::ArgumentParser & parser)
static int _bind_readCommandLine(lua_State *L) {
	if (!_lg_typecheck_readCommandLine(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osgDB::readCommandLine(osg::ArgumentParser & parser) function, expected prototype:\nvoid osgDB::readCommandLine(osg::ArgumentParser & parser)\nClass arguments details:\narg 1 ID = 99527028\n");
	}

	osg::ArgumentParser* parser_ptr=(Luna< osg::ArgumentParser >::check(L,1));
	if( !parser_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg parser in osgDB::readCommandLine function");
	}
	osg::ArgumentParser & parser=*parser_ptr;

	readCommandLine(parser);

	return 0;
}

// bool osgDB::writeObjectFile(const osg::Object & object, const std::string & filename, const osgDB::Options * options)
static int _bind_writeObjectFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_writeObjectFile_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osgDB::writeObjectFile(const osg::Object & object, const std::string & filename, const osgDB::Options * options) function, expected prototype:\nbool osgDB::writeObjectFile(const osg::Object & object, const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n");
	}

	const osg::Object* object_ptr=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,1));
	if( !object_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg object in osgDB::writeObjectFile function");
	}
	const osg::Object & object=*object_ptr;
	std::string filename(lua_tostring(L,2),lua_objlen(L,2));
	const osgDB::Options* options=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,3));

	bool lret = writeObjectFile(object, filename, options);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool osgDB::writeObjectFile(const osg::Object & object, const std::string & filename)
static int _bind_writeObjectFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_writeObjectFile_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osgDB::writeObjectFile(const osg::Object & object, const std::string & filename) function, expected prototype:\nbool osgDB::writeObjectFile(const osg::Object & object, const std::string & filename)\nClass arguments details:\narg 1 ID = 50169651\n");
	}

	const osg::Object* object_ptr=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,1));
	if( !object_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg object in osgDB::writeObjectFile function");
	}
	const osg::Object & object=*object_ptr;
	std::string filename(lua_tostring(L,2),lua_objlen(L,2));

	bool lret = writeObjectFile(object, filename);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// Overload binder for osgDB::writeObjectFile
static int _bind_writeObjectFile(lua_State *L) {
	if (_lg_typecheck_writeObjectFile_overload_1(L)) return _bind_writeObjectFile_overload_1(L);
	if (_lg_typecheck_writeObjectFile_overload_2(L)) return _bind_writeObjectFile_overload_2(L);

	luaL_error(L, "error in function writeObjectFile, cannot match any of the overloads for function writeObjectFile:\n  writeObjectFile(const osg::Object &, const std::string &, const osgDB::Options *)\n  writeObjectFile(const osg::Object &, const std::string &)\n");
	return 0;
}

// bool osgDB::writeImageFile(const osg::Image & image, const std::string & filename, const osgDB::Options * options)
static int _bind_writeImageFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_writeImageFile_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osgDB::writeImageFile(const osg::Image & image, const std::string & filename, const osgDB::Options * options) function, expected prototype:\nbool osgDB::writeImageFile(const osg::Image & image, const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n");
	}

	const osg::Image* image_ptr=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,1));
	if( !image_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg image in osgDB::writeImageFile function");
	}
	const osg::Image & image=*image_ptr;
	std::string filename(lua_tostring(L,2),lua_objlen(L,2));
	const osgDB::Options* options=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,3));

	bool lret = writeImageFile(image, filename, options);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool osgDB::writeImageFile(const osg::Image & image, const std::string & filename)
static int _bind_writeImageFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_writeImageFile_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osgDB::writeImageFile(const osg::Image & image, const std::string & filename) function, expected prototype:\nbool osgDB::writeImageFile(const osg::Image & image, const std::string & filename)\nClass arguments details:\narg 1 ID = 50169651\n");
	}

	const osg::Image* image_ptr=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,1));
	if( !image_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg image in osgDB::writeImageFile function");
	}
	const osg::Image & image=*image_ptr;
	std::string filename(lua_tostring(L,2),lua_objlen(L,2));

	bool lret = writeImageFile(image, filename);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// Overload binder for osgDB::writeImageFile
static int _bind_writeImageFile(lua_State *L) {
	if (_lg_typecheck_writeImageFile_overload_1(L)) return _bind_writeImageFile_overload_1(L);
	if (_lg_typecheck_writeImageFile_overload_2(L)) return _bind_writeImageFile_overload_2(L);

	luaL_error(L, "error in function writeImageFile, cannot match any of the overloads for function writeImageFile:\n  writeImageFile(const osg::Image &, const std::string &, const osgDB::Options *)\n  writeImageFile(const osg::Image &, const std::string &)\n");
	return 0;
}

// bool osgDB::writeHeightFieldFile(const osg::HeightField & hf, const std::string & filename, const osgDB::Options * options)
static int _bind_writeHeightFieldFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_writeHeightFieldFile_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osgDB::writeHeightFieldFile(const osg::HeightField & hf, const std::string & filename, const osgDB::Options * options) function, expected prototype:\nbool osgDB::writeHeightFieldFile(const osg::HeightField & hf, const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n");
	}

	const osg::HeightField* hf_ptr=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
	if( !hf_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg hf in osgDB::writeHeightFieldFile function");
	}
	const osg::HeightField & hf=*hf_ptr;
	std::string filename(lua_tostring(L,2),lua_objlen(L,2));
	const osgDB::Options* options=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,3));

	bool lret = writeHeightFieldFile(hf, filename, options);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool osgDB::writeHeightFieldFile(const osg::HeightField & hf, const std::string & filename)
static int _bind_writeHeightFieldFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_writeHeightFieldFile_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osgDB::writeHeightFieldFile(const osg::HeightField & hf, const std::string & filename) function, expected prototype:\nbool osgDB::writeHeightFieldFile(const osg::HeightField & hf, const std::string & filename)\nClass arguments details:\narg 1 ID = 50169651\n");
	}

	const osg::HeightField* hf_ptr=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
	if( !hf_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg hf in osgDB::writeHeightFieldFile function");
	}
	const osg::HeightField & hf=*hf_ptr;
	std::string filename(lua_tostring(L,2),lua_objlen(L,2));

	bool lret = writeHeightFieldFile(hf, filename);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// Overload binder for osgDB::writeHeightFieldFile
static int _bind_writeHeightFieldFile(lua_State *L) {
	if (_lg_typecheck_writeHeightFieldFile_overload_1(L)) return _bind_writeHeightFieldFile_overload_1(L);
	if (_lg_typecheck_writeHeightFieldFile_overload_2(L)) return _bind_writeHeightFieldFile_overload_2(L);

	luaL_error(L, "error in function writeHeightFieldFile, cannot match any of the overloads for function writeHeightFieldFile:\n  writeHeightFieldFile(const osg::HeightField &, const std::string &, const osgDB::Options *)\n  writeHeightFieldFile(const osg::HeightField &, const std::string &)\n");
	return 0;
}

// bool osgDB::writeNodeFile(const osg::Node & node, const std::string & filename, const osgDB::Options * options)
static int _bind_writeNodeFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_writeNodeFile_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osgDB::writeNodeFile(const osg::Node & node, const std::string & filename, const osgDB::Options * options) function, expected prototype:\nbool osgDB::writeNodeFile(const osg::Node & node, const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n");
	}

	const osg::Node* node_ptr=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,1));
	if( !node_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg node in osgDB::writeNodeFile function");
	}
	const osg::Node & node=*node_ptr;
	std::string filename(lua_tostring(L,2),lua_objlen(L,2));
	const osgDB::Options* options=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,3));

	bool lret = writeNodeFile(node, filename, options);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool osgDB::writeNodeFile(const osg::Node & node, const std::string & filename)
static int _bind_writeNodeFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_writeNodeFile_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osgDB::writeNodeFile(const osg::Node & node, const std::string & filename) function, expected prototype:\nbool osgDB::writeNodeFile(const osg::Node & node, const std::string & filename)\nClass arguments details:\narg 1 ID = 50169651\n");
	}

	const osg::Node* node_ptr=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,1));
	if( !node_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg node in osgDB::writeNodeFile function");
	}
	const osg::Node & node=*node_ptr;
	std::string filename(lua_tostring(L,2),lua_objlen(L,2));

	bool lret = writeNodeFile(node, filename);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// Overload binder for osgDB::writeNodeFile
static int _bind_writeNodeFile(lua_State *L) {
	if (_lg_typecheck_writeNodeFile_overload_1(L)) return _bind_writeNodeFile_overload_1(L);
	if (_lg_typecheck_writeNodeFile_overload_2(L)) return _bind_writeNodeFile_overload_2(L);

	luaL_error(L, "error in function writeNodeFile, cannot match any of the overloads for function writeNodeFile:\n  writeNodeFile(const osg::Node &, const std::string &, const osgDB::Options *)\n  writeNodeFile(const osg::Node &, const std::string &)\n");
	return 0;
}

// bool osgDB::writeShaderFile(const osg::Shader & shader, const std::string & filename, const osgDB::Options * options)
static int _bind_writeShaderFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_writeShaderFile_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osgDB::writeShaderFile(const osg::Shader & shader, const std::string & filename, const osgDB::Options * options) function, expected prototype:\nbool osgDB::writeShaderFile(const osg::Shader & shader, const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n");
	}

	const osg::Shader* shader_ptr=dynamic_cast< osg::Shader* >(Luna< osg::Referenced >::check(L,1));
	if( !shader_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg shader in osgDB::writeShaderFile function");
	}
	const osg::Shader & shader=*shader_ptr;
	std::string filename(lua_tostring(L,2),lua_objlen(L,2));
	const osgDB::Options* options=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,3));

	bool lret = writeShaderFile(shader, filename, options);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool osgDB::writeShaderFile(const osg::Shader & shader, const std::string & filename)
static int _bind_writeShaderFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_writeShaderFile_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osgDB::writeShaderFile(const osg::Shader & shader, const std::string & filename) function, expected prototype:\nbool osgDB::writeShaderFile(const osg::Shader & shader, const std::string & filename)\nClass arguments details:\narg 1 ID = 50169651\n");
	}

	const osg::Shader* shader_ptr=dynamic_cast< osg::Shader* >(Luna< osg::Referenced >::check(L,1));
	if( !shader_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg shader in osgDB::writeShaderFile function");
	}
	const osg::Shader & shader=*shader_ptr;
	std::string filename(lua_tostring(L,2),lua_objlen(L,2));

	bool lret = writeShaderFile(shader, filename);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// Overload binder for osgDB::writeShaderFile
static int _bind_writeShaderFile(lua_State *L) {
	if (_lg_typecheck_writeShaderFile_overload_1(L)) return _bind_writeShaderFile_overload_1(L);
	if (_lg_typecheck_writeShaderFile_overload_2(L)) return _bind_writeShaderFile_overload_2(L);

	luaL_error(L, "error in function writeShaderFile, cannot match any of the overloads for function writeShaderFile:\n  writeShaderFile(const osg::Shader &, const std::string &, const osgDB::Options *)\n  writeShaderFile(const osg::Shader &, const std::string &)\n");
	return 0;
}

// osgDB::XmlNode * osgDB::readXmlFile(const std::string & filename, const osgDB::Options * options)
static int _bind_readXmlFile_overload_1(lua_State *L) {
	if (!_lg_typecheck_readXmlFile_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osgDB::XmlNode * osgDB::readXmlFile(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosgDB::XmlNode * osgDB::readXmlFile(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::Options* options=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,2));

	osgDB::XmlNode * lret = readXmlFile(filename, options);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osgDB::XmlNode >::push(L,lret,false);

	return 1;
}

// osgDB::XmlNode * osgDB::readXmlFile(const std::string & filename)
static int _bind_readXmlFile_overload_2(lua_State *L) {
	if (!_lg_typecheck_readXmlFile_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osgDB::XmlNode * osgDB::readXmlFile(const std::string & filename) function, expected prototype:\nosgDB::XmlNode * osgDB::readXmlFile(const std::string & filename)\nClass arguments details:\n");
	}

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));

	osgDB::XmlNode * lret = readXmlFile(filename);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osgDB::XmlNode >::push(L,lret,false);

	return 1;
}

// Overload binder for osgDB::readXmlFile
static int _bind_readXmlFile(lua_State *L) {
	if (_lg_typecheck_readXmlFile_overload_1(L)) return _bind_readXmlFile_overload_1(L);
	if (_lg_typecheck_readXmlFile_overload_2(L)) return _bind_readXmlFile_overload_2(L);

	luaL_error(L, "error in function readXmlFile, cannot match any of the overloads for function readXmlFile:\n  readXmlFile(const std::string &, const osgDB::Options *)\n  readXmlFile(const std::string &)\n");
	return 0;
}

// std::string osgDB::trimEnclosingSpaces(const std::string & str)
static int _bind_trimEnclosingSpaces(lua_State *L) {
	if (!_lg_typecheck_trimEnclosingSpaces(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgDB::trimEnclosingSpaces(const std::string & str) function, expected prototype:\nstd::string osgDB::trimEnclosingSpaces(const std::string & str)\nClass arguments details:\n");
	}

	std::string str(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = trimEnclosingSpaces(str);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}


// Function checkers:

// Function binds:

#ifdef __cplusplus
extern "C" {
#endif

void register_global_functions(lua_State* L) {
	lua_pushcfunction(L, _bind_osgDBGetVersion); lua_setfield(L,-2,"osgDBGetVersion");
	lua_pushcfunction(L, _bind_osgDBGetLibraryName); lua_setfield(L,-2,"osgDBGetLibraryName");
	lua_pushcfunction(L, _bind_openArchive); lua_setfield(L,-2,"openArchive");
	lua_pushcfunction(L, _bind_convertStringFromCurrentCodePageToUTF8); lua_setfield(L,-2,"convertStringFromCurrentCodePageToUTF8");
	lua_pushcfunction(L, _bind_convertStringFromUTF8toCurrentCodePage); lua_setfield(L,-2,"convertStringFromUTF8toCurrentCodePage");
	lua_pushcfunction(L, _bind_getFilePath); lua_setfield(L,-2,"getFilePath");
	lua_pushcfunction(L, _bind_getFileExtension); lua_setfield(L,-2,"getFileExtension");
	lua_pushcfunction(L, _bind_getFileExtensionIncludingDot); lua_setfield(L,-2,"getFileExtensionIncludingDot");
	lua_pushcfunction(L, _bind_getLowerCaseFileExtension); lua_setfield(L,-2,"getLowerCaseFileExtension");
	lua_pushcfunction(L, _bind_getSimpleFileName); lua_setfield(L,-2,"getSimpleFileName");
	lua_pushcfunction(L, _bind_getNameLessExtension); lua_setfield(L,-2,"getNameLessExtension");
	lua_pushcfunction(L, _bind_getNameLessAllExtensions); lua_setfield(L,-2,"getNameLessAllExtensions");
	lua_pushcfunction(L, _bind_getStrippedName); lua_setfield(L,-2,"getStrippedName");
	lua_pushcfunction(L, _bind_getPathRelative); lua_setfield(L,-2,"getPathRelative");
	lua_pushcfunction(L, _bind_getPathRoot); lua_setfield(L,-2,"getPathRoot");
	lua_pushcfunction(L, _bind_isAbsolutePath); lua_setfield(L,-2,"isAbsolutePath");
	lua_pushcfunction(L, _bind_convertFileNameToWindowsStyle); lua_setfield(L,-2,"convertFileNameToWindowsStyle");
	lua_pushcfunction(L, _bind_convertFileNameToUnixStyle); lua_setfield(L,-2,"convertFileNameToUnixStyle");
	lua_pushcfunction(L, _bind_convertToLowerCase); lua_setfield(L,-2,"convertToLowerCase");
	lua_pushcfunction(L, _bind_getNativePathSeparator); lua_setfield(L,-2,"getNativePathSeparator");
	lua_pushcfunction(L, _bind_isFileNameNativeStyle); lua_setfield(L,-2,"isFileNameNativeStyle");
	lua_pushcfunction(L, _bind_convertFileNameToNativeStyle); lua_setfield(L,-2,"convertFileNameToNativeStyle");
	lua_pushcfunction(L, _bind_equalCaseInsensitive); lua_setfield(L,-2,"equalCaseInsensitive");
	lua_pushcfunction(L, _bind_containsServerAddress); lua_setfield(L,-2,"containsServerAddress");
	lua_pushcfunction(L, _bind_getServerProtocol); lua_setfield(L,-2,"getServerProtocol");
	lua_pushcfunction(L, _bind_getServerAddress); lua_setfield(L,-2,"getServerAddress");
	lua_pushcfunction(L, _bind_getServerFileName); lua_setfield(L,-2,"getServerFileName");
	lua_pushcfunction(L, _bind_concatPaths); lua_setfield(L,-2,"concatPaths");
	lua_pushcfunction(L, _bind_getRealPath); lua_setfield(L,-2,"getRealPath");
	lua_pushcfunction(L, _bind_makeDirectory); lua_setfield(L,-2,"makeDirectory");
	lua_pushcfunction(L, _bind_makeDirectoryForFile); lua_setfield(L,-2,"makeDirectoryForFile");
	lua_pushcfunction(L, _bind_getCurrentWorkingDirectory); lua_setfield(L,-2,"getCurrentWorkingDirectory");
	lua_pushcfunction(L, _bind_setCurrentWorkingDirectory); lua_setfield(L,-2,"setCurrentWorkingDirectory");
	lua_pushcfunction(L, _bind_fileExists); lua_setfield(L,-2,"fileExists");
	lua_pushcfunction(L, _bind_fileType); lua_setfield(L,-2,"fileType");
	lua_pushcfunction(L, _bind_findFileInPath); lua_setfield(L,-2,"findFileInPath");
	lua_pushcfunction(L, _bind_findFileInDirectory); lua_setfield(L,-2,"findFileInDirectory");
	lua_pushcfunction(L, _bind_getDirectoryContents); lua_setfield(L,-2,"getDirectoryContents");
	lua_pushcfunction(L, _bind_expandWildcardsInFilename); lua_setfield(L,-2,"expandWildcardsInFilename");
	lua_pushcfunction(L, _bind_copyFile); lua_setfield(L,-2,"copyFile");
	lua_pushcfunction(L, _bind_setDataFilePathList); lua_setfield(L,-2,"setDataFilePathList");
	lua_pushcfunction(L, _bind_getDataFilePathList); lua_setfield(L,-2,"getDataFilePathList");
	lua_pushcfunction(L, _bind_findDataFile); lua_setfield(L,-2,"findDataFile");
	lua_pushcfunction(L, _bind_setLibraryFilePathList); lua_setfield(L,-2,"setLibraryFilePathList");
	lua_pushcfunction(L, _bind_getLibraryFilePathList); lua_setfield(L,-2,"getLibraryFilePathList");
	lua_pushcfunction(L, _bind_findLibraryFile); lua_setfield(L,-2,"findLibraryFile");
	lua_pushcfunction(L, _bind_convertStringPathIntoFilePathList); lua_setfield(L,-2,"convertStringPathIntoFilePathList");
	lua_pushcfunction(L, _bind_appendPlatformSpecificLibraryFilePaths); lua_setfield(L,-2,"appendPlatformSpecificLibraryFilePaths");
	lua_pushcfunction(L, _bind_appendPlatformSpecificResourceFilePaths); lua_setfield(L,-2,"appendPlatformSpecificResourceFilePaths");
	lua_pushcfunction(L, _bind_split); lua_setfield(L,-2,"split");
	lua_pushcfunction(L, _bind_listAllAvailablePlugins); lua_setfield(L,-2,"listAllAvailablePlugins");
	lua_pushcfunction(L, _bind_queryPlugin); lua_setfield(L,-2,"queryPlugin");
	lua_pushcfunction(L, _bind_readObjectFile); lua_setfield(L,-2,"readObjectFile");
	lua_pushcfunction(L, _bind_readImageFile); lua_setfield(L,-2,"readImageFile");
	lua_pushcfunction(L, _bind_readHeightFieldFile); lua_setfield(L,-2,"readHeightFieldFile");
	lua_pushcfunction(L, _bind_readNodeFile); lua_setfield(L,-2,"readNodeFile");
	lua_pushcfunction(L, _bind_readShaderFile); lua_setfield(L,-2,"readShaderFile");
	lua_pushcfunction(L, _bind_readRefObjectFile); lua_setfield(L,-2,"readRefObjectFile");
	lua_pushcfunction(L, _bind_readRefImageFile); lua_setfield(L,-2,"readRefImageFile");
	lua_pushcfunction(L, _bind_readRefHeightFieldFile); lua_setfield(L,-2,"readRefHeightFieldFile");
	lua_pushcfunction(L, _bind_readRefNodeFile); lua_setfield(L,-2,"readRefNodeFile");
	lua_pushcfunction(L, _bind_readRefShaderFile); lua_setfield(L,-2,"readRefShaderFile");
	lua_pushcfunction(L, _bind_readCommandLine); lua_setfield(L,-2,"readCommandLine");
	lua_pushcfunction(L, _bind_writeObjectFile); lua_setfield(L,-2,"writeObjectFile");
	lua_pushcfunction(L, _bind_writeImageFile); lua_setfield(L,-2,"writeImageFile");
	lua_pushcfunction(L, _bind_writeHeightFieldFile); lua_setfield(L,-2,"writeHeightFieldFile");
	lua_pushcfunction(L, _bind_writeNodeFile); lua_setfield(L,-2,"writeNodeFile");
	lua_pushcfunction(L, _bind_writeShaderFile); lua_setfield(L,-2,"writeShaderFile");
	lua_pushcfunction(L, _bind_readXmlFile); lua_setfield(L,-2,"readXmlFile");
	lua_pushcfunction(L, _bind_trimEnclosingSpaces); lua_setfield(L,-2,"trimEnclosingSpaces");
}

#ifdef __cplusplus
}
#endif

