#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

void register_enums(lua_State* L) {
	lua_newtable(L); // enum NodeRelation

	lua_pushnumber(L,IChildNode::PublicInheritance); lua_setfield(L,-2,"PublicInheritance");
	lua_pushnumber(L,IChildNode::ProtectedInheritance); lua_setfield(L,-2,"ProtectedInheritance");
	lua_pushnumber(L,IChildNode::PrivateInheritance); lua_setfield(L,-2,"PrivateInheritance");
	lua_pushnumber(L,IChildNode::Usage); lua_setfield(L,-2,"Usage");
	lua_pushnumber(L,IChildNode::TemplateInstance); lua_setfield(L,-2,"TemplateInstance");

	lua_setfield(L,-2,"NodeRelation");

	lua_newtable(L); // enum CompoundKind

	lua_pushnumber(L,ICompound::Invalid); lua_setfield(L,-2,"Invalid");
	lua_pushnumber(L,ICompound::Class); lua_setfield(L,-2,"Class");
	lua_pushnumber(L,ICompound::Struct); lua_setfield(L,-2,"Struct");
	lua_pushnumber(L,ICompound::Union); lua_setfield(L,-2,"Union");
	lua_pushnumber(L,ICompound::Interface); lua_setfield(L,-2,"Interface");
	lua_pushnumber(L,ICompound::Protocol); lua_setfield(L,-2,"Protocol");
	lua_pushnumber(L,ICompound::Category); lua_setfield(L,-2,"Category");
	lua_pushnumber(L,ICompound::Exception); lua_setfield(L,-2,"Exception");
	lua_pushnumber(L,ICompound::File); lua_setfield(L,-2,"File");
	lua_pushnumber(L,ICompound::Namespace); lua_setfield(L,-2,"Namespace");
	lua_pushnumber(L,ICompound::Group); lua_setfield(L,-2,"Group");
	lua_pushnumber(L,ICompound::Page); lua_setfield(L,-2,"Page");
	lua_pushnumber(L,ICompound::Example); lua_setfield(L,-2,"Example");
	lua_pushnumber(L,ICompound::Dir); lua_setfield(L,-2,"Dir");

	lua_setfield(L,-2,"CompoundKind");

	lua_newtable(L); // enum Kind

	lua_pushnumber(L,IDoc::Invalid); lua_setfield(L,-2,"Invalid");
	lua_pushnumber(L,IDoc::Para); lua_setfield(L,-2,"Para");
	lua_pushnumber(L,IDoc::Text); lua_setfield(L,-2,"Text");
	lua_pushnumber(L,IDoc::MarkupModifier); lua_setfield(L,-2,"MarkupModifier");
	lua_pushnumber(L,IDoc::ItemizedList); lua_setfield(L,-2,"ItemizedList");
	lua_pushnumber(L,IDoc::OrderedList); lua_setfield(L,-2,"OrderedList");
	lua_pushnumber(L,IDoc::ListItem); lua_setfield(L,-2,"ListItem");
	lua_pushnumber(L,IDoc::ParameterList); lua_setfield(L,-2,"ParameterList");
	lua_pushnumber(L,IDoc::Parameter); lua_setfield(L,-2,"Parameter");
	lua_pushnumber(L,IDoc::SimpleSect); lua_setfield(L,-2,"SimpleSect");
	lua_pushnumber(L,IDoc::Title); lua_setfield(L,-2,"Title");
	lua_pushnumber(L,IDoc::Ref); lua_setfield(L,-2,"Ref");
	lua_pushnumber(L,IDoc::VariableList); lua_setfield(L,-2,"VariableList");
	lua_pushnumber(L,IDoc::VariableListEntry); lua_setfield(L,-2,"VariableListEntry");
	lua_pushnumber(L,IDoc::HRuler); lua_setfield(L,-2,"HRuler");
	lua_pushnumber(L,IDoc::LineBreak); lua_setfield(L,-2,"LineBreak");
	lua_pushnumber(L,IDoc::ULink); lua_setfield(L,-2,"ULink");
	lua_pushnumber(L,IDoc::EMail); lua_setfield(L,-2,"EMail");
	lua_pushnumber(L,IDoc::Link); lua_setfield(L,-2,"Link");
	lua_pushnumber(L,IDoc::ProgramListing); lua_setfield(L,-2,"ProgramListing");
	lua_pushnumber(L,IDoc::CodeLine); lua_setfield(L,-2,"CodeLine");
	lua_pushnumber(L,IDoc::Highlight); lua_setfield(L,-2,"Highlight");
	lua_pushnumber(L,IDoc::Formula); lua_setfield(L,-2,"Formula");
	lua_pushnumber(L,IDoc::Image); lua_setfield(L,-2,"Image");
	lua_pushnumber(L,IDoc::DotFile); lua_setfield(L,-2,"DotFile");
	lua_pushnumber(L,IDoc::IndexEntry); lua_setfield(L,-2,"IndexEntry");
	lua_pushnumber(L,IDoc::Table); lua_setfield(L,-2,"Table");
	lua_pushnumber(L,IDoc::Row); lua_setfield(L,-2,"Row");
	lua_pushnumber(L,IDoc::Entry); lua_setfield(L,-2,"Entry");
	lua_pushnumber(L,IDoc::Section); lua_setfield(L,-2,"Section");
	lua_pushnumber(L,IDoc::Verbatim); lua_setfield(L,-2,"Verbatim");
	lua_pushnumber(L,IDoc::Copy); lua_setfield(L,-2,"Copy");
	lua_pushnumber(L,IDoc::TocList); lua_setfield(L,-2,"TocList");
	lua_pushnumber(L,IDoc::TocItem); lua_setfield(L,-2,"TocItem");
	lua_pushnumber(L,IDoc::Anchor); lua_setfield(L,-2,"Anchor");
	lua_pushnumber(L,IDoc::Symbol); lua_setfield(L,-2,"Symbol");
	lua_pushnumber(L,IDoc::Internal); lua_setfield(L,-2,"Internal");
	lua_pushnumber(L,IDoc::Root); lua_setfield(L,-2,"Root");
	lua_pushnumber(L,IDoc::ParameterItem); lua_setfield(L,-2,"ParameterItem");

	lua_setfield(L,-2,"Kind");

	lua_newtable(L); // enum HighlightKind

	lua_pushnumber(L,IDocHighlight::Invalid); lua_setfield(L,-2,"Invalid");
	lua_pushnumber(L,IDocHighlight::Comment); lua_setfield(L,-2,"Comment");
	lua_pushnumber(L,IDocHighlight::Keyword); lua_setfield(L,-2,"Keyword");
	lua_pushnumber(L,IDocHighlight::KeywordType); lua_setfield(L,-2,"KeywordType");
	lua_pushnumber(L,IDocHighlight::KeywordFlow); lua_setfield(L,-2,"KeywordFlow");
	lua_pushnumber(L,IDocHighlight::CharLiteral); lua_setfield(L,-2,"CharLiteral");
	lua_pushnumber(L,IDocHighlight::StringLiteral); lua_setfield(L,-2,"StringLiteral");
	lua_pushnumber(L,IDocHighlight::Preprocessor); lua_setfield(L,-2,"Preprocessor");

	lua_setfield(L,-2,"HighlightKind");

	lua_newtable(L); // enum Markup

	lua_pushnumber(L,IDocMarkup::Normal); lua_setfield(L,-2,"Normal");
	lua_pushnumber(L,IDocMarkup::Bold); lua_setfield(L,-2,"Bold");
	lua_pushnumber(L,IDocMarkup::Emphasis); lua_setfield(L,-2,"Emphasis");
	lua_pushnumber(L,IDocMarkup::ComputerOutput); lua_setfield(L,-2,"ComputerOutput");
	lua_pushnumber(L,IDocMarkup::Subscript); lua_setfield(L,-2,"Subscript");
	lua_pushnumber(L,IDocMarkup::Superscript); lua_setfield(L,-2,"Superscript");
	lua_pushnumber(L,IDocMarkup::SmallFont); lua_setfield(L,-2,"SmallFont");
	lua_pushnumber(L,IDocMarkup::Center); lua_setfield(L,-2,"Center");
	lua_pushnumber(L,IDocMarkup::Preformatted); lua_setfield(L,-2,"Preformatted");
	lua_pushnumber(L,IDocMarkup::Heading); lua_setfield(L,-2,"Heading");

	lua_setfield(L,-2,"Markup");

	lua_newtable(L); // enum Types

	lua_pushnumber(L,IDocParameterList::Param); lua_setfield(L,-2,"Param");
	lua_pushnumber(L,IDocParameterList::RetVal); lua_setfield(L,-2,"RetVal");
	lua_pushnumber(L,IDocParameterList::Exception); lua_setfield(L,-2,"Exception");

	lua_setfield(L,-2,"Types");

	lua_newtable(L); // enum TargetKind

	lua_pushnumber(L,IDocRef::Member); lua_setfield(L,-2,"Member");
	lua_pushnumber(L,IDocRef::Compound); lua_setfield(L,-2,"Compound");

	lua_setfield(L,-2,"TargetKind");

	lua_newtable(L); // enum Types

	lua_pushnumber(L,IDocSimpleSect::Invalid); lua_setfield(L,-2,"Invalid");
	lua_pushnumber(L,IDocSimpleSect::See); lua_setfield(L,-2,"See");
	lua_pushnumber(L,IDocSimpleSect::Return); lua_setfield(L,-2,"Return");
	lua_pushnumber(L,IDocSimpleSect::Author); lua_setfield(L,-2,"Author");
	lua_pushnumber(L,IDocSimpleSect::Version); lua_setfield(L,-2,"Version");
	lua_pushnumber(L,IDocSimpleSect::Since); lua_setfield(L,-2,"Since");
	lua_pushnumber(L,IDocSimpleSect::Date); lua_setfield(L,-2,"Date");
	lua_pushnumber(L,IDocSimpleSect::Bug); lua_setfield(L,-2,"Bug");
	lua_pushnumber(L,IDocSimpleSect::Note); lua_setfield(L,-2,"Note");
	lua_pushnumber(L,IDocSimpleSect::Warning); lua_setfield(L,-2,"Warning");
	lua_pushnumber(L,IDocSimpleSect::Par); lua_setfield(L,-2,"Par");
	lua_pushnumber(L,IDocSimpleSect::Deprecated); lua_setfield(L,-2,"Deprecated");
	lua_pushnumber(L,IDocSimpleSect::Pre); lua_setfield(L,-2,"Pre");
	lua_pushnumber(L,IDocSimpleSect::Post); lua_setfield(L,-2,"Post");
	lua_pushnumber(L,IDocSimpleSect::Invar); lua_setfield(L,-2,"Invar");
	lua_pushnumber(L,IDocSimpleSect::Remark); lua_setfield(L,-2,"Remark");
	lua_pushnumber(L,IDocSimpleSect::Attention); lua_setfield(L,-2,"Attention");
	lua_pushnumber(L,IDocSimpleSect::Todo); lua_setfield(L,-2,"Todo");
	lua_pushnumber(L,IDocSimpleSect::Test); lua_setfield(L,-2,"Test");
	lua_pushnumber(L,IDocSimpleSect::RCS); lua_setfield(L,-2,"RCS");
	lua_pushnumber(L,IDocSimpleSect::EnumValues); lua_setfield(L,-2,"EnumValues");
	lua_pushnumber(L,IDocSimpleSect::Examples); lua_setfield(L,-2,"Examples");

	lua_setfield(L,-2,"Types");

	lua_newtable(L); // enum Types

	lua_pushnumber(L,IDocSymbol::Invalid); lua_setfield(L,-2,"Invalid");
	lua_pushnumber(L,IDocSymbol::Umlaut); lua_setfield(L,-2,"Umlaut");
	lua_pushnumber(L,IDocSymbol::Acute); lua_setfield(L,-2,"Acute");
	lua_pushnumber(L,IDocSymbol::Grave); lua_setfield(L,-2,"Grave");
	lua_pushnumber(L,IDocSymbol::Circ); lua_setfield(L,-2,"Circ");
	lua_pushnumber(L,IDocSymbol::Tilde); lua_setfield(L,-2,"Tilde");
	lua_pushnumber(L,IDocSymbol::Szlig); lua_setfield(L,-2,"Szlig");
	lua_pushnumber(L,IDocSymbol::Cedil); lua_setfield(L,-2,"Cedil");
	lua_pushnumber(L,IDocSymbol::Ring); lua_setfield(L,-2,"Ring");
	lua_pushnumber(L,IDocSymbol::Nbsp); lua_setfield(L,-2,"Nbsp");
	lua_pushnumber(L,IDocSymbol::Copy); lua_setfield(L,-2,"Copy");

	lua_setfield(L,-2,"Types");

	lua_newtable(L); // enum Types

	lua_pushnumber(L,IDocVerbatim::Invalid); lua_setfield(L,-2,"Invalid");
	lua_pushnumber(L,IDocVerbatim::HtmlOnly); lua_setfield(L,-2,"HtmlOnly");
	lua_pushnumber(L,IDocVerbatim::LatexOnly); lua_setfield(L,-2,"LatexOnly");
	lua_pushnumber(L,IDocVerbatim::Verbatim); lua_setfield(L,-2,"Verbatim");

	lua_setfield(L,-2,"Types");

	lua_newtable(L); // enum Kind

	lua_pushnumber(L,ILinkedText::Kind_Text); lua_setfield(L,-2,"Kind_Text");
	lua_pushnumber(L,ILinkedText::Kind_Ref); lua_setfield(L,-2,"Kind_Ref");

	lua_setfield(L,-2,"Kind");

	lua_newtable(L); // enum TargetKind

	lua_pushnumber(L,ILT_Ref::Member); lua_setfield(L,-2,"Member");
	lua_pushnumber(L,ILT_Ref::Compound); lua_setfield(L,-2,"Compound");

	lua_setfield(L,-2,"TargetKind");

	lua_newtable(L); // enum MemberKind

	lua_pushnumber(L,IMember::Invalid); lua_setfield(L,-2,"Invalid");
	lua_pushnumber(L,IMember::Define); lua_setfield(L,-2,"Define");
	lua_pushnumber(L,IMember::Property); lua_setfield(L,-2,"Property");
	lua_pushnumber(L,IMember::Variable); lua_setfield(L,-2,"Variable");
	lua_pushnumber(L,IMember::Typedef); lua_setfield(L,-2,"Typedef");
	lua_pushnumber(L,IMember::Enum); lua_setfield(L,-2,"Enum");
	lua_pushnumber(L,IMember::Function); lua_setfield(L,-2,"Function");
	lua_pushnumber(L,IMember::Signal); lua_setfield(L,-2,"Signal");
	lua_pushnumber(L,IMember::Prototype); lua_setfield(L,-2,"Prototype");
	lua_pushnumber(L,IMember::Friend); lua_setfield(L,-2,"Friend");
	lua_pushnumber(L,IMember::DCOP); lua_setfield(L,-2,"DCOP");
	lua_pushnumber(L,IMember::Slot); lua_setfield(L,-2,"Slot");
	lua_pushnumber(L,IMember::EnumValue); lua_setfield(L,-2,"EnumValue");

	lua_setfield(L,-2,"MemberKind");

	lua_newtable(L); // enum Protection

	lua_pushnumber(L,IRelatedCompound::Public); lua_setfield(L,-2,"Public");
	lua_pushnumber(L,IRelatedCompound::Protected); lua_setfield(L,-2,"Protected");
	lua_pushnumber(L,IRelatedCompound::Private); lua_setfield(L,-2,"Private");

	lua_setfield(L,-2,"Protection");

	lua_newtable(L); // enum Kind

	lua_pushnumber(L,IRelatedCompound::Normal); lua_setfield(L,-2,"Normal");
	lua_pushnumber(L,IRelatedCompound::Virtual); lua_setfield(L,-2,"Virtual");

	lua_setfield(L,-2,"Kind");

	lua_newtable(L); // enum SectionKind

	lua_pushnumber(L,ISection::Invalid); lua_setfield(L,-2,"Invalid");
	lua_pushnumber(L,ISection::UserDefined); lua_setfield(L,-2,"UserDefined");
	lua_pushnumber(L,ISection::PubTypes); lua_setfield(L,-2,"PubTypes");
	lua_pushnumber(L,ISection::PubFuncs); lua_setfield(L,-2,"PubFuncs");
	lua_pushnumber(L,ISection::PubAttribs); lua_setfield(L,-2,"PubAttribs");
	lua_pushnumber(L,ISection::PubSlots); lua_setfield(L,-2,"PubSlots");
	lua_pushnumber(L,ISection::Signals); lua_setfield(L,-2,"Signals");
	lua_pushnumber(L,ISection::DCOPFuncs); lua_setfield(L,-2,"DCOPFuncs");
	lua_pushnumber(L,ISection::Properties); lua_setfield(L,-2,"Properties");
	lua_pushnumber(L,ISection::Events); lua_setfield(L,-2,"Events");
	lua_pushnumber(L,ISection::PubStatFuncs); lua_setfield(L,-2,"PubStatFuncs");
	lua_pushnumber(L,ISection::PubStatAttribs); lua_setfield(L,-2,"PubStatAttribs");
	lua_pushnumber(L,ISection::ProTypes); lua_setfield(L,-2,"ProTypes");
	lua_pushnumber(L,ISection::ProFuncs); lua_setfield(L,-2,"ProFuncs");
	lua_pushnumber(L,ISection::ProAttribs); lua_setfield(L,-2,"ProAttribs");
	lua_pushnumber(L,ISection::ProSlots); lua_setfield(L,-2,"ProSlots");
	lua_pushnumber(L,ISection::ProStatFuncs); lua_setfield(L,-2,"ProStatFuncs");
	lua_pushnumber(L,ISection::ProStatAttribs); lua_setfield(L,-2,"ProStatAttribs");
	lua_pushnumber(L,ISection::PacTypes); lua_setfield(L,-2,"PacTypes");
	lua_pushnumber(L,ISection::PacFuncs); lua_setfield(L,-2,"PacFuncs");
	lua_pushnumber(L,ISection::PacAttribs); lua_setfield(L,-2,"PacAttribs");
	lua_pushnumber(L,ISection::PacStatFuncs); lua_setfield(L,-2,"PacStatFuncs");
	lua_pushnumber(L,ISection::PacStatAttribs); lua_setfield(L,-2,"PacStatAttribs");
	lua_pushnumber(L,ISection::PriTypes); lua_setfield(L,-2,"PriTypes");
	lua_pushnumber(L,ISection::PriFuncs); lua_setfield(L,-2,"PriFuncs");
	lua_pushnumber(L,ISection::PriAttribs); lua_setfield(L,-2,"PriAttribs");
	lua_pushnumber(L,ISection::PriSlots); lua_setfield(L,-2,"PriSlots");
	lua_pushnumber(L,ISection::PriStatFuncs); lua_setfield(L,-2,"PriStatFuncs");
	lua_pushnumber(L,ISection::PriStatAttribs); lua_setfield(L,-2,"PriStatAttribs");
	lua_pushnumber(L,ISection::Friend); lua_setfield(L,-2,"Friend");
	lua_pushnumber(L,ISection::Related); lua_setfield(L,-2,"Related");
	lua_pushnumber(L,ISection::Defines); lua_setfield(L,-2,"Defines");
	lua_pushnumber(L,ISection::Prototypes); lua_setfield(L,-2,"Prototypes");
	lua_pushnumber(L,ISection::Typedefs); lua_setfield(L,-2,"Typedefs");
	lua_pushnumber(L,ISection::Enums); lua_setfield(L,-2,"Enums");
	lua_pushnumber(L,ISection::Functions); lua_setfield(L,-2,"Functions");
	lua_pushnumber(L,ISection::Variables); lua_setfield(L,-2,"Variables");

	lua_setfield(L,-2,"SectionKind");

}

#ifdef __cplusplus
}
#endif

