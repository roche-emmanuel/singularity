#include <plug_common.h>

#include <luna/wrappers/wrapper_sgt_GPUTileStorage_GPUSlot.h>

class luna_wrapper_sgt_GPUTileStorage_GPUSlot {
public:
	typedef Luna< sgt::GPUTileStorage::GPUSlot > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgt::GPUTileStorage::GPUSlot* self=(Luna< sgt::GPUTileStorage::GPUSlot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<sgt::GPUTileStorage::GPUSlot,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,34060158) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(sgt::GPUTileStorage::GPUSlot*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgt::GPUTileStorage::GPUSlot* rhs =(Luna< sgt::GPUTileStorage::GPUSlot >::check(L,2));
		sgt::GPUTileStorage::GPUSlot* self=(Luna< sgt::GPUTileStorage::GPUSlot >::check(L,1));
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

		sgt::GPUTileStorage::GPUSlot* self= (sgt::GPUTileStorage::GPUSlot*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::GPUTileStorage::GPUSlot >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,34060158) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< sgt::GPUTileStorage::GPUSlot >::check(L,1));
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

		sgt::GPUTileStorage::GPUSlot* self=(Luna< sgt::GPUTileStorage::GPUSlot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::GPUTileStorage::GPUSlot");
		
		return luna_dynamicCast(L,converters,"sgt::GPUTileStorage::GPUSlot",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< sgt::TileStorage >(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Texture2DArray >(L,3)) ) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< sgt::TileStorage >(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Texture2DArray >(L,4)) ) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getT(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getL(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setT(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92078672) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::GPUTileStorage::GPUSlot::GPUSlot(sgt::TileStorage * owner, int index, osg::Texture2DArray * t, int l)
	static sgt::GPUTileStorage::GPUSlot* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in sgt::GPUTileStorage::GPUSlot::GPUSlot(sgt::TileStorage * owner, int index, osg::Texture2DArray * t, int l) function, expected prototype:\nsgt::GPUTileStorage::GPUSlot::GPUSlot(sgt::TileStorage * owner, int index, osg::Texture2DArray * t, int l)\nClass arguments details:\narg 1 ID = 44367388\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::TileStorage* owner=(Luna< osg::Referenced >::checkSubType< sgt::TileStorage >(L,1));
		int index=(int)lua_tointeger(L,2);
		osg::Texture2DArray* t=(Luna< osg::Referenced >::checkSubType< osg::Texture2DArray >(L,3));
		int l=(int)lua_tointeger(L,4);

		return new sgt::GPUTileStorage::GPUSlot(owner, index, t, l);
	}

	// sgt::GPUTileStorage::GPUSlot::GPUSlot(lua_Table * data, sgt::TileStorage * owner, int index, osg::Texture2DArray * t, int l)
	static sgt::GPUTileStorage::GPUSlot* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::GPUTileStorage::GPUSlot::GPUSlot(lua_Table * data, sgt::TileStorage * owner, int index, osg::Texture2DArray * t, int l) function, expected prototype:\nsgt::GPUTileStorage::GPUSlot::GPUSlot(lua_Table * data, sgt::TileStorage * owner, int index, osg::Texture2DArray * t, int l)\nClass arguments details:\narg 2 ID = 44367388\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::TileStorage* owner=(Luna< osg::Referenced >::checkSubType< sgt::TileStorage >(L,2));
		int index=(int)lua_tointeger(L,3);
		osg::Texture2DArray* t=(Luna< osg::Referenced >::checkSubType< osg::Texture2DArray >(L,4));
		int l=(int)lua_tointeger(L,5);

		return new wrapper_sgt_GPUTileStorage_GPUSlot(L,NULL, owner, index, t, l);
	}

	// Overload binder for sgt::GPUTileStorage::GPUSlot::GPUSlot
	static sgt::GPUTileStorage::GPUSlot* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function GPUSlot, cannot match any of the overloads for function GPUSlot:\n  GPUSlot(sgt::TileStorage *, int, osg::Texture2DArray *, int)\n  GPUSlot(lua_Table *, sgt::TileStorage *, int, osg::Texture2DArray *, int)\n");
		return NULL;
	}


	// Function binds:
	// int sgt::GPUTileStorage::GPUSlot::getIndex()
	static int _bind_getIndex(lua_State *L) {
		if (!_lg_typecheck_getIndex(L)) {
			luaL_error(L, "luna typecheck failed in int sgt::GPUTileStorage::GPUSlot::getIndex() function, expected prototype:\nint sgt::GPUTileStorage::GPUSlot::getIndex()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::GPUTileStorage::GPUSlot* self=(Luna< sgt::GPUTileStorage::GPUSlot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int sgt::GPUTileStorage::GPUSlot::getIndex(). Got : '%s'\n%s",typeid(Luna< sgt::GPUTileStorage::GPUSlot >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getIndex();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int sgt::GPUTileStorage::GPUSlot::getWidth()
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luaL_error(L, "luna typecheck failed in int sgt::GPUTileStorage::GPUSlot::getWidth() function, expected prototype:\nint sgt::GPUTileStorage::GPUSlot::getWidth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::GPUTileStorage::GPUSlot* self=(Luna< sgt::GPUTileStorage::GPUSlot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int sgt::GPUTileStorage::GPUSlot::getWidth(). Got : '%s'\n%s",typeid(Luna< sgt::GPUTileStorage::GPUSlot >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int sgt::GPUTileStorage::GPUSlot::getHeight()
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luaL_error(L, "luna typecheck failed in int sgt::GPUTileStorage::GPUSlot::getHeight() function, expected prototype:\nint sgt::GPUTileStorage::GPUSlot::getHeight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::GPUTileStorage::GPUSlot* self=(Luna< sgt::GPUTileStorage::GPUSlot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int sgt::GPUTileStorage::GPUSlot::getHeight(). Got : '%s'\n%s",typeid(Luna< sgt::GPUTileStorage::GPUSlot >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// sgtPtr< osg::Texture2DArray > sgt::GPUTileStorage::GPUSlot::t()
	static int _bind_getT(lua_State *L) {
		if (!_lg_typecheck_getT(L)) {
			luaL_error(L, "luna typecheck failed in sgtPtr< osg::Texture2DArray > sgt::GPUTileStorage::GPUSlot::t() function, expected prototype:\nsgtPtr< osg::Texture2DArray > sgt::GPUTileStorage::GPUSlot::t()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::GPUTileStorage::GPUSlot* self=(Luna< sgt::GPUTileStorage::GPUSlot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgtPtr< osg::Texture2DArray > sgt::GPUTileStorage::GPUSlot::t(). Got : '%s'\n%s",typeid(Luna< sgt::GPUTileStorage::GPUSlot >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const sgtPtr< osg::Texture2DArray >* lret = &self->t;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgtPtr< osg::Texture2DArray > >::push(L,lret,false);

		return 1;
	}

	// const int sgt::GPUTileStorage::GPUSlot::l()
	static int _bind_getL(lua_State *L) {
		if (!_lg_typecheck_getL(L)) {
			luaL_error(L, "luna typecheck failed in const int sgt::GPUTileStorage::GPUSlot::l() function, expected prototype:\nconst int sgt::GPUTileStorage::GPUSlot::l()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::GPUTileStorage::GPUSlot* self=(Luna< sgt::GPUTileStorage::GPUSlot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const int sgt::GPUTileStorage::GPUSlot::l(). Got : '%s'\n%s",typeid(Luna< sgt::GPUTileStorage::GPUSlot >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const int lret = self->l;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::GPUTileStorage::GPUSlot::t(sgtPtr< osg::Texture2DArray > value)
	static int _bind_setT(lua_State *L) {
		if (!_lg_typecheck_setT(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::GPUTileStorage::GPUSlot::t(sgtPtr< osg::Texture2DArray > value) function, expected prototype:\nvoid sgt::GPUTileStorage::GPUSlot::t(sgtPtr< osg::Texture2DArray > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		sgtPtr< osg::Texture2DArray >* value_ptr=(Luna< sgtPtr< osg::Texture2DArray > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in sgt::GPUTileStorage::GPUSlot::t function");
		}
		sgtPtr< osg::Texture2DArray > value=*value_ptr;

		sgt::GPUTileStorage::GPUSlot* self=(Luna< sgt::GPUTileStorage::GPUSlot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::GPUTileStorage::GPUSlot::t(sgtPtr< osg::Texture2DArray >). Got : '%s'\n%s",typeid(Luna< sgt::GPUTileStorage::GPUSlot >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->t = value;

		return 0;
	}


	// Operator binds:

};

sgt::GPUTileStorage::GPUSlot* LunaTraits< sgt::GPUTileStorage::GPUSlot >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_GPUTileStorage_GPUSlot::_bind_ctor(L);
}

void LunaTraits< sgt::GPUTileStorage::GPUSlot >::_bind_dtor(sgt::GPUTileStorage::GPUSlot* obj) {
	delete obj;
}

const char LunaTraits< sgt::GPUTileStorage::GPUSlot >::className[] = "GPUTileStorage_GPUSlot";
const char LunaTraits< sgt::GPUTileStorage::GPUSlot >::fullName[] = "sgt::GPUTileStorage::GPUSlot";
const char LunaTraits< sgt::GPUTileStorage::GPUSlot >::moduleName[] = "sgt";
const char* LunaTraits< sgt::GPUTileStorage::GPUSlot >::parents[] = {0};
const int LunaTraits< sgt::GPUTileStorage::GPUSlot >::hash = 34060158;
const int LunaTraits< sgt::GPUTileStorage::GPUSlot >::uniqueIDs[] = {34060158,0};

luna_RegType LunaTraits< sgt::GPUTileStorage::GPUSlot >::methods[] = {
	{"getIndex", &luna_wrapper_sgt_GPUTileStorage_GPUSlot::_bind_getIndex},
	{"getWidth", &luna_wrapper_sgt_GPUTileStorage_GPUSlot::_bind_getWidth},
	{"getHeight", &luna_wrapper_sgt_GPUTileStorage_GPUSlot::_bind_getHeight},
	{"getT", &luna_wrapper_sgt_GPUTileStorage_GPUSlot::_bind_getT},
	{"getL", &luna_wrapper_sgt_GPUTileStorage_GPUSlot::_bind_getL},
	{"setT", &luna_wrapper_sgt_GPUTileStorage_GPUSlot::_bind_setT},
	{"dynCast", &luna_wrapper_sgt_GPUTileStorage_GPUSlot::_bind_dynCast},
	{"__eq", &luna_wrapper_sgt_GPUTileStorage_GPUSlot::_bind___eq},
	{"fromVoid", &luna_wrapper_sgt_GPUTileStorage_GPUSlot::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_GPUTileStorage_GPUSlot::_bind_asVoid},
	{"getTable", &luna_wrapper_sgt_GPUTileStorage_GPUSlot::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::GPUTileStorage::GPUSlot >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::GPUTileStorage::GPUSlot >::enumValues[] = {
	{0,0}
};


