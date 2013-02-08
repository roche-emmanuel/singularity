#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_BufferHandler.h>

class luna_wrapper_SPK_BufferHandler {
public:
	typedef Luna< SPK::BufferHandler > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		SPK::BufferHandler* self=(Luna< SPK::BufferHandler >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<SPK::BufferHandler,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81662222) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SPK::BufferHandler*)");
		}

		SPK::BufferHandler* rhs =(Luna< SPK::BufferHandler >::check(L,2));
		SPK::BufferHandler* self=(Luna< SPK::BufferHandler >::check(L,1));
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

		SPK::BufferHandler* self= (SPK::BufferHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SPK::BufferHandler >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81662222) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< SPK::BufferHandler >::check(L,1));
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

		SPK::BufferHandler* self=(Luna< SPK::BufferHandler >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SPK::BufferHandler");
		
		return luna_dynamicCast(L,converters,"SPK::BufferHandler",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_createBuffers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31337102) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_destroyBuffers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31337102) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_enableBuffersCreation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isboolean(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isBuffersCreationEnabled(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_createBuffers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31337102) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_destroyBuffers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31337102) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void SPK::BufferHandler::createBuffers(const SPK::Group & group)
	static int _bind_createBuffers(lua_State *L) {
		if (!_lg_typecheck_createBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::BufferHandler::createBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::BufferHandler::createBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::BufferHandler::createBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::BufferHandler* self=(Luna< SPK::BufferHandler >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::BufferHandler::createBuffers(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::BufferHandler >::check(L,1)).name());
		}
		self->createBuffers(group);

		return 0;
	}

	// void SPK::BufferHandler::destroyBuffers(const SPK::Group & group)
	static int _bind_destroyBuffers(lua_State *L) {
		if (!_lg_typecheck_destroyBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::BufferHandler::destroyBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::BufferHandler::destroyBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::BufferHandler::destroyBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::BufferHandler* self=(Luna< SPK::BufferHandler >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::BufferHandler::destroyBuffers(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::BufferHandler >::check(L,1)).name());
		}
		self->destroyBuffers(group);

		return 0;
	}

	// static void SPK::BufferHandler::enableBuffersCreation(bool creation)
	static int _bind_enableBuffersCreation(lua_State *L) {
		if (!_lg_typecheck_enableBuffersCreation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void SPK::BufferHandler::enableBuffersCreation(bool creation) function, expected prototype:\nstatic void SPK::BufferHandler::enableBuffersCreation(bool creation)\nClass arguments details:\n");
		}

		bool creation=(bool)(lua_toboolean(L,1)==1);

		SPK::BufferHandler::enableBuffersCreation(creation);

		return 0;
	}

	// static bool SPK::BufferHandler::isBuffersCreationEnabled()
	static int _bind_isBuffersCreationEnabled(lua_State *L) {
		if (!_lg_typecheck_isBuffersCreationEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool SPK::BufferHandler::isBuffersCreationEnabled() function, expected prototype:\nstatic bool SPK::BufferHandler::isBuffersCreationEnabled()\nClass arguments details:\n");
		}


		bool lret = SPK::BufferHandler::isBuffersCreationEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::BufferHandler::base_createBuffers(const SPK::Group & group)
	static int _bind_base_createBuffers(lua_State *L) {
		if (!_lg_typecheck_base_createBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::BufferHandler::base_createBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::BufferHandler::base_createBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::BufferHandler::base_createBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::BufferHandler* self=(Luna< SPK::BufferHandler >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::BufferHandler::base_createBuffers(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::BufferHandler >::check(L,1)).name());
		}
		self->BufferHandler::createBuffers(group);

		return 0;
	}

	// void SPK::BufferHandler::base_destroyBuffers(const SPK::Group & group)
	static int _bind_base_destroyBuffers(lua_State *L) {
		if (!_lg_typecheck_base_destroyBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::BufferHandler::base_destroyBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::BufferHandler::base_destroyBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::BufferHandler::base_destroyBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::BufferHandler* self=(Luna< SPK::BufferHandler >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::BufferHandler::base_destroyBuffers(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::BufferHandler >::check(L,1)).name());
		}
		self->BufferHandler::destroyBuffers(group);

		return 0;
	}


	// Operator binds:

};

SPK::BufferHandler* LunaTraits< SPK::BufferHandler >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SPK::BufferHandler >::_bind_dtor(SPK::BufferHandler* obj) {
	delete obj;
}

const char LunaTraits< SPK::BufferHandler >::className[] = "BufferHandler";
const char LunaTraits< SPK::BufferHandler >::fullName[] = "SPK::BufferHandler";
const char LunaTraits< SPK::BufferHandler >::moduleName[] = "spark";
const char* LunaTraits< SPK::BufferHandler >::parents[] = {0};
const int LunaTraits< SPK::BufferHandler >::hash = 81662222;
const int LunaTraits< SPK::BufferHandler >::uniqueIDs[] = {81662222,0};

luna_RegType LunaTraits< SPK::BufferHandler >::methods[] = {
	{"createBuffers", &luna_wrapper_SPK_BufferHandler::_bind_createBuffers},
	{"destroyBuffers", &luna_wrapper_SPK_BufferHandler::_bind_destroyBuffers},
	{"enableBuffersCreation", &luna_wrapper_SPK_BufferHandler::_bind_enableBuffersCreation},
	{"isBuffersCreationEnabled", &luna_wrapper_SPK_BufferHandler::_bind_isBuffersCreationEnabled},
	{"base_createBuffers", &luna_wrapper_SPK_BufferHandler::_bind_base_createBuffers},
	{"base_destroyBuffers", &luna_wrapper_SPK_BufferHandler::_bind_base_destroyBuffers},
	{"dynCast", &luna_wrapper_SPK_BufferHandler::_bind_dynCast},
	{"__eq", &luna_wrapper_SPK_BufferHandler::_bind___eq},
	{"fromVoid", &luna_wrapper_SPK_BufferHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SPK_BufferHandler::_bind_asVoid},
	{"getTable", &luna_wrapper_SPK_BufferHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::BufferHandler >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::BufferHandler >::enumValues[] = {
	{0,0}
};


