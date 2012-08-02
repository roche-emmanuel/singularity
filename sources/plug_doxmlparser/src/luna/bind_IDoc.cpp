#include <plug_common.h>

class luna_wrapper_IDoc {
public:
	typedef Luna< IDoc > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_kind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_kind(lua_State *L) {
		if (!_lg_typecheck_kind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in kind function, expected prototype:\nkind()");
		}


		IDoc* self=(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call kind(...)");
		}
		IDoc::Kind lret = self->kind();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

IDoc* LunaTraits< IDoc >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDoc >::_bind_dtor(IDoc* obj) {
	delete obj;
}

const char LunaTraits< IDoc >::className[] = "IDoc";
const char LunaTraits< IDoc >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDoc >::parents[] = {0};
const int LunaTraits< IDoc >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDoc >::methods[] = {
	{"kind", &luna_wrapper_IDoc::_bind_kind},
	{0,0}
};

luna_RegEnumType LunaTraits< IDoc >::enumValues[] = {
	{"Invalid", IDoc::Invalid},
	{"Para", IDoc::Para},
	{"Text", IDoc::Text},
	{"MarkupModifier", IDoc::MarkupModifier},
	{"ItemizedList", IDoc::ItemizedList},
	{"OrderedList", IDoc::OrderedList},
	{"ListItem", IDoc::ListItem},
	{"ParameterList", IDoc::ParameterList},
	{"Parameter", IDoc::Parameter},
	{"SimpleSect", IDoc::SimpleSect},
	{"Title", IDoc::Title},
	{"Ref", IDoc::Ref},
	{"VariableList", IDoc::VariableList},
	{"VariableListEntry", IDoc::VariableListEntry},
	{"HRuler", IDoc::HRuler},
	{"LineBreak", IDoc::LineBreak},
	{"ULink", IDoc::ULink},
	{"EMail", IDoc::EMail},
	{"Link", IDoc::Link},
	{"ProgramListing", IDoc::ProgramListing},
	{"CodeLine", IDoc::CodeLine},
	{"Highlight", IDoc::Highlight},
	{"Formula", IDoc::Formula},
	{"Image", IDoc::Image},
	{"DotFile", IDoc::DotFile},
	{"IndexEntry", IDoc::IndexEntry},
	{"Table", IDoc::Table},
	{"Row", IDoc::Row},
	{"Entry", IDoc::Entry},
	{"Section", IDoc::Section},
	{"Verbatim", IDoc::Verbatim},
	{"Copy", IDoc::Copy},
	{"TocList", IDoc::TocList},
	{"TocItem", IDoc::TocItem},
	{"Anchor", IDoc::Anchor},
	{"Symbol", IDoc::Symbol},
	{"Internal", IDoc::Internal},
	{"Root", IDoc::Root},
	{"ParameterItem", IDoc::ParameterItem},
	{0,0}
};


