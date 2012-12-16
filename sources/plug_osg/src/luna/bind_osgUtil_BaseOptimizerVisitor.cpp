#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_BaseOptimizerVisitor.h>

class luna_wrapper_osgUtil_BaseOptimizerVisitor {
public:
	typedef Luna< osgUtil::BaseOptimizerVisitor > luna_t;

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
		//osgUtil::BaseOptimizerVisitor* ptr= dynamic_cast< osgUtil::BaseOptimizerVisitor* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::BaseOptimizerVisitor* ptr= luna_caster< osg::Referenced, osgUtil::BaseOptimizerVisitor >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::BaseOptimizerVisitor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,85233381)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< osgUtil::Optimizer* >(Luna< osgUtil::Optimizer >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85233381)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osgUtil::Optimizer* >(Luna< osgUtil::Optimizer >::check(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_isOperationPermissibleForObject_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osg::StateSet* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isOperationPermissibleForObject_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isOperationPermissibleForObject_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isOperationPermissibleForObject_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
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

	inline static bool _lg_typecheck_base_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Projection* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::CoordinateSystemNode* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::ClipNode* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::TexGenNode* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::LightSource* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_10(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_11(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Camera* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_12(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::CameraView* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_13(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::MatrixTransform* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_14(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::PositionAttitudeTransform* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_15(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_16(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_17(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_18(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_19(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::ClearNode* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_20(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::OccluderNode* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_21(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::BaseOptimizerVisitor::BaseOptimizerVisitor(osgUtil::Optimizer * optimizer, unsigned int operation)
	static osgUtil::BaseOptimizerVisitor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::BaseOptimizerVisitor::BaseOptimizerVisitor(osgUtil::Optimizer * optimizer, unsigned int operation) function, expected prototype:\nosgUtil::BaseOptimizerVisitor::BaseOptimizerVisitor(osgUtil::Optimizer * optimizer, unsigned int operation)\nClass arguments details:\narg 1 ID = 85233381\n");
		}

		osgUtil::Optimizer* optimizer=(Luna< osgUtil::Optimizer >::check(L,1));
		unsigned int operation=(unsigned int)lua_tointeger(L,2);

		return new osgUtil::BaseOptimizerVisitor(optimizer, operation);
	}

	// osgUtil::BaseOptimizerVisitor::BaseOptimizerVisitor(lua_Table * data, osgUtil::Optimizer * optimizer, unsigned int operation)
	static osgUtil::BaseOptimizerVisitor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::BaseOptimizerVisitor::BaseOptimizerVisitor(lua_Table * data, osgUtil::Optimizer * optimizer, unsigned int operation) function, expected prototype:\nosgUtil::BaseOptimizerVisitor::BaseOptimizerVisitor(lua_Table * data, osgUtil::Optimizer * optimizer, unsigned int operation)\nClass arguments details:\narg 2 ID = 85233381\n");
		}

		osgUtil::Optimizer* optimizer=(Luna< osgUtil::Optimizer >::check(L,2));
		unsigned int operation=(unsigned int)lua_tointeger(L,3);

		return new wrapper_osgUtil_BaseOptimizerVisitor(L,NULL, optimizer, operation);
	}

	// Overload binder for osgUtil::BaseOptimizerVisitor::BaseOptimizerVisitor
	static osgUtil::BaseOptimizerVisitor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function BaseOptimizerVisitor, cannot match any of the overloads for function BaseOptimizerVisitor:\n  BaseOptimizerVisitor(osgUtil::Optimizer *, unsigned int)\n  BaseOptimizerVisitor(lua_Table *, osgUtil::Optimizer *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// bool osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject(const osg::StateSet * object) const
	static int _bind_isOperationPermissibleForObject_overload_1(lua_State *L) {
		if (!_lg_typecheck_isOperationPermissibleForObject_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject(const osg::StateSet * object) const function, expected prototype:\nbool osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject(const osg::StateSet * object) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateSet* object=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));

		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject(const osg::StateSet *) const");
		}
		bool lret = self->isOperationPermissibleForObject(object);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject(const osg::StateAttribute * object) const
	static int _bind_isOperationPermissibleForObject_overload_2(lua_State *L) {
		if (!_lg_typecheck_isOperationPermissibleForObject_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject(const osg::StateAttribute * object) const function, expected prototype:\nbool osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject(const osg::StateAttribute * object) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* object=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));

		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject(const osg::StateAttribute *) const");
		}
		bool lret = self->isOperationPermissibleForObject(object);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject(const osg::Drawable * object) const
	static int _bind_isOperationPermissibleForObject_overload_3(lua_State *L) {
		if (!_lg_typecheck_isOperationPermissibleForObject_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject(const osg::Drawable * object) const function, expected prototype:\nbool osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject(const osg::Drawable * object) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Drawable* object=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));

		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject(const osg::Drawable *) const");
		}
		bool lret = self->isOperationPermissibleForObject(object);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject(const osg::Node * object) const
	static int _bind_isOperationPermissibleForObject_overload_4(lua_State *L) {
		if (!_lg_typecheck_isOperationPermissibleForObject_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject(const osg::Node * object) const function, expected prototype:\nbool osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject(const osg::Node * object) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Node* object=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject(const osg::Node *) const");
		}
		bool lret = self->isOperationPermissibleForObject(object);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject
	static int _bind_isOperationPermissibleForObject(lua_State *L) {
		if (_lg_typecheck_isOperationPermissibleForObject_overload_1(L)) return _bind_isOperationPermissibleForObject_overload_1(L);
		if (_lg_typecheck_isOperationPermissibleForObject_overload_2(L)) return _bind_isOperationPermissibleForObject_overload_2(L);
		if (_lg_typecheck_isOperationPermissibleForObject_overload_3(L)) return _bind_isOperationPermissibleForObject_overload_3(L);
		if (_lg_typecheck_isOperationPermissibleForObject_overload_4(L)) return _bind_isOperationPermissibleForObject_overload_4(L);

		luaL_error(L, "error in function isOperationPermissibleForObject, cannot match any of the overloads for function isOperationPermissibleForObject:\n  isOperationPermissibleForObject(const osg::StateSet *)\n  isOperationPermissibleForObject(const osg::StateAttribute *)\n  isOperationPermissibleForObject(const osg::Drawable *)\n  isOperationPermissibleForObject(const osg::Node *)\n");
		return 0;
	}

	// const char * osgUtil::BaseOptimizerVisitor::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::BaseOptimizerVisitor::base_libraryName() const function, expected prototype:\nconst char * osgUtil::BaseOptimizerVisitor::base_libraryName() const\nClass arguments details:\n");
		}


		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::BaseOptimizerVisitor::base_libraryName() const");
		}
		const char * lret = self->BaseOptimizerVisitor::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::BaseOptimizerVisitor::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::BaseOptimizerVisitor::base_className() const function, expected prototype:\nconst char * osgUtil::BaseOptimizerVisitor::base_className() const\nClass arguments details:\n");
		}


		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::BaseOptimizerVisitor::base_className() const");
		}
		const char * lret = self->BaseOptimizerVisitor::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::BaseOptimizerVisitor::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::BaseOptimizerVisitor::base_reset() function, expected prototype:\nvoid osgUtil::BaseOptimizerVisitor::base_reset()\nClass arguments details:\n");
		}


		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::BaseOptimizerVisitor::base_reset()");
		}
		self->BaseOptimizerVisitor::reset();

		return 0;
	}

	// osg::Vec3f osgUtil::BaseOptimizerVisitor::base_getEyePoint() const
	static int _bind_base_getEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::BaseOptimizerVisitor::base_getEyePoint() const function, expected prototype:\nosg::Vec3f osgUtil::BaseOptimizerVisitor::base_getEyePoint() const\nClass arguments details:\n");
		}


		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::BaseOptimizerVisitor::base_getEyePoint() const");
		}
		osg::Vec3f stack_lret = self->BaseOptimizerVisitor::getEyePoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osgUtil::BaseOptimizerVisitor::base_getViewPoint() const
	static int _bind_base_getViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getViewPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::BaseOptimizerVisitor::base_getViewPoint() const function, expected prototype:\nosg::Vec3f osgUtil::BaseOptimizerVisitor::base_getViewPoint() const\nClass arguments details:\n");
		}


		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::BaseOptimizerVisitor::base_getViewPoint() const");
		}
		osg::Vec3f stack_lret = self->BaseOptimizerVisitor::getViewPoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// float osgUtil::BaseOptimizerVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgUtil::BaseOptimizerVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::BaseOptimizerVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::BaseOptimizerVisitor::base_getDistanceToEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgUtil::BaseOptimizerVisitor::base_getDistanceToEyePoint(const osg::Vec3f &, bool) const");
		}
		float lret = self->BaseOptimizerVisitor::getDistanceToEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::BaseOptimizerVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceFromEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceFromEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgUtil::BaseOptimizerVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::BaseOptimizerVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::BaseOptimizerVisitor::base_getDistanceFromEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgUtil::BaseOptimizerVisitor::base_getDistanceFromEyePoint(const osg::Vec3f &, bool) const");
		}
		float lret = self->BaseOptimizerVisitor::getDistanceFromEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::BaseOptimizerVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToViewPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgUtil::BaseOptimizerVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::BaseOptimizerVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::BaseOptimizerVisitor::base_getDistanceToViewPoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgUtil::BaseOptimizerVisitor::base_getDistanceToViewPoint(const osg::Vec3f &, bool) const");
		}
		float lret = self->BaseOptimizerVisitor::getDistanceToViewPoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::BaseOptimizerVisitor::base_apply(osg::Node & node)
	static int _bind_base_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::BaseOptimizerVisitor::base_apply(osg::Node & node) function, expected prototype:\nvoid osgUtil::BaseOptimizerVisitor::base_apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::BaseOptimizerVisitor::base_apply function");
		}
		osg::Node & node=*node_ptr;

		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::BaseOptimizerVisitor::base_apply(osg::Node &)");
		}
		self->BaseOptimizerVisitor::apply(node);

		return 0;
	}

	// void osgUtil::BaseOptimizerVisitor::base_apply(osg::Geode & node)
	static int _bind_base_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::BaseOptimizerVisitor::base_apply(osg::Geode & node) function, expected prototype:\nvoid osgUtil::BaseOptimizerVisitor::base_apply(osg::Geode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::BaseOptimizerVisitor::base_apply function");
		}
		osg::Geode & node=*node_ptr;

		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::BaseOptimizerVisitor::base_apply(osg::Geode &)");
		}
		self->BaseOptimizerVisitor::apply(node);

		return 0;
	}

	// void osgUtil::BaseOptimizerVisitor::base_apply(osg::Billboard & node)
	static int _bind_base_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::BaseOptimizerVisitor::base_apply(osg::Billboard & node) function, expected prototype:\nvoid osgUtil::BaseOptimizerVisitor::base_apply(osg::Billboard & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Billboard* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::BaseOptimizerVisitor::base_apply function");
		}
		osg::Billboard & node=*node_ptr;

		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::BaseOptimizerVisitor::base_apply(osg::Billboard &)");
		}
		self->BaseOptimizerVisitor::apply(node);

		return 0;
	}

	// void osgUtil::BaseOptimizerVisitor::base_apply(osg::Group & node)
	static int _bind_base_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::BaseOptimizerVisitor::base_apply(osg::Group & node) function, expected prototype:\nvoid osgUtil::BaseOptimizerVisitor::base_apply(osg::Group & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Group* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Group >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::BaseOptimizerVisitor::base_apply function");
		}
		osg::Group & node=*node_ptr;

		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::BaseOptimizerVisitor::base_apply(osg::Group &)");
		}
		self->BaseOptimizerVisitor::apply(node);

		return 0;
	}

	// void osgUtil::BaseOptimizerVisitor::base_apply(osg::Projection & node)
	static int _bind_base_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::BaseOptimizerVisitor::base_apply(osg::Projection & node) function, expected prototype:\nvoid osgUtil::BaseOptimizerVisitor::base_apply(osg::Projection & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Projection* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Projection >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::BaseOptimizerVisitor::base_apply function");
		}
		osg::Projection & node=*node_ptr;

		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::BaseOptimizerVisitor::base_apply(osg::Projection &)");
		}
		self->BaseOptimizerVisitor::apply(node);

		return 0;
	}

	// void osgUtil::BaseOptimizerVisitor::base_apply(osg::CoordinateSystemNode & node)
	static int _bind_base_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::BaseOptimizerVisitor::base_apply(osg::CoordinateSystemNode & node) function, expected prototype:\nvoid osgUtil::BaseOptimizerVisitor::base_apply(osg::CoordinateSystemNode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::CoordinateSystemNode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::BaseOptimizerVisitor::base_apply function");
		}
		osg::CoordinateSystemNode & node=*node_ptr;

		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::BaseOptimizerVisitor::base_apply(osg::CoordinateSystemNode &)");
		}
		self->BaseOptimizerVisitor::apply(node);

		return 0;
	}

	// void osgUtil::BaseOptimizerVisitor::base_apply(osg::ClipNode & node)
	static int _bind_base_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::BaseOptimizerVisitor::base_apply(osg::ClipNode & node) function, expected prototype:\nvoid osgUtil::BaseOptimizerVisitor::base_apply(osg::ClipNode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ClipNode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::BaseOptimizerVisitor::base_apply function");
		}
		osg::ClipNode & node=*node_ptr;

		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::BaseOptimizerVisitor::base_apply(osg::ClipNode &)");
		}
		self->BaseOptimizerVisitor::apply(node);

		return 0;
	}

	// void osgUtil::BaseOptimizerVisitor::base_apply(osg::TexGenNode & node)
	static int _bind_base_apply_overload_8(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::BaseOptimizerVisitor::base_apply(osg::TexGenNode & node) function, expected prototype:\nvoid osgUtil::BaseOptimizerVisitor::base_apply(osg::TexGenNode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::TexGenNode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::BaseOptimizerVisitor::base_apply function");
		}
		osg::TexGenNode & node=*node_ptr;

		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::BaseOptimizerVisitor::base_apply(osg::TexGenNode &)");
		}
		self->BaseOptimizerVisitor::apply(node);

		return 0;
	}

	// void osgUtil::BaseOptimizerVisitor::base_apply(osg::LightSource & node)
	static int _bind_base_apply_overload_9(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_9(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::BaseOptimizerVisitor::base_apply(osg::LightSource & node) function, expected prototype:\nvoid osgUtil::BaseOptimizerVisitor::base_apply(osg::LightSource & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::LightSource* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::BaseOptimizerVisitor::base_apply function");
		}
		osg::LightSource & node=*node_ptr;

		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::BaseOptimizerVisitor::base_apply(osg::LightSource &)");
		}
		self->BaseOptimizerVisitor::apply(node);

		return 0;
	}

	// void osgUtil::BaseOptimizerVisitor::base_apply(osg::Transform & node)
	static int _bind_base_apply_overload_10(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_10(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::BaseOptimizerVisitor::base_apply(osg::Transform & node) function, expected prototype:\nvoid osgUtil::BaseOptimizerVisitor::base_apply(osg::Transform & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Transform* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Transform >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::BaseOptimizerVisitor::base_apply function");
		}
		osg::Transform & node=*node_ptr;

		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::BaseOptimizerVisitor::base_apply(osg::Transform &)");
		}
		self->BaseOptimizerVisitor::apply(node);

		return 0;
	}

	// void osgUtil::BaseOptimizerVisitor::base_apply(osg::Camera & node)
	static int _bind_base_apply_overload_11(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_11(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::BaseOptimizerVisitor::base_apply(osg::Camera & node) function, expected prototype:\nvoid osgUtil::BaseOptimizerVisitor::base_apply(osg::Camera & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Camera* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::BaseOptimizerVisitor::base_apply function");
		}
		osg::Camera & node=*node_ptr;

		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::BaseOptimizerVisitor::base_apply(osg::Camera &)");
		}
		self->BaseOptimizerVisitor::apply(node);

		return 0;
	}

	// void osgUtil::BaseOptimizerVisitor::base_apply(osg::CameraView & node)
	static int _bind_base_apply_overload_12(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_12(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::BaseOptimizerVisitor::base_apply(osg::CameraView & node) function, expected prototype:\nvoid osgUtil::BaseOptimizerVisitor::base_apply(osg::CameraView & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::CameraView* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::BaseOptimizerVisitor::base_apply function");
		}
		osg::CameraView & node=*node_ptr;

		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::BaseOptimizerVisitor::base_apply(osg::CameraView &)");
		}
		self->BaseOptimizerVisitor::apply(node);

		return 0;
	}

	// void osgUtil::BaseOptimizerVisitor::base_apply(osg::MatrixTransform & node)
	static int _bind_base_apply_overload_13(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_13(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::BaseOptimizerVisitor::base_apply(osg::MatrixTransform & node) function, expected prototype:\nvoid osgUtil::BaseOptimizerVisitor::base_apply(osg::MatrixTransform & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::MatrixTransform* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::BaseOptimizerVisitor::base_apply function");
		}
		osg::MatrixTransform & node=*node_ptr;

		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::BaseOptimizerVisitor::base_apply(osg::MatrixTransform &)");
		}
		self->BaseOptimizerVisitor::apply(node);

		return 0;
	}

	// void osgUtil::BaseOptimizerVisitor::base_apply(osg::PositionAttitudeTransform & node)
	static int _bind_base_apply_overload_14(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_14(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::BaseOptimizerVisitor::base_apply(osg::PositionAttitudeTransform & node) function, expected prototype:\nvoid osgUtil::BaseOptimizerVisitor::base_apply(osg::PositionAttitudeTransform & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::PositionAttitudeTransform* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::BaseOptimizerVisitor::base_apply function");
		}
		osg::PositionAttitudeTransform & node=*node_ptr;

		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::BaseOptimizerVisitor::base_apply(osg::PositionAttitudeTransform &)");
		}
		self->BaseOptimizerVisitor::apply(node);

		return 0;
	}

	// void osgUtil::BaseOptimizerVisitor::base_apply(osg::Switch & node)
	static int _bind_base_apply_overload_15(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_15(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::BaseOptimizerVisitor::base_apply(osg::Switch & node) function, expected prototype:\nvoid osgUtil::BaseOptimizerVisitor::base_apply(osg::Switch & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Switch* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Switch >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::BaseOptimizerVisitor::base_apply function");
		}
		osg::Switch & node=*node_ptr;

		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::BaseOptimizerVisitor::base_apply(osg::Switch &)");
		}
		self->BaseOptimizerVisitor::apply(node);

		return 0;
	}

	// void osgUtil::BaseOptimizerVisitor::base_apply(osg::Sequence & node)
	static int _bind_base_apply_overload_16(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_16(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::BaseOptimizerVisitor::base_apply(osg::Sequence & node) function, expected prototype:\nvoid osgUtil::BaseOptimizerVisitor::base_apply(osg::Sequence & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Sequence* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::BaseOptimizerVisitor::base_apply function");
		}
		osg::Sequence & node=*node_ptr;

		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::BaseOptimizerVisitor::base_apply(osg::Sequence &)");
		}
		self->BaseOptimizerVisitor::apply(node);

		return 0;
	}

	// void osgUtil::BaseOptimizerVisitor::base_apply(osg::LOD & node)
	static int _bind_base_apply_overload_17(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_17(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::BaseOptimizerVisitor::base_apply(osg::LOD & node) function, expected prototype:\nvoid osgUtil::BaseOptimizerVisitor::base_apply(osg::LOD & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::LOD* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::LOD >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::BaseOptimizerVisitor::base_apply function");
		}
		osg::LOD & node=*node_ptr;

		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::BaseOptimizerVisitor::base_apply(osg::LOD &)");
		}
		self->BaseOptimizerVisitor::apply(node);

		return 0;
	}

	// void osgUtil::BaseOptimizerVisitor::base_apply(osg::PagedLOD & node)
	static int _bind_base_apply_overload_18(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_18(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::BaseOptimizerVisitor::base_apply(osg::PagedLOD & node) function, expected prototype:\nvoid osgUtil::BaseOptimizerVisitor::base_apply(osg::PagedLOD & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::PagedLOD* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::BaseOptimizerVisitor::base_apply function");
		}
		osg::PagedLOD & node=*node_ptr;

		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::BaseOptimizerVisitor::base_apply(osg::PagedLOD &)");
		}
		self->BaseOptimizerVisitor::apply(node);

		return 0;
	}

	// void osgUtil::BaseOptimizerVisitor::base_apply(osg::ClearNode & node)
	static int _bind_base_apply_overload_19(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_19(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::BaseOptimizerVisitor::base_apply(osg::ClearNode & node) function, expected prototype:\nvoid osgUtil::BaseOptimizerVisitor::base_apply(osg::ClearNode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ClearNode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::ClearNode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::BaseOptimizerVisitor::base_apply function");
		}
		osg::ClearNode & node=*node_ptr;

		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::BaseOptimizerVisitor::base_apply(osg::ClearNode &)");
		}
		self->BaseOptimizerVisitor::apply(node);

		return 0;
	}

	// void osgUtil::BaseOptimizerVisitor::base_apply(osg::OccluderNode & node)
	static int _bind_base_apply_overload_20(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_20(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::BaseOptimizerVisitor::base_apply(osg::OccluderNode & node) function, expected prototype:\nvoid osgUtil::BaseOptimizerVisitor::base_apply(osg::OccluderNode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::OccluderNode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::BaseOptimizerVisitor::base_apply function");
		}
		osg::OccluderNode & node=*node_ptr;

		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::BaseOptimizerVisitor::base_apply(osg::OccluderNode &)");
		}
		self->BaseOptimizerVisitor::apply(node);

		return 0;
	}

	// void osgUtil::BaseOptimizerVisitor::base_apply(osg::OcclusionQueryNode & node)
	static int _bind_base_apply_overload_21(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_21(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::BaseOptimizerVisitor::base_apply(osg::OcclusionQueryNode & node) function, expected prototype:\nvoid osgUtil::BaseOptimizerVisitor::base_apply(osg::OcclusionQueryNode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::OcclusionQueryNode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::BaseOptimizerVisitor::base_apply function");
		}
		osg::OcclusionQueryNode & node=*node_ptr;

		osgUtil::BaseOptimizerVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::BaseOptimizerVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::BaseOptimizerVisitor::base_apply(osg::OcclusionQueryNode &)");
		}
		self->BaseOptimizerVisitor::apply(node);

		return 0;
	}

	// Overload binder for osgUtil::BaseOptimizerVisitor::base_apply
	static int _bind_base_apply(lua_State *L) {
		if (_lg_typecheck_base_apply_overload_1(L)) return _bind_base_apply_overload_1(L);
		if (_lg_typecheck_base_apply_overload_2(L)) return _bind_base_apply_overload_2(L);
		if (_lg_typecheck_base_apply_overload_3(L)) return _bind_base_apply_overload_3(L);
		if (_lg_typecheck_base_apply_overload_4(L)) return _bind_base_apply_overload_4(L);
		if (_lg_typecheck_base_apply_overload_5(L)) return _bind_base_apply_overload_5(L);
		if (_lg_typecheck_base_apply_overload_6(L)) return _bind_base_apply_overload_6(L);
		if (_lg_typecheck_base_apply_overload_7(L)) return _bind_base_apply_overload_7(L);
		if (_lg_typecheck_base_apply_overload_8(L)) return _bind_base_apply_overload_8(L);
		if (_lg_typecheck_base_apply_overload_9(L)) return _bind_base_apply_overload_9(L);
		if (_lg_typecheck_base_apply_overload_10(L)) return _bind_base_apply_overload_10(L);
		if (_lg_typecheck_base_apply_overload_11(L)) return _bind_base_apply_overload_11(L);
		if (_lg_typecheck_base_apply_overload_12(L)) return _bind_base_apply_overload_12(L);
		if (_lg_typecheck_base_apply_overload_13(L)) return _bind_base_apply_overload_13(L);
		if (_lg_typecheck_base_apply_overload_14(L)) return _bind_base_apply_overload_14(L);
		if (_lg_typecheck_base_apply_overload_15(L)) return _bind_base_apply_overload_15(L);
		if (_lg_typecheck_base_apply_overload_16(L)) return _bind_base_apply_overload_16(L);
		if (_lg_typecheck_base_apply_overload_17(L)) return _bind_base_apply_overload_17(L);
		if (_lg_typecheck_base_apply_overload_18(L)) return _bind_base_apply_overload_18(L);
		if (_lg_typecheck_base_apply_overload_19(L)) return _bind_base_apply_overload_19(L);
		if (_lg_typecheck_base_apply_overload_20(L)) return _bind_base_apply_overload_20(L);
		if (_lg_typecheck_base_apply_overload_21(L)) return _bind_base_apply_overload_21(L);

		luaL_error(L, "error in function base_apply, cannot match any of the overloads for function base_apply:\n  base_apply(osg::Node &)\n  base_apply(osg::Geode &)\n  base_apply(osg::Billboard &)\n  base_apply(osg::Group &)\n  base_apply(osg::Projection &)\n  base_apply(osg::CoordinateSystemNode &)\n  base_apply(osg::ClipNode &)\n  base_apply(osg::TexGenNode &)\n  base_apply(osg::LightSource &)\n  base_apply(osg::Transform &)\n  base_apply(osg::Camera &)\n  base_apply(osg::CameraView &)\n  base_apply(osg::MatrixTransform &)\n  base_apply(osg::PositionAttitudeTransform &)\n  base_apply(osg::Switch &)\n  base_apply(osg::Sequence &)\n  base_apply(osg::LOD &)\n  base_apply(osg::PagedLOD &)\n  base_apply(osg::ClearNode &)\n  base_apply(osg::OccluderNode &)\n  base_apply(osg::OcclusionQueryNode &)\n");
		return 0;
	}


	// Operator binds:

};

osgUtil::BaseOptimizerVisitor* LunaTraits< osgUtil::BaseOptimizerVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_BaseOptimizerVisitor::_bind_ctor(L);
}

void LunaTraits< osgUtil::BaseOptimizerVisitor >::_bind_dtor(osgUtil::BaseOptimizerVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::BaseOptimizerVisitor >::className[] = "BaseOptimizerVisitor";
const char LunaTraits< osgUtil::BaseOptimizerVisitor >::fullName[] = "osgUtil::BaseOptimizerVisitor";
const char LunaTraits< osgUtil::BaseOptimizerVisitor >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::BaseOptimizerVisitor >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osgUtil::BaseOptimizerVisitor >::hash = 43624958;
const int LunaTraits< osgUtil::BaseOptimizerVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::BaseOptimizerVisitor >::methods[] = {
	{"isOperationPermissibleForObject", &luna_wrapper_osgUtil_BaseOptimizerVisitor::_bind_isOperationPermissibleForObject},
	{"base_libraryName", &luna_wrapper_osgUtil_BaseOptimizerVisitor::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgUtil_BaseOptimizerVisitor::_bind_base_className},
	{"base_reset", &luna_wrapper_osgUtil_BaseOptimizerVisitor::_bind_base_reset},
	{"base_getEyePoint", &luna_wrapper_osgUtil_BaseOptimizerVisitor::_bind_base_getEyePoint},
	{"base_getViewPoint", &luna_wrapper_osgUtil_BaseOptimizerVisitor::_bind_base_getViewPoint},
	{"base_getDistanceToEyePoint", &luna_wrapper_osgUtil_BaseOptimizerVisitor::_bind_base_getDistanceToEyePoint},
	{"base_getDistanceFromEyePoint", &luna_wrapper_osgUtil_BaseOptimizerVisitor::_bind_base_getDistanceFromEyePoint},
	{"base_getDistanceToViewPoint", &luna_wrapper_osgUtil_BaseOptimizerVisitor::_bind_base_getDistanceToViewPoint},
	{"base_apply", &luna_wrapper_osgUtil_BaseOptimizerVisitor::_bind_base_apply},
	{"__eq", &luna_wrapper_osgUtil_BaseOptimizerVisitor::_bind___eq},
	{"getTable", &luna_wrapper_osgUtil_BaseOptimizerVisitor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::BaseOptimizerVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_BaseOptimizerVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::BaseOptimizerVisitor >::enumValues[] = {
	{0,0}
};


