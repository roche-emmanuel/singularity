#include <plug_common.h>

#include <luna/wrappers/wrapper_sgt_Referenced.h>

class luna_wrapper_sgt_Referenced {
public:
	typedef Luna< sgt::Referenced > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

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
		//sgt::Referenced* ptr= dynamic_cast< sgt::Referenced* >(Luna< osg::Referenced >::check(L,1));
		sgt::Referenced* ptr= luna_caster< osg::Referenced, sgt::Referenced >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::Referenced >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::Referenced::Referenced()
	static sgt::Referenced* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::Referenced::Referenced() function, expected prototype:\nsgt::Referenced::Referenced()\nClass arguments details:\n");
		}


		return new sgt::Referenced();
	}

	// sgt::Referenced::Referenced(lua_Table * data)
	static sgt::Referenced* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::Referenced::Referenced(lua_Table * data) function, expected prototype:\nsgt::Referenced::Referenced(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_sgt_Referenced(L,NULL);
	}

	// Overload binder for sgt::Referenced::Referenced
	static sgt::Referenced* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Referenced, cannot match any of the overloads for function Referenced:\n  Referenced()\n  Referenced(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void sgt::Referenced::setName(const std::string & name)
	static int _bind_setName(lua_State *L) {
		if (!_lg_typecheck_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::Referenced::setName(const std::string & name) function, expected prototype:\nvoid sgt::Referenced::setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		sgt::Referenced* self=Luna< osg::Referenced >::checkSubType< sgt::Referenced >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::Referenced::setName(const std::string &)");
		}
		self->setName(name);

		return 0;
	}

	// std::string sgt::Referenced::getName()
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string sgt::Referenced::getName() function, expected prototype:\nstd::string sgt::Referenced::getName()\nClass arguments details:\n");
		}


		sgt::Referenced* self=Luna< osg::Referenced >::checkSubType< sgt::Referenced >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string sgt::Referenced::getName()");
		}
		std::string lret = self->getName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void sgt::Referenced::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::Referenced::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid sgt::Referenced::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		sgt::Referenced* self=Luna< osg::Referenced >::checkSubType< sgt::Referenced >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::Referenced::base_setThreadSafeRefUnref(bool)");
		}
		self->Referenced::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

sgt::Referenced* LunaTraits< sgt::Referenced >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_Referenced::_bind_ctor(L);
}

void LunaTraits< sgt::Referenced >::_bind_dtor(sgt::Referenced* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< sgt::Referenced >::className[] = "Referenced";
const char LunaTraits< sgt::Referenced >::fullName[] = "sgt::Referenced";
const char LunaTraits< sgt::Referenced >::moduleName[] = "sgt";
const char* LunaTraits< sgt::Referenced >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< sgt::Referenced >::hash = 8819118;
const int LunaTraits< sgt::Referenced >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< sgt::Referenced >::methods[] = {
	{"setName", &luna_wrapper_sgt_Referenced::_bind_setName},
	{"getName", &luna_wrapper_sgt_Referenced::_bind_getName},
	{"base_setThreadSafeRefUnref", &luna_wrapper_sgt_Referenced::_bind_base_setThreadSafeRefUnref},
	{"__eq", &luna_wrapper_sgt_Referenced::_bind___eq},
	{"getTable", &luna_wrapper_sgt_Referenced::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::Referenced >::converters[] = {
	{"osg::Referenced", &luna_wrapper_sgt_Referenced::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::Referenced >::enumValues[] = {
	{0,0}
};


