#include <plug_common.h>

#include <luna/wrappers/wrapper_sgt_TileStorage.h>

class luna_wrapper_sgt_TileStorage {
public:
	typedef Luna< sgt::TileStorage > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
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

		sgt::TileStorage* self= (sgt::TileStorage*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::TileStorage >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Object(lua_State *L) {
		// all checked are already performed before reaching this point.
		//sgt::TileStorage* ptr= dynamic_cast< sgt::TileStorage* >(Luna< osg::Referenced >::check(L,1));
		sgt::TileStorage* ptr= luna_caster< osg::Referenced, sgt::TileStorage >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::TileStorage >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_newSlot(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_deleteSlot(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,84645042)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTileSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCapacity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFreeSlots(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::TileStorage::TileStorage(int tileSize, int capacity)
	static sgt::TileStorage* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TileStorage::TileStorage(int tileSize, int capacity) function, expected prototype:\nsgt::TileStorage::TileStorage(int tileSize, int capacity)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int tileSize=(int)lua_tointeger(L,1);
		int capacity=(int)lua_tointeger(L,2);

		return new sgt::TileStorage(tileSize, capacity);
	}

	// sgt::TileStorage::TileStorage(lua_Table * data, int tileSize, int capacity)
	static sgt::TileStorage* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TileStorage::TileStorage(lua_Table * data, int tileSize, int capacity) function, expected prototype:\nsgt::TileStorage::TileStorage(lua_Table * data, int tileSize, int capacity)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int tileSize=(int)lua_tointeger(L,2);
		int capacity=(int)lua_tointeger(L,3);

		return new wrapper_sgt_TileStorage(L,NULL, tileSize, capacity);
	}

	// Overload binder for sgt::TileStorage::TileStorage
	static sgt::TileStorage* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TileStorage, cannot match any of the overloads for function TileStorage:\n  TileStorage(int, int)\n  TileStorage(lua_Table *, int, int)\n");
		return NULL;
	}


	// Function binds:
	// sgt::TileStorage::Slot * sgt::TileStorage::newSlot()
	static int _bind_newSlot(lua_State *L) {
		if (!_lg_typecheck_newSlot(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TileStorage::Slot * sgt::TileStorage::newSlot() function, expected prototype:\nsgt::TileStorage::Slot * sgt::TileStorage::newSlot()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileStorage* self=Luna< osg::Referenced >::checkSubType< sgt::TileStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::TileStorage::Slot * sgt::TileStorage::newSlot(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::TileStorage::Slot * lret = self->newSlot();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::TileStorage::Slot >::push(L,lret,false);

		return 1;
	}

	// void sgt::TileStorage::deleteSlot(sgt::TileStorage::Slot * t)
	static int _bind_deleteSlot(lua_State *L) {
		if (!_lg_typecheck_deleteSlot(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileStorage::deleteSlot(sgt::TileStorage::Slot * t) function, expected prototype:\nvoid sgt::TileStorage::deleteSlot(sgt::TileStorage::Slot * t)\nClass arguments details:\narg 1 ID = 84645042\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::TileStorage::Slot* t=(Luna< sgt::TileStorage::Slot >::check(L,2));

		sgt::TileStorage* self=Luna< osg::Referenced >::checkSubType< sgt::TileStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileStorage::deleteSlot(sgt::TileStorage::Slot *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->deleteSlot(t);

		return 0;
	}

	// int sgt::TileStorage::getTileSize()
	static int _bind_getTileSize(lua_State *L) {
		if (!_lg_typecheck_getTileSize(L)) {
			luaL_error(L, "luna typecheck failed in int sgt::TileStorage::getTileSize() function, expected prototype:\nint sgt::TileStorage::getTileSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileStorage* self=Luna< osg::Referenced >::checkSubType< sgt::TileStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int sgt::TileStorage::getTileSize(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getTileSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int sgt::TileStorage::getCapacity()
	static int _bind_getCapacity(lua_State *L) {
		if (!_lg_typecheck_getCapacity(L)) {
			luaL_error(L, "luna typecheck failed in int sgt::TileStorage::getCapacity() function, expected prototype:\nint sgt::TileStorage::getCapacity()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileStorage* self=Luna< osg::Referenced >::checkSubType< sgt::TileStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int sgt::TileStorage::getCapacity(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getCapacity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int sgt::TileStorage::getFreeSlots()
	static int _bind_getFreeSlots(lua_State *L) {
		if (!_lg_typecheck_getFreeSlots(L)) {
			luaL_error(L, "luna typecheck failed in int sgt::TileStorage::getFreeSlots() function, expected prototype:\nint sgt::TileStorage::getFreeSlots()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileStorage* self=Luna< osg::Referenced >::checkSubType< sgt::TileStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int sgt::TileStorage::getFreeSlots(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getFreeSlots();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

sgt::TileStorage* LunaTraits< sgt::TileStorage >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_TileStorage::_bind_ctor(L);
}

void LunaTraits< sgt::TileStorage >::_bind_dtor(sgt::TileStorage* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< sgt::TileStorage >::className[] = "TileStorage";
const char LunaTraits< sgt::TileStorage >::fullName[] = "sgt::TileStorage";
const char LunaTraits< sgt::TileStorage >::moduleName[] = "sgt";
const char* LunaTraits< sgt::TileStorage >::parents[] = {"sgt.Object", 0};
const int LunaTraits< sgt::TileStorage >::hash = 90430669;
const int LunaTraits< sgt::TileStorage >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< sgt::TileStorage >::methods[] = {
	{"newSlot", &luna_wrapper_sgt_TileStorage::_bind_newSlot},
	{"deleteSlot", &luna_wrapper_sgt_TileStorage::_bind_deleteSlot},
	{"getTileSize", &luna_wrapper_sgt_TileStorage::_bind_getTileSize},
	{"getCapacity", &luna_wrapper_sgt_TileStorage::_bind_getCapacity},
	{"getFreeSlots", &luna_wrapper_sgt_TileStorage::_bind_getFreeSlots},
	{"fromVoid", &luna_wrapper_sgt_TileStorage::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_TileStorage::_bind_asVoid},
	{"getTable", &luna_wrapper_sgt_TileStorage::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::TileStorage >::converters[] = {
	{"sgt::Object", &luna_wrapper_sgt_TileStorage::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::TileStorage >::enumValues[] = {
	{0,0}
};


