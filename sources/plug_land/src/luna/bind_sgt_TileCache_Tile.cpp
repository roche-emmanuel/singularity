#include <plug_common.h>

class luna_wrapper_sgt_TileCache_Tile {
public:
	typedef Luna< sgt::TileCache::Tile > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,38575498) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(sgt::TileCache::Tile*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgt::TileCache::Tile* rhs =(Luna< sgt::TileCache::Tile >::check(L,2));
		sgt::TileCache::Tile* self=(Luna< sgt::TileCache::Tile >::check(L,1));
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

		sgt::TileCache::Tile* self= (sgt::TileCache::Tile*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::TileCache::Tile >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,38575498) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< sgt::TileCache::Tile >::check(L,1));
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

		sgt::TileCache::Tile* self=(Luna< sgt::TileCache::Tile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::TileCache::Tile");
		
		return luna_dynamicCast(L,converters,"sgt::TileCache::Tile",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,84645042)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getData(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getId_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getId_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTId_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTId_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getProducerId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTx(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::TileCache::Tile::Tile(int producerId, int level, int tx, int ty, sgt::Task * task, sgt::TileStorage::Slot * data)
	static sgt::TileCache::Tile* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TileCache::Tile::Tile(int producerId, int level, int tx, int ty, sgt::Task * task, sgt::TileStorage::Slot * data) function, expected prototype:\nsgt::TileCache::Tile::Tile(int producerId, int level, int tx, int ty, sgt::Task * task, sgt::TileStorage::Slot * data)\nClass arguments details:\narg 5 ID = 44367388\narg 6 ID = 84645042\n\n%s",luna_dumpStack(L).c_str());
		}

		int producerId=(int)lua_tointeger(L,1);
		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		sgt::Task* task=(Luna< osg::Referenced >::checkSubType< sgt::Task >(L,5));
		sgt::TileStorage::Slot* data=(Luna< sgt::TileStorage::Slot >::check(L,6));

		return new sgt::TileCache::Tile(producerId, level, tx, ty, task, data);
	}


	// Function binds:
	// sgt::TileStorage::Slot * sgt::TileCache::Tile::getData(bool check = true)
	static int _bind_getData(lua_State *L) {
		if (!_lg_typecheck_getData(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TileStorage::Slot * sgt::TileCache::Tile::getData(bool check = true) function, expected prototype:\nsgt::TileStorage::Slot * sgt::TileCache::Tile::getData(bool check = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool check=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		sgt::TileCache::Tile* self=(Luna< sgt::TileCache::Tile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::TileStorage::Slot * sgt::TileCache::Tile::getData(bool). Got : '%s'\n%s",typeid(Luna< sgt::TileCache::Tile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::TileStorage::Slot * lret = self->getData(check);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::TileStorage::Slot >::push(L,lret,false);

		return 1;
	}

	// sgt::TileCache::Tile::Id sgt::TileCache::Tile::getId() const
	static int _bind_getId_overload_1(lua_State *L) {
		if (!_lg_typecheck_getId_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TileCache::Tile::Id sgt::TileCache::Tile::getId() const function, expected prototype:\nsgt::TileCache::Tile::Id sgt::TileCache::Tile::getId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileCache::Tile* self=(Luna< sgt::TileCache::Tile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::TileCache::Tile::Id sgt::TileCache::Tile::getId() const. Got : '%s'\n%s",typeid(Luna< sgt::TileCache::Tile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::TileCache::Tile::Id stack_lret = self->getId();
		sgt::TileCache::Tile::Id* lret = new sgt::TileCache::Tile::Id(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::TileCache::Tile::Id >::push(L,lret,true);

		return 1;
	}

	// static sgt::TileCache::Tile::Id sgt::TileCache::Tile::getId(int level, int tx, int ty)
	static int _bind_getId_overload_2(lua_State *L) {
		if (!_lg_typecheck_getId_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static sgt::TileCache::Tile::Id sgt::TileCache::Tile::getId(int level, int tx, int ty) function, expected prototype:\nstatic sgt::TileCache::Tile::Id sgt::TileCache::Tile::getId(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,1);
		int tx=(int)lua_tointeger(L,2);
		int ty=(int)lua_tointeger(L,3);

		sgt::TileCache::Tile::Id stack_lret = sgt::TileCache::Tile::getId(level, tx, ty);
		sgt::TileCache::Tile::Id* lret = new sgt::TileCache::Tile::Id(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::TileCache::Tile::Id >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::TileCache::Tile::getId
	static int _bind_getId(lua_State *L) {
		if (_lg_typecheck_getId_overload_1(L)) return _bind_getId_overload_1(L);
		if (_lg_typecheck_getId_overload_2(L)) return _bind_getId_overload_2(L);

		luaL_error(L, "error in function getId, cannot match any of the overloads for function getId:\n  getId()\n  getId(int, int, int)\n");
		return 0;
	}

	// sgt::TileCache::Tile::TId sgt::TileCache::Tile::getTId() const
	static int _bind_getTId_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTId_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TileCache::Tile::TId sgt::TileCache::Tile::getTId() const function, expected prototype:\nsgt::TileCache::Tile::TId sgt::TileCache::Tile::getTId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileCache::Tile* self=(Luna< sgt::TileCache::Tile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::TileCache::Tile::TId sgt::TileCache::Tile::getTId() const. Got : '%s'\n%s",typeid(Luna< sgt::TileCache::Tile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::TileCache::Tile::TId stack_lret = self->getTId();
		sgt::TileCache::Tile::TId* lret = new sgt::TileCache::Tile::TId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::TileCache::Tile::TId >::push(L,lret,true);

		return 1;
	}

	// static sgt::TileCache::Tile::TId sgt::TileCache::Tile::getTId(int producerId, int level, int tx, int ty)
	static int _bind_getTId_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTId_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static sgt::TileCache::Tile::TId sgt::TileCache::Tile::getTId(int producerId, int level, int tx, int ty) function, expected prototype:\nstatic sgt::TileCache::Tile::TId sgt::TileCache::Tile::getTId(int producerId, int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int producerId=(int)lua_tointeger(L,1);
		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		sgt::TileCache::Tile::TId stack_lret = sgt::TileCache::Tile::getTId(producerId, level, tx, ty);
		sgt::TileCache::Tile::TId* lret = new sgt::TileCache::Tile::TId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::TileCache::Tile::TId >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::TileCache::Tile::getTId
	static int _bind_getTId(lua_State *L) {
		if (_lg_typecheck_getTId_overload_1(L)) return _bind_getTId_overload_1(L);
		if (_lg_typecheck_getTId_overload_2(L)) return _bind_getTId_overload_2(L);

		luaL_error(L, "error in function getTId, cannot match any of the overloads for function getTId:\n  getTId()\n  getTId(int, int, int, int)\n");
		return 0;
	}

	// const int sgt::TileCache::Tile::producerId()
	static int _bind_getProducerId(lua_State *L) {
		if (!_lg_typecheck_getProducerId(L)) {
			luaL_error(L, "luna typecheck failed in const int sgt::TileCache::Tile::producerId() function, expected prototype:\nconst int sgt::TileCache::Tile::producerId()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileCache::Tile* self=(Luna< sgt::TileCache::Tile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const int sgt::TileCache::Tile::producerId(). Got : '%s'\n%s",typeid(Luna< sgt::TileCache::Tile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const int lret = self->producerId;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const int sgt::TileCache::Tile::level()
	static int _bind_getLevel(lua_State *L) {
		if (!_lg_typecheck_getLevel(L)) {
			luaL_error(L, "luna typecheck failed in const int sgt::TileCache::Tile::level() function, expected prototype:\nconst int sgt::TileCache::Tile::level()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileCache::Tile* self=(Luna< sgt::TileCache::Tile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const int sgt::TileCache::Tile::level(). Got : '%s'\n%s",typeid(Luna< sgt::TileCache::Tile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const int lret = self->level;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const int sgt::TileCache::Tile::tx()
	static int _bind_getTx(lua_State *L) {
		if (!_lg_typecheck_getTx(L)) {
			luaL_error(L, "luna typecheck failed in const int sgt::TileCache::Tile::tx() function, expected prototype:\nconst int sgt::TileCache::Tile::tx()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileCache::Tile* self=(Luna< sgt::TileCache::Tile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const int sgt::TileCache::Tile::tx(). Got : '%s'\n%s",typeid(Luna< sgt::TileCache::Tile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const int lret = self->tx;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const int sgt::TileCache::Tile::ty()
	static int _bind_getTy(lua_State *L) {
		if (!_lg_typecheck_getTy(L)) {
			luaL_error(L, "luna typecheck failed in const int sgt::TileCache::Tile::ty() function, expected prototype:\nconst int sgt::TileCache::Tile::ty()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileCache::Tile* self=(Luna< sgt::TileCache::Tile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const int sgt::TileCache::Tile::ty(). Got : '%s'\n%s",typeid(Luna< sgt::TileCache::Tile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const int lret = self->ty;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const sgtPtr< sgt::Task > sgt::TileCache::Tile::task()
	static int _bind_getTask(lua_State *L) {
		if (!_lg_typecheck_getTask(L)) {
			luaL_error(L, "luna typecheck failed in const sgtPtr< sgt::Task > sgt::TileCache::Tile::task() function, expected prototype:\nconst sgtPtr< sgt::Task > sgt::TileCache::Tile::task()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileCache::Tile* self=(Luna< sgt::TileCache::Tile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const sgtPtr< sgt::Task > sgt::TileCache::Tile::task(). Got : '%s'\n%s",typeid(Luna< sgt::TileCache::Tile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const sgtPtr< sgt::Task >* lret = &self->task;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgtPtr< sgt::Task > >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

sgt::TileCache::Tile* LunaTraits< sgt::TileCache::Tile >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_TileCache_Tile::_bind_ctor(L);
}

void LunaTraits< sgt::TileCache::Tile >::_bind_dtor(sgt::TileCache::Tile* obj) {
	delete obj;
}

const char LunaTraits< sgt::TileCache::Tile >::className[] = "TileCache_Tile";
const char LunaTraits< sgt::TileCache::Tile >::fullName[] = "sgt::TileCache::Tile";
const char LunaTraits< sgt::TileCache::Tile >::moduleName[] = "sgt";
const char* LunaTraits< sgt::TileCache::Tile >::parents[] = {0};
const int LunaTraits< sgt::TileCache::Tile >::hash = 38575498;
const int LunaTraits< sgt::TileCache::Tile >::uniqueIDs[] = {38575498,0};

luna_RegType LunaTraits< sgt::TileCache::Tile >::methods[] = {
	{"getData", &luna_wrapper_sgt_TileCache_Tile::_bind_getData},
	{"getId", &luna_wrapper_sgt_TileCache_Tile::_bind_getId},
	{"getTId", &luna_wrapper_sgt_TileCache_Tile::_bind_getTId},
	{"getProducerId", &luna_wrapper_sgt_TileCache_Tile::_bind_getProducerId},
	{"getLevel", &luna_wrapper_sgt_TileCache_Tile::_bind_getLevel},
	{"getTx", &luna_wrapper_sgt_TileCache_Tile::_bind_getTx},
	{"getTy", &luna_wrapper_sgt_TileCache_Tile::_bind_getTy},
	{"getTask", &luna_wrapper_sgt_TileCache_Tile::_bind_getTask},
	{"dynCast", &luna_wrapper_sgt_TileCache_Tile::_bind_dynCast},
	{"__eq", &luna_wrapper_sgt_TileCache_Tile::_bind___eq},
	{"fromVoid", &luna_wrapper_sgt_TileCache_Tile::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_TileCache_Tile::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::TileCache::Tile >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::TileCache::Tile >::enumValues[] = {
	{0,0}
};


