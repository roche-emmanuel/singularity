#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_PrintVisitor.h>

class luna_wrapper_osgUtil_PrintVisitor {
public:
	typedef Luna< osgUtil::PrintVisitor > luna_t;

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

		osgUtil::PrintVisitor* self= (osgUtil::PrintVisitor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::PrintVisitor >::push(L,self,false);
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
		//osgUtil::PrintVisitor* ptr= dynamic_cast< osgUtil::PrintVisitor* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::PrintVisitor* ptr= luna_caster< osg::Referenced, osgUtil::PrintVisitor >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::PrintVisitor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2993706) ) return false;
		if( (!(Luna< std::ostream >::check(L,1))) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,2993706) ) return false;
		if( (!(Luna< std::ostream >::check(L,2))) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_output(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_enter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_leave(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// osgUtil::PrintVisitor::PrintVisitor(std::ostream & out, int indent = 0, int step = 2)
	static osgUtil::PrintVisitor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::PrintVisitor::PrintVisitor(std::ostream & out, int indent = 0, int step = 2) function, expected prototype:\nosgUtil::PrintVisitor::PrintVisitor(std::ostream & out, int indent = 0, int step = 2)\nClass arguments details:\narg 1 ID = 2993706\n");
		}

		int luatop = lua_gettop(L);

		std::ostream* out_ptr=(Luna< std::ostream >::check(L,1));
		if( !out_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg out in osgUtil::PrintVisitor::PrintVisitor function");
		}
		std::ostream & out=*out_ptr;
		int indent=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		int step=luatop>2 ? (int)lua_tointeger(L,3) : (int)2;

		return new osgUtil::PrintVisitor(out, indent, step);
	}

	// osgUtil::PrintVisitor::PrintVisitor(lua_Table * data, std::ostream & out, int indent = 0, int step = 2)
	static osgUtil::PrintVisitor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::PrintVisitor::PrintVisitor(lua_Table * data, std::ostream & out, int indent = 0, int step = 2) function, expected prototype:\nosgUtil::PrintVisitor::PrintVisitor(lua_Table * data, std::ostream & out, int indent = 0, int step = 2)\nClass arguments details:\narg 2 ID = 2993706\n");
		}

		int luatop = lua_gettop(L);

		std::ostream* out_ptr=(Luna< std::ostream >::check(L,2));
		if( !out_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg out in osgUtil::PrintVisitor::PrintVisitor function");
		}
		std::ostream & out=*out_ptr;
		int indent=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		int step=luatop>3 ? (int)lua_tointeger(L,4) : (int)2;

		return new wrapper_osgUtil_PrintVisitor(L,NULL, out, indent, step);
	}

	// Overload binder for osgUtil::PrintVisitor::PrintVisitor
	static osgUtil::PrintVisitor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function PrintVisitor, cannot match any of the overloads for function PrintVisitor:\n  PrintVisitor(std::ostream &, int, int)\n  PrintVisitor(lua_Table *, std::ostream &, int, int)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::PrintVisitor::apply(osg::Node & node)
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PrintVisitor::apply(osg::Node & node) function, expected prototype:\nvoid osgUtil::PrintVisitor::apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::PrintVisitor::apply function");
		}
		osg::Node & node=*node_ptr;

		osgUtil::PrintVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::PrintVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PrintVisitor::apply(osg::Node &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->apply(node);

		return 0;
	}

	// std::ostream & osgUtil::PrintVisitor::output()
	static int _bind_output(lua_State *L) {
		if (!_lg_typecheck_output(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::ostream & osgUtil::PrintVisitor::output() function, expected prototype:\nstd::ostream & osgUtil::PrintVisitor::output()\nClass arguments details:\n");
		}


		osgUtil::PrintVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::PrintVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::ostream & osgUtil::PrintVisitor::output(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const std::ostream* lret = &self->output();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< std::ostream >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::PrintVisitor::enter()
	static int _bind_enter(lua_State *L) {
		if (!_lg_typecheck_enter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PrintVisitor::enter() function, expected prototype:\nvoid osgUtil::PrintVisitor::enter()\nClass arguments details:\n");
		}


		osgUtil::PrintVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::PrintVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PrintVisitor::enter(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->enter();

		return 0;
	}

	// void osgUtil::PrintVisitor::leave()
	static int _bind_leave(lua_State *L) {
		if (!_lg_typecheck_leave(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PrintVisitor::leave() function, expected prototype:\nvoid osgUtil::PrintVisitor::leave()\nClass arguments details:\n");
		}


		osgUtil::PrintVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::PrintVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PrintVisitor::leave(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->leave();

		return 0;
	}

	// void osgUtil::PrintVisitor::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PrintVisitor::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::PrintVisitor::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::PrintVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::PrintVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PrintVisitor::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->PrintVisitor::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// const char * osgUtil::PrintVisitor::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::PrintVisitor::base_libraryName() const function, expected prototype:\nconst char * osgUtil::PrintVisitor::base_libraryName() const\nClass arguments details:\n");
		}


		osgUtil::PrintVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::PrintVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::PrintVisitor::base_libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->PrintVisitor::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::PrintVisitor::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::PrintVisitor::base_className() const function, expected prototype:\nconst char * osgUtil::PrintVisitor::base_className() const\nClass arguments details:\n");
		}


		osgUtil::PrintVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::PrintVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::PrintVisitor::base_className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->PrintVisitor::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::PrintVisitor::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PrintVisitor::base_reset() function, expected prototype:\nvoid osgUtil::PrintVisitor::base_reset()\nClass arguments details:\n");
		}


		osgUtil::PrintVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::PrintVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PrintVisitor::base_reset(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->PrintVisitor::reset();

		return 0;
	}

	// osg::Vec3f osgUtil::PrintVisitor::base_getEyePoint() const
	static int _bind_base_getEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::PrintVisitor::base_getEyePoint() const function, expected prototype:\nosg::Vec3f osgUtil::PrintVisitor::base_getEyePoint() const\nClass arguments details:\n");
		}


		osgUtil::PrintVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::PrintVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::PrintVisitor::base_getEyePoint() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Vec3f stack_lret = self->PrintVisitor::getEyePoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osgUtil::PrintVisitor::base_getViewPoint() const
	static int _bind_base_getViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getViewPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::PrintVisitor::base_getViewPoint() const function, expected prototype:\nosg::Vec3f osgUtil::PrintVisitor::base_getViewPoint() const\nClass arguments details:\n");
		}


		osgUtil::PrintVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::PrintVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::PrintVisitor::base_getViewPoint() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Vec3f stack_lret = self->PrintVisitor::getViewPoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// float osgUtil::PrintVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgUtil::PrintVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::PrintVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::PrintVisitor::base_getDistanceToEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::PrintVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::PrintVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgUtil::PrintVisitor::base_getDistanceToEyePoint(const osg::Vec3f &, bool) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		float lret = self->PrintVisitor::getDistanceToEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::PrintVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceFromEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceFromEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgUtil::PrintVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::PrintVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::PrintVisitor::base_getDistanceFromEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::PrintVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::PrintVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgUtil::PrintVisitor::base_getDistanceFromEyePoint(const osg::Vec3f &, bool) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		float lret = self->PrintVisitor::getDistanceFromEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::PrintVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToViewPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgUtil::PrintVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::PrintVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::PrintVisitor::base_getDistanceToViewPoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::PrintVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::PrintVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgUtil::PrintVisitor::base_getDistanceToViewPoint(const osg::Vec3f &, bool) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		float lret = self->PrintVisitor::getDistanceToViewPoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::PrintVisitor::base_apply(osg::Node & node)
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PrintVisitor::base_apply(osg::Node & node) function, expected prototype:\nvoid osgUtil::PrintVisitor::base_apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::PrintVisitor::base_apply function");
		}
		osg::Node & node=*node_ptr;

		osgUtil::PrintVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::PrintVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PrintVisitor::base_apply(osg::Node &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->PrintVisitor::apply(node);

		return 0;
	}


	// Operator binds:

};

osgUtil::PrintVisitor* LunaTraits< osgUtil::PrintVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_PrintVisitor::_bind_ctor(L);
}

void LunaTraits< osgUtil::PrintVisitor >::_bind_dtor(osgUtil::PrintVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::PrintVisitor >::className[] = "PrintVisitor";
const char LunaTraits< osgUtil::PrintVisitor >::fullName[] = "osgUtil::PrintVisitor";
const char LunaTraits< osgUtil::PrintVisitor >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::PrintVisitor >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osgUtil::PrintVisitor >::hash = 29209162;
const int LunaTraits< osgUtil::PrintVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::PrintVisitor >::methods[] = {
	{"apply", &luna_wrapper_osgUtil_PrintVisitor::_bind_apply},
	{"output", &luna_wrapper_osgUtil_PrintVisitor::_bind_output},
	{"enter", &luna_wrapper_osgUtil_PrintVisitor::_bind_enter},
	{"leave", &luna_wrapper_osgUtil_PrintVisitor::_bind_leave},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_PrintVisitor::_bind_base_setThreadSafeRefUnref},
	{"base_libraryName", &luna_wrapper_osgUtil_PrintVisitor::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgUtil_PrintVisitor::_bind_base_className},
	{"base_reset", &luna_wrapper_osgUtil_PrintVisitor::_bind_base_reset},
	{"base_getEyePoint", &luna_wrapper_osgUtil_PrintVisitor::_bind_base_getEyePoint},
	{"base_getViewPoint", &luna_wrapper_osgUtil_PrintVisitor::_bind_base_getViewPoint},
	{"base_getDistanceToEyePoint", &luna_wrapper_osgUtil_PrintVisitor::_bind_base_getDistanceToEyePoint},
	{"base_getDistanceFromEyePoint", &luna_wrapper_osgUtil_PrintVisitor::_bind_base_getDistanceFromEyePoint},
	{"base_getDistanceToViewPoint", &luna_wrapper_osgUtil_PrintVisitor::_bind_base_getDistanceToViewPoint},
	{"base_apply", &luna_wrapper_osgUtil_PrintVisitor::_bind_base_apply},
	{"__eq", &luna_wrapper_osgUtil_PrintVisitor::_bind___eq},
	{"fromVoid", &luna_wrapper_osgUtil_PrintVisitor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_PrintVisitor::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_PrintVisitor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::PrintVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_PrintVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::PrintVisitor >::enumValues[] = {
	{0,0}
};


