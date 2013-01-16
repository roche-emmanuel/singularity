#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocImage.h>

class luna_wrapper_IDocImage {
public:
	typedef Luna< IDocImage > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		IDoc* self=(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<IDoc,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2243631) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(IDoc*)");
		}

		IDoc* rhs =(Luna< IDoc >::check(L,2));
		IDoc* self=(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_IDoc(lua_State *L) {
		// all checked are already performed before reaching this point.
		//IDocImage* ptr= dynamic_cast< IDocImage* >(Luna< IDoc >::check(L,1));
		IDocImage* ptr= luna_caster< IDoc, IDocImage >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocImage >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_name(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_caption(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IDocImage::IDocImage(lua_Table * data)
	static IDocImage* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in IDocImage::IDocImage(lua_Table * data) function, expected prototype:\nIDocImage::IDocImage(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_IDocImage(L,NULL);
	}


	// Function binds:
	// const IString * IDocImage::name() const
	static int _bind_name(lua_State *L) {
		if (!_lg_typecheck_name(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const IString * IDocImage::name() const function, expected prototype:\nconst IString * IDocImage::name() const\nClass arguments details:\n");
		}


		IDocImage* self=Luna< IDoc >::checkSubType< IDocImage >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const IString * IDocImage::name() const. Got : '%s'",typeid(Luna< IDoc >::check(L,1)).name());
		}
		const IString * lret = self->name();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	// const IString * IDocImage::caption() const
	static int _bind_caption(lua_State *L) {
		if (!_lg_typecheck_caption(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const IString * IDocImage::caption() const function, expected prototype:\nconst IString * IDocImage::caption() const\nClass arguments details:\n");
		}


		IDocImage* self=Luna< IDoc >::checkSubType< IDocImage >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const IString * IDocImage::caption() const. Got : '%s'",typeid(Luna< IDoc >::check(L,1)).name());
		}
		const IString * lret = self->caption();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocImage* LunaTraits< IDocImage >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocImage::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// const IString * IDocImage::name() const
	// const IString * IDocImage::caption() const
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocImage >::_bind_dtor(IDocImage* obj) {
	delete obj;
}

const char LunaTraits< IDocImage >::className[] = "IDocImage";
const char LunaTraits< IDocImage >::fullName[] = "IDocImage";
const char LunaTraits< IDocImage >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocImage >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocImage >::hash = 17576926;
const int LunaTraits< IDocImage >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocImage >::methods[] = {
	{"name", &luna_wrapper_IDocImage::_bind_name},
	{"caption", &luna_wrapper_IDocImage::_bind_caption},
	{"__eq", &luna_wrapper_IDocImage::_bind___eq},
	{"getTable", &luna_wrapper_IDocImage::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocImage >::converters[] = {
	{"IDoc", &luna_wrapper_IDocImage::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocImage >::enumValues[] = {
	{0,0}
};


