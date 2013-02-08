#include <plug_common.h>

#include <mgl2/define.h>

#ifdef __cplusplus
extern "C" {
#endif

void register_enums(lua_State* L) {
	lua_newtable(L); // enum unnamed_0

	lua_pushnumber(L,::mglCartesian); lua_setfield(L,-2,"mglCartesian");
	lua_pushnumber(L,::mglPolar); lua_setfield(L,-2,"mglPolar");
	lua_pushnumber(L,::mglSpherical); lua_setfield(L,-2,"mglSpherical");
	lua_pushnumber(L,::mglParabolic); lua_setfield(L,-2,"mglParabolic");
	lua_pushnumber(L,::mglParaboloidal); lua_setfield(L,-2,"mglParaboloidal");
	lua_pushnumber(L,::mglOblate); lua_setfield(L,-2,"mglOblate");
	lua_pushnumber(L,::mglProlate); lua_setfield(L,-2,"mglProlate");
	lua_pushnumber(L,::mglElliptic); lua_setfield(L,-2,"mglElliptic");
	lua_pushnumber(L,::mglToroidal); lua_setfield(L,-2,"mglToroidal");
	lua_pushnumber(L,::mglBispherical); lua_setfield(L,-2,"mglBispherical");
	lua_pushnumber(L,::mglBipolar); lua_setfield(L,-2,"mglBipolar");
	lua_pushnumber(L,::mglLogLog); lua_setfield(L,-2,"mglLogLog");
	lua_pushnumber(L,::mglLogX); lua_setfield(L,-2,"mglLogX");
	lua_pushnumber(L,::mglLogY); lua_setfield(L,-2,"mglLogY");

	lua_setfield(L,-2,"unnamed_0");

	lua_pushnumber(L,::mglCartesian); lua_setfield(L,-2,"mglCartesian");
	lua_pushnumber(L,::mglPolar); lua_setfield(L,-2,"mglPolar");
	lua_pushnumber(L,::mglSpherical); lua_setfield(L,-2,"mglSpherical");
	lua_pushnumber(L,::mglParabolic); lua_setfield(L,-2,"mglParabolic");
	lua_pushnumber(L,::mglParaboloidal); lua_setfield(L,-2,"mglParaboloidal");
	lua_pushnumber(L,::mglOblate); lua_setfield(L,-2,"mglOblate");
	lua_pushnumber(L,::mglProlate); lua_setfield(L,-2,"mglProlate");
	lua_pushnumber(L,::mglElliptic); lua_setfield(L,-2,"mglElliptic");
	lua_pushnumber(L,::mglToroidal); lua_setfield(L,-2,"mglToroidal");
	lua_pushnumber(L,::mglBispherical); lua_setfield(L,-2,"mglBispherical");
	lua_pushnumber(L,::mglBipolar); lua_setfield(L,-2,"mglBipolar");
	lua_pushnumber(L,::mglLogLog); lua_setfield(L,-2,"mglLogLog");
	lua_pushnumber(L,::mglLogX); lua_setfield(L,-2,"mglLogX");
	lua_pushnumber(L,::mglLogY); lua_setfield(L,-2,"mglLogY");


	lua_newtable(L); // enum unnamed_1

	lua_pushnumber(L,::mglWarnNone); lua_setfield(L,-2,"mglWarnNone");
	lua_pushnumber(L,::mglWarnDim); lua_setfield(L,-2,"mglWarnDim");
	lua_pushnumber(L,::mglWarnLow); lua_setfield(L,-2,"mglWarnLow");
	lua_pushnumber(L,::mglWarnNeg); lua_setfield(L,-2,"mglWarnNeg");
	lua_pushnumber(L,::mglWarnFile); lua_setfield(L,-2,"mglWarnFile");
	lua_pushnumber(L,::mglWarnMem); lua_setfield(L,-2,"mglWarnMem");
	lua_pushnumber(L,::mglWarnZero); lua_setfield(L,-2,"mglWarnZero");
	lua_pushnumber(L,::mglWarnLeg); lua_setfield(L,-2,"mglWarnLeg");
	lua_pushnumber(L,::mglWarnSlc); lua_setfield(L,-2,"mglWarnSlc");
	lua_pushnumber(L,::mglWarnCnt); lua_setfield(L,-2,"mglWarnCnt");
	lua_pushnumber(L,::mglWarnOpen); lua_setfield(L,-2,"mglWarnOpen");
	lua_pushnumber(L,::mglWarnLId); lua_setfield(L,-2,"mglWarnLId");
	lua_pushnumber(L,::mglWarnSize); lua_setfield(L,-2,"mglWarnSize");
	lua_pushnumber(L,::mglWarnFmt); lua_setfield(L,-2,"mglWarnFmt");
	lua_pushnumber(L,::mglWarnTern); lua_setfield(L,-2,"mglWarnTern");
	lua_pushnumber(L,::mglWarnNull); lua_setfield(L,-2,"mglWarnNull");
	lua_pushnumber(L,::mglWarnSpc); lua_setfield(L,-2,"mglWarnSpc");
	lua_pushnumber(L,::mglWarnEnd); lua_setfield(L,-2,"mglWarnEnd");

	lua_setfield(L,-2,"unnamed_1");

	lua_pushnumber(L,::mglWarnNone); lua_setfield(L,-2,"mglWarnNone");
	lua_pushnumber(L,::mglWarnDim); lua_setfield(L,-2,"mglWarnDim");
	lua_pushnumber(L,::mglWarnLow); lua_setfield(L,-2,"mglWarnLow");
	lua_pushnumber(L,::mglWarnNeg); lua_setfield(L,-2,"mglWarnNeg");
	lua_pushnumber(L,::mglWarnFile); lua_setfield(L,-2,"mglWarnFile");
	lua_pushnumber(L,::mglWarnMem); lua_setfield(L,-2,"mglWarnMem");
	lua_pushnumber(L,::mglWarnZero); lua_setfield(L,-2,"mglWarnZero");
	lua_pushnumber(L,::mglWarnLeg); lua_setfield(L,-2,"mglWarnLeg");
	lua_pushnumber(L,::mglWarnSlc); lua_setfield(L,-2,"mglWarnSlc");
	lua_pushnumber(L,::mglWarnCnt); lua_setfield(L,-2,"mglWarnCnt");
	lua_pushnumber(L,::mglWarnOpen); lua_setfield(L,-2,"mglWarnOpen");
	lua_pushnumber(L,::mglWarnLId); lua_setfield(L,-2,"mglWarnLId");
	lua_pushnumber(L,::mglWarnSize); lua_setfield(L,-2,"mglWarnSize");
	lua_pushnumber(L,::mglWarnFmt); lua_setfield(L,-2,"mglWarnFmt");
	lua_pushnumber(L,::mglWarnTern); lua_setfield(L,-2,"mglWarnTern");
	lua_pushnumber(L,::mglWarnNull); lua_setfield(L,-2,"mglWarnNull");
	lua_pushnumber(L,::mglWarnSpc); lua_setfield(L,-2,"mglWarnSpc");
	lua_pushnumber(L,::mglWarnEnd); lua_setfield(L,-2,"mglWarnEnd");


}

#ifdef __cplusplus
}
#endif


