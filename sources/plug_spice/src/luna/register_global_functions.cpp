#include <plug_common.h>

#include <SpiceZpr.h>

// Function checkers:
inline static bool _lg_typecheck_badkpv_c(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( lua_isstring(L,3)==0 ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	return true;
}

inline static bool _lg_typecheck_bodc2n_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_bodc2s_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_boddef_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_bodfnd_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_bodn2c_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_bods2c_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_bodvar_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( lua_isnumber(L,4)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_bodvcd_c(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( lua_isnumber(L,5)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_bodvrd_c(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( lua_isnumber(L,5)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_brcktd_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_brckti_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_bschoc_c(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_bschoi_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_bsrchc_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_bsrchd_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_bsrchi_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_b1900_c(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_b1950_c(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_chkin_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_chkout_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_cidfrm_c(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ckcls_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_cklpf_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ckopn_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ckupf_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_clight_c(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_clpool_c(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_cmprss_c(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_isstring(L,3)==0 ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_cnmfrm_c(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_convrt_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( lua_isstring(L,3)==0 ) return false;
	if( lua_isnumber(L,4)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_cpos_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_cposr_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_cvpool_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_cyllat_c(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	if( lua_isnumber(L,4)==0 ) return false;
	if( lua_isnumber(L,5)==0 ) return false;
	if( lua_isnumber(L,6)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_cylsph_c(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	if( lua_isnumber(L,4)==0 ) return false;
	if( lua_isnumber(L,5)==0 ) return false;
	if( lua_isnumber(L,6)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_dafac_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_dafbbs_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_dafbfs_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_dafcls_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_dafcs_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_dafdc_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_dafec_c(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	return true;
}

inline static bool _lg_typecheck_daffna_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_daffpa_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_dafgda_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( lua_isnumber(L,4)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_dafgn_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_dafgsr_c(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( lua_isnumber(L,5)==0 ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	return true;
}

inline static bool _lg_typecheck_dafopr_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_dafopw_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_dafrda_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( lua_isnumber(L,4)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_dafrfr_c(lua_State *L) {
	if( lua_gettop(L)!=8 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	return true;
}

inline static bool _lg_typecheck_dafrs_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_dasac_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_dascls_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_dasec_c(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	return true;
}

inline static bool _lg_typecheck_dasopr_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_deltet_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_dp2hx_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_dpmax_c(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_dpmax_(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_dpmin_c(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_dpmin_(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_dpr_c(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_dvpool_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_dvsep_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_ekacec_c(lua_State *L) {
	if( lua_gettop(L)!=8 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( lua_isstring(L,4)==0 ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,3625364)) ) return false;
	if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ekaced_c(lua_State *L) {
	if( lua_gettop(L)!=7 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( lua_isstring(L,4)==0 ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( lua_isnumber(L,6)==0 ) return false;
	if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ekacei_c(lua_State *L) {
	if( lua_gettop(L)!=7 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( lua_isstring(L,4)==0 ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ekaclc_c(lua_State *L) {
	if( lua_gettop(L)!=9 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_isstring(L,3)==0 ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	if( (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ekacld_c(lua_State *L) {
	if( lua_gettop(L)!=8 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_isstring(L,3)==0 ) return false;
	if( lua_isnumber(L,4)==0 ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ekacli_c(lua_State *L) {
	if( lua_gettop(L)!=8 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_isstring(L,3)==0 ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ekappr_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ekbseg_c(lua_State *L) {
	if( lua_gettop(L)!=8 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,3625364)) ) return false;
	if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ekccnt_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ekcls_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ekdelr_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ekffld_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ekfind_c(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ekgc_c(lua_State *L) {
	if( lua_gettop(L)!=7 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ekgd_c(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( lua_isnumber(L,4)==0 ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ekgi_c(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ekifld_c(lua_State *L) {
	if( lua_gettop(L)!=10 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
	if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,3625364)) ) return false;
	if( (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
	if( (lua_isnumber(L,10)==0 || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ekinsr_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_eklef_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_eknelt_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_eknseg_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ekntab_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ekopn_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ekopr_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ekops_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ekopw_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ekpsel_c(lua_State *L) {
	if( lua_gettop(L)!=13 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	if( (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
	if( (lua_isnil(L,10)==0 && !Luna<void>::has_uniqueid(L,10,3625364)) ) return false;
	if( (lua_isnil(L,11)==0 && !Luna<void>::has_uniqueid(L,11,3625364)) ) return false;
	if( (lua_isnumber(L,12)==0 || lua_tointeger(L,12) != lua_tonumber(L,12)) ) return false;
	if( (lua_isnumber(L,13)==0 || lua_tointeger(L,13) != lua_tonumber(L,13)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ekrcec_c(lua_State *L) {
	if( lua_gettop(L)!=8 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( lua_isstring(L,4)==0 ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,3625364)) ) return false;
	if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ekrced_c(lua_State *L) {
	if( lua_gettop(L)!=7 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( lua_isstring(L,4)==0 ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( lua_isnumber(L,6)==0 ) return false;
	if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ekrcei_c(lua_State *L) {
	if( lua_gettop(L)!=7 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( lua_isstring(L,4)==0 ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ektnam_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ekucec_c(lua_State *L) {
	if( lua_gettop(L)!=8 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( lua_isstring(L,4)==0 ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,3625364)) ) return false;
	if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ekuef_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_eqstr_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_erract_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_errch_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_errdev_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_errdp_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_errint_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_errprt_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_esrchc_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_etcal_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_et2lst_c(lua_State *L) {
	if( lua_gettop(L)!=11 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	if( lua_isstring(L,4)==0 ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	if( (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
	if( (lua_isnumber(L,10)==0 || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
	if( (lua_isnumber(L,11)==0 || lua_tointeger(L,11) != lua_tonumber(L,11)) ) return false;
	return true;
}

inline static bool _lg_typecheck_et2utc_c(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_exists_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_expool_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_failed_c(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_frinfo_c(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_frmnam_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ftncls_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_furnsh_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_gcpool_c(lua_State *L) {
	if( lua_gettop(L)!=7 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
	if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	return true;
}

inline static bool _lg_typecheck_gdpool_c(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( lua_isnumber(L,5)==0 ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	return true;
}

inline static bool _lg_typecheck_getelm_c(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	if( lua_isnumber(L,4)==0 ) return false;
	if( lua_isnumber(L,5)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_getfat_c(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_getmsg_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_gfbail_c(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_gfclrh_c(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_gfinth_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_gfrefn_c(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( lua_isnumber(L,5)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_gfrepf_c(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_gfrepu_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_gfsstp_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_gfstep_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_gipool_c(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	return true;
}

inline static bool _lg_typecheck_gnpool_c(lua_State *L) {
	if( lua_gettop(L)!=7 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
	if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	return true;
}

inline static bool _lg_typecheck_halfpi_c(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_hx2dp_c(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_intmax_c(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_intmax_(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_intmin_c(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_intmin_(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_isordv_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_isrchc_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_isrchd_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_isrchi_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_iswhsp_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_j1900_c(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_j1950_c(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_j2000_c(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_j2100_c(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_jyear_c(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_kclear_c(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_kdata_c(lua_State *L) {
	if( lua_gettop(L)!=10 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	if( (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
	if( (lua_isnumber(L,10)==0 || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
	return true;
}

inline static bool _lg_typecheck_kinfo_c(lua_State *L) {
	if( lua_gettop(L)!=7 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ktotal_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_kxtrct_c(lua_State *L) {
	if( lua_gettop(L)!=9 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	if( (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
	return true;
}

inline static bool _lg_typecheck_lastnb_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_latcyl_c(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	if( lua_isnumber(L,4)==0 ) return false;
	if( lua_isnumber(L,5)==0 ) return false;
	if( lua_isnumber(L,6)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_latsph_c(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	if( lua_isnumber(L,4)==0 ) return false;
	if( lua_isnumber(L,5)==0 ) return false;
	if( lua_isnumber(L,6)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_lcase_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ldpool_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_lmpool_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_lparse_c(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_lparsm_c(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_lspcn_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	if( lua_isstring(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_lstlec_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_lstled_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_lstlei_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_lstltc_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_lstltd_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_lstlti_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ltime_c(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_isstring(L,3)==0 ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( lua_isnumber(L,5)==0 ) return false;
	if( lua_isnumber(L,6)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_lx4dec_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_lx4num_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_lx4sgn_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_lx4uns_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_lxqstr_c(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_matchi_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_matchw_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_mequg_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_moved_(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_mtxmg_c(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_mtxvg_c(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_mxmg_c(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_mxmtg_c(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_mxvg_c(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_namfrm_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ncpos_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_ncposr_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_orderc_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_orderd_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_orderi_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_pcklof_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_pckuof_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_pcpool_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_pdpool_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_pi_c(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_pipool_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_pos_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_posr_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_prompt_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_prsdp_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_prsint_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_rdtext_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_reordc_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_reordd_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_reordi_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_reordl_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_repmc_c(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( lua_isstring(L,3)==0 ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_repmct_c(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	return true;
}

inline static bool _lg_typecheck_repmd_c(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	return true;
}

inline static bool _lg_typecheck_repmf_c(lua_State *L) {
	if( lua_gettop(L)!=7 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	return true;
}

inline static bool _lg_typecheck_repmi_c(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_repmot_c(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	return true;
}

inline static bool _lg_typecheck_reset_c(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_return_c(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_rpd_c(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_scdecd_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_sce2s_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_sce2c_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_sce2t_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_scencd_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_scfmt_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_scpart_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	if( lua_isnumber(L,4)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_scs2e_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_sct2e_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_sctiks_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_setmsg_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_shellc_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_shelld_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_shelli_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_sigerr_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_spd_c(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_sphcyl_c(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	if( lua_isnumber(L,4)==0 ) return false;
	if( lua_isnumber(L,5)==0 ) return false;
	if( lua_isnumber(L,6)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_sphlat_c(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	if( lua_isnumber(L,4)==0 ) return false;
	if( lua_isnumber(L,5)==0 ) return false;
	if( lua_isnumber(L,6)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_spk14b_c(lua_State *L) {
	if( lua_gettop(L)!=8 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( lua_isstring(L,5)==0 ) return false;
	if( lua_isnumber(L,6)==0 ) return false;
	if( lua_isnumber(L,7)==0 ) return false;
	if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	return true;
}

inline static bool _lg_typecheck_spk14e_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_spkcls_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_spklef_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_spkopa_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_spkopn_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_spkuef_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_stpool_c(lua_State *L) {
	if( lua_gettop(L)!=7 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_isstring(L,3)==0 ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	return true;
}

inline static bool _lg_typecheck_str2et_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_swpool_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_szpool_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_timdef_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_timout_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_tkvrsn_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_tparse_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_tpictr_c(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	return true;
}

inline static bool _lg_typecheck_trcoff_c(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_tsetyr_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_twopi_c(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_tyear_c(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_ucase_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_unitim_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( lua_isstring(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_unload_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_unormg_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	if( lua_isnumber(L,4)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_utc2et_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_vaddg_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( lua_isnumber(L,4)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_vdistg_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_vdotg_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_vequg_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_vhatg_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_vlcomg_c(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	if( lua_isnumber(L,4)==0 ) return false;
	if( lua_isnumber(L,5)==0 ) return false;
	if( lua_isnumber(L,6)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_vminug_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_vnormg_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_vrelg_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_vsclg_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( lua_isnumber(L,4)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_vsubg_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( lua_isnumber(L,4)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_vsepg_c(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_vtmvg_c(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_vzerog_c(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_xposeg_c(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_zzgfgeth_c(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_zzgfsavh_c(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}


// Function binds:
// int badkpv_c(const char * caller, const char * name, const char * comp, long size, long divby, char type)
static int _bind_badkpv_c(lua_State *L) {
	if (!_lg_typecheck_badkpv_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int badkpv_c(const char * caller, const char * name, const char * comp, long size, long divby, char type) function, expected prototype:\nint badkpv_c(const char * caller, const char * name, const char * comp, long size, long divby, char type)\nClass arguments details:\n");
	}

	const char * caller=(const char *)lua_tostring(L,1);
	const char * name=(const char *)lua_tostring(L,2);
	const char * comp=(const char *)lua_tostring(L,3);
	long size=(long)lua_tointeger(L,4);
	long divby=(long)lua_tointeger(L,5);
	char type=(char)lua_tointeger(L,6);

	int lret = badkpv_c(caller, name, comp, size, divby, type);
	lua_pushnumber(L,lret);

	return 1;
}

// void bodc2n_c(long code, long namelen, char * name, int * found)
static int _bind_bodc2n_c(lua_State *L) {
	if (!_lg_typecheck_bodc2n_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void bodc2n_c(long code, long namelen, char * name, int * found) function, expected prototype:\nvoid bodc2n_c(long code, long namelen, char * name, int * found)\nClass arguments details:\n");
	}

	long code=(long)lua_tointeger(L,1);
	long namelen=(long)lua_tointeger(L,2);
	char name=(char)lua_tointeger(L,3);
	int found=(int)lua_tointeger(L,4);

	bodc2n_c(code, namelen, &name, &found);

	return 0;
}

// void bodc2s_c(long code, long lenout, char * name)
static int _bind_bodc2s_c(lua_State *L) {
	if (!_lg_typecheck_bodc2s_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void bodc2s_c(long code, long lenout, char * name) function, expected prototype:\nvoid bodc2s_c(long code, long lenout, char * name)\nClass arguments details:\n");
	}

	long code=(long)lua_tointeger(L,1);
	long lenout=(long)lua_tointeger(L,2);
	char name=(char)lua_tointeger(L,3);

	bodc2s_c(code, lenout, &name);

	return 0;
}

// void boddef_c(const char * name, long code)
static int _bind_boddef_c(lua_State *L) {
	if (!_lg_typecheck_boddef_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void boddef_c(const char * name, long code) function, expected prototype:\nvoid boddef_c(const char * name, long code)\nClass arguments details:\n");
	}

	const char * name=(const char *)lua_tostring(L,1);
	long code=(long)lua_tointeger(L,2);

	boddef_c(name, code);

	return 0;
}

// int bodfnd_c(long body, const char * item)
static int _bind_bodfnd_c(lua_State *L) {
	if (!_lg_typecheck_bodfnd_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int bodfnd_c(long body, const char * item) function, expected prototype:\nint bodfnd_c(long body, const char * item)\nClass arguments details:\n");
	}

	long body=(long)lua_tointeger(L,1);
	const char * item=(const char *)lua_tostring(L,2);

	int lret = bodfnd_c(body, item);
	lua_pushnumber(L,lret);

	return 1;
}

// void bodn2c_c(const char * name, long * code, int * found)
static int _bind_bodn2c_c(lua_State *L) {
	if (!_lg_typecheck_bodn2c_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void bodn2c_c(const char * name, long * code, int * found) function, expected prototype:\nvoid bodn2c_c(const char * name, long * code, int * found)\nClass arguments details:\n");
	}

	const char * name=(const char *)lua_tostring(L,1);
	long code=(long)lua_tointeger(L,2);
	int found=(int)lua_tointeger(L,3);

	bodn2c_c(name, &code, &found);

	return 0;
}

// void bods2c_c(const char * name, long * code, int * found)
static int _bind_bods2c_c(lua_State *L) {
	if (!_lg_typecheck_bods2c_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void bods2c_c(const char * name, long * code, int * found) function, expected prototype:\nvoid bods2c_c(const char * name, long * code, int * found)\nClass arguments details:\n");
	}

	const char * name=(const char *)lua_tostring(L,1);
	long code=(long)lua_tointeger(L,2);
	int found=(int)lua_tointeger(L,3);

	bods2c_c(name, &code, &found);

	return 0;
}

// void bodvar_c(long body, const char * item, long * dim, double * values)
static int _bind_bodvar_c(lua_State *L) {
	if (!_lg_typecheck_bodvar_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void bodvar_c(long body, const char * item, long * dim, double * values) function, expected prototype:\nvoid bodvar_c(long body, const char * item, long * dim, double * values)\nClass arguments details:\n");
	}

	long body=(long)lua_tointeger(L,1);
	const char * item=(const char *)lua_tostring(L,2);
	long dim=(long)lua_tointeger(L,3);
	double values=(double)lua_tonumber(L,4);

	bodvar_c(body, item, &dim, &values);

	return 0;
}

// void bodvcd_c(long body, const char * item, long maxn, long * dim, double * values)
static int _bind_bodvcd_c(lua_State *L) {
	if (!_lg_typecheck_bodvcd_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void bodvcd_c(long body, const char * item, long maxn, long * dim, double * values) function, expected prototype:\nvoid bodvcd_c(long body, const char * item, long maxn, long * dim, double * values)\nClass arguments details:\n");
	}

	long body=(long)lua_tointeger(L,1);
	const char * item=(const char *)lua_tostring(L,2);
	long maxn=(long)lua_tointeger(L,3);
	long dim=(long)lua_tointeger(L,4);
	double values=(double)lua_tonumber(L,5);

	bodvcd_c(body, item, maxn, &dim, &values);

	return 0;
}

// void bodvrd_c(const char * body, const char * item, long maxn, long * dim, double * values)
static int _bind_bodvrd_c(lua_State *L) {
	if (!_lg_typecheck_bodvrd_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void bodvrd_c(const char * body, const char * item, long maxn, long * dim, double * values) function, expected prototype:\nvoid bodvrd_c(const char * body, const char * item, long maxn, long * dim, double * values)\nClass arguments details:\n");
	}

	const char * body=(const char *)lua_tostring(L,1);
	const char * item=(const char *)lua_tostring(L,2);
	long maxn=(long)lua_tointeger(L,3);
	long dim=(long)lua_tointeger(L,4);
	double values=(double)lua_tonumber(L,5);

	bodvrd_c(body, item, maxn, &dim, &values);

	return 0;
}

// double brcktd_c(double number, double end1, double end2)
static int _bind_brcktd_c(lua_State *L) {
	if (!_lg_typecheck_brcktd_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double brcktd_c(double number, double end1, double end2) function, expected prototype:\ndouble brcktd_c(double number, double end1, double end2)\nClass arguments details:\n");
	}

	double number=(double)lua_tonumber(L,1);
	double end1=(double)lua_tonumber(L,2);
	double end2=(double)lua_tonumber(L,3);

	double lret = brcktd_c(number, end1, end2);
	lua_pushnumber(L,lret);

	return 1;
}

// long brckti_c(long number, long end1, long end2)
static int _bind_brckti_c(lua_State *L) {
	if (!_lg_typecheck_brckti_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in long brckti_c(long number, long end1, long end2) function, expected prototype:\nlong brckti_c(long number, long end1, long end2)\nClass arguments details:\n");
	}

	long number=(long)lua_tointeger(L,1);
	long end1=(long)lua_tointeger(L,2);
	long end2=(long)lua_tointeger(L,3);

	long lret = brckti_c(number, end1, end2);
	lua_pushnumber(L,lret);

	return 1;
}

// long bschoc_c(const char * value, long ndim, long lenvals, const void * array, const long * order)
static int _bind_bschoc_c(lua_State *L) {
	if (!_lg_typecheck_bschoc_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in long bschoc_c(const char * value, long ndim, long lenvals, const void * array, const long * order) function, expected prototype:\nlong bschoc_c(const char * value, long ndim, long lenvals, const void * array, const long * order)\nClass arguments details:\n");
	}

	const char * value=(const char *)lua_tostring(L,1);
	long ndim=(long)lua_tointeger(L,2);
	long lenvals=(long)lua_tointeger(L,3);
	void* array=(Luna< void >::check(L,4));
	long order=(long)lua_tointeger(L,5);

	long lret = bschoc_c(value, ndim, lenvals, array, &order);
	lua_pushnumber(L,lret);

	return 1;
}

// long bschoi_c(long value, long ndim, const long * array, const long * order)
static int _bind_bschoi_c(lua_State *L) {
	if (!_lg_typecheck_bschoi_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in long bschoi_c(long value, long ndim, const long * array, const long * order) function, expected prototype:\nlong bschoi_c(long value, long ndim, const long * array, const long * order)\nClass arguments details:\n");
	}

	long value=(long)lua_tointeger(L,1);
	long ndim=(long)lua_tointeger(L,2);
	long array=(long)lua_tointeger(L,3);
	long order=(long)lua_tointeger(L,4);

	long lret = bschoi_c(value, ndim, &array, &order);
	lua_pushnumber(L,lret);

	return 1;
}

// long bsrchc_c(const char * value, long ndim, long lenvals, const void * array)
static int _bind_bsrchc_c(lua_State *L) {
	if (!_lg_typecheck_bsrchc_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in long bsrchc_c(const char * value, long ndim, long lenvals, const void * array) function, expected prototype:\nlong bsrchc_c(const char * value, long ndim, long lenvals, const void * array)\nClass arguments details:\n");
	}

	const char * value=(const char *)lua_tostring(L,1);
	long ndim=(long)lua_tointeger(L,2);
	long lenvals=(long)lua_tointeger(L,3);
	void* array=(Luna< void >::check(L,4));

	long lret = bsrchc_c(value, ndim, lenvals, array);
	lua_pushnumber(L,lret);

	return 1;
}

// long bsrchd_c(double value, long ndim, const double * array)
static int _bind_bsrchd_c(lua_State *L) {
	if (!_lg_typecheck_bsrchd_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in long bsrchd_c(double value, long ndim, const double * array) function, expected prototype:\nlong bsrchd_c(double value, long ndim, const double * array)\nClass arguments details:\n");
	}

	double value=(double)lua_tonumber(L,1);
	long ndim=(long)lua_tointeger(L,2);
	double array=(double)lua_tonumber(L,3);

	long lret = bsrchd_c(value, ndim, &array);
	lua_pushnumber(L,lret);

	return 1;
}

// long bsrchi_c(long value, long ndim, const long * array)
static int _bind_bsrchi_c(lua_State *L) {
	if (!_lg_typecheck_bsrchi_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in long bsrchi_c(long value, long ndim, const long * array) function, expected prototype:\nlong bsrchi_c(long value, long ndim, const long * array)\nClass arguments details:\n");
	}

	long value=(long)lua_tointeger(L,1);
	long ndim=(long)lua_tointeger(L,2);
	long array=(long)lua_tointeger(L,3);

	long lret = bsrchi_c(value, ndim, &array);
	lua_pushnumber(L,lret);

	return 1;
}

// double b1900_c()
static int _bind_b1900_c(lua_State *L) {
	if (!_lg_typecheck_b1900_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double b1900_c() function, expected prototype:\ndouble b1900_c()\nClass arguments details:\n");
	}


	double lret = b1900_c();
	lua_pushnumber(L,lret);

	return 1;
}

// double b1950_c()
static int _bind_b1950_c(lua_State *L) {
	if (!_lg_typecheck_b1950_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double b1950_c() function, expected prototype:\ndouble b1950_c()\nClass arguments details:\n");
	}


	double lret = b1950_c();
	lua_pushnumber(L,lret);

	return 1;
}

// void chkin_c(const char * module)
static int _bind_chkin_c(lua_State *L) {
	if (!_lg_typecheck_chkin_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void chkin_c(const char * module) function, expected prototype:\nvoid chkin_c(const char * module)\nClass arguments details:\n");
	}

	const char * module=(const char *)lua_tostring(L,1);

	chkin_c(module);

	return 0;
}

// void chkout_c(const char * module)
static int _bind_chkout_c(lua_State *L) {
	if (!_lg_typecheck_chkout_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void chkout_c(const char * module) function, expected prototype:\nvoid chkout_c(const char * module)\nClass arguments details:\n");
	}

	const char * module=(const char *)lua_tostring(L,1);

	chkout_c(module);

	return 0;
}

// void cidfrm_c(long cent, long lenout, long * frcode, char * frname, int * found)
static int _bind_cidfrm_c(lua_State *L) {
	if (!_lg_typecheck_cidfrm_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void cidfrm_c(long cent, long lenout, long * frcode, char * frname, int * found) function, expected prototype:\nvoid cidfrm_c(long cent, long lenout, long * frcode, char * frname, int * found)\nClass arguments details:\n");
	}

	long cent=(long)lua_tointeger(L,1);
	long lenout=(long)lua_tointeger(L,2);
	long frcode=(long)lua_tointeger(L,3);
	char frname=(char)lua_tointeger(L,4);
	int found=(int)lua_tointeger(L,5);

	cidfrm_c(cent, lenout, &frcode, &frname, &found);

	return 0;
}

// void ckcls_c(long handle)
static int _bind_ckcls_c(lua_State *L) {
	if (!_lg_typecheck_ckcls_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ckcls_c(long handle) function, expected prototype:\nvoid ckcls_c(long handle)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);

	ckcls_c(handle);

	return 0;
}

// void cklpf_c(const char * fname, long * handle)
static int _bind_cklpf_c(lua_State *L) {
	if (!_lg_typecheck_cklpf_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void cklpf_c(const char * fname, long * handle) function, expected prototype:\nvoid cklpf_c(const char * fname, long * handle)\nClass arguments details:\n");
	}

	const char * fname=(const char *)lua_tostring(L,1);
	long handle=(long)lua_tointeger(L,2);

	cklpf_c(fname, &handle);

	return 0;
}

// void ckopn_c(const char * name, const char * ifname, long ncomch, long * handle)
static int _bind_ckopn_c(lua_State *L) {
	if (!_lg_typecheck_ckopn_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ckopn_c(const char * name, const char * ifname, long ncomch, long * handle) function, expected prototype:\nvoid ckopn_c(const char * name, const char * ifname, long ncomch, long * handle)\nClass arguments details:\n");
	}

	const char * name=(const char *)lua_tostring(L,1);
	const char * ifname=(const char *)lua_tostring(L,2);
	long ncomch=(long)lua_tointeger(L,3);
	long handle=(long)lua_tointeger(L,4);

	ckopn_c(name, ifname, ncomch, &handle);

	return 0;
}

// void ckupf_c(long handle)
static int _bind_ckupf_c(lua_State *L) {
	if (!_lg_typecheck_ckupf_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ckupf_c(long handle) function, expected prototype:\nvoid ckupf_c(long handle)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);

	ckupf_c(handle);

	return 0;
}

// double clight_c()
static int _bind_clight_c(lua_State *L) {
	if (!_lg_typecheck_clight_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double clight_c() function, expected prototype:\ndouble clight_c()\nClass arguments details:\n");
	}


	double lret = clight_c();
	lua_pushnumber(L,lret);

	return 1;
}

// void clpool_c()
static int _bind_clpool_c(lua_State *L) {
	if (!_lg_typecheck_clpool_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void clpool_c() function, expected prototype:\nvoid clpool_c()\nClass arguments details:\n");
	}


	clpool_c();

	return 0;
}

// void cmprss_c(char delim, long n, const char * input, long lenout, char * output)
static int _bind_cmprss_c(lua_State *L) {
	if (!_lg_typecheck_cmprss_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void cmprss_c(char delim, long n, const char * input, long lenout, char * output) function, expected prototype:\nvoid cmprss_c(char delim, long n, const char * input, long lenout, char * output)\nClass arguments details:\n");
	}

	char delim=(char)lua_tointeger(L,1);
	long n=(long)lua_tointeger(L,2);
	const char * input=(const char *)lua_tostring(L,3);
	long lenout=(long)lua_tointeger(L,4);
	char output=(char)lua_tointeger(L,5);

	cmprss_c(delim, n, input, lenout, &output);

	return 0;
}

// void cnmfrm_c(const char * cname, long lenout, long * frcode, char * frname, int * found)
static int _bind_cnmfrm_c(lua_State *L) {
	if (!_lg_typecheck_cnmfrm_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void cnmfrm_c(const char * cname, long lenout, long * frcode, char * frname, int * found) function, expected prototype:\nvoid cnmfrm_c(const char * cname, long lenout, long * frcode, char * frname, int * found)\nClass arguments details:\n");
	}

	const char * cname=(const char *)lua_tostring(L,1);
	long lenout=(long)lua_tointeger(L,2);
	long frcode=(long)lua_tointeger(L,3);
	char frname=(char)lua_tointeger(L,4);
	int found=(int)lua_tointeger(L,5);

	cnmfrm_c(cname, lenout, &frcode, &frname, &found);

	return 0;
}

// void convrt_c(double x, const char * in, const char * out, double * y)
static int _bind_convrt_c(lua_State *L) {
	if (!_lg_typecheck_convrt_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void convrt_c(double x, const char * in, const char * out, double * y) function, expected prototype:\nvoid convrt_c(double x, const char * in, const char * out, double * y)\nClass arguments details:\n");
	}

	double x=(double)lua_tonumber(L,1);
	const char * in=(const char *)lua_tostring(L,2);
	const char * out=(const char *)lua_tostring(L,3);
	double y=(double)lua_tonumber(L,4);

	convrt_c(x, in, out, &y);

	return 0;
}

// long cpos_c(const char * str, const char * chars, long start)
static int _bind_cpos_c(lua_State *L) {
	if (!_lg_typecheck_cpos_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in long cpos_c(const char * str, const char * chars, long start) function, expected prototype:\nlong cpos_c(const char * str, const char * chars, long start)\nClass arguments details:\n");
	}

	const char * str=(const char *)lua_tostring(L,1);
	const char * chars=(const char *)lua_tostring(L,2);
	long start=(long)lua_tointeger(L,3);

	long lret = cpos_c(str, chars, start);
	lua_pushnumber(L,lret);

	return 1;
}

// long cposr_c(const char * str, const char * chars, long start)
static int _bind_cposr_c(lua_State *L) {
	if (!_lg_typecheck_cposr_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in long cposr_c(const char * str, const char * chars, long start) function, expected prototype:\nlong cposr_c(const char * str, const char * chars, long start)\nClass arguments details:\n");
	}

	const char * str=(const char *)lua_tostring(L,1);
	const char * chars=(const char *)lua_tostring(L,2);
	long start=(long)lua_tointeger(L,3);

	long lret = cposr_c(str, chars, start);
	lua_pushnumber(L,lret);

	return 1;
}

// void cvpool_c(const char * agent, int * update)
static int _bind_cvpool_c(lua_State *L) {
	if (!_lg_typecheck_cvpool_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void cvpool_c(const char * agent, int * update) function, expected prototype:\nvoid cvpool_c(const char * agent, int * update)\nClass arguments details:\n");
	}

	const char * agent=(const char *)lua_tostring(L,1);
	int update=(int)lua_tointeger(L,2);

	cvpool_c(agent, &update);

	return 0;
}

// void cyllat_c(double r, double lonc, double z, double * radius, double * lon, double * lat)
static int _bind_cyllat_c(lua_State *L) {
	if (!_lg_typecheck_cyllat_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void cyllat_c(double r, double lonc, double z, double * radius, double * lon, double * lat) function, expected prototype:\nvoid cyllat_c(double r, double lonc, double z, double * radius, double * lon, double * lat)\nClass arguments details:\n");
	}

	double r=(double)lua_tonumber(L,1);
	double lonc=(double)lua_tonumber(L,2);
	double z=(double)lua_tonumber(L,3);
	double radius=(double)lua_tonumber(L,4);
	double lon=(double)lua_tonumber(L,5);
	double lat=(double)lua_tonumber(L,6);

	cyllat_c(r, lonc, z, &radius, &lon, &lat);

	return 0;
}

// void cylsph_c(double r, double lonc, double z, double * radius, double * colat, double * lon)
static int _bind_cylsph_c(lua_State *L) {
	if (!_lg_typecheck_cylsph_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void cylsph_c(double r, double lonc, double z, double * radius, double * colat, double * lon) function, expected prototype:\nvoid cylsph_c(double r, double lonc, double z, double * radius, double * colat, double * lon)\nClass arguments details:\n");
	}

	double r=(double)lua_tonumber(L,1);
	double lonc=(double)lua_tonumber(L,2);
	double z=(double)lua_tonumber(L,3);
	double radius=(double)lua_tonumber(L,4);
	double colat=(double)lua_tonumber(L,5);
	double lon=(double)lua_tonumber(L,6);

	cylsph_c(r, lonc, z, &radius, &colat, &lon);

	return 0;
}

// void dafac_c(long handle, long n, long lenvals, const void * buffer)
static int _bind_dafac_c(lua_State *L) {
	if (!_lg_typecheck_dafac_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void dafac_c(long handle, long n, long lenvals, const void * buffer) function, expected prototype:\nvoid dafac_c(long handle, long n, long lenvals, const void * buffer)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);
	long n=(long)lua_tointeger(L,2);
	long lenvals=(long)lua_tointeger(L,3);
	void* buffer=(Luna< void >::check(L,4));

	dafac_c(handle, n, lenvals, buffer);

	return 0;
}

// void dafbbs_c(long handle)
static int _bind_dafbbs_c(lua_State *L) {
	if (!_lg_typecheck_dafbbs_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void dafbbs_c(long handle) function, expected prototype:\nvoid dafbbs_c(long handle)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);

	dafbbs_c(handle);

	return 0;
}

// void dafbfs_c(long handle)
static int _bind_dafbfs_c(lua_State *L) {
	if (!_lg_typecheck_dafbfs_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void dafbfs_c(long handle) function, expected prototype:\nvoid dafbfs_c(long handle)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);

	dafbfs_c(handle);

	return 0;
}

// void dafcls_c(long handle)
static int _bind_dafcls_c(lua_State *L) {
	if (!_lg_typecheck_dafcls_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void dafcls_c(long handle) function, expected prototype:\nvoid dafcls_c(long handle)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);

	dafcls_c(handle);

	return 0;
}

// void dafcs_c(long handle)
static int _bind_dafcs_c(lua_State *L) {
	if (!_lg_typecheck_dafcs_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void dafcs_c(long handle) function, expected prototype:\nvoid dafcs_c(long handle)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);

	dafcs_c(handle);

	return 0;
}

// void dafdc_c(long handle)
static int _bind_dafdc_c(lua_State *L) {
	if (!_lg_typecheck_dafdc_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void dafdc_c(long handle) function, expected prototype:\nvoid dafdc_c(long handle)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);

	dafdc_c(handle);

	return 0;
}

// void dafec_c(long handle, long bufsiz, long lenout, long * n, void * buffer, int * done)
static int _bind_dafec_c(lua_State *L) {
	if (!_lg_typecheck_dafec_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void dafec_c(long handle, long bufsiz, long lenout, long * n, void * buffer, int * done) function, expected prototype:\nvoid dafec_c(long handle, long bufsiz, long lenout, long * n, void * buffer, int * done)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);
	long bufsiz=(long)lua_tointeger(L,2);
	long lenout=(long)lua_tointeger(L,3);
	long n=(long)lua_tointeger(L,4);
	void* buffer=(Luna< void >::check(L,5));
	int done=(int)lua_tointeger(L,6);

	dafec_c(handle, bufsiz, lenout, &n, buffer, &done);

	return 0;
}

// void daffna_c(int * found)
static int _bind_daffna_c(lua_State *L) {
	if (!_lg_typecheck_daffna_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void daffna_c(int * found) function, expected prototype:\nvoid daffna_c(int * found)\nClass arguments details:\n");
	}

	int found=(int)lua_tointeger(L,1);

	daffna_c(&found);

	return 0;
}

// void daffpa_c(int * found)
static int _bind_daffpa_c(lua_State *L) {
	if (!_lg_typecheck_daffpa_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void daffpa_c(int * found) function, expected prototype:\nvoid daffpa_c(int * found)\nClass arguments details:\n");
	}

	int found=(int)lua_tointeger(L,1);

	daffpa_c(&found);

	return 0;
}

// void dafgda_c(long handle, long begin, long end, double * data)
static int _bind_dafgda_c(lua_State *L) {
	if (!_lg_typecheck_dafgda_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void dafgda_c(long handle, long begin, long end, double * data) function, expected prototype:\nvoid dafgda_c(long handle, long begin, long end, double * data)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);
	long begin=(long)lua_tointeger(L,2);
	long end=(long)lua_tointeger(L,3);
	double data=(double)lua_tonumber(L,4);

	dafgda_c(handle, begin, end, &data);

	return 0;
}

// void dafgn_c(long lenout, char * name)
static int _bind_dafgn_c(lua_State *L) {
	if (!_lg_typecheck_dafgn_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void dafgn_c(long lenout, char * name) function, expected prototype:\nvoid dafgn_c(long lenout, char * name)\nClass arguments details:\n");
	}

	long lenout=(long)lua_tointeger(L,1);
	char name=(char)lua_tointeger(L,2);

	dafgn_c(lenout, &name);

	return 0;
}

// void dafgsr_c(long handle, long recno, long begin, long end, double * data, int * found)
static int _bind_dafgsr_c(lua_State *L) {
	if (!_lg_typecheck_dafgsr_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void dafgsr_c(long handle, long recno, long begin, long end, double * data, int * found) function, expected prototype:\nvoid dafgsr_c(long handle, long recno, long begin, long end, double * data, int * found)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);
	long recno=(long)lua_tointeger(L,2);
	long begin=(long)lua_tointeger(L,3);
	long end=(long)lua_tointeger(L,4);
	double data=(double)lua_tonumber(L,5);
	int found=(int)lua_tointeger(L,6);

	dafgsr_c(handle, recno, begin, end, &data, &found);

	return 0;
}

// void dafopr_c(const char * fname, long * handle)
static int _bind_dafopr_c(lua_State *L) {
	if (!_lg_typecheck_dafopr_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void dafopr_c(const char * fname, long * handle) function, expected prototype:\nvoid dafopr_c(const char * fname, long * handle)\nClass arguments details:\n");
	}

	const char * fname=(const char *)lua_tostring(L,1);
	long handle=(long)lua_tointeger(L,2);

	dafopr_c(fname, &handle);

	return 0;
}

// void dafopw_c(const char * fname, long * handle)
static int _bind_dafopw_c(lua_State *L) {
	if (!_lg_typecheck_dafopw_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void dafopw_c(const char * fname, long * handle) function, expected prototype:\nvoid dafopw_c(const char * fname, long * handle)\nClass arguments details:\n");
	}

	const char * fname=(const char *)lua_tostring(L,1);
	long handle=(long)lua_tointeger(L,2);

	dafopw_c(fname, &handle);

	return 0;
}

// void dafrda_c(long handle, long begin, long end, double * data)
static int _bind_dafrda_c(lua_State *L) {
	if (!_lg_typecheck_dafrda_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void dafrda_c(long handle, long begin, long end, double * data) function, expected prototype:\nvoid dafrda_c(long handle, long begin, long end, double * data)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);
	long begin=(long)lua_tointeger(L,2);
	long end=(long)lua_tointeger(L,3);
	double data=(double)lua_tonumber(L,4);

	dafrda_c(handle, begin, end, &data);

	return 0;
}

// void dafrfr_c(long handle, long lenout, long * nd, long * ni, char * ifname, long * fward, long * bward, long * free)
static int _bind_dafrfr_c(lua_State *L) {
	if (!_lg_typecheck_dafrfr_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void dafrfr_c(long handle, long lenout, long * nd, long * ni, char * ifname, long * fward, long * bward, long * free) function, expected prototype:\nvoid dafrfr_c(long handle, long lenout, long * nd, long * ni, char * ifname, long * fward, long * bward, long * free)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);
	long lenout=(long)lua_tointeger(L,2);
	long nd=(long)lua_tointeger(L,3);
	long ni=(long)lua_tointeger(L,4);
	char ifname=(char)lua_tointeger(L,5);
	long fward=(long)lua_tointeger(L,6);
	long bward=(long)lua_tointeger(L,7);
	long free=(long)lua_tointeger(L,8);

	dafrfr_c(handle, lenout, &nd, &ni, &ifname, &fward, &bward, &free);

	return 0;
}

// void dafrs_c(const double * sum)
static int _bind_dafrs_c(lua_State *L) {
	if (!_lg_typecheck_dafrs_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void dafrs_c(const double * sum) function, expected prototype:\nvoid dafrs_c(const double * sum)\nClass arguments details:\n");
	}

	double sum=(double)lua_tonumber(L,1);

	dafrs_c(&sum);

	return 0;
}

// void dasac_c(long handle, long n, long buflen, const void * buffer)
static int _bind_dasac_c(lua_State *L) {
	if (!_lg_typecheck_dasac_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void dasac_c(long handle, long n, long buflen, const void * buffer) function, expected prototype:\nvoid dasac_c(long handle, long n, long buflen, const void * buffer)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);
	long n=(long)lua_tointeger(L,2);
	long buflen=(long)lua_tointeger(L,3);
	void* buffer=(Luna< void >::check(L,4));

	dasac_c(handle, n, buflen, buffer);

	return 0;
}

// void dascls_c(long handle)
static int _bind_dascls_c(lua_State *L) {
	if (!_lg_typecheck_dascls_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void dascls_c(long handle) function, expected prototype:\nvoid dascls_c(long handle)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);

	dascls_c(handle);

	return 0;
}

// void dasec_c(long handle, long bufsiz, long buflen, long * n, void * buffer, int * done)
static int _bind_dasec_c(lua_State *L) {
	if (!_lg_typecheck_dasec_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void dasec_c(long handle, long bufsiz, long buflen, long * n, void * buffer, int * done) function, expected prototype:\nvoid dasec_c(long handle, long bufsiz, long buflen, long * n, void * buffer, int * done)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);
	long bufsiz=(long)lua_tointeger(L,2);
	long buflen=(long)lua_tointeger(L,3);
	long n=(long)lua_tointeger(L,4);
	void* buffer=(Luna< void >::check(L,5));
	int done=(int)lua_tointeger(L,6);

	dasec_c(handle, bufsiz, buflen, &n, buffer, &done);

	return 0;
}

// void dasopr_c(const char * fname, long * handle)
static int _bind_dasopr_c(lua_State *L) {
	if (!_lg_typecheck_dasopr_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void dasopr_c(const char * fname, long * handle) function, expected prototype:\nvoid dasopr_c(const char * fname, long * handle)\nClass arguments details:\n");
	}

	const char * fname=(const char *)lua_tostring(L,1);
	long handle=(long)lua_tointeger(L,2);

	dasopr_c(fname, &handle);

	return 0;
}

// void deltet_c(double epoch, const char * eptype, double * delta)
static int _bind_deltet_c(lua_State *L) {
	if (!_lg_typecheck_deltet_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void deltet_c(double epoch, const char * eptype, double * delta) function, expected prototype:\nvoid deltet_c(double epoch, const char * eptype, double * delta)\nClass arguments details:\n");
	}

	double epoch=(double)lua_tonumber(L,1);
	const char * eptype=(const char *)lua_tostring(L,2);
	double delta=(double)lua_tonumber(L,3);

	deltet_c(epoch, eptype, &delta);

	return 0;
}

// void dp2hx_c(double number, long lenout, char * string, long * length)
static int _bind_dp2hx_c(lua_State *L) {
	if (!_lg_typecheck_dp2hx_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void dp2hx_c(double number, long lenout, char * string, long * length) function, expected prototype:\nvoid dp2hx_c(double number, long lenout, char * string, long * length)\nClass arguments details:\n");
	}

	double number=(double)lua_tonumber(L,1);
	long lenout=(long)lua_tointeger(L,2);
	char string=(char)lua_tointeger(L,3);
	long length=(long)lua_tointeger(L,4);

	dp2hx_c(number, lenout, &string, &length);

	return 0;
}

// double dpmax_c()
static int _bind_dpmax_c(lua_State *L) {
	if (!_lg_typecheck_dpmax_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double dpmax_c() function, expected prototype:\ndouble dpmax_c()\nClass arguments details:\n");
	}


	double lret = dpmax_c();
	lua_pushnumber(L,lret);

	return 1;
}

// double dpmax_()
static int _bind_dpmax_(lua_State *L) {
	if (!_lg_typecheck_dpmax_(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double dpmax_() function, expected prototype:\ndouble dpmax_()\nClass arguments details:\n");
	}


	double lret = dpmax_();
	lua_pushnumber(L,lret);

	return 1;
}

// double dpmin_c()
static int _bind_dpmin_c(lua_State *L) {
	if (!_lg_typecheck_dpmin_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double dpmin_c() function, expected prototype:\ndouble dpmin_c()\nClass arguments details:\n");
	}


	double lret = dpmin_c();
	lua_pushnumber(L,lret);

	return 1;
}

// double dpmin_()
static int _bind_dpmin_(lua_State *L) {
	if (!_lg_typecheck_dpmin_(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double dpmin_() function, expected prototype:\ndouble dpmin_()\nClass arguments details:\n");
	}


	double lret = dpmin_();
	lua_pushnumber(L,lret);

	return 1;
}

// double dpr_c()
static int _bind_dpr_c(lua_State *L) {
	if (!_lg_typecheck_dpr_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double dpr_c() function, expected prototype:\ndouble dpr_c()\nClass arguments details:\n");
	}


	double lret = dpr_c();
	lua_pushnumber(L,lret);

	return 1;
}

// void dvpool_c(const char * name)
static int _bind_dvpool_c(lua_State *L) {
	if (!_lg_typecheck_dvpool_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void dvpool_c(const char * name) function, expected prototype:\nvoid dvpool_c(const char * name)\nClass arguments details:\n");
	}

	const char * name=(const char *)lua_tostring(L,1);

	dvpool_c(name);

	return 0;
}

// double dvsep_c(const double * s1, const double * s2)
static int _bind_dvsep_c(lua_State *L) {
	if (!_lg_typecheck_dvsep_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double dvsep_c(const double * s1, const double * s2) function, expected prototype:\ndouble dvsep_c(const double * s1, const double * s2)\nClass arguments details:\n");
	}

	double s1=(double)lua_tonumber(L,1);
	double s2=(double)lua_tonumber(L,2);

	double lret = dvsep_c(&s1, &s2);
	lua_pushnumber(L,lret);

	return 1;
}

// void ekacec_c(long handle, long segno, long recno, const char * column, long nvals, long vallen, const void * cvals, int isnull)
static int _bind_ekacec_c(lua_State *L) {
	if (!_lg_typecheck_ekacec_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ekacec_c(long handle, long segno, long recno, const char * column, long nvals, long vallen, const void * cvals, int isnull) function, expected prototype:\nvoid ekacec_c(long handle, long segno, long recno, const char * column, long nvals, long vallen, const void * cvals, int isnull)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);
	long segno=(long)lua_tointeger(L,2);
	long recno=(long)lua_tointeger(L,3);
	const char * column=(const char *)lua_tostring(L,4);
	long nvals=(long)lua_tointeger(L,5);
	long vallen=(long)lua_tointeger(L,6);
	void* cvals=(Luna< void >::check(L,7));
	int isnull=(int)lua_tointeger(L,8);

	ekacec_c(handle, segno, recno, column, nvals, vallen, cvals, isnull);

	return 0;
}

// void ekaced_c(long handle, long segno, long recno, const char * column, long nvals, const double * dvals, int isnull)
static int _bind_ekaced_c(lua_State *L) {
	if (!_lg_typecheck_ekaced_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ekaced_c(long handle, long segno, long recno, const char * column, long nvals, const double * dvals, int isnull) function, expected prototype:\nvoid ekaced_c(long handle, long segno, long recno, const char * column, long nvals, const double * dvals, int isnull)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);
	long segno=(long)lua_tointeger(L,2);
	long recno=(long)lua_tointeger(L,3);
	const char * column=(const char *)lua_tostring(L,4);
	long nvals=(long)lua_tointeger(L,5);
	double dvals=(double)lua_tonumber(L,6);
	int isnull=(int)lua_tointeger(L,7);

	ekaced_c(handle, segno, recno, column, nvals, &dvals, isnull);

	return 0;
}

// void ekacei_c(long handle, long segno, long recno, const char * column, long nvals, const long * ivals, int isnull)
static int _bind_ekacei_c(lua_State *L) {
	if (!_lg_typecheck_ekacei_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ekacei_c(long handle, long segno, long recno, const char * column, long nvals, const long * ivals, int isnull) function, expected prototype:\nvoid ekacei_c(long handle, long segno, long recno, const char * column, long nvals, const long * ivals, int isnull)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);
	long segno=(long)lua_tointeger(L,2);
	long recno=(long)lua_tointeger(L,3);
	const char * column=(const char *)lua_tostring(L,4);
	long nvals=(long)lua_tointeger(L,5);
	long ivals=(long)lua_tointeger(L,6);
	int isnull=(int)lua_tointeger(L,7);

	ekacei_c(handle, segno, recno, column, nvals, &ivals, isnull);

	return 0;
}

// void ekaclc_c(long handle, long segno, const char * column, long vallen, const void * cvals, const long * entszs, const int * nlflgs, const long * rcptrs, long * wkindx)
static int _bind_ekaclc_c(lua_State *L) {
	if (!_lg_typecheck_ekaclc_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ekaclc_c(long handle, long segno, const char * column, long vallen, const void * cvals, const long * entszs, const int * nlflgs, const long * rcptrs, long * wkindx) function, expected prototype:\nvoid ekaclc_c(long handle, long segno, const char * column, long vallen, const void * cvals, const long * entszs, const int * nlflgs, const long * rcptrs, long * wkindx)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);
	long segno=(long)lua_tointeger(L,2);
	const char * column=(const char *)lua_tostring(L,3);
	long vallen=(long)lua_tointeger(L,4);
	void* cvals=(Luna< void >::check(L,5));
	long entszs=(long)lua_tointeger(L,6);
	int nlflgs=(int)lua_tointeger(L,7);
	long rcptrs=(long)lua_tointeger(L,8);
	long wkindx=(long)lua_tointeger(L,9);

	ekaclc_c(handle, segno, column, vallen, cvals, &entszs, &nlflgs, &rcptrs, &wkindx);

	return 0;
}

// void ekacld_c(long handle, long segno, const char * column, const double * dvals, const long * entszs, const int * nlflgs, const long * rcptrs, long * wkindx)
static int _bind_ekacld_c(lua_State *L) {
	if (!_lg_typecheck_ekacld_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ekacld_c(long handle, long segno, const char * column, const double * dvals, const long * entszs, const int * nlflgs, const long * rcptrs, long * wkindx) function, expected prototype:\nvoid ekacld_c(long handle, long segno, const char * column, const double * dvals, const long * entszs, const int * nlflgs, const long * rcptrs, long * wkindx)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);
	long segno=(long)lua_tointeger(L,2);
	const char * column=(const char *)lua_tostring(L,3);
	double dvals=(double)lua_tonumber(L,4);
	long entszs=(long)lua_tointeger(L,5);
	int nlflgs=(int)lua_tointeger(L,6);
	long rcptrs=(long)lua_tointeger(L,7);
	long wkindx=(long)lua_tointeger(L,8);

	ekacld_c(handle, segno, column, &dvals, &entszs, &nlflgs, &rcptrs, &wkindx);

	return 0;
}

// void ekacli_c(long handle, long segno, const char * column, const long * ivals, const long * entszs, const int * nlflgs, const long * rcptrs, long * wkindx)
static int _bind_ekacli_c(lua_State *L) {
	if (!_lg_typecheck_ekacli_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ekacli_c(long handle, long segno, const char * column, const long * ivals, const long * entszs, const int * nlflgs, const long * rcptrs, long * wkindx) function, expected prototype:\nvoid ekacli_c(long handle, long segno, const char * column, const long * ivals, const long * entszs, const int * nlflgs, const long * rcptrs, long * wkindx)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);
	long segno=(long)lua_tointeger(L,2);
	const char * column=(const char *)lua_tostring(L,3);
	long ivals=(long)lua_tointeger(L,4);
	long entszs=(long)lua_tointeger(L,5);
	int nlflgs=(int)lua_tointeger(L,6);
	long rcptrs=(long)lua_tointeger(L,7);
	long wkindx=(long)lua_tointeger(L,8);

	ekacli_c(handle, segno, column, &ivals, &entszs, &nlflgs, &rcptrs, &wkindx);

	return 0;
}

// void ekappr_c(long handle, long segno, long * recno)
static int _bind_ekappr_c(lua_State *L) {
	if (!_lg_typecheck_ekappr_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ekappr_c(long handle, long segno, long * recno) function, expected prototype:\nvoid ekappr_c(long handle, long segno, long * recno)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);
	long segno=(long)lua_tointeger(L,2);
	long recno=(long)lua_tointeger(L,3);

	ekappr_c(handle, segno, &recno);

	return 0;
}

// void ekbseg_c(long handle, const char * tabnam, long ncols, long cnmlen, const void * cnames, long declen, const void * decls, long * segno)
static int _bind_ekbseg_c(lua_State *L) {
	if (!_lg_typecheck_ekbseg_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ekbseg_c(long handle, const char * tabnam, long ncols, long cnmlen, const void * cnames, long declen, const void * decls, long * segno) function, expected prototype:\nvoid ekbseg_c(long handle, const char * tabnam, long ncols, long cnmlen, const void * cnames, long declen, const void * decls, long * segno)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);
	const char * tabnam=(const char *)lua_tostring(L,2);
	long ncols=(long)lua_tointeger(L,3);
	long cnmlen=(long)lua_tointeger(L,4);
	void* cnames=(Luna< void >::check(L,5));
	long declen=(long)lua_tointeger(L,6);
	void* decls=(Luna< void >::check(L,7));
	long segno=(long)lua_tointeger(L,8);

	ekbseg_c(handle, tabnam, ncols, cnmlen, cnames, declen, decls, &segno);

	return 0;
}

// void ekccnt_c(const char * table, long * ccount)
static int _bind_ekccnt_c(lua_State *L) {
	if (!_lg_typecheck_ekccnt_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ekccnt_c(const char * table, long * ccount) function, expected prototype:\nvoid ekccnt_c(const char * table, long * ccount)\nClass arguments details:\n");
	}

	const char * table=(const char *)lua_tostring(L,1);
	long ccount=(long)lua_tointeger(L,2);

	ekccnt_c(table, &ccount);

	return 0;
}

// void ekcls_c(long handle)
static int _bind_ekcls_c(lua_State *L) {
	if (!_lg_typecheck_ekcls_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ekcls_c(long handle) function, expected prototype:\nvoid ekcls_c(long handle)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);

	ekcls_c(handle);

	return 0;
}

// void ekdelr_c(long handle, long segno, long recno)
static int _bind_ekdelr_c(lua_State *L) {
	if (!_lg_typecheck_ekdelr_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ekdelr_c(long handle, long segno, long recno) function, expected prototype:\nvoid ekdelr_c(long handle, long segno, long recno)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);
	long segno=(long)lua_tointeger(L,2);
	long recno=(long)lua_tointeger(L,3);

	ekdelr_c(handle, segno, recno);

	return 0;
}

// void ekffld_c(long handle, long segno, long * rcptrs)
static int _bind_ekffld_c(lua_State *L) {
	if (!_lg_typecheck_ekffld_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ekffld_c(long handle, long segno, long * rcptrs) function, expected prototype:\nvoid ekffld_c(long handle, long segno, long * rcptrs)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);
	long segno=(long)lua_tointeger(L,2);
	long rcptrs=(long)lua_tointeger(L,3);

	ekffld_c(handle, segno, &rcptrs);

	return 0;
}

// void ekfind_c(const char * query, long lenout, long * nmrows, int * error, char * errmsg)
static int _bind_ekfind_c(lua_State *L) {
	if (!_lg_typecheck_ekfind_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ekfind_c(const char * query, long lenout, long * nmrows, int * error, char * errmsg) function, expected prototype:\nvoid ekfind_c(const char * query, long lenout, long * nmrows, int * error, char * errmsg)\nClass arguments details:\n");
	}

	const char * query=(const char *)lua_tostring(L,1);
	long lenout=(long)lua_tointeger(L,2);
	long nmrows=(long)lua_tointeger(L,3);
	int error=(int)lua_tointeger(L,4);
	char errmsg=(char)lua_tointeger(L,5);

	ekfind_c(query, lenout, &nmrows, &error, &errmsg);

	return 0;
}

// void ekgc_c(long selidx, long row, long elment, long lenout, char * cdata, int * null, int * found)
static int _bind_ekgc_c(lua_State *L) {
	if (!_lg_typecheck_ekgc_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ekgc_c(long selidx, long row, long elment, long lenout, char * cdata, int * null, int * found) function, expected prototype:\nvoid ekgc_c(long selidx, long row, long elment, long lenout, char * cdata, int * null, int * found)\nClass arguments details:\n");
	}

	long selidx=(long)lua_tointeger(L,1);
	long row=(long)lua_tointeger(L,2);
	long elment=(long)lua_tointeger(L,3);
	long lenout=(long)lua_tointeger(L,4);
	char cdata=(char)lua_tointeger(L,5);
	int null=(int)lua_tointeger(L,6);
	int found=(int)lua_tointeger(L,7);

	ekgc_c(selidx, row, elment, lenout, &cdata, &null, &found);

	return 0;
}

// void ekgd_c(long selidx, long row, long elment, double * ddata, int * null, int * found)
static int _bind_ekgd_c(lua_State *L) {
	if (!_lg_typecheck_ekgd_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ekgd_c(long selidx, long row, long elment, double * ddata, int * null, int * found) function, expected prototype:\nvoid ekgd_c(long selidx, long row, long elment, double * ddata, int * null, int * found)\nClass arguments details:\n");
	}

	long selidx=(long)lua_tointeger(L,1);
	long row=(long)lua_tointeger(L,2);
	long elment=(long)lua_tointeger(L,3);
	double ddata=(double)lua_tonumber(L,4);
	int null=(int)lua_tointeger(L,5);
	int found=(int)lua_tointeger(L,6);

	ekgd_c(selidx, row, elment, &ddata, &null, &found);

	return 0;
}

// void ekgi_c(long selidx, long row, long elment, long * idata, int * null, int * found)
static int _bind_ekgi_c(lua_State *L) {
	if (!_lg_typecheck_ekgi_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ekgi_c(long selidx, long row, long elment, long * idata, int * null, int * found) function, expected prototype:\nvoid ekgi_c(long selidx, long row, long elment, long * idata, int * null, int * found)\nClass arguments details:\n");
	}

	long selidx=(long)lua_tointeger(L,1);
	long row=(long)lua_tointeger(L,2);
	long elment=(long)lua_tointeger(L,3);
	long idata=(long)lua_tointeger(L,4);
	int null=(int)lua_tointeger(L,5);
	int found=(int)lua_tointeger(L,6);

	ekgi_c(selidx, row, elment, &idata, &null, &found);

	return 0;
}

// void ekifld_c(long handle, const char * tabnam, long ncols, long nrows, long cnmlen, const void * cnames, long declen, const void * decls, long * segno, long * rcptrs)
static int _bind_ekifld_c(lua_State *L) {
	if (!_lg_typecheck_ekifld_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ekifld_c(long handle, const char * tabnam, long ncols, long nrows, long cnmlen, const void * cnames, long declen, const void * decls, long * segno, long * rcptrs) function, expected prototype:\nvoid ekifld_c(long handle, const char * tabnam, long ncols, long nrows, long cnmlen, const void * cnames, long declen, const void * decls, long * segno, long * rcptrs)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);
	const char * tabnam=(const char *)lua_tostring(L,2);
	long ncols=(long)lua_tointeger(L,3);
	long nrows=(long)lua_tointeger(L,4);
	long cnmlen=(long)lua_tointeger(L,5);
	void* cnames=(Luna< void >::check(L,6));
	long declen=(long)lua_tointeger(L,7);
	void* decls=(Luna< void >::check(L,8));
	long segno=(long)lua_tointeger(L,9);
	long rcptrs=(long)lua_tointeger(L,10);

	ekifld_c(handle, tabnam, ncols, nrows, cnmlen, cnames, declen, decls, &segno, &rcptrs);

	return 0;
}

// void ekinsr_c(long handle, long segno, long recno)
static int _bind_ekinsr_c(lua_State *L) {
	if (!_lg_typecheck_ekinsr_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ekinsr_c(long handle, long segno, long recno) function, expected prototype:\nvoid ekinsr_c(long handle, long segno, long recno)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);
	long segno=(long)lua_tointeger(L,2);
	long recno=(long)lua_tointeger(L,3);

	ekinsr_c(handle, segno, recno);

	return 0;
}

// void eklef_c(const char * fname, long * handle)
static int _bind_eklef_c(lua_State *L) {
	if (!_lg_typecheck_eklef_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void eklef_c(const char * fname, long * handle) function, expected prototype:\nvoid eklef_c(const char * fname, long * handle)\nClass arguments details:\n");
	}

	const char * fname=(const char *)lua_tostring(L,1);
	long handle=(long)lua_tointeger(L,2);

	eklef_c(fname, &handle);

	return 0;
}

// long eknelt_c(long selidx, long row)
static int _bind_eknelt_c(lua_State *L) {
	if (!_lg_typecheck_eknelt_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in long eknelt_c(long selidx, long row) function, expected prototype:\nlong eknelt_c(long selidx, long row)\nClass arguments details:\n");
	}

	long selidx=(long)lua_tointeger(L,1);
	long row=(long)lua_tointeger(L,2);

	long lret = eknelt_c(selidx, row);
	lua_pushnumber(L,lret);

	return 1;
}

// long eknseg_c(long handle)
static int _bind_eknseg_c(lua_State *L) {
	if (!_lg_typecheck_eknseg_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in long eknseg_c(long handle) function, expected prototype:\nlong eknseg_c(long handle)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);

	long lret = eknseg_c(handle);
	lua_pushnumber(L,lret);

	return 1;
}

// void ekntab_c(long * n)
static int _bind_ekntab_c(lua_State *L) {
	if (!_lg_typecheck_ekntab_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ekntab_c(long * n) function, expected prototype:\nvoid ekntab_c(long * n)\nClass arguments details:\n");
	}

	long n=(long)lua_tointeger(L,1);

	ekntab_c(&n);

	return 0;
}

// void ekopn_c(const char * fname, const char * ifname, long ncomch, long * handle)
static int _bind_ekopn_c(lua_State *L) {
	if (!_lg_typecheck_ekopn_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ekopn_c(const char * fname, const char * ifname, long ncomch, long * handle) function, expected prototype:\nvoid ekopn_c(const char * fname, const char * ifname, long ncomch, long * handle)\nClass arguments details:\n");
	}

	const char * fname=(const char *)lua_tostring(L,1);
	const char * ifname=(const char *)lua_tostring(L,2);
	long ncomch=(long)lua_tointeger(L,3);
	long handle=(long)lua_tointeger(L,4);

	ekopn_c(fname, ifname, ncomch, &handle);

	return 0;
}

// void ekopr_c(const char * fname, long * handle)
static int _bind_ekopr_c(lua_State *L) {
	if (!_lg_typecheck_ekopr_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ekopr_c(const char * fname, long * handle) function, expected prototype:\nvoid ekopr_c(const char * fname, long * handle)\nClass arguments details:\n");
	}

	const char * fname=(const char *)lua_tostring(L,1);
	long handle=(long)lua_tointeger(L,2);

	ekopr_c(fname, &handle);

	return 0;
}

// void ekops_c(long * handle)
static int _bind_ekops_c(lua_State *L) {
	if (!_lg_typecheck_ekops_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ekops_c(long * handle) function, expected prototype:\nvoid ekops_c(long * handle)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);

	ekops_c(&handle);

	return 0;
}

// void ekopw_c(const char * fname, long * handle)
static int _bind_ekopw_c(lua_State *L) {
	if (!_lg_typecheck_ekopw_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ekopw_c(const char * fname, long * handle) function, expected prototype:\nvoid ekopw_c(const char * fname, long * handle)\nClass arguments details:\n");
	}

	const char * fname=(const char *)lua_tostring(L,1);
	long handle=(long)lua_tointeger(L,2);

	ekopw_c(fname, &handle);

	return 0;
}

// void ekpsel_c(const char * query, long msglen, long tablen, long collen, long * n, long * xbegs, long * xends, SpiceDataType * xtypes, SpiceEKExprClass * xclass, void * tabs, void * cols, int * error, char * errmsg)
static int _bind_ekpsel_c(lua_State *L) {
	if (!_lg_typecheck_ekpsel_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ekpsel_c(const char * query, long msglen, long tablen, long collen, long * n, long * xbegs, long * xends, SpiceDataType * xtypes, SpiceEKExprClass * xclass, void * tabs, void * cols, int * error, char * errmsg) function, expected prototype:\nvoid ekpsel_c(const char * query, long msglen, long tablen, long collen, long * n, long * xbegs, long * xends, SpiceDataType * xtypes, SpiceEKExprClass * xclass, void * tabs, void * cols, int * error, char * errmsg)\nClass arguments details:\n");
	}

	const char * query=(const char *)lua_tostring(L,1);
	long msglen=(long)lua_tointeger(L,2);
	long tablen=(long)lua_tointeger(L,3);
	long collen=(long)lua_tointeger(L,4);
	long n=(long)lua_tointeger(L,5);
	long xbegs=(long)lua_tointeger(L,6);
	long xends=(long)lua_tointeger(L,7);
	SpiceDataType xtypes=(SpiceDataType)lua_tointeger(L,8);
	SpiceEKExprClass xclass=(SpiceEKExprClass)lua_tointeger(L,9);
	void* tabs=(Luna< void >::check(L,10));
	void* cols=(Luna< void >::check(L,11));
	int error=(int)lua_tointeger(L,12);
	char errmsg=(char)lua_tointeger(L,13);

	ekpsel_c(query, msglen, tablen, collen, &n, &xbegs, &xends, &xtypes, &xclass, tabs, cols, &error, &errmsg);

	return 0;
}

// void ekrcec_c(long handle, long segno, long recno, const char * column, long lenout, long * nvals, void * cvals, int * isnull)
static int _bind_ekrcec_c(lua_State *L) {
	if (!_lg_typecheck_ekrcec_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ekrcec_c(long handle, long segno, long recno, const char * column, long lenout, long * nvals, void * cvals, int * isnull) function, expected prototype:\nvoid ekrcec_c(long handle, long segno, long recno, const char * column, long lenout, long * nvals, void * cvals, int * isnull)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);
	long segno=(long)lua_tointeger(L,2);
	long recno=(long)lua_tointeger(L,3);
	const char * column=(const char *)lua_tostring(L,4);
	long lenout=(long)lua_tointeger(L,5);
	long nvals=(long)lua_tointeger(L,6);
	void* cvals=(Luna< void >::check(L,7));
	int isnull=(int)lua_tointeger(L,8);

	ekrcec_c(handle, segno, recno, column, lenout, &nvals, cvals, &isnull);

	return 0;
}

// void ekrced_c(long handle, long segno, long recno, const char * column, long * nvals, double * dvals, int * isnull)
static int _bind_ekrced_c(lua_State *L) {
	if (!_lg_typecheck_ekrced_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ekrced_c(long handle, long segno, long recno, const char * column, long * nvals, double * dvals, int * isnull) function, expected prototype:\nvoid ekrced_c(long handle, long segno, long recno, const char * column, long * nvals, double * dvals, int * isnull)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);
	long segno=(long)lua_tointeger(L,2);
	long recno=(long)lua_tointeger(L,3);
	const char * column=(const char *)lua_tostring(L,4);
	long nvals=(long)lua_tointeger(L,5);
	double dvals=(double)lua_tonumber(L,6);
	int isnull=(int)lua_tointeger(L,7);

	ekrced_c(handle, segno, recno, column, &nvals, &dvals, &isnull);

	return 0;
}

// void ekrcei_c(long handle, long segno, long recno, const char * column, long * nvals, long * ivals, int * isnull)
static int _bind_ekrcei_c(lua_State *L) {
	if (!_lg_typecheck_ekrcei_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ekrcei_c(long handle, long segno, long recno, const char * column, long * nvals, long * ivals, int * isnull) function, expected prototype:\nvoid ekrcei_c(long handle, long segno, long recno, const char * column, long * nvals, long * ivals, int * isnull)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);
	long segno=(long)lua_tointeger(L,2);
	long recno=(long)lua_tointeger(L,3);
	const char * column=(const char *)lua_tostring(L,4);
	long nvals=(long)lua_tointeger(L,5);
	long ivals=(long)lua_tointeger(L,6);
	int isnull=(int)lua_tointeger(L,7);

	ekrcei_c(handle, segno, recno, column, &nvals, &ivals, &isnull);

	return 0;
}

// void ektnam_c(long n, long lenout, char * table)
static int _bind_ektnam_c(lua_State *L) {
	if (!_lg_typecheck_ektnam_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ektnam_c(long n, long lenout, char * table) function, expected prototype:\nvoid ektnam_c(long n, long lenout, char * table)\nClass arguments details:\n");
	}

	long n=(long)lua_tointeger(L,1);
	long lenout=(long)lua_tointeger(L,2);
	char table=(char)lua_tointeger(L,3);

	ektnam_c(n, lenout, &table);

	return 0;
}

// void ekucec_c(long handle, long segno, long recno, const char * column, long nvals, long vallen, const void * cvals, int isnull)
static int _bind_ekucec_c(lua_State *L) {
	if (!_lg_typecheck_ekucec_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ekucec_c(long handle, long segno, long recno, const char * column, long nvals, long vallen, const void * cvals, int isnull) function, expected prototype:\nvoid ekucec_c(long handle, long segno, long recno, const char * column, long nvals, long vallen, const void * cvals, int isnull)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);
	long segno=(long)lua_tointeger(L,2);
	long recno=(long)lua_tointeger(L,3);
	const char * column=(const char *)lua_tostring(L,4);
	long nvals=(long)lua_tointeger(L,5);
	long vallen=(long)lua_tointeger(L,6);
	void* cvals=(Luna< void >::check(L,7));
	int isnull=(int)lua_tointeger(L,8);

	ekucec_c(handle, segno, recno, column, nvals, vallen, cvals, isnull);

	return 0;
}

// void ekuef_c(long handle)
static int _bind_ekuef_c(lua_State *L) {
	if (!_lg_typecheck_ekuef_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ekuef_c(long handle) function, expected prototype:\nvoid ekuef_c(long handle)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);

	ekuef_c(handle);

	return 0;
}

// int eqstr_c(const char * a, const char * b)
static int _bind_eqstr_c(lua_State *L) {
	if (!_lg_typecheck_eqstr_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int eqstr_c(const char * a, const char * b) function, expected prototype:\nint eqstr_c(const char * a, const char * b)\nClass arguments details:\n");
	}

	const char * a=(const char *)lua_tostring(L,1);
	const char * b=(const char *)lua_tostring(L,2);

	int lret = eqstr_c(a, b);
	lua_pushnumber(L,lret);

	return 1;
}

// void erract_c(const char * operation, long lenout, char * action)
static int _bind_erract_c(lua_State *L) {
	if (!_lg_typecheck_erract_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void erract_c(const char * operation, long lenout, char * action) function, expected prototype:\nvoid erract_c(const char * operation, long lenout, char * action)\nClass arguments details:\n");
	}

	const char * operation=(const char *)lua_tostring(L,1);
	long lenout=(long)lua_tointeger(L,2);
	char action=(char)lua_tointeger(L,3);

	erract_c(operation, lenout, &action);

	return 0;
}

// void errch_c(const char * marker, const char * string)
static int _bind_errch_c(lua_State *L) {
	if (!_lg_typecheck_errch_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void errch_c(const char * marker, const char * string) function, expected prototype:\nvoid errch_c(const char * marker, const char * string)\nClass arguments details:\n");
	}

	const char * marker=(const char *)lua_tostring(L,1);
	const char * string=(const char *)lua_tostring(L,2);

	errch_c(marker, string);

	return 0;
}

// void errdev_c(const char * operation, long lenout, char * device)
static int _bind_errdev_c(lua_State *L) {
	if (!_lg_typecheck_errdev_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void errdev_c(const char * operation, long lenout, char * device) function, expected prototype:\nvoid errdev_c(const char * operation, long lenout, char * device)\nClass arguments details:\n");
	}

	const char * operation=(const char *)lua_tostring(L,1);
	long lenout=(long)lua_tointeger(L,2);
	char device=(char)lua_tointeger(L,3);

	errdev_c(operation, lenout, &device);

	return 0;
}

// void errdp_c(const char * marker, double number)
static int _bind_errdp_c(lua_State *L) {
	if (!_lg_typecheck_errdp_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void errdp_c(const char * marker, double number) function, expected prototype:\nvoid errdp_c(const char * marker, double number)\nClass arguments details:\n");
	}

	const char * marker=(const char *)lua_tostring(L,1);
	double number=(double)lua_tonumber(L,2);

	errdp_c(marker, number);

	return 0;
}

// void errint_c(const char * marker, long number)
static int _bind_errint_c(lua_State *L) {
	if (!_lg_typecheck_errint_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void errint_c(const char * marker, long number) function, expected prototype:\nvoid errint_c(const char * marker, long number)\nClass arguments details:\n");
	}

	const char * marker=(const char *)lua_tostring(L,1);
	long number=(long)lua_tointeger(L,2);

	errint_c(marker, number);

	return 0;
}

// void errprt_c(const char * operation, long lenout, char * list)
static int _bind_errprt_c(lua_State *L) {
	if (!_lg_typecheck_errprt_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void errprt_c(const char * operation, long lenout, char * list) function, expected prototype:\nvoid errprt_c(const char * operation, long lenout, char * list)\nClass arguments details:\n");
	}

	const char * operation=(const char *)lua_tostring(L,1);
	long lenout=(long)lua_tointeger(L,2);
	char list=(char)lua_tointeger(L,3);

	errprt_c(operation, lenout, &list);

	return 0;
}

// long esrchc_c(const char * value, long ndim, long lenvals, const void * array)
static int _bind_esrchc_c(lua_State *L) {
	if (!_lg_typecheck_esrchc_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in long esrchc_c(const char * value, long ndim, long lenvals, const void * array) function, expected prototype:\nlong esrchc_c(const char * value, long ndim, long lenvals, const void * array)\nClass arguments details:\n");
	}

	const char * value=(const char *)lua_tostring(L,1);
	long ndim=(long)lua_tointeger(L,2);
	long lenvals=(long)lua_tointeger(L,3);
	void* array=(Luna< void >::check(L,4));

	long lret = esrchc_c(value, ndim, lenvals, array);
	lua_pushnumber(L,lret);

	return 1;
}

// void etcal_c(double et, long lenout, char * string)
static int _bind_etcal_c(lua_State *L) {
	if (!_lg_typecheck_etcal_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void etcal_c(double et, long lenout, char * string) function, expected prototype:\nvoid etcal_c(double et, long lenout, char * string)\nClass arguments details:\n");
	}

	double et=(double)lua_tonumber(L,1);
	long lenout=(long)lua_tointeger(L,2);
	char string=(char)lua_tointeger(L,3);

	etcal_c(et, lenout, &string);

	return 0;
}

// void et2lst_c(double et, long body, double lon, const char * type, long timlen, long ampmlen, long * hr, long * mn, long * sc, char * time, char * ampm)
static int _bind_et2lst_c(lua_State *L) {
	if (!_lg_typecheck_et2lst_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void et2lst_c(double et, long body, double lon, const char * type, long timlen, long ampmlen, long * hr, long * mn, long * sc, char * time, char * ampm) function, expected prototype:\nvoid et2lst_c(double et, long body, double lon, const char * type, long timlen, long ampmlen, long * hr, long * mn, long * sc, char * time, char * ampm)\nClass arguments details:\n");
	}

	double et=(double)lua_tonumber(L,1);
	long body=(long)lua_tointeger(L,2);
	double lon=(double)lua_tonumber(L,3);
	const char * type=(const char *)lua_tostring(L,4);
	long timlen=(long)lua_tointeger(L,5);
	long ampmlen=(long)lua_tointeger(L,6);
	long hr=(long)lua_tointeger(L,7);
	long mn=(long)lua_tointeger(L,8);
	long sc=(long)lua_tointeger(L,9);
	char time=(char)lua_tointeger(L,10);
	char ampm=(char)lua_tointeger(L,11);

	et2lst_c(et, body, lon, type, timlen, ampmlen, &hr, &mn, &sc, &time, &ampm);

	return 0;
}

// void et2utc_c(double et, const char * format, long prec, long lenout, char * utcstr)
static int _bind_et2utc_c(lua_State *L) {
	if (!_lg_typecheck_et2utc_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void et2utc_c(double et, const char * format, long prec, long lenout, char * utcstr) function, expected prototype:\nvoid et2utc_c(double et, const char * format, long prec, long lenout, char * utcstr)\nClass arguments details:\n");
	}

	double et=(double)lua_tonumber(L,1);
	const char * format=(const char *)lua_tostring(L,2);
	long prec=(long)lua_tointeger(L,3);
	long lenout=(long)lua_tointeger(L,4);
	char utcstr=(char)lua_tointeger(L,5);

	et2utc_c(et, format, prec, lenout, &utcstr);

	return 0;
}

// int exists_c(const char * name)
static int _bind_exists_c(lua_State *L) {
	if (!_lg_typecheck_exists_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int exists_c(const char * name) function, expected prototype:\nint exists_c(const char * name)\nClass arguments details:\n");
	}

	const char * name=(const char *)lua_tostring(L,1);

	int lret = exists_c(name);
	lua_pushnumber(L,lret);

	return 1;
}

// void expool_c(const char * name, int * found)
static int _bind_expool_c(lua_State *L) {
	if (!_lg_typecheck_expool_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void expool_c(const char * name, int * found) function, expected prototype:\nvoid expool_c(const char * name, int * found)\nClass arguments details:\n");
	}

	const char * name=(const char *)lua_tostring(L,1);
	int found=(int)lua_tointeger(L,2);

	expool_c(name, &found);

	return 0;
}

// int failed_c()
static int _bind_failed_c(lua_State *L) {
	if (!_lg_typecheck_failed_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int failed_c() function, expected prototype:\nint failed_c()\nClass arguments details:\n");
	}


	int lret = failed_c();
	lua_pushnumber(L,lret);

	return 1;
}

// void frinfo_c(long frcode, long * cent, long * clss, long * clssid, int * found)
static int _bind_frinfo_c(lua_State *L) {
	if (!_lg_typecheck_frinfo_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void frinfo_c(long frcode, long * cent, long * clss, long * clssid, int * found) function, expected prototype:\nvoid frinfo_c(long frcode, long * cent, long * clss, long * clssid, int * found)\nClass arguments details:\n");
	}

	long frcode=(long)lua_tointeger(L,1);
	long cent=(long)lua_tointeger(L,2);
	long clss=(long)lua_tointeger(L,3);
	long clssid=(long)lua_tointeger(L,4);
	int found=(int)lua_tointeger(L,5);

	frinfo_c(frcode, &cent, &clss, &clssid, &found);

	return 0;
}

// void frmnam_c(long frcode, long lenout, char * frname)
static int _bind_frmnam_c(lua_State *L) {
	if (!_lg_typecheck_frmnam_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void frmnam_c(long frcode, long lenout, char * frname) function, expected prototype:\nvoid frmnam_c(long frcode, long lenout, char * frname)\nClass arguments details:\n");
	}

	long frcode=(long)lua_tointeger(L,1);
	long lenout=(long)lua_tointeger(L,2);
	char frname=(char)lua_tointeger(L,3);

	frmnam_c(frcode, lenout, &frname);

	return 0;
}

// void ftncls_c(long unit)
static int _bind_ftncls_c(lua_State *L) {
	if (!_lg_typecheck_ftncls_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ftncls_c(long unit) function, expected prototype:\nvoid ftncls_c(long unit)\nClass arguments details:\n");
	}

	long unit=(long)lua_tointeger(L,1);

	ftncls_c(unit);

	return 0;
}

// void furnsh_c(const char * file)
static int _bind_furnsh_c(lua_State *L) {
	if (!_lg_typecheck_furnsh_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void furnsh_c(const char * file) function, expected prototype:\nvoid furnsh_c(const char * file)\nClass arguments details:\n");
	}

	const char * file=(const char *)lua_tostring(L,1);

	furnsh_c(file);

	return 0;
}

// void gcpool_c(const char * name, long start, long room, long lenout, long * n, void * cvals, int * found)
static int _bind_gcpool_c(lua_State *L) {
	if (!_lg_typecheck_gcpool_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void gcpool_c(const char * name, long start, long room, long lenout, long * n, void * cvals, int * found) function, expected prototype:\nvoid gcpool_c(const char * name, long start, long room, long lenout, long * n, void * cvals, int * found)\nClass arguments details:\n");
	}

	const char * name=(const char *)lua_tostring(L,1);
	long start=(long)lua_tointeger(L,2);
	long room=(long)lua_tointeger(L,3);
	long lenout=(long)lua_tointeger(L,4);
	long n=(long)lua_tointeger(L,5);
	void* cvals=(Luna< void >::check(L,6));
	int found=(int)lua_tointeger(L,7);

	gcpool_c(name, start, room, lenout, &n, cvals, &found);

	return 0;
}

// void gdpool_c(const char * name, long start, long room, long * n, double * values, int * found)
static int _bind_gdpool_c(lua_State *L) {
	if (!_lg_typecheck_gdpool_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void gdpool_c(const char * name, long start, long room, long * n, double * values, int * found) function, expected prototype:\nvoid gdpool_c(const char * name, long start, long room, long * n, double * values, int * found)\nClass arguments details:\n");
	}

	const char * name=(const char *)lua_tostring(L,1);
	long start=(long)lua_tointeger(L,2);
	long room=(long)lua_tointeger(L,3);
	long n=(long)lua_tointeger(L,4);
	double values=(double)lua_tonumber(L,5);
	int found=(int)lua_tointeger(L,6);

	gdpool_c(name, start, room, &n, &values, &found);

	return 0;
}

// void getelm_c(long frstyr, long lineln, const void * lines, double * epoch, double * elems)
static int _bind_getelm_c(lua_State *L) {
	if (!_lg_typecheck_getelm_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void getelm_c(long frstyr, long lineln, const void * lines, double * epoch, double * elems) function, expected prototype:\nvoid getelm_c(long frstyr, long lineln, const void * lines, double * epoch, double * elems)\nClass arguments details:\n");
	}

	long frstyr=(long)lua_tointeger(L,1);
	long lineln=(long)lua_tointeger(L,2);
	void* lines=(Luna< void >::check(L,3));
	double epoch=(double)lua_tonumber(L,4);
	double elems=(double)lua_tonumber(L,5);

	getelm_c(frstyr, lineln, lines, &epoch, &elems);

	return 0;
}

// void getfat_c(const char * file, long arclen, long typlen, char * arch, char * type)
static int _bind_getfat_c(lua_State *L) {
	if (!_lg_typecheck_getfat_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void getfat_c(const char * file, long arclen, long typlen, char * arch, char * type) function, expected prototype:\nvoid getfat_c(const char * file, long arclen, long typlen, char * arch, char * type)\nClass arguments details:\n");
	}

	const char * file=(const char *)lua_tostring(L,1);
	long arclen=(long)lua_tointeger(L,2);
	long typlen=(long)lua_tointeger(L,3);
	char arch=(char)lua_tointeger(L,4);
	char type=(char)lua_tointeger(L,5);

	getfat_c(file, arclen, typlen, &arch, &type);

	return 0;
}

// void getmsg_c(const char * option, long lenout, char * msg)
static int _bind_getmsg_c(lua_State *L) {
	if (!_lg_typecheck_getmsg_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void getmsg_c(const char * option, long lenout, char * msg) function, expected prototype:\nvoid getmsg_c(const char * option, long lenout, char * msg)\nClass arguments details:\n");
	}

	const char * option=(const char *)lua_tostring(L,1);
	long lenout=(long)lua_tointeger(L,2);
	char msg=(char)lua_tointeger(L,3);

	getmsg_c(option, lenout, &msg);

	return 0;
}

// int gfbail_c()
static int _bind_gfbail_c(lua_State *L) {
	if (!_lg_typecheck_gfbail_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int gfbail_c() function, expected prototype:\nint gfbail_c()\nClass arguments details:\n");
	}


	int lret = gfbail_c();
	lua_pushnumber(L,lret);

	return 1;
}

// void gfclrh_c()
static int _bind_gfclrh_c(lua_State *L) {
	if (!_lg_typecheck_gfclrh_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void gfclrh_c() function, expected prototype:\nvoid gfclrh_c()\nClass arguments details:\n");
	}


	gfclrh_c();

	return 0;
}

// void gfinth_c(int sigcode)
static int _bind_gfinth_c(lua_State *L) {
	if (!_lg_typecheck_gfinth_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void gfinth_c(int sigcode) function, expected prototype:\nvoid gfinth_c(int sigcode)\nClass arguments details:\n");
	}

	int sigcode=(int)lua_tointeger(L,1);

	gfinth_c(sigcode);

	return 0;
}

// void gfrefn_c(double t1, double t2, int s1, int s2, double * t)
static int _bind_gfrefn_c(lua_State *L) {
	if (!_lg_typecheck_gfrefn_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void gfrefn_c(double t1, double t2, int s1, int s2, double * t) function, expected prototype:\nvoid gfrefn_c(double t1, double t2, int s1, int s2, double * t)\nClass arguments details:\n");
	}

	double t1=(double)lua_tonumber(L,1);
	double t2=(double)lua_tonumber(L,2);
	int s1=(int)lua_tointeger(L,3);
	int s2=(int)lua_tointeger(L,4);
	double t=(double)lua_tonumber(L,5);

	gfrefn_c(t1, t2, s1, s2, &t);

	return 0;
}

// void gfrepf_c()
static int _bind_gfrepf_c(lua_State *L) {
	if (!_lg_typecheck_gfrepf_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void gfrepf_c() function, expected prototype:\nvoid gfrepf_c()\nClass arguments details:\n");
	}


	gfrepf_c();

	return 0;
}

// void gfrepu_c(double ivbeg, double ivend, double time)
static int _bind_gfrepu_c(lua_State *L) {
	if (!_lg_typecheck_gfrepu_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void gfrepu_c(double ivbeg, double ivend, double time) function, expected prototype:\nvoid gfrepu_c(double ivbeg, double ivend, double time)\nClass arguments details:\n");
	}

	double ivbeg=(double)lua_tonumber(L,1);
	double ivend=(double)lua_tonumber(L,2);
	double time=(double)lua_tonumber(L,3);

	gfrepu_c(ivbeg, ivend, time);

	return 0;
}

// void gfsstp_c(double step)
static int _bind_gfsstp_c(lua_State *L) {
	if (!_lg_typecheck_gfsstp_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void gfsstp_c(double step) function, expected prototype:\nvoid gfsstp_c(double step)\nClass arguments details:\n");
	}

	double step=(double)lua_tonumber(L,1);

	gfsstp_c(step);

	return 0;
}

// void gfstep_c(double time, double * step)
static int _bind_gfstep_c(lua_State *L) {
	if (!_lg_typecheck_gfstep_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void gfstep_c(double time, double * step) function, expected prototype:\nvoid gfstep_c(double time, double * step)\nClass arguments details:\n");
	}

	double time=(double)lua_tonumber(L,1);
	double step=(double)lua_tonumber(L,2);

	gfstep_c(time, &step);

	return 0;
}

// void gipool_c(const char * name, long start, long room, long * n, long * ivals, int * found)
static int _bind_gipool_c(lua_State *L) {
	if (!_lg_typecheck_gipool_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void gipool_c(const char * name, long start, long room, long * n, long * ivals, int * found) function, expected prototype:\nvoid gipool_c(const char * name, long start, long room, long * n, long * ivals, int * found)\nClass arguments details:\n");
	}

	const char * name=(const char *)lua_tostring(L,1);
	long start=(long)lua_tointeger(L,2);
	long room=(long)lua_tointeger(L,3);
	long n=(long)lua_tointeger(L,4);
	long ivals=(long)lua_tointeger(L,5);
	int found=(int)lua_tointeger(L,6);

	gipool_c(name, start, room, &n, &ivals, &found);

	return 0;
}

// void gnpool_c(const char * name, long start, long room, long lenout, long * n, void * kvars, int * found)
static int _bind_gnpool_c(lua_State *L) {
	if (!_lg_typecheck_gnpool_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void gnpool_c(const char * name, long start, long room, long lenout, long * n, void * kvars, int * found) function, expected prototype:\nvoid gnpool_c(const char * name, long start, long room, long lenout, long * n, void * kvars, int * found)\nClass arguments details:\n");
	}

	const char * name=(const char *)lua_tostring(L,1);
	long start=(long)lua_tointeger(L,2);
	long room=(long)lua_tointeger(L,3);
	long lenout=(long)lua_tointeger(L,4);
	long n=(long)lua_tointeger(L,5);
	void* kvars=(Luna< void >::check(L,6));
	int found=(int)lua_tointeger(L,7);

	gnpool_c(name, start, room, lenout, &n, kvars, &found);

	return 0;
}

// double halfpi_c()
static int _bind_halfpi_c(lua_State *L) {
	if (!_lg_typecheck_halfpi_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double halfpi_c() function, expected prototype:\ndouble halfpi_c()\nClass arguments details:\n");
	}


	double lret = halfpi_c();
	lua_pushnumber(L,lret);

	return 1;
}

// void hx2dp_c(const char * string, long lenout, double * number, int * error, char * errmsg)
static int _bind_hx2dp_c(lua_State *L) {
	if (!_lg_typecheck_hx2dp_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void hx2dp_c(const char * string, long lenout, double * number, int * error, char * errmsg) function, expected prototype:\nvoid hx2dp_c(const char * string, long lenout, double * number, int * error, char * errmsg)\nClass arguments details:\n");
	}

	const char * string=(const char *)lua_tostring(L,1);
	long lenout=(long)lua_tointeger(L,2);
	double number=(double)lua_tonumber(L,3);
	int error=(int)lua_tointeger(L,4);
	char errmsg=(char)lua_tointeger(L,5);

	hx2dp_c(string, lenout, &number, &error, &errmsg);

	return 0;
}

// long intmax_c()
static int _bind_intmax_c(lua_State *L) {
	if (!_lg_typecheck_intmax_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in long intmax_c() function, expected prototype:\nlong intmax_c()\nClass arguments details:\n");
	}


	long lret = intmax_c();
	lua_pushnumber(L,lret);

	return 1;
}

// long intmax_()
static int _bind_intmax_(lua_State *L) {
	if (!_lg_typecheck_intmax_(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in long intmax_() function, expected prototype:\nlong intmax_()\nClass arguments details:\n");
	}


	long lret = intmax_();
	lua_pushnumber(L,lret);

	return 1;
}

// long intmin_c()
static int _bind_intmin_c(lua_State *L) {
	if (!_lg_typecheck_intmin_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in long intmin_c() function, expected prototype:\nlong intmin_c()\nClass arguments details:\n");
	}


	long lret = intmin_c();
	lua_pushnumber(L,lret);

	return 1;
}

// long intmin_()
static int _bind_intmin_(lua_State *L) {
	if (!_lg_typecheck_intmin_(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in long intmin_() function, expected prototype:\nlong intmin_()\nClass arguments details:\n");
	}


	long lret = intmin_();
	lua_pushnumber(L,lret);

	return 1;
}

// int isordv_c(const long * array, long n)
static int _bind_isordv_c(lua_State *L) {
	if (!_lg_typecheck_isordv_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int isordv_c(const long * array, long n) function, expected prototype:\nint isordv_c(const long * array, long n)\nClass arguments details:\n");
	}

	long array=(long)lua_tointeger(L,1);
	long n=(long)lua_tointeger(L,2);

	int lret = isordv_c(&array, n);
	lua_pushnumber(L,lret);

	return 1;
}

// long isrchc_c(const char * value, long ndim, long lenvals, const void * array)
static int _bind_isrchc_c(lua_State *L) {
	if (!_lg_typecheck_isrchc_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in long isrchc_c(const char * value, long ndim, long lenvals, const void * array) function, expected prototype:\nlong isrchc_c(const char * value, long ndim, long lenvals, const void * array)\nClass arguments details:\n");
	}

	const char * value=(const char *)lua_tostring(L,1);
	long ndim=(long)lua_tointeger(L,2);
	long lenvals=(long)lua_tointeger(L,3);
	void* array=(Luna< void >::check(L,4));

	long lret = isrchc_c(value, ndim, lenvals, array);
	lua_pushnumber(L,lret);

	return 1;
}

// long isrchd_c(double value, long ndim, const double * array)
static int _bind_isrchd_c(lua_State *L) {
	if (!_lg_typecheck_isrchd_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in long isrchd_c(double value, long ndim, const double * array) function, expected prototype:\nlong isrchd_c(double value, long ndim, const double * array)\nClass arguments details:\n");
	}

	double value=(double)lua_tonumber(L,1);
	long ndim=(long)lua_tointeger(L,2);
	double array=(double)lua_tonumber(L,3);

	long lret = isrchd_c(value, ndim, &array);
	lua_pushnumber(L,lret);

	return 1;
}

// long isrchi_c(long value, long ndim, const long * array)
static int _bind_isrchi_c(lua_State *L) {
	if (!_lg_typecheck_isrchi_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in long isrchi_c(long value, long ndim, const long * array) function, expected prototype:\nlong isrchi_c(long value, long ndim, const long * array)\nClass arguments details:\n");
	}

	long value=(long)lua_tointeger(L,1);
	long ndim=(long)lua_tointeger(L,2);
	long array=(long)lua_tointeger(L,3);

	long lret = isrchi_c(value, ndim, &array);
	lua_pushnumber(L,lret);

	return 1;
}

// int iswhsp_c(const char * string)
static int _bind_iswhsp_c(lua_State *L) {
	if (!_lg_typecheck_iswhsp_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int iswhsp_c(const char * string) function, expected prototype:\nint iswhsp_c(const char * string)\nClass arguments details:\n");
	}

	const char * string=(const char *)lua_tostring(L,1);

	int lret = iswhsp_c(string);
	lua_pushnumber(L,lret);

	return 1;
}

// double j1900_c()
static int _bind_j1900_c(lua_State *L) {
	if (!_lg_typecheck_j1900_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double j1900_c() function, expected prototype:\ndouble j1900_c()\nClass arguments details:\n");
	}


	double lret = j1900_c();
	lua_pushnumber(L,lret);

	return 1;
}

// double j1950_c()
static int _bind_j1950_c(lua_State *L) {
	if (!_lg_typecheck_j1950_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double j1950_c() function, expected prototype:\ndouble j1950_c()\nClass arguments details:\n");
	}


	double lret = j1950_c();
	lua_pushnumber(L,lret);

	return 1;
}

// double j2000_c()
static int _bind_j2000_c(lua_State *L) {
	if (!_lg_typecheck_j2000_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double j2000_c() function, expected prototype:\ndouble j2000_c()\nClass arguments details:\n");
	}


	double lret = j2000_c();
	lua_pushnumber(L,lret);

	return 1;
}

// double j2100_c()
static int _bind_j2100_c(lua_State *L) {
	if (!_lg_typecheck_j2100_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double j2100_c() function, expected prototype:\ndouble j2100_c()\nClass arguments details:\n");
	}


	double lret = j2100_c();
	lua_pushnumber(L,lret);

	return 1;
}

// double jyear_c()
static int _bind_jyear_c(lua_State *L) {
	if (!_lg_typecheck_jyear_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double jyear_c() function, expected prototype:\ndouble jyear_c()\nClass arguments details:\n");
	}


	double lret = jyear_c();
	lua_pushnumber(L,lret);

	return 1;
}

// void kclear_c()
static int _bind_kclear_c(lua_State *L) {
	if (!_lg_typecheck_kclear_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void kclear_c() function, expected prototype:\nvoid kclear_c()\nClass arguments details:\n");
	}


	kclear_c();

	return 0;
}

// void kdata_c(long which, const char * kind, long fillen, long typlen, long srclen, char * file, char * filtyp, char * source, long * handle, int * found)
static int _bind_kdata_c(lua_State *L) {
	if (!_lg_typecheck_kdata_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void kdata_c(long which, const char * kind, long fillen, long typlen, long srclen, char * file, char * filtyp, char * source, long * handle, int * found) function, expected prototype:\nvoid kdata_c(long which, const char * kind, long fillen, long typlen, long srclen, char * file, char * filtyp, char * source, long * handle, int * found)\nClass arguments details:\n");
	}

	long which=(long)lua_tointeger(L,1);
	const char * kind=(const char *)lua_tostring(L,2);
	long fillen=(long)lua_tointeger(L,3);
	long typlen=(long)lua_tointeger(L,4);
	long srclen=(long)lua_tointeger(L,5);
	char file=(char)lua_tointeger(L,6);
	char filtyp=(char)lua_tointeger(L,7);
	char source=(char)lua_tointeger(L,8);
	long handle=(long)lua_tointeger(L,9);
	int found=(int)lua_tointeger(L,10);

	kdata_c(which, kind, fillen, typlen, srclen, &file, &filtyp, &source, &handle, &found);

	return 0;
}

// void kinfo_c(const char * file, long typlen, long srclen, char * filtyp, char * source, long * handle, int * found)
static int _bind_kinfo_c(lua_State *L) {
	if (!_lg_typecheck_kinfo_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void kinfo_c(const char * file, long typlen, long srclen, char * filtyp, char * source, long * handle, int * found) function, expected prototype:\nvoid kinfo_c(const char * file, long typlen, long srclen, char * filtyp, char * source, long * handle, int * found)\nClass arguments details:\n");
	}

	const char * file=(const char *)lua_tostring(L,1);
	long typlen=(long)lua_tointeger(L,2);
	long srclen=(long)lua_tointeger(L,3);
	char filtyp=(char)lua_tointeger(L,4);
	char source=(char)lua_tointeger(L,5);
	long handle=(long)lua_tointeger(L,6);
	int found=(int)lua_tointeger(L,7);

	kinfo_c(file, typlen, srclen, &filtyp, &source, &handle, &found);

	return 0;
}

// void ktotal_c(const char * kind, long * count)
static int _bind_ktotal_c(lua_State *L) {
	if (!_lg_typecheck_ktotal_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ktotal_c(const char * kind, long * count) function, expected prototype:\nvoid ktotal_c(const char * kind, long * count)\nClass arguments details:\n");
	}

	const char * kind=(const char *)lua_tostring(L,1);
	long count=(long)lua_tointeger(L,2);

	ktotal_c(kind, &count);

	return 0;
}

// void kxtrct_c(const char * keywd, long termlen, const void * terms, long nterms, long stringlen, long substrlen, char * string, int * found, char * substr)
static int _bind_kxtrct_c(lua_State *L) {
	if (!_lg_typecheck_kxtrct_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void kxtrct_c(const char * keywd, long termlen, const void * terms, long nterms, long stringlen, long substrlen, char * string, int * found, char * substr) function, expected prototype:\nvoid kxtrct_c(const char * keywd, long termlen, const void * terms, long nterms, long stringlen, long substrlen, char * string, int * found, char * substr)\nClass arguments details:\n");
	}

	const char * keywd=(const char *)lua_tostring(L,1);
	long termlen=(long)lua_tointeger(L,2);
	void* terms=(Luna< void >::check(L,3));
	long nterms=(long)lua_tointeger(L,4);
	long stringlen=(long)lua_tointeger(L,5);
	long substrlen=(long)lua_tointeger(L,6);
	char string=(char)lua_tointeger(L,7);
	int found=(int)lua_tointeger(L,8);
	char substr=(char)lua_tointeger(L,9);

	kxtrct_c(keywd, termlen, terms, nterms, stringlen, substrlen, &string, &found, &substr);

	return 0;
}

// long lastnb_c(const char * string)
static int _bind_lastnb_c(lua_State *L) {
	if (!_lg_typecheck_lastnb_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in long lastnb_c(const char * string) function, expected prototype:\nlong lastnb_c(const char * string)\nClass arguments details:\n");
	}

	const char * string=(const char *)lua_tostring(L,1);

	long lret = lastnb_c(string);
	lua_pushnumber(L,lret);

	return 1;
}

// void latcyl_c(double radius, double lon, double lat, double * r, double * lonc, double * z)
static int _bind_latcyl_c(lua_State *L) {
	if (!_lg_typecheck_latcyl_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void latcyl_c(double radius, double lon, double lat, double * r, double * lonc, double * z) function, expected prototype:\nvoid latcyl_c(double radius, double lon, double lat, double * r, double * lonc, double * z)\nClass arguments details:\n");
	}

	double radius=(double)lua_tonumber(L,1);
	double lon=(double)lua_tonumber(L,2);
	double lat=(double)lua_tonumber(L,3);
	double r=(double)lua_tonumber(L,4);
	double lonc=(double)lua_tonumber(L,5);
	double z=(double)lua_tonumber(L,6);

	latcyl_c(radius, lon, lat, &r, &lonc, &z);

	return 0;
}

// void latsph_c(double radius, double lon, double lat, double * rho, double * colat, double * lons)
static int _bind_latsph_c(lua_State *L) {
	if (!_lg_typecheck_latsph_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void latsph_c(double radius, double lon, double lat, double * rho, double * colat, double * lons) function, expected prototype:\nvoid latsph_c(double radius, double lon, double lat, double * rho, double * colat, double * lons)\nClass arguments details:\n");
	}

	double radius=(double)lua_tonumber(L,1);
	double lon=(double)lua_tonumber(L,2);
	double lat=(double)lua_tonumber(L,3);
	double rho=(double)lua_tonumber(L,4);
	double colat=(double)lua_tonumber(L,5);
	double lons=(double)lua_tonumber(L,6);

	latsph_c(radius, lon, lat, &rho, &colat, &lons);

	return 0;
}

// void lcase_c(char * in, long lenout, char * out)
static int _bind_lcase_c(lua_State *L) {
	if (!_lg_typecheck_lcase_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void lcase_c(char * in, long lenout, char * out) function, expected prototype:\nvoid lcase_c(char * in, long lenout, char * out)\nClass arguments details:\n");
	}

	char in=(char)lua_tointeger(L,1);
	long lenout=(long)lua_tointeger(L,2);
	char out=(char)lua_tointeger(L,3);

	lcase_c(&in, lenout, &out);

	return 0;
}

// void ldpool_c(const char * filename)
static int _bind_ldpool_c(lua_State *L) {
	if (!_lg_typecheck_ldpool_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ldpool_c(const char * filename) function, expected prototype:\nvoid ldpool_c(const char * filename)\nClass arguments details:\n");
	}

	const char * filename=(const char *)lua_tostring(L,1);

	ldpool_c(filename);

	return 0;
}

// void lmpool_c(const void * cvals, long lenvals, long n)
static int _bind_lmpool_c(lua_State *L) {
	if (!_lg_typecheck_lmpool_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void lmpool_c(const void * cvals, long lenvals, long n) function, expected prototype:\nvoid lmpool_c(const void * cvals, long lenvals, long n)\nClass arguments details:\n");
	}

	void* cvals=(Luna< void >::check(L,1));
	long lenvals=(long)lua_tointeger(L,2);
	long n=(long)lua_tointeger(L,3);

	lmpool_c(cvals, lenvals, n);

	return 0;
}

// void lparse_c(const char * list, const char * delim, long nmax, long lenout, long * n, void * items)
static int _bind_lparse_c(lua_State *L) {
	if (!_lg_typecheck_lparse_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void lparse_c(const char * list, const char * delim, long nmax, long lenout, long * n, void * items) function, expected prototype:\nvoid lparse_c(const char * list, const char * delim, long nmax, long lenout, long * n, void * items)\nClass arguments details:\n");
	}

	const char * list=(const char *)lua_tostring(L,1);
	const char * delim=(const char *)lua_tostring(L,2);
	long nmax=(long)lua_tointeger(L,3);
	long lenout=(long)lua_tointeger(L,4);
	long n=(long)lua_tointeger(L,5);
	void* items=(Luna< void >::check(L,6));

	lparse_c(list, delim, nmax, lenout, &n, items);

	return 0;
}

// void lparsm_c(const char * list, const char * delims, long nmax, long lenout, long * n, void * items)
static int _bind_lparsm_c(lua_State *L) {
	if (!_lg_typecheck_lparsm_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void lparsm_c(const char * list, const char * delims, long nmax, long lenout, long * n, void * items) function, expected prototype:\nvoid lparsm_c(const char * list, const char * delims, long nmax, long lenout, long * n, void * items)\nClass arguments details:\n");
	}

	const char * list=(const char *)lua_tostring(L,1);
	const char * delims=(const char *)lua_tostring(L,2);
	long nmax=(long)lua_tointeger(L,3);
	long lenout=(long)lua_tointeger(L,4);
	long n=(long)lua_tointeger(L,5);
	void* items=(Luna< void >::check(L,6));

	lparsm_c(list, delims, nmax, lenout, &n, items);

	return 0;
}

// double lspcn_c(const char * body, double et, const char * abcorr)
static int _bind_lspcn_c(lua_State *L) {
	if (!_lg_typecheck_lspcn_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double lspcn_c(const char * body, double et, const char * abcorr) function, expected prototype:\ndouble lspcn_c(const char * body, double et, const char * abcorr)\nClass arguments details:\n");
	}

	const char * body=(const char *)lua_tostring(L,1);
	double et=(double)lua_tonumber(L,2);
	const char * abcorr=(const char *)lua_tostring(L,3);

	double lret = lspcn_c(body, et, abcorr);
	lua_pushnumber(L,lret);

	return 1;
}

// long lstlec_c(const char * string, long n, long lenvals, const void * array)
static int _bind_lstlec_c(lua_State *L) {
	if (!_lg_typecheck_lstlec_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in long lstlec_c(const char * string, long n, long lenvals, const void * array) function, expected prototype:\nlong lstlec_c(const char * string, long n, long lenvals, const void * array)\nClass arguments details:\n");
	}

	const char * string=(const char *)lua_tostring(L,1);
	long n=(long)lua_tointeger(L,2);
	long lenvals=(long)lua_tointeger(L,3);
	void* array=(Luna< void >::check(L,4));

	long lret = lstlec_c(string, n, lenvals, array);
	lua_pushnumber(L,lret);

	return 1;
}

// long lstled_c(double x, long n, const double * array)
static int _bind_lstled_c(lua_State *L) {
	if (!_lg_typecheck_lstled_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in long lstled_c(double x, long n, const double * array) function, expected prototype:\nlong lstled_c(double x, long n, const double * array)\nClass arguments details:\n");
	}

	double x=(double)lua_tonumber(L,1);
	long n=(long)lua_tointeger(L,2);
	double array=(double)lua_tonumber(L,3);

	long lret = lstled_c(x, n, &array);
	lua_pushnumber(L,lret);

	return 1;
}

// long lstlei_c(long x, long n, const long * array)
static int _bind_lstlei_c(lua_State *L) {
	if (!_lg_typecheck_lstlei_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in long lstlei_c(long x, long n, const long * array) function, expected prototype:\nlong lstlei_c(long x, long n, const long * array)\nClass arguments details:\n");
	}

	long x=(long)lua_tointeger(L,1);
	long n=(long)lua_tointeger(L,2);
	long array=(long)lua_tointeger(L,3);

	long lret = lstlei_c(x, n, &array);
	lua_pushnumber(L,lret);

	return 1;
}

// long lstltc_c(const char * string, long n, long lenvals, const void * array)
static int _bind_lstltc_c(lua_State *L) {
	if (!_lg_typecheck_lstltc_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in long lstltc_c(const char * string, long n, long lenvals, const void * array) function, expected prototype:\nlong lstltc_c(const char * string, long n, long lenvals, const void * array)\nClass arguments details:\n");
	}

	const char * string=(const char *)lua_tostring(L,1);
	long n=(long)lua_tointeger(L,2);
	long lenvals=(long)lua_tointeger(L,3);
	void* array=(Luna< void >::check(L,4));

	long lret = lstltc_c(string, n, lenvals, array);
	lua_pushnumber(L,lret);

	return 1;
}

// long lstltd_c(double x, long n, const double * array)
static int _bind_lstltd_c(lua_State *L) {
	if (!_lg_typecheck_lstltd_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in long lstltd_c(double x, long n, const double * array) function, expected prototype:\nlong lstltd_c(double x, long n, const double * array)\nClass arguments details:\n");
	}

	double x=(double)lua_tonumber(L,1);
	long n=(long)lua_tointeger(L,2);
	double array=(double)lua_tonumber(L,3);

	long lret = lstltd_c(x, n, &array);
	lua_pushnumber(L,lret);

	return 1;
}

// long lstlti_c(long x, long n, const long * array)
static int _bind_lstlti_c(lua_State *L) {
	if (!_lg_typecheck_lstlti_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in long lstlti_c(long x, long n, const long * array) function, expected prototype:\nlong lstlti_c(long x, long n, const long * array)\nClass arguments details:\n");
	}

	long x=(long)lua_tointeger(L,1);
	long n=(long)lua_tointeger(L,2);
	long array=(long)lua_tointeger(L,3);

	long lret = lstlti_c(x, n, &array);
	lua_pushnumber(L,lret);

	return 1;
}

// void ltime_c(double etobs, long obs, const char * dir, long targ, double * ettarg, double * elapsd)
static int _bind_ltime_c(lua_State *L) {
	if (!_lg_typecheck_ltime_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ltime_c(double etobs, long obs, const char * dir, long targ, double * ettarg, double * elapsd) function, expected prototype:\nvoid ltime_c(double etobs, long obs, const char * dir, long targ, double * ettarg, double * elapsd)\nClass arguments details:\n");
	}

	double etobs=(double)lua_tonumber(L,1);
	long obs=(long)lua_tointeger(L,2);
	const char * dir=(const char *)lua_tostring(L,3);
	long targ=(long)lua_tointeger(L,4);
	double ettarg=(double)lua_tonumber(L,5);
	double elapsd=(double)lua_tonumber(L,6);

	ltime_c(etobs, obs, dir, targ, &ettarg, &elapsd);

	return 0;
}

// void lx4dec_c(const char * string, long first, long * last, long * nchar)
static int _bind_lx4dec_c(lua_State *L) {
	if (!_lg_typecheck_lx4dec_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void lx4dec_c(const char * string, long first, long * last, long * nchar) function, expected prototype:\nvoid lx4dec_c(const char * string, long first, long * last, long * nchar)\nClass arguments details:\n");
	}

	const char * string=(const char *)lua_tostring(L,1);
	long first=(long)lua_tointeger(L,2);
	long last=(long)lua_tointeger(L,3);
	long nchar=(long)lua_tointeger(L,4);

	lx4dec_c(string, first, &last, &nchar);

	return 0;
}

// void lx4num_c(const char * string, long first, long * last, long * nchar)
static int _bind_lx4num_c(lua_State *L) {
	if (!_lg_typecheck_lx4num_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void lx4num_c(const char * string, long first, long * last, long * nchar) function, expected prototype:\nvoid lx4num_c(const char * string, long first, long * last, long * nchar)\nClass arguments details:\n");
	}

	const char * string=(const char *)lua_tostring(L,1);
	long first=(long)lua_tointeger(L,2);
	long last=(long)lua_tointeger(L,3);
	long nchar=(long)lua_tointeger(L,4);

	lx4num_c(string, first, &last, &nchar);

	return 0;
}

// void lx4sgn_c(const char * string, long first, long * last, long * nchar)
static int _bind_lx4sgn_c(lua_State *L) {
	if (!_lg_typecheck_lx4sgn_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void lx4sgn_c(const char * string, long first, long * last, long * nchar) function, expected prototype:\nvoid lx4sgn_c(const char * string, long first, long * last, long * nchar)\nClass arguments details:\n");
	}

	const char * string=(const char *)lua_tostring(L,1);
	long first=(long)lua_tointeger(L,2);
	long last=(long)lua_tointeger(L,3);
	long nchar=(long)lua_tointeger(L,4);

	lx4sgn_c(string, first, &last, &nchar);

	return 0;
}

// void lx4uns_c(const char * string, long first, long * last, long * nchar)
static int _bind_lx4uns_c(lua_State *L) {
	if (!_lg_typecheck_lx4uns_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void lx4uns_c(const char * string, long first, long * last, long * nchar) function, expected prototype:\nvoid lx4uns_c(const char * string, long first, long * last, long * nchar)\nClass arguments details:\n");
	}

	const char * string=(const char *)lua_tostring(L,1);
	long first=(long)lua_tointeger(L,2);
	long last=(long)lua_tointeger(L,3);
	long nchar=(long)lua_tointeger(L,4);

	lx4uns_c(string, first, &last, &nchar);

	return 0;
}

// void lxqstr_c(const char * string, char qchar, long first, long * last, long * nchar)
static int _bind_lxqstr_c(lua_State *L) {
	if (!_lg_typecheck_lxqstr_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void lxqstr_c(const char * string, char qchar, long first, long * last, long * nchar) function, expected prototype:\nvoid lxqstr_c(const char * string, char qchar, long first, long * last, long * nchar)\nClass arguments details:\n");
	}

	const char * string=(const char *)lua_tostring(L,1);
	char qchar=(char)lua_tointeger(L,2);
	long first=(long)lua_tointeger(L,3);
	long last=(long)lua_tointeger(L,4);
	long nchar=(long)lua_tointeger(L,5);

	lxqstr_c(string, qchar, first, &last, &nchar);

	return 0;
}

// int matchi_c(const char * string, const char * templ, char wstr, char wchr)
static int _bind_matchi_c(lua_State *L) {
	if (!_lg_typecheck_matchi_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int matchi_c(const char * string, const char * templ, char wstr, char wchr) function, expected prototype:\nint matchi_c(const char * string, const char * templ, char wstr, char wchr)\nClass arguments details:\n");
	}

	const char * string=(const char *)lua_tostring(L,1);
	const char * templ=(const char *)lua_tostring(L,2);
	char wstr=(char)lua_tointeger(L,3);
	char wchr=(char)lua_tointeger(L,4);

	int lret = matchi_c(string, templ, wstr, wchr);
	lua_pushnumber(L,lret);

	return 1;
}

// int matchw_c(const char * string, const char * templ, char wstr, char wchr)
static int _bind_matchw_c(lua_State *L) {
	if (!_lg_typecheck_matchw_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int matchw_c(const char * string, const char * templ, char wstr, char wchr) function, expected prototype:\nint matchw_c(const char * string, const char * templ, char wstr, char wchr)\nClass arguments details:\n");
	}

	const char * string=(const char *)lua_tostring(L,1);
	const char * templ=(const char *)lua_tostring(L,2);
	char wstr=(char)lua_tointeger(L,3);
	char wchr=(char)lua_tointeger(L,4);

	int lret = matchw_c(string, templ, wstr, wchr);
	lua_pushnumber(L,lret);

	return 1;
}

// void mequg_c(const void * m1, long nr, long nc, void * mout)
static int _bind_mequg_c(lua_State *L) {
	if (!_lg_typecheck_mequg_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void mequg_c(const void * m1, long nr, long nc, void * mout) function, expected prototype:\nvoid mequg_c(const void * m1, long nr, long nc, void * mout)\nClass arguments details:\n");
	}

	void* m1=(Luna< void >::check(L,1));
	long nr=(long)lua_tointeger(L,2);
	long nc=(long)lua_tointeger(L,3);
	void* mout=(Luna< void >::check(L,4));

	mequg_c(m1, nr, nc, mout);

	return 0;
}

// int moved_(double * arrfrm, long * ndim, double * arrto)
static int _bind_moved_(lua_State *L) {
	if (!_lg_typecheck_moved_(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int moved_(double * arrfrm, long * ndim, double * arrto) function, expected prototype:\nint moved_(double * arrfrm, long * ndim, double * arrto)\nClass arguments details:\n");
	}

	double arrfrm=(double)lua_tonumber(L,1);
	long ndim=(long)lua_tointeger(L,2);
	double arrto=(double)lua_tonumber(L,3);

	int lret = moved_(&arrfrm, &ndim, &arrto);
	lua_pushnumber(L,lret);

	return 1;
}

// void mtxmg_c(const void * m1, const void * m2, long row1, long col1, long col2, void * mout)
static int _bind_mtxmg_c(lua_State *L) {
	if (!_lg_typecheck_mtxmg_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void mtxmg_c(const void * m1, const void * m2, long row1, long col1, long col2, void * mout) function, expected prototype:\nvoid mtxmg_c(const void * m1, const void * m2, long row1, long col1, long col2, void * mout)\nClass arguments details:\n");
	}

	void* m1=(Luna< void >::check(L,1));
	void* m2=(Luna< void >::check(L,2));
	long row1=(long)lua_tointeger(L,3);
	long col1=(long)lua_tointeger(L,4);
	long col2=(long)lua_tointeger(L,5);
	void* mout=(Luna< void >::check(L,6));

	mtxmg_c(m1, m2, row1, col1, col2, mout);

	return 0;
}

// void mtxvg_c(const void * m1, const void * v2, long ncol1, long nr1r2, void * vout)
static int _bind_mtxvg_c(lua_State *L) {
	if (!_lg_typecheck_mtxvg_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void mtxvg_c(const void * m1, const void * v2, long ncol1, long nr1r2, void * vout) function, expected prototype:\nvoid mtxvg_c(const void * m1, const void * v2, long ncol1, long nr1r2, void * vout)\nClass arguments details:\n");
	}

	void* m1=(Luna< void >::check(L,1));
	void* v2=(Luna< void >::check(L,2));
	long ncol1=(long)lua_tointeger(L,3);
	long nr1r2=(long)lua_tointeger(L,4);
	void* vout=(Luna< void >::check(L,5));

	mtxvg_c(m1, v2, ncol1, nr1r2, vout);

	return 0;
}

// void mxmg_c(const void * m1, const void * m2, long row1, long col1, long col2, void * mout)
static int _bind_mxmg_c(lua_State *L) {
	if (!_lg_typecheck_mxmg_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void mxmg_c(const void * m1, const void * m2, long row1, long col1, long col2, void * mout) function, expected prototype:\nvoid mxmg_c(const void * m1, const void * m2, long row1, long col1, long col2, void * mout)\nClass arguments details:\n");
	}

	void* m1=(Luna< void >::check(L,1));
	void* m2=(Luna< void >::check(L,2));
	long row1=(long)lua_tointeger(L,3);
	long col1=(long)lua_tointeger(L,4);
	long col2=(long)lua_tointeger(L,5);
	void* mout=(Luna< void >::check(L,6));

	mxmg_c(m1, m2, row1, col1, col2, mout);

	return 0;
}

// void mxmtg_c(const void * m1, const void * m2, long nrow1, long nc1c2, long nrow2, void * mout)
static int _bind_mxmtg_c(lua_State *L) {
	if (!_lg_typecheck_mxmtg_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void mxmtg_c(const void * m1, const void * m2, long nrow1, long nc1c2, long nrow2, void * mout) function, expected prototype:\nvoid mxmtg_c(const void * m1, const void * m2, long nrow1, long nc1c2, long nrow2, void * mout)\nClass arguments details:\n");
	}

	void* m1=(Luna< void >::check(L,1));
	void* m2=(Luna< void >::check(L,2));
	long nrow1=(long)lua_tointeger(L,3);
	long nc1c2=(long)lua_tointeger(L,4);
	long nrow2=(long)lua_tointeger(L,5);
	void* mout=(Luna< void >::check(L,6));

	mxmtg_c(m1, m2, nrow1, nc1c2, nrow2, mout);

	return 0;
}

// void mxvg_c(const void * m1, const void * v2, long nrow1, long nc1r2, void * vout)
static int _bind_mxvg_c(lua_State *L) {
	if (!_lg_typecheck_mxvg_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void mxvg_c(const void * m1, const void * v2, long nrow1, long nc1r2, void * vout) function, expected prototype:\nvoid mxvg_c(const void * m1, const void * v2, long nrow1, long nc1r2, void * vout)\nClass arguments details:\n");
	}

	void* m1=(Luna< void >::check(L,1));
	void* v2=(Luna< void >::check(L,2));
	long nrow1=(long)lua_tointeger(L,3);
	long nc1r2=(long)lua_tointeger(L,4);
	void* vout=(Luna< void >::check(L,5));

	mxvg_c(m1, v2, nrow1, nc1r2, vout);

	return 0;
}

// void namfrm_c(const char * frname, long * frcode)
static int _bind_namfrm_c(lua_State *L) {
	if (!_lg_typecheck_namfrm_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void namfrm_c(const char * frname, long * frcode) function, expected prototype:\nvoid namfrm_c(const char * frname, long * frcode)\nClass arguments details:\n");
	}

	const char * frname=(const char *)lua_tostring(L,1);
	long frcode=(long)lua_tointeger(L,2);

	namfrm_c(frname, &frcode);

	return 0;
}

// long ncpos_c(const char * str, const char * chars, long start)
static int _bind_ncpos_c(lua_State *L) {
	if (!_lg_typecheck_ncpos_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in long ncpos_c(const char * str, const char * chars, long start) function, expected prototype:\nlong ncpos_c(const char * str, const char * chars, long start)\nClass arguments details:\n");
	}

	const char * str=(const char *)lua_tostring(L,1);
	const char * chars=(const char *)lua_tostring(L,2);
	long start=(long)lua_tointeger(L,3);

	long lret = ncpos_c(str, chars, start);
	lua_pushnumber(L,lret);

	return 1;
}

// long ncposr_c(const char * str, const char * chars, long start)
static int _bind_ncposr_c(lua_State *L) {
	if (!_lg_typecheck_ncposr_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in long ncposr_c(const char * str, const char * chars, long start) function, expected prototype:\nlong ncposr_c(const char * str, const char * chars, long start)\nClass arguments details:\n");
	}

	const char * str=(const char *)lua_tostring(L,1);
	const char * chars=(const char *)lua_tostring(L,2);
	long start=(long)lua_tointeger(L,3);

	long lret = ncposr_c(str, chars, start);
	lua_pushnumber(L,lret);

	return 1;
}

// void orderc_c(long lenvals, const void * array, long ndim, long * iorder)
static int _bind_orderc_c(lua_State *L) {
	if (!_lg_typecheck_orderc_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void orderc_c(long lenvals, const void * array, long ndim, long * iorder) function, expected prototype:\nvoid orderc_c(long lenvals, const void * array, long ndim, long * iorder)\nClass arguments details:\n");
	}

	long lenvals=(long)lua_tointeger(L,1);
	void* array=(Luna< void >::check(L,2));
	long ndim=(long)lua_tointeger(L,3);
	long iorder=(long)lua_tointeger(L,4);

	orderc_c(lenvals, array, ndim, &iorder);

	return 0;
}

// void orderd_c(const double * array, long ndim, long * iorder)
static int _bind_orderd_c(lua_State *L) {
	if (!_lg_typecheck_orderd_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void orderd_c(const double * array, long ndim, long * iorder) function, expected prototype:\nvoid orderd_c(const double * array, long ndim, long * iorder)\nClass arguments details:\n");
	}

	double array=(double)lua_tonumber(L,1);
	long ndim=(long)lua_tointeger(L,2);
	long iorder=(long)lua_tointeger(L,3);

	orderd_c(&array, ndim, &iorder);

	return 0;
}

// void orderi_c(const long * array, long ndim, long * iorder)
static int _bind_orderi_c(lua_State *L) {
	if (!_lg_typecheck_orderi_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void orderi_c(const long * array, long ndim, long * iorder) function, expected prototype:\nvoid orderi_c(const long * array, long ndim, long * iorder)\nClass arguments details:\n");
	}

	long array=(long)lua_tointeger(L,1);
	long ndim=(long)lua_tointeger(L,2);
	long iorder=(long)lua_tointeger(L,3);

	orderi_c(&array, ndim, &iorder);

	return 0;
}

// void pcklof_c(const char * fname, long * handle)
static int _bind_pcklof_c(lua_State *L) {
	if (!_lg_typecheck_pcklof_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void pcklof_c(const char * fname, long * handle) function, expected prototype:\nvoid pcklof_c(const char * fname, long * handle)\nClass arguments details:\n");
	}

	const char * fname=(const char *)lua_tostring(L,1);
	long handle=(long)lua_tointeger(L,2);

	pcklof_c(fname, &handle);

	return 0;
}

// void pckuof_c(long handle)
static int _bind_pckuof_c(lua_State *L) {
	if (!_lg_typecheck_pckuof_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void pckuof_c(long handle) function, expected prototype:\nvoid pckuof_c(long handle)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);

	pckuof_c(handle);

	return 0;
}

// void pcpool_c(const char * name, long n, long lenvals, const void * cvals)
static int _bind_pcpool_c(lua_State *L) {
	if (!_lg_typecheck_pcpool_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void pcpool_c(const char * name, long n, long lenvals, const void * cvals) function, expected prototype:\nvoid pcpool_c(const char * name, long n, long lenvals, const void * cvals)\nClass arguments details:\n");
	}

	const char * name=(const char *)lua_tostring(L,1);
	long n=(long)lua_tointeger(L,2);
	long lenvals=(long)lua_tointeger(L,3);
	void* cvals=(Luna< void >::check(L,4));

	pcpool_c(name, n, lenvals, cvals);

	return 0;
}

// void pdpool_c(const char * name, long n, const double * dvals)
static int _bind_pdpool_c(lua_State *L) {
	if (!_lg_typecheck_pdpool_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void pdpool_c(const char * name, long n, const double * dvals) function, expected prototype:\nvoid pdpool_c(const char * name, long n, const double * dvals)\nClass arguments details:\n");
	}

	const char * name=(const char *)lua_tostring(L,1);
	long n=(long)lua_tointeger(L,2);
	double dvals=(double)lua_tonumber(L,3);

	pdpool_c(name, n, &dvals);

	return 0;
}

// double pi_c()
static int _bind_pi_c(lua_State *L) {
	if (!_lg_typecheck_pi_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double pi_c() function, expected prototype:\ndouble pi_c()\nClass arguments details:\n");
	}


	double lret = pi_c();
	lua_pushnumber(L,lret);

	return 1;
}

// void pipool_c(const char * name, long n, const long * ivals)
static int _bind_pipool_c(lua_State *L) {
	if (!_lg_typecheck_pipool_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void pipool_c(const char * name, long n, const long * ivals) function, expected prototype:\nvoid pipool_c(const char * name, long n, const long * ivals)\nClass arguments details:\n");
	}

	const char * name=(const char *)lua_tostring(L,1);
	long n=(long)lua_tointeger(L,2);
	long ivals=(long)lua_tointeger(L,3);

	pipool_c(name, n, &ivals);

	return 0;
}

// long pos_c(const char * str, const char * substr, long start)
static int _bind_pos_c(lua_State *L) {
	if (!_lg_typecheck_pos_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in long pos_c(const char * str, const char * substr, long start) function, expected prototype:\nlong pos_c(const char * str, const char * substr, long start)\nClass arguments details:\n");
	}

	const char * str=(const char *)lua_tostring(L,1);
	const char * substr=(const char *)lua_tostring(L,2);
	long start=(long)lua_tointeger(L,3);

	long lret = pos_c(str, substr, start);
	lua_pushnumber(L,lret);

	return 1;
}

// long posr_c(const char * str, const char * substr, long start)
static int _bind_posr_c(lua_State *L) {
	if (!_lg_typecheck_posr_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in long posr_c(const char * str, const char * substr, long start) function, expected prototype:\nlong posr_c(const char * str, const char * substr, long start)\nClass arguments details:\n");
	}

	const char * str=(const char *)lua_tostring(L,1);
	const char * substr=(const char *)lua_tostring(L,2);
	long start=(long)lua_tointeger(L,3);

	long lret = posr_c(str, substr, start);
	lua_pushnumber(L,lret);

	return 1;
}

// char * prompt_c(const char * prmptStr, long lenout, char * buffer)
static int _bind_prompt_c(lua_State *L) {
	if (!_lg_typecheck_prompt_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in char * prompt_c(const char * prmptStr, long lenout, char * buffer) function, expected prototype:\nchar * prompt_c(const char * prmptStr, long lenout, char * buffer)\nClass arguments details:\n");
	}

	const char * prmptStr=(const char *)lua_tostring(L,1);
	long lenout=(long)lua_tointeger(L,2);
	char buffer=(char)lua_tointeger(L,3);

	char * lret = prompt_c(prmptStr, lenout, &buffer);
	lua_pushnumber(L,*lret);

	return 1;
}

// void prsdp_c(const char * string, double * dpval)
static int _bind_prsdp_c(lua_State *L) {
	if (!_lg_typecheck_prsdp_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void prsdp_c(const char * string, double * dpval) function, expected prototype:\nvoid prsdp_c(const char * string, double * dpval)\nClass arguments details:\n");
	}

	const char * string=(const char *)lua_tostring(L,1);
	double dpval=(double)lua_tonumber(L,2);

	prsdp_c(string, &dpval);

	return 0;
}

// void prsint_c(const char * string, long * intval)
static int _bind_prsint_c(lua_State *L) {
	if (!_lg_typecheck_prsint_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void prsint_c(const char * string, long * intval) function, expected prototype:\nvoid prsint_c(const char * string, long * intval)\nClass arguments details:\n");
	}

	const char * string=(const char *)lua_tostring(L,1);
	long intval=(long)lua_tointeger(L,2);

	prsint_c(string, &intval);

	return 0;
}

// void rdtext_c(const char * file, long lenout, char * line, int * eof)
static int _bind_rdtext_c(lua_State *L) {
	if (!_lg_typecheck_rdtext_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void rdtext_c(const char * file, long lenout, char * line, int * eof) function, expected prototype:\nvoid rdtext_c(const char * file, long lenout, char * line, int * eof)\nClass arguments details:\n");
	}

	const char * file=(const char *)lua_tostring(L,1);
	long lenout=(long)lua_tointeger(L,2);
	char line=(char)lua_tointeger(L,3);
	int eof=(int)lua_tointeger(L,4);

	rdtext_c(file, lenout, &line, &eof);

	return 0;
}

// void reordc_c(const long * iorder, long ndim, long lenvals, void * array)
static int _bind_reordc_c(lua_State *L) {
	if (!_lg_typecheck_reordc_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void reordc_c(const long * iorder, long ndim, long lenvals, void * array) function, expected prototype:\nvoid reordc_c(const long * iorder, long ndim, long lenvals, void * array)\nClass arguments details:\n");
	}

	long iorder=(long)lua_tointeger(L,1);
	long ndim=(long)lua_tointeger(L,2);
	long lenvals=(long)lua_tointeger(L,3);
	void* array=(Luna< void >::check(L,4));

	reordc_c(&iorder, ndim, lenvals, array);

	return 0;
}

// void reordd_c(const long * iorder, long ndim, double * array)
static int _bind_reordd_c(lua_State *L) {
	if (!_lg_typecheck_reordd_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void reordd_c(const long * iorder, long ndim, double * array) function, expected prototype:\nvoid reordd_c(const long * iorder, long ndim, double * array)\nClass arguments details:\n");
	}

	long iorder=(long)lua_tointeger(L,1);
	long ndim=(long)lua_tointeger(L,2);
	double array=(double)lua_tonumber(L,3);

	reordd_c(&iorder, ndim, &array);

	return 0;
}

// void reordi_c(const long * iorder, long ndim, long * array)
static int _bind_reordi_c(lua_State *L) {
	if (!_lg_typecheck_reordi_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void reordi_c(const long * iorder, long ndim, long * array) function, expected prototype:\nvoid reordi_c(const long * iorder, long ndim, long * array)\nClass arguments details:\n");
	}

	long iorder=(long)lua_tointeger(L,1);
	long ndim=(long)lua_tointeger(L,2);
	long array=(long)lua_tointeger(L,3);

	reordi_c(&iorder, ndim, &array);

	return 0;
}

// void reordl_c(const long * iorder, long ndim, int * array)
static int _bind_reordl_c(lua_State *L) {
	if (!_lg_typecheck_reordl_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void reordl_c(const long * iorder, long ndim, int * array) function, expected prototype:\nvoid reordl_c(const long * iorder, long ndim, int * array)\nClass arguments details:\n");
	}

	long iorder=(long)lua_tointeger(L,1);
	long ndim=(long)lua_tointeger(L,2);
	int array=(int)lua_tointeger(L,3);

	reordl_c(&iorder, ndim, &array);

	return 0;
}

// void repmc_c(const char * in, const char * marker, const char * value, long lenout, char * out)
static int _bind_repmc_c(lua_State *L) {
	if (!_lg_typecheck_repmc_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void repmc_c(const char * in, const char * marker, const char * value, long lenout, char * out) function, expected prototype:\nvoid repmc_c(const char * in, const char * marker, const char * value, long lenout, char * out)\nClass arguments details:\n");
	}

	const char * in=(const char *)lua_tostring(L,1);
	const char * marker=(const char *)lua_tostring(L,2);
	const char * value=(const char *)lua_tostring(L,3);
	long lenout=(long)lua_tointeger(L,4);
	char out=(char)lua_tointeger(L,5);

	repmc_c(in, marker, value, lenout, &out);

	return 0;
}

// void repmct_c(const char * in, const char * marker, long value, char strCase, long lenout, char * out)
static int _bind_repmct_c(lua_State *L) {
	if (!_lg_typecheck_repmct_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void repmct_c(const char * in, const char * marker, long value, char strCase, long lenout, char * out) function, expected prototype:\nvoid repmct_c(const char * in, const char * marker, long value, char strCase, long lenout, char * out)\nClass arguments details:\n");
	}

	const char * in=(const char *)lua_tostring(L,1);
	const char * marker=(const char *)lua_tostring(L,2);
	long value=(long)lua_tointeger(L,3);
	char strCase=(char)lua_tointeger(L,4);
	long lenout=(long)lua_tointeger(L,5);
	char out=(char)lua_tointeger(L,6);

	repmct_c(in, marker, value, strCase, lenout, &out);

	return 0;
}

// void repmd_c(const char * in, const char * marker, double value, long sigdig, long lenout, char * out)
static int _bind_repmd_c(lua_State *L) {
	if (!_lg_typecheck_repmd_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void repmd_c(const char * in, const char * marker, double value, long sigdig, long lenout, char * out) function, expected prototype:\nvoid repmd_c(const char * in, const char * marker, double value, long sigdig, long lenout, char * out)\nClass arguments details:\n");
	}

	const char * in=(const char *)lua_tostring(L,1);
	const char * marker=(const char *)lua_tostring(L,2);
	double value=(double)lua_tonumber(L,3);
	long sigdig=(long)lua_tointeger(L,4);
	long lenout=(long)lua_tointeger(L,5);
	char out=(char)lua_tointeger(L,6);

	repmd_c(in, marker, value, sigdig, lenout, &out);

	return 0;
}

// void repmf_c(const char * in, const char * marker, double value, long sigdig, char format, long lenout, char * out)
static int _bind_repmf_c(lua_State *L) {
	if (!_lg_typecheck_repmf_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void repmf_c(const char * in, const char * marker, double value, long sigdig, char format, long lenout, char * out) function, expected prototype:\nvoid repmf_c(const char * in, const char * marker, double value, long sigdig, char format, long lenout, char * out)\nClass arguments details:\n");
	}

	const char * in=(const char *)lua_tostring(L,1);
	const char * marker=(const char *)lua_tostring(L,2);
	double value=(double)lua_tonumber(L,3);
	long sigdig=(long)lua_tointeger(L,4);
	char format=(char)lua_tointeger(L,5);
	long lenout=(long)lua_tointeger(L,6);
	char out=(char)lua_tointeger(L,7);

	repmf_c(in, marker, value, sigdig, format, lenout, &out);

	return 0;
}

// void repmi_c(const char * in, const char * marker, long value, long lenout, char * out)
static int _bind_repmi_c(lua_State *L) {
	if (!_lg_typecheck_repmi_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void repmi_c(const char * in, const char * marker, long value, long lenout, char * out) function, expected prototype:\nvoid repmi_c(const char * in, const char * marker, long value, long lenout, char * out)\nClass arguments details:\n");
	}

	const char * in=(const char *)lua_tostring(L,1);
	const char * marker=(const char *)lua_tostring(L,2);
	long value=(long)lua_tointeger(L,3);
	long lenout=(long)lua_tointeger(L,4);
	char out=(char)lua_tointeger(L,5);

	repmi_c(in, marker, value, lenout, &out);

	return 0;
}

// void repmot_c(const char * in, const char * marker, long value, char strCase, long lenout, char * out)
static int _bind_repmot_c(lua_State *L) {
	if (!_lg_typecheck_repmot_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void repmot_c(const char * in, const char * marker, long value, char strCase, long lenout, char * out) function, expected prototype:\nvoid repmot_c(const char * in, const char * marker, long value, char strCase, long lenout, char * out)\nClass arguments details:\n");
	}

	const char * in=(const char *)lua_tostring(L,1);
	const char * marker=(const char *)lua_tostring(L,2);
	long value=(long)lua_tointeger(L,3);
	char strCase=(char)lua_tointeger(L,4);
	long lenout=(long)lua_tointeger(L,5);
	char out=(char)lua_tointeger(L,6);

	repmot_c(in, marker, value, strCase, lenout, &out);

	return 0;
}

// void reset_c()
static int _bind_reset_c(lua_State *L) {
	if (!_lg_typecheck_reset_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void reset_c() function, expected prototype:\nvoid reset_c()\nClass arguments details:\n");
	}


	reset_c();

	return 0;
}

// int return_c()
static int _bind_return_c(lua_State *L) {
	if (!_lg_typecheck_return_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int return_c() function, expected prototype:\nint return_c()\nClass arguments details:\n");
	}


	int lret = return_c();
	lua_pushnumber(L,lret);

	return 1;
}

// double rpd_c()
static int _bind_rpd_c(lua_State *L) {
	if (!_lg_typecheck_rpd_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double rpd_c() function, expected prototype:\ndouble rpd_c()\nClass arguments details:\n");
	}


	double lret = rpd_c();
	lua_pushnumber(L,lret);

	return 1;
}

// void scdecd_c(long sc, double sclkdp, long sclklen, char * sclkch)
static int _bind_scdecd_c(lua_State *L) {
	if (!_lg_typecheck_scdecd_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void scdecd_c(long sc, double sclkdp, long sclklen, char * sclkch) function, expected prototype:\nvoid scdecd_c(long sc, double sclkdp, long sclklen, char * sclkch)\nClass arguments details:\n");
	}

	long sc=(long)lua_tointeger(L,1);
	double sclkdp=(double)lua_tonumber(L,2);
	long sclklen=(long)lua_tointeger(L,3);
	char sclkch=(char)lua_tointeger(L,4);

	scdecd_c(sc, sclkdp, sclklen, &sclkch);

	return 0;
}

// void sce2s_c(long sc, double et, long sclklen, char * sclkch)
static int _bind_sce2s_c(lua_State *L) {
	if (!_lg_typecheck_sce2s_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void sce2s_c(long sc, double et, long sclklen, char * sclkch) function, expected prototype:\nvoid sce2s_c(long sc, double et, long sclklen, char * sclkch)\nClass arguments details:\n");
	}

	long sc=(long)lua_tointeger(L,1);
	double et=(double)lua_tonumber(L,2);
	long sclklen=(long)lua_tointeger(L,3);
	char sclkch=(char)lua_tointeger(L,4);

	sce2s_c(sc, et, sclklen, &sclkch);

	return 0;
}

// void sce2c_c(long sc, double et, double * sclkdp)
static int _bind_sce2c_c(lua_State *L) {
	if (!_lg_typecheck_sce2c_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void sce2c_c(long sc, double et, double * sclkdp) function, expected prototype:\nvoid sce2c_c(long sc, double et, double * sclkdp)\nClass arguments details:\n");
	}

	long sc=(long)lua_tointeger(L,1);
	double et=(double)lua_tonumber(L,2);
	double sclkdp=(double)lua_tonumber(L,3);

	sce2c_c(sc, et, &sclkdp);

	return 0;
}

// void sce2t_c(long sc, double et, double * sclkdp)
static int _bind_sce2t_c(lua_State *L) {
	if (!_lg_typecheck_sce2t_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void sce2t_c(long sc, double et, double * sclkdp) function, expected prototype:\nvoid sce2t_c(long sc, double et, double * sclkdp)\nClass arguments details:\n");
	}

	long sc=(long)lua_tointeger(L,1);
	double et=(double)lua_tonumber(L,2);
	double sclkdp=(double)lua_tonumber(L,3);

	sce2t_c(sc, et, &sclkdp);

	return 0;
}

// void scencd_c(long sc, const char * sclkch, double * sclkdp)
static int _bind_scencd_c(lua_State *L) {
	if (!_lg_typecheck_scencd_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void scencd_c(long sc, const char * sclkch, double * sclkdp) function, expected prototype:\nvoid scencd_c(long sc, const char * sclkch, double * sclkdp)\nClass arguments details:\n");
	}

	long sc=(long)lua_tointeger(L,1);
	const char * sclkch=(const char *)lua_tostring(L,2);
	double sclkdp=(double)lua_tonumber(L,3);

	scencd_c(sc, sclkch, &sclkdp);

	return 0;
}

// void scfmt_c(long sc, double ticks, long clkstrlen, char * clkstr)
static int _bind_scfmt_c(lua_State *L) {
	if (!_lg_typecheck_scfmt_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void scfmt_c(long sc, double ticks, long clkstrlen, char * clkstr) function, expected prototype:\nvoid scfmt_c(long sc, double ticks, long clkstrlen, char * clkstr)\nClass arguments details:\n");
	}

	long sc=(long)lua_tointeger(L,1);
	double ticks=(double)lua_tonumber(L,2);
	long clkstrlen=(long)lua_tointeger(L,3);
	char clkstr=(char)lua_tointeger(L,4);

	scfmt_c(sc, ticks, clkstrlen, &clkstr);

	return 0;
}

// void scpart_c(long sc, long * nparts, double * pstart, double * pstop)
static int _bind_scpart_c(lua_State *L) {
	if (!_lg_typecheck_scpart_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void scpart_c(long sc, long * nparts, double * pstart, double * pstop) function, expected prototype:\nvoid scpart_c(long sc, long * nparts, double * pstart, double * pstop)\nClass arguments details:\n");
	}

	long sc=(long)lua_tointeger(L,1);
	long nparts=(long)lua_tointeger(L,2);
	double pstart=(double)lua_tonumber(L,3);
	double pstop=(double)lua_tonumber(L,4);

	scpart_c(sc, &nparts, &pstart, &pstop);

	return 0;
}

// void scs2e_c(long sc, const char * sclkch, double * et)
static int _bind_scs2e_c(lua_State *L) {
	if (!_lg_typecheck_scs2e_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void scs2e_c(long sc, const char * sclkch, double * et) function, expected prototype:\nvoid scs2e_c(long sc, const char * sclkch, double * et)\nClass arguments details:\n");
	}

	long sc=(long)lua_tointeger(L,1);
	const char * sclkch=(const char *)lua_tostring(L,2);
	double et=(double)lua_tonumber(L,3);

	scs2e_c(sc, sclkch, &et);

	return 0;
}

// void sct2e_c(long sc, double sclkdp, double * et)
static int _bind_sct2e_c(lua_State *L) {
	if (!_lg_typecheck_sct2e_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void sct2e_c(long sc, double sclkdp, double * et) function, expected prototype:\nvoid sct2e_c(long sc, double sclkdp, double * et)\nClass arguments details:\n");
	}

	long sc=(long)lua_tointeger(L,1);
	double sclkdp=(double)lua_tonumber(L,2);
	double et=(double)lua_tonumber(L,3);

	sct2e_c(sc, sclkdp, &et);

	return 0;
}

// void sctiks_c(long sc, const char * clkstr, double * ticks)
static int _bind_sctiks_c(lua_State *L) {
	if (!_lg_typecheck_sctiks_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void sctiks_c(long sc, const char * clkstr, double * ticks) function, expected prototype:\nvoid sctiks_c(long sc, const char * clkstr, double * ticks)\nClass arguments details:\n");
	}

	long sc=(long)lua_tointeger(L,1);
	const char * clkstr=(const char *)lua_tostring(L,2);
	double ticks=(double)lua_tonumber(L,3);

	sctiks_c(sc, clkstr, &ticks);

	return 0;
}

// void setmsg_c(const char * msg)
static int _bind_setmsg_c(lua_State *L) {
	if (!_lg_typecheck_setmsg_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void setmsg_c(const char * msg) function, expected prototype:\nvoid setmsg_c(const char * msg)\nClass arguments details:\n");
	}

	const char * msg=(const char *)lua_tostring(L,1);

	setmsg_c(msg);

	return 0;
}

// void shellc_c(long ndim, long lenvals, void * array)
static int _bind_shellc_c(lua_State *L) {
	if (!_lg_typecheck_shellc_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void shellc_c(long ndim, long lenvals, void * array) function, expected prototype:\nvoid shellc_c(long ndim, long lenvals, void * array)\nClass arguments details:\n");
	}

	long ndim=(long)lua_tointeger(L,1);
	long lenvals=(long)lua_tointeger(L,2);
	void* array=(Luna< void >::check(L,3));

	shellc_c(ndim, lenvals, array);

	return 0;
}

// void shelld_c(long ndim, double * array)
static int _bind_shelld_c(lua_State *L) {
	if (!_lg_typecheck_shelld_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void shelld_c(long ndim, double * array) function, expected prototype:\nvoid shelld_c(long ndim, double * array)\nClass arguments details:\n");
	}

	long ndim=(long)lua_tointeger(L,1);
	double array=(double)lua_tonumber(L,2);

	shelld_c(ndim, &array);

	return 0;
}

// void shelli_c(long ndim, long * array)
static int _bind_shelli_c(lua_State *L) {
	if (!_lg_typecheck_shelli_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void shelli_c(long ndim, long * array) function, expected prototype:\nvoid shelli_c(long ndim, long * array)\nClass arguments details:\n");
	}

	long ndim=(long)lua_tointeger(L,1);
	long array=(long)lua_tointeger(L,2);

	shelli_c(ndim, &array);

	return 0;
}

// void sigerr_c(const char * message)
static int _bind_sigerr_c(lua_State *L) {
	if (!_lg_typecheck_sigerr_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void sigerr_c(const char * message) function, expected prototype:\nvoid sigerr_c(const char * message)\nClass arguments details:\n");
	}

	const char * message=(const char *)lua_tostring(L,1);

	sigerr_c(message);

	return 0;
}

// double spd_c()
static int _bind_spd_c(lua_State *L) {
	if (!_lg_typecheck_spd_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double spd_c() function, expected prototype:\ndouble spd_c()\nClass arguments details:\n");
	}


	double lret = spd_c();
	lua_pushnumber(L,lret);

	return 1;
}

// void sphcyl_c(double radius, double colat, double slon, double * r, double * lon, double * z)
static int _bind_sphcyl_c(lua_State *L) {
	if (!_lg_typecheck_sphcyl_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void sphcyl_c(double radius, double colat, double slon, double * r, double * lon, double * z) function, expected prototype:\nvoid sphcyl_c(double radius, double colat, double slon, double * r, double * lon, double * z)\nClass arguments details:\n");
	}

	double radius=(double)lua_tonumber(L,1);
	double colat=(double)lua_tonumber(L,2);
	double slon=(double)lua_tonumber(L,3);
	double r=(double)lua_tonumber(L,4);
	double lon=(double)lua_tonumber(L,5);
	double z=(double)lua_tonumber(L,6);

	sphcyl_c(radius, colat, slon, &r, &lon, &z);

	return 0;
}

// void sphlat_c(double r, double colat, double lons, double * radius, double * lon, double * lat)
static int _bind_sphlat_c(lua_State *L) {
	if (!_lg_typecheck_sphlat_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void sphlat_c(double r, double colat, double lons, double * radius, double * lon, double * lat) function, expected prototype:\nvoid sphlat_c(double r, double colat, double lons, double * radius, double * lon, double * lat)\nClass arguments details:\n");
	}

	double r=(double)lua_tonumber(L,1);
	double colat=(double)lua_tonumber(L,2);
	double lons=(double)lua_tonumber(L,3);
	double radius=(double)lua_tonumber(L,4);
	double lon=(double)lua_tonumber(L,5);
	double lat=(double)lua_tonumber(L,6);

	sphlat_c(r, colat, lons, &radius, &lon, &lat);

	return 0;
}

// void spk14b_c(long handle, const char * segid, long body, long center, const char * frame, double first, double last, long chbdeg)
static int _bind_spk14b_c(lua_State *L) {
	if (!_lg_typecheck_spk14b_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void spk14b_c(long handle, const char * segid, long body, long center, const char * frame, double first, double last, long chbdeg) function, expected prototype:\nvoid spk14b_c(long handle, const char * segid, long body, long center, const char * frame, double first, double last, long chbdeg)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);
	const char * segid=(const char *)lua_tostring(L,2);
	long body=(long)lua_tointeger(L,3);
	long center=(long)lua_tointeger(L,4);
	const char * frame=(const char *)lua_tostring(L,5);
	double first=(double)lua_tonumber(L,6);
	double last=(double)lua_tonumber(L,7);
	long chbdeg=(long)lua_tointeger(L,8);

	spk14b_c(handle, segid, body, center, frame, first, last, chbdeg);

	return 0;
}

// void spk14e_c(long handle)
static int _bind_spk14e_c(lua_State *L) {
	if (!_lg_typecheck_spk14e_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void spk14e_c(long handle) function, expected prototype:\nvoid spk14e_c(long handle)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);

	spk14e_c(handle);

	return 0;
}

// void spkcls_c(long handle)
static int _bind_spkcls_c(lua_State *L) {
	if (!_lg_typecheck_spkcls_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void spkcls_c(long handle) function, expected prototype:\nvoid spkcls_c(long handle)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);

	spkcls_c(handle);

	return 0;
}

// void spklef_c(const char * filename, long * handle)
static int _bind_spklef_c(lua_State *L) {
	if (!_lg_typecheck_spklef_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void spklef_c(const char * filename, long * handle) function, expected prototype:\nvoid spklef_c(const char * filename, long * handle)\nClass arguments details:\n");
	}

	const char * filename=(const char *)lua_tostring(L,1);
	long handle=(long)lua_tointeger(L,2);

	spklef_c(filename, &handle);

	return 0;
}

// void spkopa_c(const char * file, long * handle)
static int _bind_spkopa_c(lua_State *L) {
	if (!_lg_typecheck_spkopa_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void spkopa_c(const char * file, long * handle) function, expected prototype:\nvoid spkopa_c(const char * file, long * handle)\nClass arguments details:\n");
	}

	const char * file=(const char *)lua_tostring(L,1);
	long handle=(long)lua_tointeger(L,2);

	spkopa_c(file, &handle);

	return 0;
}

// void spkopn_c(const char * name, const char * ifname, long ncomch, long * handle)
static int _bind_spkopn_c(lua_State *L) {
	if (!_lg_typecheck_spkopn_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void spkopn_c(const char * name, const char * ifname, long ncomch, long * handle) function, expected prototype:\nvoid spkopn_c(const char * name, const char * ifname, long ncomch, long * handle)\nClass arguments details:\n");
	}

	const char * name=(const char *)lua_tostring(L,1);
	const char * ifname=(const char *)lua_tostring(L,2);
	long ncomch=(long)lua_tointeger(L,3);
	long handle=(long)lua_tointeger(L,4);

	spkopn_c(name, ifname, ncomch, &handle);

	return 0;
}

// void spkuef_c(long handle)
static int _bind_spkuef_c(lua_State *L) {
	if (!_lg_typecheck_spkuef_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void spkuef_c(long handle) function, expected prototype:\nvoid spkuef_c(long handle)\nClass arguments details:\n");
	}

	long handle=(long)lua_tointeger(L,1);

	spkuef_c(handle);

	return 0;
}

// void stpool_c(const char * item, long nth, const char * contin, long lenout, char * string, long * size, int * found)
static int _bind_stpool_c(lua_State *L) {
	if (!_lg_typecheck_stpool_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void stpool_c(const char * item, long nth, const char * contin, long lenout, char * string, long * size, int * found) function, expected prototype:\nvoid stpool_c(const char * item, long nth, const char * contin, long lenout, char * string, long * size, int * found)\nClass arguments details:\n");
	}

	const char * item=(const char *)lua_tostring(L,1);
	long nth=(long)lua_tointeger(L,2);
	const char * contin=(const char *)lua_tostring(L,3);
	long lenout=(long)lua_tointeger(L,4);
	char string=(char)lua_tointeger(L,5);
	long size=(long)lua_tointeger(L,6);
	int found=(int)lua_tointeger(L,7);

	stpool_c(item, nth, contin, lenout, &string, &size, &found);

	return 0;
}

// void str2et_c(const char * date, double * et)
static int _bind_str2et_c(lua_State *L) {
	if (!_lg_typecheck_str2et_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void str2et_c(const char * date, double * et) function, expected prototype:\nvoid str2et_c(const char * date, double * et)\nClass arguments details:\n");
	}

	const char * date=(const char *)lua_tostring(L,1);
	double et=(double)lua_tonumber(L,2);

	str2et_c(date, &et);

	return 0;
}

// void swpool_c(const char * agent, long nnames, long lenvals, const void * names)
static int _bind_swpool_c(lua_State *L) {
	if (!_lg_typecheck_swpool_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void swpool_c(const char * agent, long nnames, long lenvals, const void * names) function, expected prototype:\nvoid swpool_c(const char * agent, long nnames, long lenvals, const void * names)\nClass arguments details:\n");
	}

	const char * agent=(const char *)lua_tostring(L,1);
	long nnames=(long)lua_tointeger(L,2);
	long lenvals=(long)lua_tointeger(L,3);
	void* names=(Luna< void >::check(L,4));

	swpool_c(agent, nnames, lenvals, names);

	return 0;
}

// void szpool_c(const char * name, long * n, int * found)
static int _bind_szpool_c(lua_State *L) {
	if (!_lg_typecheck_szpool_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void szpool_c(const char * name, long * n, int * found) function, expected prototype:\nvoid szpool_c(const char * name, long * n, int * found)\nClass arguments details:\n");
	}

	const char * name=(const char *)lua_tostring(L,1);
	long n=(long)lua_tointeger(L,2);
	int found=(int)lua_tointeger(L,3);

	szpool_c(name, &n, &found);

	return 0;
}

// void timdef_c(const char * action, const char * item, long lenout, char * value)
static int _bind_timdef_c(lua_State *L) {
	if (!_lg_typecheck_timdef_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void timdef_c(const char * action, const char * item, long lenout, char * value) function, expected prototype:\nvoid timdef_c(const char * action, const char * item, long lenout, char * value)\nClass arguments details:\n");
	}

	const char * action=(const char *)lua_tostring(L,1);
	const char * item=(const char *)lua_tostring(L,2);
	long lenout=(long)lua_tointeger(L,3);
	char value=(char)lua_tointeger(L,4);

	timdef_c(action, item, lenout, &value);

	return 0;
}

// void timout_c(double et, const char * pictur, long lenout, char * output)
static int _bind_timout_c(lua_State *L) {
	if (!_lg_typecheck_timout_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void timout_c(double et, const char * pictur, long lenout, char * output) function, expected prototype:\nvoid timout_c(double et, const char * pictur, long lenout, char * output)\nClass arguments details:\n");
	}

	double et=(double)lua_tonumber(L,1);
	const char * pictur=(const char *)lua_tostring(L,2);
	long lenout=(long)lua_tointeger(L,3);
	char output=(char)lua_tointeger(L,4);

	timout_c(et, pictur, lenout, &output);

	return 0;
}

// const char * tkvrsn_c(const char * item)
static int _bind_tkvrsn_c(lua_State *L) {
	if (!_lg_typecheck_tkvrsn_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in const char * tkvrsn_c(const char * item) function, expected prototype:\nconst char * tkvrsn_c(const char * item)\nClass arguments details:\n");
	}

	const char * item=(const char *)lua_tostring(L,1);

	const char * lret = tkvrsn_c(item);
	lua_pushstring(L,lret);

	return 1;
}

// void tparse_c(const char * string, long lenout, double * sp2000, char * errmsg)
static int _bind_tparse_c(lua_State *L) {
	if (!_lg_typecheck_tparse_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void tparse_c(const char * string, long lenout, double * sp2000, char * errmsg) function, expected prototype:\nvoid tparse_c(const char * string, long lenout, double * sp2000, char * errmsg)\nClass arguments details:\n");
	}

	const char * string=(const char *)lua_tostring(L,1);
	long lenout=(long)lua_tointeger(L,2);
	double sp2000=(double)lua_tonumber(L,3);
	char errmsg=(char)lua_tointeger(L,4);

	tparse_c(string, lenout, &sp2000, &errmsg);

	return 0;
}

// void tpictr_c(const char * sample, long lenpictur, long lenerror, char * pictur, int * ok, char * error)
static int _bind_tpictr_c(lua_State *L) {
	if (!_lg_typecheck_tpictr_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void tpictr_c(const char * sample, long lenpictur, long lenerror, char * pictur, int * ok, char * error) function, expected prototype:\nvoid tpictr_c(const char * sample, long lenpictur, long lenerror, char * pictur, int * ok, char * error)\nClass arguments details:\n");
	}

	const char * sample=(const char *)lua_tostring(L,1);
	long lenpictur=(long)lua_tointeger(L,2);
	long lenerror=(long)lua_tointeger(L,3);
	char pictur=(char)lua_tointeger(L,4);
	int ok=(int)lua_tointeger(L,5);
	char error=(char)lua_tointeger(L,6);

	tpictr_c(sample, lenpictur, lenerror, &pictur, &ok, &error);

	return 0;
}

// void trcoff_c()
static int _bind_trcoff_c(lua_State *L) {
	if (!_lg_typecheck_trcoff_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void trcoff_c() function, expected prototype:\nvoid trcoff_c()\nClass arguments details:\n");
	}


	trcoff_c();

	return 0;
}

// void tsetyr_c(long year)
static int _bind_tsetyr_c(lua_State *L) {
	if (!_lg_typecheck_tsetyr_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void tsetyr_c(long year) function, expected prototype:\nvoid tsetyr_c(long year)\nClass arguments details:\n");
	}

	long year=(long)lua_tointeger(L,1);

	tsetyr_c(year);

	return 0;
}

// double twopi_c()
static int _bind_twopi_c(lua_State *L) {
	if (!_lg_typecheck_twopi_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double twopi_c() function, expected prototype:\ndouble twopi_c()\nClass arguments details:\n");
	}


	double lret = twopi_c();
	lua_pushnumber(L,lret);

	return 1;
}

// double tyear_c()
static int _bind_tyear_c(lua_State *L) {
	if (!_lg_typecheck_tyear_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double tyear_c() function, expected prototype:\ndouble tyear_c()\nClass arguments details:\n");
	}


	double lret = tyear_c();
	lua_pushnumber(L,lret);

	return 1;
}

// void ucase_c(char * in, long lenout, char * out)
static int _bind_ucase_c(lua_State *L) {
	if (!_lg_typecheck_ucase_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void ucase_c(char * in, long lenout, char * out) function, expected prototype:\nvoid ucase_c(char * in, long lenout, char * out)\nClass arguments details:\n");
	}

	char in=(char)lua_tointeger(L,1);
	long lenout=(long)lua_tointeger(L,2);
	char out=(char)lua_tointeger(L,3);

	ucase_c(&in, lenout, &out);

	return 0;
}

// double unitim_c(double epoch, const char * insys, const char * outsys)
static int _bind_unitim_c(lua_State *L) {
	if (!_lg_typecheck_unitim_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double unitim_c(double epoch, const char * insys, const char * outsys) function, expected prototype:\ndouble unitim_c(double epoch, const char * insys, const char * outsys)\nClass arguments details:\n");
	}

	double epoch=(double)lua_tonumber(L,1);
	const char * insys=(const char *)lua_tostring(L,2);
	const char * outsys=(const char *)lua_tostring(L,3);

	double lret = unitim_c(epoch, insys, outsys);
	lua_pushnumber(L,lret);

	return 1;
}

// void unload_c(const char * file)
static int _bind_unload_c(lua_State *L) {
	if (!_lg_typecheck_unload_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void unload_c(const char * file) function, expected prototype:\nvoid unload_c(const char * file)\nClass arguments details:\n");
	}

	const char * file=(const char *)lua_tostring(L,1);

	unload_c(file);

	return 0;
}

// void unormg_c(const double * v1, long ndim, double * vout, double * vmag)
static int _bind_unormg_c(lua_State *L) {
	if (!_lg_typecheck_unormg_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void unormg_c(const double * v1, long ndim, double * vout, double * vmag) function, expected prototype:\nvoid unormg_c(const double * v1, long ndim, double * vout, double * vmag)\nClass arguments details:\n");
	}

	double v1=(double)lua_tonumber(L,1);
	long ndim=(long)lua_tointeger(L,2);
	double vout=(double)lua_tonumber(L,3);
	double vmag=(double)lua_tonumber(L,4);

	unormg_c(&v1, ndim, &vout, &vmag);

	return 0;
}

// void utc2et_c(const char * utcstr, double * et)
static int _bind_utc2et_c(lua_State *L) {
	if (!_lg_typecheck_utc2et_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void utc2et_c(const char * utcstr, double * et) function, expected prototype:\nvoid utc2et_c(const char * utcstr, double * et)\nClass arguments details:\n");
	}

	const char * utcstr=(const char *)lua_tostring(L,1);
	double et=(double)lua_tonumber(L,2);

	utc2et_c(utcstr, &et);

	return 0;
}

// void vaddg_c(const double * v1, const double * v2, long ndim, double * vout)
static int _bind_vaddg_c(lua_State *L) {
	if (!_lg_typecheck_vaddg_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void vaddg_c(const double * v1, const double * v2, long ndim, double * vout) function, expected prototype:\nvoid vaddg_c(const double * v1, const double * v2, long ndim, double * vout)\nClass arguments details:\n");
	}

	double v1=(double)lua_tonumber(L,1);
	double v2=(double)lua_tonumber(L,2);
	long ndim=(long)lua_tointeger(L,3);
	double vout=(double)lua_tonumber(L,4);

	vaddg_c(&v1, &v2, ndim, &vout);

	return 0;
}

// double vdistg_c(const double * v1, const double * v2, long ndim)
static int _bind_vdistg_c(lua_State *L) {
	if (!_lg_typecheck_vdistg_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double vdistg_c(const double * v1, const double * v2, long ndim) function, expected prototype:\ndouble vdistg_c(const double * v1, const double * v2, long ndim)\nClass arguments details:\n");
	}

	double v1=(double)lua_tonumber(L,1);
	double v2=(double)lua_tonumber(L,2);
	long ndim=(long)lua_tointeger(L,3);

	double lret = vdistg_c(&v1, &v2, ndim);
	lua_pushnumber(L,lret);

	return 1;
}

// double vdotg_c(const double * v1, const double * v2, long ndim)
static int _bind_vdotg_c(lua_State *L) {
	if (!_lg_typecheck_vdotg_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double vdotg_c(const double * v1, const double * v2, long ndim) function, expected prototype:\ndouble vdotg_c(const double * v1, const double * v2, long ndim)\nClass arguments details:\n");
	}

	double v1=(double)lua_tonumber(L,1);
	double v2=(double)lua_tonumber(L,2);
	long ndim=(long)lua_tointeger(L,3);

	double lret = vdotg_c(&v1, &v2, ndim);
	lua_pushnumber(L,lret);

	return 1;
}

// void vequg_c(const double * vin, long ndim, double * vout)
static int _bind_vequg_c(lua_State *L) {
	if (!_lg_typecheck_vequg_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void vequg_c(const double * vin, long ndim, double * vout) function, expected prototype:\nvoid vequg_c(const double * vin, long ndim, double * vout)\nClass arguments details:\n");
	}

	double vin=(double)lua_tonumber(L,1);
	long ndim=(long)lua_tointeger(L,2);
	double vout=(double)lua_tonumber(L,3);

	vequg_c(&vin, ndim, &vout);

	return 0;
}

// void vhatg_c(const double * v1, long ndim, double * vout)
static int _bind_vhatg_c(lua_State *L) {
	if (!_lg_typecheck_vhatg_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void vhatg_c(const double * v1, long ndim, double * vout) function, expected prototype:\nvoid vhatg_c(const double * v1, long ndim, double * vout)\nClass arguments details:\n");
	}

	double v1=(double)lua_tonumber(L,1);
	long ndim=(long)lua_tointeger(L,2);
	double vout=(double)lua_tonumber(L,3);

	vhatg_c(&v1, ndim, &vout);

	return 0;
}

// void vlcomg_c(long n, double a, const double * v1, double b, const double * v2, double * sum)
static int _bind_vlcomg_c(lua_State *L) {
	if (!_lg_typecheck_vlcomg_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void vlcomg_c(long n, double a, const double * v1, double b, const double * v2, double * sum) function, expected prototype:\nvoid vlcomg_c(long n, double a, const double * v1, double b, const double * v2, double * sum)\nClass arguments details:\n");
	}

	long n=(long)lua_tointeger(L,1);
	double a=(double)lua_tonumber(L,2);
	double v1=(double)lua_tonumber(L,3);
	double b=(double)lua_tonumber(L,4);
	double v2=(double)lua_tonumber(L,5);
	double sum=(double)lua_tonumber(L,6);

	vlcomg_c(n, a, &v1, b, &v2, &sum);

	return 0;
}

// void vminug_c(const double * vin, long ndim, double * vout)
static int _bind_vminug_c(lua_State *L) {
	if (!_lg_typecheck_vminug_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void vminug_c(const double * vin, long ndim, double * vout) function, expected prototype:\nvoid vminug_c(const double * vin, long ndim, double * vout)\nClass arguments details:\n");
	}

	double vin=(double)lua_tonumber(L,1);
	long ndim=(long)lua_tointeger(L,2);
	double vout=(double)lua_tonumber(L,3);

	vminug_c(&vin, ndim, &vout);

	return 0;
}

// double vnormg_c(const double * v1, long ndim)
static int _bind_vnormg_c(lua_State *L) {
	if (!_lg_typecheck_vnormg_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double vnormg_c(const double * v1, long ndim) function, expected prototype:\ndouble vnormg_c(const double * v1, long ndim)\nClass arguments details:\n");
	}

	double v1=(double)lua_tonumber(L,1);
	long ndim=(long)lua_tointeger(L,2);

	double lret = vnormg_c(&v1, ndim);
	lua_pushnumber(L,lret);

	return 1;
}

// double vrelg_c(const double * v1, const double * v2, long ndim)
static int _bind_vrelg_c(lua_State *L) {
	if (!_lg_typecheck_vrelg_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double vrelg_c(const double * v1, const double * v2, long ndim) function, expected prototype:\ndouble vrelg_c(const double * v1, const double * v2, long ndim)\nClass arguments details:\n");
	}

	double v1=(double)lua_tonumber(L,1);
	double v2=(double)lua_tonumber(L,2);
	long ndim=(long)lua_tointeger(L,3);

	double lret = vrelg_c(&v1, &v2, ndim);
	lua_pushnumber(L,lret);

	return 1;
}

// void vsclg_c(double s, const double * v1, long ndim, double * vout)
static int _bind_vsclg_c(lua_State *L) {
	if (!_lg_typecheck_vsclg_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void vsclg_c(double s, const double * v1, long ndim, double * vout) function, expected prototype:\nvoid vsclg_c(double s, const double * v1, long ndim, double * vout)\nClass arguments details:\n");
	}

	double s=(double)lua_tonumber(L,1);
	double v1=(double)lua_tonumber(L,2);
	long ndim=(long)lua_tointeger(L,3);
	double vout=(double)lua_tonumber(L,4);

	vsclg_c(s, &v1, ndim, &vout);

	return 0;
}

// void vsubg_c(const double * v1, const double * v2, long ndim, double * vout)
static int _bind_vsubg_c(lua_State *L) {
	if (!_lg_typecheck_vsubg_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void vsubg_c(const double * v1, const double * v2, long ndim, double * vout) function, expected prototype:\nvoid vsubg_c(const double * v1, const double * v2, long ndim, double * vout)\nClass arguments details:\n");
	}

	double v1=(double)lua_tonumber(L,1);
	double v2=(double)lua_tonumber(L,2);
	long ndim=(long)lua_tointeger(L,3);
	double vout=(double)lua_tonumber(L,4);

	vsubg_c(&v1, &v2, ndim, &vout);

	return 0;
}

// double vsepg_c(const double * v1, const double * v2, long ndim)
static int _bind_vsepg_c(lua_State *L) {
	if (!_lg_typecheck_vsepg_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double vsepg_c(const double * v1, const double * v2, long ndim) function, expected prototype:\ndouble vsepg_c(const double * v1, const double * v2, long ndim)\nClass arguments details:\n");
	}

	double v1=(double)lua_tonumber(L,1);
	double v2=(double)lua_tonumber(L,2);
	long ndim=(long)lua_tointeger(L,3);

	double lret = vsepg_c(&v1, &v2, ndim);
	lua_pushnumber(L,lret);

	return 1;
}

// double vtmvg_c(const void * v1, const void * matrix, const void * v2, long nrow, long ncol)
static int _bind_vtmvg_c(lua_State *L) {
	if (!_lg_typecheck_vtmvg_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double vtmvg_c(const void * v1, const void * matrix, const void * v2, long nrow, long ncol) function, expected prototype:\ndouble vtmvg_c(const void * v1, const void * matrix, const void * v2, long nrow, long ncol)\nClass arguments details:\n");
	}

	void* v1=(Luna< void >::check(L,1));
	void* matrix=(Luna< void >::check(L,2));
	void* v2=(Luna< void >::check(L,3));
	long nrow=(long)lua_tointeger(L,4);
	long ncol=(long)lua_tointeger(L,5);

	double lret = vtmvg_c(v1, matrix, v2, nrow, ncol);
	lua_pushnumber(L,lret);

	return 1;
}

// int vzerog_c(const double * v, long ndim)
static int _bind_vzerog_c(lua_State *L) {
	if (!_lg_typecheck_vzerog_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int vzerog_c(const double * v, long ndim) function, expected prototype:\nint vzerog_c(const double * v, long ndim)\nClass arguments details:\n");
	}

	double v=(double)lua_tonumber(L,1);
	long ndim=(long)lua_tointeger(L,2);

	int lret = vzerog_c(&v, ndim);
	lua_pushnumber(L,lret);

	return 1;
}

// void xposeg_c(const void * matrix, long nrow, long ncol, void * xposem)
static int _bind_xposeg_c(lua_State *L) {
	if (!_lg_typecheck_xposeg_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void xposeg_c(const void * matrix, long nrow, long ncol, void * xposem) function, expected prototype:\nvoid xposeg_c(const void * matrix, long nrow, long ncol, void * xposem)\nClass arguments details:\n");
	}

	void* matrix=(Luna< void >::check(L,1));
	long nrow=(long)lua_tointeger(L,2);
	long ncol=(long)lua_tointeger(L,3);
	void* xposem=(Luna< void >::check(L,4));

	xposeg_c(matrix, nrow, ncol, xposem);

	return 0;
}

// int zzgfgeth_c()
static int _bind_zzgfgeth_c(lua_State *L) {
	if (!_lg_typecheck_zzgfgeth_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int zzgfgeth_c() function, expected prototype:\nint zzgfgeth_c()\nClass arguments details:\n");
	}


	int lret = zzgfgeth_c();
	lua_pushnumber(L,lret);

	return 1;
}

// void zzgfsavh_c(int status)
static int _bind_zzgfsavh_c(lua_State *L) {
	if (!_lg_typecheck_zzgfsavh_c(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void zzgfsavh_c(int status) function, expected prototype:\nvoid zzgfsavh_c(int status)\nClass arguments details:\n");
	}

	int status=(int)lua_tointeger(L,1);

	zzgfsavh_c(status);

	return 0;
}


#ifdef __cplusplus
extern "C" {
#endif

void register_global_functions(lua_State* L) {
	lua_pushcfunction(L, _bind_badkpv_c); lua_setfield(L,-2,"badkpv_c");
	lua_pushcfunction(L, _bind_bodc2n_c); lua_setfield(L,-2,"bodc2n_c");
	lua_pushcfunction(L, _bind_bodc2s_c); lua_setfield(L,-2,"bodc2s_c");
	lua_pushcfunction(L, _bind_boddef_c); lua_setfield(L,-2,"boddef_c");
	lua_pushcfunction(L, _bind_bodfnd_c); lua_setfield(L,-2,"bodfnd_c");
	lua_pushcfunction(L, _bind_bodn2c_c); lua_setfield(L,-2,"bodn2c_c");
	lua_pushcfunction(L, _bind_bods2c_c); lua_setfield(L,-2,"bods2c_c");
	lua_pushcfunction(L, _bind_bodvar_c); lua_setfield(L,-2,"bodvar_c");
	lua_pushcfunction(L, _bind_bodvcd_c); lua_setfield(L,-2,"bodvcd_c");
	lua_pushcfunction(L, _bind_bodvrd_c); lua_setfield(L,-2,"bodvrd_c");
	lua_pushcfunction(L, _bind_brcktd_c); lua_setfield(L,-2,"brcktd_c");
	lua_pushcfunction(L, _bind_brckti_c); lua_setfield(L,-2,"brckti_c");
	lua_pushcfunction(L, _bind_bschoc_c); lua_setfield(L,-2,"bschoc_c");
	lua_pushcfunction(L, _bind_bschoi_c); lua_setfield(L,-2,"bschoi_c");
	lua_pushcfunction(L, _bind_bsrchc_c); lua_setfield(L,-2,"bsrchc_c");
	lua_pushcfunction(L, _bind_bsrchd_c); lua_setfield(L,-2,"bsrchd_c");
	lua_pushcfunction(L, _bind_bsrchi_c); lua_setfield(L,-2,"bsrchi_c");
	lua_pushcfunction(L, _bind_b1900_c); lua_setfield(L,-2,"b1900_c");
	lua_pushcfunction(L, _bind_b1950_c); lua_setfield(L,-2,"b1950_c");
	lua_pushcfunction(L, _bind_chkin_c); lua_setfield(L,-2,"chkin_c");
	lua_pushcfunction(L, _bind_chkout_c); lua_setfield(L,-2,"chkout_c");
	lua_pushcfunction(L, _bind_cidfrm_c); lua_setfield(L,-2,"cidfrm_c");
	lua_pushcfunction(L, _bind_ckcls_c); lua_setfield(L,-2,"ckcls_c");
	lua_pushcfunction(L, _bind_cklpf_c); lua_setfield(L,-2,"cklpf_c");
	lua_pushcfunction(L, _bind_ckopn_c); lua_setfield(L,-2,"ckopn_c");
	lua_pushcfunction(L, _bind_ckupf_c); lua_setfield(L,-2,"ckupf_c");
	lua_pushcfunction(L, _bind_clight_c); lua_setfield(L,-2,"clight_c");
	lua_pushcfunction(L, _bind_clpool_c); lua_setfield(L,-2,"clpool_c");
	lua_pushcfunction(L, _bind_cmprss_c); lua_setfield(L,-2,"cmprss_c");
	lua_pushcfunction(L, _bind_cnmfrm_c); lua_setfield(L,-2,"cnmfrm_c");
	lua_pushcfunction(L, _bind_convrt_c); lua_setfield(L,-2,"convrt_c");
	lua_pushcfunction(L, _bind_cpos_c); lua_setfield(L,-2,"cpos_c");
	lua_pushcfunction(L, _bind_cposr_c); lua_setfield(L,-2,"cposr_c");
	lua_pushcfunction(L, _bind_cvpool_c); lua_setfield(L,-2,"cvpool_c");
	lua_pushcfunction(L, _bind_cyllat_c); lua_setfield(L,-2,"cyllat_c");
	lua_pushcfunction(L, _bind_cylsph_c); lua_setfield(L,-2,"cylsph_c");
	lua_pushcfunction(L, _bind_dafac_c); lua_setfield(L,-2,"dafac_c");
	lua_pushcfunction(L, _bind_dafbbs_c); lua_setfield(L,-2,"dafbbs_c");
	lua_pushcfunction(L, _bind_dafbfs_c); lua_setfield(L,-2,"dafbfs_c");
	lua_pushcfunction(L, _bind_dafcls_c); lua_setfield(L,-2,"dafcls_c");
	lua_pushcfunction(L, _bind_dafcs_c); lua_setfield(L,-2,"dafcs_c");
	lua_pushcfunction(L, _bind_dafdc_c); lua_setfield(L,-2,"dafdc_c");
	lua_pushcfunction(L, _bind_dafec_c); lua_setfield(L,-2,"dafec_c");
	lua_pushcfunction(L, _bind_daffna_c); lua_setfield(L,-2,"daffna_c");
	lua_pushcfunction(L, _bind_daffpa_c); lua_setfield(L,-2,"daffpa_c");
	lua_pushcfunction(L, _bind_dafgda_c); lua_setfield(L,-2,"dafgda_c");
	lua_pushcfunction(L, _bind_dafgn_c); lua_setfield(L,-2,"dafgn_c");
	lua_pushcfunction(L, _bind_dafgsr_c); lua_setfield(L,-2,"dafgsr_c");
	lua_pushcfunction(L, _bind_dafopr_c); lua_setfield(L,-2,"dafopr_c");
	lua_pushcfunction(L, _bind_dafopw_c); lua_setfield(L,-2,"dafopw_c");
	lua_pushcfunction(L, _bind_dafrda_c); lua_setfield(L,-2,"dafrda_c");
	lua_pushcfunction(L, _bind_dafrfr_c); lua_setfield(L,-2,"dafrfr_c");
	lua_pushcfunction(L, _bind_dafrs_c); lua_setfield(L,-2,"dafrs_c");
	lua_pushcfunction(L, _bind_dasac_c); lua_setfield(L,-2,"dasac_c");
	lua_pushcfunction(L, _bind_dascls_c); lua_setfield(L,-2,"dascls_c");
	lua_pushcfunction(L, _bind_dasec_c); lua_setfield(L,-2,"dasec_c");
	lua_pushcfunction(L, _bind_dasopr_c); lua_setfield(L,-2,"dasopr_c");
	lua_pushcfunction(L, _bind_deltet_c); lua_setfield(L,-2,"deltet_c");
	lua_pushcfunction(L, _bind_dp2hx_c); lua_setfield(L,-2,"dp2hx_c");
	lua_pushcfunction(L, _bind_dpmax_c); lua_setfield(L,-2,"dpmax_c");
	lua_pushcfunction(L, _bind_dpmax_); lua_setfield(L,-2,"dpmax_");
	lua_pushcfunction(L, _bind_dpmin_c); lua_setfield(L,-2,"dpmin_c");
	lua_pushcfunction(L, _bind_dpmin_); lua_setfield(L,-2,"dpmin_");
	lua_pushcfunction(L, _bind_dpr_c); lua_setfield(L,-2,"dpr_c");
	lua_pushcfunction(L, _bind_dvpool_c); lua_setfield(L,-2,"dvpool_c");
	lua_pushcfunction(L, _bind_dvsep_c); lua_setfield(L,-2,"dvsep_c");
	lua_pushcfunction(L, _bind_ekacec_c); lua_setfield(L,-2,"ekacec_c");
	lua_pushcfunction(L, _bind_ekaced_c); lua_setfield(L,-2,"ekaced_c");
	lua_pushcfunction(L, _bind_ekacei_c); lua_setfield(L,-2,"ekacei_c");
	lua_pushcfunction(L, _bind_ekaclc_c); lua_setfield(L,-2,"ekaclc_c");
	lua_pushcfunction(L, _bind_ekacld_c); lua_setfield(L,-2,"ekacld_c");
	lua_pushcfunction(L, _bind_ekacli_c); lua_setfield(L,-2,"ekacli_c");
	lua_pushcfunction(L, _bind_ekappr_c); lua_setfield(L,-2,"ekappr_c");
	lua_pushcfunction(L, _bind_ekbseg_c); lua_setfield(L,-2,"ekbseg_c");
	lua_pushcfunction(L, _bind_ekccnt_c); lua_setfield(L,-2,"ekccnt_c");
	lua_pushcfunction(L, _bind_ekcls_c); lua_setfield(L,-2,"ekcls_c");
	lua_pushcfunction(L, _bind_ekdelr_c); lua_setfield(L,-2,"ekdelr_c");
	lua_pushcfunction(L, _bind_ekffld_c); lua_setfield(L,-2,"ekffld_c");
	lua_pushcfunction(L, _bind_ekfind_c); lua_setfield(L,-2,"ekfind_c");
	lua_pushcfunction(L, _bind_ekgc_c); lua_setfield(L,-2,"ekgc_c");
	lua_pushcfunction(L, _bind_ekgd_c); lua_setfield(L,-2,"ekgd_c");
	lua_pushcfunction(L, _bind_ekgi_c); lua_setfield(L,-2,"ekgi_c");
	lua_pushcfunction(L, _bind_ekifld_c); lua_setfield(L,-2,"ekifld_c");
	lua_pushcfunction(L, _bind_ekinsr_c); lua_setfield(L,-2,"ekinsr_c");
	lua_pushcfunction(L, _bind_eklef_c); lua_setfield(L,-2,"eklef_c");
	lua_pushcfunction(L, _bind_eknelt_c); lua_setfield(L,-2,"eknelt_c");
	lua_pushcfunction(L, _bind_eknseg_c); lua_setfield(L,-2,"eknseg_c");
	lua_pushcfunction(L, _bind_ekntab_c); lua_setfield(L,-2,"ekntab_c");
	lua_pushcfunction(L, _bind_ekopn_c); lua_setfield(L,-2,"ekopn_c");
	lua_pushcfunction(L, _bind_ekopr_c); lua_setfield(L,-2,"ekopr_c");
	lua_pushcfunction(L, _bind_ekops_c); lua_setfield(L,-2,"ekops_c");
	lua_pushcfunction(L, _bind_ekopw_c); lua_setfield(L,-2,"ekopw_c");
	lua_pushcfunction(L, _bind_ekpsel_c); lua_setfield(L,-2,"ekpsel_c");
	lua_pushcfunction(L, _bind_ekrcec_c); lua_setfield(L,-2,"ekrcec_c");
	lua_pushcfunction(L, _bind_ekrced_c); lua_setfield(L,-2,"ekrced_c");
	lua_pushcfunction(L, _bind_ekrcei_c); lua_setfield(L,-2,"ekrcei_c");
	lua_pushcfunction(L, _bind_ektnam_c); lua_setfield(L,-2,"ektnam_c");
	lua_pushcfunction(L, _bind_ekucec_c); lua_setfield(L,-2,"ekucec_c");
	lua_pushcfunction(L, _bind_ekuef_c); lua_setfield(L,-2,"ekuef_c");
	lua_pushcfunction(L, _bind_eqstr_c); lua_setfield(L,-2,"eqstr_c");
	lua_pushcfunction(L, _bind_erract_c); lua_setfield(L,-2,"erract_c");
	lua_pushcfunction(L, _bind_errch_c); lua_setfield(L,-2,"errch_c");
	lua_pushcfunction(L, _bind_errdev_c); lua_setfield(L,-2,"errdev_c");
	lua_pushcfunction(L, _bind_errdp_c); lua_setfield(L,-2,"errdp_c");
	lua_pushcfunction(L, _bind_errint_c); lua_setfield(L,-2,"errint_c");
	lua_pushcfunction(L, _bind_errprt_c); lua_setfield(L,-2,"errprt_c");
	lua_pushcfunction(L, _bind_esrchc_c); lua_setfield(L,-2,"esrchc_c");
	lua_pushcfunction(L, _bind_etcal_c); lua_setfield(L,-2,"etcal_c");
	lua_pushcfunction(L, _bind_et2lst_c); lua_setfield(L,-2,"et2lst_c");
	lua_pushcfunction(L, _bind_et2utc_c); lua_setfield(L,-2,"et2utc_c");
	lua_pushcfunction(L, _bind_exists_c); lua_setfield(L,-2,"exists_c");
	lua_pushcfunction(L, _bind_expool_c); lua_setfield(L,-2,"expool_c");
	lua_pushcfunction(L, _bind_failed_c); lua_setfield(L,-2,"failed_c");
	lua_pushcfunction(L, _bind_frinfo_c); lua_setfield(L,-2,"frinfo_c");
	lua_pushcfunction(L, _bind_frmnam_c); lua_setfield(L,-2,"frmnam_c");
	lua_pushcfunction(L, _bind_ftncls_c); lua_setfield(L,-2,"ftncls_c");
	lua_pushcfunction(L, _bind_furnsh_c); lua_setfield(L,-2,"furnsh_c");
	lua_pushcfunction(L, _bind_gcpool_c); lua_setfield(L,-2,"gcpool_c");
	lua_pushcfunction(L, _bind_gdpool_c); lua_setfield(L,-2,"gdpool_c");
	lua_pushcfunction(L, _bind_getelm_c); lua_setfield(L,-2,"getelm_c");
	lua_pushcfunction(L, _bind_getfat_c); lua_setfield(L,-2,"getfat_c");
	lua_pushcfunction(L, _bind_getmsg_c); lua_setfield(L,-2,"getmsg_c");
	lua_pushcfunction(L, _bind_gfbail_c); lua_setfield(L,-2,"gfbail_c");
	lua_pushcfunction(L, _bind_gfclrh_c); lua_setfield(L,-2,"gfclrh_c");
	lua_pushcfunction(L, _bind_gfinth_c); lua_setfield(L,-2,"gfinth_c");
	lua_pushcfunction(L, _bind_gfrefn_c); lua_setfield(L,-2,"gfrefn_c");
	lua_pushcfunction(L, _bind_gfrepf_c); lua_setfield(L,-2,"gfrepf_c");
	lua_pushcfunction(L, _bind_gfrepu_c); lua_setfield(L,-2,"gfrepu_c");
	lua_pushcfunction(L, _bind_gfsstp_c); lua_setfield(L,-2,"gfsstp_c");
	lua_pushcfunction(L, _bind_gfstep_c); lua_setfield(L,-2,"gfstep_c");
	lua_pushcfunction(L, _bind_gipool_c); lua_setfield(L,-2,"gipool_c");
	lua_pushcfunction(L, _bind_gnpool_c); lua_setfield(L,-2,"gnpool_c");
	lua_pushcfunction(L, _bind_halfpi_c); lua_setfield(L,-2,"halfpi_c");
	lua_pushcfunction(L, _bind_hx2dp_c); lua_setfield(L,-2,"hx2dp_c");
	lua_pushcfunction(L, _bind_intmax_c); lua_setfield(L,-2,"intmax_c");
	lua_pushcfunction(L, _bind_intmax_); lua_setfield(L,-2,"intmax_");
	lua_pushcfunction(L, _bind_intmin_c); lua_setfield(L,-2,"intmin_c");
	lua_pushcfunction(L, _bind_intmin_); lua_setfield(L,-2,"intmin_");
	lua_pushcfunction(L, _bind_isordv_c); lua_setfield(L,-2,"isordv_c");
	lua_pushcfunction(L, _bind_isrchc_c); lua_setfield(L,-2,"isrchc_c");
	lua_pushcfunction(L, _bind_isrchd_c); lua_setfield(L,-2,"isrchd_c");
	lua_pushcfunction(L, _bind_isrchi_c); lua_setfield(L,-2,"isrchi_c");
	lua_pushcfunction(L, _bind_iswhsp_c); lua_setfield(L,-2,"iswhsp_c");
	lua_pushcfunction(L, _bind_j1900_c); lua_setfield(L,-2,"j1900_c");
	lua_pushcfunction(L, _bind_j1950_c); lua_setfield(L,-2,"j1950_c");
	lua_pushcfunction(L, _bind_j2000_c); lua_setfield(L,-2,"j2000_c");
	lua_pushcfunction(L, _bind_j2100_c); lua_setfield(L,-2,"j2100_c");
	lua_pushcfunction(L, _bind_jyear_c); lua_setfield(L,-2,"jyear_c");
	lua_pushcfunction(L, _bind_kclear_c); lua_setfield(L,-2,"kclear_c");
	lua_pushcfunction(L, _bind_kdata_c); lua_setfield(L,-2,"kdata_c");
	lua_pushcfunction(L, _bind_kinfo_c); lua_setfield(L,-2,"kinfo_c");
	lua_pushcfunction(L, _bind_ktotal_c); lua_setfield(L,-2,"ktotal_c");
	lua_pushcfunction(L, _bind_kxtrct_c); lua_setfield(L,-2,"kxtrct_c");
	lua_pushcfunction(L, _bind_lastnb_c); lua_setfield(L,-2,"lastnb_c");
	lua_pushcfunction(L, _bind_latcyl_c); lua_setfield(L,-2,"latcyl_c");
	lua_pushcfunction(L, _bind_latsph_c); lua_setfield(L,-2,"latsph_c");
	lua_pushcfunction(L, _bind_lcase_c); lua_setfield(L,-2,"lcase_c");
	lua_pushcfunction(L, _bind_ldpool_c); lua_setfield(L,-2,"ldpool_c");
	lua_pushcfunction(L, _bind_lmpool_c); lua_setfield(L,-2,"lmpool_c");
	lua_pushcfunction(L, _bind_lparse_c); lua_setfield(L,-2,"lparse_c");
	lua_pushcfunction(L, _bind_lparsm_c); lua_setfield(L,-2,"lparsm_c");
	lua_pushcfunction(L, _bind_lspcn_c); lua_setfield(L,-2,"lspcn_c");
	lua_pushcfunction(L, _bind_lstlec_c); lua_setfield(L,-2,"lstlec_c");
	lua_pushcfunction(L, _bind_lstled_c); lua_setfield(L,-2,"lstled_c");
	lua_pushcfunction(L, _bind_lstlei_c); lua_setfield(L,-2,"lstlei_c");
	lua_pushcfunction(L, _bind_lstltc_c); lua_setfield(L,-2,"lstltc_c");
	lua_pushcfunction(L, _bind_lstltd_c); lua_setfield(L,-2,"lstltd_c");
	lua_pushcfunction(L, _bind_lstlti_c); lua_setfield(L,-2,"lstlti_c");
	lua_pushcfunction(L, _bind_ltime_c); lua_setfield(L,-2,"ltime_c");
	lua_pushcfunction(L, _bind_lx4dec_c); lua_setfield(L,-2,"lx4dec_c");
	lua_pushcfunction(L, _bind_lx4num_c); lua_setfield(L,-2,"lx4num_c");
	lua_pushcfunction(L, _bind_lx4sgn_c); lua_setfield(L,-2,"lx4sgn_c");
	lua_pushcfunction(L, _bind_lx4uns_c); lua_setfield(L,-2,"lx4uns_c");
	lua_pushcfunction(L, _bind_lxqstr_c); lua_setfield(L,-2,"lxqstr_c");
	lua_pushcfunction(L, _bind_matchi_c); lua_setfield(L,-2,"matchi_c");
	lua_pushcfunction(L, _bind_matchw_c); lua_setfield(L,-2,"matchw_c");
	lua_pushcfunction(L, _bind_mequg_c); lua_setfield(L,-2,"mequg_c");
	lua_pushcfunction(L, _bind_moved_); lua_setfield(L,-2,"moved_");
	lua_pushcfunction(L, _bind_mtxmg_c); lua_setfield(L,-2,"mtxmg_c");
	lua_pushcfunction(L, _bind_mtxvg_c); lua_setfield(L,-2,"mtxvg_c");
	lua_pushcfunction(L, _bind_mxmg_c); lua_setfield(L,-2,"mxmg_c");
	lua_pushcfunction(L, _bind_mxmtg_c); lua_setfield(L,-2,"mxmtg_c");
	lua_pushcfunction(L, _bind_mxvg_c); lua_setfield(L,-2,"mxvg_c");
	lua_pushcfunction(L, _bind_namfrm_c); lua_setfield(L,-2,"namfrm_c");
	lua_pushcfunction(L, _bind_ncpos_c); lua_setfield(L,-2,"ncpos_c");
	lua_pushcfunction(L, _bind_ncposr_c); lua_setfield(L,-2,"ncposr_c");
	lua_pushcfunction(L, _bind_orderc_c); lua_setfield(L,-2,"orderc_c");
	lua_pushcfunction(L, _bind_orderd_c); lua_setfield(L,-2,"orderd_c");
	lua_pushcfunction(L, _bind_orderi_c); lua_setfield(L,-2,"orderi_c");
	lua_pushcfunction(L, _bind_pcklof_c); lua_setfield(L,-2,"pcklof_c");
	lua_pushcfunction(L, _bind_pckuof_c); lua_setfield(L,-2,"pckuof_c");
	lua_pushcfunction(L, _bind_pcpool_c); lua_setfield(L,-2,"pcpool_c");
	lua_pushcfunction(L, _bind_pdpool_c); lua_setfield(L,-2,"pdpool_c");
	lua_pushcfunction(L, _bind_pi_c); lua_setfield(L,-2,"pi_c");
	lua_pushcfunction(L, _bind_pipool_c); lua_setfield(L,-2,"pipool_c");
	lua_pushcfunction(L, _bind_pos_c); lua_setfield(L,-2,"pos_c");
	lua_pushcfunction(L, _bind_posr_c); lua_setfield(L,-2,"posr_c");
	lua_pushcfunction(L, _bind_prompt_c); lua_setfield(L,-2,"prompt_c");
	lua_pushcfunction(L, _bind_prsdp_c); lua_setfield(L,-2,"prsdp_c");
	lua_pushcfunction(L, _bind_prsint_c); lua_setfield(L,-2,"prsint_c");
	lua_pushcfunction(L, _bind_rdtext_c); lua_setfield(L,-2,"rdtext_c");
	lua_pushcfunction(L, _bind_reordc_c); lua_setfield(L,-2,"reordc_c");
	lua_pushcfunction(L, _bind_reordd_c); lua_setfield(L,-2,"reordd_c");
	lua_pushcfunction(L, _bind_reordi_c); lua_setfield(L,-2,"reordi_c");
	lua_pushcfunction(L, _bind_reordl_c); lua_setfield(L,-2,"reordl_c");
	lua_pushcfunction(L, _bind_repmc_c); lua_setfield(L,-2,"repmc_c");
	lua_pushcfunction(L, _bind_repmct_c); lua_setfield(L,-2,"repmct_c");
	lua_pushcfunction(L, _bind_repmd_c); lua_setfield(L,-2,"repmd_c");
	lua_pushcfunction(L, _bind_repmf_c); lua_setfield(L,-2,"repmf_c");
	lua_pushcfunction(L, _bind_repmi_c); lua_setfield(L,-2,"repmi_c");
	lua_pushcfunction(L, _bind_repmot_c); lua_setfield(L,-2,"repmot_c");
	lua_pushcfunction(L, _bind_reset_c); lua_setfield(L,-2,"reset_c");
	lua_pushcfunction(L, _bind_return_c); lua_setfield(L,-2,"return_c");
	lua_pushcfunction(L, _bind_rpd_c); lua_setfield(L,-2,"rpd_c");
	lua_pushcfunction(L, _bind_scdecd_c); lua_setfield(L,-2,"scdecd_c");
	lua_pushcfunction(L, _bind_sce2s_c); lua_setfield(L,-2,"sce2s_c");
	lua_pushcfunction(L, _bind_sce2c_c); lua_setfield(L,-2,"sce2c_c");
	lua_pushcfunction(L, _bind_sce2t_c); lua_setfield(L,-2,"sce2t_c");
	lua_pushcfunction(L, _bind_scencd_c); lua_setfield(L,-2,"scencd_c");
	lua_pushcfunction(L, _bind_scfmt_c); lua_setfield(L,-2,"scfmt_c");
	lua_pushcfunction(L, _bind_scpart_c); lua_setfield(L,-2,"scpart_c");
	lua_pushcfunction(L, _bind_scs2e_c); lua_setfield(L,-2,"scs2e_c");
	lua_pushcfunction(L, _bind_sct2e_c); lua_setfield(L,-2,"sct2e_c");
	lua_pushcfunction(L, _bind_sctiks_c); lua_setfield(L,-2,"sctiks_c");
	lua_pushcfunction(L, _bind_setmsg_c); lua_setfield(L,-2,"setmsg_c");
	lua_pushcfunction(L, _bind_shellc_c); lua_setfield(L,-2,"shellc_c");
	lua_pushcfunction(L, _bind_shelld_c); lua_setfield(L,-2,"shelld_c");
	lua_pushcfunction(L, _bind_shelli_c); lua_setfield(L,-2,"shelli_c");
	lua_pushcfunction(L, _bind_sigerr_c); lua_setfield(L,-2,"sigerr_c");
	lua_pushcfunction(L, _bind_spd_c); lua_setfield(L,-2,"spd_c");
	lua_pushcfunction(L, _bind_sphcyl_c); lua_setfield(L,-2,"sphcyl_c");
	lua_pushcfunction(L, _bind_sphlat_c); lua_setfield(L,-2,"sphlat_c");
	lua_pushcfunction(L, _bind_spk14b_c); lua_setfield(L,-2,"spk14b_c");
	lua_pushcfunction(L, _bind_spk14e_c); lua_setfield(L,-2,"spk14e_c");
	lua_pushcfunction(L, _bind_spkcls_c); lua_setfield(L,-2,"spkcls_c");
	lua_pushcfunction(L, _bind_spklef_c); lua_setfield(L,-2,"spklef_c");
	lua_pushcfunction(L, _bind_spkopa_c); lua_setfield(L,-2,"spkopa_c");
	lua_pushcfunction(L, _bind_spkopn_c); lua_setfield(L,-2,"spkopn_c");
	lua_pushcfunction(L, _bind_spkuef_c); lua_setfield(L,-2,"spkuef_c");
	lua_pushcfunction(L, _bind_stpool_c); lua_setfield(L,-2,"stpool_c");
	lua_pushcfunction(L, _bind_str2et_c); lua_setfield(L,-2,"str2et_c");
	lua_pushcfunction(L, _bind_swpool_c); lua_setfield(L,-2,"swpool_c");
	lua_pushcfunction(L, _bind_szpool_c); lua_setfield(L,-2,"szpool_c");
	lua_pushcfunction(L, _bind_timdef_c); lua_setfield(L,-2,"timdef_c");
	lua_pushcfunction(L, _bind_timout_c); lua_setfield(L,-2,"timout_c");
	lua_pushcfunction(L, _bind_tkvrsn_c); lua_setfield(L,-2,"tkvrsn_c");
	lua_pushcfunction(L, _bind_tparse_c); lua_setfield(L,-2,"tparse_c");
	lua_pushcfunction(L, _bind_tpictr_c); lua_setfield(L,-2,"tpictr_c");
	lua_pushcfunction(L, _bind_trcoff_c); lua_setfield(L,-2,"trcoff_c");
	lua_pushcfunction(L, _bind_tsetyr_c); lua_setfield(L,-2,"tsetyr_c");
	lua_pushcfunction(L, _bind_twopi_c); lua_setfield(L,-2,"twopi_c");
	lua_pushcfunction(L, _bind_tyear_c); lua_setfield(L,-2,"tyear_c");
	lua_pushcfunction(L, _bind_ucase_c); lua_setfield(L,-2,"ucase_c");
	lua_pushcfunction(L, _bind_unitim_c); lua_setfield(L,-2,"unitim_c");
	lua_pushcfunction(L, _bind_unload_c); lua_setfield(L,-2,"unload_c");
	lua_pushcfunction(L, _bind_unormg_c); lua_setfield(L,-2,"unormg_c");
	lua_pushcfunction(L, _bind_utc2et_c); lua_setfield(L,-2,"utc2et_c");
	lua_pushcfunction(L, _bind_vaddg_c); lua_setfield(L,-2,"vaddg_c");
	lua_pushcfunction(L, _bind_vdistg_c); lua_setfield(L,-2,"vdistg_c");
	lua_pushcfunction(L, _bind_vdotg_c); lua_setfield(L,-2,"vdotg_c");
	lua_pushcfunction(L, _bind_vequg_c); lua_setfield(L,-2,"vequg_c");
	lua_pushcfunction(L, _bind_vhatg_c); lua_setfield(L,-2,"vhatg_c");
	lua_pushcfunction(L, _bind_vlcomg_c); lua_setfield(L,-2,"vlcomg_c");
	lua_pushcfunction(L, _bind_vminug_c); lua_setfield(L,-2,"vminug_c");
	lua_pushcfunction(L, _bind_vnormg_c); lua_setfield(L,-2,"vnormg_c");
	lua_pushcfunction(L, _bind_vrelg_c); lua_setfield(L,-2,"vrelg_c");
	lua_pushcfunction(L, _bind_vsclg_c); lua_setfield(L,-2,"vsclg_c");
	lua_pushcfunction(L, _bind_vsubg_c); lua_setfield(L,-2,"vsubg_c");
	lua_pushcfunction(L, _bind_vsepg_c); lua_setfield(L,-2,"vsepg_c");
	lua_pushcfunction(L, _bind_vtmvg_c); lua_setfield(L,-2,"vtmvg_c");
	lua_pushcfunction(L, _bind_vzerog_c); lua_setfield(L,-2,"vzerog_c");
	lua_pushcfunction(L, _bind_xposeg_c); lua_setfield(L,-2,"xposeg_c");
	lua_pushcfunction(L, _bind_zzgfgeth_c); lua_setfield(L,-2,"zzgfgeth_c");
	lua_pushcfunction(L, _bind_zzgfsavh_c); lua_setfield(L,-2,"zzgfsavh_c");
}

#ifdef __cplusplus
}
#endif

