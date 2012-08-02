#include <plug_common.h>

class luna_wrapper_osg_TextureCubeMap_SubloadCallback {
public:
	typedef Luna< osg::TextureCubeMap::SubloadCallback > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::TextureCubeMap::SubloadCallback* ptr= dynamic_cast< osg::TextureCubeMap::SubloadCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::TextureCubeMap::SubloadCallback >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_load(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_subload(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void osg::TextureCubeMap::SubloadCallback::load(const osg::TextureCubeMap & texture, osg::State & state) const
	static int _bind_load(lua_State *L) {
		if (!_lg_typecheck_load(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TextureCubeMap::SubloadCallback::load(const osg::TextureCubeMap & texture, osg::State & state) const function, expected prototype:\nvoid osg::TextureCubeMap::SubloadCallback::load(const osg::TextureCubeMap & texture, osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		const osg::TextureCubeMap* texture_ptr=dynamic_cast< osg::TextureCubeMap* >(Luna< osg::Referenced >::check(L,2));
		if( !texture_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg texture in osg::TextureCubeMap::SubloadCallback::load function");
		}
		const osg::TextureCubeMap & texture=*texture_ptr;
		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,3));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::TextureCubeMap::SubloadCallback::load function");
		}
		osg::State & state=*state_ptr;

		osg::TextureCubeMap::SubloadCallback* self=dynamic_cast< osg::TextureCubeMap::SubloadCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TextureCubeMap::SubloadCallback::load(const osg::TextureCubeMap &, osg::State &) const");
		}
		self->load(texture, state);

		return 0;
	}

	// void osg::TextureCubeMap::SubloadCallback::subload(const osg::TextureCubeMap & texture, osg::State & state) const
	static int _bind_subload(lua_State *L) {
		if (!_lg_typecheck_subload(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TextureCubeMap::SubloadCallback::subload(const osg::TextureCubeMap & texture, osg::State & state) const function, expected prototype:\nvoid osg::TextureCubeMap::SubloadCallback::subload(const osg::TextureCubeMap & texture, osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		const osg::TextureCubeMap* texture_ptr=dynamic_cast< osg::TextureCubeMap* >(Luna< osg::Referenced >::check(L,2));
		if( !texture_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg texture in osg::TextureCubeMap::SubloadCallback::subload function");
		}
		const osg::TextureCubeMap & texture=*texture_ptr;
		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,3));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::TextureCubeMap::SubloadCallback::subload function");
		}
		osg::State & state=*state_ptr;

		osg::TextureCubeMap::SubloadCallback* self=dynamic_cast< osg::TextureCubeMap::SubloadCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TextureCubeMap::SubloadCallback::subload(const osg::TextureCubeMap &, osg::State &) const");
		}
		self->subload(texture, state);

		return 0;
	}


	// Operator binds:

};

osg::TextureCubeMap::SubloadCallback* LunaTraits< osg::TextureCubeMap::SubloadCallback >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osg::TextureCubeMap::SubloadCallback::load(const osg::TextureCubeMap & texture, osg::State & state) const
	// void osg::TextureCubeMap::SubloadCallback::subload(const osg::TextureCubeMap & texture, osg::State & state) const

	// Abstract operators:
}

void LunaTraits< osg::TextureCubeMap::SubloadCallback >::_bind_dtor(osg::TextureCubeMap::SubloadCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::TextureCubeMap::SubloadCallback >::className[] = "SubloadCallback";
const char LunaTraits< osg::TextureCubeMap::SubloadCallback >::fullName[] = "osg::TextureCubeMap::SubloadCallback";
const char LunaTraits< osg::TextureCubeMap::SubloadCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::TextureCubeMap::SubloadCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::TextureCubeMap::SubloadCallback >::hash = 8213071;
const int LunaTraits< osg::TextureCubeMap::SubloadCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::TextureCubeMap::SubloadCallback >::methods[] = {
	{"load", &luna_wrapper_osg_TextureCubeMap_SubloadCallback::_bind_load},
	{"subload", &luna_wrapper_osg_TextureCubeMap_SubloadCallback::_bind_subload},
	{0,0}
};

luna_ConverterType LunaTraits< osg::TextureCubeMap::SubloadCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_TextureCubeMap_SubloadCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TextureCubeMap::SubloadCallback >::enumValues[] = {
	{0,0}
};


