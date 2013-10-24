#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <mgl2/base.h>
#include <mgl2/parser.h>
#include <mgl2/canvas.h>
#include <mgl2/opengl.h>
#include <mgl2/canvas_wnd.h>
#include <mgl2/type.h>
#include <mgl2/data.h>
#include <mgl2/datac.h>
#include <mgl2/wnd.h>
#include <mgl2/mgl.h>
#include <mgl2/font.h>
#include <mgl2/eval.h>
#include <mgl2/evalc.h>
#include <mgl2/define.h>

// Class: mglActivePos
template<>
class LunaTraits< mglActivePos > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglActivePos* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglActivePos* obj);
	typedef mglActivePos parent_t;
	typedef mglActivePos base_t;
	static luna_ConverterType converters[];
};

// Class: mglArg
template<>
class LunaTraits< mglArg > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglArg* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglArg* obj);
	typedef mglArg parent_t;
	typedef mglArg base_t;
	static luna_ConverterType converters[];
};

// Class: mglAxis
template<>
class LunaTraits< mglAxis > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglAxis* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglAxis* obj);
	typedef mglAxis parent_t;
	typedef mglAxis base_t;
	static luna_ConverterType converters[];
};

// Class: mglBase
template<>
class LunaTraits< mglBase > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglBase* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglBase* obj);
	typedef mglBase parent_t;
	typedef mglBase base_t;
	static luna_ConverterType converters[];
};

// Class: mglCanvas
template<>
class LunaTraits< mglCanvas > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglCanvas* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglCanvas* obj);
	typedef mglBase parent_t;
	typedef mglCanvas base_t;
	static luna_ConverterType converters[];
};

// Class: mglCanvasGL
template<>
class LunaTraits< mglCanvasGL > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglCanvasGL* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglCanvasGL* obj);
	typedef mglBase parent_t;
	typedef mglCanvasGL base_t;
	static luna_ConverterType converters[];
};

// Class: mglCanvasWnd
template<>
class LunaTraits< mglCanvasWnd > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglCanvasWnd* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglCanvasWnd* obj);
	typedef mglBase parent_t;
	typedef mglCanvasWnd base_t;
	static luna_ConverterType converters[];
};

// Class: mglColor
template<>
class LunaTraits< mglColor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglColor* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglColor* obj);
	typedef mglColor parent_t;
	typedef mglColor base_t;
	static luna_ConverterType converters[];
};

// Class: mglColorID
template<>
class LunaTraits< mglColorID > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglColorID* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglColorID* obj);
	typedef mglColorID parent_t;
	typedef mglColorID base_t;
	static luna_ConverterType converters[];
};

// Class: mglCommand
template<>
class LunaTraits< mglCommand > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglCommand* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglCommand* obj);
	typedef mglCommand parent_t;
	typedef mglCommand base_t;
	static luna_ConverterType converters[];
};

// Class: mglDataA
template<>
class LunaTraits< mglDataA > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglDataA* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglDataA* obj);
	typedef mglDataA parent_t;
	typedef mglDataA base_t;
	static luna_ConverterType converters[];
};

// Class: mglData
template<>
class LunaTraits< mglData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglData* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglData* obj);
	typedef mglDataA parent_t;
	typedef mglData base_t;
	static luna_ConverterType converters[];
};

// Class: mglDataC
template<>
class LunaTraits< mglDataC > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglDataC* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglDataC* obj);
	typedef mglDataA parent_t;
	typedef mglDataC base_t;
	static luna_ConverterType converters[];
};

// Class: mglDraw
template<>
class LunaTraits< mglDraw > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglDraw* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglDraw* obj);
	typedef mglDraw parent_t;
	typedef mglDraw base_t;
	static luna_ConverterType converters[];
};

// Class: mglDrawDat
template<>
class LunaTraits< mglDrawDat > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglDrawDat* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglDrawDat* obj);
	typedef mglDrawDat parent_t;
	typedef mglDrawDat base_t;
	static luna_ConverterType converters[];
};

// Class: mglDrawReg
template<>
class LunaTraits< mglDrawReg > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglDrawReg* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglDrawReg* obj);
	typedef mglDrawReg parent_t;
	typedef mglDrawReg base_t;
	static luna_ConverterType converters[];
};

// Class: mglExpr
template<>
class LunaTraits< mglExpr > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglExpr* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglExpr* obj);
	typedef mglExpr parent_t;
	typedef mglExpr base_t;
	static luna_ConverterType converters[];
};

// Class: mglFnStack
template<>
class LunaTraits< mglFnStack > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglFnStack* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglFnStack* obj);
	typedef mglFnStack parent_t;
	typedef mglFnStack base_t;
	static luna_ConverterType converters[];
};

// Class: mglFont
template<>
class LunaTraits< mglFont > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglFont* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglFont* obj);
	typedef mglFont parent_t;
	typedef mglFont base_t;
	static luna_ConverterType converters[];
};

// Class: mglFormula
template<>
class LunaTraits< mglFormula > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglFormula* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglFormula* obj);
	typedef mglFormula parent_t;
	typedef mglFormula base_t;
	static luna_ConverterType converters[];
};

// Class: mglFormulaC
template<>
class LunaTraits< mglFormulaC > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglFormulaC* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglFormulaC* obj);
	typedef mglFormulaC parent_t;
	typedef mglFormulaC base_t;
	static luna_ConverterType converters[];
};

// Class: mglFunc
template<>
class LunaTraits< mglFunc > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglFunc* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglFunc* obj);
	typedef mglFunc parent_t;
	typedef mglFunc base_t;
	static luna_ConverterType converters[];
};

// Class: mglGlyph
template<>
class LunaTraits< mglGlyph > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglGlyph* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglGlyph* obj);
	typedef mglGlyph parent_t;
	typedef mglGlyph base_t;
	static luna_ConverterType converters[];
};

// Class: mglGraph
template<>
class LunaTraits< mglGraph > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglGraph* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglGraph* obj);
	typedef mglGraph parent_t;
	typedef mglGraph base_t;
	static luna_ConverterType converters[];
};

// Class: mglGroup
template<>
class LunaTraits< mglGroup > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglGroup* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglGroup* obj);
	typedef mglGroup parent_t;
	typedef mglGroup base_t;
	static luna_ConverterType converters[];
};

// Class: mglLight
template<>
class LunaTraits< mglLight > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglLight* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglLight* obj);
	typedef mglLight parent_t;
	typedef mglLight base_t;
	static luna_ConverterType converters[];
};

// Class: mglMatrix
template<>
class LunaTraits< mglMatrix > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglMatrix* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglMatrix* obj);
	typedef mglMatrix parent_t;
	typedef mglMatrix base_t;
	static luna_ConverterType converters[];
};

// Class: mglNum
template<>
class LunaTraits< mglNum > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglNum* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglNum* obj);
	typedef mglNum parent_t;
	typedef mglNum base_t;
	static luna_ConverterType converters[];
};

// Class: mglParse
template<>
class LunaTraits< mglParse > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglParse* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglParse* obj);
	typedef mglParse parent_t;
	typedef mglParse base_t;
	static luna_ConverterType converters[];
};

// Class: mglParser
template<>
class LunaTraits< mglParser > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglParser* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglParser* obj);
	typedef mglParser parent_t;
	typedef mglParser base_t;
	static luna_ConverterType converters[];
};

// Class: mglPnt
template<>
class LunaTraits< mglPnt > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglPnt* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglPnt* obj);
	typedef mglPnt parent_t;
	typedef mglPnt base_t;
	static luna_ConverterType converters[];
};

// Class: mglPoint
template<>
class LunaTraits< mglPoint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglPoint* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglPoint* obj);
	typedef mglPoint parent_t;
	typedef mglPoint base_t;
	static luna_ConverterType converters[];
};

// Class: mglPrim
template<>
class LunaTraits< mglPrim > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglPrim* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglPrim* obj);
	typedef mglPrim parent_t;
	typedef mglPrim base_t;
	static luna_ConverterType converters[];
};

// Class: mglTeXsymb
template<>
class LunaTraits< mglTeXsymb > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglTeXsymb* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglTeXsymb* obj);
	typedef mglTeXsymb parent_t;
	typedef mglTeXsymb base_t;
	static luna_ConverterType converters[];
};

// Class: mglText
template<>
class LunaTraits< mglText > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglText* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglText* obj);
	typedef mglText parent_t;
	typedef mglText base_t;
	static luna_ConverterType converters[];
};

// Class: mglTexture
template<>
class LunaTraits< mglTexture > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglTexture* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglTexture* obj);
	typedef mglTexture parent_t;
	typedef mglTexture base_t;
	static luna_ConverterType converters[];
};

// Class: mglThreadC
template<>
class LunaTraits< mglThreadC > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglThreadC* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglThreadC* obj);
	typedef mglThreadC parent_t;
	typedef mglThreadC base_t;
	static luna_ConverterType converters[];
};

// Class: mglThreadD
template<>
class LunaTraits< mglThreadD > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglThreadD* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglThreadD* obj);
	typedef mglThreadD parent_t;
	typedef mglThreadD base_t;
	static luna_ConverterType converters[];
};

// Class: mglThreadG
template<>
class LunaTraits< mglThreadG > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglThreadG* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglThreadG* obj);
	typedef mglThreadG parent_t;
	typedef mglThreadG base_t;
	static luna_ConverterType converters[];
};

// Class: mglThreadV
template<>
class LunaTraits< mglThreadV > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglThreadV* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglThreadV* obj);
	typedef mglThreadV parent_t;
	typedef mglThreadV base_t;
	static luna_ConverterType converters[];
};

// Class: mglVar
template<>
class LunaTraits< mglVar > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglVar* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglVar* obj);
	typedef mglDataA parent_t;
	typedef mglVar base_t;
	static luna_ConverterType converters[];
};

// Class: mglWnd
template<>
class LunaTraits< mglWnd > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mglWnd* _bind_ctor(lua_State *L);
	static void _bind_dtor(mglWnd* obj);
	typedef mglGraph parent_t;
	typedef mglWnd base_t;
	static luna_ConverterType converters[];
};

// Class: std::complex< double >
template<>
class LunaTraits< std::complex< double > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::complex< double >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::complex< double >* obj);
	typedef std::complex< double > parent_t;
	typedef std::complex< double > base_t;
	static luna_ConverterType converters[];
};


// Mapped type: std::vector< mglText >
template<>
class LunaTraits< std::vector< mglText > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< mglText >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< mglText >* obj);
	typedef std::vector< mglText > parent_t;
	typedef std::vector< mglText > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: std::vector< mglGroup >
template<>
class LunaTraits< std::vector< mglGroup > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< mglGroup >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< mglGroup >* obj);
	typedef std::vector< mglGroup > parent_t;
	typedef std::vector< mglGroup > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: std::vector< mglActivePos >
template<>
class LunaTraits< std::vector< mglActivePos > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< mglActivePos >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< mglActivePos >* obj);
	typedef std::vector< mglActivePos > parent_t;
	typedef std::vector< mglActivePos > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: std::vector< dual >
template<>
class LunaTraits< std::vector< dual > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< dual >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< dual >* obj);
	typedef std::vector< dual > parent_t;
	typedef std::vector< dual > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: std::vector< mglPnt >
template<>
class LunaTraits< std::vector< mglPnt > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< mglPnt >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< mglPnt >* obj);
	typedef std::vector< mglPnt > parent_t;
	typedef std::vector< mglPnt > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: std::vector< mglPrim >
template<>
class LunaTraits< std::vector< mglPrim > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< mglPrim >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< mglPrim >* obj);
	typedef std::vector< mglPrim > parent_t;
	typedef std::vector< mglPrim > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: std::vector< mglGlyph >
template<>
class LunaTraits< std::vector< mglGlyph > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< mglGlyph >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< mglGlyph >* obj);
	typedef std::vector< mglGlyph > parent_t;
	typedef std::vector< mglGlyph > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: std::vector< mglTexture >
template<>
class LunaTraits< std::vector< mglTexture > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< mglTexture >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< mglTexture >* obj);
	typedef std::vector< mglTexture > parent_t;
	typedef std::vector< mglTexture > base_t;
	static luna_ConverterType converters[];
};


// Referenced external: void
template<>
class LunaTraits< void > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static void* _bind_ctor(lua_State *L);
	static void _bind_dtor(void* obj);
	typedef void parent_t;
	typedef void base_t;
	static luna_ConverterType converters[];
};

// Referenced external: std::vector< int >
template<>
class LunaTraits< std::vector< int > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< int >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< int >* obj);
	typedef std::vector< int > parent_t;
	typedef std::vector< int > base_t;
	static luna_ConverterType converters[];
};

// Referenced external: std::vector< float >
template<>
class LunaTraits< std::vector< float > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< float >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< float >* obj);
	typedef std::vector< float > parent_t;
	typedef std::vector< float > base_t;
	static luna_ConverterType converters[];
};

// Referenced external: std::vector< double >
template<>
class LunaTraits< std::vector< double > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< double >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< double >* obj);
	typedef std::vector< double > parent_t;
	typedef std::vector< double > base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::Referenced
template<>
class LunaTraits< osg::Referenced > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Referenced* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Referenced* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Referenced base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::Image
template<>
class LunaTraits< osg::Image > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Image* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Image* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Image base_t;
	static luna_ConverterType converters[];
};

// Referenced external: uintptr_t
template<>
class LunaTraits< uintptr_t > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static uintptr_t* _bind_ctor(lua_State *L);
	static void _bind_dtor(uintptr_t* obj);
	typedef uintptr_t parent_t;
	typedef uintptr_t base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaType< 2134638 > {
public:
	typedef mglActivePos type;
	
};

template<>
class LunaType< 18983491 > {
public:
	typedef mglArg type;
	
};

template<>
class LunaType< 88494129 > {
public:
	typedef mglAxis type;
	
};

template<>
class LunaType< 88502113 > {
public:
	typedef mglBase type;
	
};

template<>
class LunaType< 44899579 > {
public:
	typedef mglColor type;
	
};

template<>
class LunaType< 48493843 > {
public:
	typedef mglColorID type;
	
};

template<>
class LunaType< 49342624 > {
public:
	typedef mglCommand type;
	
};

template<>
class LunaType< 45413231 > {
public:
	typedef mglDataA type;
	
};

template<>
class LunaType< 88577492 > {
public:
	typedef mglDraw type;
	
};

template<>
class LunaType< 11921091 > {
public:
	typedef mglDrawDat type;
	
};

template<>
class LunaType< 11934656 > {
public:
	typedef mglDrawReg type;
	
};

template<>
class LunaType< 88613509 > {
public:
	typedef mglExpr type;
	
};

template<>
class LunaType< 59420944 > {
public:
	typedef mglFnStack type;
	
};

template<>
class LunaType< 88634591 > {
public:
	typedef mglFont type;
	
};

template<>
class LunaType< 16490188 > {
public:
	typedef mglFormula type;
	
};

template<>
class LunaType< 11195840 > {
public:
	typedef mglFormulaC type;
	
};

template<>
class LunaType< 88640340 > {
public:
	typedef mglFunc type;
	
};

template<>
class LunaType< 48516804 > {
public:
	typedef mglGlyph type;
	
};

template<>
class LunaType< 48672486 > {
public:
	typedef mglGraph type;
	
};

template<>
class LunaType< 48686103 > {
public:
	typedef mglGroup type;
	
};

template<>
class LunaType< 53027502 > {
public:
	typedef mglLight type;
	
};

template<>
class LunaType< 65490073 > {
public:
	typedef mglMatrix type;
	
};

template<>
class LunaType< 18996083 > {
public:
	typedef mglNum type;
	
};

template<>
class LunaType< 56494155 > {
public:
	typedef mglParse type;
	
};

template<>
class LunaType< 51318766 > {
public:
	typedef mglParser type;
	
};

template<>
class LunaType< 18997795 > {
public:
	typedef mglPnt type;
	
};

template<>
class LunaType< 56902440 > {
public:
	typedef mglPoint type;
	
};

template<>
class LunaType< 88935222 > {
public:
	typedef mglPrim type;
	
};

template<>
class LunaType< 31420202 > {
public:
	typedef mglTeXsymb type;
	
};

template<>
class LunaType< 89042365 > {
public:
	typedef mglText type;
	
};

template<>
class LunaType< 60998979 > {
public:
	typedef mglTexture type;
	
};

template<>
class LunaType< 40878743 > {
public:
	typedef mglThreadC type;
	
};

template<>
class LunaType< 40878744 > {
public:
	typedef mglThreadD type;
	
};

template<>
class LunaType< 40878747 > {
public:
	typedef mglThreadG type;
	
};

template<>
class LunaType< 40878762 > {
public:
	typedef mglThreadV type;
	
};

template<>
class LunaType< 3094652 > {
public:
	typedef dual type;
	
};

template<>
class LunaType< 37931827 > {
public:
	typedef std::complex< double > type;
	
};

template<>
class LunaType< 64344026 > {
public:
	typedef std::vector< mglText > type;
	
};

template<>
class LunaType< 21092053 > {
public:
	typedef std::vector< mglGroup > type;
	
};

template<>
class LunaType< 82850976 > {
public:
	typedef std::vector< mglActivePos > type;
	
};

template<>
class LunaType< 24103996 > {
public:
	typedef std::vector< dual > type;
	
};

template<>
class LunaType< 43804529 > {
public:
	typedef std::vector< mglPnt > type;
	
};

template<>
class LunaType< 61379625 > {
public:
	typedef std::vector< mglPrim > type;
	
};

template<>
class LunaType< 58395729 > {
public:
	typedef std::vector< mglGlyph > type;
	
};

template<>
class LunaType< 52583290 > {
public:
	typedef std::vector< mglTexture > type;
	
};

template<>
class LunaType< 3625364 > {
public:
	typedef void type;
	
};

template<>
class LunaType< 92299338 > {
public:
	typedef std::vector< int > type;
	
};

template<>
class LunaType< 77249888 > {
public:
	typedef std::vector< float > type;
	
};

template<>
class LunaType< 4564820 > {
public:
	typedef std::vector< double > type;
	
};

template<>
class LunaType< 50169651 > {
public:
	typedef osg::Referenced type;
	
};

template<>
class LunaType< 80535448 > {
public:
	typedef osg::Image type;
	
};

template<>
class LunaType< 23992870 > {
public:
	typedef uintptr_t type;
	
};


#endif

