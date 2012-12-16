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
		if( (!dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_totalUpStats(lua_State *L) {
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

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2))) ) return false;
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
			luaL_error(L, "Invalid object in function call const char * osgUtil::StatsVisitor::libraryName() const");
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
			luaL_error(L, "Invalid object in function call const char * osgUtil::StatsVisitor::className() const");
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
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::reset()");
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
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::apply(osg::Node &)");
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
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::apply(osg::Group &)");
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
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::apply(osg::Transform &)");
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
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::apply(osg::LOD &)");
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
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::apply(osg::Switch &)");
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
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::apply(osg::Geode &)");
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
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::apply(osg::Drawable &)");
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
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::totalUpStats()");
		}
		self->totalUpStats();

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
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::StatsVisitor::base_getEyePoint() const");
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
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::StatsVisitor::base_getViewPoint() const");
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
			luaL_error(L, "Invalid object in function call float osgUtil::StatsVisitor::base_getDistanceToEyePoint(const osg::Vec3f &, bool) const");
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
			luaL_error(L, "Invalid object in function call float osgUtil::StatsVisitor::base_getDistanceFromEyePoint(const osg::Vec3f &, bool) const");
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
			luaL_error(L, "Invalid object in function call float osgUtil::StatsVisitor::base_getDistanceToViewPoint(const osg::Vec3f &, bool) const");
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
			luaL_error(L, "Invalid object in function call const char * osgUtil::StatsVisitor::base_libraryName() const");
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
			luaL_error(L, "Invalid object in function call const char * osgUtil::StatsVisitor::base_className() const");
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
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::base_reset()");
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
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::base_apply(osg::Node &)");
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
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::base_apply(osg::Group &)");
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
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::base_apply(osg::Transform &)");
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
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::base_apply(osg::LOD &)");
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
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::base_apply(osg::Switch &)");
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
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::base_apply(osg::Geode &)");
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


