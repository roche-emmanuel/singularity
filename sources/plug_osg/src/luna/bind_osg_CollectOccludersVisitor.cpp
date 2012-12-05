#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_CollectOccludersVisitor.h>

class luna_wrapper_osg_CollectOccludersVisitor {
public:
	typedef Luna< osg::CollectOccludersVisitor > luna_t;

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
		osg::CollectOccludersVisitor* ptr= dynamic_cast< osg::CollectOccludersVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::CollectOccludersVisitor >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_CullSettings(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::CollectOccludersVisitor* ptr= dynamic_cast< osg::CollectOccludersVisitor* >(Luna< osg::CullSettings >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::CollectOccludersVisitor >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDistanceToEyePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDistanceToViewPoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDistanceFromEyePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
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
		if( (!dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Projection* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::OccluderNode* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMinimumShadowOccluderVolume(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMinimumShadowOccluderVolume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMaximumNumberOfActiveOccluders(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaximumNumberOfActiveOccluders(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCreateDrawablesOnOccludeNodes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCreateDrawablesOnOccludeNodes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCollectedOccluderSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,26463029) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCollectedOccluderSet_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCollectedOccluderSet_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_removeOccludedOccluders(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::CollectOccludersVisitor::CollectOccludersVisitor()
	static osg::CollectOccludersVisitor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CollectOccludersVisitor::CollectOccludersVisitor() function, expected prototype:\nosg::CollectOccludersVisitor::CollectOccludersVisitor()\nClass arguments details:\n");
		}


		return new osg::CollectOccludersVisitor();
	}

	// osg::CollectOccludersVisitor::CollectOccludersVisitor(lua_Table * data)
	static osg::CollectOccludersVisitor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CollectOccludersVisitor::CollectOccludersVisitor(lua_Table * data) function, expected prototype:\nosg::CollectOccludersVisitor::CollectOccludersVisitor(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_CollectOccludersVisitor(L,NULL);
	}

	// Overload binder for osg::CollectOccludersVisitor::CollectOccludersVisitor
	static osg::CollectOccludersVisitor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function CollectOccludersVisitor, cannot match any of the overloads for function CollectOccludersVisitor:\n  CollectOccludersVisitor()\n  CollectOccludersVisitor(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// const char * osg::CollectOccludersVisitor::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::CollectOccludersVisitor::libraryName() const function, expected prototype:\nconst char * osg::CollectOccludersVisitor::libraryName() const\nClass arguments details:\n");
		}


		osg::CollectOccludersVisitor* self=dynamic_cast< osg::CollectOccludersVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::CollectOccludersVisitor::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::CollectOccludersVisitor::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::CollectOccludersVisitor::className() const function, expected prototype:\nconst char * osg::CollectOccludersVisitor::className() const\nClass arguments details:\n");
		}


		osg::CollectOccludersVisitor* self=dynamic_cast< osg::CollectOccludersVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::CollectOccludersVisitor::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::CollectOccludersVisitor * osg::CollectOccludersVisitor::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CollectOccludersVisitor * osg::CollectOccludersVisitor::cloneType() const function, expected prototype:\nosg::CollectOccludersVisitor * osg::CollectOccludersVisitor::cloneType() const\nClass arguments details:\n");
		}


		osg::CollectOccludersVisitor* self=dynamic_cast< osg::CollectOccludersVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::CollectOccludersVisitor * osg::CollectOccludersVisitor::cloneType() const");
		}
		osg::CollectOccludersVisitor * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CollectOccludersVisitor >::push(L,lret,false);

		return 1;
	}

	// void osg::CollectOccludersVisitor::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::CollectOccludersVisitor::reset() function, expected prototype:\nvoid osg::CollectOccludersVisitor::reset()\nClass arguments details:\n");
		}


		osg::CollectOccludersVisitor* self=dynamic_cast< osg::CollectOccludersVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::CollectOccludersVisitor::reset()");
		}
		self->reset();

		return 0;
	}

	// float osg::CollectOccludersVisitor::getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_getDistanceToEyePoint(lua_State *L) {
		if (!_lg_typecheck_getDistanceToEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::CollectOccludersVisitor::getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osg::CollectOccludersVisitor::getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::CollectOccludersVisitor::getDistanceToEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osg::CollectOccludersVisitor* self=dynamic_cast< osg::CollectOccludersVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::CollectOccludersVisitor::getDistanceToEyePoint(const osg::Vec3f &, bool) const");
		}
		float lret = self->getDistanceToEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::CollectOccludersVisitor::getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_getDistanceToViewPoint(lua_State *L) {
		if (!_lg_typecheck_getDistanceToViewPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::CollectOccludersVisitor::getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osg::CollectOccludersVisitor::getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::CollectOccludersVisitor::getDistanceToViewPoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osg::CollectOccludersVisitor* self=dynamic_cast< osg::CollectOccludersVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::CollectOccludersVisitor::getDistanceToViewPoint(const osg::Vec3f &, bool) const");
		}
		float lret = self->getDistanceToViewPoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::CollectOccludersVisitor::getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_getDistanceFromEyePoint(lua_State *L) {
		if (!_lg_typecheck_getDistanceFromEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::CollectOccludersVisitor::getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osg::CollectOccludersVisitor::getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::CollectOccludersVisitor::getDistanceFromEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osg::CollectOccludersVisitor* self=dynamic_cast< osg::CollectOccludersVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::CollectOccludersVisitor::getDistanceFromEyePoint(const osg::Vec3f &, bool) const");
		}
		float lret = self->getDistanceFromEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::CollectOccludersVisitor::apply(osg::Node & arg1)
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::CollectOccludersVisitor::apply(osg::Node & arg1) function, expected prototype:\nvoid osg::CollectOccludersVisitor::apply(osg::Node & arg1)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* _arg1_ptr=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::CollectOccludersVisitor::apply function");
		}
		osg::Node & _arg1=*_arg1_ptr;

		osg::CollectOccludersVisitor* self=dynamic_cast< osg::CollectOccludersVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::CollectOccludersVisitor::apply(osg::Node &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::CollectOccludersVisitor::apply(osg::Transform & node)
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::CollectOccludersVisitor::apply(osg::Transform & node) function, expected prototype:\nvoid osg::CollectOccludersVisitor::apply(osg::Transform & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Transform* node_ptr=dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::CollectOccludersVisitor::apply function");
		}
		osg::Transform & node=*node_ptr;

		osg::CollectOccludersVisitor* self=dynamic_cast< osg::CollectOccludersVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::CollectOccludersVisitor::apply(osg::Transform &)");
		}
		self->apply(node);

		return 0;
	}

	// void osg::CollectOccludersVisitor::apply(osg::Projection & node)
	static int _bind_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_apply_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::CollectOccludersVisitor::apply(osg::Projection & node) function, expected prototype:\nvoid osg::CollectOccludersVisitor::apply(osg::Projection & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Projection* node_ptr=dynamic_cast< osg::Projection* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::CollectOccludersVisitor::apply function");
		}
		osg::Projection & node=*node_ptr;

		osg::CollectOccludersVisitor* self=dynamic_cast< osg::CollectOccludersVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::CollectOccludersVisitor::apply(osg::Projection &)");
		}
		self->apply(node);

		return 0;
	}

	// void osg::CollectOccludersVisitor::apply(osg::Switch & node)
	static int _bind_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_apply_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::CollectOccludersVisitor::apply(osg::Switch & node) function, expected prototype:\nvoid osg::CollectOccludersVisitor::apply(osg::Switch & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Switch* node_ptr=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::CollectOccludersVisitor::apply function");
		}
		osg::Switch & node=*node_ptr;

		osg::CollectOccludersVisitor* self=dynamic_cast< osg::CollectOccludersVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::CollectOccludersVisitor::apply(osg::Switch &)");
		}
		self->apply(node);

		return 0;
	}

	// void osg::CollectOccludersVisitor::apply(osg::LOD & node)
	static int _bind_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_apply_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::CollectOccludersVisitor::apply(osg::LOD & node) function, expected prototype:\nvoid osg::CollectOccludersVisitor::apply(osg::LOD & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::LOD* node_ptr=dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::CollectOccludersVisitor::apply function");
		}
		osg::LOD & node=*node_ptr;

		osg::CollectOccludersVisitor* self=dynamic_cast< osg::CollectOccludersVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::CollectOccludersVisitor::apply(osg::LOD &)");
		}
		self->apply(node);

		return 0;
	}

	// void osg::CollectOccludersVisitor::apply(osg::OccluderNode & node)
	static int _bind_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_apply_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::CollectOccludersVisitor::apply(osg::OccluderNode & node) function, expected prototype:\nvoid osg::CollectOccludersVisitor::apply(osg::OccluderNode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::OccluderNode* node_ptr=dynamic_cast< osg::OccluderNode* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::CollectOccludersVisitor::apply function");
		}
		osg::OccluderNode & node=*node_ptr;

		osg::CollectOccludersVisitor* self=dynamic_cast< osg::CollectOccludersVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::CollectOccludersVisitor::apply(osg::OccluderNode &)");
		}
		self->apply(node);

		return 0;
	}

	// Overload binder for osg::CollectOccludersVisitor::apply
	static int _bind_apply(lua_State *L) {
		if (_lg_typecheck_apply_overload_1(L)) return _bind_apply_overload_1(L);
		if (_lg_typecheck_apply_overload_2(L)) return _bind_apply_overload_2(L);
		if (_lg_typecheck_apply_overload_3(L)) return _bind_apply_overload_3(L);
		if (_lg_typecheck_apply_overload_4(L)) return _bind_apply_overload_4(L);
		if (_lg_typecheck_apply_overload_5(L)) return _bind_apply_overload_5(L);
		if (_lg_typecheck_apply_overload_6(L)) return _bind_apply_overload_6(L);

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(osg::Node &)\n  apply(osg::Transform &)\n  apply(osg::Projection &)\n  apply(osg::Switch &)\n  apply(osg::LOD &)\n  apply(osg::OccluderNode &)\n");
		return 0;
	}

	// void osg::CollectOccludersVisitor::setMinimumShadowOccluderVolume(float vol)
	static int _bind_setMinimumShadowOccluderVolume(lua_State *L) {
		if (!_lg_typecheck_setMinimumShadowOccluderVolume(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::CollectOccludersVisitor::setMinimumShadowOccluderVolume(float vol) function, expected prototype:\nvoid osg::CollectOccludersVisitor::setMinimumShadowOccluderVolume(float vol)\nClass arguments details:\n");
		}

		float vol=(float)lua_tonumber(L,2);

		osg::CollectOccludersVisitor* self=dynamic_cast< osg::CollectOccludersVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::CollectOccludersVisitor::setMinimumShadowOccluderVolume(float)");
		}
		self->setMinimumShadowOccluderVolume(vol);

		return 0;
	}

	// float osg::CollectOccludersVisitor::getMinimumShadowOccluderVolume() const
	static int _bind_getMinimumShadowOccluderVolume(lua_State *L) {
		if (!_lg_typecheck_getMinimumShadowOccluderVolume(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::CollectOccludersVisitor::getMinimumShadowOccluderVolume() const function, expected prototype:\nfloat osg::CollectOccludersVisitor::getMinimumShadowOccluderVolume() const\nClass arguments details:\n");
		}


		osg::CollectOccludersVisitor* self=dynamic_cast< osg::CollectOccludersVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::CollectOccludersVisitor::getMinimumShadowOccluderVolume() const");
		}
		float lret = self->getMinimumShadowOccluderVolume();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::CollectOccludersVisitor::setMaximumNumberOfActiveOccluders(unsigned int num)
	static int _bind_setMaximumNumberOfActiveOccluders(lua_State *L) {
		if (!_lg_typecheck_setMaximumNumberOfActiveOccluders(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::CollectOccludersVisitor::setMaximumNumberOfActiveOccluders(unsigned int num) function, expected prototype:\nvoid osg::CollectOccludersVisitor::setMaximumNumberOfActiveOccluders(unsigned int num)\nClass arguments details:\n");
		}

		unsigned int num=(unsigned int)lua_tointeger(L,2);

		osg::CollectOccludersVisitor* self=dynamic_cast< osg::CollectOccludersVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::CollectOccludersVisitor::setMaximumNumberOfActiveOccluders(unsigned int)");
		}
		self->setMaximumNumberOfActiveOccluders(num);

		return 0;
	}

	// unsigned int osg::CollectOccludersVisitor::getMaximumNumberOfActiveOccluders() const
	static int _bind_getMaximumNumberOfActiveOccluders(lua_State *L) {
		if (!_lg_typecheck_getMaximumNumberOfActiveOccluders(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::CollectOccludersVisitor::getMaximumNumberOfActiveOccluders() const function, expected prototype:\nunsigned int osg::CollectOccludersVisitor::getMaximumNumberOfActiveOccluders() const\nClass arguments details:\n");
		}


		osg::CollectOccludersVisitor* self=dynamic_cast< osg::CollectOccludersVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::CollectOccludersVisitor::getMaximumNumberOfActiveOccluders() const");
		}
		unsigned int lret = self->getMaximumNumberOfActiveOccluders();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::CollectOccludersVisitor::setCreateDrawablesOnOccludeNodes(bool flag)
	static int _bind_setCreateDrawablesOnOccludeNodes(lua_State *L) {
		if (!_lg_typecheck_setCreateDrawablesOnOccludeNodes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::CollectOccludersVisitor::setCreateDrawablesOnOccludeNodes(bool flag) function, expected prototype:\nvoid osg::CollectOccludersVisitor::setCreateDrawablesOnOccludeNodes(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::CollectOccludersVisitor* self=dynamic_cast< osg::CollectOccludersVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::CollectOccludersVisitor::setCreateDrawablesOnOccludeNodes(bool)");
		}
		self->setCreateDrawablesOnOccludeNodes(flag);

		return 0;
	}

	// bool osg::CollectOccludersVisitor::getCreateDrawablesOnOccludeNodes() const
	static int _bind_getCreateDrawablesOnOccludeNodes(lua_State *L) {
		if (!_lg_typecheck_getCreateDrawablesOnOccludeNodes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::CollectOccludersVisitor::getCreateDrawablesOnOccludeNodes() const function, expected prototype:\nbool osg::CollectOccludersVisitor::getCreateDrawablesOnOccludeNodes() const\nClass arguments details:\n");
		}


		osg::CollectOccludersVisitor* self=dynamic_cast< osg::CollectOccludersVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::CollectOccludersVisitor::getCreateDrawablesOnOccludeNodes() const");
		}
		bool lret = self->getCreateDrawablesOnOccludeNodes();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::CollectOccludersVisitor::setCollectedOccluderSet(const osg::CollectOccludersVisitor::ShadowVolumeOccluderSet & svol)
	static int _bind_setCollectedOccluderSet(lua_State *L) {
		if (!_lg_typecheck_setCollectedOccluderSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::CollectOccludersVisitor::setCollectedOccluderSet(const osg::CollectOccludersVisitor::ShadowVolumeOccluderSet & svol) function, expected prototype:\nvoid osg::CollectOccludersVisitor::setCollectedOccluderSet(const osg::CollectOccludersVisitor::ShadowVolumeOccluderSet & svol)\nClass arguments details:\narg 1 ID = 26463029\n");
		}

		const osg::CollectOccludersVisitor::ShadowVolumeOccluderSet* svol_ptr=(Luna< osg::CollectOccludersVisitor::ShadowVolumeOccluderSet >::check(L,2));
		if( !svol_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg svol in osg::CollectOccludersVisitor::setCollectedOccluderSet function");
		}
		const osg::CollectOccludersVisitor::ShadowVolumeOccluderSet & svol=*svol_ptr;

		osg::CollectOccludersVisitor* self=dynamic_cast< osg::CollectOccludersVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::CollectOccludersVisitor::setCollectedOccluderSet(const osg::CollectOccludersVisitor::ShadowVolumeOccluderSet &)");
		}
		self->setCollectedOccluderSet(svol);

		return 0;
	}

	// osg::CollectOccludersVisitor::ShadowVolumeOccluderSet & osg::CollectOccludersVisitor::getCollectedOccluderSet()
	static int _bind_getCollectedOccluderSet_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCollectedOccluderSet_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CollectOccludersVisitor::ShadowVolumeOccluderSet & osg::CollectOccludersVisitor::getCollectedOccluderSet() function, expected prototype:\nosg::CollectOccludersVisitor::ShadowVolumeOccluderSet & osg::CollectOccludersVisitor::getCollectedOccluderSet()\nClass arguments details:\n");
		}


		osg::CollectOccludersVisitor* self=dynamic_cast< osg::CollectOccludersVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::CollectOccludersVisitor::ShadowVolumeOccluderSet & osg::CollectOccludersVisitor::getCollectedOccluderSet()");
		}
		const osg::CollectOccludersVisitor::ShadowVolumeOccluderSet* lret = &self->getCollectedOccluderSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CollectOccludersVisitor::ShadowVolumeOccluderSet >::push(L,lret,false);

		return 1;
	}

	// const osg::CollectOccludersVisitor::ShadowVolumeOccluderSet & osg::CollectOccludersVisitor::getCollectedOccluderSet() const
	static int _bind_getCollectedOccluderSet_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCollectedOccluderSet_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::CollectOccludersVisitor::ShadowVolumeOccluderSet & osg::CollectOccludersVisitor::getCollectedOccluderSet() const function, expected prototype:\nconst osg::CollectOccludersVisitor::ShadowVolumeOccluderSet & osg::CollectOccludersVisitor::getCollectedOccluderSet() const\nClass arguments details:\n");
		}


		osg::CollectOccludersVisitor* self=dynamic_cast< osg::CollectOccludersVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::CollectOccludersVisitor::ShadowVolumeOccluderSet & osg::CollectOccludersVisitor::getCollectedOccluderSet() const");
		}
		const osg::CollectOccludersVisitor::ShadowVolumeOccluderSet* lret = &self->getCollectedOccluderSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CollectOccludersVisitor::ShadowVolumeOccluderSet >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::CollectOccludersVisitor::getCollectedOccluderSet
	static int _bind_getCollectedOccluderSet(lua_State *L) {
		if (_lg_typecheck_getCollectedOccluderSet_overload_1(L)) return _bind_getCollectedOccluderSet_overload_1(L);
		if (_lg_typecheck_getCollectedOccluderSet_overload_2(L)) return _bind_getCollectedOccluderSet_overload_2(L);

		luaL_error(L, "error in function getCollectedOccluderSet, cannot match any of the overloads for function getCollectedOccluderSet:\n  getCollectedOccluderSet()\n  getCollectedOccluderSet()\n");
		return 0;
	}

	// void osg::CollectOccludersVisitor::removeOccludedOccluders()
	static int _bind_removeOccludedOccluders(lua_State *L) {
		if (!_lg_typecheck_removeOccludedOccluders(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::CollectOccludersVisitor::removeOccludedOccluders() function, expected prototype:\nvoid osg::CollectOccludersVisitor::removeOccludedOccluders()\nClass arguments details:\n");
		}


		osg::CollectOccludersVisitor* self=dynamic_cast< osg::CollectOccludersVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::CollectOccludersVisitor::removeOccludedOccluders()");
		}
		self->removeOccludedOccluders();

		return 0;
	}


	// Operator binds:

};

osg::CollectOccludersVisitor* LunaTraits< osg::CollectOccludersVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_CollectOccludersVisitor::_bind_ctor(L);
}

void LunaTraits< osg::CollectOccludersVisitor >::_bind_dtor(osg::CollectOccludersVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::CollectOccludersVisitor >::className[] = "CollectOccludersVisitor";
const char LunaTraits< osg::CollectOccludersVisitor >::fullName[] = "osg::CollectOccludersVisitor";
const char LunaTraits< osg::CollectOccludersVisitor >::moduleName[] = "osg";
const char* LunaTraits< osg::CollectOccludersVisitor >::parents[] = {"osg.NodeVisitor", "osg.CullStack", 0};
const int LunaTraits< osg::CollectOccludersVisitor >::hash = 73827724;
const int LunaTraits< osg::CollectOccludersVisitor >::uniqueIDs[] = {50169651, 31435107,0};

luna_RegType LunaTraits< osg::CollectOccludersVisitor >::methods[] = {
	{"libraryName", &luna_wrapper_osg_CollectOccludersVisitor::_bind_libraryName},
	{"className", &luna_wrapper_osg_CollectOccludersVisitor::_bind_className},
	{"cloneType", &luna_wrapper_osg_CollectOccludersVisitor::_bind_cloneType},
	{"reset", &luna_wrapper_osg_CollectOccludersVisitor::_bind_reset},
	{"getDistanceToEyePoint", &luna_wrapper_osg_CollectOccludersVisitor::_bind_getDistanceToEyePoint},
	{"getDistanceToViewPoint", &luna_wrapper_osg_CollectOccludersVisitor::_bind_getDistanceToViewPoint},
	{"getDistanceFromEyePoint", &luna_wrapper_osg_CollectOccludersVisitor::_bind_getDistanceFromEyePoint},
	{"apply", &luna_wrapper_osg_CollectOccludersVisitor::_bind_apply},
	{"setMinimumShadowOccluderVolume", &luna_wrapper_osg_CollectOccludersVisitor::_bind_setMinimumShadowOccluderVolume},
	{"getMinimumShadowOccluderVolume", &luna_wrapper_osg_CollectOccludersVisitor::_bind_getMinimumShadowOccluderVolume},
	{"setMaximumNumberOfActiveOccluders", &luna_wrapper_osg_CollectOccludersVisitor::_bind_setMaximumNumberOfActiveOccluders},
	{"getMaximumNumberOfActiveOccluders", &luna_wrapper_osg_CollectOccludersVisitor::_bind_getMaximumNumberOfActiveOccluders},
	{"setCreateDrawablesOnOccludeNodes", &luna_wrapper_osg_CollectOccludersVisitor::_bind_setCreateDrawablesOnOccludeNodes},
	{"getCreateDrawablesOnOccludeNodes", &luna_wrapper_osg_CollectOccludersVisitor::_bind_getCreateDrawablesOnOccludeNodes},
	{"setCollectedOccluderSet", &luna_wrapper_osg_CollectOccludersVisitor::_bind_setCollectedOccluderSet},
	{"getCollectedOccluderSet", &luna_wrapper_osg_CollectOccludersVisitor::_bind_getCollectedOccluderSet},
	{"removeOccludedOccluders", &luna_wrapper_osg_CollectOccludersVisitor::_bind_removeOccludedOccluders},
	{"__eq", &luna_wrapper_osg_CollectOccludersVisitor::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::CollectOccludersVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_CollectOccludersVisitor::_cast_from_Referenced},
	{"osg::CullSettings", &luna_wrapper_osg_CollectOccludersVisitor::_cast_from_CullSettings},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::CollectOccludersVisitor >::enumValues[] = {
	{0,0}
};


