#include <plug_common.h>

class luna_wrapper_osg_Texture1D_SubloadCallback {
public:
	typedef Luna< osg::Texture1D::SubloadCallback > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::Texture1D::SubloadCallback* ptr= dynamic_cast< osg::Texture1D::SubloadCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Texture1D::SubloadCallback >::push(L,ptr,false);
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
	// void osg::Texture1D::SubloadCallback::load(const osg::Texture1D & texture, osg::State & state) const
	static int _bind_load(lua_State *L) {
		if (!_lg_typecheck_load(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture1D::SubloadCallback::load(const osg::Texture1D & texture, osg::State & state) const function, expected prototype:\nvoid osg::Texture1D::SubloadCallback::load(const osg::Texture1D & texture, osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		const osg::Texture1D* texture_ptr=dynamic_cast< osg::Texture1D* >(Luna< osg::Referenced >::check(L,2));
		if( !texture_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg texture in osg::Texture1D::SubloadCallback::load function");
		}
		const osg::Texture1D & texture=*texture_ptr;
		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,3));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture1D::SubloadCallback::load function");
		}
		osg::State & state=*state_ptr;

		osg::Texture1D::SubloadCallback* self=dynamic_cast< osg::Texture1D::SubloadCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture1D::SubloadCallback::load(const osg::Texture1D &, osg::State &) const");
		}
		self->load(texture, state);

		return 0;
	}

	// void osg::Texture1D::SubloadCallback::subload(const osg::Texture1D & texture, osg::State & state) const
	static int _bind_subload(lua_State *L) {
		if (!_lg_typecheck_subload(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture1D::SubloadCallback::subload(const osg::Texture1D & texture, osg::State & state) const function, expected prototype:\nvoid osg::Texture1D::SubloadCallback::subload(const osg::Texture1D & texture, osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		const osg::Texture1D* texture_ptr=dynamic_cast< osg::Texture1D* >(Luna< osg::Referenced >::check(L,2));
		if( !texture_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg texture in osg::Texture1D::SubloadCallback::subload function");
		}
		const osg::Texture1D & texture=*texture_ptr;
		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,3));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture1D::SubloadCallback::subload function");
		}
		osg::State & state=*state_ptr;

		osg::Texture1D::SubloadCallback* self=dynamic_cast< osg::Texture1D::SubloadCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture1D::SubloadCallback::subload(const osg::Texture1D &, osg::State &) const");
		}
		self->subload(texture, state);

		return 0;
	}


	// Operator binds:

};

osg::Texture1D::SubloadCallback* LunaTraits< osg::Texture1D::SubloadCallback >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osg::Texture1D::SubloadCallback::load(const osg::Texture1D & texture, osg::State & state) const
	// void osg::Texture1D::SubloadCallback::subload(const osg::Texture1D & texture, osg::State & state) const

	// Abstract operators:
}

void LunaTraits< osg::Texture1D::SubloadCallback >::_bind_dtor(osg::Texture1D::SubloadCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Texture1D::SubloadCallback >::className[] = "SubloadCallback";
const char LunaTraits< osg::Texture1D::SubloadCallback >::fullName[] = "osg::Texture1D::SubloadCallback";
const char LunaTraits< osg::Texture1D::SubloadCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::Texture1D::SubloadCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::Texture1D::SubloadCallback >::hash = 49337607;
const int LunaTraits< osg::Texture1D::SubloadCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Texture1D::SubloadCallback >::methods[] = {
	{"load", &luna_wrapper_osg_Texture1D_SubloadCallback::_bind_load},
	{"subload", &luna_wrapper_osg_Texture1D_SubloadCallback::_bind_subload},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Texture1D::SubloadCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Texture1D_SubloadCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Texture1D::SubloadCallback >::enumValues[] = {
	{0,0}
};


