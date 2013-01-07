#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_FBOExtensions.h>

class luna_wrapper_osg_FBOExtensions {
public:
	typedef Luna< osg::FBOExtensions > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Referenced*)");
		}

		osg::Referenced* rhs =(Luna< osg::Referenced >::check(L,2));
		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osg::FBOExtensions* ptr= dynamic_cast< osg::FBOExtensions* >(Luna< osg::Referenced >::check(L,1));
		osg::FBOExtensions* ptr= luna_caster< osg::Referenced, osg::FBOExtensions >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::FBOExtensions >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_instance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isMultisampleSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isMultisampleCoverageSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isPackedDepthStencilSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static osg::FBOExtensions * osg::FBOExtensions::instance(unsigned int contextID, bool createIfNotInitalized)
	static int _bind_instance(lua_State *L) {
		if (!_lg_typecheck_instance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::FBOExtensions * osg::FBOExtensions::instance(unsigned int contextID, bool createIfNotInitalized) function, expected prototype:\nstatic osg::FBOExtensions * osg::FBOExtensions::instance(unsigned int contextID, bool createIfNotInitalized)\nClass arguments details:\n");
		}

		unsigned contextID=(unsigned)lua_tointeger(L,1);
		bool createIfNotInitalized=(bool)(lua_toboolean(L,2)==1);

		osg::FBOExtensions * lret = osg::FBOExtensions::instance(contextID, createIfNotInitalized);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FBOExtensions >::push(L,lret,false);

		return 1;
	}

	// bool osg::FBOExtensions::isSupported() const
	static int _bind_isSupported(lua_State *L) {
		if (!_lg_typecheck_isSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::FBOExtensions::isSupported() const function, expected prototype:\nbool osg::FBOExtensions::isSupported() const\nClass arguments details:\n");
		}


		osg::FBOExtensions* self=Luna< osg::Referenced >::checkSubType< osg::FBOExtensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::FBOExtensions::isSupported() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::FBOExtensions::isMultisampleSupported() const
	static int _bind_isMultisampleSupported(lua_State *L) {
		if (!_lg_typecheck_isMultisampleSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::FBOExtensions::isMultisampleSupported() const function, expected prototype:\nbool osg::FBOExtensions::isMultisampleSupported() const\nClass arguments details:\n");
		}


		osg::FBOExtensions* self=Luna< osg::Referenced >::checkSubType< osg::FBOExtensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::FBOExtensions::isMultisampleSupported() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isMultisampleSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::FBOExtensions::isMultisampleCoverageSupported() const
	static int _bind_isMultisampleCoverageSupported(lua_State *L) {
		if (!_lg_typecheck_isMultisampleCoverageSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::FBOExtensions::isMultisampleCoverageSupported() const function, expected prototype:\nbool osg::FBOExtensions::isMultisampleCoverageSupported() const\nClass arguments details:\n");
		}


		osg::FBOExtensions* self=Luna< osg::Referenced >::checkSubType< osg::FBOExtensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::FBOExtensions::isMultisampleCoverageSupported() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isMultisampleCoverageSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::FBOExtensions::isPackedDepthStencilSupported() const
	static int _bind_isPackedDepthStencilSupported(lua_State *L) {
		if (!_lg_typecheck_isPackedDepthStencilSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::FBOExtensions::isPackedDepthStencilSupported() const function, expected prototype:\nbool osg::FBOExtensions::isPackedDepthStencilSupported() const\nClass arguments details:\n");
		}


		osg::FBOExtensions* self=Luna< osg::Referenced >::checkSubType< osg::FBOExtensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::FBOExtensions::isPackedDepthStencilSupported() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isPackedDepthStencilSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::FBOExtensions::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::FBOExtensions::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::FBOExtensions::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::FBOExtensions* self=Luna< osg::Referenced >::checkSubType< osg::FBOExtensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::FBOExtensions::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->FBOExtensions::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::FBOExtensions* LunaTraits< osg::FBOExtensions >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::FBOExtensions >::_bind_dtor(osg::FBOExtensions* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::FBOExtensions >::className[] = "FBOExtensions";
const char LunaTraits< osg::FBOExtensions >::fullName[] = "osg::FBOExtensions";
const char LunaTraits< osg::FBOExtensions >::moduleName[] = "osg";
const char* LunaTraits< osg::FBOExtensions >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::FBOExtensions >::hash = 68346969;
const int LunaTraits< osg::FBOExtensions >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::FBOExtensions >::methods[] = {
	{"instance", &luna_wrapper_osg_FBOExtensions::_bind_instance},
	{"isSupported", &luna_wrapper_osg_FBOExtensions::_bind_isSupported},
	{"isMultisampleSupported", &luna_wrapper_osg_FBOExtensions::_bind_isMultisampleSupported},
	{"isMultisampleCoverageSupported", &luna_wrapper_osg_FBOExtensions::_bind_isMultisampleCoverageSupported},
	{"isPackedDepthStencilSupported", &luna_wrapper_osg_FBOExtensions::_bind_isPackedDepthStencilSupported},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_FBOExtensions::_bind_base_setThreadSafeRefUnref},
	{"__eq", &luna_wrapper_osg_FBOExtensions::_bind___eq},
	{"getTable", &luna_wrapper_osg_FBOExtensions::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::FBOExtensions >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_FBOExtensions::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::FBOExtensions >::enumValues[] = {
	{0,0}
};


