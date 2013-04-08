#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_SmoothingVisitor.h>

class luna_wrapper_osgUtil_SmoothingVisitor {
public:
	typedef Luna< osgUtil::SmoothingVisitor > luna_t;

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
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		osgUtil::SmoothingVisitor* self= (osgUtil::SmoothingVisitor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::SmoothingVisitor >::push(L,self,false);
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
		//osgUtil::SmoothingVisitor* ptr= dynamic_cast< osgUtil::SmoothingVisitor* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::SmoothingVisitor* ptr= luna_caster< osg::Referenced, osgUtil::SmoothingVisitor >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::SmoothingVisitor >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCreaseAngle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCreaseAngle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_smooth(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_base_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::SmoothingVisitor::SmoothingVisitor()
	static osgUtil::SmoothingVisitor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::SmoothingVisitor::SmoothingVisitor() function, expected prototype:\nosgUtil::SmoothingVisitor::SmoothingVisitor()\nClass arguments details:\n");
		}


		return new osgUtil::SmoothingVisitor();
	}

	// osgUtil::SmoothingVisitor::SmoothingVisitor(lua_Table * data)
	static osgUtil::SmoothingVisitor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::SmoothingVisitor::SmoothingVisitor(lua_Table * data) function, expected prototype:\nosgUtil::SmoothingVisitor::SmoothingVisitor(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgUtil_SmoothingVisitor(L,NULL);
	}

	// Overload binder for osgUtil::SmoothingVisitor::SmoothingVisitor
	static osgUtil::SmoothingVisitor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function SmoothingVisitor, cannot match any of the overloads for function SmoothingVisitor:\n  SmoothingVisitor()\n  SmoothingVisitor(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::SmoothingVisitor::apply(osg::Geode & geode)
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SmoothingVisitor::apply(osg::Geode & geode) function, expected prototype:\nvoid osgUtil::SmoothingVisitor::apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* geode_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgUtil::SmoothingVisitor::apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osgUtil::SmoothingVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::SmoothingVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SmoothingVisitor::apply(osg::Geode &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->apply(geode);

		return 0;
	}

	// void osgUtil::SmoothingVisitor::setCreaseAngle(double angle)
	static int _bind_setCreaseAngle(lua_State *L) {
		if (!_lg_typecheck_setCreaseAngle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SmoothingVisitor::setCreaseAngle(double angle) function, expected prototype:\nvoid osgUtil::SmoothingVisitor::setCreaseAngle(double angle)\nClass arguments details:\n");
		}

		double angle=(double)lua_tonumber(L,2);

		osgUtil::SmoothingVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::SmoothingVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SmoothingVisitor::setCreaseAngle(double). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setCreaseAngle(angle);

		return 0;
	}

	// double osgUtil::SmoothingVisitor::getCreaseAngle() const
	static int _bind_getCreaseAngle(lua_State *L) {
		if (!_lg_typecheck_getCreaseAngle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgUtil::SmoothingVisitor::getCreaseAngle() const function, expected prototype:\ndouble osgUtil::SmoothingVisitor::getCreaseAngle() const\nClass arguments details:\n");
		}


		osgUtil::SmoothingVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::SmoothingVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgUtil::SmoothingVisitor::getCreaseAngle() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		double lret = self->getCreaseAngle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static void osgUtil::SmoothingVisitor::smooth(osg::Geometry & geoset, double creaseAngle = osg::PI)
	static int _bind_smooth(lua_State *L) {
		if (!_lg_typecheck_smooth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osgUtil::SmoothingVisitor::smooth(osg::Geometry & geoset, double creaseAngle = osg::PI) function, expected prototype:\nstatic void osgUtil::SmoothingVisitor::smooth(osg::Geometry & geoset, double creaseAngle = osg::PI)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::Geometry* geoset_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1));
		if( !geoset_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geoset in osgUtil::SmoothingVisitor::smooth function");
		}
		osg::Geometry & geoset=*geoset_ptr;
		double creaseAngle=luatop>1 ? (double)lua_tonumber(L,2) : (double)osg::PI;

		osgUtil::SmoothingVisitor::smooth(geoset, creaseAngle);

		return 0;
	}

	// void osgUtil::SmoothingVisitor::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SmoothingVisitor::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::SmoothingVisitor::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::SmoothingVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::SmoothingVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SmoothingVisitor::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->SmoothingVisitor::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// const char * osgUtil::SmoothingVisitor::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::SmoothingVisitor::base_libraryName() const function, expected prototype:\nconst char * osgUtil::SmoothingVisitor::base_libraryName() const\nClass arguments details:\n");
		}


		osgUtil::SmoothingVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::SmoothingVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::SmoothingVisitor::base_libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->SmoothingVisitor::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::SmoothingVisitor::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::SmoothingVisitor::base_className() const function, expected prototype:\nconst char * osgUtil::SmoothingVisitor::base_className() const\nClass arguments details:\n");
		}


		osgUtil::SmoothingVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::SmoothingVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::SmoothingVisitor::base_className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->SmoothingVisitor::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::SmoothingVisitor::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SmoothingVisitor::base_reset() function, expected prototype:\nvoid osgUtil::SmoothingVisitor::base_reset()\nClass arguments details:\n");
		}


		osgUtil::SmoothingVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::SmoothingVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SmoothingVisitor::base_reset(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->SmoothingVisitor::reset();

		return 0;
	}

	// osg::Vec3f osgUtil::SmoothingVisitor::base_getEyePoint() const
	static int _bind_base_getEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::SmoothingVisitor::base_getEyePoint() const function, expected prototype:\nosg::Vec3f osgUtil::SmoothingVisitor::base_getEyePoint() const\nClass arguments details:\n");
		}


		osgUtil::SmoothingVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::SmoothingVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::SmoothingVisitor::base_getEyePoint() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Vec3f stack_lret = self->SmoothingVisitor::getEyePoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osgUtil::SmoothingVisitor::base_getViewPoint() const
	static int _bind_base_getViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getViewPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::SmoothingVisitor::base_getViewPoint() const function, expected prototype:\nosg::Vec3f osgUtil::SmoothingVisitor::base_getViewPoint() const\nClass arguments details:\n");
		}


		osgUtil::SmoothingVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::SmoothingVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::SmoothingVisitor::base_getViewPoint() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Vec3f stack_lret = self->SmoothingVisitor::getViewPoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// float osgUtil::SmoothingVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgUtil::SmoothingVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::SmoothingVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::SmoothingVisitor::base_getDistanceToEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::SmoothingVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::SmoothingVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgUtil::SmoothingVisitor::base_getDistanceToEyePoint(const osg::Vec3f &, bool) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		float lret = self->SmoothingVisitor::getDistanceToEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::SmoothingVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceFromEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceFromEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgUtil::SmoothingVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::SmoothingVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::SmoothingVisitor::base_getDistanceFromEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::SmoothingVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::SmoothingVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgUtil::SmoothingVisitor::base_getDistanceFromEyePoint(const osg::Vec3f &, bool) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		float lret = self->SmoothingVisitor::getDistanceFromEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::SmoothingVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToViewPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgUtil::SmoothingVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::SmoothingVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::SmoothingVisitor::base_getDistanceToViewPoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::SmoothingVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::SmoothingVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgUtil::SmoothingVisitor::base_getDistanceToViewPoint(const osg::Vec3f &, bool) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		float lret = self->SmoothingVisitor::getDistanceToViewPoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::SmoothingVisitor::base_apply(osg::Geode & geode)
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SmoothingVisitor::base_apply(osg::Geode & geode) function, expected prototype:\nvoid osgUtil::SmoothingVisitor::base_apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* geode_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgUtil::SmoothingVisitor::base_apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osgUtil::SmoothingVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::SmoothingVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SmoothingVisitor::base_apply(osg::Geode &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->SmoothingVisitor::apply(geode);

		return 0;
	}


	// Operator binds:

};

osgUtil::SmoothingVisitor* LunaTraits< osgUtil::SmoothingVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_SmoothingVisitor::_bind_ctor(L);
}

void LunaTraits< osgUtil::SmoothingVisitor >::_bind_dtor(osgUtil::SmoothingVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::SmoothingVisitor >::className[] = "SmoothingVisitor";
const char LunaTraits< osgUtil::SmoothingVisitor >::fullName[] = "osgUtil::SmoothingVisitor";
const char LunaTraits< osgUtil::SmoothingVisitor >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::SmoothingVisitor >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osgUtil::SmoothingVisitor >::hash = 89393238;
const int LunaTraits< osgUtil::SmoothingVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::SmoothingVisitor >::methods[] = {
	{"apply", &luna_wrapper_osgUtil_SmoothingVisitor::_bind_apply},
	{"setCreaseAngle", &luna_wrapper_osgUtil_SmoothingVisitor::_bind_setCreaseAngle},
	{"getCreaseAngle", &luna_wrapper_osgUtil_SmoothingVisitor::_bind_getCreaseAngle},
	{"smooth", &luna_wrapper_osgUtil_SmoothingVisitor::_bind_smooth},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_SmoothingVisitor::_bind_base_setThreadSafeRefUnref},
	{"base_libraryName", &luna_wrapper_osgUtil_SmoothingVisitor::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgUtil_SmoothingVisitor::_bind_base_className},
	{"base_reset", &luna_wrapper_osgUtil_SmoothingVisitor::_bind_base_reset},
	{"base_getEyePoint", &luna_wrapper_osgUtil_SmoothingVisitor::_bind_base_getEyePoint},
	{"base_getViewPoint", &luna_wrapper_osgUtil_SmoothingVisitor::_bind_base_getViewPoint},
	{"base_getDistanceToEyePoint", &luna_wrapper_osgUtil_SmoothingVisitor::_bind_base_getDistanceToEyePoint},
	{"base_getDistanceFromEyePoint", &luna_wrapper_osgUtil_SmoothingVisitor::_bind_base_getDistanceFromEyePoint},
	{"base_getDistanceToViewPoint", &luna_wrapper_osgUtil_SmoothingVisitor::_bind_base_getDistanceToViewPoint},
	{"base_apply", &luna_wrapper_osgUtil_SmoothingVisitor::_bind_base_apply},
	{"__eq", &luna_wrapper_osgUtil_SmoothingVisitor::_bind___eq},
	{"fromVoid", &luna_wrapper_osgUtil_SmoothingVisitor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_SmoothingVisitor::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_SmoothingVisitor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::SmoothingVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_SmoothingVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::SmoothingVisitor >::enumValues[] = {
	{0,0}
};


