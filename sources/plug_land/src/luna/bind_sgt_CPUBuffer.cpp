#include <plug_common.h>

#include <luna/wrappers/wrapper_sgt_CPUBuffer.h>

class luna_wrapper_sgt_CPUBuffer {
public:
	typedef Luna< sgt::CPUBuffer > luna_t;

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

		sgt::CPUBuffer* self= (sgt::CPUBuffer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::CPUBuffer >::push(L,self,false);
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
		//sgt::CPUBuffer* ptr= dynamic_cast< sgt::CPUBuffer* >(Luna< osg::Referenced >::check(L,1));
		sgt::CPUBuffer* ptr= luna_caster< osg::Referenced, sgt::CPUBuffer >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::CPUBuffer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

sgt::CPUBuffer* LunaTraits< sgt::CPUBuffer >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< sgt::CPUBuffer >::_bind_dtor(sgt::CPUBuffer* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< sgt::CPUBuffer >::className[] = "CPUBuffer";
const char LunaTraits< sgt::CPUBuffer >::fullName[] = "sgt::CPUBuffer";
const char LunaTraits< sgt::CPUBuffer >::moduleName[] = "sgt";
const char* LunaTraits< sgt::CPUBuffer >::parents[] = {"sgt.Buffer", 0};
const int LunaTraits< sgt::CPUBuffer >::hash = 7073890;
const int LunaTraits< sgt::CPUBuffer >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< sgt::CPUBuffer >::methods[] = {
	{"fromVoid", &luna_wrapper_sgt_CPUBuffer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_CPUBuffer::_bind_asVoid},
	{"getTable", &luna_wrapper_sgt_CPUBuffer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::CPUBuffer >::converters[] = {
	{"sgt::Object", &luna_wrapper_sgt_CPUBuffer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::CPUBuffer >::enumValues[] = {
	{0,0}
};


