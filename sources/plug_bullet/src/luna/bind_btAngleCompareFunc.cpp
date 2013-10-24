#include <plug_common.h>

class luna_wrapper_btAngleCompareFunc {
public:
	typedef Luna< btAngleCompareFunc > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86058940) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btAngleCompareFunc*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btAngleCompareFunc* rhs =(Luna< btAngleCompareFunc >::check(L,2));
		btAngleCompareFunc* self=(Luna< btAngleCompareFunc >::check(L,1));
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

		btAngleCompareFunc* self= (btAngleCompareFunc*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btAngleCompareFunc >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86058940) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btAngleCompareFunc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		btAngleCompareFunc* self=(Luna< btAngleCompareFunc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btAngleCompareFunc");
		
		return luna_dynamicCast(L,converters,"btAngleCompareFunc",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getAnchor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAnchor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}


	// Constructor binds:
	// btAngleCompareFunc::btAngleCompareFunc(const btVector3 & anchor)
	static btAngleCompareFunc* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in btAngleCompareFunc::btAngleCompareFunc(const btVector3 & anchor) function, expected prototype:\nbtAngleCompareFunc::btAngleCompareFunc(const btVector3 & anchor)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* anchor_ptr=(Luna< btVector3 >::check(L,1));
		if( !anchor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg anchor in btAngleCompareFunc::btAngleCompareFunc function");
		}
		const btVector3 & anchor=*anchor_ptr;

		return new btAngleCompareFunc(anchor);
	}


	// Function binds:
	// btVector3 btAngleCompareFunc::m_anchor()
	static int _bind_getAnchor(lua_State *L) {
		if (!_lg_typecheck_getAnchor(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btAngleCompareFunc::m_anchor() function, expected prototype:\nbtVector3 btAngleCompareFunc::m_anchor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btAngleCompareFunc* self=(Luna< btAngleCompareFunc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btAngleCompareFunc::m_anchor(). Got : '%s'\n%s",typeid(Luna< btAngleCompareFunc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->m_anchor;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btAngleCompareFunc::m_anchor(btVector3 value)
	static int _bind_setAnchor(lua_State *L) {
		if (!_lg_typecheck_setAnchor(L)) {
			luaL_error(L, "luna typecheck failed in void btAngleCompareFunc::m_anchor(btVector3 value) function, expected prototype:\nvoid btAngleCompareFunc::m_anchor(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btAngleCompareFunc::m_anchor function");
		}
		btVector3 value=*value_ptr;

		btAngleCompareFunc* self=(Luna< btAngleCompareFunc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btAngleCompareFunc::m_anchor(btVector3). Got : '%s'\n%s",typeid(Luna< btAngleCompareFunc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_anchor = value;

		return 0;
	}


	// Operator binds:
	// bool btAngleCompareFunc::operator()(const GrahamVector3 & a, const GrahamVector3 & b) const
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luaL_error(L, "luna typecheck failed in bool btAngleCompareFunc::operator()(const GrahamVector3 & a, const GrahamVector3 & b) const function, expected prototype:\nbool btAngleCompareFunc::operator()(const GrahamVector3 & a, const GrahamVector3 & b) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const GrahamVector3* a_ptr=(Luna< btVector3 >::checkSubType< GrahamVector3 >(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in btAngleCompareFunc::operator() function");
		}
		const GrahamVector3 & a=*a_ptr;
		const GrahamVector3* b_ptr=(Luna< btVector3 >::checkSubType< GrahamVector3 >(L,3));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in btAngleCompareFunc::operator() function");
		}
		const GrahamVector3 & b=*b_ptr;

		btAngleCompareFunc* self=(Luna< btAngleCompareFunc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btAngleCompareFunc::operator()(const GrahamVector3 &, const GrahamVector3 &) const. Got : '%s'\n%s",typeid(Luna< btAngleCompareFunc >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator()(a, b);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

btAngleCompareFunc* LunaTraits< btAngleCompareFunc >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btAngleCompareFunc::_bind_ctor(L);
}

void LunaTraits< btAngleCompareFunc >::_bind_dtor(btAngleCompareFunc* obj) {
	delete obj;
}

const char LunaTraits< btAngleCompareFunc >::className[] = "btAngleCompareFunc";
const char LunaTraits< btAngleCompareFunc >::fullName[] = "btAngleCompareFunc";
const char LunaTraits< btAngleCompareFunc >::moduleName[] = "bullet";
const char* LunaTraits< btAngleCompareFunc >::parents[] = {0};
const int LunaTraits< btAngleCompareFunc >::hash = 86058940;
const int LunaTraits< btAngleCompareFunc >::uniqueIDs[] = {86058940,0};

luna_RegType LunaTraits< btAngleCompareFunc >::methods[] = {
	{"getAnchor", &luna_wrapper_btAngleCompareFunc::_bind_getAnchor},
	{"setAnchor", &luna_wrapper_btAngleCompareFunc::_bind_setAnchor},
	{"op_call", &luna_wrapper_btAngleCompareFunc::_bind_op_call},
	{"dynCast", &luna_wrapper_btAngleCompareFunc::_bind_dynCast},
	{"__eq", &luna_wrapper_btAngleCompareFunc::_bind___eq},
	{"fromVoid", &luna_wrapper_btAngleCompareFunc::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btAngleCompareFunc::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btAngleCompareFunc >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btAngleCompareFunc >::enumValues[] = {
	{0,0}
};


