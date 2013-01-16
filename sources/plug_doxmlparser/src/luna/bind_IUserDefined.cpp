#include <plug_common.h>

#include <luna/wrappers/wrapper_IUserDefined.h>

class luna_wrapper_IUserDefined {
public:
	typedef Luna< IUserDefined > luna_t;

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

	// Derived class converters:
	static int _cast_from_ISection(lua_State *L) {
		// all checked are already performed before reaching this point.
		//IUserDefined* ptr= dynamic_cast< IUserDefined* >(Luna< ISection >::check(L,1));
		IUserDefined* ptr= luna_caster< ISection, IUserDefined >::cast(Luna< ISection >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IUserDefined >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_header(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IUserDefined::IUserDefined(lua_Table * data)
	static IUserDefined* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in IUserDefined::IUserDefined(lua_Table * data) function, expected prototype:\nIUserDefined::IUserDefined(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_IUserDefined(L,NULL);
	}


	// Function binds:
	// const IString * IUserDefined::header() const
	static int _bind_header(lua_State *L) {
		if (!_lg_typecheck_header(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const IString * IUserDefined::header() const function, expected prototype:\nconst IString * IUserDefined::header() const\nClass arguments details:\n");
		}


		IUserDefined* self=Luna< ISection >::checkSubType< IUserDefined >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const IString * IUserDefined::header() const. Got : '%s'",typeid(Luna< ISection >::check(L,1)).name());
		}
		const IString * lret = self->header();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IUserDefined* LunaTraits< IUserDefined >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IUserDefined::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// const IString * IUserDefined::header() const
	// const IString * ISection::kindString() const
	// ISection::SectionKind ISection::kind() const
	// IDocRoot * ISection::description() const
	// IMemberIterator * ISection::members() const
	// bool ISection::isStatic() const
	// bool ISection::isPublic() const
	// bool ISection::isPrivate() const
	// bool ISection::isProtected() const
}

void LunaTraits< IUserDefined >::_bind_dtor(IUserDefined* obj) {
	delete obj;
}

const char LunaTraits< IUserDefined >::className[] = "IUserDefined";
const char LunaTraits< IUserDefined >::fullName[] = "IUserDefined";
const char LunaTraits< IUserDefined >::moduleName[] = "doxmlparser";
const char* LunaTraits< IUserDefined >::parents[] = {"doxmlparser.ISection", 0};
const int LunaTraits< IUserDefined >::hash = 46591925;
const int LunaTraits< IUserDefined >::uniqueIDs[] = {70042881,0};

luna_RegType LunaTraits< IUserDefined >::methods[] = {
	{"header", &luna_wrapper_IUserDefined::_bind_header},
	{"__eq", &luna_wrapper_IUserDefined::_bind___eq},
	{"getTable", &luna_wrapper_IUserDefined::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IUserDefined >::converters[] = {
	{"ISection", &luna_wrapper_IUserDefined::_cast_from_ISection},
	{0,0}
};

luna_RegEnumType LunaTraits< IUserDefined >::enumValues[] = {
	{0,0}
};


