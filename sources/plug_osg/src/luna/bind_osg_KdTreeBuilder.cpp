#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_KdTreeBuilder.h>

class luna_wrapper_osg_KdTreeBuilder {
public:
	typedef Luna< osg::KdTreeBuilder > luna_t;

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

		osg::KdTreeBuilder* self= (osg::KdTreeBuilder*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::KdTreeBuilder >::push(L,self,false);
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
		//osg::KdTreeBuilder* ptr= dynamic_cast< osg::KdTreeBuilder* >(Luna< osg::Referenced >::check(L,1));
		osg::KdTreeBuilder* ptr= luna_caster< osg::Referenced, osg::KdTreeBuilder >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::KdTreeBuilder >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBuildOptions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getKdTreePrototype(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBuildOptions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,4714115) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setKdTreePrototype(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58004536) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// osg::KdTreeBuilder::KdTreeBuilder()
	static osg::KdTreeBuilder* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::KdTreeBuilder::KdTreeBuilder() function, expected prototype:\nosg::KdTreeBuilder::KdTreeBuilder()\nClass arguments details:\n");
		}


		return new osg::KdTreeBuilder();
	}

	// osg::KdTreeBuilder::KdTreeBuilder(const osg::KdTreeBuilder & rhs)
	static osg::KdTreeBuilder* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::KdTreeBuilder::KdTreeBuilder(const osg::KdTreeBuilder & rhs) function, expected prototype:\nosg::KdTreeBuilder::KdTreeBuilder(const osg::KdTreeBuilder & rhs)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::KdTreeBuilder* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::KdTreeBuilder::KdTreeBuilder function");
		}
		const osg::KdTreeBuilder & rhs=*rhs_ptr;

		return new osg::KdTreeBuilder(rhs);
	}

	// osg::KdTreeBuilder::KdTreeBuilder(lua_Table * data)
	static osg::KdTreeBuilder* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::KdTreeBuilder::KdTreeBuilder(lua_Table * data) function, expected prototype:\nosg::KdTreeBuilder::KdTreeBuilder(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_KdTreeBuilder(L,NULL);
	}

	// osg::KdTreeBuilder::KdTreeBuilder(lua_Table * data, const osg::KdTreeBuilder & rhs)
	static osg::KdTreeBuilder* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::KdTreeBuilder::KdTreeBuilder(lua_Table * data, const osg::KdTreeBuilder & rhs) function, expected prototype:\nosg::KdTreeBuilder::KdTreeBuilder(lua_Table * data, const osg::KdTreeBuilder & rhs)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		const osg::KdTreeBuilder* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::KdTreeBuilder::KdTreeBuilder function");
		}
		const osg::KdTreeBuilder & rhs=*rhs_ptr;

		return new wrapper_osg_KdTreeBuilder(L,NULL, rhs);
	}

	// Overload binder for osg::KdTreeBuilder::KdTreeBuilder
	static osg::KdTreeBuilder* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function KdTreeBuilder, cannot match any of the overloads for function KdTreeBuilder:\n  KdTreeBuilder()\n  KdTreeBuilder(const osg::KdTreeBuilder &)\n  KdTreeBuilder(lua_Table *)\n  KdTreeBuilder(lua_Table *, const osg::KdTreeBuilder &)\n");
		return NULL;
	}


	// Function binds:
	// const char * osg::KdTreeBuilder::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::KdTreeBuilder::libraryName() const function, expected prototype:\nconst char * osg::KdTreeBuilder::libraryName() const\nClass arguments details:\n");
		}


		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::KdTreeBuilder::libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::KdTreeBuilder::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::KdTreeBuilder::className() const function, expected prototype:\nconst char * osg::KdTreeBuilder::className() const\nClass arguments details:\n");
		}


		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::KdTreeBuilder::className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::KdTreeBuilder * osg::KdTreeBuilder::clone()
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::KdTreeBuilder * osg::KdTreeBuilder::clone() function, expected prototype:\nosg::KdTreeBuilder * osg::KdTreeBuilder::clone()\nClass arguments details:\n");
		}


		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::KdTreeBuilder * osg::KdTreeBuilder::clone(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::KdTreeBuilder * lret = self->clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::KdTreeBuilder >::push(L,lret,false);

		return 1;
	}

	// void osg::KdTreeBuilder::apply(osg::Geode & geode)
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::KdTreeBuilder::apply(osg::Geode & geode) function, expected prototype:\nvoid osg::KdTreeBuilder::apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* geode_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osg::KdTreeBuilder::apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::KdTreeBuilder::apply(osg::Geode &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->apply(geode);

		return 0;
	}

	// osg::KdTree::BuildOptions osg::KdTreeBuilder::_buildOptions()
	static int _bind_getBuildOptions(lua_State *L) {
		if (!_lg_typecheck_getBuildOptions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::KdTree::BuildOptions osg::KdTreeBuilder::_buildOptions() function, expected prototype:\nosg::KdTree::BuildOptions osg::KdTreeBuilder::_buildOptions()\nClass arguments details:\n");
		}


		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::KdTree::BuildOptions osg::KdTreeBuilder::_buildOptions(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::KdTree::BuildOptions* lret = &self->_buildOptions;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::KdTree::BuildOptions >::push(L,lret,false);

		return 1;
	}

	// osg::ref_ptr< osg::KdTree > osg::KdTreeBuilder::_kdTreePrototype()
	static int _bind_getKdTreePrototype(lua_State *L) {
		if (!_lg_typecheck_getKdTreePrototype(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::KdTree > osg::KdTreeBuilder::_kdTreePrototype() function, expected prototype:\nosg::ref_ptr< osg::KdTree > osg::KdTreeBuilder::_kdTreePrototype()\nClass arguments details:\n");
		}


		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::KdTree > osg::KdTreeBuilder::_kdTreePrototype(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::ref_ptr< osg::KdTree > lret = self->_kdTreePrototype;
		Luna< osg::KdTree >::push(L,lret.get(),false);

		return 1;
	}

	// void osg::KdTreeBuilder::_buildOptions(osg::KdTree::BuildOptions value)
	static int _bind_setBuildOptions(lua_State *L) {
		if (!_lg_typecheck_setBuildOptions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::KdTreeBuilder::_buildOptions(osg::KdTree::BuildOptions value) function, expected prototype:\nvoid osg::KdTreeBuilder::_buildOptions(osg::KdTree::BuildOptions value)\nClass arguments details:\narg 1 ID = 4714115\n");
		}

		osg::KdTree::BuildOptions* value_ptr=(Luna< osg::KdTree::BuildOptions >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::KdTreeBuilder::_buildOptions function");
		}
		osg::KdTree::BuildOptions value=*value_ptr;

		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::KdTreeBuilder::_buildOptions(osg::KdTree::BuildOptions). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_buildOptions = value;

		return 0;
	}

	// void osg::KdTreeBuilder::_kdTreePrototype(osg::ref_ptr< osg::KdTree > value)
	static int _bind_setKdTreePrototype(lua_State *L) {
		if (!_lg_typecheck_setKdTreePrototype(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::KdTreeBuilder::_kdTreePrototype(osg::ref_ptr< osg::KdTree > value) function, expected prototype:\nvoid osg::KdTreeBuilder::_kdTreePrototype(osg::ref_ptr< osg::KdTree > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		osg::ref_ptr< osg::KdTree > value = dynamic_cast< osg::KdTree* >(Luna< osg::Referenced >::check(L,2));

		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::KdTreeBuilder::_kdTreePrototype(osg::ref_ptr< osg::KdTree >). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_kdTreePrototype = value;

		return 0;
	}

	// void osg::KdTreeBuilder::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::KdTreeBuilder::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::KdTreeBuilder::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::KdTreeBuilder::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->KdTreeBuilder::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::KdTreeBuilder::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::KdTreeBuilder::base_reset() function, expected prototype:\nvoid osg::KdTreeBuilder::base_reset()\nClass arguments details:\n");
		}


		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::KdTreeBuilder::base_reset(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->KdTreeBuilder::reset();

		return 0;
	}

	// osg::Vec3f osg::KdTreeBuilder::base_getEyePoint() const
	static int _bind_base_getEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osg::KdTreeBuilder::base_getEyePoint() const function, expected prototype:\nosg::Vec3f osg::KdTreeBuilder::base_getEyePoint() const\nClass arguments details:\n");
		}


		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osg::KdTreeBuilder::base_getEyePoint() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Vec3f stack_lret = self->KdTreeBuilder::getEyePoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osg::KdTreeBuilder::base_getViewPoint() const
	static int _bind_base_getViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getViewPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osg::KdTreeBuilder::base_getViewPoint() const function, expected prototype:\nosg::Vec3f osg::KdTreeBuilder::base_getViewPoint() const\nClass arguments details:\n");
		}


		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osg::KdTreeBuilder::base_getViewPoint() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Vec3f stack_lret = self->KdTreeBuilder::getViewPoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// float osg::KdTreeBuilder::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::KdTreeBuilder::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osg::KdTreeBuilder::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::KdTreeBuilder::base_getDistanceToEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::KdTreeBuilder::base_getDistanceToEyePoint(const osg::Vec3f &, bool) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		float lret = self->KdTreeBuilder::getDistanceToEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::KdTreeBuilder::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceFromEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceFromEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::KdTreeBuilder::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osg::KdTreeBuilder::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::KdTreeBuilder::base_getDistanceFromEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::KdTreeBuilder::base_getDistanceFromEyePoint(const osg::Vec3f &, bool) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		float lret = self->KdTreeBuilder::getDistanceFromEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::KdTreeBuilder::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToViewPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::KdTreeBuilder::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osg::KdTreeBuilder::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::KdTreeBuilder::base_getDistanceToViewPoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::KdTreeBuilder::base_getDistanceToViewPoint(const osg::Vec3f &, bool) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		float lret = self->KdTreeBuilder::getDistanceToViewPoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * osg::KdTreeBuilder::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::KdTreeBuilder::base_libraryName() const function, expected prototype:\nconst char * osg::KdTreeBuilder::base_libraryName() const\nClass arguments details:\n");
		}


		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::KdTreeBuilder::base_libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->KdTreeBuilder::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::KdTreeBuilder::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::KdTreeBuilder::base_className() const function, expected prototype:\nconst char * osg::KdTreeBuilder::base_className() const\nClass arguments details:\n");
		}


		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::KdTreeBuilder::base_className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->KdTreeBuilder::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::KdTreeBuilder * osg::KdTreeBuilder::base_clone()
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::KdTreeBuilder * osg::KdTreeBuilder::base_clone() function, expected prototype:\nosg::KdTreeBuilder * osg::KdTreeBuilder::base_clone()\nClass arguments details:\n");
		}


		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::KdTreeBuilder * osg::KdTreeBuilder::base_clone(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::KdTreeBuilder * lret = self->KdTreeBuilder::clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::KdTreeBuilder >::push(L,lret,false);

		return 1;
	}

	// void osg::KdTreeBuilder::base_apply(osg::Geode & geode)
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::KdTreeBuilder::base_apply(osg::Geode & geode) function, expected prototype:\nvoid osg::KdTreeBuilder::base_apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* geode_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osg::KdTreeBuilder::base_apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::KdTreeBuilder::base_apply(osg::Geode &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->KdTreeBuilder::apply(geode);

		return 0;
	}


	// Operator binds:

};

osg::KdTreeBuilder* LunaTraits< osg::KdTreeBuilder >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_KdTreeBuilder::_bind_ctor(L);
}

void LunaTraits< osg::KdTreeBuilder >::_bind_dtor(osg::KdTreeBuilder* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::KdTreeBuilder >::className[] = "KdTreeBuilder";
const char LunaTraits< osg::KdTreeBuilder >::fullName[] = "osg::KdTreeBuilder";
const char LunaTraits< osg::KdTreeBuilder >::moduleName[] = "osg";
const char* LunaTraits< osg::KdTreeBuilder >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osg::KdTreeBuilder >::hash = 19461459;
const int LunaTraits< osg::KdTreeBuilder >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::KdTreeBuilder >::methods[] = {
	{"libraryName", &luna_wrapper_osg_KdTreeBuilder::_bind_libraryName},
	{"className", &luna_wrapper_osg_KdTreeBuilder::_bind_className},
	{"clone", &luna_wrapper_osg_KdTreeBuilder::_bind_clone},
	{"apply", &luna_wrapper_osg_KdTreeBuilder::_bind_apply},
	{"getBuildOptions", &luna_wrapper_osg_KdTreeBuilder::_bind_getBuildOptions},
	{"getKdTreePrototype", &luna_wrapper_osg_KdTreeBuilder::_bind_getKdTreePrototype},
	{"setBuildOptions", &luna_wrapper_osg_KdTreeBuilder::_bind_setBuildOptions},
	{"setKdTreePrototype", &luna_wrapper_osg_KdTreeBuilder::_bind_setKdTreePrototype},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_KdTreeBuilder::_bind_base_setThreadSafeRefUnref},
	{"base_reset", &luna_wrapper_osg_KdTreeBuilder::_bind_base_reset},
	{"base_getEyePoint", &luna_wrapper_osg_KdTreeBuilder::_bind_base_getEyePoint},
	{"base_getViewPoint", &luna_wrapper_osg_KdTreeBuilder::_bind_base_getViewPoint},
	{"base_getDistanceToEyePoint", &luna_wrapper_osg_KdTreeBuilder::_bind_base_getDistanceToEyePoint},
	{"base_getDistanceFromEyePoint", &luna_wrapper_osg_KdTreeBuilder::_bind_base_getDistanceFromEyePoint},
	{"base_getDistanceToViewPoint", &luna_wrapper_osg_KdTreeBuilder::_bind_base_getDistanceToViewPoint},
	{"base_libraryName", &luna_wrapper_osg_KdTreeBuilder::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_KdTreeBuilder::_bind_base_className},
	{"base_clone", &luna_wrapper_osg_KdTreeBuilder::_bind_base_clone},
	{"base_apply", &luna_wrapper_osg_KdTreeBuilder::_bind_base_apply},
	{"__eq", &luna_wrapper_osg_KdTreeBuilder::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_KdTreeBuilder::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_KdTreeBuilder::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_KdTreeBuilder::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::KdTreeBuilder >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_KdTreeBuilder::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::KdTreeBuilder >::enumValues[] = {
	{0,0}
};


