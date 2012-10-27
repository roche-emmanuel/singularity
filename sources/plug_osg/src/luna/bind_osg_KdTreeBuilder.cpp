#include <plug_common.h>

class luna_wrapper_osg_KdTreeBuilder {
public:
	typedef Luna< osg::KdTreeBuilder > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Referenced*)");
		}

		osg::Referenced* rhs =(Luna< osg::Referenced >::check(L,2));
		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::KdTreeBuilder* ptr= dynamic_cast< osg::KdTreeBuilder* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::KdTreeBuilder >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!dynamic_cast< osg::KdTreeBuilder* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::KdTreeBuilder::KdTreeBuilder()
	static osg::KdTreeBuilder* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::KdTreeBuilder::KdTreeBuilder() function, expected prototype:\nosg::KdTreeBuilder::KdTreeBuilder()\nClass arguments details:\n");
		}


		return new osg::KdTreeBuilder();
	}

	// osg::KdTreeBuilder::KdTreeBuilder(const osg::KdTreeBuilder & rhs)
	static osg::KdTreeBuilder* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::KdTreeBuilder::KdTreeBuilder(const osg::KdTreeBuilder & rhs) function, expected prototype:\nosg::KdTreeBuilder::KdTreeBuilder(const osg::KdTreeBuilder & rhs)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::KdTreeBuilder* rhs_ptr=dynamic_cast< osg::KdTreeBuilder* >(Luna< osg::Referenced >::check(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::KdTreeBuilder::KdTreeBuilder function");
		}
		const osg::KdTreeBuilder & rhs=*rhs_ptr;

		return new osg::KdTreeBuilder(rhs);
	}

	// Overload binder for osg::KdTreeBuilder::KdTreeBuilder
	static osg::KdTreeBuilder* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function KdTreeBuilder, cannot match any of the overloads for function KdTreeBuilder:\n  KdTreeBuilder()\n  KdTreeBuilder(const osg::KdTreeBuilder &)\n");
		return NULL;
	}


	// Function binds:
	// const char * osg::KdTreeBuilder::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::KdTreeBuilder::libraryName() const function, expected prototype:\nconst char * osg::KdTreeBuilder::libraryName() const\nClass arguments details:\n");
		}


		osg::KdTreeBuilder* self=dynamic_cast< osg::KdTreeBuilder* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::KdTreeBuilder::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::KdTreeBuilder::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::KdTreeBuilder::className() const function, expected prototype:\nconst char * osg::KdTreeBuilder::className() const\nClass arguments details:\n");
		}


		osg::KdTreeBuilder* self=dynamic_cast< osg::KdTreeBuilder* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::KdTreeBuilder::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::KdTreeBuilder * osg::KdTreeBuilder::clone()
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::KdTreeBuilder * osg::KdTreeBuilder::clone() function, expected prototype:\nosg::KdTreeBuilder * osg::KdTreeBuilder::clone()\nClass arguments details:\n");
		}


		osg::KdTreeBuilder* self=dynamic_cast< osg::KdTreeBuilder* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::KdTreeBuilder * osg::KdTreeBuilder::clone()");
		}
		osg::KdTreeBuilder * lret = self->clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::KdTreeBuilder >::push(L,lret,false);

		return 1;
	}

	// void osg::KdTreeBuilder::apply(osg::Geode & geode)
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::KdTreeBuilder::apply(osg::Geode & geode) function, expected prototype:\nvoid osg::KdTreeBuilder::apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* geode_ptr=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osg::KdTreeBuilder::apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osg::KdTreeBuilder* self=dynamic_cast< osg::KdTreeBuilder* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::KdTreeBuilder::apply(osg::Geode &)");
		}
		self->apply(geode);

		return 0;
	}


	// Operator binds:

};

osg::KdTreeBuilder* LunaTraits< osg::KdTreeBuilder >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_KdTreeBuilder::_bind_ctor(L);
}

void LunaTraits< osg::KdTreeBuilder >::_bind_dtor(osg::KdTreeBuilder* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::KdTreeBuilder >::className[] = "KdTreeBuilder";
const char LunaTraits< osg::KdTreeBuilder >::fullName[] = "osg::KdTreeBuilder";
const char LunaTraits< osg::KdTreeBuilder >::moduleName[] = "osg";
const char* LunaTraits< osg::KdTreeBuilder >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osg::KdTreeBuilder >::hash = 19461459;
const int LunaTraits< osg::KdTreeBuilder >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::KdTreeBuilder >::methods[] = {
	{"libraryName", &luna_wrapper_osg_KdTreeBuilder::_bind_libraryName},
	{"className", &luna_wrapper_osg_KdTreeBuilder::_bind_className},
	{"clone", &luna_wrapper_osg_KdTreeBuilder::_bind_clone},
	{"apply", &luna_wrapper_osg_KdTreeBuilder::_bind_apply},
	{"__eq", &luna_wrapper_osg_KdTreeBuilder::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::KdTreeBuilder >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_KdTreeBuilder::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::KdTreeBuilder >::enumValues[] = {
	{0,0}
};


