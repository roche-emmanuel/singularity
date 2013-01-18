#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_ImageOptions_TexCoordRange.h>

class luna_wrapper_osgDB_ImageOptions_TexCoordRange {
public:
	typedef Luna< osgDB::ImageOptions::TexCoordRange > luna_t;

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

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		osgDB::ImageOptions::TexCoordRange* self= (osgDB::ImageOptions::TexCoordRange*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::ImageOptions::TexCoordRange >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osgDB::ImageOptions::TexCoordRange* ptr= dynamic_cast< osgDB::ImageOptions::TexCoordRange* >(Luna< osg::Referenced >::check(L,1));
		osgDB::ImageOptions::TexCoordRange* ptr= luna_caster< osg::Referenced, osgDB::ImageOptions::TexCoordRange >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::ImageOptions::TexCoordRange >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_set(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getW(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getH(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setW(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setH(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::ImageOptions::TexCoordRange::TexCoordRange()
	static osgDB::ImageOptions::TexCoordRange* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ImageOptions::TexCoordRange::TexCoordRange() function, expected prototype:\nosgDB::ImageOptions::TexCoordRange::TexCoordRange()\nClass arguments details:\n");
		}


		return new osgDB::ImageOptions::TexCoordRange();
	}

	// osgDB::ImageOptions::TexCoordRange::TexCoordRange(lua_Table * data)
	static osgDB::ImageOptions::TexCoordRange* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ImageOptions::TexCoordRange::TexCoordRange(lua_Table * data) function, expected prototype:\nosgDB::ImageOptions::TexCoordRange::TexCoordRange(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgDB_ImageOptions_TexCoordRange(L,NULL);
	}

	// Overload binder for osgDB::ImageOptions::TexCoordRange::TexCoordRange
	static osgDB::ImageOptions::TexCoordRange* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TexCoordRange, cannot match any of the overloads for function TexCoordRange:\n  TexCoordRange()\n  TexCoordRange(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osgDB::ImageOptions::TexCoordRange::set(double x, double y, double w, double h)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::TexCoordRange::set(double x, double y, double w, double h) function, expected prototype:\nvoid osgDB::ImageOptions::TexCoordRange::set(double x, double y, double w, double h)\nClass arguments details:\n");
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		double w=(double)lua_tonumber(L,4);
		double h=(double)lua_tonumber(L,5);

		osgDB::ImageOptions::TexCoordRange* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions::TexCoordRange >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::TexCoordRange::set(double, double, double, double). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->set(x, y, w, h);

		return 0;
	}

	// double osgDB::ImageOptions::TexCoordRange::_x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgDB::ImageOptions::TexCoordRange::_x() function, expected prototype:\ndouble osgDB::ImageOptions::TexCoordRange::_x()\nClass arguments details:\n");
		}


		osgDB::ImageOptions::TexCoordRange* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions::TexCoordRange >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgDB::ImageOptions::TexCoordRange::_x(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		double lret = self->_x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osgDB::ImageOptions::TexCoordRange::_y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgDB::ImageOptions::TexCoordRange::_y() function, expected prototype:\ndouble osgDB::ImageOptions::TexCoordRange::_y()\nClass arguments details:\n");
		}


		osgDB::ImageOptions::TexCoordRange* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions::TexCoordRange >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgDB::ImageOptions::TexCoordRange::_y(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		double lret = self->_y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osgDB::ImageOptions::TexCoordRange::_w()
	static int _bind_getW(lua_State *L) {
		if (!_lg_typecheck_getW(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgDB::ImageOptions::TexCoordRange::_w() function, expected prototype:\ndouble osgDB::ImageOptions::TexCoordRange::_w()\nClass arguments details:\n");
		}


		osgDB::ImageOptions::TexCoordRange* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions::TexCoordRange >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgDB::ImageOptions::TexCoordRange::_w(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		double lret = self->_w;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osgDB::ImageOptions::TexCoordRange::_h()
	static int _bind_getH(lua_State *L) {
		if (!_lg_typecheck_getH(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgDB::ImageOptions::TexCoordRange::_h() function, expected prototype:\ndouble osgDB::ImageOptions::TexCoordRange::_h()\nClass arguments details:\n");
		}


		osgDB::ImageOptions::TexCoordRange* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions::TexCoordRange >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgDB::ImageOptions::TexCoordRange::_h(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		double lret = self->_h;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::ImageOptions::TexCoordRange::_x(double value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::TexCoordRange::_x(double value) function, expected prototype:\nvoid osgDB::ImageOptions::TexCoordRange::_x(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		osgDB::ImageOptions::TexCoordRange* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions::TexCoordRange >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::TexCoordRange::_x(double). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_x = value;

		return 0;
	}

	// void osgDB::ImageOptions::TexCoordRange::_y(double value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::TexCoordRange::_y(double value) function, expected prototype:\nvoid osgDB::ImageOptions::TexCoordRange::_y(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		osgDB::ImageOptions::TexCoordRange* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions::TexCoordRange >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::TexCoordRange::_y(double). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_y = value;

		return 0;
	}

	// void osgDB::ImageOptions::TexCoordRange::_w(double value)
	static int _bind_setW(lua_State *L) {
		if (!_lg_typecheck_setW(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::TexCoordRange::_w(double value) function, expected prototype:\nvoid osgDB::ImageOptions::TexCoordRange::_w(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		osgDB::ImageOptions::TexCoordRange* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions::TexCoordRange >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::TexCoordRange::_w(double). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_w = value;

		return 0;
	}

	// void osgDB::ImageOptions::TexCoordRange::_h(double value)
	static int _bind_setH(lua_State *L) {
		if (!_lg_typecheck_setH(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::TexCoordRange::_h(double value) function, expected prototype:\nvoid osgDB::ImageOptions::TexCoordRange::_h(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		osgDB::ImageOptions::TexCoordRange* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions::TexCoordRange >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::TexCoordRange::_h(double). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_h = value;

		return 0;
	}

	// void osgDB::ImageOptions::TexCoordRange::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::TexCoordRange::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgDB::ImageOptions::TexCoordRange::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgDB::ImageOptions::TexCoordRange* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions::TexCoordRange >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::TexCoordRange::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->TexCoordRange::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osgDB::ImageOptions::TexCoordRange* LunaTraits< osgDB::ImageOptions::TexCoordRange >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_ImageOptions_TexCoordRange::_bind_ctor(L);
}

void LunaTraits< osgDB::ImageOptions::TexCoordRange >::_bind_dtor(osgDB::ImageOptions::TexCoordRange* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::ImageOptions::TexCoordRange >::className[] = "ImageOptions_TexCoordRange";
const char LunaTraits< osgDB::ImageOptions::TexCoordRange >::fullName[] = "osgDB::ImageOptions::TexCoordRange";
const char LunaTraits< osgDB::ImageOptions::TexCoordRange >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ImageOptions::TexCoordRange >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::ImageOptions::TexCoordRange >::hash = 56995153;
const int LunaTraits< osgDB::ImageOptions::TexCoordRange >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::ImageOptions::TexCoordRange >::methods[] = {
	{"set", &luna_wrapper_osgDB_ImageOptions_TexCoordRange::_bind_set},
	{"getX", &luna_wrapper_osgDB_ImageOptions_TexCoordRange::_bind_getX},
	{"getY", &luna_wrapper_osgDB_ImageOptions_TexCoordRange::_bind_getY},
	{"getW", &luna_wrapper_osgDB_ImageOptions_TexCoordRange::_bind_getW},
	{"getH", &luna_wrapper_osgDB_ImageOptions_TexCoordRange::_bind_getH},
	{"setX", &luna_wrapper_osgDB_ImageOptions_TexCoordRange::_bind_setX},
	{"setY", &luna_wrapper_osgDB_ImageOptions_TexCoordRange::_bind_setY},
	{"setW", &luna_wrapper_osgDB_ImageOptions_TexCoordRange::_bind_setW},
	{"setH", &luna_wrapper_osgDB_ImageOptions_TexCoordRange::_bind_setH},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgDB_ImageOptions_TexCoordRange::_bind_base_setThreadSafeRefUnref},
	{"__eq", &luna_wrapper_osgDB_ImageOptions_TexCoordRange::_bind___eq},
	{"fromVoid", &luna_wrapper_osgDB_ImageOptions_TexCoordRange::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_ImageOptions_TexCoordRange::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_ImageOptions_TexCoordRange::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ImageOptions::TexCoordRange >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_ImageOptions_TexCoordRange::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ImageOptions::TexCoordRange >::enumValues[] = {
	{0,0}
};


