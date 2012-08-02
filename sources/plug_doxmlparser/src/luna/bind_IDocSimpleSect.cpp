#include <plug_common.h>

class luna_wrapper_IDocSimpleSect {
public:
	typedef Luna< IDocSimpleSect > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_type(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_typeString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_title(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_description(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_type(lua_State *L) {
		if (!_lg_typecheck_type(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in type function, expected prototype:\ntype()");
		}


		IDocSimpleSect* self=dynamic_cast< IDocSimpleSect* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call type(...)");
		}
		IDocSimpleSect::Types lret = self->type();
		lua_pushnumber(L,lret);

		return 1;
	}

	static int _bind_typeString(lua_State *L) {
		if (!_lg_typecheck_typeString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in typeString function, expected prototype:\ntypeString()");
		}


		IDocSimpleSect* self=dynamic_cast< IDocSimpleSect* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call typeString(...)");
		}
		const IString * lret = self->typeString();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_title(lua_State *L) {
		if (!_lg_typecheck_title(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in title function, expected prototype:\ntitle()");
		}


		IDocSimpleSect* self=dynamic_cast< IDocSimpleSect* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call title(...)");
		}
		IDocTitle * lret = self->title();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocTitle >::push(L,lret,false);

		return 1;
	}

	static int _bind_description(lua_State *L) {
		if (!_lg_typecheck_description(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in description function, expected prototype:\ndescription()");
		}


		IDocSimpleSect* self=dynamic_cast< IDocSimpleSect* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call description(...)");
		}
		IDocPara * lret = self->description();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocPara >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocSimpleSect* LunaTraits< IDocSimpleSect >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDocSimpleSect >::_bind_dtor(IDocSimpleSect* obj) {
	delete obj;
}

const char LunaTraits< IDocSimpleSect >::className[] = "IDocSimpleSect";
const char LunaTraits< IDocSimpleSect >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocSimpleSect >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocSimpleSect >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocSimpleSect >::methods[] = {
	{"type", &luna_wrapper_IDocSimpleSect::_bind_type},
	{"typeString", &luna_wrapper_IDocSimpleSect::_bind_typeString},
	{"title", &luna_wrapper_IDocSimpleSect::_bind_title},
	{"description", &luna_wrapper_IDocSimpleSect::_bind_description},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocSimpleSect >::enumValues[] = {
	{"Invalid", IDocSimpleSect::Invalid},
	{"See", IDocSimpleSect::See},
	{"Return", IDocSimpleSect::Return},
	{"Author", IDocSimpleSect::Author},
	{"Version", IDocSimpleSect::Version},
	{"Since", IDocSimpleSect::Since},
	{"Date", IDocSimpleSect::Date},
	{"Bug", IDocSimpleSect::Bug},
	{"Note", IDocSimpleSect::Note},
	{"Warning", IDocSimpleSect::Warning},
	{"Par", IDocSimpleSect::Par},
	{"Deprecated", IDocSimpleSect::Deprecated},
	{"Pre", IDocSimpleSect::Pre},
	{"Post", IDocSimpleSect::Post},
	{"Invar", IDocSimpleSect::Invar},
	{"Remark", IDocSimpleSect::Remark},
	{"Attention", IDocSimpleSect::Attention},
	{"Todo", IDocSimpleSect::Todo},
	{"Test", IDocSimpleSect::Test},
	{"RCS", IDocSimpleSect::RCS},
	{"EnumValues", IDocSimpleSect::EnumValues},
	{"Examples", IDocSimpleSect::Examples},
	{0,0}
};


