#include <lua.hpp>
#include <luabind/luabind.hpp>
#include <luabind/operator.hpp>
#include <luabind/adopt_policy.hpp>
#include <luabind/dependency_policy.hpp>
#include <boost/function.hpp>
#include <iostream> 


// User provided headers:
#include <doxmlintf.h>

// ICompound converters:

luabind::object convertICompoundToIClass(lua_State* L, ICompound* parent) {
    return luabind::object(L,dynamic_cast<IClass*>(parent));
}

luabind::object convertICompoundToIException(lua_State* L, ICompound* parent) {
    return luabind::object(L,dynamic_cast<IException*>(parent));
}

luabind::object convertICompoundToIFile(lua_State* L, ICompound* parent) {
    return luabind::object(L,dynamic_cast<IFile*>(parent));
}

luabind::object convertICompoundToIGroup(lua_State* L, ICompound* parent) {
    return luabind::object(L,dynamic_cast<IGroup*>(parent));
}

luabind::object convertICompoundToIInterface(lua_State* L, ICompound* parent) {
    return luabind::object(L,dynamic_cast<IInterface*>(parent));
}

luabind::object convertICompoundToINamespace(lua_State* L, ICompound* parent) {
    return luabind::object(L,dynamic_cast<INamespace*>(parent));
}

luabind::object convertICompoundToIPage(lua_State* L, ICompound* parent) {
    return luabind::object(L,dynamic_cast<IPage*>(parent));
}

luabind::object convertICompoundToIStruct(lua_State* L, ICompound* parent) {
    return luabind::object(L,dynamic_cast<IStruct*>(parent));
}

luabind::object convertICompoundToIUnion(lua_State* L, ICompound* parent) {
    return luabind::object(L,dynamic_cast<IUnion*>(parent));
}

typedef boost::function<luabind::object (lua_State* L, ICompound* parent)> ICompoundConverter;
typedef std::map<std::string, ICompoundConverter> ICompoundConverterMap;
ICompoundConverterMap ICompound_converters;

void registerICompoundConverters() {
	ICompound_converters["IClass"] = &convertICompoundToIClass;
	ICompound_converters["IException"] = &convertICompoundToIException;
	ICompound_converters["IFile"] = &convertICompoundToIFile;
	ICompound_converters["IGroup"] = &convertICompoundToIGroup;
	ICompound_converters["IInterface"] = &convertICompoundToIInterface;
	ICompound_converters["INamespace"] = &convertICompoundToINamespace;
	ICompound_converters["IPage"] = &convertICompoundToIPage;
	ICompound_converters["IStruct"] = &convertICompoundToIStruct;
	ICompound_converters["IUnion"] = &convertICompoundToIUnion;
}


// IDoc converters:

luabind::object convertIDocToIDocAnchor(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocAnchor*>(parent));
}

luabind::object convertIDocToIDocCodeLine(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocCodeLine*>(parent));
}

luabind::object convertIDocToIDocCopy(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocCopy*>(parent));
}

luabind::object convertIDocToIDocDotFile(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocDotFile*>(parent));
}

luabind::object convertIDocToIDocEMail(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocEMail*>(parent));
}

luabind::object convertIDocToIDocEntry(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocEntry*>(parent));
}

luabind::object convertIDocToIDocFormula(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocFormula*>(parent));
}

luabind::object convertIDocToIDocHighlight(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocHighlight*>(parent));
}

luabind::object convertIDocToIDocHRuler(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocHRuler*>(parent));
}

luabind::object convertIDocToIDocImage(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocImage*>(parent));
}

luabind::object convertIDocToIDocIndexEntry(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocIndexEntry*>(parent));
}

luabind::object convertIDocToIDocInternal(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocInternal*>(parent));
}

luabind::object convertIDocToIDocItemizedList(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocItemizedList*>(parent));
}

luabind::object convertIDocToIDocLineBreak(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocLineBreak*>(parent));
}

luabind::object convertIDocToIDocLink(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocLink*>(parent));
}

luabind::object convertIDocToIDocListItem(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocListItem*>(parent));
}

luabind::object convertIDocToIDocMarkup(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocMarkup*>(parent));
}

luabind::object convertIDocToIDocMarkupModifier(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocMarkupModifier*>(parent));
}

luabind::object convertIDocToIDocOrderedList(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocOrderedList*>(parent));
}

luabind::object convertIDocToIDocPara(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocPara*>(parent));
}

luabind::object convertIDocToIDocParameter(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocParameter*>(parent));
}

luabind::object convertIDocToIDocParameterItem(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocParameterItem*>(parent));
}

luabind::object convertIDocToIDocParameterList(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocParameterList*>(parent));
}

luabind::object convertIDocToIDocProgramListing(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocProgramListing*>(parent));
}

luabind::object convertIDocToIDocRef(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocRef*>(parent));
}

luabind::object convertIDocToIDocRoot(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocRoot*>(parent));
}

luabind::object convertIDocToIDocRow(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocRow*>(parent));
}

luabind::object convertIDocToIDocSection(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocSection*>(parent));
}

luabind::object convertIDocToIDocSimpleSect(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocSimpleSect*>(parent));
}

luabind::object convertIDocToIDocSymbol(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocSymbol*>(parent));
}

luabind::object convertIDocToIDocTable(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocTable*>(parent));
}

luabind::object convertIDocToIDocText(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocText*>(parent));
}

luabind::object convertIDocToIDocTitle(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocTitle*>(parent));
}

luabind::object convertIDocToIDocTocItem(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocTocItem*>(parent));
}

luabind::object convertIDocToIDocTocList(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocTocList*>(parent));
}

luabind::object convertIDocToIDocULink(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocULink*>(parent));
}

luabind::object convertIDocToIDocVariableList(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocVariableList*>(parent));
}

luabind::object convertIDocToIDocVariableListEntry(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocVariableListEntry*>(parent));
}

luabind::object convertIDocToIDocVerbatim(lua_State* L, IDoc* parent) {
    return luabind::object(L,dynamic_cast<IDocVerbatim*>(parent));
}

typedef boost::function<luabind::object (lua_State* L, IDoc* parent)> IDocConverter;
typedef std::map<std::string, IDocConverter> IDocConverterMap;
IDocConverterMap IDoc_converters;

void registerIDocConverters() {
	IDoc_converters["IDocAnchor"] = &convertIDocToIDocAnchor;
	IDoc_converters["IDocCodeLine"] = &convertIDocToIDocCodeLine;
	IDoc_converters["IDocCopy"] = &convertIDocToIDocCopy;
	IDoc_converters["IDocDotFile"] = &convertIDocToIDocDotFile;
	IDoc_converters["IDocEMail"] = &convertIDocToIDocEMail;
	IDoc_converters["IDocEntry"] = &convertIDocToIDocEntry;
	IDoc_converters["IDocFormula"] = &convertIDocToIDocFormula;
	IDoc_converters["IDocHighlight"] = &convertIDocToIDocHighlight;
	IDoc_converters["IDocHRuler"] = &convertIDocToIDocHRuler;
	IDoc_converters["IDocImage"] = &convertIDocToIDocImage;
	IDoc_converters["IDocIndexEntry"] = &convertIDocToIDocIndexEntry;
	IDoc_converters["IDocInternal"] = &convertIDocToIDocInternal;
	IDoc_converters["IDocItemizedList"] = &convertIDocToIDocItemizedList;
	IDoc_converters["IDocLineBreak"] = &convertIDocToIDocLineBreak;
	IDoc_converters["IDocLink"] = &convertIDocToIDocLink;
	IDoc_converters["IDocListItem"] = &convertIDocToIDocListItem;
	IDoc_converters["IDocMarkup"] = &convertIDocToIDocMarkup;
	IDoc_converters["IDocMarkupModifier"] = &convertIDocToIDocMarkupModifier;
	IDoc_converters["IDocOrderedList"] = &convertIDocToIDocOrderedList;
	IDoc_converters["IDocPara"] = &convertIDocToIDocPara;
	IDoc_converters["IDocParameter"] = &convertIDocToIDocParameter;
	IDoc_converters["IDocParameterItem"] = &convertIDocToIDocParameterItem;
	IDoc_converters["IDocParameterList"] = &convertIDocToIDocParameterList;
	IDoc_converters["IDocProgramListing"] = &convertIDocToIDocProgramListing;
	IDoc_converters["IDocRef"] = &convertIDocToIDocRef;
	IDoc_converters["IDocRoot"] = &convertIDocToIDocRoot;
	IDoc_converters["IDocRow"] = &convertIDocToIDocRow;
	IDoc_converters["IDocSection"] = &convertIDocToIDocSection;
	IDoc_converters["IDocSimpleSect"] = &convertIDocToIDocSimpleSect;
	IDoc_converters["IDocSymbol"] = &convertIDocToIDocSymbol;
	IDoc_converters["IDocTable"] = &convertIDocToIDocTable;
	IDoc_converters["IDocText"] = &convertIDocToIDocText;
	IDoc_converters["IDocTitle"] = &convertIDocToIDocTitle;
	IDoc_converters["IDocTocItem"] = &convertIDocToIDocTocItem;
	IDoc_converters["IDocTocList"] = &convertIDocToIDocTocList;
	IDoc_converters["IDocULink"] = &convertIDocToIDocULink;
	IDoc_converters["IDocVariableList"] = &convertIDocToIDocVariableList;
	IDoc_converters["IDocVariableListEntry"] = &convertIDocToIDocVariableListEntry;
	IDoc_converters["IDocVerbatim"] = &convertIDocToIDocVerbatim;
}


// ILinkedText converters:

luabind::object convertILinkedTextToILT_Ref(lua_State* L, ILinkedText* parent) {
    return luabind::object(L,dynamic_cast<ILT_Ref*>(parent));
}

luabind::object convertILinkedTextToILT_Text(lua_State* L, ILinkedText* parent) {
    return luabind::object(L,dynamic_cast<ILT_Text*>(parent));
}

typedef boost::function<luabind::object (lua_State* L, ILinkedText* parent)> ILinkedTextConverter;
typedef std::map<std::string, ILinkedTextConverter> ILinkedTextConverterMap;
ILinkedTextConverterMap ILinkedText_converters;

void registerILinkedTextConverters() {
	ILinkedText_converters["ILT_Ref"] = &convertILinkedTextToILT_Ref;
	ILinkedText_converters["ILT_Text"] = &convertILinkedTextToILT_Text;
}


// ISection converters:

luabind::object convertISectionToIUserDefined(lua_State* L, ISection* parent) {
    return luabind::object(L,dynamic_cast<IUserDefined*>(parent));
}

typedef boost::function<luabind::object (lua_State* L, ISection* parent)> ISectionConverter;
typedef std::map<std::string, ISectionConverter> ISectionConverterMap;
ISectionConverterMap ISection_converters;

void registerISectionConverters() {
	ISection_converters["IUserDefined"] = &convertISectionToIUserDefined;
}


luabind::object dynamicCastICompound(ICompound* parent, std::string destType, lua_State* L) {
    luabind::object lo;
    if(!parent)
        return lo;
        
    ICompoundConverterMap::iterator it = ICompound_converters.find(destType);
    if(it==ICompound_converters.end()) {
        std::cout << "Cannot find converter to cast to type " << destType << std::endl;
        return lo;
    }
    
    if(!(it->second)) {
        std::cout << "Invalid converter for type " << destType << std::endl;
        return lo;
    }
    
    lo = it->second(L,parent);
    return lo;
}

luabind::object dynamicCastIDoc(IDoc* parent, std::string destType, lua_State* L) {
    luabind::object lo;
    if(!parent)
        return lo;
        
    IDocConverterMap::iterator it = IDoc_converters.find(destType);
    if(it==IDoc_converters.end()) {
        std::cout << "Cannot find converter to cast to type " << destType << std::endl;
        return lo;
    }
    
    if(!(it->second)) {
        std::cout << "Invalid converter for type " << destType << std::endl;
        return lo;
    }
    
    lo = it->second(L,parent);
    return lo;
}

luabind::object dynamicCastILinkedText(ILinkedText* parent, std::string destType, lua_State* L) {
    luabind::object lo;
    if(!parent)
        return lo;
        
    ILinkedTextConverterMap::iterator it = ILinkedText_converters.find(destType);
    if(it==ILinkedText_converters.end()) {
        std::cout << "Cannot find converter to cast to type " << destType << std::endl;
        return lo;
    }
    
    if(!(it->second)) {
        std::cout << "Invalid converter for type " << destType << std::endl;
        return lo;
    }
    
    lo = it->second(L,parent);
    return lo;
}

luabind::object dynamicCastISection(ISection* parent, std::string destType, lua_State* L) {
    luabind::object lo;
    if(!parent)
        return lo;
        
    ISectionConverterMap::iterator it = ISection_converters.find(destType);
    if(it==ISection_converters.end()) {
        std::cout << "Cannot find converter to cast to type " << destType << std::endl;
        return lo;
    }
    
    if(!(it->second)) {
        std::cout << "Invalid converter for type " << destType << std::endl;
        return lo;
    }
    
    lo = it->second(L,parent);
    return lo;
}

#ifdef __cplusplus
extern "C" {
#endif

int luaopen_doxmlparser(lua_State* L)
{

	// Open the luabind support:
	using namespace luabind;
	luabind::open(L);

    luabind::module(L, "doxmlparser")
    [

		class_< IChildNode >("IChildNode")
			.enum_("NodeRelation") [
				value("PublicInheritance", IChildNode::PublicInheritance),
				value("ProtectedInheritance", IChildNode::ProtectedInheritance),
				value("PrivateInheritance", IChildNode::PrivateInheritance),
				value("Usage", IChildNode::Usage),
				value("TemplateInstance", IChildNode::TemplateInstance)
			]
			.def("node",(::INode *(IChildNode::*)(void) const)&IChildNode::node)
			.def("relation",(::IChildNode::NodeRelation(IChildNode::*)(void) const)&IChildNode::relation)
			.def("relationString",(const ::IString *(IChildNode::*)(void) const)&IChildNode::relationString)
			.def("edgeLabels",(::IEdgeLabelIterator *(IChildNode::*)(void) const)&IChildNode::edgeLabels),
		class_< IChildNodeIterator >("IChildNodeIterator")
			.def("toFirst",(::IChildNode *(IChildNodeIterator::*)(void))&IChildNodeIterator::toFirst)
			.def("toLast",(::IChildNode *(IChildNodeIterator::*)(void))&IChildNodeIterator::toLast)
			.def("toNext",(::IChildNode *(IChildNodeIterator::*)(void))&IChildNodeIterator::toNext)
			.def("toPrev",(::IChildNode *(IChildNodeIterator::*)(void))&IChildNodeIterator::toPrev)
			.def("current",(::IChildNode *(IChildNodeIterator::*)(void) const)&IChildNodeIterator::current)
			.def("release",(void(IChildNodeIterator::*)(void))&IChildNodeIterator::release),
		class_< ICompound >("ICompound")
			.enum_("CompoundKind") [
				value("Invalid", ICompound::Invalid),
				value("Class", ICompound::Class),
				value("Struct", ICompound::Struct),
				value("Union", ICompound::Union),
				value("Interface", ICompound::Interface),
				value("Protocol", ICompound::Protocol),
				value("Category", ICompound::Category),
				value("Exception", ICompound::Exception),
				value("File", ICompound::File),
				value("Namespace", ICompound::Namespace),
				value("Group", ICompound::Group),
				value("Page", ICompound::Page),
				value("Example", ICompound::Example),
				value("Dir", ICompound::Dir)
			]
			.def("name",(const ::IString *(ICompound::*)(void) const)&ICompound::name)
			.def("id",(const ::IString *(ICompound::*)(void) const)&ICompound::id)
			.def("kind",(::ICompound::CompoundKind(ICompound::*)(void) const)&ICompound::kind)
			.def("kindString",(const ::IString *(ICompound::*)(void) const)&ICompound::kindString)
			.def("sections",(::ISectionIterator *(ICompound::*)(void) const)&ICompound::sections)
			.def("briefDescription",(::IDocRoot *(ICompound::*)(void) const)&ICompound::briefDescription)
			.def("detailedDescription",(::IDocRoot *(ICompound::*)(void) const)&ICompound::detailedDescription)
			.def("memberById",(::IMember *(ICompound::*)(const char *) const)&ICompound::memberById)
			.def("memberByName",(::IMemberIterator *(ICompound::*)(const char *) const)&ICompound::memberByName)
			.def("release",(void(ICompound::*)(void))&ICompound::release)
			.def("dynamicCast",&dynamicCastICompound,raw(_4)),
		class_< IClass, ICompound >("IClass")
			.def("inheritanceGraph",(::IGraph *(IClass::*)(void) const)&IClass::inheritanceGraph)
			.def("collaborationGraph",(::IGraph *(IClass::*)(void) const)&IClass::collaborationGraph)
			.def("baseCompounds",(::IRelatedCompoundIterator *(IClass::*)(void) const)&IClass::baseCompounds)
			.def("derivedCompounds",(::IRelatedCompoundIterator *(IClass::*)(void) const)&IClass::derivedCompounds)
			.def("nestedCompounds",(::ICompoundIterator *(IClass::*)(void) const)&IClass::nestedCompounds)
			.def("templateParameters",(::IParamIterator *(IClass::*)(void) const)&IClass::templateParameters)
			.def("locationFile",(const ::IString *(IClass::*)(void) const)&IClass::locationFile)
			.def("locationLine",(int(IClass::*)(void) const)&IClass::locationLine)
			.def("locationBodyFile",(const ::IString *(IClass::*)(void) const)&IClass::locationBodyFile)
			.def("locationBodyStartLine",(int(IClass::*)(void) const)&IClass::locationBodyStartLine)
			.def("locationBodyEndLine",(int(IClass::*)(void) const)&IClass::locationBodyEndLine),
		class_< ICompoundIterator >("ICompoundIterator")
			.def("toFirst",(void(ICompoundIterator::*)(void))&ICompoundIterator::toFirst)
			.def("toLast",(void(ICompoundIterator::*)(void))&ICompoundIterator::toLast)
			.def("toNext",(void(ICompoundIterator::*)(void))&ICompoundIterator::toNext)
			.def("toPrev",(void(ICompoundIterator::*)(void))&ICompoundIterator::toPrev)
			.def("current",(::ICompound *(ICompoundIterator::*)(void) const)&ICompoundIterator::current)
			.def("release",(void(ICompoundIterator::*)(void))&ICompoundIterator::release),
		class_< IDoc >("IDoc")
			.enum_("Kind") [
				value("Invalid", IDoc::Invalid),
				value("Para", IDoc::Para),
				value("Text", IDoc::Text),
				value("MarkupModifier", IDoc::MarkupModifier),
				value("ItemizedList", IDoc::ItemizedList),
				value("OrderedList", IDoc::OrderedList),
				value("ListItem", IDoc::ListItem),
				value("ParameterList", IDoc::ParameterList),
				value("Parameter", IDoc::Parameter),
				value("SimpleSect", IDoc::SimpleSect),
				value("Title", IDoc::Title),
				value("Ref", IDoc::Ref),
				value("VariableList", IDoc::VariableList),
				value("VariableListEntry", IDoc::VariableListEntry),
				value("HRuler", IDoc::HRuler),
				value("LineBreak", IDoc::LineBreak),
				value("ULink", IDoc::ULink),
				value("EMail", IDoc::EMail),
				value("Link", IDoc::Link),
				value("ProgramListing", IDoc::ProgramListing),
				value("CodeLine", IDoc::CodeLine),
				value("Highlight", IDoc::Highlight),
				value("Formula", IDoc::Formula),
				value("Image", IDoc::Image),
				value("DotFile", IDoc::DotFile),
				value("IndexEntry", IDoc::IndexEntry),
				value("Table", IDoc::Table),
				value("Row", IDoc::Row),
				value("Entry", IDoc::Entry),
				value("Section", IDoc::Section),
				value("Verbatim", IDoc::Verbatim),
				value("Copy", IDoc::Copy),
				value("TocList", IDoc::TocList),
				value("TocItem", IDoc::TocItem),
				value("Anchor", IDoc::Anchor),
				value("Symbol", IDoc::Symbol),
				value("Internal", IDoc::Internal),
				value("Root", IDoc::Root),
				value("ParameterItem", IDoc::ParameterItem)
			]
			.def("kind",(::IDoc::Kind(IDoc::*)(void) const)&IDoc::kind)
			.def("dynamicCast",&dynamicCastIDoc,raw(_4)),
		class_< IDocAnchor, IDoc >("IDocAnchor")
			.def("id",(const ::IString *(IDocAnchor::*)(void) const)&IDocAnchor::id),
		class_< IDocCodeLine, IDoc >("IDocCodeLine")
			.def("lineNumber",(int(IDocCodeLine::*)(void) const)&IDocCodeLine::lineNumber)
			.def("refId",(const ::IString *(IDocCodeLine::*)(void) const)&IDocCodeLine::refId)
			.def("codeElements",(::IDocIterator *(IDocCodeLine::*)(void) const)&IDocCodeLine::codeElements),
		class_< IDocCopy, IDoc >("IDocCopy")
			.def("contents",(::IDocIterator *(IDocCopy::*)(void) const)&IDocCopy::contents),
		class_< IDocDotFile, IDoc >("IDocDotFile")
			.def("name",(const ::IString *(IDocDotFile::*)(void) const)&IDocDotFile::name)
			.def("caption",(const ::IString *(IDocDotFile::*)(void) const)&IDocDotFile::caption),
		class_< IDocEMail, IDoc >("IDocEMail")
			.def("address",(const ::IString *(IDocEMail::*)(void) const)&IDocEMail::address),
		class_< IDocEntry, IDoc >("IDocEntry")
			.def("contents",(::IDocIterator *(IDocEntry::*)(void) const)&IDocEntry::contents),
		class_< IDocFormula, IDoc >("IDocFormula")
			.def("id",(const ::IString *(IDocFormula::*)(void) const)&IDocFormula::id)
			.def("text",(const ::IString *(IDocFormula::*)(void) const)&IDocFormula::text),
		class_< IDocHighlight, IDoc >("IDocHighlight")
			.enum_("HighlightKind") [
				value("Invalid", IDocHighlight::Invalid),
				value("Comment", IDocHighlight::Comment),
				value("Keyword", IDocHighlight::Keyword),
				value("KeywordType", IDocHighlight::KeywordType),
				value("KeywordFlow", IDocHighlight::KeywordFlow),
				value("CharLiteral", IDocHighlight::CharLiteral),
				value("StringLiteral", IDocHighlight::StringLiteral),
				value("Preprocessor", IDocHighlight::Preprocessor)
			]
			.def("highlightKind",(::IDocHighlight::HighlightKind(IDocHighlight::*)(void) const)&IDocHighlight::highlightKind)
			.def("codeElements",(::IDocIterator *(IDocHighlight::*)(void) const)&IDocHighlight::codeElements),
		class_< IDocHRuler, IDoc >("IDocHRuler"),
		class_< IDocImage, IDoc >("IDocImage")
			.def("name",(const ::IString *(IDocImage::*)(void) const)&IDocImage::name)
			.def("caption",(const ::IString *(IDocImage::*)(void) const)&IDocImage::caption),
		class_< IDocIndexEntry, IDoc >("IDocIndexEntry")
			.def("primary",(const ::IString *(IDocIndexEntry::*)(void) const)&IDocIndexEntry::primary)
			.def("secondary",(const ::IString *(IDocIndexEntry::*)(void) const)&IDocIndexEntry::secondary),
		class_< IDocInternal, IDoc >("IDocInternal")
			.def("paragraphs",(::IDocIterator *(IDocInternal::*)(void) const)&IDocInternal::paragraphs)
			.def("subSections",(::IDocIterator *(IDocInternal::*)(void) const)&IDocInternal::subSections),
		class_< IDocItemizedList, IDoc >("IDocItemizedList")
			.def("elements",(::IDocIterator *(IDocItemizedList::*)(void) const)&IDocItemizedList::elements),
		class_< IDocIterator >("IDocIterator")
			.def("toFirst",(::IDoc *(IDocIterator::*)(void))&IDocIterator::toFirst)
			.def("toLast",(::IDoc *(IDocIterator::*)(void))&IDocIterator::toLast)
			.def("toNext",(::IDoc *(IDocIterator::*)(void))&IDocIterator::toNext)
			.def("toPrev",(::IDoc *(IDocIterator::*)(void))&IDocIterator::toPrev)
			.def("current",(::IDoc *(IDocIterator::*)(void) const)&IDocIterator::current)
			.def("release",(void(IDocIterator::*)(void))&IDocIterator::release),
		class_< IDocLineBreak, IDoc >("IDocLineBreak"),
		class_< IDocLink, IDoc >("IDocLink")
			.def("refId",(const ::IString *(IDocLink::*)(void) const)&IDocLink::refId)
			.def("text",(const ::IString *(IDocLink::*)(void) const)&IDocLink::text),
		class_< IDocListItem, IDoc >("IDocListItem")
			.def("contents",(::IDocIterator *(IDocListItem::*)(void) const)&IDocListItem::contents),
		class_< IDocMarkup, IDoc >("IDocMarkup")
			.enum_("Markup") [
				value("Normal", IDocMarkup::Normal),
				value("Bold", IDocMarkup::Bold),
				value("Emphasis", IDocMarkup::Emphasis),
				value("ComputerOutput", IDocMarkup::ComputerOutput),
				value("Subscript", IDocMarkup::Subscript),
				value("Superscript", IDocMarkup::Superscript),
				value("SmallFont", IDocMarkup::SmallFont),
				value("Center", IDocMarkup::Center),
				value("Preformatted", IDocMarkup::Preformatted),
				value("Heading", IDocMarkup::Heading)
			],
		class_< IDocMarkupModifier, IDoc >("IDocMarkupModifier")
			.def("enabled",(bool(IDocMarkupModifier::*)(void) const)&IDocMarkupModifier::enabled)
			.def("markup",(int(IDocMarkupModifier::*)(void) const)&IDocMarkupModifier::markup)
			.def("headingLevel",(int(IDocMarkupModifier::*)(void) const)&IDocMarkupModifier::headingLevel),
		class_< IDocOrderedList, IDoc >("IDocOrderedList")
			.def("elements",(::IDocIterator *(IDocOrderedList::*)(void) const)&IDocOrderedList::elements),
		class_< IDocPara, IDoc >("IDocPara")
			.def("contents",(::IDocIterator *(IDocPara::*)(void) const)&IDocPara::contents),
		class_< IDocParameter, IDoc >("IDocParameter")
			.def("name",(const ::IString *(IDocParameter::*)(void) const)&IDocParameter::name),
		class_< IDocParameterItem, IDoc >("IDocParameterItem")
			.def("paramNames",(::IDocIterator *(IDocParameterItem::*)(void) const)&IDocParameterItem::paramNames)
			.def("description",(::IDocPara *(IDocParameterItem::*)(void) const)&IDocParameterItem::description),
		class_< IDocParameterList, IDoc >("IDocParameterList")
			.enum_("Types") [
				value("Param", IDocParameterList::Param),
				value("RetVal", IDocParameterList::RetVal),
				value("Exception", IDocParameterList::Exception)
			]
			.def("sectType",(::IDocParameterList::Types(IDocParameterList::*)(void) const)&IDocParameterList::sectType)
			.def("params",(::IDocIterator *(IDocParameterList::*)(void) const)&IDocParameterList::params),
		class_< IDocProgramListing, IDoc >("IDocProgramListing")
			.def("codeLines",(::IDocIterator *(IDocProgramListing::*)(void) const)&IDocProgramListing::codeLines),
		class_< IDocRef, IDoc >("IDocRef")
			.enum_("TargetKind") [
				value("Member", IDocRef::Member),
				value("Compound", IDocRef::Compound)
			]
			.def("refId",(const ::IString *(IDocRef::*)(void) const)&IDocRef::refId)
			.def("targetKind",(::IDocRef::TargetKind(IDocRef::*)(void) const)&IDocRef::targetKind)
			.def("external",(const ::IString *(IDocRef::*)(void) const)&IDocRef::external)
			.def("text",(const ::IString *(IDocRef::*)(void) const)&IDocRef::text),
		class_< IDocRoot, IDoc >("IDocRoot")
			.def("contents",(::IDocIterator *(IDocRoot::*)(void) const)&IDocRoot::contents)
			.def("internal",(::IDocInternal *(IDocRoot::*)(void) const)&IDocRoot::internal),
		class_< IDocRow, IDoc >("IDocRow")
			.def("entries",(::IDocIterator *(IDocRow::*)(void) const)&IDocRow::entries),
		class_< IDocSection, IDoc >("IDocSection")
			.def("id",(const ::IString *(IDocSection::*)(void) const)&IDocSection::id)
			.def("level",(int(IDocSection::*)(void) const)&IDocSection::level)
			.def("title",(::IDocTitle *(IDocSection::*)(void) const)&IDocSection::title)
			.def("paragraphs",(::IDocIterator *(IDocSection::*)(void) const)&IDocSection::paragraphs)
			.def("subSections",(::IDocIterator *(IDocSection::*)(void) const)&IDocSection::subSections)
			.def("internal",(::IDocInternal *(IDocSection::*)(void) const)&IDocSection::internal),
		class_< IDocSimpleSect, IDoc >("IDocSimpleSect")
			.enum_("Types") [
				value("Invalid", IDocSimpleSect::Invalid),
				value("See", IDocSimpleSect::See),
				value("Return", IDocSimpleSect::Return),
				value("Author", IDocSimpleSect::Author),
				value("Version", IDocSimpleSect::Version),
				value("Since", IDocSimpleSect::Since),
				value("Date", IDocSimpleSect::Date),
				value("Bug", IDocSimpleSect::Bug),
				value("Note", IDocSimpleSect::Note),
				value("Warning", IDocSimpleSect::Warning),
				value("Par", IDocSimpleSect::Par),
				value("Deprecated", IDocSimpleSect::Deprecated),
				value("Pre", IDocSimpleSect::Pre),
				value("Post", IDocSimpleSect::Post),
				value("Invar", IDocSimpleSect::Invar),
				value("Remark", IDocSimpleSect::Remark),
				value("Attention", IDocSimpleSect::Attention),
				value("Todo", IDocSimpleSect::Todo),
				value("Test", IDocSimpleSect::Test),
				value("RCS", IDocSimpleSect::RCS),
				value("EnumValues", IDocSimpleSect::EnumValues),
				value("Examples", IDocSimpleSect::Examples)
			]
			.def("type",(::IDocSimpleSect::Types(IDocSimpleSect::*)(void) const)&IDocSimpleSect::type)
			.def("typeString",(const ::IString *(IDocSimpleSect::*)(void) const)&IDocSimpleSect::typeString)
			.def("title",(::IDocTitle *(IDocSimpleSect::*)(void) const)&IDocSimpleSect::title)
			.def("description",(::IDocPara *(IDocSimpleSect::*)(void) const)&IDocSimpleSect::description),
		class_< IDocSymbol, IDoc >("IDocSymbol")
			.enum_("Types") [
				value("Invalid", IDocSymbol::Invalid),
				value("Umlaut", IDocSymbol::Umlaut),
				value("Acute", IDocSymbol::Acute),
				value("Grave", IDocSymbol::Grave),
				value("Circ", IDocSymbol::Circ),
				value("Tilde", IDocSymbol::Tilde),
				value("Szlig", IDocSymbol::Szlig),
				value("Cedil", IDocSymbol::Cedil),
				value("Ring", IDocSymbol::Ring),
				value("Nbsp", IDocSymbol::Nbsp),
				value("Copy", IDocSymbol::Copy)
			]
			.def("type",(::IDocSymbol::Types(IDocSymbol::*)(void) const)&IDocSymbol::type)
			.def("typeString",(const ::IString *(IDocSymbol::*)(void) const)&IDocSymbol::typeString)
			.def("letter",(char(IDocSymbol::*)(void) const)&IDocSymbol::letter),
		class_< IDocTable, IDoc >("IDocTable")
			.def("rows",(::IDocIterator *(IDocTable::*)(void) const)&IDocTable::rows)
			.def("numColumns",(int(IDocTable::*)(void) const)&IDocTable::numColumns)
			.def("caption",(const ::IString *(IDocTable::*)(void) const)&IDocTable::caption),
		class_< IDocText, IDocMarkup >("IDocText")
			.def("text",(const ::IString *(IDocText::*)(void) const)&IDocText::text)
			.def("markup",(int(IDocText::*)(void) const)&IDocText::markup)
			.def("headingLevel",(int(IDocText::*)(void) const)&IDocText::headingLevel),
		class_< IDocTitle, IDoc >("IDocTitle")
			.def("title",(::IDocIterator *(IDocTitle::*)(void) const)&IDocTitle::title),
		class_< IDocTocItem, IDoc >("IDocTocItem")
			.def("id",(const ::IString *(IDocTocItem::*)(void) const)&IDocTocItem::id)
			.def("title",(const ::IString *(IDocTocItem::*)(void) const)&IDocTocItem::title),
		class_< IDocTocList, IDoc >("IDocTocList")
			.def("elements",(::IDocIterator *(IDocTocList::*)(void) const)&IDocTocList::elements),
		class_< IDocULink, IDoc >("IDocULink")
			.def("url",(const ::IString *(IDocULink::*)(void) const)&IDocULink::url)
			.def("text",(const ::IString *(IDocULink::*)(void) const)&IDocULink::text),
		class_< IDocVariableList, IDoc >("IDocVariableList")
			.def("entries",(::IDocIterator *(IDocVariableList::*)(void) const)&IDocVariableList::entries),
		class_< IDocVariableListEntry, IDoc >("IDocVariableListEntry")
			.def("term",(::ILinkedTextIterator *(IDocVariableListEntry::*)(void) const)&IDocVariableListEntry::term)
			.def("description",(::IDocPara *(IDocVariableListEntry::*)(void) const)&IDocVariableListEntry::description),
		class_< IDocVerbatim, IDoc >("IDocVerbatim")
			.enum_("Types") [
				value("Invalid", IDocVerbatim::Invalid),
				value("HtmlOnly", IDocVerbatim::HtmlOnly),
				value("LatexOnly", IDocVerbatim::LatexOnly),
				value("Verbatim", IDocVerbatim::Verbatim)
			]
			.def("text",(const ::IString *(IDocVerbatim::*)(void) const)&IDocVerbatim::text)
			.def("type",(::IDocVerbatim::Types(IDocVerbatim::*)(void) const)&IDocVerbatim::type),
		class_< IDoxygen >("IDoxygen")
			.def("compounds",(::ICompoundIterator *(IDoxygen::*)(void) const)&IDoxygen::compounds)
			.def("compoundById",(::ICompound *(IDoxygen::*)(const char *) const)&IDoxygen::compoundById)
			.def("compoundByName",(::ICompound *(IDoxygen::*)(const char *) const)&IDoxygen::compoundByName)
			.def("memberById",(::ICompound *(IDoxygen::*)(const char *) const)&IDoxygen::memberById)
			.def("memberByName",(::ICompoundIterator *(IDoxygen::*)(const char *) const)&IDoxygen::memberByName)
			.def("release",(void(IDoxygen::*)(void))&IDoxygen::release)
			.def("setDebugLevel",(void(IDoxygen::*)(int))&IDoxygen::setDebugLevel)
			.def("readXMLDir",(bool(IDoxygen::*)(const char *))&IDoxygen::readXMLDir),
		class_< IEdgeLabel >("IEdgeLabel")
			.def("label",(const ::IString *(IEdgeLabel::*)(void) const)&IEdgeLabel::label),
		class_< IEdgeLabelIterator >("IEdgeLabelIterator")
			.def("toFirst",(::IEdgeLabel *(IEdgeLabelIterator::*)(void))&IEdgeLabelIterator::toFirst)
			.def("toLast",(::IEdgeLabel *(IEdgeLabelIterator::*)(void))&IEdgeLabelIterator::toLast)
			.def("toNext",(::IEdgeLabel *(IEdgeLabelIterator::*)(void))&IEdgeLabelIterator::toNext)
			.def("toPrev",(::IEdgeLabel *(IEdgeLabelIterator::*)(void))&IEdgeLabelIterator::toPrev)
			.def("current",(::IEdgeLabel *(IEdgeLabelIterator::*)(void) const)&IEdgeLabelIterator::current)
			.def("release",(void(IEdgeLabelIterator::*)(void))&IEdgeLabelIterator::release),
		class_< IException, ICompound >("IException"),
		class_< IFile, ICompound >("IFile")
			.def("includeDependencyGraph",(::IGraph *(IFile::*)(void) const)&IFile::includeDependencyGraph)
			.def("includedByDependencyGraph",(::IGraph *(IFile::*)(void) const)&IFile::includedByDependencyGraph)
			.def("source",(::IDocProgramListing *(IFile::*)(void) const)&IFile::source)
			.def("nestedCompounds",(::ICompoundIterator *(IFile::*)(void) const)&IFile::nestedCompounds)
			.def("includes",(::IIncludeIterator *(IFile::*)(void) const)&IFile::includes)
			.def("includedBy",(::IIncludeIterator *(IFile::*)(void) const)&IFile::includedBy),
		class_< IGraph >("IGraph")
			.def("nodes",(::INodeIterator *(IGraph::*)(void) const)&IGraph::nodes),
		class_< IGroup, ICompound >("IGroup")
			.def("nestedCompounds",(::ICompoundIterator *(IGroup::*)(void) const)&IGroup::nestedCompounds),
		class_< IInclude >("IInclude")
			.def("name",(const ::IString *(IInclude::*)(void) const)&IInclude::name)
			.def("refId",(const ::IString *(IInclude::*)(void) const)&IInclude::refId)
			.def("isLocal",(bool(IInclude::*)(void) const)&IInclude::isLocal),
		class_< IIncludeIterator >("IIncludeIterator")
			.def("toFirst",(::IInclude *(IIncludeIterator::*)(void))&IIncludeIterator::toFirst)
			.def("toLast",(::IInclude *(IIncludeIterator::*)(void))&IIncludeIterator::toLast)
			.def("toNext",(::IInclude *(IIncludeIterator::*)(void))&IIncludeIterator::toNext)
			.def("toPrev",(::IInclude *(IIncludeIterator::*)(void))&IIncludeIterator::toPrev)
			.def("current",(::IInclude *(IIncludeIterator::*)(void) const)&IIncludeIterator::current)
			.def("release",(void(IIncludeIterator::*)(void))&IIncludeIterator::release),
		class_< IInterface, ICompound >("IInterface")
			.def("baseCompounds",(::IRelatedCompoundIterator *(IInterface::*)(void) const)&IInterface::baseCompounds)
			.def("derivedCompounds",(::IRelatedCompoundIterator *(IInterface::*)(void) const)&IInterface::derivedCompounds),
		class_< ILinkedText >("ILinkedText")
			.enum_("Kind") [
				value("Kind_Text", ILinkedText::Kind_Text),
				value("Kind_Ref", ILinkedText::Kind_Ref)
			]
			.def("kind",(::ILinkedText::Kind(ILinkedText::*)(void) const)&ILinkedText::kind)
			.def("dynamicCast",&dynamicCastILinkedText,raw(_4)),
		class_< ILinkedTextIterator >("ILinkedTextIterator")
			.def("toFirst",(::ILinkedText *(ILinkedTextIterator::*)(void))&ILinkedTextIterator::toFirst)
			.def("toLast",(::ILinkedText *(ILinkedTextIterator::*)(void))&ILinkedTextIterator::toLast)
			.def("toNext",(::ILinkedText *(ILinkedTextIterator::*)(void))&ILinkedTextIterator::toNext)
			.def("toPrev",(::ILinkedText *(ILinkedTextIterator::*)(void))&ILinkedTextIterator::toPrev)
			.def("current",(::ILinkedText *(ILinkedTextIterator::*)(void) const)&ILinkedTextIterator::current)
			.def("release",(void(ILinkedTextIterator::*)(void))&ILinkedTextIterator::release),
		class_< ILT_Ref, ILinkedText >("ILT_Ref")
			.enum_("TargetKind") [
				value("Member", ILT_Ref::Member),
				value("Compound", ILT_Ref::Compound)
			]
			.def("id",(const ::IString *(ILT_Ref::*)(void) const)&ILT_Ref::id)
			.def("targetKind",(::ILT_Ref::TargetKind(ILT_Ref::*)(void) const)&ILT_Ref::targetKind)
			.def("external",(const ::IString *(ILT_Ref::*)(void) const)&ILT_Ref::external)
			.def("text",(const ::IString *(ILT_Ref::*)(void) const)&ILT_Ref::text),
		class_< ILT_Text, ILinkedText >("ILT_Text")
			.def("text",(const ::IString *(ILT_Text::*)(void) const)&ILT_Text::text),
		class_< IMember >("IMember")
			.enum_("MemberKind") [
				value("Invalid", IMember::Invalid),
				value("Define", IMember::Define),
				value("Property", IMember::Property),
				value("Variable", IMember::Variable),
				value("Typedef", IMember::Typedef),
				value("Enum", IMember::Enum),
				value("Function", IMember::Function),
				value("Signal", IMember::Signal),
				value("Prototype", IMember::Prototype),
				value("Friend", IMember::Friend),
				value("DCOP", IMember::DCOP),
				value("Slot", IMember::Slot),
				value("EnumValue", IMember::EnumValue)
			]
			.def("compound",(::ICompound *(IMember::*)(void) const)&IMember::compound)
			.def("section",(::ISection *(IMember::*)(void) const)&IMember::section)
			.def("kind",(::IMember::MemberKind(IMember::*)(void) const)&IMember::kind)
			.def("kindString",(const ::IString *(IMember::*)(void) const)&IMember::kindString)
			.def("id",(const ::IString *(IMember::*)(void) const)&IMember::id)
			.def("protection",(const ::IString *(IMember::*)(void) const)&IMember::protection)
			.def("virtualness",(const ::IString *(IMember::*)(void) const)&IMember::virtualness)
			.def("type",(::ILinkedTextIterator *(IMember::*)(void) const)&IMember::type)
			.def("typeString",(const ::IString *(IMember::*)(void) const)&IMember::typeString)
			.def("name",(const ::IString *(IMember::*)(void) const)&IMember::name)
			.def("readAccessor",(const ::IString *(IMember::*)(void) const)&IMember::readAccessor)
			.def("writeAccessor",(const ::IString *(IMember::*)(void) const)&IMember::writeAccessor)
			.def("definition",(const ::IString *(IMember::*)(void) const)&IMember::definition)
			.def("argsstring",(const ::IString *(IMember::*)(void) const)&IMember::argsstring)
			.def("isConst",(bool(IMember::*)(void) const)&IMember::isConst)
			.def("isVolatile",(bool(IMember::*)(void) const)&IMember::isVolatile)
			.def("isStatic",(bool(IMember::*)(void) const)&IMember::isStatic)
			.def("isExplicit",(bool(IMember::*)(void) const)&IMember::isExplicit)
			.def("isInline",(bool(IMember::*)(void) const)&IMember::isInline)
			.def("isMutable",(bool(IMember::*)(void) const)&IMember::isMutable)
			.def("isReadable",(bool(IMember::*)(void) const)&IMember::isReadable)
			.def("isWritable",(bool(IMember::*)(void) const)&IMember::isWritable)
			.def("parameters",(::IParamIterator *(IMember::*)(void) const)&IMember::parameters)
			.def("templateParameters",(::IParamIterator *(IMember::*)(void) const)&IMember::templateParameters)
			.def("initializer",(::ILinkedTextIterator *(IMember::*)(void) const)&IMember::initializer)
			.def("exceptions",(::ILinkedTextIterator *(IMember::*)(void) const)&IMember::exceptions)
			.def("references",(::IMemberReferenceIterator *(IMember::*)(void) const)&IMember::references)
			.def("referencedBy",(::IMemberReferenceIterator *(IMember::*)(void) const)&IMember::referencedBy)
			.def("bodyFile",(const ::IString *(IMember::*)(void) const)&IMember::bodyFile)
			.def("bodyStart",(int(IMember::*)(void) const)&IMember::bodyStart)
			.def("bodyEnd",(int(IMember::*)(void) const)&IMember::bodyEnd)
			.def("definitionFile",(const ::IString *(IMember::*)(void) const)&IMember::definitionFile)
			.def("definitionLine",(int(IMember::*)(void) const)&IMember::definitionLine)
			.def("reimplements",(::IMemberReference *(IMember::*)(void) const)&IMember::reimplements)
			.def("reimplementedBy",(::IMemberReferenceIterator *(IMember::*)(void) const)&IMember::reimplementedBy)
			.def("briefDescription",(::IDocRoot *(IMember::*)(void) const)&IMember::briefDescription)
			.def("detailedDescription",(::IDocRoot *(IMember::*)(void) const)&IMember::detailedDescription)
			.def("inbodyDescription",(::IDocRoot *(IMember::*)(void) const)&IMember::inbodyDescription)
			.def("enumValues",(::IMemberIterator *(IMember::*)(void) const)&IMember::enumValues),
		class_< IMemberIterator >("IMemberIterator")
			.def("toFirst",(::IMember *(IMemberIterator::*)(void))&IMemberIterator::toFirst)
			.def("toLast",(::IMember *(IMemberIterator::*)(void))&IMemberIterator::toLast)
			.def("toNext",(::IMember *(IMemberIterator::*)(void))&IMemberIterator::toNext)
			.def("toPrev",(::IMember *(IMemberIterator::*)(void))&IMemberIterator::toPrev)
			.def("current",(::IMember *(IMemberIterator::*)(void) const)&IMemberIterator::current)
			.def("release",(void(IMemberIterator::*)(void))&IMemberIterator::release),
		class_< IMemberReference >("IMemberReference")
			.def("member",(::IMember *(IMemberReference::*)(void) const)&IMemberReference::member)
			.def("name",(const ::IString *(IMemberReference::*)(void) const)&IMemberReference::name)
			.def("scope",(const ::IString *(IMemberReference::*)(void) const)&IMemberReference::scope)
			.def("protection",(const ::IString *(IMemberReference::*)(void) const)&IMemberReference::protection)
			.def("virtualness",(const ::IString *(IMemberReference::*)(void) const)&IMemberReference::virtualness)
			.def("ambiguityScope",(const ::IString *(IMemberReference::*)(void) const)&IMemberReference::ambiguityScope),
		class_< IMemberReferenceIterator >("IMemberReferenceIterator")
			.def("toFirst",(::IMemberReference *(IMemberReferenceIterator::*)(void))&IMemberReferenceIterator::toFirst)
			.def("toLast",(::IMemberReference *(IMemberReferenceIterator::*)(void))&IMemberReferenceIterator::toLast)
			.def("toNext",(::IMemberReference *(IMemberReferenceIterator::*)(void))&IMemberReferenceIterator::toNext)
			.def("toPrev",(::IMemberReference *(IMemberReferenceIterator::*)(void))&IMemberReferenceIterator::toPrev)
			.def("current",(::IMemberReference *(IMemberReferenceIterator::*)(void) const)&IMemberReferenceIterator::current)
			.def("release",(void(IMemberReferenceIterator::*)(void))&IMemberReferenceIterator::release),
		class_< INamespace, ICompound >("INamespace")
			.def("nestedCompounds",(::ICompoundIterator *(INamespace::*)(void) const)&INamespace::nestedCompounds),
		class_< INode >("INode")
			.def("id",(const ::IString *(INode::*)(void) const)&INode::id)
			.def("label",(const ::IString *(INode::*)(void) const)&INode::label)
			.def("linkId",(const ::IString *(INode::*)(void) const)&INode::linkId)
			.def("children",(::IChildNodeIterator *(INode::*)(void) const)&INode::children),
		class_< INodeIterator >("INodeIterator")
			.def("toFirst",(::INode *(INodeIterator::*)(void))&INodeIterator::toFirst)
			.def("toLast",(::INode *(INodeIterator::*)(void))&INodeIterator::toLast)
			.def("toNext",(::INode *(INodeIterator::*)(void))&INodeIterator::toNext)
			.def("toPrev",(::INode *(INodeIterator::*)(void))&INodeIterator::toPrev)
			.def("current",(::INode *(INodeIterator::*)(void) const)&INodeIterator::current)
			.def("release",(void(INodeIterator::*)(void))&INodeIterator::release),
		class_< IPage, ICompound >("IPage")
			.def("title",(const ::IDocTitle *(IPage::*)(void) const)&IPage::title),
		class_< IParam >("IParam")
			.def("type",(::ILinkedTextIterator *(IParam::*)(void) const)&IParam::type)
			.def("declarationName",(const ::IString *(IParam::*)(void) const)&IParam::declarationName)
			.def("definitionName",(const ::IString *(IParam::*)(void) const)&IParam::definitionName)
			.def("attrib",(const ::IString *(IParam::*)(void) const)&IParam::attrib)
			.def("arraySpecifier",(const ::IString *(IParam::*)(void) const)&IParam::arraySpecifier)
			.def("defaultValue",(::ILinkedTextIterator *(IParam::*)(void) const)&IParam::defaultValue)
			.def("briefDescription",(::IDocRoot *(IParam::*)(void) const)&IParam::briefDescription),
		class_< IParamIterator >("IParamIterator")
			.def("toFirst",(::IParam *(IParamIterator::*)(void))&IParamIterator::toFirst)
			.def("toLast",(::IParam *(IParamIterator::*)(void))&IParamIterator::toLast)
			.def("toNext",(::IParam *(IParamIterator::*)(void))&IParamIterator::toNext)
			.def("toPrev",(::IParam *(IParamIterator::*)(void))&IParamIterator::toPrev)
			.def("current",(::IParam *(IParamIterator::*)(void) const)&IParamIterator::current)
			.def("release",(void(IParamIterator::*)(void))&IParamIterator::release),
		class_< IRelatedCompound >("IRelatedCompound")
			.enum_("Protection") [
				value("Public", IRelatedCompound::Public),
				value("Protected", IRelatedCompound::Protected),
				value("Private", IRelatedCompound::Private)
			]
			.enum_("Kind") [
				value("Normal", IRelatedCompound::Normal),
				value("Virtual", IRelatedCompound::Virtual)
			]
			.def("compound",(::ICompound *(IRelatedCompound::*)(void) const)&IRelatedCompound::compound)
			.def("protection",(::IRelatedCompound::Protection(IRelatedCompound::*)(void) const)&IRelatedCompound::protection)
			.def("kind",(::IRelatedCompound::Kind(IRelatedCompound::*)(void) const)&IRelatedCompound::kind)
			.def("name",(const ::IString *(IRelatedCompound::*)(void) const)&IRelatedCompound::name),
		class_< IRelatedCompoundIterator >("IRelatedCompoundIterator")
			.def("toFirst",(::IRelatedCompound *(IRelatedCompoundIterator::*)(void))&IRelatedCompoundIterator::toFirst)
			.def("toLast",(::IRelatedCompound *(IRelatedCompoundIterator::*)(void))&IRelatedCompoundIterator::toLast)
			.def("toNext",(::IRelatedCompound *(IRelatedCompoundIterator::*)(void))&IRelatedCompoundIterator::toNext)
			.def("toPrev",(::IRelatedCompound *(IRelatedCompoundIterator::*)(void))&IRelatedCompoundIterator::toPrev)
			.def("current",(::IRelatedCompound *(IRelatedCompoundIterator::*)(void) const)&IRelatedCompoundIterator::current)
			.def("release",(void(IRelatedCompoundIterator::*)(void))&IRelatedCompoundIterator::release),
		class_< ISection >("ISection")
			.enum_("SectionKind") [
				value("Invalid", ISection::Invalid),
				value("UserDefined", ISection::UserDefined),
				value("PubTypes", ISection::PubTypes),
				value("PubFuncs", ISection::PubFuncs),
				value("PubAttribs", ISection::PubAttribs),
				value("PubSlots", ISection::PubSlots),
				value("Signals", ISection::Signals),
				value("DCOPFuncs", ISection::DCOPFuncs),
				value("Properties", ISection::Properties),
				value("Events", ISection::Events),
				value("PubStatFuncs", ISection::PubStatFuncs),
				value("PubStatAttribs", ISection::PubStatAttribs),
				value("ProTypes", ISection::ProTypes),
				value("ProFuncs", ISection::ProFuncs),
				value("ProAttribs", ISection::ProAttribs),
				value("ProSlots", ISection::ProSlots),
				value("ProStatFuncs", ISection::ProStatFuncs),
				value("ProStatAttribs", ISection::ProStatAttribs),
				value("PacTypes", ISection::PacTypes),
				value("PacFuncs", ISection::PacFuncs),
				value("PacAttribs", ISection::PacAttribs),
				value("PacStatFuncs", ISection::PacStatFuncs),
				value("PacStatAttribs", ISection::PacStatAttribs),
				value("PriTypes", ISection::PriTypes),
				value("PriFuncs", ISection::PriFuncs),
				value("PriAttribs", ISection::PriAttribs),
				value("PriSlots", ISection::PriSlots),
				value("PriStatFuncs", ISection::PriStatFuncs),
				value("PriStatAttribs", ISection::PriStatAttribs),
				value("Friend", ISection::Friend),
				value("Related", ISection::Related),
				value("Defines", ISection::Defines),
				value("Prototypes", ISection::Prototypes),
				value("Typedefs", ISection::Typedefs),
				value("Enums", ISection::Enums),
				value("Functions", ISection::Functions),
				value("Variables", ISection::Variables)
			]
			.def("kindString",(const ::IString *(ISection::*)(void) const)&ISection::kindString)
			.def("kind",(::ISection::SectionKind(ISection::*)(void) const)&ISection::kind)
			.def("description",(::IDocRoot *(ISection::*)(void) const)&ISection::description)
			.def("members",(::IMemberIterator *(ISection::*)(void) const)&ISection::members)
			.def("isStatic",(bool(ISection::*)(void) const)&ISection::isStatic)
			.def("isPublic",(bool(ISection::*)(void) const)&ISection::isPublic)
			.def("isPrivate",(bool(ISection::*)(void) const)&ISection::isPrivate)
			.def("isProtected",(bool(ISection::*)(void) const)&ISection::isProtected)
			.def("dynamicCast",&dynamicCastISection,raw(_4)),
		class_< ISectionIterator >("ISectionIterator")
			.def("toFirst",(::ISection *(ISectionIterator::*)(void))&ISectionIterator::toFirst)
			.def("toLast",(::ISection *(ISectionIterator::*)(void))&ISectionIterator::toLast)
			.def("toNext",(::ISection *(ISectionIterator::*)(void))&ISectionIterator::toNext)
			.def("toPrev",(::ISection *(ISectionIterator::*)(void))&ISectionIterator::toPrev)
			.def("current",(::ISection *(ISectionIterator::*)(void) const)&ISectionIterator::current)
			.def("release",(void(ISectionIterator::*)(void))&ISectionIterator::release),
		class_< IString >("IString")
			.def("latin1",(const char *(IString::*)(void) const)&IString::latin1)
			.def("utf8",(const char *(IString::*)(void) const)&IString::utf8)
			.def("unicodeCharAt",(unsigned short(IString::*)(int) const)&IString::unicodeCharAt)
			.def("isEmpty",(bool(IString::*)(void) const)&IString::isEmpty)
			.def("length",(int(IString::*)(void) const)&IString::length),
		class_< IStruct, ICompound >("IStruct")
			.def("nestedCompounds",(::ICompoundIterator *(IStruct::*)(void) const)&IStruct::nestedCompounds)
			.def("baseCompounds",(::IRelatedCompoundIterator *(IStruct::*)(void) const)&IStruct::baseCompounds)
			.def("derivedCompounds",(::IRelatedCompoundIterator *(IStruct::*)(void) const)&IStruct::derivedCompounds)
			.def("locationFile",(const ::IString *(IStruct::*)(void) const)&IStruct::locationFile)
			.def("locationLine",(int(IStruct::*)(void) const)&IStruct::locationLine)
			.def("locationBodyStartLine",(int(IStruct::*)(void) const)&IStruct::locationBodyStartLine)
			.def("locationBodyEndLine",(int(IStruct::*)(void) const)&IStruct::locationBodyEndLine),
		class_< IUnion, ICompound >("IUnion")
			.def("nestedCompounds",(::ICompoundIterator *(IUnion::*)(void) const)&IUnion::nestedCompounds),
		class_< IUserDefined, ISection >("IUserDefined")
			.def("header",(const ::IString *(IUserDefined::*)(void) const)&IUserDefined::header),
		def("createObjectModel",(::IDoxygen *(*)(void))&createObjectModel)
	];
	
	// Register all converters:
	registerICompoundConverters();
	registerIDocConverters();
	registerILinkedTextConverters();
	registerISectionConverters();
	return 0;
}

#ifdef __cplusplus
}
#endif

