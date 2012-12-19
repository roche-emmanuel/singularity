#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Operation.h>

class luna_wrapper_osg_Operation {
public:
	typedef Luna< osg::Operation > luna_t;

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
		//osg::Operation* ptr= dynamic_cast< osg::Operation* >(Luna< osg::Referenced >::check(L,1));
		osg::Operation* ptr= luna_caster< osg::Referenced, osg::Operation >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Operation >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
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

	inline static bool _lg_typecheck_setKeep(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeep(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_release(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_release(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::Operation::Operation(lua_Table * data, const std::string & name, bool keep)
	static osg::Operation* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Operation::Operation(lua_Table * data, const std::string & name, bool keep) function, expected prototype:\nosg::Operation::Operation(lua_Table * data, const std::string & name, bool keep)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		bool keep=(bool)(lua_toboolean(L,3)==1);

		return new wrapper_osg_Operation(L,NULL, name, keep);
	}


	// Function binds:
	// void osg::Operation::setName(const std::string & name)
	static int _bind_setName(lua_State *L) {
		if (!_lg_typecheck_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Operation::setName(const std::string & name) function, expected prototype:\nvoid osg::Operation::setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Operation* self=Luna< osg::Referenced >::checkSubType< osg::Operation >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Operation::setName(const std::string &)");
		}
		self->setName(name);

		return 0;
	}

	// const std::string & osg::Operation::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::string & osg::Operation::getName() const function, expected prototype:\nconst std::string & osg::Operation::getName() const\nClass arguments details:\n");
		}


		osg::Operation* self=Luna< osg::Referenced >::checkSubType< osg::Operation >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::string & osg::Operation::getName() const");
		}
		const std::string & lret = self->getName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osg::Operation::setKeep(bool keep)
	static int _bind_setKeep(lua_State *L) {
		if (!_lg_typecheck_setKeep(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Operation::setKeep(bool keep) function, expected prototype:\nvoid osg::Operation::setKeep(bool keep)\nClass arguments details:\n");
		}

		bool keep=(bool)(lua_toboolean(L,2)==1);

		osg::Operation* self=Luna< osg::Referenced >::checkSubType< osg::Operation >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Operation::setKeep(bool)");
		}
		self->setKeep(keep);

		return 0;
	}

	// bool osg::Operation::getKeep() const
	static int _bind_getKeep(lua_State *L) {
		if (!_lg_typecheck_getKeep(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Operation::getKeep() const function, expected prototype:\nbool osg::Operation::getKeep() const\nClass arguments details:\n");
		}


		osg::Operation* self=Luna< osg::Referenced >::checkSubType< osg::Operation >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Operation::getKeep() const");
		}
		bool lret = self->getKeep();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Operation::release()
	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Operation::release() function, expected prototype:\nvoid osg::Operation::release()\nClass arguments details:\n");
		}


		osg::Operation* self=Luna< osg::Referenced >::checkSubType< osg::Operation >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Operation::release()");
		}
		self->release();

		return 0;
	}

	// void osg::Operation::base_release()
	static int _bind_base_release(lua_State *L) {
		if (!_lg_typecheck_base_release(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Operation::base_release() function, expected prototype:\nvoid osg::Operation::base_release()\nClass arguments details:\n");
		}


		osg::Operation* self=Luna< osg::Referenced >::checkSubType< osg::Operation >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Operation::base_release()");
		}
		self->Operation::release();

		return 0;
	}


	// Operator binds:
	// void osg::Operation::operator()(osg::Object * arg1)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Operation::operator()(osg::Object * arg1) function, expected prototype:\nvoid osg::Operation::operator()(osg::Object * arg1)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Object* _arg1=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Operation* self=Luna< osg::Referenced >::checkSubType< osg::Operation >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Operation::operator()(osg::Object *)");
		}
		self->operator()(_arg1);

		return 0;
	}


};

osg::Operation* LunaTraits< osg::Operation >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Operation::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osg::Operation::operator()(osg::Object * arg1)
}

void LunaTraits< osg::Operation >::_bind_dtor(osg::Operation* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Operation >::className[] = "Operation";
const char LunaTraits< osg::Operation >::fullName[] = "osg::Operation";
const char LunaTraits< osg::Operation >::moduleName[] = "osg";
const char* LunaTraits< osg::Operation >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::Operation >::hash = 17565758;
const int LunaTraits< osg::Operation >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Operation >::methods[] = {
	{"setName", &luna_wrapper_osg_Operation::_bind_setName},
	{"getName", &luna_wrapper_osg_Operation::_bind_getName},
	{"setKeep", &luna_wrapper_osg_Operation::_bind_setKeep},
	{"getKeep", &luna_wrapper_osg_Operation::_bind_getKeep},
	{"release", &luna_wrapper_osg_Operation::_bind_release},
	{"base_release", &luna_wrapper_osg_Operation::_bind_base_release},
	{"op_call", &luna_wrapper_osg_Operation::_bind_op_call},
	{"__eq", &luna_wrapper_osg_Operation::_bind___eq},
	{"getTable", &luna_wrapper_osg_Operation::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Operation >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Operation::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Operation >::enumValues[] = {
	{0,0}
};


