#include <plug_common.h>

class luna_wrapper_ICompound {
public:
	typedef Luna< ICompound > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_name(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_id(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_kind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_kindString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_sections(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_briefDescription(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_detailedDescription(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_memberById(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_memberByName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_release(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_name(lua_State *L) {
		if (!_lg_typecheck_name(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in name function, expected prototype:\nname()");
		}


		ICompound* self=(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call name(...)");
		}
		const IString * lret = self->name();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_id(lua_State *L) {
		if (!_lg_typecheck_id(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in id function, expected prototype:\nid()");
		}


		ICompound* self=(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call id(...)");
		}
		const IString * lret = self->id();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_kind(lua_State *L) {
		if (!_lg_typecheck_kind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in kind function, expected prototype:\nkind()");
		}


		ICompound* self=(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call kind(...)");
		}
		ICompound::CompoundKind lret = self->kind();
		lua_pushnumber(L,lret);

		return 1;
	}

	static int _bind_kindString(lua_State *L) {
		if (!_lg_typecheck_kindString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in kindString function, expected prototype:\nkindString()");
		}


		ICompound* self=(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call kindString(...)");
		}
		const IString * lret = self->kindString();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_sections(lua_State *L) {
		if (!_lg_typecheck_sections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sections function, expected prototype:\nsections()");
		}


		ICompound* self=(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sections(...)");
		}
		ISectionIterator * lret = self->sections();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ISectionIterator >::push(L,lret,false);

		return 1;
	}

	static int _bind_briefDescription(lua_State *L) {
		if (!_lg_typecheck_briefDescription(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in briefDescription function, expected prototype:\nbriefDescription()");
		}


		ICompound* self=(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call briefDescription(...)");
		}
		IDocRoot * lret = self->briefDescription();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocRoot >::push(L,lret,false);

		return 1;
	}

	static int _bind_detailedDescription(lua_State *L) {
		if (!_lg_typecheck_detailedDescription(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in detailedDescription function, expected prototype:\ndetailedDescription()");
		}


		ICompound* self=(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call detailedDescription(...)");
		}
		IDocRoot * lret = self->detailedDescription();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocRoot >::push(L,lret,false);

		return 1;
	}

	static int _bind_memberById(lua_State *L) {
		if (!_lg_typecheck_memberById(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in memberById function, expected prototype:\nmemberById(const char *)");
		}

		const char * id=(const char *)lua_tostring(L,2);

		ICompound* self=(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call memberById(...)");
		}
		IMember * lret = self->memberById(id);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IMember >::push(L,lret,false);

		return 1;
	}

	static int _bind_memberByName(lua_State *L) {
		if (!_lg_typecheck_memberByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in memberByName function, expected prototype:\nmemberByName(const char *)");
		}

		const char * name=(const char *)lua_tostring(L,2);

		ICompound* self=(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call memberByName(...)");
		}
		IMemberIterator * lret = self->memberByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IMemberIterator >::push(L,lret,false);

		return 1;
	}

	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in release function, expected prototype:\nrelease()");
		}


		ICompound* self=(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call release(...)");
		}
		self->release();

		return 0;
	}


	// Operator binds:

};

ICompound* LunaTraits< ICompound >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< ICompound >::_bind_dtor(ICompound* obj) {
	delete obj;
}

const char LunaTraits< ICompound >::className[] = "ICompound";
const char LunaTraits< ICompound >::moduleName[] = "doxmlparser";
const char* LunaTraits< ICompound >::parents[] = {0};
const int LunaTraits< ICompound >::uniqueIDs[] = {27352831,0};

luna_RegType LunaTraits< ICompound >::methods[] = {
	{"name", &luna_wrapper_ICompound::_bind_name},
	{"id", &luna_wrapper_ICompound::_bind_id},
	{"kind", &luna_wrapper_ICompound::_bind_kind},
	{"kindString", &luna_wrapper_ICompound::_bind_kindString},
	{"sections", &luna_wrapper_ICompound::_bind_sections},
	{"briefDescription", &luna_wrapper_ICompound::_bind_briefDescription},
	{"detailedDescription", &luna_wrapper_ICompound::_bind_detailedDescription},
	{"memberById", &luna_wrapper_ICompound::_bind_memberById},
	{"memberByName", &luna_wrapper_ICompound::_bind_memberByName},
	{"release", &luna_wrapper_ICompound::_bind_release},
	{0,0}
};

luna_RegEnumType LunaTraits< ICompound >::enumValues[] = {
	{"Invalid", ICompound::Invalid},
	{"Class", ICompound::Class},
	{"Struct", ICompound::Struct},
	{"Union", ICompound::Union},
	{"Interface", ICompound::Interface},
	{"Protocol", ICompound::Protocol},
	{"Category", ICompound::Category},
	{"Exception", ICompound::Exception},
	{"File", ICompound::File},
	{"Namespace", ICompound::Namespace},
	{"Group", ICompound::Group},
	{"Page", ICompound::Page},
	{"Example", ICompound::Example},
	{"Dir", ICompound::Dir},
	{0,0}
};


