#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void register_defines(lua_State* L);
extern void register_enums(lua_State* L);
extern void register_global_functions(lua_State* L);

	
	
int PLUG_EXPORT luaopen_mathgl(lua_State* L) {
	luna_open(L);

	luna_pushModule(L,"mathgl");
	Luna< mglActivePos >::Register(L);
	Luna< mglArg >::Register(L);
	Luna< mglAxis >::Register(L);
	Luna< mglBase >::Register(L);
	Luna< mglCanvas >::Register(L);
	Luna< mglCanvasGL >::Register(L);
	Luna< mglCanvasWnd >::Register(L);
	Luna< mglColor >::Register(L);
	Luna< mglColorID >::Register(L);
	Luna< mglCommand >::Register(L);
	Luna< mglDataA >::Register(L);
	Luna< mglData >::Register(L);
	Luna< mglDataC >::Register(L);
	Luna< mglDraw >::Register(L);
	Luna< mglDrawDat >::Register(L);
	Luna< mglDrawReg >::Register(L);
	Luna< mglExpr >::Register(L);
	Luna< mglFnStack >::Register(L);
	Luna< mglFont >::Register(L);
	Luna< mglFormula >::Register(L);
	Luna< mglFormulaC >::Register(L);
	Luna< mglFunc >::Register(L);
	Luna< mglGlyph >::Register(L);
	Luna< mglGraph >::Register(L);
	Luna< mglGroup >::Register(L);
	Luna< mglLight >::Register(L);
	Luna< mglMatrix >::Register(L);
	Luna< mglNum >::Register(L);
	Luna< mglParse >::Register(L);
	Luna< mglParser >::Register(L);
	Luna< mglPnt >::Register(L);
	Luna< mglPoint >::Register(L);
	Luna< mglPrim >::Register(L);
	Luna< mglTeXsymb >::Register(L);
	Luna< mglText >::Register(L);
	Luna< mglTexture >::Register(L);
	Luna< mglThreadC >::Register(L);
	Luna< mglThreadD >::Register(L);
	Luna< mglThreadG >::Register(L);
	Luna< mglThreadV >::Register(L);
	Luna< mglVar >::Register(L);
	Luna< mglWnd >::Register(L);
	Luna< std::complex< double > >::Register(L);
	Luna< std::vector< mglText > >::Register(L);
	Luna< std::vector< mglGroup > >::Register(L);
	Luna< std::vector< mglActivePos > >::Register(L);
	Luna< std::vector< dual > >::Register(L);
	Luna< std::vector< mglPnt > >::Register(L);
	Luna< std::vector< mglPrim > >::Register(L);
	Luna< std::vector< mglGlyph > >::Register(L);
	Luna< std::vector< mglTexture > >::Register(L);
	luna_popModule(L);

	luna_pushModule(L,"mathgl");

	register_defines(L);

	register_enums(L);

	luna_popModule(L);

	register_global_functions(L);

	luna_copyParents(L,"mathgl");

	luna_pushModule(L,"mathgl");
	return 1;
}

#ifdef __cplusplus
}
#endif

