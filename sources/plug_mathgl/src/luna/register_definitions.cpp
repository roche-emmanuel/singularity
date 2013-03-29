#include <plug_common.h>

#include <mgl2/config.h>
#include <mgl2/define.h>
#include <mgl2/eval.h>
#include <mgl2/font.h>

#ifdef __cplusplus
extern "C" {
#endif

void register_defines(lua_State* L) {
	lua_pushnumber(L,MGL_USE_DOUBLE); lua_setfield(L,-2,"MGL_USE_DOUBLE");
	lua_pushnumber(L,MGL_NO_DATA_A); lua_setfield(L,-2,"MGL_NO_DATA_A");
	lua_pushnumber(L,MGL_HAVE_GSL); lua_setfield(L,-2,"MGL_HAVE_GSL");
	lua_pushnumber(L,MGL_HAVE_PTHREAD); lua_setfield(L,-2,"MGL_HAVE_PTHREAD");
	lua_pushnumber(L,MGL_HAVE_HDF4); lua_setfield(L,-2,"MGL_HAVE_HDF4");
	lua_pushnumber(L,MGL_HAVE_HDF5); lua_setfield(L,-2,"MGL_HAVE_HDF5");
	lua_pushnumber(L,MGL_HAVE_JPEG); lua_setfield(L,-2,"MGL_HAVE_JPEG");
	lua_pushnumber(L,MGL_HAVE_PNG); lua_setfield(L,-2,"MGL_HAVE_PNG");
	lua_pushnumber(L,MGL_HAVE_ZLIB); lua_setfield(L,-2,"MGL_HAVE_ZLIB");
	lua_pushnumber(L,MGL_HAVE_PDF); lua_setfield(L,-2,"MGL_HAVE_PDF");
	lua_pushnumber(L,MGL_HAVE_GIF); lua_setfield(L,-2,"MGL_HAVE_GIF");
	lua_pushnumber(L,MGL_HAVE_OPENGL); lua_setfield(L,-2,"MGL_HAVE_OPENGL");
	lua_pushnumber(L,MGL_HAVE_MPI); lua_setfield(L,-2,"MGL_HAVE_MPI");
	lua_pushnumber(L,MGL_VER2); lua_setfield(L,-2,"MGL_VER2");
	lua_pushnumber(L,MGL_CMAP_COLOR); lua_setfield(L,-2,"MGL_CMAP_COLOR");
	lua_pushnumber(L,MGL_STACK_ENTRY); lua_setfield(L,-2,"MGL_STACK_ENTRY");
	lua_pushnumber(L,SMOOTH_NONE); lua_setfield(L,-2,"SMOOTH_NONE");
	lua_pushnumber(L,SMOOTH_LINE_3); lua_setfield(L,-2,"SMOOTH_LINE_3");
	lua_pushnumber(L,SMOOTH_LINE_5); lua_setfield(L,-2,"SMOOTH_LINE_5");
	lua_pushnumber(L,SMOOTH_QUAD_5); lua_setfield(L,-2,"SMOOTH_QUAD_5");
	lua_pushnumber(L,MGL_HIST_IN); lua_setfield(L,-2,"MGL_HIST_IN");
	lua_pushnumber(L,MGL_HIST_SUM); lua_setfield(L,-2,"MGL_HIST_SUM");
	lua_pushnumber(L,MGL_HIST_UP); lua_setfield(L,-2,"MGL_HIST_UP");
	lua_pushnumber(L,MGL_HIST_DOWN); lua_setfield(L,-2,"MGL_HIST_DOWN");
	lua_pushnumber(L,MGL_DRAW_WIRE); lua_setfield(L,-2,"MGL_DRAW_WIRE");
	lua_pushnumber(L,MGL_DRAW_FAST); lua_setfield(L,-2,"MGL_DRAW_FAST");
	lua_pushnumber(L,MGL_DRAW_NORM); lua_setfield(L,-2,"MGL_DRAW_NORM");
	lua_pushnumber(L,MGL_DRAW_LMEM); lua_setfield(L,-2,"MGL_DRAW_LMEM");
	lua_pushnumber(L,MGL_TRANSP_NORM); lua_setfield(L,-2,"MGL_TRANSP_NORM");
	lua_pushnumber(L,MGL_TRANSP_GLASS); lua_setfield(L,-2,"MGL_TRANSP_GLASS");
	lua_pushnumber(L,MGL_TRANSP_LAMP); lua_setfield(L,-2,"MGL_TRANSP_LAMP");
	lua_pushnumber(L,MGL_ENABLE_CUT); lua_setfield(L,-2,"MGL_ENABLE_CUT");
	lua_pushnumber(L,MGL_ENABLE_RTEXT); lua_setfield(L,-2,"MGL_ENABLE_RTEXT");
	lua_pushnumber(L,MGL_AUTO_FACTOR); lua_setfield(L,-2,"MGL_AUTO_FACTOR");
	lua_pushnumber(L,MGL_ENABLE_ALPHA); lua_setfield(L,-2,"MGL_ENABLE_ALPHA");
	lua_pushnumber(L,MGL_ENABLE_LIGHT); lua_setfield(L,-2,"MGL_ENABLE_LIGHT");
	lua_pushnumber(L,MGL_TICKS_ROTATE); lua_setfield(L,-2,"MGL_TICKS_ROTATE");
	lua_pushnumber(L,MGL_TICKS_SKIP); lua_setfield(L,-2,"MGL_TICKS_SKIP");
	lua_pushnumber(L,MGL_DISABLE_SCALE); lua_setfield(L,-2,"MGL_DISABLE_SCALE");
	lua_pushnumber(L,MGL_FINISHED); lua_setfield(L,-2,"MGL_FINISHED");
	lua_pushnumber(L,MGL_USE_GMTIME); lua_setfield(L,-2,"MGL_USE_GMTIME");
	lua_pushnumber(L,MGL_SHOW_POS); lua_setfield(L,-2,"MGL_SHOW_POS");
	lua_pushnumber(L,MGL_CLF_ON_UPD); lua_setfield(L,-2,"MGL_CLF_ON_UPD");
	lua_pushnumber(L,MGL_NOSUBTICKS); lua_setfield(L,-2,"MGL_NOSUBTICKS");
	lua_pushnumber(L,MGL_DIFFUSIVE); lua_setfield(L,-2,"MGL_DIFFUSIVE");
	lua_pushnumber(L,MGL_VECT_FRAME); lua_setfield(L,-2,"MGL_VECT_FRAME");
	lua_pushnumber(L,MGL_REDUCEACC); lua_setfield(L,-2,"MGL_REDUCEACC");
	lua_pushnumber(L,MGL_PREFERVC); lua_setfield(L,-2,"MGL_PREFERVC");
	lua_pushnumber(L,MGL_ONESIDED); lua_setfield(L,-2,"MGL_ONESIDED");
	lua_pushnumber(L,MGL_ERR_LOG); lua_setfield(L,-2,"MGL_ERR_LOG");
	lua_pushnumber(L,MGL_ERR_ARC); lua_setfield(L,-2,"MGL_ERR_ARC");
	lua_pushnumber(L,MGL_ERR_SQRT); lua_setfield(L,-2,"MGL_ERR_SQRT");
	lua_pushnumber(L,MGL_FONT_BOLD); lua_setfield(L,-2,"MGL_FONT_BOLD");
	lua_pushnumber(L,MGL_FONT_ITAL); lua_setfield(L,-2,"MGL_FONT_ITAL");
	lua_pushnumber(L,MGL_FONT_BOLD_ITAL); lua_setfield(L,-2,"MGL_FONT_BOLD_ITAL");
	lua_pushnumber(L,MGL_FONT_WIRE); lua_setfield(L,-2,"MGL_FONT_WIRE");
	lua_pushnumber(L,MGL_FONT_OLINE); lua_setfield(L,-2,"MGL_FONT_OLINE");
	lua_pushnumber(L,MGL_FONT_ULINE); lua_setfield(L,-2,"MGL_FONT_ULINE");
	lua_pushnumber(L,MGL_FONT_ZEROW); lua_setfield(L,-2,"MGL_FONT_ZEROW");
	lua_pushnumber(L,MGL_FONT_UPPER); lua_setfield(L,-2,"MGL_FONT_UPPER");
	lua_pushnumber(L,MGL_FONT_LOWER); lua_setfield(L,-2,"MGL_FONT_LOWER");
	lua_pushnumber(L,MGL_FONT_ROMAN); lua_setfield(L,-2,"MGL_FONT_ROMAN");
	lua_pushnumber(L,MGL_FONT_MASK); lua_setfield(L,-2,"MGL_FONT_MASK");
	lua_pushnumber(L,MGL_COLOR_MASK); lua_setfield(L,-2,"MGL_COLOR_MASK");
	lua_pushnumber(L,MGL_FONT_STYLE); lua_setfield(L,-2,"MGL_FONT_STYLE");
}

#ifdef __cplusplus
}
#endif

