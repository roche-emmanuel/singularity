#include <plug_common.h>

#include <Awesomium/BitmapSurface.h>
#include <Awesomium/DataPak.h>
#include <Awesomium/STLHelpers.h>

// Function checkers:
inline static bool _lg_typecheck_CopyBuffers(lua_State *L) {
	if( lua_gettop(L)!=9 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( lua_isboolean(L,8)==0 ) return false;
	if( lua_isboolean(L,9)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_WriteDataPak(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isstring(L,1)==0) ) return false;
	if( (lua_isstring(L,2)==0) ) return false;
	if( (lua_isstring(L,3)==0) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ToString(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isstring(L,1)==0) ) return false;
	return true;
}

inline static bool _lg_typecheck_ToWebString(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_WSLit(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}


// Function binds:
// void Awesomium::CopyBuffers(int width, int height, unsigned char * src, int src_row_span, unsigned char * dest, int dest_row_span, int dest_depth, bool convert_to_rgba, bool flip_y)
static int _bind_CopyBuffers(lua_State *L) {
	if (!_lg_typecheck_CopyBuffers(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void Awesomium::CopyBuffers(int width, int height, unsigned char * src, int src_row_span, unsigned char * dest, int dest_row_span, int dest_depth, bool convert_to_rgba, bool flip_y) function, expected prototype:\nvoid Awesomium::CopyBuffers(int width, int height, unsigned char * src, int src_row_span, unsigned char * dest, int dest_row_span, int dest_depth, bool convert_to_rgba, bool flip_y)\nClass arguments details:\n");
	}

	int width=(int)lua_tointeger(L,1);
	int height=(int)lua_tointeger(L,2);
	unsigned char src = (unsigned char)(lua_tointeger(L,3));
	int src_row_span=(int)lua_tointeger(L,4);
	unsigned char dest = (unsigned char)(lua_tointeger(L,5));
	int dest_row_span=(int)lua_tointeger(L,6);
	int dest_depth=(int)lua_tointeger(L,7);
	bool convert_to_rgba=(bool)(lua_toboolean(L,8)==1);
	bool flip_y=(bool)(lua_toboolean(L,9)==1);

	CopyBuffers(width, height, &src, src_row_span, &dest, dest_row_span, dest_depth, convert_to_rgba, flip_y);

	return 0;
}

// bool Awesomium::WriteDataPak(const Awesomium::WebString & out_file, const Awesomium::WebString & in_dir, const Awesomium::WebString & ignore_ext, unsigned short & num_files_written)
static int _bind_WriteDataPak(lua_State *L) {
	if (!_lg_typecheck_WriteDataPak(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool Awesomium::WriteDataPak(const Awesomium::WebString & out_file, const Awesomium::WebString & in_dir, const Awesomium::WebString & ignore_ext, unsigned short & num_files_written) function, expected prototype:\nbool Awesomium::WriteDataPak(const Awesomium::WebString & out_file, const Awesomium::WebString & in_dir, const Awesomium::WebString & ignore_ext, unsigned short & num_files_written)\nClass arguments details:\narg 1 ID = 13938525\narg 2 ID = 13938525\narg 3 ID = 13938525\n");
	}

	std::string out_file_str(lua_tostring(L,1),lua_objlen(L,1));
	Awesomium::WebString out_file = Awesomium::ToWebString(out_file_str);
	std::string in_dir_str(lua_tostring(L,2),lua_objlen(L,2));
	Awesomium::WebString in_dir = Awesomium::ToWebString(in_dir_str);
	std::string ignore_ext_str(lua_tostring(L,3),lua_objlen(L,3));
	Awesomium::WebString ignore_ext = Awesomium::ToWebString(ignore_ext_str);
	unsigned short num_files_written=(unsigned short)lua_tointeger(L,4);

	bool lret = WriteDataPak(out_file, in_dir, ignore_ext, num_files_written);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// std::string Awesomium::ToString(const Awesomium::WebString & str)
static int _bind_ToString(lua_State *L) {
	if (!_lg_typecheck_ToString(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string Awesomium::ToString(const Awesomium::WebString & str) function, expected prototype:\nstd::string Awesomium::ToString(const Awesomium::WebString & str)\nClass arguments details:\narg 1 ID = 13938525\n");
	}

	std::string str_str(lua_tostring(L,1),lua_objlen(L,1));
	Awesomium::WebString str = Awesomium::ToWebString(str_str);

	std::string lret = ToString(str);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// Awesomium::WebString Awesomium::ToWebString(const std::string & str)
static int _bind_ToWebString(lua_State *L) {
	if (!_lg_typecheck_ToWebString(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::ToWebString(const std::string & str) function, expected prototype:\nAwesomium::WebString Awesomium::ToWebString(const std::string & str)\nClass arguments details:\n");
	}

	std::string str(lua_tostring(L,1),lua_objlen(L,1));

	Awesomium::WebString lret = ToWebString(str);
	std::string lret_str = Awesomium::ToString(lret);
	lua_pushlstring(L,lret_str.data(),lret_str.size());

	return 1;
}

// Awesomium::WebString Awesomium::WSLit(const char * string_literal)
static int _bind_WSLit(lua_State *L) {
	if (!_lg_typecheck_WSLit(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WSLit(const char * string_literal) function, expected prototype:\nAwesomium::WebString Awesomium::WSLit(const char * string_literal)\nClass arguments details:\n");
	}

	const char * string_literal=(const char *)lua_tostring(L,1);

	Awesomium::WebString lret = WSLit(string_literal);
	std::string lret_str = Awesomium::ToString(lret);
	lua_pushlstring(L,lret_str.data(),lret_str.size());

	return 1;
}


// Function checkers:

// Function binds:

// Function checkers:

// Function binds:

#ifdef __cplusplus
extern "C" {
#endif

void register_global_functions(lua_State* L) {
	luna_pushModule(L,"Awesomium");
	lua_pushcfunction(L, _bind_CopyBuffers); lua_setfield(L,-2,"CopyBuffers");
	lua_pushcfunction(L, _bind_WriteDataPak); lua_setfield(L,-2,"WriteDataPak");
	lua_pushcfunction(L, _bind_ToString); lua_setfield(L,-2,"ToString");
	lua_pushcfunction(L, _bind_ToWebString); lua_setfield(L,-2,"ToWebString");
	lua_pushcfunction(L, _bind_WSLit); lua_setfield(L,-2,"WSLit");
	luna_popModule(L);
}

#ifdef __cplusplus
}
#endif

