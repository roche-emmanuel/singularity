#include <plug_common.h>

class luna_wrapper_osg_TextureRectangle_SubloadCallback {
public:
	typedef Luna< osg::TextureRectangle::SubloadCallback > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::TextureRectangle::SubloadCallback* ptr= dynamic_cast< osg::TextureRectangle::SubloadCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::TextureRectangle::SubloadCallback >::push(L,ptr,false);
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
	// void osg::TextureRectangle::SubloadCallback::load(const osg::TextureRectangle & , osg::State & ) const
	static int _bind_load(lua_State *L) {
		if (!_lg_typecheck_load(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TextureRectangle::SubloadCallback::load(const osg::TextureRectangle & , osg::State & ) const function, expected prototype:\nvoid osg::TextureRectangle::SubloadCallback::load(const osg::TextureRectangle & , osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		const osg::TextureRectangle* _arg1_ptr=dynamic_cast< osg::TextureRectangle* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TextureRectangle::SubloadCallback::load function");
		}
		const osg::TextureRectangle & _arg1=*_arg1_ptr;
		osg::State* _arg2_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::TextureRectangle::SubloadCallback::load function");
		}
		osg::State & _arg2=*_arg2_ptr;

		osg::TextureRectangle::SubloadCallback* self=dynamic_cast< osg::TextureRectangle::SubloadCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TextureRectangle::SubloadCallback::load(const osg::TextureRectangle &, osg::State &) const");
		}
		self->load(_arg1, _arg2);

		return 0;
	}

	// void osg::TextureRectangle::SubloadCallback::subload(const osg::TextureRectangle & , osg::State & ) const
	static int _bind_subload(lua_State *L) {
		if (!_lg_typecheck_subload(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TextureRectangle::SubloadCallback::subload(const osg::TextureRectangle & , osg::State & ) const function, expected prototype:\nvoid osg::TextureRectangle::SubloadCallback::subload(const osg::TextureRectangle & , osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		const osg::TextureRectangle* _arg1_ptr=dynamic_cast< osg::TextureRectangle* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TextureRectangle::SubloadCallback::subload function");
		}
		const osg::TextureRectangle & _arg1=*_arg1_ptr;
		osg::State* _arg2_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::TextureRectangle::SubloadCallback::subload function");
		}
		osg::State & _arg2=*_arg2_ptr;

		osg::TextureRectangle::SubloadCallback* self=dynamic_cast< osg::TextureRectangle::SubloadCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TextureRectangle::SubloadCallback::subload(const osg::TextureRectangle &, osg::State &) const");
		}
		self->subload(_arg1, _arg2);

		return 0;
	}


	// Operator binds:

};

osg::TextureRectangle::SubloadCallback* LunaTraits< osg::TextureRectangle::SubloadCallback >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osg::TextureRectangle::SubloadCallback::load(const osg::TextureRectangle & , osg::State & ) const
	// void osg::TextureRectangle::SubloadCallback::subload(const osg::TextureRectangle & , osg::State & ) const

	// Abstract operators:
}

void LunaTraits< osg::TextureRectangle::SubloadCallback >::_bind_dtor(osg::TextureRectangle::SubloadCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::TextureRectangle::SubloadCallback >::className[] = "SubloadCallback";
const char LunaTraits< osg::TextureRectangle::SubloadCallback >::fullName[] = "osg::TextureRectangle::SubloadCallback";
const char LunaTraits< osg::TextureRectangle::SubloadCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::TextureRectangle::SubloadCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::TextureRectangle::SubloadCallback >::hash = 97173178;
const int LunaTraits< osg::TextureRectangle::SubloadCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::TextureRectangle::SubloadCallback >::methods[] = {
	{"load", &luna_wrapper_osg_TextureRectangle_SubloadCallback::_bind_load},
	{"subload", &luna_wrapper_osg_TextureRectangle_SubloadCallback::_bind_subload},
	{0,0}
};

luna_ConverterType LunaTraits< osg::TextureRectangle::SubloadCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_TextureRectangle_SubloadCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TextureRectangle::SubloadCallback >::enumValues[] = {
	{0,0}
};

