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

	inline static bool _lg_typecheck_get_mode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_zNear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_zMid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_zFar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_mode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_zNear(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_zMid(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_zFar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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
			luaL_error(L, "Invalid object in function call bool osgViewer::DepthPartitionSettings::getDepthRange(osg::View &, unsigned int, double &, double &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->getDepthRange(view, partition, zNear, zFar);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osgViewer::DepthPartitionSettings::DepthMode osgViewer::DepthPartitionSettings::_mode()
	static int _bind_get_mode(lua_State *L) {
		if (!_lg_typecheck_get_mode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::DepthPartitionSettings::DepthMode osgViewer::DepthPartitionSettings::_mode() function, expected prototype:\nosgViewer::DepthPartitionSettings::DepthMode osgViewer::DepthPartitionSettings::_mode()\nClass arguments details:\n");
		}


		osgViewer::DepthPartitionSettings* self=Luna< osg::Referenced >::checkSubType< osgViewer::DepthPartitionSettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgViewer::DepthPartitionSettings::DepthMode osgViewer::DepthPartitionSettings::_mode(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osgViewer::DepthPartitionSettings::DepthMode lret = self->_mode;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osgViewer::DepthPartitionSettings::_zNear()
	static int _bind_get_zNear(lua_State *L) {
		if (!_lg_typecheck_get_zNear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgViewer::DepthPartitionSettings::_zNear() function, expected prototype:\ndouble osgViewer::DepthPartitionSettings::_zNear()\nClass arguments details:\n");
		}


		osgViewer::DepthPartitionSettings* self=Luna< osg::Referenced >::checkSubType< osgViewer::DepthPartitionSettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgViewer::DepthPartitionSettings::_zNear(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		double lret = self->_zNear;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osgViewer::DepthPartitionSettings::_zMid()
	static int _bind_get_zMid(lua_State *L) {
		if (!_lg_typecheck_get_zMid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgViewer::DepthPartitionSettings::_zMid() function, expected prototype:\ndouble osgViewer::DepthPartitionSettings::_zMid()\nClass arguments details:\n");
		}


		osgViewer::DepthPartitionSettings* self=Luna< osg::Referenced >::checkSubType< osgViewer::DepthPartitionSettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgViewer::DepthPartitionSettings::_zMid(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		double lret = self->_zMid;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osgViewer::DepthPartitionSettings::_zFar()
	static int _bind_get_zFar(lua_State *L) {
		if (!_lg_typecheck_get_zFar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgViewer::DepthPartitionSettings::_zFar() function, expected prototype:\ndouble osgViewer::DepthPartitionSettings::_zFar()\nClass arguments details:\n");
		}


		osgViewer::DepthPartitionSettings* self=Luna< osg::Referenced >::checkSubType< osgViewer::DepthPartitionSettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgViewer::DepthPartitionSettings::_zFar(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		double lret = self->_zFar;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::DepthPartitionSettings::_mode(osgViewer::DepthPartitionSettings::DepthMode value)
	static int _bind_set_mode(lua_State *L) {
		if (!_lg_typecheck_set_mode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::DepthPartitionSettings::_mode(osgViewer::DepthPartitionSettings::DepthMode value) function, expected prototype:\nvoid osgViewer::DepthPartitionSettings::_mode(osgViewer::DepthPartitionSettings::DepthMode value)\nClass arguments details:\n");
		}

		osgViewer::DepthPartitionSettings::DepthMode value=(osgViewer::DepthPartitionSettings::DepthMode)lua_tointeger(L,2);

		osgViewer::DepthPartitionSettings* self=Luna< osg::Referenced >::checkSubType< osgViewer::DepthPartitionSettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::DepthPartitionSettings::_mode(osgViewer::DepthPartitionSettings::DepthMode). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_mode = value;

		return 0;
	}

	// void osgViewer::DepthPartitionSettings::_zNear(double value)
	static int _bind_set_zNear(lua_State *L) {
		if (!_lg_typecheck_set_zNear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::DepthPartitionSettings::_zNear(double value) function, expected prototype:\nvoid osgViewer::DepthPartitionSettings::_zNear(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		osgViewer::DepthPartitionSettings* self=Luna< osg::Referenced >::checkSubType< osgViewer::DepthPartitionSettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::DepthPartitionSettings::_zNear(double). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_zNear = value;

		return 0;
	}

	// void osgViewer::DepthPartitionSettings::_zMid(double value)
	static int _bind_set_zMid(lua_State *L) {
		if (!_lg_typecheck_set_zMid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::DepthPartitionSettings::_zMid(double value) function, expected prototype:\nvoid osgViewer::DepthPartitionSettings::_zMid(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		osgViewer::DepthPartitionSettings* self=Luna< osg::Referenced >::checkSubType< osgViewer::DepthPartitionSettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::DepthPartitionSettings::_zMid(double). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_zMid = value;

		return 0;
	}

	// void osgViewer::DepthPartitionSettings::_zFar(double value)
	static int _bind_set_zFar(lua_State *L) {
		if (!_lg_typecheck_set_zFar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::DepthPartitionSettings::_zFar(double value) function, expected prototype:\nvoid osgViewer::DepthPartitionSettings::_zFar(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		osgViewer::DepthPartitionSettings* self=Luna< osg::Referenced >::checkSubType< osgViewer::DepthPartitionSettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::DepthPartitionSettings::_zFar(double). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_zFar = value;

		return 0;
	}

	// void osgViewer::DepthPartitionSettings::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::DepthPartitionSettings::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgViewer::DepthPartitionSettings::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgViewer::DepthPartitionSettings* self=Luna< osg::Referenced >::checkSubType< osgViewer::DepthPartitionSettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::DepthPartitionSettings::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->DepthPartitionSettings::setThreadSafeRefUnref(threadSafe);

		return 0;
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
			luaL_error(L, "Invalid object in function call bool osgViewer::DepthPartitionSettings::base_getDepthRange(osg::View &, unsigned int, double &, double &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->DepthPartitionSettings::getDepthRange(view, partition, zNear, zFar);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgViewer::DepthPartitionSettings* LunaTraits< osgViewer::DepthPartitionSettings >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgViewer_DepthPartitionSettings::_bind_ctor(L);
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
	{"get_mode", &luna_wrapper_osgViewer_DepthPartitionSettings::_bind_get_mode},
	{"get_zNear", &luna_wrapper_osgViewer_DepthPartitionSettings::_bind_get_zNear},
	{"get_zMid", &luna_wrapper_osgViewer_DepthPartitionSettings::_bind_get_zMid},
	{"get_zFar", &luna_wrapper_osgViewer_DepthPartitionSettings::_bind_get_zFar},
	{"set_mode", &luna_wrapper_osgViewer_DepthPartitionSettings::_bind_set_mode},
	{"set_zNear", &luna_wrapper_osgViewer_DepthPartitionSettings::_bind_set_zNear},
	{"set_zMid", &luna_wrapper_osgViewer_DepthPartitionSettings::_bind_set_zMid},
	{"set_zFar", &luna_wrapper_osgViewer_DepthPartitionSettings::_bind_set_zFar},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgViewer_DepthPartitionSettings::_bind_base_setThreadSafeRefUnref},
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


