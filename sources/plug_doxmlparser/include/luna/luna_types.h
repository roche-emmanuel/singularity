#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

template<>
class LunaTraits< IChildNode > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IChildNode* _bind_ctor(lua_State *L);
    static void _bind_dtor(IChildNode* obj);
    typedef IChildNode base_t;
};

template<>
class LunaTraits< IChildNodeIterator > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IChildNodeIterator* _bind_ctor(lua_State *L);
    static void _bind_dtor(IChildNodeIterator* obj);
    typedef IChildNodeIterator base_t;
};

template<>
class LunaTraits< ICompound > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static ICompound* _bind_ctor(lua_State *L);
    static void _bind_dtor(ICompound* obj);
    typedef ICompound base_t;
};

template<>
class LunaTraits< IClass > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IClass* _bind_ctor(lua_State *L);
    static void _bind_dtor(IClass* obj);
    typedef IClass base_t;
};

template<>
class LunaTraits< ICompoundIterator > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static ICompoundIterator* _bind_ctor(lua_State *L);
    static void _bind_dtor(ICompoundIterator* obj);
    typedef ICompoundIterator base_t;
};

template<>
class LunaTraits< IMember > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IMember* _bind_ctor(lua_State *L);
    static void _bind_dtor(IMember* obj);
    typedef IMember base_t;
};

template<>
class LunaTraits< IDCOP > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDCOP* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDCOP* obj);
    typedef IDCOP base_t;
};

template<>
class LunaTraits< IDefine > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDefine* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDefine* obj);
    typedef IDefine base_t;
};

template<>
class LunaTraits< IDoc > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDoc* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDoc* obj);
    typedef IDoc base_t;
};

template<>
class LunaTraits< IDocAnchor > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocAnchor* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocAnchor* obj);
    typedef IDocAnchor base_t;
};

template<>
class LunaTraits< IDocCodeLine > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocCodeLine* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocCodeLine* obj);
    typedef IDocCodeLine base_t;
};

template<>
class LunaTraits< IDocCopy > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocCopy* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocCopy* obj);
    typedef IDocCopy base_t;
};

template<>
class LunaTraits< IDocDotFile > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocDotFile* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocDotFile* obj);
    typedef IDocDotFile base_t;
};

template<>
class LunaTraits< IDocEMail > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocEMail* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocEMail* obj);
    typedef IDocEMail base_t;
};

template<>
class LunaTraits< IDocEntry > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocEntry* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocEntry* obj);
    typedef IDocEntry base_t;
};

template<>
class LunaTraits< IDocFormula > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocFormula* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocFormula* obj);
    typedef IDocFormula base_t;
};

template<>
class LunaTraits< IDocHighlight > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocHighlight* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocHighlight* obj);
    typedef IDocHighlight base_t;
};

template<>
class LunaTraits< IDocHRuler > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocHRuler* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocHRuler* obj);
    typedef IDocHRuler base_t;
};

template<>
class LunaTraits< IDocImage > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocImage* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocImage* obj);
    typedef IDocImage base_t;
};

template<>
class LunaTraits< IDocIndexEntry > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocIndexEntry* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocIndexEntry* obj);
    typedef IDocIndexEntry base_t;
};

template<>
class LunaTraits< IDocInternal > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocInternal* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocInternal* obj);
    typedef IDocInternal base_t;
};

template<>
class LunaTraits< IDocItemizedList > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocItemizedList* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocItemizedList* obj);
    typedef IDocItemizedList base_t;
};

template<>
class LunaTraits< IDocIterator > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocIterator* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocIterator* obj);
    typedef IDocIterator base_t;
};

template<>
class LunaTraits< IDocLineBreak > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocLineBreak* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocLineBreak* obj);
    typedef IDocLineBreak base_t;
};

template<>
class LunaTraits< IDocLink > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocLink* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocLink* obj);
    typedef IDocLink base_t;
};

template<>
class LunaTraits< IDocListItem > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocListItem* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocListItem* obj);
    typedef IDocListItem base_t;
};

template<>
class LunaTraits< IDocMarkup > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocMarkup* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocMarkup* obj);
    typedef IDocMarkup base_t;
};

template<>
class LunaTraits< IDocMarkupModifier > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocMarkupModifier* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocMarkupModifier* obj);
    typedef IDocMarkupModifier base_t;
};

template<>
class LunaTraits< IDocOrderedList > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocOrderedList* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocOrderedList* obj);
    typedef IDocOrderedList base_t;
};

template<>
class LunaTraits< IDocPara > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocPara* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocPara* obj);
    typedef IDocPara base_t;
};

template<>
class LunaTraits< IDocParameter > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocParameter* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocParameter* obj);
    typedef IDocParameter base_t;
};

template<>
class LunaTraits< IDocParameterItem > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocParameterItem* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocParameterItem* obj);
    typedef IDocParameterItem base_t;
};

template<>
class LunaTraits< IDocParameterList > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocParameterList* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocParameterList* obj);
    typedef IDocParameterList base_t;
};

template<>
class LunaTraits< IDocProgramListing > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocProgramListing* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocProgramListing* obj);
    typedef IDocProgramListing base_t;
};

template<>
class LunaTraits< IDocRef > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocRef* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocRef* obj);
    typedef IDocRef base_t;
};

template<>
class LunaTraits< IDocRoot > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocRoot* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocRoot* obj);
    typedef IDocRoot base_t;
};

template<>
class LunaTraits< IDocRow > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocRow* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocRow* obj);
    typedef IDocRow base_t;
};

template<>
class LunaTraits< IDocSection > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocSection* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocSection* obj);
    typedef IDocSection base_t;
};

template<>
class LunaTraits< IDocSimpleSect > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocSimpleSect* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocSimpleSect* obj);
    typedef IDocSimpleSect base_t;
};

template<>
class LunaTraits< IDocSymbol > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocSymbol* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocSymbol* obj);
    typedef IDocSymbol base_t;
};

template<>
class LunaTraits< IDocTable > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocTable* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocTable* obj);
    typedef IDocTable base_t;
};

template<>
class LunaTraits< IDocText > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocText* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocText* obj);
    typedef IDocText base_t;
};

template<>
class LunaTraits< IDocTitle > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocTitle* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocTitle* obj);
    typedef IDocTitle base_t;
};

template<>
class LunaTraits< IDocTocItem > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocTocItem* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocTocItem* obj);
    typedef IDocTocItem base_t;
};

template<>
class LunaTraits< IDocTocList > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocTocList* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocTocList* obj);
    typedef IDocTocList base_t;
};

template<>
class LunaTraits< IDocULink > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocULink* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocULink* obj);
    typedef IDocULink base_t;
};

template<>
class LunaTraits< IDocVariableList > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocVariableList* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocVariableList* obj);
    typedef IDocVariableList base_t;
};

template<>
class LunaTraits< IDocVariableListEntry > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocVariableListEntry* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocVariableListEntry* obj);
    typedef IDocVariableListEntry base_t;
};

template<>
class LunaTraits< IDocVerbatim > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDocVerbatim* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDocVerbatim* obj);
    typedef IDocVerbatim base_t;
};

template<>
class LunaTraits< IDoxygen > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IDoxygen* _bind_ctor(lua_State *L);
    static void _bind_dtor(IDoxygen* obj);
    typedef IDoxygen base_t;
};

template<>
class LunaTraits< IEdgeLabel > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IEdgeLabel* _bind_ctor(lua_State *L);
    static void _bind_dtor(IEdgeLabel* obj);
    typedef IEdgeLabel base_t;
};

template<>
class LunaTraits< IEdgeLabelIterator > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IEdgeLabelIterator* _bind_ctor(lua_State *L);
    static void _bind_dtor(IEdgeLabelIterator* obj);
    typedef IEdgeLabelIterator base_t;
};

template<>
class LunaTraits< IEnum > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IEnum* _bind_ctor(lua_State *L);
    static void _bind_dtor(IEnum* obj);
    typedef IEnum base_t;
};

template<>
class LunaTraits< IEnumValue > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IEnumValue* _bind_ctor(lua_State *L);
    static void _bind_dtor(IEnumValue* obj);
    typedef IEnumValue base_t;
};

template<>
class LunaTraits< IException > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IException* _bind_ctor(lua_State *L);
    static void _bind_dtor(IException* obj);
    typedef IException base_t;
};

template<>
class LunaTraits< IFile > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IFile* _bind_ctor(lua_State *L);
    static void _bind_dtor(IFile* obj);
    typedef IFile base_t;
};

template<>
class LunaTraits< IFriend > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IFriend* _bind_ctor(lua_State *L);
    static void _bind_dtor(IFriend* obj);
    typedef IFriend base_t;
};

template<>
class LunaTraits< IFunction > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IFunction* _bind_ctor(lua_State *L);
    static void _bind_dtor(IFunction* obj);
    typedef IFunction base_t;
};

template<>
class LunaTraits< IGraph > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IGraph* _bind_ctor(lua_State *L);
    static void _bind_dtor(IGraph* obj);
    typedef IGraph base_t;
};

template<>
class LunaTraits< IGroup > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IGroup* _bind_ctor(lua_State *L);
    static void _bind_dtor(IGroup* obj);
    typedef IGroup base_t;
};

template<>
class LunaTraits< IInclude > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IInclude* _bind_ctor(lua_State *L);
    static void _bind_dtor(IInclude* obj);
    typedef IInclude base_t;
};

template<>
class LunaTraits< IIncludeIterator > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IIncludeIterator* _bind_ctor(lua_State *L);
    static void _bind_dtor(IIncludeIterator* obj);
    typedef IIncludeIterator base_t;
};

template<>
class LunaTraits< IInterface > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IInterface* _bind_ctor(lua_State *L);
    static void _bind_dtor(IInterface* obj);
    typedef IInterface base_t;
};

template<>
class LunaTraits< ILinkedText > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static ILinkedText* _bind_ctor(lua_State *L);
    static void _bind_dtor(ILinkedText* obj);
    typedef ILinkedText base_t;
};

template<>
class LunaTraits< ILinkedTextIterator > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static ILinkedTextIterator* _bind_ctor(lua_State *L);
    static void _bind_dtor(ILinkedTextIterator* obj);
    typedef ILinkedTextIterator base_t;
};

template<>
class LunaTraits< ILT_Ref > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static ILT_Ref* _bind_ctor(lua_State *L);
    static void _bind_dtor(ILT_Ref* obj);
    typedef ILT_Ref base_t;
};

template<>
class LunaTraits< ILT_Text > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static ILT_Text* _bind_ctor(lua_State *L);
    static void _bind_dtor(ILT_Text* obj);
    typedef ILT_Text base_t;
};

template<>
class LunaTraits< IMemberIterator > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IMemberIterator* _bind_ctor(lua_State *L);
    static void _bind_dtor(IMemberIterator* obj);
    typedef IMemberIterator base_t;
};

template<>
class LunaTraits< IMemberReference > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IMemberReference* _bind_ctor(lua_State *L);
    static void _bind_dtor(IMemberReference* obj);
    typedef IMemberReference base_t;
};

template<>
class LunaTraits< IMemberReferenceIterator > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IMemberReferenceIterator* _bind_ctor(lua_State *L);
    static void _bind_dtor(IMemberReferenceIterator* obj);
    typedef IMemberReferenceIterator base_t;
};

template<>
class LunaTraits< INamespace > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static INamespace* _bind_ctor(lua_State *L);
    static void _bind_dtor(INamespace* obj);
    typedef INamespace base_t;
};

template<>
class LunaTraits< INode > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static INode* _bind_ctor(lua_State *L);
    static void _bind_dtor(INode* obj);
    typedef INode base_t;
};

template<>
class LunaTraits< INodeIterator > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static INodeIterator* _bind_ctor(lua_State *L);
    static void _bind_dtor(INodeIterator* obj);
    typedef INodeIterator base_t;
};

template<>
class LunaTraits< IPage > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IPage* _bind_ctor(lua_State *L);
    static void _bind_dtor(IPage* obj);
    typedef IPage base_t;
};

template<>
class LunaTraits< IParam > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IParam* _bind_ctor(lua_State *L);
    static void _bind_dtor(IParam* obj);
    typedef IParam base_t;
};

template<>
class LunaTraits< IParamIterator > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IParamIterator* _bind_ctor(lua_State *L);
    static void _bind_dtor(IParamIterator* obj);
    typedef IParamIterator base_t;
};

template<>
class LunaTraits< IProperty > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IProperty* _bind_ctor(lua_State *L);
    static void _bind_dtor(IProperty* obj);
    typedef IProperty base_t;
};

template<>
class LunaTraits< IPrototype > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IPrototype* _bind_ctor(lua_State *L);
    static void _bind_dtor(IPrototype* obj);
    typedef IPrototype base_t;
};

template<>
class LunaTraits< IRelatedCompound > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IRelatedCompound* _bind_ctor(lua_State *L);
    static void _bind_dtor(IRelatedCompound* obj);
    typedef IRelatedCompound base_t;
};

template<>
class LunaTraits< IRelatedCompoundIterator > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IRelatedCompoundIterator* _bind_ctor(lua_State *L);
    static void _bind_dtor(IRelatedCompoundIterator* obj);
    typedef IRelatedCompoundIterator base_t;
};

template<>
class LunaTraits< ISection > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static ISection* _bind_ctor(lua_State *L);
    static void _bind_dtor(ISection* obj);
    typedef ISection base_t;
};

template<>
class LunaTraits< ISectionIterator > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static ISectionIterator* _bind_ctor(lua_State *L);
    static void _bind_dtor(ISectionIterator* obj);
    typedef ISectionIterator base_t;
};

template<>
class LunaTraits< ISignal > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static ISignal* _bind_ctor(lua_State *L);
    static void _bind_dtor(ISignal* obj);
    typedef ISignal base_t;
};

template<>
class LunaTraits< ISlot > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static ISlot* _bind_ctor(lua_State *L);
    static void _bind_dtor(ISlot* obj);
    typedef ISlot base_t;
};

template<>
class LunaTraits< IString > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IString* _bind_ctor(lua_State *L);
    static void _bind_dtor(IString* obj);
    typedef IString base_t;
};

template<>
class LunaTraits< IStruct > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IStruct* _bind_ctor(lua_State *L);
    static void _bind_dtor(IStruct* obj);
    typedef IStruct base_t;
};

template<>
class LunaTraits< ITypedef > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static ITypedef* _bind_ctor(lua_State *L);
    static void _bind_dtor(ITypedef* obj);
    typedef ITypedef base_t;
};

template<>
class LunaTraits< IUnion > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IUnion* _bind_ctor(lua_State *L);
    static void _bind_dtor(IUnion* obj);
    typedef IUnion base_t;
};

template<>
class LunaTraits< IUserDefined > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IUserDefined* _bind_ctor(lua_State *L);
    static void _bind_dtor(IUserDefined* obj);
    typedef IUserDefined base_t;
};

template<>
class LunaTraits< IVariable > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static IVariable* _bind_ctor(lua_State *L);
    static void _bind_dtor(IVariable* obj);
    typedef IVariable base_t;
};


template<>
class LunaType< 83803782 > {
public:
    typedef IChildNode type;
};

template<>
class LunaType< 44189495 > {
public:
    typedef IChildNodeIterator type;
};

template<>
class LunaType< 27352831 > {
public:
    typedef ICompound type;
};

template<>
class LunaType< 38557418 > {
public:
    typedef ICompoundIterator type;
};

template<>
class LunaType< 88829564 > {
public:
    typedef IMember type;
};

template<>
class LunaType< 2243631 > {
public:
    typedef IDoc type;
};

template<>
class LunaType< 71345922 > {
public:
    typedef IDocIterator type;
};

template<>
class LunaType< 63320756 > {
public:
    typedef IDoxygen type;
};

template<>
class LunaType< 18272793 > {
public:
    typedef IEdgeLabel type;
};

template<>
class LunaType< 32070006 > {
public:
    typedef IEdgeLabelIterator type;
};

template<>
class LunaType< 58990855 > {
public:
    typedef IGraph type;
};

template<>
class LunaType< 52441879 > {
public:
    typedef IInclude type;
};

template<>
class LunaType< 31762769 > {
public:
    typedef IIncludeIterator type;
};

template<>
class LunaType< 94836970 > {
public:
    typedef ILinkedText type;
};

template<>
class LunaType< 5142425 > {
public:
    typedef ILinkedTextIterator type;
};

template<>
class LunaType< 43776686 > {
public:
    typedef IMemberIterator type;
};

template<>
class LunaType< 16821774 > {
public:
    typedef IMemberReference type;
};

template<>
class LunaType< 12383283 > {
public:
    typedef IMemberReferenceIterator type;
};

template<>
class LunaType< 69850603 > {
public:
    typedef INode type;
};

template<>
class LunaType< 97822868 > {
public:
    typedef INodeIterator type;
};

template<>
class LunaType< 66811974 > {
public:
    typedef IParam type;
};

template<>
class LunaType< 14097198 > {
public:
    typedef IParamIterator type;
};

template<>
class LunaType< 47694753 > {
public:
    typedef IRelatedCompound type;
};

template<>
class LunaType< 65072275 > {
public:
    typedef IRelatedCompoundIterator type;
};

template<>
class LunaType< 70042881 > {
public:
    typedef ISection type;
};

template<>
class LunaType< 74644830 > {
public:
    typedef ISectionIterator type;
};

template<>
class LunaType< 74613221 > {
public:
    typedef IString type;
};


#endif

