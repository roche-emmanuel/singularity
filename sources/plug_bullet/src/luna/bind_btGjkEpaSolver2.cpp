#include <plug_common.h>

class luna_wrapper_btGjkEpaSolver2 {
public:
	typedef Luna< btGjkEpaSolver2 > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,4650462) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btGjkEpaSolver2*)");
		}

		btGjkEpaSolver2* rhs =(Luna< btGjkEpaSolver2 >::check(L,2));
		btGjkEpaSolver2* self=(Luna< btGjkEpaSolver2 >::check(L,1));
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

		btGjkEpaSolver2* self=(Luna< btGjkEpaSolver2 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btGjkEpaSolver2");
		
		return luna_dynamicCast(L,converters,"btGjkEpaSolver2",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_StackSizeRequirement(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Distance(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58243831)) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,58243831)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,71238194) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Penetration(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>7 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58243831)) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,58243831)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,71238194) ) return false;
		if( luatop>6 && lua_isboolean(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SignedDistance_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,1))) ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,58243831)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,3)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,71238194) ) return false;
		if( (!(Luna< btGjkEpaSolver2::sResults >::check(L,5))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SignedDistance_overload_2(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58243831)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,1)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,2))) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,58243831)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,3)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,71238194) ) return false;
		if( (!(Luna< btGjkEpaSolver2::sResults >::check(L,6))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static int btGjkEpaSolver2::StackSizeRequirement()
	static int _bind_StackSizeRequirement(lua_State *L) {
		if (!_lg_typecheck_StackSizeRequirement(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static int btGjkEpaSolver2::StackSizeRequirement() function, expected prototype:\nstatic int btGjkEpaSolver2::StackSizeRequirement()\nClass arguments details:\n");
		}


		int lret = btGjkEpaSolver2::StackSizeRequirement();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static bool btGjkEpaSolver2::Distance(const btConvexShape * shape0, const btTransform & wtrs0, const btConvexShape * shape1, const btTransform & wtrs1, const btVector3 & guess, btGjkEpaSolver2::sResults & results)
	static int _bind_Distance(lua_State *L) {
		if (!_lg_typecheck_Distance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool btGjkEpaSolver2::Distance(const btConvexShape * shape0, const btTransform & wtrs0, const btConvexShape * shape1, const btTransform & wtrs1, const btVector3 & guess, btGjkEpaSolver2::sResults & results) function, expected prototype:\nstatic bool btGjkEpaSolver2::Distance(const btConvexShape * shape0, const btTransform & wtrs0, const btConvexShape * shape1, const btTransform & wtrs1, const btVector3 & guess, btGjkEpaSolver2::sResults & results)\nClass arguments details:\narg 1 ID = 58243831\narg 2 ID = 13247377\narg 3 ID = 58243831\narg 4 ID = 13247377\narg 5 ID = 91544891\narg 6 ID = 71238194\n");
		}

		const btConvexShape* shape0=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,1));
		const btTransform* wtrs0_ptr=(Luna< btTransform >::check(L,2));
		if( !wtrs0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg wtrs0 in btGjkEpaSolver2::Distance function");
		}
		const btTransform & wtrs0=*wtrs0_ptr;
		const btConvexShape* shape1=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,3));
		const btTransform* wtrs1_ptr=(Luna< btTransform >::check(L,4));
		if( !wtrs1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg wtrs1 in btGjkEpaSolver2::Distance function");
		}
		const btTransform & wtrs1=*wtrs1_ptr;
		const btVector3* guess_ptr=(Luna< btVector3 >::check(L,5));
		if( !guess_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg guess in btGjkEpaSolver2::Distance function");
		}
		const btVector3 & guess=*guess_ptr;
		btGjkEpaSolver2::sResults* results_ptr=(Luna< btGjkEpaSolver2::sResults >::check(L,6));
		if( !results_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg results in btGjkEpaSolver2::Distance function");
		}
		btGjkEpaSolver2::sResults & results=*results_ptr;

		bool lret = btGjkEpaSolver2::Distance(shape0, wtrs0, shape1, wtrs1, guess, results);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool btGjkEpaSolver2::Penetration(const btConvexShape * shape0, const btTransform & wtrs0, const btConvexShape * shape1, const btTransform & wtrs1, const btVector3 & guess, btGjkEpaSolver2::sResults & results, bool usemargins = true)
	static int _bind_Penetration(lua_State *L) {
		if (!_lg_typecheck_Penetration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool btGjkEpaSolver2::Penetration(const btConvexShape * shape0, const btTransform & wtrs0, const btConvexShape * shape1, const btTransform & wtrs1, const btVector3 & guess, btGjkEpaSolver2::sResults & results, bool usemargins = true) function, expected prototype:\nstatic bool btGjkEpaSolver2::Penetration(const btConvexShape * shape0, const btTransform & wtrs0, const btConvexShape * shape1, const btTransform & wtrs1, const btVector3 & guess, btGjkEpaSolver2::sResults & results, bool usemargins = true)\nClass arguments details:\narg 1 ID = 58243831\narg 2 ID = 13247377\narg 3 ID = 58243831\narg 4 ID = 13247377\narg 5 ID = 91544891\narg 6 ID = 71238194\n");
		}

		int luatop = lua_gettop(L);

		const btConvexShape* shape0=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,1));
		const btTransform* wtrs0_ptr=(Luna< btTransform >::check(L,2));
		if( !wtrs0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg wtrs0 in btGjkEpaSolver2::Penetration function");
		}
		const btTransform & wtrs0=*wtrs0_ptr;
		const btConvexShape* shape1=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,3));
		const btTransform* wtrs1_ptr=(Luna< btTransform >::check(L,4));
		if( !wtrs1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg wtrs1 in btGjkEpaSolver2::Penetration function");
		}
		const btTransform & wtrs1=*wtrs1_ptr;
		const btVector3* guess_ptr=(Luna< btVector3 >::check(L,5));
		if( !guess_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg guess in btGjkEpaSolver2::Penetration function");
		}
		const btVector3 & guess=*guess_ptr;
		btGjkEpaSolver2::sResults* results_ptr=(Luna< btGjkEpaSolver2::sResults >::check(L,6));
		if( !results_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg results in btGjkEpaSolver2::Penetration function");
		}
		btGjkEpaSolver2::sResults & results=*results_ptr;
		bool usemargins=luatop>6 ? (bool)(lua_toboolean(L,7)==1) : true;

		bool lret = btGjkEpaSolver2::Penetration(shape0, wtrs0, shape1, wtrs1, guess, results, usemargins);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static float btGjkEpaSolver2::SignedDistance(const btVector3 & position, float margin, const btConvexShape * shape, const btTransform & wtrs, btGjkEpaSolver2::sResults & results)
	static int _bind_SignedDistance_overload_1(lua_State *L) {
		if (!_lg_typecheck_SignedDistance_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static float btGjkEpaSolver2::SignedDistance(const btVector3 & position, float margin, const btConvexShape * shape, const btTransform & wtrs, btGjkEpaSolver2::sResults & results) function, expected prototype:\nstatic float btGjkEpaSolver2::SignedDistance(const btVector3 & position, float margin, const btConvexShape * shape, const btTransform & wtrs, btGjkEpaSolver2::sResults & results)\nClass arguments details:\narg 1 ID = 91544891\narg 3 ID = 58243831\narg 4 ID = 13247377\narg 5 ID = 71238194\n");
		}

		const btVector3* position_ptr=(Luna< btVector3 >::check(L,1));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in btGjkEpaSolver2::SignedDistance function");
		}
		const btVector3 & position=*position_ptr;
		float margin=(float)lua_tonumber(L,2);
		const btConvexShape* shape=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,3));
		const btTransform* wtrs_ptr=(Luna< btTransform >::check(L,4));
		if( !wtrs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg wtrs in btGjkEpaSolver2::SignedDistance function");
		}
		const btTransform & wtrs=*wtrs_ptr;
		btGjkEpaSolver2::sResults* results_ptr=(Luna< btGjkEpaSolver2::sResults >::check(L,5));
		if( !results_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg results in btGjkEpaSolver2::SignedDistance function");
		}
		btGjkEpaSolver2::sResults & results=*results_ptr;

		float lret = btGjkEpaSolver2::SignedDistance(position, margin, shape, wtrs, results);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static bool btGjkEpaSolver2::SignedDistance(const btConvexShape * shape0, const btTransform & wtrs0, const btConvexShape * shape1, const btTransform & wtrs1, const btVector3 & guess, btGjkEpaSolver2::sResults & results)
	static int _bind_SignedDistance_overload_2(lua_State *L) {
		if (!_lg_typecheck_SignedDistance_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool btGjkEpaSolver2::SignedDistance(const btConvexShape * shape0, const btTransform & wtrs0, const btConvexShape * shape1, const btTransform & wtrs1, const btVector3 & guess, btGjkEpaSolver2::sResults & results) function, expected prototype:\nstatic bool btGjkEpaSolver2::SignedDistance(const btConvexShape * shape0, const btTransform & wtrs0, const btConvexShape * shape1, const btTransform & wtrs1, const btVector3 & guess, btGjkEpaSolver2::sResults & results)\nClass arguments details:\narg 1 ID = 58243831\narg 2 ID = 13247377\narg 3 ID = 58243831\narg 4 ID = 13247377\narg 5 ID = 91544891\narg 6 ID = 71238194\n");
		}

		const btConvexShape* shape0=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,1));
		const btTransform* wtrs0_ptr=(Luna< btTransform >::check(L,2));
		if( !wtrs0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg wtrs0 in btGjkEpaSolver2::SignedDistance function");
		}
		const btTransform & wtrs0=*wtrs0_ptr;
		const btConvexShape* shape1=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,3));
		const btTransform* wtrs1_ptr=(Luna< btTransform >::check(L,4));
		if( !wtrs1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg wtrs1 in btGjkEpaSolver2::SignedDistance function");
		}
		const btTransform & wtrs1=*wtrs1_ptr;
		const btVector3* guess_ptr=(Luna< btVector3 >::check(L,5));
		if( !guess_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg guess in btGjkEpaSolver2::SignedDistance function");
		}
		const btVector3 & guess=*guess_ptr;
		btGjkEpaSolver2::sResults* results_ptr=(Luna< btGjkEpaSolver2::sResults >::check(L,6));
		if( !results_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg results in btGjkEpaSolver2::SignedDistance function");
		}
		btGjkEpaSolver2::sResults & results=*results_ptr;

		bool lret = btGjkEpaSolver2::SignedDistance(shape0, wtrs0, shape1, wtrs1, guess, results);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for btGjkEpaSolver2::SignedDistance
	static int _bind_SignedDistance(lua_State *L) {
		if (_lg_typecheck_SignedDistance_overload_1(L)) return _bind_SignedDistance_overload_1(L);
		if (_lg_typecheck_SignedDistance_overload_2(L)) return _bind_SignedDistance_overload_2(L);

		luaL_error(L, "error in function SignedDistance, cannot match any of the overloads for function SignedDistance:\n  SignedDistance(const btVector3 &, float, const btConvexShape *, const btTransform &, btGjkEpaSolver2::sResults &)\n  SignedDistance(const btConvexShape *, const btTransform &, const btConvexShape *, const btTransform &, const btVector3 &, btGjkEpaSolver2::sResults &)\n");
		return 0;
	}


	// Operator binds:

};

btGjkEpaSolver2* LunaTraits< btGjkEpaSolver2 >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btGjkEpaSolver2 >::_bind_dtor(btGjkEpaSolver2* obj) {
	delete obj;
}

const char LunaTraits< btGjkEpaSolver2 >::className[] = "btGjkEpaSolver2";
const char LunaTraits< btGjkEpaSolver2 >::fullName[] = "btGjkEpaSolver2";
const char LunaTraits< btGjkEpaSolver2 >::moduleName[] = "bullet";
const char* LunaTraits< btGjkEpaSolver2 >::parents[] = {0};
const int LunaTraits< btGjkEpaSolver2 >::hash = 4650462;
const int LunaTraits< btGjkEpaSolver2 >::uniqueIDs[] = {4650462,0};

luna_RegType LunaTraits< btGjkEpaSolver2 >::methods[] = {
	{"StackSizeRequirement", &luna_wrapper_btGjkEpaSolver2::_bind_StackSizeRequirement},
	{"Distance", &luna_wrapper_btGjkEpaSolver2::_bind_Distance},
	{"Penetration", &luna_wrapper_btGjkEpaSolver2::_bind_Penetration},
	{"SignedDistance", &luna_wrapper_btGjkEpaSolver2::_bind_SignedDistance},
	{"dynCast", &luna_wrapper_btGjkEpaSolver2::_bind_dynCast},
	{"__eq", &luna_wrapper_btGjkEpaSolver2::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btGjkEpaSolver2 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btGjkEpaSolver2 >::enumValues[] = {
	{0,0}
};


