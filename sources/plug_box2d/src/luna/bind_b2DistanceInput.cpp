#include <plug_common.h>

class luna_wrapper_b2DistanceInput {
public:
	typedef Luna< b2DistanceInput > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50940514) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2DistanceInput*)");
		}

		b2DistanceInput* rhs =(Luna< b2DistanceInput >::check(L,2));
		b2DistanceInput* self=(Luna< b2DistanceInput >::check(L,1));
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

		b2DistanceInput* self= (b2DistanceInput*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2DistanceInput >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50940514) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< b2DistanceInput >::check(L,1));
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

		b2DistanceInput* self=(Luna< b2DistanceInput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2DistanceInput");
		
		return luna_dynamicCast(L,converters,"b2DistanceInput",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getProxyA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProxyB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTransformA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTransformB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUseRadii(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setProxyA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57523462) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setProxyB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57523462) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTransformA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,44090970) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTransformB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,44090970) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUseRadii(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// b2DistanceProxy b2DistanceInput::proxyA()
	static int _bind_getProxyA(lua_State *L) {
		if (!_lg_typecheck_getProxyA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2DistanceProxy b2DistanceInput::proxyA() function, expected prototype:\nb2DistanceProxy b2DistanceInput::proxyA()\nClass arguments details:\n");
		}


		b2DistanceInput* self=(Luna< b2DistanceInput >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2DistanceProxy b2DistanceInput::proxyA(). Got : '%s'",typeid(Luna< b2DistanceInput >::check(L,1)).name());
		}
		const b2DistanceProxy* lret = &self->proxyA;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2DistanceProxy >::push(L,lret,false);

		return 1;
	}

	// b2DistanceProxy b2DistanceInput::proxyB()
	static int _bind_getProxyB(lua_State *L) {
		if (!_lg_typecheck_getProxyB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2DistanceProxy b2DistanceInput::proxyB() function, expected prototype:\nb2DistanceProxy b2DistanceInput::proxyB()\nClass arguments details:\n");
		}


		b2DistanceInput* self=(Luna< b2DistanceInput >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2DistanceProxy b2DistanceInput::proxyB(). Got : '%s'",typeid(Luna< b2DistanceInput >::check(L,1)).name());
		}
		const b2DistanceProxy* lret = &self->proxyB;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2DistanceProxy >::push(L,lret,false);

		return 1;
	}

	// b2Transform b2DistanceInput::transformA()
	static int _bind_getTransformA(lua_State *L) {
		if (!_lg_typecheck_getTransformA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Transform b2DistanceInput::transformA() function, expected prototype:\nb2Transform b2DistanceInput::transformA()\nClass arguments details:\n");
		}


		b2DistanceInput* self=(Luna< b2DistanceInput >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Transform b2DistanceInput::transformA(). Got : '%s'",typeid(Luna< b2DistanceInput >::check(L,1)).name());
		}
		const b2Transform* lret = &self->transformA;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Transform >::push(L,lret,false);

		return 1;
	}

	// b2Transform b2DistanceInput::transformB()
	static int _bind_getTransformB(lua_State *L) {
		if (!_lg_typecheck_getTransformB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Transform b2DistanceInput::transformB() function, expected prototype:\nb2Transform b2DistanceInput::transformB()\nClass arguments details:\n");
		}


		b2DistanceInput* self=(Luna< b2DistanceInput >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Transform b2DistanceInput::transformB(). Got : '%s'",typeid(Luna< b2DistanceInput >::check(L,1)).name());
		}
		const b2Transform* lret = &self->transformB;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Transform >::push(L,lret,false);

		return 1;
	}

	// bool b2DistanceInput::useRadii()
	static int _bind_getUseRadii(lua_State *L) {
		if (!_lg_typecheck_getUseRadii(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2DistanceInput::useRadii() function, expected prototype:\nbool b2DistanceInput::useRadii()\nClass arguments details:\n");
		}


		b2DistanceInput* self=(Luna< b2DistanceInput >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2DistanceInput::useRadii(). Got : '%s'",typeid(Luna< b2DistanceInput >::check(L,1)).name());
		}
		bool lret = self->useRadii;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void b2DistanceInput::proxyA(b2DistanceProxy value)
	static int _bind_setProxyA(lua_State *L) {
		if (!_lg_typecheck_setProxyA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2DistanceInput::proxyA(b2DistanceProxy value) function, expected prototype:\nvoid b2DistanceInput::proxyA(b2DistanceProxy value)\nClass arguments details:\narg 1 ID = 57523462\n");
		}

		b2DistanceProxy* value_ptr=(Luna< b2DistanceProxy >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2DistanceInput::proxyA function");
		}
		b2DistanceProxy value=*value_ptr;

		b2DistanceInput* self=(Luna< b2DistanceInput >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2DistanceInput::proxyA(b2DistanceProxy). Got : '%s'",typeid(Luna< b2DistanceInput >::check(L,1)).name());
		}
		self->proxyA = value;

		return 0;
	}

	// void b2DistanceInput::proxyB(b2DistanceProxy value)
	static int _bind_setProxyB(lua_State *L) {
		if (!_lg_typecheck_setProxyB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2DistanceInput::proxyB(b2DistanceProxy value) function, expected prototype:\nvoid b2DistanceInput::proxyB(b2DistanceProxy value)\nClass arguments details:\narg 1 ID = 57523462\n");
		}

		b2DistanceProxy* value_ptr=(Luna< b2DistanceProxy >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2DistanceInput::proxyB function");
		}
		b2DistanceProxy value=*value_ptr;

		b2DistanceInput* self=(Luna< b2DistanceInput >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2DistanceInput::proxyB(b2DistanceProxy). Got : '%s'",typeid(Luna< b2DistanceInput >::check(L,1)).name());
		}
		self->proxyB = value;

		return 0;
	}

	// void b2DistanceInput::transformA(b2Transform value)
	static int _bind_setTransformA(lua_State *L) {
		if (!_lg_typecheck_setTransformA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2DistanceInput::transformA(b2Transform value) function, expected prototype:\nvoid b2DistanceInput::transformA(b2Transform value)\nClass arguments details:\narg 1 ID = 44090970\n");
		}

		b2Transform* value_ptr=(Luna< b2Transform >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2DistanceInput::transformA function");
		}
		b2Transform value=*value_ptr;

		b2DistanceInput* self=(Luna< b2DistanceInput >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2DistanceInput::transformA(b2Transform). Got : '%s'",typeid(Luna< b2DistanceInput >::check(L,1)).name());
		}
		self->transformA = value;

		return 0;
	}

	// void b2DistanceInput::transformB(b2Transform value)
	static int _bind_setTransformB(lua_State *L) {
		if (!_lg_typecheck_setTransformB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2DistanceInput::transformB(b2Transform value) function, expected prototype:\nvoid b2DistanceInput::transformB(b2Transform value)\nClass arguments details:\narg 1 ID = 44090970\n");
		}

		b2Transform* value_ptr=(Luna< b2Transform >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2DistanceInput::transformB function");
		}
		b2Transform value=*value_ptr;

		b2DistanceInput* self=(Luna< b2DistanceInput >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2DistanceInput::transformB(b2Transform). Got : '%s'",typeid(Luna< b2DistanceInput >::check(L,1)).name());
		}
		self->transformB = value;

		return 0;
	}

	// void b2DistanceInput::useRadii(bool value)
	static int _bind_setUseRadii(lua_State *L) {
		if (!_lg_typecheck_setUseRadii(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2DistanceInput::useRadii(bool value) function, expected prototype:\nvoid b2DistanceInput::useRadii(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		b2DistanceInput* self=(Luna< b2DistanceInput >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2DistanceInput::useRadii(bool). Got : '%s'",typeid(Luna< b2DistanceInput >::check(L,1)).name());
		}
		self->useRadii = value;

		return 0;
	}


	// Operator binds:

};

b2DistanceInput* LunaTraits< b2DistanceInput >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2DistanceInput >::_bind_dtor(b2DistanceInput* obj) {
	delete obj;
}

const char LunaTraits< b2DistanceInput >::className[] = "b2DistanceInput";
const char LunaTraits< b2DistanceInput >::fullName[] = "b2DistanceInput";
const char LunaTraits< b2DistanceInput >::moduleName[] = "box2d";
const char* LunaTraits< b2DistanceInput >::parents[] = {0};
const int LunaTraits< b2DistanceInput >::hash = 50940514;
const int LunaTraits< b2DistanceInput >::uniqueIDs[] = {50940514,0};

luna_RegType LunaTraits< b2DistanceInput >::methods[] = {
	{"getProxyA", &luna_wrapper_b2DistanceInput::_bind_getProxyA},
	{"getProxyB", &luna_wrapper_b2DistanceInput::_bind_getProxyB},
	{"getTransformA", &luna_wrapper_b2DistanceInput::_bind_getTransformA},
	{"getTransformB", &luna_wrapper_b2DistanceInput::_bind_getTransformB},
	{"getUseRadii", &luna_wrapper_b2DistanceInput::_bind_getUseRadii},
	{"setProxyA", &luna_wrapper_b2DistanceInput::_bind_setProxyA},
	{"setProxyB", &luna_wrapper_b2DistanceInput::_bind_setProxyB},
	{"setTransformA", &luna_wrapper_b2DistanceInput::_bind_setTransformA},
	{"setTransformB", &luna_wrapper_b2DistanceInput::_bind_setTransformB},
	{"setUseRadii", &luna_wrapper_b2DistanceInput::_bind_setUseRadii},
	{"dynCast", &luna_wrapper_b2DistanceInput::_bind_dynCast},
	{"__eq", &luna_wrapper_b2DistanceInput::_bind___eq},
	{"fromVoid", &luna_wrapper_b2DistanceInput::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2DistanceInput::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2DistanceInput >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2DistanceInput >::enumValues[] = {
	{0,0}
};


