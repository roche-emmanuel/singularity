#include <plug_common.h>

#include <luna/wrappers/wrapper_spark_SparkUpdatingHandler.h>

class luna_wrapper_spark_SparkUpdatingHandler {
public:
	typedef Luna< spark::SparkUpdatingHandler > luna_t;

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
	static int _cast_from_GUIEventHandler(lua_State *L) {
		// all checked are already performed before reaching this point.
		//spark::SparkUpdatingHandler* ptr= dynamic_cast< spark::SparkUpdatingHandler* >(Luna< osg::Referenced >::check(L,1));
		spark::SparkUpdatingHandler* ptr= luna_caster< osg::Referenced, spark::SparkUpdatingHandler >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< spark::SparkUpdatingHandler >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_addSpark(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeSpark(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTrackee(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTrackee_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTrackee_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSpark_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSpark_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumSparks(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_handle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_handle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// spark::SparkUpdatingHandler::SparkUpdatingHandler()
	static spark::SparkUpdatingHandler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in spark::SparkUpdatingHandler::SparkUpdatingHandler() function, expected prototype:\nspark::SparkUpdatingHandler::SparkUpdatingHandler()\nClass arguments details:\n");
		}


		return new spark::SparkUpdatingHandler();
	}

	// spark::SparkUpdatingHandler::SparkUpdatingHandler(lua_Table * data)
	static spark::SparkUpdatingHandler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in spark::SparkUpdatingHandler::SparkUpdatingHandler(lua_Table * data) function, expected prototype:\nspark::SparkUpdatingHandler::SparkUpdatingHandler(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_spark_SparkUpdatingHandler(L,NULL);
	}

	// Overload binder for spark::SparkUpdatingHandler::SparkUpdatingHandler
	static spark::SparkUpdatingHandler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function SparkUpdatingHandler, cannot match any of the overloads for function SparkUpdatingHandler:\n  SparkUpdatingHandler()\n  SparkUpdatingHandler(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void spark::SparkUpdatingHandler::addSpark(spark::SparkDrawable * spark, osg::Transform * trackee = 0)
	static int _bind_addSpark(lua_State *L) {
		if (!_lg_typecheck_addSpark(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void spark::SparkUpdatingHandler::addSpark(spark::SparkDrawable * spark, osg::Transform * trackee = 0) function, expected prototype:\nvoid spark::SparkUpdatingHandler::addSpark(spark::SparkDrawable * spark, osg::Transform * trackee = 0)\nClass arguments details:\narg 1 ID = 20484188\n");
		}

		int luatop = lua_gettop(L);

		spark::SparkDrawable* spark=(Luna< osg::Referenced >::checkSubType< spark::SparkDrawable >(L,2));
		osg::Transform* trackee=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osg::Transform >(L,3)) : 0;

		spark::SparkUpdatingHandler* self=Luna< osg::Referenced >::checkSubType< spark::SparkUpdatingHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void spark::SparkUpdatingHandler::addSpark(spark::SparkDrawable *, osg::Transform *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->addSpark(spark, trackee);

		return 0;
	}

	// void spark::SparkUpdatingHandler::removeSpark(unsigned int i)
	static int _bind_removeSpark(lua_State *L) {
		if (!_lg_typecheck_removeSpark(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void spark::SparkUpdatingHandler::removeSpark(unsigned int i) function, expected prototype:\nvoid spark::SparkUpdatingHandler::removeSpark(unsigned int i)\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		spark::SparkUpdatingHandler* self=Luna< osg::Referenced >::checkSubType< spark::SparkUpdatingHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void spark::SparkUpdatingHandler::removeSpark(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->removeSpark(i);

		return 0;
	}

	// void spark::SparkUpdatingHandler::setTrackee(unsigned int i, osg::Transform * t)
	static int _bind_setTrackee(lua_State *L) {
		if (!_lg_typecheck_setTrackee(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void spark::SparkUpdatingHandler::setTrackee(unsigned int i, osg::Transform * t) function, expected prototype:\nvoid spark::SparkUpdatingHandler::setTrackee(unsigned int i, osg::Transform * t)\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Transform* t=(Luna< osg::Referenced >::checkSubType< osg::Transform >(L,3));

		spark::SparkUpdatingHandler* self=Luna< osg::Referenced >::checkSubType< spark::SparkUpdatingHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void spark::SparkUpdatingHandler::setTrackee(unsigned int, osg::Transform *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setTrackee(i, t);

		return 0;
	}

	// osg::Transform * spark::SparkUpdatingHandler::getTrackee(unsigned int i)
	static int _bind_getTrackee_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTrackee_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Transform * spark::SparkUpdatingHandler::getTrackee(unsigned int i) function, expected prototype:\nosg::Transform * spark::SparkUpdatingHandler::getTrackee(unsigned int i)\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		spark::SparkUpdatingHandler* self=Luna< osg::Referenced >::checkSubType< spark::SparkUpdatingHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Transform * spark::SparkUpdatingHandler::getTrackee(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Transform * lret = self->getTrackee(i);
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'osg::Transform *'
		////////////////////////////////////////////////////////////////////

		return 1;
	}

	// const osg::Transform * spark::SparkUpdatingHandler::getTrackee(unsigned int i) const
	static int _bind_getTrackee_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTrackee_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Transform * spark::SparkUpdatingHandler::getTrackee(unsigned int i) const function, expected prototype:\nconst osg::Transform * spark::SparkUpdatingHandler::getTrackee(unsigned int i) const\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		spark::SparkUpdatingHandler* self=Luna< osg::Referenced >::checkSubType< spark::SparkUpdatingHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Transform * spark::SparkUpdatingHandler::getTrackee(unsigned int) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::Transform * lret = self->getTrackee(i);
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'const osg::Transform *'
		////////////////////////////////////////////////////////////////////

		return 1;
	}

	// Overload binder for spark::SparkUpdatingHandler::getTrackee
	static int _bind_getTrackee(lua_State *L) {
		if (_lg_typecheck_getTrackee_overload_1(L)) return _bind_getTrackee_overload_1(L);
		if (_lg_typecheck_getTrackee_overload_2(L)) return _bind_getTrackee_overload_2(L);

		luaL_error(L, "error in function getTrackee, cannot match any of the overloads for function getTrackee:\n  getTrackee(unsigned int)\n  getTrackee(unsigned int)\n");
		return 0;
	}

	// spark::SparkDrawable * spark::SparkUpdatingHandler::getSpark(unsigned int i)
	static int _bind_getSpark_overload_1(lua_State *L) {
		if (!_lg_typecheck_getSpark_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in spark::SparkDrawable * spark::SparkUpdatingHandler::getSpark(unsigned int i) function, expected prototype:\nspark::SparkDrawable * spark::SparkUpdatingHandler::getSpark(unsigned int i)\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		spark::SparkUpdatingHandler* self=Luna< osg::Referenced >::checkSubType< spark::SparkUpdatingHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call spark::SparkDrawable * spark::SparkUpdatingHandler::getSpark(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		spark::SparkDrawable * lret = self->getSpark(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< spark::SparkDrawable >::push(L,lret,false);

		return 1;
	}

	// const spark::SparkDrawable * spark::SparkUpdatingHandler::getSpark(unsigned int i) const
	static int _bind_getSpark_overload_2(lua_State *L) {
		if (!_lg_typecheck_getSpark_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const spark::SparkDrawable * spark::SparkUpdatingHandler::getSpark(unsigned int i) const function, expected prototype:\nconst spark::SparkDrawable * spark::SparkUpdatingHandler::getSpark(unsigned int i) const\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		spark::SparkUpdatingHandler* self=Luna< osg::Referenced >::checkSubType< spark::SparkUpdatingHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const spark::SparkDrawable * spark::SparkUpdatingHandler::getSpark(unsigned int) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const spark::SparkDrawable * lret = self->getSpark(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< spark::SparkDrawable >::push(L,lret,false);

		return 1;
	}

	// Overload binder for spark::SparkUpdatingHandler::getSpark
	static int _bind_getSpark(lua_State *L) {
		if (_lg_typecheck_getSpark_overload_1(L)) return _bind_getSpark_overload_1(L);
		if (_lg_typecheck_getSpark_overload_2(L)) return _bind_getSpark_overload_2(L);

		luaL_error(L, "error in function getSpark, cannot match any of the overloads for function getSpark:\n  getSpark(unsigned int)\n  getSpark(unsigned int)\n");
		return 0;
	}

	// unsigned int spark::SparkUpdatingHandler::getNumSparks() const
	static int _bind_getNumSparks(lua_State *L) {
		if (!_lg_typecheck_getNumSparks(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int spark::SparkUpdatingHandler::getNumSparks() const function, expected prototype:\nunsigned int spark::SparkUpdatingHandler::getNumSparks() const\nClass arguments details:\n");
		}


		spark::SparkUpdatingHandler* self=Luna< osg::Referenced >::checkSubType< spark::SparkUpdatingHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int spark::SparkUpdatingHandler::getNumSparks() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->getNumSparks();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool spark::SparkUpdatingHandler::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa)
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool spark::SparkUpdatingHandler::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa) function, expected prototype:\nbool spark::SparkUpdatingHandler::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa)\nClass arguments details:\n");
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in spark::SparkUpdatingHandler::handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* aa_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !aa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aa in spark::SparkUpdatingHandler::handle function");
		}
		osgGA::GUIActionAdapter & aa=*aa_ptr;

		spark::SparkUpdatingHandler* self=Luna< osg::Referenced >::checkSubType< spark::SparkUpdatingHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool spark::SparkUpdatingHandler::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->handle(ea, aa);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool spark::SparkUpdatingHandler::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa)
	static int _bind_base_handle(lua_State *L) {
		if (!_lg_typecheck_base_handle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool spark::SparkUpdatingHandler::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa) function, expected prototype:\nbool spark::SparkUpdatingHandler::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa)\nClass arguments details:\n");
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in spark::SparkUpdatingHandler::base_handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* aa_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !aa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aa in spark::SparkUpdatingHandler::base_handle function");
		}
		osgGA::GUIActionAdapter & aa=*aa_ptr;

		spark::SparkUpdatingHandler* self=Luna< osg::Referenced >::checkSubType< spark::SparkUpdatingHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool spark::SparkUpdatingHandler::base_handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->SparkUpdatingHandler::handle(ea, aa);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

spark::SparkUpdatingHandler* LunaTraits< spark::SparkUpdatingHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_spark_SparkUpdatingHandler::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< spark::SparkUpdatingHandler >::_bind_dtor(spark::SparkUpdatingHandler* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< spark::SparkUpdatingHandler >::className[] = "SparkUpdatingHandler";
const char LunaTraits< spark::SparkUpdatingHandler >::fullName[] = "spark::SparkUpdatingHandler";
const char LunaTraits< spark::SparkUpdatingHandler >::moduleName[] = "spark";
const char* LunaTraits< spark::SparkUpdatingHandler >::parents[] = {"osgGA.GUIEventHandler", 0};
const int LunaTraits< spark::SparkUpdatingHandler >::hash = 40097686;
const int LunaTraits< spark::SparkUpdatingHandler >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< spark::SparkUpdatingHandler >::methods[] = {
	{"addSpark", &luna_wrapper_spark_SparkUpdatingHandler::_bind_addSpark},
	{"removeSpark", &luna_wrapper_spark_SparkUpdatingHandler::_bind_removeSpark},
	{"setTrackee", &luna_wrapper_spark_SparkUpdatingHandler::_bind_setTrackee},
	{"getTrackee", &luna_wrapper_spark_SparkUpdatingHandler::_bind_getTrackee},
	{"getSpark", &luna_wrapper_spark_SparkUpdatingHandler::_bind_getSpark},
	{"getNumSparks", &luna_wrapper_spark_SparkUpdatingHandler::_bind_getNumSparks},
	{"handle", &luna_wrapper_spark_SparkUpdatingHandler::_bind_handle},
	{"base_handle", &luna_wrapper_spark_SparkUpdatingHandler::_bind_base_handle},
	{"__eq", &luna_wrapper_spark_SparkUpdatingHandler::_bind___eq},
	{"getTable", &luna_wrapper_spark_SparkUpdatingHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< spark::SparkUpdatingHandler >::converters[] = {
	{"osgGA::GUIEventHandler", &luna_wrapper_spark_SparkUpdatingHandler::_cast_from_GUIEventHandler},
	{0,0}
};

luna_RegEnumType LunaTraits< spark::SparkUpdatingHandler >::enumValues[] = {
	{0,0}
};


