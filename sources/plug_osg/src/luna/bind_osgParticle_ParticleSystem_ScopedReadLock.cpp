#include <plug_common.h>

class luna_wrapper_osgParticle_ParticleSystem_ScopedReadLock {
public:
	typedef Luna< osgParticle::ParticleSystem::ScopedReadLock > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,61073220) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgParticle::ParticleSystem::ScopedReadLock*)");
		}

		osgParticle::ParticleSystem::ScopedReadLock* rhs =(Luna< osgParticle::ParticleSystem::ScopedReadLock >::check(L,2));
		osgParticle::ParticleSystem::ScopedReadLock* self=(Luna< osgParticle::ParticleSystem::ScopedReadLock >::check(L,1));
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

		osgParticle::ParticleSystem::ScopedReadLock* self=(Luna< osgParticle::ParticleSystem::ScopedReadLock >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgParticle::ParticleSystem::ScopedReadLock");
		
		return luna_dynamicCast(L,converters,"osgParticle::ParticleSystem::ScopedReadLock",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgParticle::ParticleSystem::ScopedReadLock* LunaTraits< osgParticle::ParticleSystem::ScopedReadLock >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgParticle::ParticleSystem::ScopedReadLock >::_bind_dtor(osgParticle::ParticleSystem::ScopedReadLock* obj) {
	delete obj;
}

const char LunaTraits< osgParticle::ParticleSystem::ScopedReadLock >::className[] = "ScopedReadLock";
const char LunaTraits< osgParticle::ParticleSystem::ScopedReadLock >::fullName[] = "osgParticle::ParticleSystem::ScopedReadLock";
const char LunaTraits< osgParticle::ParticleSystem::ScopedReadLock >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::ParticleSystem::ScopedReadLock >::parents[] = {0};
const int LunaTraits< osgParticle::ParticleSystem::ScopedReadLock >::hash = 61073220;
const int LunaTraits< osgParticle::ParticleSystem::ScopedReadLock >::uniqueIDs[] = {61073220,0};

luna_RegType LunaTraits< osgParticle::ParticleSystem::ScopedReadLock >::methods[] = {
	{"dynCast", &luna_wrapper_osgParticle_ParticleSystem_ScopedReadLock::_bind_dynCast},
	{"__eq", &luna_wrapper_osgParticle_ParticleSystem_ScopedReadLock::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::ParticleSystem::ScopedReadLock >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::ParticleSystem::ScopedReadLock >::enumValues[] = {
	{0,0}
};


