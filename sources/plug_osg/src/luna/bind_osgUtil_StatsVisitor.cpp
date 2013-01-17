#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_StatsVisitor.h>

class luna_wrapper_osgUtil_StatsVisitor {
public:
	typedef Luna< osgUtil::StatsVisitor > luna_t;

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
		//osgUtil::StatsVisitor* ptr= dynamic_cast< osgUtil::StatsVisitor* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::StatsVisitor* ptr= luna_caster< osg::Referenced, osgUtil::StatsVisitor >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::StatsVisitor >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Group >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Transform >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::LOD >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Switch >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_totalUpStats(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_print(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2993706) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_numInstancedGroup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_numInstancedSwitch(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_numInstancedLOD(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_numInstancedTransform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_numInstancedGeode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_numInstancedDrawable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_numInstancedGeometry(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_numInstancedFastGeometry(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_numInstancedStateSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_groupSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_transformSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_lodSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_switchSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_geodeSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_drawableSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_geometrySet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_fastGeometrySet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_statesetSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_uniqueStats(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_instancedStats(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_numInstancedGroup(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_numInstancedSwitch(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_numInstancedLOD(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_numInstancedTransform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_numInstancedGeode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_numInstancedDrawable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_numInstancedGeometry(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_numInstancedFastGeometry(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_numInstancedStateSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_groupSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,73927809) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_transformSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,73927809) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_lodSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,73927809) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_switchSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,73927809) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_geodeSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,73927809) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_drawableSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76374875) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_geometrySet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76374875) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_fastGeometrySet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76374875) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_statesetSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,97002577) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_uniqueStats(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,95996950) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_instancedStats(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,95996950) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getEyePoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getViewPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceToEyePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceFromEyePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceToViewPoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Group >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Transform >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::LOD >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Switch >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::StatsVisitor::StatsVisitor()
	static osgUtil::StatsVisitor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::StatsVisitor::StatsVisitor() function, expected prototype:\nosgUtil::StatsVisitor::StatsVisitor()\nClass arguments details:\n");
		}


		return new osgUtil::StatsVisitor();
	}

	// osgUtil::StatsVisitor::StatsVisitor(lua_Table * data)
	static osgUtil::StatsVisitor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::StatsVisitor::StatsVisitor(lua_Table * data) function, expected prototype:\nosgUtil::StatsVisitor::StatsVisitor(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgUtil_StatsVisitor(L,NULL);
	}

	// Overload binder for osgUtil::StatsVisitor::StatsVisitor
	static osgUtil::StatsVisitor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function StatsVisitor, cannot match any of the overloads for function StatsVisitor:\n  StatsVisitor()\n  StatsVisitor(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgUtil::StatsVisitor::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::StatsVisitor::libraryName() const function, expected prototype:\nconst char * osgUtil::StatsVisitor::libraryName() const\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::StatsVisitor::libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::StatsVisitor::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::StatsVisitor::className() const function, expected prototype:\nconst char * osgUtil::StatsVisitor::className() const\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::StatsVisitor::className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::StatsVisitor::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::reset() function, expected prototype:\nvoid osgUtil::StatsVisitor::reset()\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::reset(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->reset();

		return 0;
	}

	// void osgUtil::StatsVisitor::apply(osg::Node & node)
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::apply(osg::Node & node) function, expected prototype:\nvoid osgUtil::StatsVisitor::apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StatsVisitor::apply function");
		}
		osg::Node & node=*node_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::apply(osg::Node &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::StatsVisitor::apply(osg::Group & node)
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::apply(osg::Group & node) function, expected prototype:\nvoid osgUtil::StatsVisitor::apply(osg::Group & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Group* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Group >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StatsVisitor::apply function");
		}
		osg::Group & node=*node_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::apply(osg::Group &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::StatsVisitor::apply(osg::Transform & node)
	static int _bind_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_apply_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::apply(osg::Transform & node) function, expected prototype:\nvoid osgUtil::StatsVisitor::apply(osg::Transform & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Transform* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Transform >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StatsVisitor::apply function");
		}
		osg::Transform & node=*node_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::apply(osg::Transform &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::StatsVisitor::apply(osg::LOD & node)
	static int _bind_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_apply_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::apply(osg::LOD & node) function, expected prototype:\nvoid osgUtil::StatsVisitor::apply(osg::LOD & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::LOD* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::LOD >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StatsVisitor::apply function");
		}
		osg::LOD & node=*node_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::apply(osg::LOD &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::StatsVisitor::apply(osg::Switch & node)
	static int _bind_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_apply_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::apply(osg::Switch & node) function, expected prototype:\nvoid osgUtil::StatsVisitor::apply(osg::Switch & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Switch* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Switch >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StatsVisitor::apply function");
		}
		osg::Switch & node=*node_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::apply(osg::Switch &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::StatsVisitor::apply(osg::Geode & node)
	static int _bind_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_apply_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::apply(osg::Geode & node) function, expected prototype:\nvoid osgUtil::StatsVisitor::apply(osg::Geode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StatsVisitor::apply function");
		}
		osg::Geode & node=*node_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::apply(osg::Geode &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::StatsVisitor::apply(osg::Drawable & drawable)
	static int _bind_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_apply_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::apply(osg::Drawable & drawable) function, expected prototype:\nvoid osgUtil::StatsVisitor::apply(osg::Drawable & drawable)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Drawable* drawable_ptr=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));
		if( !drawable_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg drawable in osgUtil::StatsVisitor::apply function");
		}
		osg::Drawable & drawable=*drawable_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::apply(osg::Drawable &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->apply(drawable);

		return 0;
	}

	// Overload binder for osgUtil::StatsVisitor::apply
	static int _bind_apply(lua_State *L) {
		if (_lg_typecheck_apply_overload_1(L)) return _bind_apply_overload_1(L);
		if (_lg_typecheck_apply_overload_2(L)) return _bind_apply_overload_2(L);
		if (_lg_typecheck_apply_overload_3(L)) return _bind_apply_overload_3(L);
		if (_lg_typecheck_apply_overload_4(L)) return _bind_apply_overload_4(L);
		if (_lg_typecheck_apply_overload_5(L)) return _bind_apply_overload_5(L);
		if (_lg_typecheck_apply_overload_6(L)) return _bind_apply_overload_6(L);
		if (_lg_typecheck_apply_overload_7(L)) return _bind_apply_overload_7(L);

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(osg::Node &)\n  apply(osg::Group &)\n  apply(osg::Transform &)\n  apply(osg::LOD &)\n  apply(osg::Switch &)\n  apply(osg::Geode &)\n  apply(osg::Drawable &)\n");
		return 0;
	}

	// void osgUtil::StatsVisitor::totalUpStats()
	static int _bind_totalUpStats(lua_State *L) {
		if (!_lg_typecheck_totalUpStats(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::totalUpStats() function, expected prototype:\nvoid osgUtil::StatsVisitor::totalUpStats()\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::totalUpStats(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->totalUpStats();

		return 0;
	}

	// void osgUtil::StatsVisitor::print(std::ostream & out)
	static int _bind_print(lua_State *L) {
		if (!_lg_typecheck_print(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::print(std::ostream & out) function, expected prototype:\nvoid osgUtil::StatsVisitor::print(std::ostream & out)\nClass arguments details:\narg 1 ID = 2993706\n");
		}

		std::ostream* out_ptr=(Luna< std::ostream >::check(L,2));
		if( !out_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg out in osgUtil::StatsVisitor::print function");
		}
		std::ostream & out=*out_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::print(std::ostream &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->print(out);

		return 0;
	}

	// unsigned int osgUtil::StatsVisitor::_numInstancedGroup()
	static int _bind_get_numInstancedGroup(lua_State *L) {
		if (!_lg_typecheck_get_numInstancedGroup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::StatsVisitor::_numInstancedGroup() function, expected prototype:\nunsigned int osgUtil::StatsVisitor::_numInstancedGroup()\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::StatsVisitor::_numInstancedGroup(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->_numInstancedGroup;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgUtil::StatsVisitor::_numInstancedSwitch()
	static int _bind_get_numInstancedSwitch(lua_State *L) {
		if (!_lg_typecheck_get_numInstancedSwitch(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::StatsVisitor::_numInstancedSwitch() function, expected prototype:\nunsigned int osgUtil::StatsVisitor::_numInstancedSwitch()\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::StatsVisitor::_numInstancedSwitch(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->_numInstancedSwitch;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgUtil::StatsVisitor::_numInstancedLOD()
	static int _bind_get_numInstancedLOD(lua_State *L) {
		if (!_lg_typecheck_get_numInstancedLOD(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::StatsVisitor::_numInstancedLOD() function, expected prototype:\nunsigned int osgUtil::StatsVisitor::_numInstancedLOD()\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::StatsVisitor::_numInstancedLOD(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->_numInstancedLOD;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgUtil::StatsVisitor::_numInstancedTransform()
	static int _bind_get_numInstancedTransform(lua_State *L) {
		if (!_lg_typecheck_get_numInstancedTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::StatsVisitor::_numInstancedTransform() function, expected prototype:\nunsigned int osgUtil::StatsVisitor::_numInstancedTransform()\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::StatsVisitor::_numInstancedTransform(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->_numInstancedTransform;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgUtil::StatsVisitor::_numInstancedGeode()
	static int _bind_get_numInstancedGeode(lua_State *L) {
		if (!_lg_typecheck_get_numInstancedGeode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::StatsVisitor::_numInstancedGeode() function, expected prototype:\nunsigned int osgUtil::StatsVisitor::_numInstancedGeode()\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::StatsVisitor::_numInstancedGeode(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->_numInstancedGeode;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgUtil::StatsVisitor::_numInstancedDrawable()
	static int _bind_get_numInstancedDrawable(lua_State *L) {
		if (!_lg_typecheck_get_numInstancedDrawable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::StatsVisitor::_numInstancedDrawable() function, expected prototype:\nunsigned int osgUtil::StatsVisitor::_numInstancedDrawable()\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::StatsVisitor::_numInstancedDrawable(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->_numInstancedDrawable;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgUtil::StatsVisitor::_numInstancedGeometry()
	static int _bind_get_numInstancedGeometry(lua_State *L) {
		if (!_lg_typecheck_get_numInstancedGeometry(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::StatsVisitor::_numInstancedGeometry() function, expected prototype:\nunsigned int osgUtil::StatsVisitor::_numInstancedGeometry()\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::StatsVisitor::_numInstancedGeometry(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->_numInstancedGeometry;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgUtil::StatsVisitor::_numInstancedFastGeometry()
	static int _bind_get_numInstancedFastGeometry(lua_State *L) {
		if (!_lg_typecheck_get_numInstancedFastGeometry(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::StatsVisitor::_numInstancedFastGeometry() function, expected prototype:\nunsigned int osgUtil::StatsVisitor::_numInstancedFastGeometry()\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::StatsVisitor::_numInstancedFastGeometry(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->_numInstancedFastGeometry;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgUtil::StatsVisitor::_numInstancedStateSet()
	static int _bind_get_numInstancedStateSet(lua_State *L) {
		if (!_lg_typecheck_get_numInstancedStateSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::StatsVisitor::_numInstancedStateSet() function, expected prototype:\nunsigned int osgUtil::StatsVisitor::_numInstancedStateSet()\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::StatsVisitor::_numInstancedStateSet(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->_numInstancedStateSet;
		lua_pushnumber(L,lret);

		return 1;
	}

	// osgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_groupSet()
	static int _bind_get_groupSet(lua_State *L) {
		if (!_lg_typecheck_get_groupSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_groupSet() function, expected prototype:\nosgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_groupSet()\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_groupSet(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osgUtil::StatsVisitor::NodeSet* lret = &self->_groupSet;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StatsVisitor::NodeSet >::push(L,lret,false);

		return 1;
	}

	// osgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_transformSet()
	static int _bind_get_transformSet(lua_State *L) {
		if (!_lg_typecheck_get_transformSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_transformSet() function, expected prototype:\nosgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_transformSet()\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_transformSet(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osgUtil::StatsVisitor::NodeSet* lret = &self->_transformSet;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StatsVisitor::NodeSet >::push(L,lret,false);

		return 1;
	}

	// osgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_lodSet()
	static int _bind_get_lodSet(lua_State *L) {
		if (!_lg_typecheck_get_lodSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_lodSet() function, expected prototype:\nosgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_lodSet()\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_lodSet(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osgUtil::StatsVisitor::NodeSet* lret = &self->_lodSet;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StatsVisitor::NodeSet >::push(L,lret,false);

		return 1;
	}

	// osgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_switchSet()
	static int _bind_get_switchSet(lua_State *L) {
		if (!_lg_typecheck_get_switchSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_switchSet() function, expected prototype:\nosgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_switchSet()\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_switchSet(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osgUtil::StatsVisitor::NodeSet* lret = &self->_switchSet;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StatsVisitor::NodeSet >::push(L,lret,false);

		return 1;
	}

	// osgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_geodeSet()
	static int _bind_get_geodeSet(lua_State *L) {
		if (!_lg_typecheck_get_geodeSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_geodeSet() function, expected prototype:\nosgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_geodeSet()\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_geodeSet(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osgUtil::StatsVisitor::NodeSet* lret = &self->_geodeSet;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StatsVisitor::NodeSet >::push(L,lret,false);

		return 1;
	}

	// osgUtil::StatsVisitor::DrawableSet osgUtil::StatsVisitor::_drawableSet()
	static int _bind_get_drawableSet(lua_State *L) {
		if (!_lg_typecheck_get_drawableSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::StatsVisitor::DrawableSet osgUtil::StatsVisitor::_drawableSet() function, expected prototype:\nosgUtil::StatsVisitor::DrawableSet osgUtil::StatsVisitor::_drawableSet()\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::StatsVisitor::DrawableSet osgUtil::StatsVisitor::_drawableSet(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osgUtil::StatsVisitor::DrawableSet* lret = &self->_drawableSet;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StatsVisitor::DrawableSet >::push(L,lret,false);

		return 1;
	}

	// osgUtil::StatsVisitor::DrawableSet osgUtil::StatsVisitor::_geometrySet()
	static int _bind_get_geometrySet(lua_State *L) {
		if (!_lg_typecheck_get_geometrySet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::StatsVisitor::DrawableSet osgUtil::StatsVisitor::_geometrySet() function, expected prototype:\nosgUtil::StatsVisitor::DrawableSet osgUtil::StatsVisitor::_geometrySet()\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::StatsVisitor::DrawableSet osgUtil::StatsVisitor::_geometrySet(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osgUtil::StatsVisitor::DrawableSet* lret = &self->_geometrySet;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StatsVisitor::DrawableSet >::push(L,lret,false);

		return 1;
	}

	// osgUtil::StatsVisitor::DrawableSet osgUtil::StatsVisitor::_fastGeometrySet()
	static int _bind_get_fastGeometrySet(lua_State *L) {
		if (!_lg_typecheck_get_fastGeometrySet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::StatsVisitor::DrawableSet osgUtil::StatsVisitor::_fastGeometrySet() function, expected prototype:\nosgUtil::StatsVisitor::DrawableSet osgUtil::StatsVisitor::_fastGeometrySet()\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::StatsVisitor::DrawableSet osgUtil::StatsVisitor::_fastGeometrySet(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osgUtil::StatsVisitor::DrawableSet* lret = &self->_fastGeometrySet;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StatsVisitor::DrawableSet >::push(L,lret,false);

		return 1;
	}

	// osgUtil::StatsVisitor::StateSetSet osgUtil::StatsVisitor::_statesetSet()
	static int _bind_get_statesetSet(lua_State *L) {
		if (!_lg_typecheck_get_statesetSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::StatsVisitor::StateSetSet osgUtil::StatsVisitor::_statesetSet() function, expected prototype:\nosgUtil::StatsVisitor::StateSetSet osgUtil::StatsVisitor::_statesetSet()\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::StatsVisitor::StateSetSet osgUtil::StatsVisitor::_statesetSet(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osgUtil::StatsVisitor::StateSetSet* lret = &self->_statesetSet;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StatsVisitor::StateSetSet >::push(L,lret,false);

		return 1;
	}

	// osgUtil::Statistics osgUtil::StatsVisitor::_uniqueStats()
	static int _bind_get_uniqueStats(lua_State *L) {
		if (!_lg_typecheck_get_uniqueStats(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::Statistics osgUtil::StatsVisitor::_uniqueStats() function, expected prototype:\nosgUtil::Statistics osgUtil::StatsVisitor::_uniqueStats()\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::Statistics osgUtil::StatsVisitor::_uniqueStats(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osgUtil::Statistics* lret = &self->_uniqueStats;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::Statistics >::push(L,lret,false);

		return 1;
	}

	// osgUtil::Statistics osgUtil::StatsVisitor::_instancedStats()
	static int _bind_get_instancedStats(lua_State *L) {
		if (!_lg_typecheck_get_instancedStats(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::Statistics osgUtil::StatsVisitor::_instancedStats() function, expected prototype:\nosgUtil::Statistics osgUtil::StatsVisitor::_instancedStats()\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::Statistics osgUtil::StatsVisitor::_instancedStats(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osgUtil::Statistics* lret = &self->_instancedStats;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::Statistics >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::StatsVisitor::_numInstancedGroup(unsigned int value)
	static int _bind_set_numInstancedGroup(lua_State *L) {
		if (!_lg_typecheck_set_numInstancedGroup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_numInstancedGroup(unsigned int value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_numInstancedGroup(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_numInstancedGroup(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_numInstancedGroup = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_numInstancedSwitch(unsigned int value)
	static int _bind_set_numInstancedSwitch(lua_State *L) {
		if (!_lg_typecheck_set_numInstancedSwitch(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_numInstancedSwitch(unsigned int value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_numInstancedSwitch(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_numInstancedSwitch(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_numInstancedSwitch = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_numInstancedLOD(unsigned int value)
	static int _bind_set_numInstancedLOD(lua_State *L) {
		if (!_lg_typecheck_set_numInstancedLOD(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_numInstancedLOD(unsigned int value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_numInstancedLOD(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_numInstancedLOD(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_numInstancedLOD = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_numInstancedTransform(unsigned int value)
	static int _bind_set_numInstancedTransform(lua_State *L) {
		if (!_lg_typecheck_set_numInstancedTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_numInstancedTransform(unsigned int value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_numInstancedTransform(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_numInstancedTransform(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_numInstancedTransform = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_numInstancedGeode(unsigned int value)
	static int _bind_set_numInstancedGeode(lua_State *L) {
		if (!_lg_typecheck_set_numInstancedGeode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_numInstancedGeode(unsigned int value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_numInstancedGeode(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_numInstancedGeode(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_numInstancedGeode = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_numInstancedDrawable(unsigned int value)
	static int _bind_set_numInstancedDrawable(lua_State *L) {
		if (!_lg_typecheck_set_numInstancedDrawable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_numInstancedDrawable(unsigned int value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_numInstancedDrawable(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_numInstancedDrawable(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_numInstancedDrawable = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_numInstancedGeometry(unsigned int value)
	static int _bind_set_numInstancedGeometry(lua_State *L) {
		if (!_lg_typecheck_set_numInstancedGeometry(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_numInstancedGeometry(unsigned int value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_numInstancedGeometry(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_numInstancedGeometry(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_numInstancedGeometry = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_numInstancedFastGeometry(unsigned int value)
	static int _bind_set_numInstancedFastGeometry(lua_State *L) {
		if (!_lg_typecheck_set_numInstancedFastGeometry(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_numInstancedFastGeometry(unsigned int value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_numInstancedFastGeometry(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_numInstancedFastGeometry(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_numInstancedFastGeometry = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_numInstancedStateSet(unsigned int value)
	static int _bind_set_numInstancedStateSet(lua_State *L) {
		if (!_lg_typecheck_set_numInstancedStateSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_numInstancedStateSet(unsigned int value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_numInstancedStateSet(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_numInstancedStateSet(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_numInstancedStateSet = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_groupSet(osgUtil::StatsVisitor::NodeSet value)
	static int _bind_set_groupSet(lua_State *L) {
		if (!_lg_typecheck_set_groupSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_groupSet(osgUtil::StatsVisitor::NodeSet value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_groupSet(osgUtil::StatsVisitor::NodeSet value)\nClass arguments details:\narg 1 ID = 22793184\n");
		}

		osgUtil::StatsVisitor::NodeSet* value_ptr=(Luna< std::set< osg::Node * > >::checkSubType< osgUtil::StatsVisitor::NodeSet >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::StatsVisitor::_groupSet function");
		}
		osgUtil::StatsVisitor::NodeSet value=*value_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_groupSet(osgUtil::StatsVisitor::NodeSet). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_groupSet = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_transformSet(osgUtil::StatsVisitor::NodeSet value)
	static int _bind_set_transformSet(lua_State *L) {
		if (!_lg_typecheck_set_transformSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_transformSet(osgUtil::StatsVisitor::NodeSet value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_transformSet(osgUtil::StatsVisitor::NodeSet value)\nClass arguments details:\narg 1 ID = 22793184\n");
		}

		osgUtil::StatsVisitor::NodeSet* value_ptr=(Luna< std::set< osg::Node * > >::checkSubType< osgUtil::StatsVisitor::NodeSet >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::StatsVisitor::_transformSet function");
		}
		osgUtil::StatsVisitor::NodeSet value=*value_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_transformSet(osgUtil::StatsVisitor::NodeSet). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_transformSet = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_lodSet(osgUtil::StatsVisitor::NodeSet value)
	static int _bind_set_lodSet(lua_State *L) {
		if (!_lg_typecheck_set_lodSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_lodSet(osgUtil::StatsVisitor::NodeSet value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_lodSet(osgUtil::StatsVisitor::NodeSet value)\nClass arguments details:\narg 1 ID = 22793184\n");
		}

		osgUtil::StatsVisitor::NodeSet* value_ptr=(Luna< std::set< osg::Node * > >::checkSubType< osgUtil::StatsVisitor::NodeSet >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::StatsVisitor::_lodSet function");
		}
		osgUtil::StatsVisitor::NodeSet value=*value_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_lodSet(osgUtil::StatsVisitor::NodeSet). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_lodSet = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_switchSet(osgUtil::StatsVisitor::NodeSet value)
	static int _bind_set_switchSet(lua_State *L) {
		if (!_lg_typecheck_set_switchSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_switchSet(osgUtil::StatsVisitor::NodeSet value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_switchSet(osgUtil::StatsVisitor::NodeSet value)\nClass arguments details:\narg 1 ID = 22793184\n");
		}

		osgUtil::StatsVisitor::NodeSet* value_ptr=(Luna< std::set< osg::Node * > >::checkSubType< osgUtil::StatsVisitor::NodeSet >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::StatsVisitor::_switchSet function");
		}
		osgUtil::StatsVisitor::NodeSet value=*value_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_switchSet(osgUtil::StatsVisitor::NodeSet). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_switchSet = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_geodeSet(osgUtil::StatsVisitor::NodeSet value)
	static int _bind_set_geodeSet(lua_State *L) {
		if (!_lg_typecheck_set_geodeSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_geodeSet(osgUtil::StatsVisitor::NodeSet value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_geodeSet(osgUtil::StatsVisitor::NodeSet value)\nClass arguments details:\narg 1 ID = 22793184\n");
		}

		osgUtil::StatsVisitor::NodeSet* value_ptr=(Luna< std::set< osg::Node * > >::checkSubType< osgUtil::StatsVisitor::NodeSet >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::StatsVisitor::_geodeSet function");
		}
		osgUtil::StatsVisitor::NodeSet value=*value_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_geodeSet(osgUtil::StatsVisitor::NodeSet). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_geodeSet = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_drawableSet(osgUtil::StatsVisitor::DrawableSet value)
	static int _bind_set_drawableSet(lua_State *L) {
		if (!_lg_typecheck_set_drawableSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_drawableSet(osgUtil::StatsVisitor::DrawableSet value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_drawableSet(osgUtil::StatsVisitor::DrawableSet value)\nClass arguments details:\narg 1 ID = 41381585\n");
		}

		osgUtil::StatsVisitor::DrawableSet* value_ptr=(Luna< std::set< osg::Drawable * > >::checkSubType< osgUtil::StatsVisitor::DrawableSet >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::StatsVisitor::_drawableSet function");
		}
		osgUtil::StatsVisitor::DrawableSet value=*value_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_drawableSet(osgUtil::StatsVisitor::DrawableSet). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_drawableSet = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_geometrySet(osgUtil::StatsVisitor::DrawableSet value)
	static int _bind_set_geometrySet(lua_State *L) {
		if (!_lg_typecheck_set_geometrySet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_geometrySet(osgUtil::StatsVisitor::DrawableSet value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_geometrySet(osgUtil::StatsVisitor::DrawableSet value)\nClass arguments details:\narg 1 ID = 41381585\n");
		}

		osgUtil::StatsVisitor::DrawableSet* value_ptr=(Luna< std::set< osg::Drawable * > >::checkSubType< osgUtil::StatsVisitor::DrawableSet >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::StatsVisitor::_geometrySet function");
		}
		osgUtil::StatsVisitor::DrawableSet value=*value_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_geometrySet(osgUtil::StatsVisitor::DrawableSet). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_geometrySet = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_fastGeometrySet(osgUtil::StatsVisitor::DrawableSet value)
	static int _bind_set_fastGeometrySet(lua_State *L) {
		if (!_lg_typecheck_set_fastGeometrySet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_fastGeometrySet(osgUtil::StatsVisitor::DrawableSet value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_fastGeometrySet(osgUtil::StatsVisitor::DrawableSet value)\nClass arguments details:\narg 1 ID = 41381585\n");
		}

		osgUtil::StatsVisitor::DrawableSet* value_ptr=(Luna< std::set< osg::Drawable * > >::checkSubType< osgUtil::StatsVisitor::DrawableSet >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::StatsVisitor::_fastGeometrySet function");
		}
		osgUtil::StatsVisitor::DrawableSet value=*value_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_fastGeometrySet(osgUtil::StatsVisitor::DrawableSet). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_fastGeometrySet = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_statesetSet(osgUtil::StatsVisitor::StateSetSet value)
	static int _bind_set_statesetSet(lua_State *L) {
		if (!_lg_typecheck_set_statesetSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_statesetSet(osgUtil::StatsVisitor::StateSetSet value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_statesetSet(osgUtil::StatsVisitor::StateSetSet value)\nClass arguments details:\narg 1 ID = 77774778\n");
		}

		osgUtil::StatsVisitor::StateSetSet* value_ptr=(Luna< std::set< osg::StateSet * > >::checkSubType< osgUtil::StatsVisitor::StateSetSet >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::StatsVisitor::_statesetSet function");
		}
		osgUtil::StatsVisitor::StateSetSet value=*value_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_statesetSet(osgUtil::StatsVisitor::StateSetSet). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_statesetSet = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_uniqueStats(osgUtil::Statistics value)
	static int _bind_set_uniqueStats(lua_State *L) {
		if (!_lg_typecheck_set_uniqueStats(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_uniqueStats(osgUtil::Statistics value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_uniqueStats(osgUtil::Statistics value)\nClass arguments details:\narg 1 ID = 95996950\n");
		}

		osgUtil::Statistics* value_ptr=(Luna< osgUtil::Statistics >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::StatsVisitor::_uniqueStats function");
		}
		osgUtil::Statistics value=*value_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_uniqueStats(osgUtil::Statistics). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_uniqueStats = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_instancedStats(osgUtil::Statistics value)
	static int _bind_set_instancedStats(lua_State *L) {
		if (!_lg_typecheck_set_instancedStats(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_instancedStats(osgUtil::Statistics value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_instancedStats(osgUtil::Statistics value)\nClass arguments details:\narg 1 ID = 95996950\n");
		}

		osgUtil::Statistics* value_ptr=(Luna< osgUtil::Statistics >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::StatsVisitor::_instancedStats function");
		}
		osgUtil::Statistics value=*value_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_instancedStats(osgUtil::Statistics). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_instancedStats = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::StatsVisitor::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->StatsVisitor::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// osg::Vec3f osgUtil::StatsVisitor::base_getEyePoint() const
	static int _bind_base_getEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::StatsVisitor::base_getEyePoint() const function, expected prototype:\nosg::Vec3f osgUtil::StatsVisitor::base_getEyePoint() const\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::StatsVisitor::base_getEyePoint() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Vec3f stack_lret = self->StatsVisitor::getEyePoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osgUtil::StatsVisitor::base_getViewPoint() const
	static int _bind_base_getViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getViewPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::StatsVisitor::base_getViewPoint() const function, expected prototype:\nosg::Vec3f osgUtil::StatsVisitor::base_getViewPoint() const\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::StatsVisitor::base_getViewPoint() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Vec3f stack_lret = self->StatsVisitor::getViewPoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// float osgUtil::StatsVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgUtil::StatsVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::StatsVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::StatsVisitor::base_getDistanceToEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgUtil::StatsVisitor::base_getDistanceToEyePoint(const osg::Vec3f &, bool) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		float lret = self->StatsVisitor::getDistanceToEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::StatsVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceFromEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceFromEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgUtil::StatsVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::StatsVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::StatsVisitor::base_getDistanceFromEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgUtil::StatsVisitor::base_getDistanceFromEyePoint(const osg::Vec3f &, bool) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		float lret = self->StatsVisitor::getDistanceFromEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::StatsVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToViewPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgUtil::StatsVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::StatsVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::StatsVisitor::base_getDistanceToViewPoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgUtil::StatsVisitor::base_getDistanceToViewPoint(const osg::Vec3f &, bool) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		float lret = self->StatsVisitor::getDistanceToViewPoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * osgUtil::StatsVisitor::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::StatsVisitor::base_libraryName() const function, expected prototype:\nconst char * osgUtil::StatsVisitor::base_libraryName() const\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::StatsVisitor::base_libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->StatsVisitor::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::StatsVisitor::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::StatsVisitor::base_className() const function, expected prototype:\nconst char * osgUtil::StatsVisitor::base_className() const\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::StatsVisitor::base_className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->StatsVisitor::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::StatsVisitor::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::base_reset() function, expected prototype:\nvoid osgUtil::StatsVisitor::base_reset()\nClass arguments details:\n");
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::base_reset(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->StatsVisitor::reset();

		return 0;
	}

	// void osgUtil::StatsVisitor::base_apply(osg::Node & node)
	static int _bind_base_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::base_apply(osg::Node & node) function, expected prototype:\nvoid osgUtil::StatsVisitor::base_apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StatsVisitor::base_apply function");
		}
		osg::Node & node=*node_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::base_apply(osg::Node &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->StatsVisitor::apply(node);

		return 0;
	}

	// void osgUtil::StatsVisitor::base_apply(osg::Group & node)
	static int _bind_base_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::base_apply(osg::Group & node) function, expected prototype:\nvoid osgUtil::StatsVisitor::base_apply(osg::Group & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Group* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Group >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StatsVisitor::base_apply function");
		}
		osg::Group & node=*node_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::base_apply(osg::Group &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->StatsVisitor::apply(node);

		return 0;
	}

	// void osgUtil::StatsVisitor::base_apply(osg::Transform & node)
	static int _bind_base_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::base_apply(osg::Transform & node) function, expected prototype:\nvoid osgUtil::StatsVisitor::base_apply(osg::Transform & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Transform* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Transform >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StatsVisitor::base_apply function");
		}
		osg::Transform & node=*node_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::base_apply(osg::Transform &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->StatsVisitor::apply(node);

		return 0;
	}

	// void osgUtil::StatsVisitor::base_apply(osg::LOD & node)
	static int _bind_base_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::base_apply(osg::LOD & node) function, expected prototype:\nvoid osgUtil::StatsVisitor::base_apply(osg::LOD & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::LOD* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::LOD >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StatsVisitor::base_apply function");
		}
		osg::LOD & node=*node_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::base_apply(osg::LOD &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->StatsVisitor::apply(node);

		return 0;
	}

	// void osgUtil::StatsVisitor::base_apply(osg::Switch & node)
	static int _bind_base_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::base_apply(osg::Switch & node) function, expected prototype:\nvoid osgUtil::StatsVisitor::base_apply(osg::Switch & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Switch* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Switch >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StatsVisitor::base_apply function");
		}
		osg::Switch & node=*node_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::base_apply(osg::Switch &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->StatsVisitor::apply(node);

		return 0;
	}

	// void osgUtil::StatsVisitor::base_apply(osg::Geode & node)
	static int _bind_base_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::base_apply(osg::Geode & node) function, expected prototype:\nvoid osgUtil::StatsVisitor::base_apply(osg::Geode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StatsVisitor::base_apply function");
		}
		osg::Geode & node=*node_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::base_apply(osg::Geode &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->StatsVisitor::apply(node);

		return 0;
	}

	// Overload binder for osgUtil::StatsVisitor::base_apply
	static int _bind_base_apply(lua_State *L) {
		if (_lg_typecheck_base_apply_overload_1(L)) return _bind_base_apply_overload_1(L);
		if (_lg_typecheck_base_apply_overload_2(L)) return _bind_base_apply_overload_2(L);
		if (_lg_typecheck_base_apply_overload_3(L)) return _bind_base_apply_overload_3(L);
		if (_lg_typecheck_base_apply_overload_4(L)) return _bind_base_apply_overload_4(L);
		if (_lg_typecheck_base_apply_overload_5(L)) return _bind_base_apply_overload_5(L);
		if (_lg_typecheck_base_apply_overload_6(L)) return _bind_base_apply_overload_6(L);

		luaL_error(L, "error in function base_apply, cannot match any of the overloads for function base_apply:\n  base_apply(osg::Node &)\n  base_apply(osg::Group &)\n  base_apply(osg::Transform &)\n  base_apply(osg::LOD &)\n  base_apply(osg::Switch &)\n  base_apply(osg::Geode &)\n");
		return 0;
	}


	// Operator binds:

};

osgUtil::StatsVisitor* LunaTraits< osgUtil::StatsVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_StatsVisitor::_bind_ctor(L);
}

void LunaTraits< osgUtil::StatsVisitor >::_bind_dtor(osgUtil::StatsVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::StatsVisitor >::className[] = "StatsVisitor";
const char LunaTraits< osgUtil::StatsVisitor >::fullName[] = "osgUtil::StatsVisitor";
const char LunaTraits< osgUtil::StatsVisitor >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::StatsVisitor >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osgUtil::StatsVisitor >::hash = 36035742;
const int LunaTraits< osgUtil::StatsVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::StatsVisitor >::methods[] = {
	{"libraryName", &luna_wrapper_osgUtil_StatsVisitor::_bind_libraryName},
	{"className", &luna_wrapper_osgUtil_StatsVisitor::_bind_className},
	{"reset", &luna_wrapper_osgUtil_StatsVisitor::_bind_reset},
	{"apply", &luna_wrapper_osgUtil_StatsVisitor::_bind_apply},
	{"totalUpStats", &luna_wrapper_osgUtil_StatsVisitor::_bind_totalUpStats},
	{"print", &luna_wrapper_osgUtil_StatsVisitor::_bind_print},
	{"get_numInstancedGroup", &luna_wrapper_osgUtil_StatsVisitor::_bind_get_numInstancedGroup},
	{"get_numInstancedSwitch", &luna_wrapper_osgUtil_StatsVisitor::_bind_get_numInstancedSwitch},
	{"get_numInstancedLOD", &luna_wrapper_osgUtil_StatsVisitor::_bind_get_numInstancedLOD},
	{"get_numInstancedTransform", &luna_wrapper_osgUtil_StatsVisitor::_bind_get_numInstancedTransform},
	{"get_numInstancedGeode", &luna_wrapper_osgUtil_StatsVisitor::_bind_get_numInstancedGeode},
	{"get_numInstancedDrawable", &luna_wrapper_osgUtil_StatsVisitor::_bind_get_numInstancedDrawable},
	{"get_numInstancedGeometry", &luna_wrapper_osgUtil_StatsVisitor::_bind_get_numInstancedGeometry},
	{"get_numInstancedFastGeometry", &luna_wrapper_osgUtil_StatsVisitor::_bind_get_numInstancedFastGeometry},
	{"get_numInstancedStateSet", &luna_wrapper_osgUtil_StatsVisitor::_bind_get_numInstancedStateSet},
	{"get_groupSet", &luna_wrapper_osgUtil_StatsVisitor::_bind_get_groupSet},
	{"get_transformSet", &luna_wrapper_osgUtil_StatsVisitor::_bind_get_transformSet},
	{"get_lodSet", &luna_wrapper_osgUtil_StatsVisitor::_bind_get_lodSet},
	{"get_switchSet", &luna_wrapper_osgUtil_StatsVisitor::_bind_get_switchSet},
	{"get_geodeSet", &luna_wrapper_osgUtil_StatsVisitor::_bind_get_geodeSet},
	{"get_drawableSet", &luna_wrapper_osgUtil_StatsVisitor::_bind_get_drawableSet},
	{"get_geometrySet", &luna_wrapper_osgUtil_StatsVisitor::_bind_get_geometrySet},
	{"get_fastGeometrySet", &luna_wrapper_osgUtil_StatsVisitor::_bind_get_fastGeometrySet},
	{"get_statesetSet", &luna_wrapper_osgUtil_StatsVisitor::_bind_get_statesetSet},
	{"get_uniqueStats", &luna_wrapper_osgUtil_StatsVisitor::_bind_get_uniqueStats},
	{"get_instancedStats", &luna_wrapper_osgUtil_StatsVisitor::_bind_get_instancedStats},
	{"set_numInstancedGroup", &luna_wrapper_osgUtil_StatsVisitor::_bind_set_numInstancedGroup},
	{"set_numInstancedSwitch", &luna_wrapper_osgUtil_StatsVisitor::_bind_set_numInstancedSwitch},
	{"set_numInstancedLOD", &luna_wrapper_osgUtil_StatsVisitor::_bind_set_numInstancedLOD},
	{"set_numInstancedTransform", &luna_wrapper_osgUtil_StatsVisitor::_bind_set_numInstancedTransform},
	{"set_numInstancedGeode", &luna_wrapper_osgUtil_StatsVisitor::_bind_set_numInstancedGeode},
	{"set_numInstancedDrawable", &luna_wrapper_osgUtil_StatsVisitor::_bind_set_numInstancedDrawable},
	{"set_numInstancedGeometry", &luna_wrapper_osgUtil_StatsVisitor::_bind_set_numInstancedGeometry},
	{"set_numInstancedFastGeometry", &luna_wrapper_osgUtil_StatsVisitor::_bind_set_numInstancedFastGeometry},
	{"set_numInstancedStateSet", &luna_wrapper_osgUtil_StatsVisitor::_bind_set_numInstancedStateSet},
	{"set_groupSet", &luna_wrapper_osgUtil_StatsVisitor::_bind_set_groupSet},
	{"set_transformSet", &luna_wrapper_osgUtil_StatsVisitor::_bind_set_transformSet},
	{"set_lodSet", &luna_wrapper_osgUtil_StatsVisitor::_bind_set_lodSet},
	{"set_switchSet", &luna_wrapper_osgUtil_StatsVisitor::_bind_set_switchSet},
	{"set_geodeSet", &luna_wrapper_osgUtil_StatsVisitor::_bind_set_geodeSet},
	{"set_drawableSet", &luna_wrapper_osgUtil_StatsVisitor::_bind_set_drawableSet},
	{"set_geometrySet", &luna_wrapper_osgUtil_StatsVisitor::_bind_set_geometrySet},
	{"set_fastGeometrySet", &luna_wrapper_osgUtil_StatsVisitor::_bind_set_fastGeometrySet},
	{"set_statesetSet", &luna_wrapper_osgUtil_StatsVisitor::_bind_set_statesetSet},
	{"set_uniqueStats", &luna_wrapper_osgUtil_StatsVisitor::_bind_set_uniqueStats},
	{"set_instancedStats", &luna_wrapper_osgUtil_StatsVisitor::_bind_set_instancedStats},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_StatsVisitor::_bind_base_setThreadSafeRefUnref},
	{"base_getEyePoint", &luna_wrapper_osgUtil_StatsVisitor::_bind_base_getEyePoint},
	{"base_getViewPoint", &luna_wrapper_osgUtil_StatsVisitor::_bind_base_getViewPoint},
	{"base_getDistanceToEyePoint", &luna_wrapper_osgUtil_StatsVisitor::_bind_base_getDistanceToEyePoint},
	{"base_getDistanceFromEyePoint", &luna_wrapper_osgUtil_StatsVisitor::_bind_base_getDistanceFromEyePoint},
	{"base_getDistanceToViewPoint", &luna_wrapper_osgUtil_StatsVisitor::_bind_base_getDistanceToViewPoint},
	{"base_libraryName", &luna_wrapper_osgUtil_StatsVisitor::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgUtil_StatsVisitor::_bind_base_className},
	{"base_reset", &luna_wrapper_osgUtil_StatsVisitor::_bind_base_reset},
	{"base_apply", &luna_wrapper_osgUtil_StatsVisitor::_bind_base_apply},
	{"__eq", &luna_wrapper_osgUtil_StatsVisitor::_bind___eq},
	{"getTable", &luna_wrapper_osgUtil_StatsVisitor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::StatsVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_StatsVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::StatsVisitor >::enumValues[] = {
	{0,0}
};


