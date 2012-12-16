#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Texture2DArray_SubloadCallback.h>

class luna_wrapper_osg_Texture2DArray_SubloadCallback {
public:
	typedef Luna< osg::Texture2DArray::SubloadCallback > luna_t;

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
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
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
		//osg::Texture2DArray::SubloadCallback* ptr= dynamic_cast< osg::Texture2DArray::SubloadCallback* >(Luna< osg::Referenced >::check(L,1));
		osg::Texture2DArray::SubloadCallback* ptr= luna_caster< osg::Referenced, osg::Texture2DArray::SubloadCallback >::cast(Luna< osg::Referenced >::check(L,1));
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

		const osg::Texture2DArray* texture_ptr=(Luna< osg::Referenced >::checkSubType< osg::Texture2DArray >(L,2));
		if( !texture_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg texture in osg::Texture2DArray::SubloadCallback::load function");
		}
		const osg::Texture2DArray & texture=*texture_ptr;
		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,3));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture2DArray::SubloadCallback::load function");
		}
		osg::State & state=*state_ptr;

		osg::Texture2DArray::SubloadCallback* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DArray::SubloadCallback >(L,1);
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

		const osg::Texture2DArray* texture_ptr=(Luna< osg::Referenced >::checkSubType< osg::Texture2DArray >(L,2));
		if( !texture_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg texture in osg::Texture2DArray::SubloadCallback::subload function");
		}
		const osg::Texture2DArray & texture=*texture_ptr;
		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,3));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture2DArray::SubloadCallback::subload function");
		}
		osg::State & state=*state_ptr;

		osg::Texture2DArray::SubloadCallback* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DArray::SubloadCallback >(L,1);
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
	{"__eq", &luna_wrapper_osg_Texture2DArray_SubloadCallback::_bind___eq},
	{"getTable", &luna_wrapper_osg_Texture2DArray_SubloadCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Texture2DArray::SubloadCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Texture2DArray_SubloadCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Texture2DArray::SubloadCallback >::enumValues[] = {
	{0,0}
};


