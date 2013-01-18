#include <plug_common.h>

#include <luna/wrappers/wrapper_btTriangleBuffer.h>

class luna_wrapper_btTriangleBuffer {
public:
	typedef Luna< btTriangleBuffer > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btTriangleCallback* self=(Luna< btTriangleCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btTriangleCallback,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,46793426) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btTriangleCallback*)");
		}

		btTriangleCallback* rhs =(Luna< btTriangleCallback >::check(L,2));
		btTriangleCallback* self=(Luna< btTriangleCallback >::check(L,1));
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

		btTriangleBuffer* self= (btTriangleBuffer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btTriangleBuffer >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,46793426) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btTriangleCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btTriangleCallback(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btTriangleBuffer* ptr= dynamic_cast< btTriangleBuffer* >(Luna< btTriangleCallback >::check(L,1));
		btTriangleBuffer* ptr= luna_caster< btTriangleCallback, btTriangleBuffer >::cast(Luna< btTriangleCallback >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btTriangleBuffer >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_processTriangle(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91544891)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumTriangles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTriangle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clearBuffer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_processTriangle(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91544891)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btTriangleBuffer::btTriangleBuffer()
	static btTriangleBuffer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTriangleBuffer::btTriangleBuffer() function, expected prototype:\nbtTriangleBuffer::btTriangleBuffer()\nClass arguments details:\n");
		}


		return new btTriangleBuffer();
	}

	// btTriangleBuffer::btTriangleBuffer(lua_Table * data)
	static btTriangleBuffer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTriangleBuffer::btTriangleBuffer(lua_Table * data) function, expected prototype:\nbtTriangleBuffer::btTriangleBuffer(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btTriangleBuffer(L,NULL);
	}

	// Overload binder for btTriangleBuffer::btTriangleBuffer
	static btTriangleBuffer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btTriangleBuffer, cannot match any of the overloads for function btTriangleBuffer:\n  btTriangleBuffer()\n  btTriangleBuffer(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void btTriangleBuffer::processTriangle(btVector3 * triangle, int partId, int triangleIndex)
	static int _bind_processTriangle(lua_State *L) {
		if (!_lg_typecheck_processTriangle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleBuffer::processTriangle(btVector3 * triangle, int partId, int triangleIndex) function, expected prototype:\nvoid btTriangleBuffer::processTriangle(btVector3 * triangle, int partId, int triangleIndex)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* triangle=(Luna< btVector3 >::check(L,2));
		int partId=(int)lua_tointeger(L,3);
		int triangleIndex=(int)lua_tointeger(L,4);

		btTriangleBuffer* self=Luna< btTriangleCallback >::checkSubType< btTriangleBuffer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleBuffer::processTriangle(btVector3 *, int, int). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		self->processTriangle(triangle, partId, triangleIndex);

		return 0;
	}

	// int btTriangleBuffer::getNumTriangles() const
	static int _bind_getNumTriangles(lua_State *L) {
		if (!_lg_typecheck_getNumTriangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTriangleBuffer::getNumTriangles() const function, expected prototype:\nint btTriangleBuffer::getNumTriangles() const\nClass arguments details:\n");
		}


		btTriangleBuffer* self=Luna< btTriangleCallback >::checkSubType< btTriangleBuffer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTriangleBuffer::getNumTriangles() const. Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		int lret = self->getNumTriangles();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const btTriangle & btTriangleBuffer::getTriangle(int index) const
	static int _bind_getTriangle(lua_State *L) {
		if (!_lg_typecheck_getTriangle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btTriangle & btTriangleBuffer::getTriangle(int index) const function, expected prototype:\nconst btTriangle & btTriangleBuffer::getTriangle(int index) const\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btTriangleBuffer* self=Luna< btTriangleCallback >::checkSubType< btTriangleBuffer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btTriangle & btTriangleBuffer::getTriangle(int) const. Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		const btTriangle* lret = &self->getTriangle(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTriangle >::push(L,lret,false);

		return 1;
	}

	// void btTriangleBuffer::clearBuffer()
	static int _bind_clearBuffer(lua_State *L) {
		if (!_lg_typecheck_clearBuffer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleBuffer::clearBuffer() function, expected prototype:\nvoid btTriangleBuffer::clearBuffer()\nClass arguments details:\n");
		}


		btTriangleBuffer* self=Luna< btTriangleCallback >::checkSubType< btTriangleBuffer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleBuffer::clearBuffer(). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		self->clearBuffer();

		return 0;
	}

	// void btTriangleBuffer::base_processTriangle(btVector3 * triangle, int partId, int triangleIndex)
	static int _bind_base_processTriangle(lua_State *L) {
		if (!_lg_typecheck_base_processTriangle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleBuffer::base_processTriangle(btVector3 * triangle, int partId, int triangleIndex) function, expected prototype:\nvoid btTriangleBuffer::base_processTriangle(btVector3 * triangle, int partId, int triangleIndex)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* triangle=(Luna< btVector3 >::check(L,2));
		int partId=(int)lua_tointeger(L,3);
		int triangleIndex=(int)lua_tointeger(L,4);

		btTriangleBuffer* self=Luna< btTriangleCallback >::checkSubType< btTriangleBuffer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleBuffer::base_processTriangle(btVector3 *, int, int). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		self->btTriangleBuffer::processTriangle(triangle, partId, triangleIndex);

		return 0;
	}


	// Operator binds:

};

btTriangleBuffer* LunaTraits< btTriangleBuffer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btTriangleBuffer::_bind_ctor(L);
}

void LunaTraits< btTriangleBuffer >::_bind_dtor(btTriangleBuffer* obj) {
	delete obj;
}

const char LunaTraits< btTriangleBuffer >::className[] = "btTriangleBuffer";
const char LunaTraits< btTriangleBuffer >::fullName[] = "btTriangleBuffer";
const char LunaTraits< btTriangleBuffer >::moduleName[] = "bullet";
const char* LunaTraits< btTriangleBuffer >::parents[] = {"bullet.btTriangleCallback", 0};
const int LunaTraits< btTriangleBuffer >::hash = 19049994;
const int LunaTraits< btTriangleBuffer >::uniqueIDs[] = {46793426,0};

luna_RegType LunaTraits< btTriangleBuffer >::methods[] = {
	{"processTriangle", &luna_wrapper_btTriangleBuffer::_bind_processTriangle},
	{"getNumTriangles", &luna_wrapper_btTriangleBuffer::_bind_getNumTriangles},
	{"getTriangle", &luna_wrapper_btTriangleBuffer::_bind_getTriangle},
	{"clearBuffer", &luna_wrapper_btTriangleBuffer::_bind_clearBuffer},
	{"base_processTriangle", &luna_wrapper_btTriangleBuffer::_bind_base_processTriangle},
	{"__eq", &luna_wrapper_btTriangleBuffer::_bind___eq},
	{"fromVoid", &luna_wrapper_btTriangleBuffer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btTriangleBuffer::_bind_asVoid},
	{"getTable", &luna_wrapper_btTriangleBuffer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btTriangleBuffer >::converters[] = {
	{"btTriangleCallback", &luna_wrapper_btTriangleBuffer::_cast_from_btTriangleCallback},
	{0,0}
};

luna_RegEnumType LunaTraits< btTriangleBuffer >::enumValues[] = {
	{0,0}
};


