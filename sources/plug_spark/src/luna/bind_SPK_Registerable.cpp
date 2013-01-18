#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_Registerable.h>

class luna_wrapper_SPK_Registerable {
public:
	typedef Luna< SPK::Registerable > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<SPK::Registerable,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31337102) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SPK::Registerable*)");
		}

		SPK::Registerable* rhs =(Luna< SPK::Registerable >::check(L,2));
		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
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

		SPK::Registerable* self= (SPK::Registerable*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SPK::Registerable >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31337102) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< SPK::Registerable >::check(L,1));
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

		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SPK::Registerable");
		
		return luna_dynamicCast(L,converters,"SPK::Registerable",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,31337102) ) return false;
		if( (!(Luna< SPK::Registerable >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setShared(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDestroyable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSPKID(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getID(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNbReferences(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isRegistered(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isShared(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isDestroyable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_findByName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_findByName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// SPK::Registerable::Registerable(lua_Table * data)
	static SPK::Registerable* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable::Registerable(lua_Table * data) function, expected prototype:\nSPK::Registerable::Registerable(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_SPK_Registerable(L,NULL);
	}

	// SPK::Registerable::Registerable(lua_Table * data, const SPK::Registerable & registerable)
	static SPK::Registerable* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable::Registerable(lua_Table * data, const SPK::Registerable & registerable) function, expected prototype:\nSPK::Registerable::Registerable(lua_Table * data, const SPK::Registerable & registerable)\nClass arguments details:\narg 2 ID = 31337102\n");
		}

		const SPK::Registerable* registerable_ptr=(Luna< SPK::Registerable >::check(L,2));
		if( !registerable_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg registerable in SPK::Registerable::Registerable function");
		}
		const SPK::Registerable & registerable=*registerable_ptr;

		return new wrapper_SPK_Registerable(L,NULL, registerable);
	}

	// Overload binder for SPK::Registerable::Registerable
	static SPK::Registerable* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Registerable, cannot match any of the overloads for function Registerable:\n  Registerable(lua_Table *)\n  Registerable(lua_Table *, const SPK::Registerable &)\n");
		return NULL;
	}


	// Function binds:
	// void SPK::Registerable::setShared(bool shared)
	static int _bind_setShared(lua_State *L) {
		if (!_lg_typecheck_setShared(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Registerable::setShared(bool shared) function, expected prototype:\nvoid SPK::Registerable::setShared(bool shared)\nClass arguments details:\n");
		}

		bool shared=(bool)(lua_toboolean(L,2)==1);

		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Registerable::setShared(bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setShared(shared);

		return 0;
	}

	// void SPK::Registerable::setDestroyable(bool destroyable)
	static int _bind_setDestroyable(lua_State *L) {
		if (!_lg_typecheck_setDestroyable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Registerable::setDestroyable(bool destroyable) function, expected prototype:\nvoid SPK::Registerable::setDestroyable(bool destroyable)\nClass arguments details:\n");
		}

		bool destroyable=(bool)(lua_toboolean(L,2)==1);

		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Registerable::setDestroyable(bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setDestroyable(destroyable);

		return 0;
	}

	// void SPK::Registerable::setName(const std::string & name)
	static int _bind_setName(lua_State *L) {
		if (!_lg_typecheck_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Registerable::setName(const std::string & name) function, expected prototype:\nvoid SPK::Registerable::setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Registerable::setName(const std::string &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setName(name);

		return 0;
	}

	// unsigned long SPK::Registerable::getSPKID() const
	static int _bind_getSPKID(lua_State *L) {
		if (!_lg_typecheck_getSPKID(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned long SPK::Registerable::getSPKID() const function, expected prototype:\nunsigned long SPK::Registerable::getSPKID() const\nClass arguments details:\n");
		}


		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned long SPK::Registerable::getSPKID() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		unsigned long lret = self->getSPKID();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long SPK::Registerable::getID() const
	static int _bind_getID(lua_State *L) {
		if (!_lg_typecheck_getID(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned long SPK::Registerable::getID() const function, expected prototype:\nunsigned long SPK::Registerable::getID() const\nClass arguments details:\n");
		}


		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned long SPK::Registerable::getID() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		unsigned long lret = self->getID();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int SPK::Registerable::getNbReferences() const
	static int _bind_getNbReferences(lua_State *L) {
		if (!_lg_typecheck_getNbReferences(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int SPK::Registerable::getNbReferences() const function, expected prototype:\nunsigned int SPK::Registerable::getNbReferences() const\nClass arguments details:\n");
		}


		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int SPK::Registerable::getNbReferences() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		unsigned int lret = self->getNbReferences();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool SPK::Registerable::isRegistered() const
	static int _bind_isRegistered(lua_State *L) {
		if (!_lg_typecheck_isRegistered(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Registerable::isRegistered() const function, expected prototype:\nbool SPK::Registerable::isRegistered() const\nClass arguments details:\n");
		}


		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Registerable::isRegistered() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->isRegistered();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool SPK::Registerable::isShared() const
	static int _bind_isShared(lua_State *L) {
		if (!_lg_typecheck_isShared(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Registerable::isShared() const function, expected prototype:\nbool SPK::Registerable::isShared() const\nClass arguments details:\n");
		}


		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Registerable::isShared() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->isShared();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool SPK::Registerable::isDestroyable() const
	static int _bind_isDestroyable(lua_State *L) {
		if (!_lg_typecheck_isDestroyable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Registerable::isDestroyable() const function, expected prototype:\nbool SPK::Registerable::isDestroyable() const\nClass arguments details:\n");
		}


		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Registerable::isDestroyable() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->isDestroyable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const std::string & SPK::Registerable::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::string & SPK::Registerable::getName() const function, expected prototype:\nconst std::string & SPK::Registerable::getName() const\nClass arguments details:\n");
		}


		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::string & SPK::Registerable::getName() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		const std::string & lret = self->getName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// std::string SPK::Registerable::getClassName() const
	static int _bind_getClassName(lua_State *L) {
		if (!_lg_typecheck_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::Registerable::getClassName() const function, expected prototype:\nstd::string SPK::Registerable::getClassName() const\nClass arguments details:\n");
		}


		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::Registerable::getClassName() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		std::string lret = self->getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// SPK::Registerable * SPK::Registerable::findByName(const std::string & name)
	static int _bind_findByName(lua_State *L) {
		if (!_lg_typecheck_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::Registerable::findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::Registerable::findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::Registerable::findByName(const std::string &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Registerable * lret = self->findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// SPK::Registerable * SPK::Registerable::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::Registerable::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::Registerable::base_findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::Registerable::base_findByName(const std::string &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Registerable * lret = self->Registerable::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

SPK::Registerable* LunaTraits< SPK::Registerable >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_Registerable::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// std::string SPK::Registerable::getClassName() const
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< SPK::Registerable >::_bind_dtor(SPK::Registerable* obj) {
	delete obj;
}

const char LunaTraits< SPK::Registerable >::className[] = "Registerable";
const char LunaTraits< SPK::Registerable >::fullName[] = "SPK::Registerable";
const char LunaTraits< SPK::Registerable >::moduleName[] = "spark";
const char* LunaTraits< SPK::Registerable >::parents[] = {0};
const int LunaTraits< SPK::Registerable >::hash = 31337102;
const int LunaTraits< SPK::Registerable >::uniqueIDs[] = {31337102,0};

luna_RegType LunaTraits< SPK::Registerable >::methods[] = {
	{"setShared", &luna_wrapper_SPK_Registerable::_bind_setShared},
	{"setDestroyable", &luna_wrapper_SPK_Registerable::_bind_setDestroyable},
	{"setName", &luna_wrapper_SPK_Registerable::_bind_setName},
	{"getSPKID", &luna_wrapper_SPK_Registerable::_bind_getSPKID},
	{"getID", &luna_wrapper_SPK_Registerable::_bind_getID},
	{"getNbReferences", &luna_wrapper_SPK_Registerable::_bind_getNbReferences},
	{"isRegistered", &luna_wrapper_SPK_Registerable::_bind_isRegistered},
	{"isShared", &luna_wrapper_SPK_Registerable::_bind_isShared},
	{"isDestroyable", &luna_wrapper_SPK_Registerable::_bind_isDestroyable},
	{"getName", &luna_wrapper_SPK_Registerable::_bind_getName},
	{"getClassName", &luna_wrapper_SPK_Registerable::_bind_getClassName},
	{"findByName", &luna_wrapper_SPK_Registerable::_bind_findByName},
	{"base_findByName", &luna_wrapper_SPK_Registerable::_bind_base_findByName},
	{"dynCast", &luna_wrapper_SPK_Registerable::_bind_dynCast},
	{"__eq", &luna_wrapper_SPK_Registerable::_bind___eq},
	{"fromVoid", &luna_wrapper_SPK_Registerable::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SPK_Registerable::_bind_asVoid},
	{"getTable", &luna_wrapper_SPK_Registerable::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::Registerable >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::Registerable >::enumValues[] = {
	{0,0}
};


