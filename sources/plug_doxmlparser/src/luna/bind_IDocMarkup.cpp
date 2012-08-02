#include <plug_common.h>

class luna_wrapper_IDocMarkup {
public:
	typedef Luna< IDocMarkup > luna_t;

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

IDocMarkup* LunaTraits< IDocMarkup >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDocMarkup >::_bind_dtor(IDocMarkup* obj) {
	delete obj;
}

const char LunaTraits< IDocMarkup >::className[] = "IDocMarkup";
const char LunaTraits< IDocMarkup >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocMarkup >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocMarkup >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocMarkup >::methods[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IDocMarkup >::enumValues[] = {
	{"Normal", IDocMarkup::Normal},
	{"Bold", IDocMarkup::Bold},
	{"Emphasis", IDocMarkup::Emphasis},
	{"ComputerOutput", IDocMarkup::ComputerOutput},
	{"Subscript", IDocMarkup::Subscript},
	{"Superscript", IDocMarkup::Superscript},
	{"SmallFont", IDocMarkup::SmallFont},
	{"Center", IDocMarkup::Center},
	{"Preformatted", IDocMarkup::Preformatted},
	{"Heading", IDocMarkup::Heading},
	{0,0}
};


