#include <plug_common.h>

#include <luna/wrappers/wrapper_osgViewer_DepthPartitionSettings.h>

class luna_wrapper_osgViewer_DepthPartitionSettings {
public:
	typedef Luna< osgViewer::DepthPartitionSettings > luna_t;

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
		//osgViewer::DepthPartitionSettings* ptr= dynamic_cast< osgViewer::DepthPartitionSettings* >(Luna< osg::Referenced >::check(L,1));
		osgViewer::DepthPartitionSettings* ptr= luna_caster< osg::Referenced, osgViewer::DepthPartitionSettings >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::DepthPartitionSettings >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getDepthRange(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getDepthRange(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgViewer::DepthPartitionSettings::DepthPartitionSettings(osgViewer::DepthPartitionSettings::DepthMode mode = osgViewer::DepthPartitionSettings::BOUNDING_VOLUME)
	static osgViewer::DepthPartitionSettings* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::DepthPartitionSettings::DepthPartitionSettings(osgViewer::DepthPartitionSettings::DepthMode mode = osgViewer::DepthPartitionSettings::BOUNDING_VOLUME) function, expected prototype:\nosgViewer::DepthPartitionSettings::DepthPartitionSettings(osgViewer::DepthPartitionSettings::DepthMode mode = osgViewer::DepthPartitionSettings::BOUNDING_VOLUME)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		osgViewer::DepthPartitionSettings::DepthMode mode=luatop>0 ? (osgViewer::DepthPartitionSettings::DepthMode)lua_tointeger(L,1) : osgViewer::DepthPartitionSettings::BOUNDING_VOLUME;

		return new osgViewer::DepthPartitionSettings(mode);
	}

	// osgViewer::DepthPartitionSettings::DepthPartitionSettings(lua_Table * data, osgViewer::DepthPartitionSettings::DepthMode mode = osgViewer::DepthPartitionSettings::BOUNDING_VOLUME)
	static osgViewer::DepthPartitionSettings* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::DepthPartitionSettings::DepthPartitionSettings(lua_Table * data, osgViewer::DepthPartitionSettings::DepthMode mode = osgViewer::DepthPartitionSettings::BOUNDING_VOLUME) function, expected prototype:\nosgViewer::DepthPartitionSettings::DepthPartitionSettings(lua_Table * data, osgViewer::DepthPartitionSettings::DepthMode mode = osgViewer::DepthPartitionSettings::BOUNDING_VOLUME)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		osgViewer::DepthPartitionSettings::DepthMode mode=luatop>1 ? (osgViewer::DepthPartitionSettings::DepthMode)lua_tointeger(L,2) : osgViewer::DepthPartitionSettings::BOUNDING_VOLUME;

		return new wrapper_osgViewer_DepthPartitionSettings(L,NULL, mode);
	}

	// Overload binder for osgViewer::DepthPartitionSettings::DepthPartitionSettings
	static osgViewer::DepthPartitionSettings* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function DepthPartitionSettings, cannot match any of the overloads for function DepthPartitionSettings:\n  DepthPartitionSettings(osgViewer::DepthPartitionSettings::DepthMode)\n  DepthPartitionSettings(lua_Table *, osgViewer::DepthPartitionSettings::DepthMode)\n");
		return NULL;
	}


	// Function binds:
	// bool osgViewer::DepthPartitionSettings::getDepthRange(osg::View & view, unsigned int partition, double & zNear, double & zFar)
	static int _bind_getDepthRange(lua_State *L) {
		if (!_lg_typecheck_getDepthRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::DepthPartitionSettings::getDepthRange(osg::View & view, unsigned int partition, double & zNear, double & zFar) function, expected prototype:\nbool osgViewer::DepthPartitionSettings::getDepthRange(osg::View & view, unsigned int partition, double & zNear, double & zFar)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::View* view_ptr=(Luna< osg::Referenced >::checkSubType< osg::View >(L,2));
		if( !view_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg view in osgViewer::DepthPartitionSettings::getDepthRange function");
		}
		osg::View & view=*view_ptr;
		unsigned int partition=(unsigned int)lua_tointeger(L,3);
		double zNear=(double)lua_tonumber(L,4);
		double zFar=(double)lua_tonumber(L,5);

		osgViewer::DepthPartitionSettings* self=Luna< osg::Referenced >::checkSubType< osgViewer::DepthPartitionSettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::DepthPartitionSettings::getDepthRange(osg::View &, unsigned int, double &, double &)");
		}
		bool lret = self->getDepthRange(view, partition, zNear, zFar);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::DepthPartitionSettings::base_getDepthRange(osg::View & view, unsigned int partition, double & zNear, double & zFar)
	static int _bind_base_getDepthRange(lua_State *L) {
		if (!_lg_typecheck_base_getDepthRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::DepthPartitionSettings::base_getDepthRange(osg::View & view, unsigned int partition, double & zNear, double & zFar) function, expected prototype:\nbool osgViewer::DepthPartitionSettings::base_getDepthRange(osg::View & view, unsigned int partition, double & zNear, double & zFar)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::View* view_ptr=(Luna< osg::Referenced >::checkSubType< osg::View >(L,2));
		if( !view_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg view in osgViewer::DepthPartitionSettings::base_getDepthRange function");
		}
		osg::View & view=*view_ptr;
		unsigned int partition=(unsigned int)lua_tointeger(L,3);
		double zNear=(double)lua_tonumber(L,4);
		double zFar=(double)lua_tonumber(L,5);

		osgViewer::DepthPartitionSettings* self=Luna< osg::Referenced >::checkSubType< osgViewer::DepthPartitionSettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::DepthPartitionSettings::base_getDepthRange(osg::View &, unsigned int, double &, double &)");
		}
		bool lret = self->DepthPartitionSettings::getDepthRange(view, partition, zNear, zFar);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgViewer::DepthPartitionSettings* LunaTraits< osgViewer::DepthPartitionSettings >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgViewer_DepthPartitionSettings::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgViewer::DepthPartitionSettings >::_bind_dtor(osgViewer::DepthPartitionSettings* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::DepthPartitionSettings >::className[] = "DepthPartitionSettings";
const char LunaTraits< osgViewer::DepthPartitionSettings >::fullName[] = "osgViewer::DepthPartitionSettings";
const char LunaTraits< osgViewer::DepthPartitionSettings >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::DepthPartitionSettings >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgViewer::DepthPartitionSettings >::hash = 91097653;
const int LunaTraits< osgViewer::DepthPartitionSettings >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgViewer::DepthPartitionSettings >::methods[] = {
	{"getDepthRange", &luna_wrapper_osgViewer_DepthPartitionSettings::_bind_getDepthRange},
	{"base_getDepthRange", &luna_wrapper_osgViewer_DepthPartitionSettings::_bind_base_getDepthRange},
	{"__eq", &luna_wrapper_osgViewer_DepthPartitionSettings::_bind___eq},
	{"getTable", &luna_wrapper_osgViewer_DepthPartitionSettings::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::DepthPartitionSettings >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_DepthPartitionSettings::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::DepthPartitionSettings >::enumValues[] = {
	{"FIXED_RANGE", osgViewer::DepthPartitionSettings::FIXED_RANGE},
	{"BOUNDING_VOLUME", osgViewer::DepthPartitionSettings::BOUNDING_VOLUME},
	{0,0}
};


