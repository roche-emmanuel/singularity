#include <SpiceCel.h>
#include <SpiceEK.h>
#include <SpiceGF.h>
#include <SpiceZdf.h>
#include <SpiceZim.h>
#include <SpiceZpl.h>
#include <SpiceZpr.h>

#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

void register_defines(lua_State* L) {
	lua_pushnumber(L,SPICE_CELL_CTRLSZ); lua_setfield(L,-2,"SPICE_CELL_CTRLSZ");
	lua_pushnumber(L,SPICE_EK_CNAMSZ); lua_setfield(L,-2,"SPICE_EK_CNAMSZ");
	lua_pushnumber(L,SPICE_EK_TNAMSZ); lua_setfield(L,-2,"SPICE_EK_TNAMSZ");
	lua_pushnumber(L,SPICE_EK_MXCLSG); lua_setfield(L,-2,"SPICE_EK_MXCLSG");
	lua_pushnumber(L,SPICE_EK_TYPLEN); lua_setfield(L,-2,"SPICE_EK_TYPLEN");
	lua_pushnumber(L,SPICE_EK_MAXQRY); lua_setfield(L,-2,"SPICE_EK_MAXQRY");
	lua_pushnumber(L,SPICE_EK_MAXQSEL); lua_setfield(L,-2,"SPICE_EK_MAXQSEL");
	lua_pushnumber(L,SPICE_EK_MAXQTAB); lua_setfield(L,-2,"SPICE_EK_MAXQTAB");
	lua_pushnumber(L,SPICE_EK_MAXQCON); lua_setfield(L,-2,"SPICE_EK_MAXQCON");
	lua_pushnumber(L,SPICE_EK_MAXQJOIN); lua_setfield(L,-2,"SPICE_EK_MAXQJOIN");
	lua_pushnumber(L,SPICE_EK_MAXQJCON); lua_setfield(L,-2,"SPICE_EK_MAXQJCON");
	lua_pushnumber(L,SPICE_EK_MAXQORD); lua_setfield(L,-2,"SPICE_EK_MAXQORD");
	lua_pushnumber(L,SPICE_EK_MAXQTOK); lua_setfield(L,-2,"SPICE_EK_MAXQTOK");
	lua_pushnumber(L,SPICE_EK_MAXQNUM); lua_setfield(L,-2,"SPICE_EK_MAXQNUM");
	lua_pushnumber(L,SPICE_EK_MAXQSTR); lua_setfield(L,-2,"SPICE_EK_MAXQSTR");
	lua_pushnumber(L,SPICE_GF_NWMAX); lua_setfield(L,-2,"SPICE_GF_NWMAX");
	lua_pushnumber(L,SPICE_GF_NWDIST); lua_setfield(L,-2,"SPICE_GF_NWDIST");
	lua_pushnumber(L,SPICE_GF_NWSEP); lua_setfield(L,-2,"SPICE_GF_NWSEP");
	lua_pushnumber(L,SPICE_GF_MAXVRT); lua_setfield(L,-2,"SPICE_GF_MAXVRT");
	lua_pushnumber(L,SPICE_GF_SHPLEN); lua_setfield(L,-2,"SPICE_GF_SHPLEN");
	lua_pushnumber(L,SPICE_GF_ADDWIN); lua_setfield(L,-2,"SPICE_GF_ADDWIN");
	lua_pushnumber(L,SPICE_GF_CNVTOL); lua_setfield(L,-2,"SPICE_GF_CNVTOL");
	lua_pushnumber(L,SPICE_GFEVNT_MAXPAR); lua_setfield(L,-2,"SPICE_GFEVNT_MAXPAR");
	lua_pushnumber(L,SPICETRUE); lua_setfield(L,-2,"SPICETRUE");
	lua_pushnumber(L,SPICEFALSE); lua_setfield(L,-2,"SPICEFALSE");
}

#ifdef __cplusplus
}
#endif

