#include <plug_common.h>

#include <luna/wrappers/wrapper_IPage.h>

class luna_wrapper_IPage {
public:
	typedef Luna< IPage > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		ICompound* self=(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ICompound,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,27352831) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ICompound*)");
		}

		ICompound* rhs =(Luna< ICompound >::check(L,2));
		ICompound* self=(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_ICompound(lua_State *L) {
		// all checked are already performed before reaching this point.
		//IPage* ptr= dynamic_cast< IPage* >(Luna< ICompound >::check(L,1));
		IPage* ptr= luna_caster< ICompound, IPage >::cast(Luna< ICompound >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IPage >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_title(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IPage::IPage(lua_Table * data)
	static IPage* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in IPage::IPage(lua_Table * data) function, expected prototype:\nIPage::IPage(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_IPage(L,NULL);
	}


	// Function binds:
	// const IDocTitle * IPage::title() const
	static int _bind_title(lua_State *L) {
		if (!_lg_typecheck_title(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const IDocTitle * IPage::title() const function, expected prototype:\nconst IDocTitle * IPage::title() const\nClass arguments details:\n");
		}


		IPage* self=Luna< ICompound >::checkSubType< IPage >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const IDocTitle * IPage::title() const. Got : '%s'",typeid(Luna< ICompound >::check(L,1)).name());
		}
		const IDocTitle * lret = self->title();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocTitle >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IPage* LunaTraits< IPage >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IPage::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// const IDocTitle * IPage::title() const
	// const IString * ICompound::protection() const
	// const IString * ICompound::name() const
	// const IString * ICompound::id() const
	// ICompound::CompoundKind ICompound::kind() const
	// const IString * ICompound::kindString() const
	// ISectionIterator * ICompound::sections() const
	// IDocRoot * ICompound::briefDescription() const
	// IDocRoot * ICompound::detailedDescription() const
	// IMember * ICompound::memberById(const char * id) const
	// IMemberIterator * ICompound::memberByName(const char * name) const
	// void ICompound::release()
}

void LunaTraits< IPage >::_bind_dtor(IPage* obj) {
	delete obj;
}

const char LunaTraits< IPage >::className[] = "IPage";
const char LunaTraits< IPage >::fullName[] = "IPage";
const char LunaTraits< IPage >::moduleName[] = "doxmlparser";
const char* LunaTraits< IPage >::parents[] = {"doxmlparser.ICompound", 0};
const int LunaTraits< IPage >::hash = 69896824;
const int LunaTraits< IPage >::uniqueIDs[] = {27352831,0};

luna_RegType LunaTraits< IPage >::methods[] = {
	{"title", &luna_wrapper_IPage::_bind_title},
	{"__eq", &luna_wrapper_IPage::_bind___eq},
	{"getTable", &luna_wrapper_IPage::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IPage >::converters[] = {
	{"ICompound", &luna_wrapper_IPage::_cast_from_ICompound},
	{0,0}
};

luna_RegEnumType LunaTraits< IPage >::enumValues[] = {
	{0,0}
};


