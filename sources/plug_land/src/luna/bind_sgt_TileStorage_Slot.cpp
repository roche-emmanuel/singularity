#include <plug_common.h>

#include <luna/wrappers/wrapper_sgt_TileStorage_Slot.h>

class luna_wrapper_sgt_TileStorage_Slot {
public:
	typedef Luna< sgt::TileStorage::Slot > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgt::TileStorage::Slot* self=(Luna< sgt::TileStorage::Slot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<sgt::TileStorage::Slot,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,84645042) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(sgt::TileStorage::Slot*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgt::TileStorage::Slot* rhs =(Luna< sgt::TileStorage::Slot >::check(L,2));
		sgt::TileStorage::Slot* self=(Luna< sgt::TileStorage::Slot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgt::TileStorage::Slot* self= (sgt::TileStorage::Slot*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::TileStorage::Slot >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,84645042) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< sgt::TileStorage::Slot >::check(L,1));
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
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		sgt::TileStorage::Slot* self=(Luna< sgt::TileStorage::Slot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::TileStorage::Slot");
		
		return luna_dynamicCast(L,converters,"sgt::TileStorage::Slot",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< sgt::TileStorage >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< sgt::TileStorage >(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getOwner(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_lock(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProducerTask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,40518290) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setProducerTask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::TileStorage::Slot::Slot(sgt::TileStorage * owner)
	static sgt::TileStorage::Slot* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TileStorage::Slot::Slot(sgt::TileStorage * owner) function, expected prototype:\nsgt::TileStorage::Slot::Slot(sgt::TileStorage * owner)\nClass arguments details:\narg 1 ID = 44367388\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::TileStorage* owner=(Luna< osg::Referenced >::checkSubType< sgt::TileStorage >(L,1));

		return new sgt::TileStorage::Slot(owner);
	}

	// sgt::TileStorage::Slot::Slot(lua_Table * data, sgt::TileStorage * owner)
	static sgt::TileStorage::Slot* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TileStorage::Slot::Slot(lua_Table * data, sgt::TileStorage * owner) function, expected prototype:\nsgt::TileStorage::Slot::Slot(lua_Table * data, sgt::TileStorage * owner)\nClass arguments details:\narg 2 ID = 44367388\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::TileStorage* owner=(Luna< osg::Referenced >::checkSubType< sgt::TileStorage >(L,2));

		return new wrapper_sgt_TileStorage_Slot(L,NULL, owner);
	}

	// Overload binder for sgt::TileStorage::Slot::Slot
	static sgt::TileStorage::Slot* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Slot, cannot match any of the overloads for function Slot:\n  Slot(sgt::TileStorage *)\n  Slot(lua_Table *, sgt::TileStorage *)\n");
		return NULL;
	}


	// Function binds:
	// sgt::TileStorage * sgt::TileStorage::Slot::getOwner()
	static int _bind_getOwner(lua_State *L) {
		if (!_lg_typecheck_getOwner(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TileStorage * sgt::TileStorage::Slot::getOwner() function, expected prototype:\nsgt::TileStorage * sgt::TileStorage::Slot::getOwner()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileStorage::Slot* self=(Luna< sgt::TileStorage::Slot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::TileStorage * sgt::TileStorage::Slot::getOwner(). Got : '%s'\n%s",typeid(Luna< sgt::TileStorage::Slot >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::TileStorage * lret = self->getOwner();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::TileStorage >::push(L,lret,false);

		return 1;
	}

	// void sgt::TileStorage::Slot::lock(bool lock)
	static int _bind_lock(lua_State *L) {
		if (!_lg_typecheck_lock(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileStorage::Slot::lock(bool lock) function, expected prototype:\nvoid sgt::TileStorage::Slot::lock(bool lock)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool lock=(bool)(lua_toboolean(L,2)==1);

		sgt::TileStorage::Slot* self=(Luna< sgt::TileStorage::Slot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileStorage::Slot::lock(bool). Got : '%s'\n%s",typeid(Luna< sgt::TileStorage::Slot >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->lock(lock);

		return 0;
	}

	// std::pair< int, std::pair< int, std::pair< int, int > > > sgt::TileStorage::Slot::id()
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in std::pair< int, std::pair< int, std::pair< int, int > > > sgt::TileStorage::Slot::id() function, expected prototype:\nstd::pair< int, std::pair< int, std::pair< int, int > > > sgt::TileStorage::Slot::id()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileStorage::Slot* self=(Luna< sgt::TileStorage::Slot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call std::pair< int, std::pair< int, std::pair< int, int > > > sgt::TileStorage::Slot::id(). Got : '%s'\n%s",typeid(Luna< sgt::TileStorage::Slot >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::pair< int, std::pair< int, std::pair< int, int > > >* lret = &self->id;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< std::pair< int, std::pair< int, std::pair< int, int > > > >::push(L,lret,false);

		return 1;
	}

	// void * sgt::TileStorage::Slot::producerTask()
	static int _bind_getProducerTask(lua_State *L) {
		if (!_lg_typecheck_getProducerTask(L)) {
			luaL_error(L, "luna typecheck failed in void * sgt::TileStorage::Slot::producerTask() function, expected prototype:\nvoid * sgt::TileStorage::Slot::producerTask()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileStorage::Slot* self=(Luna< sgt::TileStorage::Slot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void * sgt::TileStorage::Slot::producerTask(). Got : '%s'\n%s",typeid(Luna< sgt::TileStorage::Slot >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->producerTask;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void sgt::TileStorage::Slot::id(std::pair< int, std::pair< int, std::pair< int, int > > > value)
	static int _bind_setId(lua_State *L) {
		if (!_lg_typecheck_setId(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileStorage::Slot::id(std::pair< int, std::pair< int, std::pair< int, int > > > value) function, expected prototype:\nvoid sgt::TileStorage::Slot::id(std::pair< int, std::pair< int, std::pair< int, int > > > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::pair< int, std::pair< int, std::pair< int, int > > >* value_ptr=(Luna< std::pair< int, std::pair< int, std::pair< int, int > > > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in sgt::TileStorage::Slot::id function");
		}
		std::pair< int, std::pair< int, std::pair< int, int > > > value=*value_ptr;

		sgt::TileStorage::Slot* self=(Luna< sgt::TileStorage::Slot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileStorage::Slot::id(std::pair< int, std::pair< int, std::pair< int, int > > >). Got : '%s'\n%s",typeid(Luna< sgt::TileStorage::Slot >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->id = value;

		return 0;
	}

	// void sgt::TileStorage::Slot::producerTask(void * value)
	static int _bind_setProducerTask(lua_State *L) {
		if (!_lg_typecheck_setProducerTask(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileStorage::Slot::producerTask(void * value) function, expected prototype:\nvoid sgt::TileStorage::Slot::producerTask(void * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* value=(Luna< void >::check(L,2));

		sgt::TileStorage::Slot* self=(Luna< sgt::TileStorage::Slot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileStorage::Slot::producerTask(void *). Got : '%s'\n%s",typeid(Luna< sgt::TileStorage::Slot >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->producerTask = value;

		return 0;
	}


	// Operator binds:

};

sgt::TileStorage::Slot* LunaTraits< sgt::TileStorage::Slot >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_TileStorage_Slot::_bind_ctor(L);
}

void LunaTraits< sgt::TileStorage::Slot >::_bind_dtor(sgt::TileStorage::Slot* obj) {
	delete obj;
}

const char LunaTraits< sgt::TileStorage::Slot >::className[] = "TileStorage_Slot";
const char LunaTraits< sgt::TileStorage::Slot >::fullName[] = "sgt::TileStorage::Slot";
const char LunaTraits< sgt::TileStorage::Slot >::moduleName[] = "sgt";
const char* LunaTraits< sgt::TileStorage::Slot >::parents[] = {0};
const int LunaTraits< sgt::TileStorage::Slot >::hash = 84645042;
const int LunaTraits< sgt::TileStorage::Slot >::uniqueIDs[] = {84645042,0};

luna_RegType LunaTraits< sgt::TileStorage::Slot >::methods[] = {
	{"getOwner", &luna_wrapper_sgt_TileStorage_Slot::_bind_getOwner},
	{"lock", &luna_wrapper_sgt_TileStorage_Slot::_bind_lock},
	{"getId", &luna_wrapper_sgt_TileStorage_Slot::_bind_getId},
	{"getProducerTask", &luna_wrapper_sgt_TileStorage_Slot::_bind_getProducerTask},
	{"setId", &luna_wrapper_sgt_TileStorage_Slot::_bind_setId},
	{"setProducerTask", &luna_wrapper_sgt_TileStorage_Slot::_bind_setProducerTask},
	{"dynCast", &luna_wrapper_sgt_TileStorage_Slot::_bind_dynCast},
	{"__eq", &luna_wrapper_sgt_TileStorage_Slot::_bind___eq},
	{"fromVoid", &luna_wrapper_sgt_TileStorage_Slot::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_TileStorage_Slot::_bind_asVoid},
	{"getTable", &luna_wrapper_sgt_TileStorage_Slot::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::TileStorage::Slot >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::TileStorage::Slot >::enumValues[] = {
	{0,0}
};


