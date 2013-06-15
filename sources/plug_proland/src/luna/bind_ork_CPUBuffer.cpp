#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_CPUBuffer.h>

class luna_wrapper_ork_CPUBuffer {
public:
	typedef Luna< ork::CPUBuffer > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ork::Object,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		ork::CPUBuffer* self= (ork::CPUBuffer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::CPUBuffer >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Object(lua_State *L) {
		// all checked are already performed before reaching this point.
		//ork::CPUBuffer* ptr= dynamic_cast< ork::CPUBuffer* >(Luna< ork::Object >::check(L,1));
		ork::CPUBuffer* ptr= luna_caster< ork::Object, ork::CPUBuffer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::CPUBuffer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_bind(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_data(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_unbind(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_dirty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_bind(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_data(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_unbind(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_dirty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::CPUBuffer::CPUBuffer(const void * data = 0)
	static ork::CPUBuffer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::CPUBuffer::CPUBuffer(const void * data = 0) function, expected prototype:\nork::CPUBuffer::CPUBuffer(const void * data = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const void* data=luatop>0 ? (Luna< void >::check(L,1)) : (const void*)0;

		return new ork::CPUBuffer(data);
	}

	// ork::CPUBuffer::CPUBuffer(lua_Table * data, const void * data = 0)
	static ork::CPUBuffer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::CPUBuffer::CPUBuffer(lua_Table * data, const void * data = 0) function, expected prototype:\nork::CPUBuffer::CPUBuffer(lua_Table * data, const void * data = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const void* data=luatop>1 ? (Luna< void >::check(L,2)) : (const void*)0;

		return new wrapper_ork_CPUBuffer(L,NULL, data);
	}

	// Overload binder for ork::CPUBuffer::CPUBuffer
	static ork::CPUBuffer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function CPUBuffer, cannot match any of the overloads for function CPUBuffer:\n  CPUBuffer(const void *)\n  CPUBuffer(lua_Table *, const void *)\n");
		return NULL;
	}


	// Function binds:
	// void ork::CPUBuffer::bind(int target) const
	static int _bind_bind(lua_State *L) {
		if (!_lg_typecheck_bind(L)) {
			luaL_error(L, "luna typecheck failed in void ork::CPUBuffer::bind(int target) const function, expected prototype:\nvoid ork::CPUBuffer::bind(int target) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int target=(int)lua_tointeger(L,2);

		ork::CPUBuffer* self=Luna< ork::Object >::checkSubType< ork::CPUBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::CPUBuffer::bind(int) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->bind(target);

		return 0;
	}

	// void * ork::CPUBuffer::data(int offset) const
	static int _bind_data(lua_State *L) {
		if (!_lg_typecheck_data(L)) {
			luaL_error(L, "luna typecheck failed in void * ork::CPUBuffer::data(int offset) const function, expected prototype:\nvoid * ork::CPUBuffer::data(int offset) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int offset=(int)lua_tointeger(L,2);

		ork::CPUBuffer* self=Luna< ork::Object >::checkSubType< ork::CPUBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void * ork::CPUBuffer::data(int) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->data(offset);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void ork::CPUBuffer::unbind(int target) const
	static int _bind_unbind(lua_State *L) {
		if (!_lg_typecheck_unbind(L)) {
			luaL_error(L, "luna typecheck failed in void ork::CPUBuffer::unbind(int target) const function, expected prototype:\nvoid ork::CPUBuffer::unbind(int target) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int target=(int)lua_tointeger(L,2);

		ork::CPUBuffer* self=Luna< ork::Object >::checkSubType< ork::CPUBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::CPUBuffer::unbind(int) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->unbind(target);

		return 0;
	}

	// void ork::CPUBuffer::dirty() const
	static int _bind_dirty(lua_State *L) {
		if (!_lg_typecheck_dirty(L)) {
			luaL_error(L, "luna typecheck failed in void ork::CPUBuffer::dirty() const function, expected prototype:\nvoid ork::CPUBuffer::dirty() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::CPUBuffer* self=Luna< ork::Object >::checkSubType< ork::CPUBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::CPUBuffer::dirty() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->dirty();

		return 0;
	}

	// void ork::CPUBuffer::base_bind(int target) const
	static int _bind_base_bind(lua_State *L) {
		if (!_lg_typecheck_base_bind(L)) {
			luaL_error(L, "luna typecheck failed in void ork::CPUBuffer::base_bind(int target) const function, expected prototype:\nvoid ork::CPUBuffer::base_bind(int target) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int target=(int)lua_tointeger(L,2);

		ork::CPUBuffer* self=Luna< ork::Object >::checkSubType< ork::CPUBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::CPUBuffer::base_bind(int) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CPUBuffer::bind(target);

		return 0;
	}

	// void * ork::CPUBuffer::base_data(int offset) const
	static int _bind_base_data(lua_State *L) {
		if (!_lg_typecheck_base_data(L)) {
			luaL_error(L, "luna typecheck failed in void * ork::CPUBuffer::base_data(int offset) const function, expected prototype:\nvoid * ork::CPUBuffer::base_data(int offset) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int offset=(int)lua_tointeger(L,2);

		ork::CPUBuffer* self=Luna< ork::Object >::checkSubType< ork::CPUBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void * ork::CPUBuffer::base_data(int) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->CPUBuffer::data(offset);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void ork::CPUBuffer::base_unbind(int target) const
	static int _bind_base_unbind(lua_State *L) {
		if (!_lg_typecheck_base_unbind(L)) {
			luaL_error(L, "luna typecheck failed in void ork::CPUBuffer::base_unbind(int target) const function, expected prototype:\nvoid ork::CPUBuffer::base_unbind(int target) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int target=(int)lua_tointeger(L,2);

		ork::CPUBuffer* self=Luna< ork::Object >::checkSubType< ork::CPUBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::CPUBuffer::base_unbind(int) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CPUBuffer::unbind(target);

		return 0;
	}

	// void ork::CPUBuffer::base_dirty() const
	static int _bind_base_dirty(lua_State *L) {
		if (!_lg_typecheck_base_dirty(L)) {
			luaL_error(L, "luna typecheck failed in void ork::CPUBuffer::base_dirty() const function, expected prototype:\nvoid ork::CPUBuffer::base_dirty() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::CPUBuffer* self=Luna< ork::Object >::checkSubType< ork::CPUBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::CPUBuffer::base_dirty() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CPUBuffer::dirty();

		return 0;
	}


	// Operator binds:

};

ork::CPUBuffer* LunaTraits< ork::CPUBuffer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_CPUBuffer::_bind_ctor(L);
}

void LunaTraits< ork::CPUBuffer >::_bind_dtor(ork::CPUBuffer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::CPUBuffer >::className[] = "CPUBuffer";
const char LunaTraits< ork::CPUBuffer >::fullName[] = "ork::CPUBuffer";
const char LunaTraits< ork::CPUBuffer >::moduleName[] = "ork";
const char* LunaTraits< ork::CPUBuffer >::parents[] = {"ork.Buffer", 0};
const int LunaTraits< ork::CPUBuffer >::hash = 11808325;
const int LunaTraits< ork::CPUBuffer >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::CPUBuffer >::methods[] = {
	{"bind", &luna_wrapper_ork_CPUBuffer::_bind_bind},
	{"data", &luna_wrapper_ork_CPUBuffer::_bind_data},
	{"unbind", &luna_wrapper_ork_CPUBuffer::_bind_unbind},
	{"dirty", &luna_wrapper_ork_CPUBuffer::_bind_dirty},
	{"base_bind", &luna_wrapper_ork_CPUBuffer::_bind_base_bind},
	{"base_data", &luna_wrapper_ork_CPUBuffer::_bind_base_data},
	{"base_unbind", &luna_wrapper_ork_CPUBuffer::_bind_base_unbind},
	{"base_dirty", &luna_wrapper_ork_CPUBuffer::_bind_base_dirty},
	{"fromVoid", &luna_wrapper_ork_CPUBuffer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_CPUBuffer::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_CPUBuffer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::CPUBuffer >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_CPUBuffer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::CPUBuffer >::enumValues[] = {
	{0,0}
};


