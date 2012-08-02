#include <plug_common.h>

class luna_wrapper_ISection {
public:
	typedef Luna< ISection > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_kindString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_kind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_description(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_members(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isStatic(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isPublic(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isPrivate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isProtected(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_kindString(lua_State *L) {
		if (!_lg_typecheck_kindString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in kindString function, expected prototype:\nkindString()");
		}


		ISection* self=(Luna< ISection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call kindString(...)");
		}
		const IString * lret = self->kindString();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_kind(lua_State *L) {
		if (!_lg_typecheck_kind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in kind function, expected prototype:\nkind()");
		}


		ISection* self=(Luna< ISection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call kind(...)");
		}
		ISection::SectionKind lret = self->kind();
		lua_pushnumber(L,lret);

		return 1;
	}

	static int _bind_description(lua_State *L) {
		if (!_lg_typecheck_description(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in description function, expected prototype:\ndescription()");
		}


		ISection* self=(Luna< ISection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call description(...)");
		}
		IDocRoot * lret = self->description();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocRoot >::push(L,lret,false);

		return 1;
	}

	static int _bind_members(lua_State *L) {
		if (!_lg_typecheck_members(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in members function, expected prototype:\nmembers()");
		}


		ISection* self=(Luna< ISection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call members(...)");
		}
		IMemberIterator * lret = self->members();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IMemberIterator >::push(L,lret,false);

		return 1;
	}

	static int _bind_isStatic(lua_State *L) {
		if (!_lg_typecheck_isStatic(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in isStatic function, expected prototype:\nisStatic()");
		}


		ISection* self=(Luna< ISection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call isStatic(...)");
		}
		bool lret = self->isStatic();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	static int _bind_isPublic(lua_State *L) {
		if (!_lg_typecheck_isPublic(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in isPublic function, expected prototype:\nisPublic()");
		}


		ISection* self=(Luna< ISection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call isPublic(...)");
		}
		bool lret = self->isPublic();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	static int _bind_isPrivate(lua_State *L) {
		if (!_lg_typecheck_isPrivate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in isPrivate function, expected prototype:\nisPrivate()");
		}


		ISection* self=(Luna< ISection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call isPrivate(...)");
		}
		bool lret = self->isPrivate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	static int _bind_isProtected(lua_State *L) {
		if (!_lg_typecheck_isProtected(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in isProtected function, expected prototype:\nisProtected()");
		}


		ISection* self=(Luna< ISection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call isProtected(...)");
		}
		bool lret = self->isProtected();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

ISection* LunaTraits< ISection >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< ISection >::_bind_dtor(ISection* obj) {
	delete obj;
}

const char LunaTraits< ISection >::className[] = "ISection";
const char LunaTraits< ISection >::moduleName[] = "doxmlparser";
const char* LunaTraits< ISection >::parents[] = {0};
const int LunaTraits< ISection >::uniqueIDs[] = {70042881,0};

luna_RegType LunaTraits< ISection >::methods[] = {
	{"kindString", &luna_wrapper_ISection::_bind_kindString},
	{"kind", &luna_wrapper_ISection::_bind_kind},
	{"description", &luna_wrapper_ISection::_bind_description},
	{"members", &luna_wrapper_ISection::_bind_members},
	{"isStatic", &luna_wrapper_ISection::_bind_isStatic},
	{"isPublic", &luna_wrapper_ISection::_bind_isPublic},
	{"isPrivate", &luna_wrapper_ISection::_bind_isPrivate},
	{"isProtected", &luna_wrapper_ISection::_bind_isProtected},
	{0,0}
};

luna_RegEnumType LunaTraits< ISection >::enumValues[] = {
	{"Invalid", ISection::Invalid},
	{"UserDefined", ISection::UserDefined},
	{"PubTypes", ISection::PubTypes},
	{"PubFuncs", ISection::PubFuncs},
	{"PubAttribs", ISection::PubAttribs},
	{"PubSlots", ISection::PubSlots},
	{"Signals", ISection::Signals},
	{"DCOPFuncs", ISection::DCOPFuncs},
	{"Properties", ISection::Properties},
	{"Events", ISection::Events},
	{"PubStatFuncs", ISection::PubStatFuncs},
	{"PubStatAttribs", ISection::PubStatAttribs},
	{"ProTypes", ISection::ProTypes},
	{"ProFuncs", ISection::ProFuncs},
	{"ProAttribs", ISection::ProAttribs},
	{"ProSlots", ISection::ProSlots},
	{"ProStatFuncs", ISection::ProStatFuncs},
	{"ProStatAttribs", ISection::ProStatAttribs},
	{"PacTypes", ISection::PacTypes},
	{"PacFuncs", ISection::PacFuncs},
	{"PacAttribs", ISection::PacAttribs},
	{"PacStatFuncs", ISection::PacStatFuncs},
	{"PacStatAttribs", ISection::PacStatAttribs},
	{"PriTypes", ISection::PriTypes},
	{"PriFuncs", ISection::PriFuncs},
	{"PriAttribs", ISection::PriAttribs},
	{"PriSlots", ISection::PriSlots},
	{"PriStatFuncs", ISection::PriStatFuncs},
	{"PriStatAttribs", ISection::PriStatAttribs},
	{"Friend", ISection::Friend},
	{"Related", ISection::Related},
	{"Defines", ISection::Defines},
	{"Prototypes", ISection::Prototypes},
	{"Typedefs", ISection::Typedefs},
	{"Enums", ISection::Enums},
	{"Functions", ISection::Functions},
	{"Variables", ISection::Variables},
	{0,0}
};


