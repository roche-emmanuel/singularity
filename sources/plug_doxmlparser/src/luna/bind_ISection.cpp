#include <plug_common.h>

#include <luna/wrappers/wrapper_ISection.h>

class luna_wrapper_ISection {
public:
	typedef Luna< ISection > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		ISection* self=(Luna< ISection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ISection,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70042881) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ISection*)");
		}

		ISection* rhs =(Luna< ISection >::check(L,2));
		ISection* self=(Luna< ISection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		ISection* self= (ISection*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ISection >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70042881) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< ISection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ISection* self=(Luna< ISection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ISection");
		
		return luna_dynamicCast(L,converters,"ISection",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


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

	// Constructor binds:
	// ISection::ISection(lua_Table * data)
	static ISection* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in ISection::ISection(lua_Table * data) function, expected prototype:\nISection::ISection(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_ISection(L,NULL);
	}


	// Function binds:
	// const IString * ISection::kindString() const
	static int _bind_kindString(lua_State *L) {
		if (!_lg_typecheck_kindString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const IString * ISection::kindString() const function, expected prototype:\nconst IString * ISection::kindString() const\nClass arguments details:\n");
		}


		ISection* self=(Luna< ISection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const IString * ISection::kindString() const. Got : '%s'",typeid(Luna< ISection >::check(L,1)).name());
		}
		const IString * lret = self->kindString();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// ISection::SectionKind ISection::kind() const
	static int _bind_kind(lua_State *L) {
		if (!_lg_typecheck_kind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in ISection::SectionKind ISection::kind() const function, expected prototype:\nISection::SectionKind ISection::kind() const\nClass arguments details:\n");
		}


		ISection* self=(Luna< ISection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call ISection::SectionKind ISection::kind() const. Got : '%s'",typeid(Luna< ISection >::check(L,1)).name());
		}
		ISection::SectionKind lret = self->kind();
		lua_pushnumber(L,lret);

		return 1;
	}

	// IDocRoot * ISection::description() const
	static int _bind_description(lua_State *L) {
		if (!_lg_typecheck_description(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in IDocRoot * ISection::description() const function, expected prototype:\nIDocRoot * ISection::description() const\nClass arguments details:\n");
		}


		ISection* self=(Luna< ISection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call IDocRoot * ISection::description() const. Got : '%s'",typeid(Luna< ISection >::check(L,1)).name());
		}
		IDocRoot * lret = self->description();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocRoot >::push(L,lret,false);

		return 1;
	}

	// IMemberIterator * ISection::members() const
	static int _bind_members(lua_State *L) {
		if (!_lg_typecheck_members(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in IMemberIterator * ISection::members() const function, expected prototype:\nIMemberIterator * ISection::members() const\nClass arguments details:\n");
		}


		ISection* self=(Luna< ISection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call IMemberIterator * ISection::members() const. Got : '%s'",typeid(Luna< ISection >::check(L,1)).name());
		}
		IMemberIterator * lret = self->members();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IMemberIterator >::push(L,lret,false);

		return 1;
	}

	// bool ISection::isStatic() const
	static int _bind_isStatic(lua_State *L) {
		if (!_lg_typecheck_isStatic(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool ISection::isStatic() const function, expected prototype:\nbool ISection::isStatic() const\nClass arguments details:\n");
		}


		ISection* self=(Luna< ISection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool ISection::isStatic() const. Got : '%s'",typeid(Luna< ISection >::check(L,1)).name());
		}
		bool lret = self->isStatic();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ISection::isPublic() const
	static int _bind_isPublic(lua_State *L) {
		if (!_lg_typecheck_isPublic(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool ISection::isPublic() const function, expected prototype:\nbool ISection::isPublic() const\nClass arguments details:\n");
		}


		ISection* self=(Luna< ISection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool ISection::isPublic() const. Got : '%s'",typeid(Luna< ISection >::check(L,1)).name());
		}
		bool lret = self->isPublic();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ISection::isPrivate() const
	static int _bind_isPrivate(lua_State *L) {
		if (!_lg_typecheck_isPrivate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool ISection::isPrivate() const function, expected prototype:\nbool ISection::isPrivate() const\nClass arguments details:\n");
		}


		ISection* self=(Luna< ISection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool ISection::isPrivate() const. Got : '%s'",typeid(Luna< ISection >::check(L,1)).name());
		}
		bool lret = self->isPrivate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ISection::isProtected() const
	static int _bind_isProtected(lua_State *L) {
		if (!_lg_typecheck_isProtected(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool ISection::isProtected() const function, expected prototype:\nbool ISection::isProtected() const\nClass arguments details:\n");
		}


		ISection* self=(Luna< ISection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool ISection::isProtected() const. Got : '%s'",typeid(Luna< ISection >::check(L,1)).name());
		}
		bool lret = self->isProtected();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

ISection* LunaTraits< ISection >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ISection::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// const IString * ISection::kindString() const
	// ISection::SectionKind ISection::kind() const
	// IDocRoot * ISection::description() const
	// IMemberIterator * ISection::members() const
	// bool ISection::isStatic() const
	// bool ISection::isPublic() const
	// bool ISection::isPrivate() const
	// bool ISection::isProtected() const
}

void LunaTraits< ISection >::_bind_dtor(ISection* obj) {
	delete obj;
}

const char LunaTraits< ISection >::className[] = "ISection";
const char LunaTraits< ISection >::fullName[] = "ISection";
const char LunaTraits< ISection >::moduleName[] = "doxmlparser";
const char* LunaTraits< ISection >::parents[] = {0};
const int LunaTraits< ISection >::hash = 70042881;
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
	{"dynCast", &luna_wrapper_ISection::_bind_dynCast},
	{"__eq", &luna_wrapper_ISection::_bind___eq},
	{"fromVoid", &luna_wrapper_ISection::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ISection::_bind_asVoid},
	{"getTable", &luna_wrapper_ISection::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ISection >::converters[] = {
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


