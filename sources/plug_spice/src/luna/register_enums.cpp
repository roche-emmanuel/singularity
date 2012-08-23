#include <SpiceCel.h>
#include <SpiceCK.h>
#include <SpiceEK.h>
#include <SpiceSPK.h>
#include <SpiceZdf.h>

#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

void register_enums(lua_State* L) {
	lua_newtable(L); // enum SpiceEKExprClass


	lua_setfield(L,-2,"SpiceEKExprClass");



	lua_newtable(L); // enum SpiceDataType


	lua_setfield(L,-2,"SpiceDataType");



	lua_newtable(L); // enum _SpiceTransDir

	lua_pushnumber(L,C2F); lua_setfield(L,-2,"C2F");
	lua_pushnumber(L,F2C); lua_setfield(L,-2,"F2C");

	lua_setfield(L,-2,"_SpiceTransDir");

	lua_pushnumber(L,C2F); lua_setfield(L,-2,"C2F");
	lua_pushnumber(L,F2C); lua_setfield(L,-2,"F2C");


	lua_newtable(L); // enum _SpiceCK05Subtype

	lua_pushnumber(L,C05TP0); lua_setfield(L,-2,"C05TP0");
	lua_pushnumber(L,C05TP1); lua_setfield(L,-2,"C05TP1");
	lua_pushnumber(L,C05TP2); lua_setfield(L,-2,"C05TP2");
	lua_pushnumber(L,C05TP3); lua_setfield(L,-2,"C05TP3");

	lua_setfield(L,-2,"_SpiceCK05Subtype");

	lua_pushnumber(L,C05TP0); lua_setfield(L,-2,"C05TP0");
	lua_pushnumber(L,C05TP1); lua_setfield(L,-2,"C05TP1");
	lua_pushnumber(L,C05TP2); lua_setfield(L,-2,"C05TP2");
	lua_pushnumber(L,C05TP3); lua_setfield(L,-2,"C05TP3");


	lua_newtable(L); // enum _SpiceEKExprClass

	lua_pushnumber(L,SPICE_EK_EXP_COL); lua_setfield(L,-2,"SPICE_EK_EXP_COL");
	lua_pushnumber(L,SPICE_EK_EXP_FUNC); lua_setfield(L,-2,"SPICE_EK_EXP_FUNC");
	lua_pushnumber(L,SPICE_EK_EXP_EXPR); lua_setfield(L,-2,"SPICE_EK_EXP_EXPR");

	lua_setfield(L,-2,"_SpiceEKExprClass");

	lua_pushnumber(L,SPICE_EK_EXP_COL); lua_setfield(L,-2,"SPICE_EK_EXP_COL");
	lua_pushnumber(L,SPICE_EK_EXP_FUNC); lua_setfield(L,-2,"SPICE_EK_EXP_FUNC");
	lua_pushnumber(L,SPICE_EK_EXP_EXPR); lua_setfield(L,-2,"SPICE_EK_EXP_EXPR");


	lua_newtable(L); // enum _SpiceSPK18Subtype

	lua_pushnumber(L,S18TP0); lua_setfield(L,-2,"S18TP0");
	lua_pushnumber(L,S18TP1); lua_setfield(L,-2,"S18TP1");

	lua_setfield(L,-2,"_SpiceSPK18Subtype");

	lua_pushnumber(L,S18TP0); lua_setfield(L,-2,"S18TP0");
	lua_pushnumber(L,S18TP1); lua_setfield(L,-2,"S18TP1");


	lua_newtable(L); // enum _Spicestatus

	lua_pushnumber(L,SPICEFAILURE); lua_setfield(L,-2,"SPICEFAILURE");
	lua_pushnumber(L,SPICESUCCESS); lua_setfield(L,-2,"SPICESUCCESS");

	lua_setfield(L,-2,"_Spicestatus");

	lua_pushnumber(L,SPICEFAILURE); lua_setfield(L,-2,"SPICEFAILURE");
	lua_pushnumber(L,SPICESUCCESS); lua_setfield(L,-2,"SPICESUCCESS");


	lua_newtable(L); // enum _SpiceDataType

	lua_pushnumber(L,SPICE_CHR); lua_setfield(L,-2,"SPICE_CHR");
	lua_pushnumber(L,SPICE_DP); lua_setfield(L,-2,"SPICE_DP");
	lua_pushnumber(L,SPICE_INT); lua_setfield(L,-2,"SPICE_INT");
	lua_pushnumber(L,SPICE_TIME); lua_setfield(L,-2,"SPICE_TIME");
	lua_pushnumber(L,SPICE_BOOL); lua_setfield(L,-2,"SPICE_BOOL");

	lua_setfield(L,-2,"_SpiceDataType");

	lua_pushnumber(L,SPICE_CHR); lua_setfield(L,-2,"SPICE_CHR");
	lua_pushnumber(L,SPICE_DP); lua_setfield(L,-2,"SPICE_DP");
	lua_pushnumber(L,SPICE_INT); lua_setfield(L,-2,"SPICE_INT");
	lua_pushnumber(L,SPICE_TIME); lua_setfield(L,-2,"SPICE_TIME");
	lua_pushnumber(L,SPICE_BOOL); lua_setfield(L,-2,"SPICE_BOOL");


}

#ifdef __cplusplus
}
#endif

