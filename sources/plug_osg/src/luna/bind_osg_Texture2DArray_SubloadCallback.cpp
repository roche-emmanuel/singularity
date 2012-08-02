#include <plug_common.h>

class luna_wrapper_osg_Texture2DArray_SubloadCallback {
public:
	typedef Luna< osg::Texture2DArray::SubloadCallback > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::Texture2DArray::SubloadCallback* ptr= dynamic_cast< osg::Texture2DArray::SubloadCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Texture2DArray::SubloadCallback >::push(L,ptr,false);
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
	// void osg::Texture2DArray::SubloadCallback::load(const osg::Texture2DArray & texture, osg::State & state) const
	static int _bind_load(lua_State *L) {
		if (!_lg_typecheck_load(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DArray::SubloadCallback::load(const osg::Texture2DArray & texture, osg::State & state) const function, expected prototype:\nvoid osg::Texture2DArray::SubloadCallback::load(const osg::Texture2DArray & texture, osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		const osg::Texture2DArray* texture_ptr=dynamic_cast< osg::Texture2DArray* >(Luna< osg::Referenced >::check(L,2));
		if( !texture_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg texture in osg::Texture2DArray::SubloadCallback::load function");
		}
		const osg::Texture2DArray & texture=*texture_ptr;
		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,3));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture2DArray::SubloadCallback::load function");
		}
		osg::State & state=*state_ptr;

		osg::Texture2DArray::SubloadCallback* self=dynamic_cast< osg::Texture2DArray::SubloadCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DArray::SubloadCallback::load(const osg::Texture2DArray &, osg::State &) const");
		}
		self->load(texture, state);

		return 0;
	}

	// void osg::Texture2DArray::SubloadCallback::subload(const osg::Texture2DArray & texture, osg::State & state) const
	static int _bind_subload(lua_State *L) {
		if (!_lg_typecheck_subload(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DArray::SubloadCallback::subload(const osg::Texture2DArray & texture, osg::State & state) const function, expected prototype:\nvoid osg::Texture2DArray::SubloadCallback::subload(const osg::Texture2DArray & texture, osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		const osg::Texture2DArray* texture_ptr=dynamic_cast< osg::Texture2DArray* >(Luna< osg::Referenced >::check(L,2));
		if( !texture_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg texture in osg::Texture2DArray::SubloadCallback::subload function");
		}
		const osg::Texture2DArray & texture=*texture_ptr;
		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,3));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture2DArray::SubloadCallback::subload function");
		}
		osg::State & state=*state_ptr;

		osg::Texture2DArray::SubloadCallback* self=dynamic_cast< osg::Texture2DArray::SubloadCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DArray::SubloadCallback::subload(const osg::Texture2DArray &, osg::State &) const");
		}
		self->subload(texture, state);

		return 0;
	}


	// Operator binds:

};

osg::Texture2DArray::SubloadCallback* LunaTraits< osg::Texture2DArray::SubloadCallback >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osg::Texture2DArray::SubloadCallback::load(const osg::Texture2DArray & texture, osg::State & state) const
	// void osg::Texture2DArray::SubloadCallback::subload(const osg::Texture2DArray & texture, osg::State & state) const

	// Abstract operators:
}

void LunaTraits< osg::Texture2DArray::SubloadCallback >::_bind_dtor(osg::Texture2DArray::SubloadCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Texture2DArray::SubloadCallback >::className[] = "SubloadCallback";
const char LunaTraits< osg::Texture2DArray::SubloadCallback >::fullName[] = "osg::Texture2DArray::SubloadCallback";
const char LunaTraits< osg::Texture2DArray::SubloadCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::Texture2DArray::SubloadCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::Texture2DArray::SubloadCallback >::hash = 59294955;
const int LunaTraits< osg::Texture2DArray::SubloadCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Texture2DArray::SubloadCallback >::methods[] = {
	{"load", &luna_wrapper_osg_Texture2DArray_SubloadCallback::_bind_load},
	{"subload", &luna_wrapper_osg_Texture2DArray_SubloadCallback::_bind_subload},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Texture2DArray::SubloadCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Texture2DArray_SubloadCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Texture2DArray::SubloadCallback >::enumValues[] = {
	{0,0}
};


