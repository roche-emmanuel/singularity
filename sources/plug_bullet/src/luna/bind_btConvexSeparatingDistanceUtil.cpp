#include <plug_common.h>

class luna_wrapper_btConvexSeparatingDistanceUtil {
public:
	typedef Luna< btConvexSeparatingDistanceUtil > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,41446546) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btConvexSeparatingDistanceUtil*)");
		}

		btConvexSeparatingDistanceUtil* rhs =(Luna< btConvexSeparatingDistanceUtil >::check(L,2));
		btConvexSeparatingDistanceUtil* self=(Luna< btConvexSeparatingDistanceUtil >::check(L,1));
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

		btConvexSeparatingDistanceUtil* self= (btConvexSeparatingDistanceUtil*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btConvexSeparatingDistanceUtil >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,41446546) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btConvexSeparatingDistanceUtil >::check(L,1));
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

		btConvexSeparatingDistanceUtil* self=(Luna< btConvexSeparatingDistanceUtil >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btConvexSeparatingDistanceUtil");
		
		return luna_dynamicCast(L,converters,"btConvexSeparatingDistanceUtil",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getConservativeSeparatingDistance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_updateSeparatingDistance(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_initSeparatingDistance(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,13247377) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btConvexSeparatingDistanceUtil::btConvexSeparatingDistanceUtil(float boundingRadiusA, float boundingRadiusB)
	static btConvexSeparatingDistanceUtil* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConvexSeparatingDistanceUtil::btConvexSeparatingDistanceUtil(float boundingRadiusA, float boundingRadiusB) function, expected prototype:\nbtConvexSeparatingDistanceUtil::btConvexSeparatingDistanceUtil(float boundingRadiusA, float boundingRadiusB)\nClass arguments details:\n");
		}

		float boundingRadiusA=(float)lua_tonumber(L,1);
		float boundingRadiusB=(float)lua_tonumber(L,2);

		return new btConvexSeparatingDistanceUtil(boundingRadiusA, boundingRadiusB);
	}


	// Function binds:
	// float btConvexSeparatingDistanceUtil::getConservativeSeparatingDistance()
	static int _bind_getConservativeSeparatingDistance(lua_State *L) {
		if (!_lg_typecheck_getConservativeSeparatingDistance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConvexSeparatingDistanceUtil::getConservativeSeparatingDistance() function, expected prototype:\nfloat btConvexSeparatingDistanceUtil::getConservativeSeparatingDistance()\nClass arguments details:\n");
		}


		btConvexSeparatingDistanceUtil* self=(Luna< btConvexSeparatingDistanceUtil >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConvexSeparatingDistanceUtil::getConservativeSeparatingDistance(). Got : '%s'",typeid(Luna< btConvexSeparatingDistanceUtil >::check(L,1)).name());
		}
		float lret = self->getConservativeSeparatingDistance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConvexSeparatingDistanceUtil::updateSeparatingDistance(const btTransform & transA, const btTransform & transB)
	static int _bind_updateSeparatingDistance(lua_State *L) {
		if (!_lg_typecheck_updateSeparatingDistance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexSeparatingDistanceUtil::updateSeparatingDistance(const btTransform & transA, const btTransform & transB) function, expected prototype:\nvoid btConvexSeparatingDistanceUtil::updateSeparatingDistance(const btTransform & transA, const btTransform & transB)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 13247377\n");
		}

		const btTransform* transA_ptr=(Luna< btTransform >::check(L,2));
		if( !transA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transA in btConvexSeparatingDistanceUtil::updateSeparatingDistance function");
		}
		const btTransform & transA=*transA_ptr;
		const btTransform* transB_ptr=(Luna< btTransform >::check(L,3));
		if( !transB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transB in btConvexSeparatingDistanceUtil::updateSeparatingDistance function");
		}
		const btTransform & transB=*transB_ptr;

		btConvexSeparatingDistanceUtil* self=(Luna< btConvexSeparatingDistanceUtil >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexSeparatingDistanceUtil::updateSeparatingDistance(const btTransform &, const btTransform &). Got : '%s'",typeid(Luna< btConvexSeparatingDistanceUtil >::check(L,1)).name());
		}
		self->updateSeparatingDistance(transA, transB);

		return 0;
	}

	// void btConvexSeparatingDistanceUtil::initSeparatingDistance(const btVector3 & separatingVector, float separatingDistance, const btTransform & transA, const btTransform & transB)
	static int _bind_initSeparatingDistance(lua_State *L) {
		if (!_lg_typecheck_initSeparatingDistance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexSeparatingDistanceUtil::initSeparatingDistance(const btVector3 & separatingVector, float separatingDistance, const btTransform & transA, const btTransform & transB) function, expected prototype:\nvoid btConvexSeparatingDistanceUtil::initSeparatingDistance(const btVector3 & separatingVector, float separatingDistance, const btTransform & transA, const btTransform & transB)\nClass arguments details:\narg 1 ID = 91544891\narg 3 ID = 13247377\narg 4 ID = 13247377\n");
		}

		const btVector3* separatingVector_ptr=(Luna< btVector3 >::check(L,2));
		if( !separatingVector_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg separatingVector in btConvexSeparatingDistanceUtil::initSeparatingDistance function");
		}
		const btVector3 & separatingVector=*separatingVector_ptr;
		float separatingDistance=(float)lua_tonumber(L,3);
		const btTransform* transA_ptr=(Luna< btTransform >::check(L,4));
		if( !transA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transA in btConvexSeparatingDistanceUtil::initSeparatingDistance function");
		}
		const btTransform & transA=*transA_ptr;
		const btTransform* transB_ptr=(Luna< btTransform >::check(L,5));
		if( !transB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transB in btConvexSeparatingDistanceUtil::initSeparatingDistance function");
		}
		const btTransform & transB=*transB_ptr;

		btConvexSeparatingDistanceUtil* self=(Luna< btConvexSeparatingDistanceUtil >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexSeparatingDistanceUtil::initSeparatingDistance(const btVector3 &, float, const btTransform &, const btTransform &). Got : '%s'",typeid(Luna< btConvexSeparatingDistanceUtil >::check(L,1)).name());
		}
		self->initSeparatingDistance(separatingVector, separatingDistance, transA, transB);

		return 0;
	}


	// Operator binds:

};

btConvexSeparatingDistanceUtil* LunaTraits< btConvexSeparatingDistanceUtil >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btConvexSeparatingDistanceUtil::_bind_ctor(L);
}

void LunaTraits< btConvexSeparatingDistanceUtil >::_bind_dtor(btConvexSeparatingDistanceUtil* obj) {
	delete obj;
}

const char LunaTraits< btConvexSeparatingDistanceUtil >::className[] = "btConvexSeparatingDistanceUtil";
const char LunaTraits< btConvexSeparatingDistanceUtil >::fullName[] = "btConvexSeparatingDistanceUtil";
const char LunaTraits< btConvexSeparatingDistanceUtil >::moduleName[] = "bullet";
const char* LunaTraits< btConvexSeparatingDistanceUtil >::parents[] = {0};
const int LunaTraits< btConvexSeparatingDistanceUtil >::hash = 41446546;
const int LunaTraits< btConvexSeparatingDistanceUtil >::uniqueIDs[] = {41446546,0};

luna_RegType LunaTraits< btConvexSeparatingDistanceUtil >::methods[] = {
	{"getConservativeSeparatingDistance", &luna_wrapper_btConvexSeparatingDistanceUtil::_bind_getConservativeSeparatingDistance},
	{"updateSeparatingDistance", &luna_wrapper_btConvexSeparatingDistanceUtil::_bind_updateSeparatingDistance},
	{"initSeparatingDistance", &luna_wrapper_btConvexSeparatingDistanceUtil::_bind_initSeparatingDistance},
	{"dynCast", &luna_wrapper_btConvexSeparatingDistanceUtil::_bind_dynCast},
	{"__eq", &luna_wrapper_btConvexSeparatingDistanceUtil::_bind___eq},
	{"fromVoid", &luna_wrapper_btConvexSeparatingDistanceUtil::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btConvexSeparatingDistanceUtil::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btConvexSeparatingDistanceUtil >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btConvexSeparatingDistanceUtil >::enumValues[] = {
	{0,0}
};


