#include <plug_common.h>

#include <luna/wrappers/wrapper_sgt_Buffer.h>

class luna_wrapper_sgt_Buffer {
public:
	typedef Luna< sgt::Buffer > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
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

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgt::Buffer* self= (sgt::Buffer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::Buffer >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Object(lua_State *L) {
		// all checked are already performed before reaching this point.
		//sgt::Buffer* ptr= dynamic_cast< sgt::Buffer* >(Luna< osg::Referenced >::check(L,1));
		sgt::Buffer* ptr= luna_caster< osg::Referenced, sgt::Buffer >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::Buffer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::Buffer::Buffer(lua_Table * data)
	static sgt::Buffer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in sgt::Buffer::Buffer(lua_Table * data) function, expected prototype:\nsgt::Buffer::Buffer(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_sgt_Buffer(L,NULL);
	}


	// Function binds:

	// Operator binds:

};

sgt::Buffer* LunaTraits< sgt::Buffer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_Buffer::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void sgt::Buffer::bind(int target) const
	// void * sgt::Buffer::data(int offset) const
	// void sgt::Buffer::unbind(int target) const
	// void sgt::Buffer::dirty() const
}

void LunaTraits< sgt::Buffer >::_bind_dtor(sgt::Buffer* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< sgt::Buffer >::className[] = "Buffer";
const char LunaTraits< sgt::Buffer >::fullName[] = "sgt::Buffer";
const char LunaTraits< sgt::Buffer >::moduleName[] = "sgt";
const char* LunaTraits< sgt::Buffer >::parents[] = {"sgt.Object", 0};
const int LunaTraits< sgt::Buffer >::hash = 89617225;
const int LunaTraits< sgt::Buffer >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< sgt::Buffer >::methods[] = {
	{"fromVoid", &luna_wrapper_sgt_Buffer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_Buffer::_bind_asVoid},
	{"getTable", &luna_wrapper_sgt_Buffer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::Buffer >::converters[] = {
	{"sgt::Object", &luna_wrapper_sgt_Buffer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::Buffer >::enumValues[] = {
	{0,0}
};


