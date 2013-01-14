#include <plug_common.h>

class luna_wrapper_b2ContactVelocityConstraint {
public:
	typedef Luna< b2ContactVelocityConstraint > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,22596938) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2ContactVelocityConstraint*)");
		}

		b2ContactVelocityConstraint* rhs =(Luna< b2ContactVelocityConstraint >::check(L,2));
		b2ContactVelocityConstraint* self=(Luna< b2ContactVelocityConstraint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
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

		b2ContactVelocityConstraint* self=(Luna< b2ContactVelocityConstraint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2ContactVelocityConstraint");
		
		return luna_dynamicCast(L,converters,"b2ContactVelocityConstraint",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNormalMass(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getK(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIndexA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIndexB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInvMassA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInvMassB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInvIA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInvIB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFriction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRestitution(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPointCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getContactIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNormal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNormalMass(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80926888) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setK(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80926888) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIndexA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIndexB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInvMassA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInvMassB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInvIA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInvIB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFriction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRestitution(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPointCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setContactIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// b2Vec2 b2ContactVelocityConstraint::normal()
	static int _bind_getNormal(lua_State *L) {
		if (!_lg_typecheck_getNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2ContactVelocityConstraint::normal() function, expected prototype:\nb2Vec2 b2ContactVelocityConstraint::normal()\nClass arguments details:\n");
		}


		b2ContactVelocityConstraint* self=(Luna< b2ContactVelocityConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2ContactVelocityConstraint::normal(). Got : '%s'",typeid(Luna< b2ContactVelocityConstraint >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->normal;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// b2Mat22 b2ContactVelocityConstraint::normalMass()
	static int _bind_getNormalMass(lua_State *L) {
		if (!_lg_typecheck_getNormalMass(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Mat22 b2ContactVelocityConstraint::normalMass() function, expected prototype:\nb2Mat22 b2ContactVelocityConstraint::normalMass()\nClass arguments details:\n");
		}


		b2ContactVelocityConstraint* self=(Luna< b2ContactVelocityConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Mat22 b2ContactVelocityConstraint::normalMass(). Got : '%s'",typeid(Luna< b2ContactVelocityConstraint >::check(L,1)).name());
		}
		const b2Mat22* lret = &self->normalMass;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Mat22 >::push(L,lret,false);

		return 1;
	}

	// b2Mat22 b2ContactVelocityConstraint::K()
	static int _bind_getK(lua_State *L) {
		if (!_lg_typecheck_getK(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Mat22 b2ContactVelocityConstraint::K() function, expected prototype:\nb2Mat22 b2ContactVelocityConstraint::K()\nClass arguments details:\n");
		}


		b2ContactVelocityConstraint* self=(Luna< b2ContactVelocityConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Mat22 b2ContactVelocityConstraint::K(). Got : '%s'",typeid(Luna< b2ContactVelocityConstraint >::check(L,1)).name());
		}
		const b2Mat22* lret = &self->K;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Mat22 >::push(L,lret,false);

		return 1;
	}

	// signed int b2ContactVelocityConstraint::indexA()
	static int _bind_getIndexA(lua_State *L) {
		if (!_lg_typecheck_getIndexA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2ContactVelocityConstraint::indexA() function, expected prototype:\nsigned int b2ContactVelocityConstraint::indexA()\nClass arguments details:\n");
		}


		b2ContactVelocityConstraint* self=(Luna< b2ContactVelocityConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2ContactVelocityConstraint::indexA(). Got : '%s'",typeid(Luna< b2ContactVelocityConstraint >::check(L,1)).name());
		}
		signed int lret = self->indexA;
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed int b2ContactVelocityConstraint::indexB()
	static int _bind_getIndexB(lua_State *L) {
		if (!_lg_typecheck_getIndexB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2ContactVelocityConstraint::indexB() function, expected prototype:\nsigned int b2ContactVelocityConstraint::indexB()\nClass arguments details:\n");
		}


		b2ContactVelocityConstraint* self=(Luna< b2ContactVelocityConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2ContactVelocityConstraint::indexB(). Got : '%s'",typeid(Luna< b2ContactVelocityConstraint >::check(L,1)).name());
		}
		signed int lret = self->indexB;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2ContactVelocityConstraint::invMassA()
	static int _bind_getInvMassA(lua_State *L) {
		if (!_lg_typecheck_getInvMassA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2ContactVelocityConstraint::invMassA() function, expected prototype:\nfloat b2ContactVelocityConstraint::invMassA()\nClass arguments details:\n");
		}


		b2ContactVelocityConstraint* self=(Luna< b2ContactVelocityConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2ContactVelocityConstraint::invMassA(). Got : '%s'",typeid(Luna< b2ContactVelocityConstraint >::check(L,1)).name());
		}
		float lret = self->invMassA;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2ContactVelocityConstraint::invMassB()
	static int _bind_getInvMassB(lua_State *L) {
		if (!_lg_typecheck_getInvMassB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2ContactVelocityConstraint::invMassB() function, expected prototype:\nfloat b2ContactVelocityConstraint::invMassB()\nClass arguments details:\n");
		}


		b2ContactVelocityConstraint* self=(Luna< b2ContactVelocityConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2ContactVelocityConstraint::invMassB(). Got : '%s'",typeid(Luna< b2ContactVelocityConstraint >::check(L,1)).name());
		}
		float lret = self->invMassB;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2ContactVelocityConstraint::invIA()
	static int _bind_getInvIA(lua_State *L) {
		if (!_lg_typecheck_getInvIA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2ContactVelocityConstraint::invIA() function, expected prototype:\nfloat b2ContactVelocityConstraint::invIA()\nClass arguments details:\n");
		}


		b2ContactVelocityConstraint* self=(Luna< b2ContactVelocityConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2ContactVelocityConstraint::invIA(). Got : '%s'",typeid(Luna< b2ContactVelocityConstraint >::check(L,1)).name());
		}
		float lret = self->invIA;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2ContactVelocityConstraint::invIB()
	static int _bind_getInvIB(lua_State *L) {
		if (!_lg_typecheck_getInvIB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2ContactVelocityConstraint::invIB() function, expected prototype:\nfloat b2ContactVelocityConstraint::invIB()\nClass arguments details:\n");
		}


		b2ContactVelocityConstraint* self=(Luna< b2ContactVelocityConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2ContactVelocityConstraint::invIB(). Got : '%s'",typeid(Luna< b2ContactVelocityConstraint >::check(L,1)).name());
		}
		float lret = self->invIB;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2ContactVelocityConstraint::friction()
	static int _bind_getFriction(lua_State *L) {
		if (!_lg_typecheck_getFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2ContactVelocityConstraint::friction() function, expected prototype:\nfloat b2ContactVelocityConstraint::friction()\nClass arguments details:\n");
		}


		b2ContactVelocityConstraint* self=(Luna< b2ContactVelocityConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2ContactVelocityConstraint::friction(). Got : '%s'",typeid(Luna< b2ContactVelocityConstraint >::check(L,1)).name());
		}
		float lret = self->friction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2ContactVelocityConstraint::restitution()
	static int _bind_getRestitution(lua_State *L) {
		if (!_lg_typecheck_getRestitution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2ContactVelocityConstraint::restitution() function, expected prototype:\nfloat b2ContactVelocityConstraint::restitution()\nClass arguments details:\n");
		}


		b2ContactVelocityConstraint* self=(Luna< b2ContactVelocityConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2ContactVelocityConstraint::restitution(). Got : '%s'",typeid(Luna< b2ContactVelocityConstraint >::check(L,1)).name());
		}
		float lret = self->restitution;
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed int b2ContactVelocityConstraint::pointCount()
	static int _bind_getPointCount(lua_State *L) {
		if (!_lg_typecheck_getPointCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2ContactVelocityConstraint::pointCount() function, expected prototype:\nsigned int b2ContactVelocityConstraint::pointCount()\nClass arguments details:\n");
		}


		b2ContactVelocityConstraint* self=(Luna< b2ContactVelocityConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2ContactVelocityConstraint::pointCount(). Got : '%s'",typeid(Luna< b2ContactVelocityConstraint >::check(L,1)).name());
		}
		signed int lret = self->pointCount;
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed int b2ContactVelocityConstraint::contactIndex()
	static int _bind_getContactIndex(lua_State *L) {
		if (!_lg_typecheck_getContactIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2ContactVelocityConstraint::contactIndex() function, expected prototype:\nsigned int b2ContactVelocityConstraint::contactIndex()\nClass arguments details:\n");
		}


		b2ContactVelocityConstraint* self=(Luna< b2ContactVelocityConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2ContactVelocityConstraint::contactIndex(). Got : '%s'",typeid(Luna< b2ContactVelocityConstraint >::check(L,1)).name());
		}
		signed int lret = self->contactIndex;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2ContactVelocityConstraint::normal(b2Vec2 value)
	static int _bind_setNormal(lua_State *L) {
		if (!_lg_typecheck_setNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactVelocityConstraint::normal(b2Vec2 value) function, expected prototype:\nvoid b2ContactVelocityConstraint::normal(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2ContactVelocityConstraint::normal function");
		}
		b2Vec2 value=*value_ptr;

		b2ContactVelocityConstraint* self=(Luna< b2ContactVelocityConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactVelocityConstraint::normal(b2Vec2). Got : '%s'",typeid(Luna< b2ContactVelocityConstraint >::check(L,1)).name());
		}
		self->normal = value;

		return 0;
	}

	// void b2ContactVelocityConstraint::normalMass(b2Mat22 value)
	static int _bind_setNormalMass(lua_State *L) {
		if (!_lg_typecheck_setNormalMass(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactVelocityConstraint::normalMass(b2Mat22 value) function, expected prototype:\nvoid b2ContactVelocityConstraint::normalMass(b2Mat22 value)\nClass arguments details:\narg 1 ID = 80926888\n");
		}

		b2Mat22* value_ptr=(Luna< b2Mat22 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2ContactVelocityConstraint::normalMass function");
		}
		b2Mat22 value=*value_ptr;

		b2ContactVelocityConstraint* self=(Luna< b2ContactVelocityConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactVelocityConstraint::normalMass(b2Mat22). Got : '%s'",typeid(Luna< b2ContactVelocityConstraint >::check(L,1)).name());
		}
		self->normalMass = value;

		return 0;
	}

	// void b2ContactVelocityConstraint::K(b2Mat22 value)
	static int _bind_setK(lua_State *L) {
		if (!_lg_typecheck_setK(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactVelocityConstraint::K(b2Mat22 value) function, expected prototype:\nvoid b2ContactVelocityConstraint::K(b2Mat22 value)\nClass arguments details:\narg 1 ID = 80926888\n");
		}

		b2Mat22* value_ptr=(Luna< b2Mat22 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2ContactVelocityConstraint::K function");
		}
		b2Mat22 value=*value_ptr;

		b2ContactVelocityConstraint* self=(Luna< b2ContactVelocityConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactVelocityConstraint::K(b2Mat22). Got : '%s'",typeid(Luna< b2ContactVelocityConstraint >::check(L,1)).name());
		}
		self->K = value;

		return 0;
	}

	// void b2ContactVelocityConstraint::indexA(signed int value)
	static int _bind_setIndexA(lua_State *L) {
		if (!_lg_typecheck_setIndexA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactVelocityConstraint::indexA(signed int value) function, expected prototype:\nvoid b2ContactVelocityConstraint::indexA(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2ContactVelocityConstraint* self=(Luna< b2ContactVelocityConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactVelocityConstraint::indexA(signed int). Got : '%s'",typeid(Luna< b2ContactVelocityConstraint >::check(L,1)).name());
		}
		self->indexA = value;

		return 0;
	}

	// void b2ContactVelocityConstraint::indexB(signed int value)
	static int _bind_setIndexB(lua_State *L) {
		if (!_lg_typecheck_setIndexB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactVelocityConstraint::indexB(signed int value) function, expected prototype:\nvoid b2ContactVelocityConstraint::indexB(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2ContactVelocityConstraint* self=(Luna< b2ContactVelocityConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactVelocityConstraint::indexB(signed int). Got : '%s'",typeid(Luna< b2ContactVelocityConstraint >::check(L,1)).name());
		}
		self->indexB = value;

		return 0;
	}

	// void b2ContactVelocityConstraint::invMassA(float value)
	static int _bind_setInvMassA(lua_State *L) {
		if (!_lg_typecheck_setInvMassA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactVelocityConstraint::invMassA(float value) function, expected prototype:\nvoid b2ContactVelocityConstraint::invMassA(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2ContactVelocityConstraint* self=(Luna< b2ContactVelocityConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactVelocityConstraint::invMassA(float). Got : '%s'",typeid(Luna< b2ContactVelocityConstraint >::check(L,1)).name());
		}
		self->invMassA = value;

		return 0;
	}

	// void b2ContactVelocityConstraint::invMassB(float value)
	static int _bind_setInvMassB(lua_State *L) {
		if (!_lg_typecheck_setInvMassB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactVelocityConstraint::invMassB(float value) function, expected prototype:\nvoid b2ContactVelocityConstraint::invMassB(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2ContactVelocityConstraint* self=(Luna< b2ContactVelocityConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactVelocityConstraint::invMassB(float). Got : '%s'",typeid(Luna< b2ContactVelocityConstraint >::check(L,1)).name());
		}
		self->invMassB = value;

		return 0;
	}

	// void b2ContactVelocityConstraint::invIA(float value)
	static int _bind_setInvIA(lua_State *L) {
		if (!_lg_typecheck_setInvIA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactVelocityConstraint::invIA(float value) function, expected prototype:\nvoid b2ContactVelocityConstraint::invIA(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2ContactVelocityConstraint* self=(Luna< b2ContactVelocityConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactVelocityConstraint::invIA(float). Got : '%s'",typeid(Luna< b2ContactVelocityConstraint >::check(L,1)).name());
		}
		self->invIA = value;

		return 0;
	}

	// void b2ContactVelocityConstraint::invIB(float value)
	static int _bind_setInvIB(lua_State *L) {
		if (!_lg_typecheck_setInvIB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactVelocityConstraint::invIB(float value) function, expected prototype:\nvoid b2ContactVelocityConstraint::invIB(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2ContactVelocityConstraint* self=(Luna< b2ContactVelocityConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactVelocityConstraint::invIB(float). Got : '%s'",typeid(Luna< b2ContactVelocityConstraint >::check(L,1)).name());
		}
		self->invIB = value;

		return 0;
	}

	// void b2ContactVelocityConstraint::friction(float value)
	static int _bind_setFriction(lua_State *L) {
		if (!_lg_typecheck_setFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactVelocityConstraint::friction(float value) function, expected prototype:\nvoid b2ContactVelocityConstraint::friction(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2ContactVelocityConstraint* self=(Luna< b2ContactVelocityConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactVelocityConstraint::friction(float). Got : '%s'",typeid(Luna< b2ContactVelocityConstraint >::check(L,1)).name());
		}
		self->friction = value;

		return 0;
	}

	// void b2ContactVelocityConstraint::restitution(float value)
	static int _bind_setRestitution(lua_State *L) {
		if (!_lg_typecheck_setRestitution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactVelocityConstraint::restitution(float value) function, expected prototype:\nvoid b2ContactVelocityConstraint::restitution(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2ContactVelocityConstraint* self=(Luna< b2ContactVelocityConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactVelocityConstraint::restitution(float). Got : '%s'",typeid(Luna< b2ContactVelocityConstraint >::check(L,1)).name());
		}
		self->restitution = value;

		return 0;
	}

	// void b2ContactVelocityConstraint::pointCount(signed int value)
	static int _bind_setPointCount(lua_State *L) {
		if (!_lg_typecheck_setPointCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactVelocityConstraint::pointCount(signed int value) function, expected prototype:\nvoid b2ContactVelocityConstraint::pointCount(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2ContactVelocityConstraint* self=(Luna< b2ContactVelocityConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactVelocityConstraint::pointCount(signed int). Got : '%s'",typeid(Luna< b2ContactVelocityConstraint >::check(L,1)).name());
		}
		self->pointCount = value;

		return 0;
	}

	// void b2ContactVelocityConstraint::contactIndex(signed int value)
	static int _bind_setContactIndex(lua_State *L) {
		if (!_lg_typecheck_setContactIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactVelocityConstraint::contactIndex(signed int value) function, expected prototype:\nvoid b2ContactVelocityConstraint::contactIndex(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2ContactVelocityConstraint* self=(Luna< b2ContactVelocityConstraint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactVelocityConstraint::contactIndex(signed int). Got : '%s'",typeid(Luna< b2ContactVelocityConstraint >::check(L,1)).name());
		}
		self->contactIndex = value;

		return 0;
	}


	// Operator binds:

};

b2ContactVelocityConstraint* LunaTraits< b2ContactVelocityConstraint >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< b2ContactVelocityConstraint >::_bind_dtor(b2ContactVelocityConstraint* obj) {
	delete obj;
}

const char LunaTraits< b2ContactVelocityConstraint >::className[] = "b2ContactVelocityConstraint";
const char LunaTraits< b2ContactVelocityConstraint >::fullName[] = "b2ContactVelocityConstraint";
const char LunaTraits< b2ContactVelocityConstraint >::moduleName[] = "box2d";
const char* LunaTraits< b2ContactVelocityConstraint >::parents[] = {0};
const int LunaTraits< b2ContactVelocityConstraint >::hash = 22596938;
const int LunaTraits< b2ContactVelocityConstraint >::uniqueIDs[] = {22596938,0};

luna_RegType LunaTraits< b2ContactVelocityConstraint >::methods[] = {
	{"getNormal", &luna_wrapper_b2ContactVelocityConstraint::_bind_getNormal},
	{"getNormalMass", &luna_wrapper_b2ContactVelocityConstraint::_bind_getNormalMass},
	{"getK", &luna_wrapper_b2ContactVelocityConstraint::_bind_getK},
	{"getIndexA", &luna_wrapper_b2ContactVelocityConstraint::_bind_getIndexA},
	{"getIndexB", &luna_wrapper_b2ContactVelocityConstraint::_bind_getIndexB},
	{"getInvMassA", &luna_wrapper_b2ContactVelocityConstraint::_bind_getInvMassA},
	{"getInvMassB", &luna_wrapper_b2ContactVelocityConstraint::_bind_getInvMassB},
	{"getInvIA", &luna_wrapper_b2ContactVelocityConstraint::_bind_getInvIA},
	{"getInvIB", &luna_wrapper_b2ContactVelocityConstraint::_bind_getInvIB},
	{"getFriction", &luna_wrapper_b2ContactVelocityConstraint::_bind_getFriction},
	{"getRestitution", &luna_wrapper_b2ContactVelocityConstraint::_bind_getRestitution},
	{"getPointCount", &luna_wrapper_b2ContactVelocityConstraint::_bind_getPointCount},
	{"getContactIndex", &luna_wrapper_b2ContactVelocityConstraint::_bind_getContactIndex},
	{"setNormal", &luna_wrapper_b2ContactVelocityConstraint::_bind_setNormal},
	{"setNormalMass", &luna_wrapper_b2ContactVelocityConstraint::_bind_setNormalMass},
	{"setK", &luna_wrapper_b2ContactVelocityConstraint::_bind_setK},
	{"setIndexA", &luna_wrapper_b2ContactVelocityConstraint::_bind_setIndexA},
	{"setIndexB", &luna_wrapper_b2ContactVelocityConstraint::_bind_setIndexB},
	{"setInvMassA", &luna_wrapper_b2ContactVelocityConstraint::_bind_setInvMassA},
	{"setInvMassB", &luna_wrapper_b2ContactVelocityConstraint::_bind_setInvMassB},
	{"setInvIA", &luna_wrapper_b2ContactVelocityConstraint::_bind_setInvIA},
	{"setInvIB", &luna_wrapper_b2ContactVelocityConstraint::_bind_setInvIB},
	{"setFriction", &luna_wrapper_b2ContactVelocityConstraint::_bind_setFriction},
	{"setRestitution", &luna_wrapper_b2ContactVelocityConstraint::_bind_setRestitution},
	{"setPointCount", &luna_wrapper_b2ContactVelocityConstraint::_bind_setPointCount},
	{"setContactIndex", &luna_wrapper_b2ContactVelocityConstraint::_bind_setContactIndex},
	{"dynCast", &luna_wrapper_b2ContactVelocityConstraint::_bind_dynCast},
	{"__eq", &luna_wrapper_b2ContactVelocityConstraint::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< b2ContactVelocityConstraint >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2ContactVelocityConstraint >::enumValues[] = {
	{0,0}
};


