#ifndef _LUNA_CASTERS_H_
#define _LUNA_CASTERS_H_

#include <plug_common.h>

template <typename dstType>
struct luna_caster<mglActivePos,dstType> {
	static inline dstType* cast(mglActivePos* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<mglArg,dstType> {
	static inline dstType* cast(mglArg* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<mglAxis,dstType> {
	static inline dstType* cast(mglAxis* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<mglColor,dstType> {
	static inline dstType* cast(mglColor* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<mglColorID,dstType> {
	static inline dstType* cast(mglColorID* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<mglCommand,dstType> {
	static inline dstType* cast(mglCommand* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<mglDrawDat,dstType> {
	static inline dstType* cast(mglDrawDat* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<mglDrawReg,dstType> {
	static inline dstType* cast(mglDrawReg* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<mglExpr,dstType> {
	static inline dstType* cast(mglExpr* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<mglFnStack,dstType> {
	static inline dstType* cast(mglFnStack* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<mglFont,dstType> {
	static inline dstType* cast(mglFont* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<mglFormula,dstType> {
	static inline dstType* cast(mglFormula* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<mglFunc,dstType> {
	static inline dstType* cast(mglFunc* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<mglGlyph,dstType> {
	static inline dstType* cast(mglGlyph* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<mglGroup,dstType> {
	static inline dstType* cast(mglGroup* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<mglLight,dstType> {
	static inline dstType* cast(mglLight* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<mglMatrix,dstType> {
	static inline dstType* cast(mglMatrix* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<mglNum,dstType> {
	static inline dstType* cast(mglNum* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<mglParse,dstType> {
	static inline dstType* cast(mglParse* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<mglParser,dstType> {
	static inline dstType* cast(mglParser* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<mglPnt,dstType> {
	static inline dstType* cast(mglPnt* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<mglPoint,dstType> {
	static inline dstType* cast(mglPoint* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<mglPrim,dstType> {
	static inline dstType* cast(mglPrim* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<mglTeXsymb,dstType> {
	static inline dstType* cast(mglTeXsymb* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<mglText,dstType> {
	static inline dstType* cast(mglText* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<mglTexture,dstType> {
	static inline dstType* cast(mglTexture* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<mglThreadC,dstType> {
	static inline dstType* cast(mglThreadC* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<mglThreadD,dstType> {
	static inline dstType* cast(mglThreadD* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<mglThreadG,dstType> {
	static inline dstType* cast(mglThreadG* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<mglThreadV,dstType> {
	static inline dstType* cast(mglThreadV* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::complex< double >,dstType> {
	static inline dstType* cast(std::complex< double >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};


#endif

