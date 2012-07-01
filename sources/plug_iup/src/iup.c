
#include "lua.h"
#include "cd.h"

#include "imlua.h"
#include "cdlua.h"
#include "cdluagl.h"
#include "cdluaim.h"
//#include "cdluaiup.h"
#include "cdluapdf.h"

#include "iup.h"
#include "iuplua.h"
#include "iuplua_mglplot.h"
#include "iuplua_pplot.h"
#include "iupluacontrols.h"
#include "iupluagl.h"
#include "iupluaim.h"
#include "iupluaole.h"
#include "iupluatuio.h"
#include "iupluaweb.h"

extern int luaopen_imlua(lua_State *L);
extern int luaopen_imlua_process_omp(lua_State *L);
extern int luaopen_imlua_avi(lua_State *L);
extern int luaopen_imlua_wmv(lua_State *L);
extern int luaopen_imlua_jp2(lua_State *L);

extern int cdlua_open(lua_State *L);
extern int luaopen_cdluacontextplus(lua_State *L);
extern int luaopen_iupluacd(lua_State *L);
extern int luaopen_iupluaimglib(lua_State *L);

int __argc = 0;
char** __argv = NULL;

int main(int argc, char ** argv) {
	// do nothing.
	return 0;
}

int luaopen_iup(lua_State *L)
{
	int ret;

	ret = luaopen_imlua(L);
	//CHECK(ret==0 || ret==1,"Invalid loading result for imlua");
	if(ret==1) lua_pop(L,1);
	
	ret = luaopen_imlua_capture(L);
	//CHECK(ret==0 || ret==1,"Invalid loading result for capture");
	if(ret==1) lua_pop(L,1);

	ret = luaopen_imlua_process(L);
	//CHECK(ret==0 || ret==1,"Invalid loading result for process");
	if(ret==1) lua_pop(L,1);
	
	ret = luaopen_imlua_process_omp(L);
	//CHECK(ret==0 || ret==1,"Invalid loading result for process omp");
	if(ret==1) lua_pop(L,1);

	ret = luaopen_imlua_fftw(L);
	//CHECK(ret==0 || ret==1,"Invalid loading result for fftw");
	if(ret==1) lua_pop(L,1);
	
	ret = luaopen_imlua_avi(L);
	//CHECK(ret==0 || ret==1,"Invalid loading result for avi");
	if(ret==1) lua_pop(L,1);
	
	ret = luaopen_imlua_wmv(L);
	//CHECK(ret==0 || ret==1,"Invalid loading result for wmv");
	if(ret==1) lua_pop(L,1);
	
	ret = luaopen_imlua_jp2(L);
	//CHECK(ret==0 || ret==1,"Invalid loading result for jp2");
	if(ret==1) lua_pop(L,1);
	
	ret = cdlua_open(L);
	if(ret==1) lua_pop(L,1);

	ret = cdluagl_open(L);
	if(ret==1) lua_pop(L,1);

	ret = luaopen_cdluaim(L);
	if(ret==1) lua_pop(L,1);

	//ret = cdluaiup_open(L);
	//if(ret==1) lua_pop(L,1);

	ret = cdluapdf_open(L);
	if(ret==1) lua_pop(L,1);

	ret = luaopen_cdluacontextplus(L);
	if(ret==1) lua_pop(L,1);

	ret = iuplua_open(L);
	if(ret==1) lua_pop(L,1);

	ret = luaopen_iupluacd(L);
	if(ret==1) lua_pop(L,1);

	ret = luaopen_iupluaimglib(L);
	if(ret==1) lua_pop(L,1);

	ret = iup_mglplotlua_open(L);
	if(ret==1) lua_pop(L,1);

	ret = iup_pplotlua_open(L);
	if(ret==1) lua_pop(L,1);

	ret = iupcontrolslua_open(L);
	if(ret==1) lua_pop(L,1);

	ret = iupgllua_open(L);
	if(ret==1) lua_pop(L,1);

	ret = iupimlua_open(L);
	if(ret==1) lua_pop(L,1);

	ret = iupolelua_open(L);
	if(ret==1) lua_pop(L,1);

	ret = iuptuiolua_open(L);
	if(ret==1) lua_pop(L,1);

	ret = iupweblua_open(L);
	if(ret==1) lua_pop(L,1);

	//return 0;
	lua_getglobal(L,"iup");
	return 1;
}
