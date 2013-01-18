#include <plug_common.h>

#include <luna/wrappers/wrapper_btDefaultMotionState.h>

class luna_wrapper_btDefaultMotionState {
public:
	typedef Luna< btDefaultMotionState > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btMotionState* self=(Luna< btMotionState >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btMotionState,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,40784278) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btMotionState*)");
		}

		btMotionState* rhs =(Luna< btMotionState >::check(L,2));
		btMotionState* self=(Luna< btMotionState >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_btMotionState(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btDefaultMotionState* ptr= dynamic_cast< btDefaultMotionState* >(Luna< btMotionState >::check(L,1));
		btDefaultMotionState* ptr= luna_caster< btMotionState, btDefaultMotionState >::cast(Luna< btMotionState >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btDefaultMotionState >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && !Luna<void>::has_uniqueid(L,1,13247377) ) return false;
		if( luatop>0 && (!(Luna< btTransform >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( luatop>1 && (!(Luna< btTransform >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( luatop>1 && (!(Luna< btTransform >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( luatop>2 && (!(Luna< btTransform >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getWorldTransform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWorldTransform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGraphicsWorldTrans(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCenterOfMassOffset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStartWorldTrans(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUserPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGraphicsWorldTrans(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCenterOfMassOffset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStartWorldTrans(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUserPointer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getWorldTransform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setWorldTransform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btDefaultMotionState::btDefaultMotionState(const btTransform & startTrans = btTransform::getIdentity (), const btTransform & centerOfMassOffset = btTransform::getIdentity ())
	static btDefaultMotionState* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDefaultMotionState::btDefaultMotionState(const btTransform & startTrans = btTransform::getIdentity (), const btTransform & centerOfMassOffset = btTransform::getIdentity ()) function, expected prototype:\nbtDefaultMotionState::btDefaultMotionState(const btTransform & startTrans = btTransform::getIdentity (), const btTransform & centerOfMassOffset = btTransform::getIdentity ())\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 13247377\n");
		}

		int luatop = lua_gettop(L);

		const btTransform* startTrans_ptr=luatop>0 ? (Luna< btTransform >::check(L,1)) : NULL;
		if( luatop>0 && !startTrans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg startTrans in btDefaultMotionState::btDefaultMotionState function");
		}
		const btTransform & startTrans=luatop>0 ? *startTrans_ptr : btTransform::getIdentity ();
		const btTransform* centerOfMassOffset_ptr=luatop>1 ? (Luna< btTransform >::check(L,2)) : NULL;
		if( luatop>1 && !centerOfMassOffset_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg centerOfMassOffset in btDefaultMotionState::btDefaultMotionState function");
		}
		const btTransform & centerOfMassOffset=luatop>1 ? *centerOfMassOffset_ptr : btTransform::getIdentity ();

		return new btDefaultMotionState(startTrans, centerOfMassOffset);
	}

	// btDefaultMotionState::btDefaultMotionState(lua_Table * data, const btTransform & startTrans = btTransform::getIdentity (), const btTransform & centerOfMassOffset = btTransform::getIdentity ())
	static btDefaultMotionState* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDefaultMotionState::btDefaultMotionState(lua_Table * data, const btTransform & startTrans = btTransform::getIdentity (), const btTransform & centerOfMassOffset = btTransform::getIdentity ()) function, expected prototype:\nbtDefaultMotionState::btDefaultMotionState(lua_Table * data, const btTransform & startTrans = btTransform::getIdentity (), const btTransform & centerOfMassOffset = btTransform::getIdentity ())\nClass arguments details:\narg 2 ID = 13247377\narg 3 ID = 13247377\n");
		}

		int luatop = lua_gettop(L);

		const btTransform* startTrans_ptr=luatop>1 ? (Luna< btTransform >::check(L,2)) : NULL;
		if( luatop>1 && !startTrans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg startTrans in btDefaultMotionState::btDefaultMotionState function");
		}
		const btTransform & startTrans=luatop>1 ? *startTrans_ptr : btTransform::getIdentity ();
		const btTransform* centerOfMassOffset_ptr=luatop>2 ? (Luna< btTransform >::check(L,3)) : NULL;
		if( luatop>2 && !centerOfMassOffset_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg centerOfMassOffset in btDefaultMotionState::btDefaultMotionState function");
		}
		const btTransform & centerOfMassOffset=luatop>2 ? *centerOfMassOffset_ptr : btTransform::getIdentity ();

		return new wrapper_btDefaultMotionState(L,NULL, startTrans, centerOfMassOffset);
	}

	// Overload binder for btDefaultMotionState::btDefaultMotionState
	static btDefaultMotionState* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btDefaultMotionState, cannot match any of the overloads for function btDefaultMotionState:\n  btDefaultMotionState(const btTransform &, const btTransform &)\n  btDefaultMotionState(lua_Table *, const btTransform &, const btTransform &)\n");
		return NULL;
	}


	// Function binds:
	// void btDefaultMotionState::getWorldTransform(btTransform & centerOfMassWorldTrans) const
	static int _bind_getWorldTransform(lua_State *L) {
		if (!_lg_typecheck_getWorldTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDefaultMotionState::getWorldTransform(btTransform & centerOfMassWorldTrans) const function, expected prototype:\nvoid btDefaultMotionState::getWorldTransform(btTransform & centerOfMassWorldTrans) const\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		btTransform* centerOfMassWorldTrans_ptr=(Luna< btTransform >::check(L,2));
		if( !centerOfMassWorldTrans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg centerOfMassWorldTrans in btDefaultMotionState::getWorldTransform function");
		}
		btTransform & centerOfMassWorldTrans=*centerOfMassWorldTrans_ptr;

		btDefaultMotionState* self=Luna< btMotionState >::checkSubType< btDefaultMotionState >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDefaultMotionState::getWorldTransform(btTransform &) const. Got : '%s'",typeid(Luna< btMotionState >::check(L,1)).name());
		}
		self->getWorldTransform(centerOfMassWorldTrans);

		return 0;
	}

	// void btDefaultMotionState::setWorldTransform(const btTransform & centerOfMassWorldTrans)
	static int _bind_setWorldTransform(lua_State *L) {
		if (!_lg_typecheck_setWorldTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDefaultMotionState::setWorldTransform(const btTransform & centerOfMassWorldTrans) function, expected prototype:\nvoid btDefaultMotionState::setWorldTransform(const btTransform & centerOfMassWorldTrans)\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		const btTransform* centerOfMassWorldTrans_ptr=(Luna< btTransform >::check(L,2));
		if( !centerOfMassWorldTrans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg centerOfMassWorldTrans in btDefaultMotionState::setWorldTransform function");
		}
		const btTransform & centerOfMassWorldTrans=*centerOfMassWorldTrans_ptr;

		btDefaultMotionState* self=Luna< btMotionState >::checkSubType< btDefaultMotionState >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDefaultMotionState::setWorldTransform(const btTransform &). Got : '%s'",typeid(Luna< btMotionState >::check(L,1)).name());
		}
		self->setWorldTransform(centerOfMassWorldTrans);

		return 0;
	}

	// btTransform btDefaultMotionState::m_graphicsWorldTrans()
	static int _bind_getGraphicsWorldTrans(lua_State *L) {
		if (!_lg_typecheck_getGraphicsWorldTrans(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform btDefaultMotionState::m_graphicsWorldTrans() function, expected prototype:\nbtTransform btDefaultMotionState::m_graphicsWorldTrans()\nClass arguments details:\n");
		}


		btDefaultMotionState* self=Luna< btMotionState >::checkSubType< btDefaultMotionState >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform btDefaultMotionState::m_graphicsWorldTrans(). Got : '%s'",typeid(Luna< btMotionState >::check(L,1)).name());
		}
		const btTransform* lret = &self->m_graphicsWorldTrans;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// btTransform btDefaultMotionState::m_centerOfMassOffset()
	static int _bind_getCenterOfMassOffset(lua_State *L) {
		if (!_lg_typecheck_getCenterOfMassOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform btDefaultMotionState::m_centerOfMassOffset() function, expected prototype:\nbtTransform btDefaultMotionState::m_centerOfMassOffset()\nClass arguments details:\n");
		}


		btDefaultMotionState* self=Luna< btMotionState >::checkSubType< btDefaultMotionState >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform btDefaultMotionState::m_centerOfMassOffset(). Got : '%s'",typeid(Luna< btMotionState >::check(L,1)).name());
		}
		const btTransform* lret = &self->m_centerOfMassOffset;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// btTransform btDefaultMotionState::m_startWorldTrans()
	static int _bind_getStartWorldTrans(lua_State *L) {
		if (!_lg_typecheck_getStartWorldTrans(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform btDefaultMotionState::m_startWorldTrans() function, expected prototype:\nbtTransform btDefaultMotionState::m_startWorldTrans()\nClass arguments details:\n");
		}


		btDefaultMotionState* self=Luna< btMotionState >::checkSubType< btDefaultMotionState >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform btDefaultMotionState::m_startWorldTrans(). Got : '%s'",typeid(Luna< btMotionState >::check(L,1)).name());
		}
		const btTransform* lret = &self->m_startWorldTrans;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// void * btDefaultMotionState::m_userPointer()
	static int _bind_getUserPointer(lua_State *L) {
		if (!_lg_typecheck_getUserPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btDefaultMotionState::m_userPointer() function, expected prototype:\nvoid * btDefaultMotionState::m_userPointer()\nClass arguments details:\n");
		}


		btDefaultMotionState* self=Luna< btMotionState >::checkSubType< btDefaultMotionState >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btDefaultMotionState::m_userPointer(). Got : '%s'",typeid(Luna< btMotionState >::check(L,1)).name());
		}
		void * lret = self->m_userPointer;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void btDefaultMotionState::m_graphicsWorldTrans(btTransform value)
	static int _bind_setGraphicsWorldTrans(lua_State *L) {
		if (!_lg_typecheck_setGraphicsWorldTrans(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDefaultMotionState::m_graphicsWorldTrans(btTransform value) function, expected prototype:\nvoid btDefaultMotionState::m_graphicsWorldTrans(btTransform value)\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		btTransform* value_ptr=(Luna< btTransform >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btDefaultMotionState::m_graphicsWorldTrans function");
		}
		btTransform value=*value_ptr;

		btDefaultMotionState* self=Luna< btMotionState >::checkSubType< btDefaultMotionState >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDefaultMotionState::m_graphicsWorldTrans(btTransform). Got : '%s'",typeid(Luna< btMotionState >::check(L,1)).name());
		}
		self->m_graphicsWorldTrans = value;

		return 0;
	}

	// void btDefaultMotionState::m_centerOfMassOffset(btTransform value)
	static int _bind_setCenterOfMassOffset(lua_State *L) {
		if (!_lg_typecheck_setCenterOfMassOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDefaultMotionState::m_centerOfMassOffset(btTransform value) function, expected prototype:\nvoid btDefaultMotionState::m_centerOfMassOffset(btTransform value)\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		btTransform* value_ptr=(Luna< btTransform >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btDefaultMotionState::m_centerOfMassOffset function");
		}
		btTransform value=*value_ptr;

		btDefaultMotionState* self=Luna< btMotionState >::checkSubType< btDefaultMotionState >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDefaultMotionState::m_centerOfMassOffset(btTransform). Got : '%s'",typeid(Luna< btMotionState >::check(L,1)).name());
		}
		self->m_centerOfMassOffset = value;

		return 0;
	}

	// void btDefaultMotionState::m_startWorldTrans(btTransform value)
	static int _bind_setStartWorldTrans(lua_State *L) {
		if (!_lg_typecheck_setStartWorldTrans(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDefaultMotionState::m_startWorldTrans(btTransform value) function, expected prototype:\nvoid btDefaultMotionState::m_startWorldTrans(btTransform value)\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		btTransform* value_ptr=(Luna< btTransform >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btDefaultMotionState::m_startWorldTrans function");
		}
		btTransform value=*value_ptr;

		btDefaultMotionState* self=Luna< btMotionState >::checkSubType< btDefaultMotionState >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDefaultMotionState::m_startWorldTrans(btTransform). Got : '%s'",typeid(Luna< btMotionState >::check(L,1)).name());
		}
		self->m_startWorldTrans = value;

		return 0;
	}

	// void btDefaultMotionState::m_userPointer(void * value)
	static int _bind_setUserPointer(lua_State *L) {
		if (!_lg_typecheck_setUserPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDefaultMotionState::m_userPointer(void * value) function, expected prototype:\nvoid btDefaultMotionState::m_userPointer(void * value)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,2));

		btDefaultMotionState* self=Luna< btMotionState >::checkSubType< btDefaultMotionState >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDefaultMotionState::m_userPointer(void *). Got : '%s'",typeid(Luna< btMotionState >::check(L,1)).name());
		}
		self->m_userPointer = value;

		return 0;
	}

	// void btDefaultMotionState::base_getWorldTransform(btTransform & centerOfMassWorldTrans) const
	static int _bind_base_getWorldTransform(lua_State *L) {
		if (!_lg_typecheck_base_getWorldTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDefaultMotionState::base_getWorldTransform(btTransform & centerOfMassWorldTrans) const function, expected prototype:\nvoid btDefaultMotionState::base_getWorldTransform(btTransform & centerOfMassWorldTrans) const\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		btTransform* centerOfMassWorldTrans_ptr=(Luna< btTransform >::check(L,2));
		if( !centerOfMassWorldTrans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg centerOfMassWorldTrans in btDefaultMotionState::base_getWorldTransform function");
		}
		btTransform & centerOfMassWorldTrans=*centerOfMassWorldTrans_ptr;

		btDefaultMotionState* self=Luna< btMotionState >::checkSubType< btDefaultMotionState >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDefaultMotionState::base_getWorldTransform(btTransform &) const. Got : '%s'",typeid(Luna< btMotionState >::check(L,1)).name());
		}
		self->btDefaultMotionState::getWorldTransform(centerOfMassWorldTrans);

		return 0;
	}

	// void btDefaultMotionState::base_setWorldTransform(const btTransform & centerOfMassWorldTrans)
	static int _bind_base_setWorldTransform(lua_State *L) {
		if (!_lg_typecheck_base_setWorldTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDefaultMotionState::base_setWorldTransform(const btTransform & centerOfMassWorldTrans) function, expected prototype:\nvoid btDefaultMotionState::base_setWorldTransform(const btTransform & centerOfMassWorldTrans)\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		const btTransform* centerOfMassWorldTrans_ptr=(Luna< btTransform >::check(L,2));
		if( !centerOfMassWorldTrans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg centerOfMassWorldTrans in btDefaultMotionState::base_setWorldTransform function");
		}
		const btTransform & centerOfMassWorldTrans=*centerOfMassWorldTrans_ptr;

		btDefaultMotionState* self=Luna< btMotionState >::checkSubType< btDefaultMotionState >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDefaultMotionState::base_setWorldTransform(const btTransform &). Got : '%s'",typeid(Luna< btMotionState >::check(L,1)).name());
		}
		self->btDefaultMotionState::setWorldTransform(centerOfMassWorldTrans);

		return 0;
	}


	// Operator binds:

};

btDefaultMotionState* LunaTraits< btDefaultMotionState >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btDefaultMotionState::_bind_ctor(L);
}

void LunaTraits< btDefaultMotionState >::_bind_dtor(btDefaultMotionState* obj) {
	delete obj;
}

const char LunaTraits< btDefaultMotionState >::className[] = "btDefaultMotionState";
const char LunaTraits< btDefaultMotionState >::fullName[] = "btDefaultMotionState";
const char LunaTraits< btDefaultMotionState >::moduleName[] = "bullet";
const char* LunaTraits< btDefaultMotionState >::parents[] = {"bullet.btMotionState", 0};
const int LunaTraits< btDefaultMotionState >::hash = 94103998;
const int LunaTraits< btDefaultMotionState >::uniqueIDs[] = {40784278,0};

luna_RegType LunaTraits< btDefaultMotionState >::methods[] = {
	{"getWorldTransform", &luna_wrapper_btDefaultMotionState::_bind_getWorldTransform},
	{"setWorldTransform", &luna_wrapper_btDefaultMotionState::_bind_setWorldTransform},
	{"getGraphicsWorldTrans", &luna_wrapper_btDefaultMotionState::_bind_getGraphicsWorldTrans},
	{"getCenterOfMassOffset", &luna_wrapper_btDefaultMotionState::_bind_getCenterOfMassOffset},
	{"getStartWorldTrans", &luna_wrapper_btDefaultMotionState::_bind_getStartWorldTrans},
	{"getUserPointer", &luna_wrapper_btDefaultMotionState::_bind_getUserPointer},
	{"setGraphicsWorldTrans", &luna_wrapper_btDefaultMotionState::_bind_setGraphicsWorldTrans},
	{"setCenterOfMassOffset", &luna_wrapper_btDefaultMotionState::_bind_setCenterOfMassOffset},
	{"setStartWorldTrans", &luna_wrapper_btDefaultMotionState::_bind_setStartWorldTrans},
	{"setUserPointer", &luna_wrapper_btDefaultMotionState::_bind_setUserPointer},
	{"base_getWorldTransform", &luna_wrapper_btDefaultMotionState::_bind_base_getWorldTransform},
	{"base_setWorldTransform", &luna_wrapper_btDefaultMotionState::_bind_base_setWorldTransform},
	{"__eq", &luna_wrapper_btDefaultMotionState::_bind___eq},
	{"getTable", &luna_wrapper_btDefaultMotionState::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btDefaultMotionState >::converters[] = {
	{"btMotionState", &luna_wrapper_btDefaultMotionState::_cast_from_btMotionState},
	{0,0}
};

luna_RegEnumType LunaTraits< btDefaultMotionState >::enumValues[] = {
	{0,0}
};


