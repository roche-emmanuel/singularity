#include <plug_common.h>

#include <luna/wrappers/wrapper_sgt_Deformation.h>

class luna_wrapper_sgt_Deformation {
public:
	typedef Luna< sgt::Deformation > luna_t;

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

		sgt::Deformation* self= (sgt::Deformation*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::Deformation >::push(L,self,false);
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
		//sgt::Deformation* ptr= dynamic_cast< sgt::Deformation* >(Luna< osg::Referenced >::check(L,1));
		sgt::Deformation* ptr= luna_caster< osg::Referenced, sgt::Deformation >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::Deformation >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::Deformation::Deformation()
	static sgt::Deformation* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in sgt::Deformation::Deformation() function, expected prototype:\nsgt::Deformation::Deformation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new sgt::Deformation();
	}

	// sgt::Deformation::Deformation(lua_Table * data)
	static sgt::Deformation* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::Deformation::Deformation(lua_Table * data) function, expected prototype:\nsgt::Deformation::Deformation(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_sgt_Deformation(L,NULL);
	}

	// Overload binder for sgt::Deformation::Deformation
	static sgt::Deformation* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Deformation, cannot match any of the overloads for function Deformation:\n  Deformation()\n  Deformation(lua_Table *)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:

};

sgt::Deformation* LunaTraits< sgt::Deformation >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_Deformation::_bind_ctor(L);
}

void LunaTraits< sgt::Deformation >::_bind_dtor(sgt::Deformation* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< sgt::Deformation >::className[] = "Deformation";
const char LunaTraits< sgt::Deformation >::fullName[] = "sgt::Deformation";
const char LunaTraits< sgt::Deformation >::moduleName[] = "sgt";
const char* LunaTraits< sgt::Deformation >::parents[] = {"sgt.Object", 0};
const int LunaTraits< sgt::Deformation >::hash = 61061622;
const int LunaTraits< sgt::Deformation >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< sgt::Deformation >::methods[] = {
	{"fromVoid", &luna_wrapper_sgt_Deformation::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_Deformation::_bind_asVoid},
	{"getTable", &luna_wrapper_sgt_Deformation::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::Deformation >::converters[] = {
	{"sgt::Object", &luna_wrapper_sgt_Deformation::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::Deformation >::enumValues[] = {
	{0,0}
};


