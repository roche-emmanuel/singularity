#include <plug_common.h>

class luna_wrapper_osgUtil_CullVisitor {
public:
	typedef Luna< osgUtil::CullVisitor > luna_t;

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
		osgUtil::CullVisitor* ptr= dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::CullVisitor >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_CullSettings(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgUtil::CullVisitor* ptr= dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::CullSettings >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::CullVisitor >::push(L,ptr,false);
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
		if( (!dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1))) ) return false;
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

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEyePoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getViewPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDistanceToEyePoint(lua_State *L) {
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

	inline static bool _lg_typecheck_getDistanceToViewPoint(lua_State *L) {
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
		if( (!dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::LightSource* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::ClipNode* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::TexGenNode* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Projection* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_10(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_11(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_12(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::ClearNode* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_13(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Camera* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_14(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::OccluderNode* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_15(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_pushStateSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_popStateSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStateGraph(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRootStateGraph(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrentStateGraph(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRenderStage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRenderStage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrentRenderStage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrentCamera(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrentRenderBin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCurrentRenderBin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCalculatedNearPlane(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCalculatedNearPlane(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCalculatedFarPlane(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCalculatedFarPlane(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeNearestPointInFrustum(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,33161232) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_updateCalculatedNearFar_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!dynamic_cast< osg::Matrixd* >(Luna< osg::Matrixd >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,82744897) ) return false;
		if( (!dynamic_cast< osg::BoundingBoxd* >(Luna< osg::BoundingBoxd >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_updateCalculatedNearFar_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!dynamic_cast< osg::Matrixd* >(Luna< osg::Matrixd >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50169651) ) return false;
		if( (!dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,3))) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_updateCalculatedNearFar_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!dynamic_cast< osg::Vec3f* >(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addDrawable(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addDrawableAndDepth(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addPositionedAttribute(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addPositionedTextureAttribute(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeNearPlane(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_popProjectionMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clampProjectionMatrixImplementation_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903840) ) return false;
		if( (!dynamic_cast< osg::Matrixf* >(Luna< osg::Matrixf >::check(L,2))) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clampProjectionMatrixImplementation_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!dynamic_cast< osg::Matrixd* >(Luna< osg::Matrixd >::check(L,2))) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clampProjectionMatrix_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903840) ) return false;
		if( (!dynamic_cast< osg::Matrixf* >(Luna< osg::Matrixf >::check(L,2))) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clampProjectionMatrix_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!dynamic_cast< osg::Matrixd* >(Luna< osg::Matrixd >::check(L,2))) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getState_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getState_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRenderInfo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRenderInfo_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRenderInfo_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_prototype(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_create(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::CullVisitor::CullVisitor()
	static osgUtil::CullVisitor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::CullVisitor::CullVisitor() function, expected prototype:\nosgUtil::CullVisitor::CullVisitor()\nClass arguments details:\n");
		}


		return new osgUtil::CullVisitor();
	}

	// osgUtil::CullVisitor::CullVisitor(const osgUtil::CullVisitor & )
	static osgUtil::CullVisitor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::CullVisitor::CullVisitor(const osgUtil::CullVisitor & ) function, expected prototype:\nosgUtil::CullVisitor::CullVisitor(const osgUtil::CullVisitor & )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osgUtil::CullVisitor* _arg1_ptr=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::CullVisitor::CullVisitor function");
		}
		const osgUtil::CullVisitor & _arg1=*_arg1_ptr;

		return new osgUtil::CullVisitor(_arg1);
	}

	// Overload binder for osgUtil::CullVisitor::CullVisitor
	static osgUtil::CullVisitor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function CullVisitor, cannot match any of the overloads for function CullVisitor:\n  CullVisitor()\n  CullVisitor(const osgUtil::CullVisitor &)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgUtil::CullVisitor::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::CullVisitor::libraryName() const function, expected prototype:\nconst char * osgUtil::CullVisitor::libraryName() const\nClass arguments details:\n");
		}


		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::CullVisitor::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::CullVisitor::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::CullVisitor::className() const function, expected prototype:\nconst char * osgUtil::CullVisitor::className() const\nClass arguments details:\n");
		}


		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::CullVisitor::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osgUtil::CullVisitor * osgUtil::CullVisitor::clone() const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::CullVisitor * osgUtil::CullVisitor::clone() const function, expected prototype:\nosgUtil::CullVisitor * osgUtil::CullVisitor::clone() const\nClass arguments details:\n");
		}


		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::CullVisitor * osgUtil::CullVisitor::clone() const");
		}
		osgUtil::CullVisitor * lret = self->clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::CullVisitor >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::CullVisitor::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::reset() function, expected prototype:\nvoid osgUtil::CullVisitor::reset()\nClass arguments details:\n");
		}


		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::reset()");
		}
		self->reset();

		return 0;
	}

	// osg::Vec3f osgUtil::CullVisitor::getEyePoint() const
	static int _bind_getEyePoint(lua_State *L) {
		if (!_lg_typecheck_getEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::CullVisitor::getEyePoint() const function, expected prototype:\nosg::Vec3f osgUtil::CullVisitor::getEyePoint() const\nClass arguments details:\n");
		}


		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::CullVisitor::getEyePoint() const");
		}
		osg::Vec3f stack_lret = self->getEyePoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osgUtil::CullVisitor::getViewPoint() const
	static int _bind_getViewPoint(lua_State *L) {
		if (!_lg_typecheck_getViewPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::CullVisitor::getViewPoint() const function, expected prototype:\nosg::Vec3f osgUtil::CullVisitor::getViewPoint() const\nClass arguments details:\n");
		}


		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::CullVisitor::getViewPoint() const");
		}
		osg::Vec3f stack_lret = self->getViewPoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// float osgUtil::CullVisitor::getDistanceToEyePoint(const osg::Vec3f & , bool ) const
	static int _bind_getDistanceToEyePoint(lua_State *L) {
		if (!_lg_typecheck_getDistanceToEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgUtil::CullVisitor::getDistanceToEyePoint(const osg::Vec3f & , bool ) const function, expected prototype:\nfloat osgUtil::CullVisitor::getDistanceToEyePoint(const osg::Vec3f & , bool ) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::CullVisitor::getDistanceToEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgUtil::CullVisitor::getDistanceToEyePoint(const osg::Vec3f &, bool) const");
		}
		float lret = self->getDistanceToEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::CullVisitor::getDistanceFromEyePoint(const osg::Vec3f & , bool ) const
	static int _bind_getDistanceFromEyePoint(lua_State *L) {
		if (!_lg_typecheck_getDistanceFromEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgUtil::CullVisitor::getDistanceFromEyePoint(const osg::Vec3f & , bool ) const function, expected prototype:\nfloat osgUtil::CullVisitor::getDistanceFromEyePoint(const osg::Vec3f & , bool ) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::CullVisitor::getDistanceFromEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgUtil::CullVisitor::getDistanceFromEyePoint(const osg::Vec3f &, bool) const");
		}
		float lret = self->getDistanceFromEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::CullVisitor::getDistanceToViewPoint(const osg::Vec3f & , bool ) const
	static int _bind_getDistanceToViewPoint(lua_State *L) {
		if (!_lg_typecheck_getDistanceToViewPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgUtil::CullVisitor::getDistanceToViewPoint(const osg::Vec3f & , bool ) const function, expected prototype:\nfloat osgUtil::CullVisitor::getDistanceToViewPoint(const osg::Vec3f & , bool ) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::CullVisitor::getDistanceToViewPoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgUtil::CullVisitor::getDistanceToViewPoint(const osg::Vec3f &, bool) const");
		}
		float lret = self->getDistanceToViewPoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::CullVisitor::apply(osg::Node & )
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::apply(osg::Node & ) function, expected prototype:\nvoid osgUtil::CullVisitor::apply(osg::Node & )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* _arg1_ptr=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::CullVisitor::apply function");
		}
		osg::Node & _arg1=*_arg1_ptr;

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::apply(osg::Node &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osgUtil::CullVisitor::apply(osg::Geode & node)
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::apply(osg::Geode & node) function, expected prototype:\nvoid osgUtil::CullVisitor::apply(osg::Geode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* node_ptr=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::CullVisitor::apply function");
		}
		osg::Geode & node=*node_ptr;

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::apply(osg::Geode &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::CullVisitor::apply(osg::Billboard & node)
	static int _bind_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_apply_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::apply(osg::Billboard & node) function, expected prototype:\nvoid osgUtil::CullVisitor::apply(osg::Billboard & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Billboard* node_ptr=dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::CullVisitor::apply function");
		}
		osg::Billboard & node=*node_ptr;

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::apply(osg::Billboard &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::CullVisitor::apply(osg::LightSource & node)
	static int _bind_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_apply_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::apply(osg::LightSource & node) function, expected prototype:\nvoid osgUtil::CullVisitor::apply(osg::LightSource & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::LightSource* node_ptr=dynamic_cast< osg::LightSource* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::CullVisitor::apply function");
		}
		osg::LightSource & node=*node_ptr;

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::apply(osg::LightSource &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::CullVisitor::apply(osg::ClipNode & node)
	static int _bind_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_apply_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::apply(osg::ClipNode & node) function, expected prototype:\nvoid osgUtil::CullVisitor::apply(osg::ClipNode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ClipNode* node_ptr=dynamic_cast< osg::ClipNode* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::CullVisitor::apply function");
		}
		osg::ClipNode & node=*node_ptr;

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::apply(osg::ClipNode &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::CullVisitor::apply(osg::TexGenNode & node)
	static int _bind_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_apply_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::apply(osg::TexGenNode & node) function, expected prototype:\nvoid osgUtil::CullVisitor::apply(osg::TexGenNode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::TexGenNode* node_ptr=dynamic_cast< osg::TexGenNode* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::CullVisitor::apply function");
		}
		osg::TexGenNode & node=*node_ptr;

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::apply(osg::TexGenNode &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::CullVisitor::apply(osg::Group & node)
	static int _bind_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_apply_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::apply(osg::Group & node) function, expected prototype:\nvoid osgUtil::CullVisitor::apply(osg::Group & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Group* node_ptr=dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::CullVisitor::apply function");
		}
		osg::Group & node=*node_ptr;

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::apply(osg::Group &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::CullVisitor::apply(osg::Transform & node)
	static int _bind_apply_overload_8(lua_State *L) {
		if (!_lg_typecheck_apply_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::apply(osg::Transform & node) function, expected prototype:\nvoid osgUtil::CullVisitor::apply(osg::Transform & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Transform* node_ptr=dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::CullVisitor::apply function");
		}
		osg::Transform & node=*node_ptr;

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::apply(osg::Transform &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::CullVisitor::apply(osg::Projection & node)
	static int _bind_apply_overload_9(lua_State *L) {
		if (!_lg_typecheck_apply_overload_9(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::apply(osg::Projection & node) function, expected prototype:\nvoid osgUtil::CullVisitor::apply(osg::Projection & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Projection* node_ptr=dynamic_cast< osg::Projection* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::CullVisitor::apply function");
		}
		osg::Projection & node=*node_ptr;

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::apply(osg::Projection &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::CullVisitor::apply(osg::Switch & node)
	static int _bind_apply_overload_10(lua_State *L) {
		if (!_lg_typecheck_apply_overload_10(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::apply(osg::Switch & node) function, expected prototype:\nvoid osgUtil::CullVisitor::apply(osg::Switch & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Switch* node_ptr=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::CullVisitor::apply function");
		}
		osg::Switch & node=*node_ptr;

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::apply(osg::Switch &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::CullVisitor::apply(osg::LOD & node)
	static int _bind_apply_overload_11(lua_State *L) {
		if (!_lg_typecheck_apply_overload_11(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::apply(osg::LOD & node) function, expected prototype:\nvoid osgUtil::CullVisitor::apply(osg::LOD & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::LOD* node_ptr=dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::CullVisitor::apply function");
		}
		osg::LOD & node=*node_ptr;

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::apply(osg::LOD &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::CullVisitor::apply(osg::ClearNode & node)
	static int _bind_apply_overload_12(lua_State *L) {
		if (!_lg_typecheck_apply_overload_12(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::apply(osg::ClearNode & node) function, expected prototype:\nvoid osgUtil::CullVisitor::apply(osg::ClearNode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ClearNode* node_ptr=dynamic_cast< osg::ClearNode* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::CullVisitor::apply function");
		}
		osg::ClearNode & node=*node_ptr;

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::apply(osg::ClearNode &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::CullVisitor::apply(osg::Camera & node)
	static int _bind_apply_overload_13(lua_State *L) {
		if (!_lg_typecheck_apply_overload_13(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::apply(osg::Camera & node) function, expected prototype:\nvoid osgUtil::CullVisitor::apply(osg::Camera & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Camera* node_ptr=dynamic_cast< osg::Camera* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::CullVisitor::apply function");
		}
		osg::Camera & node=*node_ptr;

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::apply(osg::Camera &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::CullVisitor::apply(osg::OccluderNode & node)
	static int _bind_apply_overload_14(lua_State *L) {
		if (!_lg_typecheck_apply_overload_14(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::apply(osg::OccluderNode & node) function, expected prototype:\nvoid osgUtil::CullVisitor::apply(osg::OccluderNode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::OccluderNode* node_ptr=dynamic_cast< osg::OccluderNode* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::CullVisitor::apply function");
		}
		osg::OccluderNode & node=*node_ptr;

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::apply(osg::OccluderNode &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::CullVisitor::apply(osg::OcclusionQueryNode & node)
	static int _bind_apply_overload_15(lua_State *L) {
		if (!_lg_typecheck_apply_overload_15(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::apply(osg::OcclusionQueryNode & node) function, expected prototype:\nvoid osgUtil::CullVisitor::apply(osg::OcclusionQueryNode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::OcclusionQueryNode* node_ptr=dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::CullVisitor::apply function");
		}
		osg::OcclusionQueryNode & node=*node_ptr;

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::apply(osg::OcclusionQueryNode &)");
		}
		self->apply(node);

		return 0;
	}

	// Overload binder for osgUtil::CullVisitor::apply
	static int _bind_apply(lua_State *L) {
		if (_lg_typecheck_apply_overload_1(L)) return _bind_apply_overload_1(L);
		if (_lg_typecheck_apply_overload_2(L)) return _bind_apply_overload_2(L);
		if (_lg_typecheck_apply_overload_3(L)) return _bind_apply_overload_3(L);
		if (_lg_typecheck_apply_overload_4(L)) return _bind_apply_overload_4(L);
		if (_lg_typecheck_apply_overload_5(L)) return _bind_apply_overload_5(L);
		if (_lg_typecheck_apply_overload_6(L)) return _bind_apply_overload_6(L);
		if (_lg_typecheck_apply_overload_7(L)) return _bind_apply_overload_7(L);
		if (_lg_typecheck_apply_overload_8(L)) return _bind_apply_overload_8(L);
		if (_lg_typecheck_apply_overload_9(L)) return _bind_apply_overload_9(L);
		if (_lg_typecheck_apply_overload_10(L)) return _bind_apply_overload_10(L);
		if (_lg_typecheck_apply_overload_11(L)) return _bind_apply_overload_11(L);
		if (_lg_typecheck_apply_overload_12(L)) return _bind_apply_overload_12(L);
		if (_lg_typecheck_apply_overload_13(L)) return _bind_apply_overload_13(L);
		if (_lg_typecheck_apply_overload_14(L)) return _bind_apply_overload_14(L);
		if (_lg_typecheck_apply_overload_15(L)) return _bind_apply_overload_15(L);

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(osg::Node &)\n  apply(osg::Geode &)\n  apply(osg::Billboard &)\n  apply(osg::LightSource &)\n  apply(osg::ClipNode &)\n  apply(osg::TexGenNode &)\n  apply(osg::Group &)\n  apply(osg::Transform &)\n  apply(osg::Projection &)\n  apply(osg::Switch &)\n  apply(osg::LOD &)\n  apply(osg::ClearNode &)\n  apply(osg::Camera &)\n  apply(osg::OccluderNode &)\n  apply(osg::OcclusionQueryNode &)\n");
		return 0;
	}

	// void osgUtil::CullVisitor::pushStateSet(const osg::StateSet * ss)
	static int _bind_pushStateSet(lua_State *L) {
		if (!_lg_typecheck_pushStateSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::pushStateSet(const osg::StateSet * ss) function, expected prototype:\nvoid osgUtil::CullVisitor::pushStateSet(const osg::StateSet * ss)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateSet* ss=dynamic_cast< osg::StateSet* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::pushStateSet(const osg::StateSet *)");
		}
		self->pushStateSet(ss);

		return 0;
	}

	// void osgUtil::CullVisitor::popStateSet()
	static int _bind_popStateSet(lua_State *L) {
		if (!_lg_typecheck_popStateSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::popStateSet() function, expected prototype:\nvoid osgUtil::CullVisitor::popStateSet()\nClass arguments details:\n");
		}


		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::popStateSet()");
		}
		self->popStateSet();

		return 0;
	}

	// void osgUtil::CullVisitor::setStateGraph(osgUtil::StateGraph * rg)
	static int _bind_setStateGraph(lua_State *L) {
		if (!_lg_typecheck_setStateGraph(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::setStateGraph(osgUtil::StateGraph * rg) function, expected prototype:\nvoid osgUtil::CullVisitor::setStateGraph(osgUtil::StateGraph * rg)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::StateGraph* rg=dynamic_cast< osgUtil::StateGraph* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::setStateGraph(osgUtil::StateGraph *)");
		}
		self->setStateGraph(rg);

		return 0;
	}

	// osgUtil::StateGraph * osgUtil::CullVisitor::getRootStateGraph()
	static int _bind_getRootStateGraph(lua_State *L) {
		if (!_lg_typecheck_getRootStateGraph(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::StateGraph * osgUtil::CullVisitor::getRootStateGraph() function, expected prototype:\nosgUtil::StateGraph * osgUtil::CullVisitor::getRootStateGraph()\nClass arguments details:\n");
		}


		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::StateGraph * osgUtil::CullVisitor::getRootStateGraph()");
		}
		osgUtil::StateGraph * lret = self->getRootStateGraph();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StateGraph >::push(L,lret,false);

		return 1;
	}

	// osgUtil::StateGraph * osgUtil::CullVisitor::getCurrentStateGraph()
	static int _bind_getCurrentStateGraph(lua_State *L) {
		if (!_lg_typecheck_getCurrentStateGraph(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::StateGraph * osgUtil::CullVisitor::getCurrentStateGraph() function, expected prototype:\nosgUtil::StateGraph * osgUtil::CullVisitor::getCurrentStateGraph()\nClass arguments details:\n");
		}


		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::StateGraph * osgUtil::CullVisitor::getCurrentStateGraph()");
		}
		osgUtil::StateGraph * lret = self->getCurrentStateGraph();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StateGraph >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::CullVisitor::setRenderStage(osgUtil::RenderStage * rg)
	static int _bind_setRenderStage(lua_State *L) {
		if (!_lg_typecheck_setRenderStage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::setRenderStage(osgUtil::RenderStage * rg) function, expected prototype:\nvoid osgUtil::CullVisitor::setRenderStage(osgUtil::RenderStage * rg)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::RenderStage* rg=dynamic_cast< osgUtil::RenderStage* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::setRenderStage(osgUtil::RenderStage *)");
		}
		self->setRenderStage(rg);

		return 0;
	}

	// osgUtil::RenderStage * osgUtil::CullVisitor::getRenderStage()
	static int _bind_getRenderStage(lua_State *L) {
		if (!_lg_typecheck_getRenderStage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::RenderStage * osgUtil::CullVisitor::getRenderStage() function, expected prototype:\nosgUtil::RenderStage * osgUtil::CullVisitor::getRenderStage()\nClass arguments details:\n");
		}


		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::RenderStage * osgUtil::CullVisitor::getRenderStage()");
		}
		osgUtil::RenderStage * lret = self->getRenderStage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::RenderStage >::push(L,lret,false);

		return 1;
	}

	// osgUtil::RenderStage * osgUtil::CullVisitor::getCurrentRenderStage()
	static int _bind_getCurrentRenderStage(lua_State *L) {
		if (!_lg_typecheck_getCurrentRenderStage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::RenderStage * osgUtil::CullVisitor::getCurrentRenderStage() function, expected prototype:\nosgUtil::RenderStage * osgUtil::CullVisitor::getCurrentRenderStage()\nClass arguments details:\n");
		}


		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::RenderStage * osgUtil::CullVisitor::getCurrentRenderStage()");
		}
		osgUtil::RenderStage * lret = self->getCurrentRenderStage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::RenderStage >::push(L,lret,false);

		return 1;
	}

	// osg::Camera * osgUtil::CullVisitor::getCurrentCamera()
	static int _bind_getCurrentCamera(lua_State *L) {
		if (!_lg_typecheck_getCurrentCamera(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Camera * osgUtil::CullVisitor::getCurrentCamera() function, expected prototype:\nosg::Camera * osgUtil::CullVisitor::getCurrentCamera()\nClass arguments details:\n");
		}


		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Camera * osgUtil::CullVisitor::getCurrentCamera()");
		}
		osg::Camera * lret = self->getCurrentCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// osgUtil::RenderBin * osgUtil::CullVisitor::getCurrentRenderBin()
	static int _bind_getCurrentRenderBin(lua_State *L) {
		if (!_lg_typecheck_getCurrentRenderBin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::RenderBin * osgUtil::CullVisitor::getCurrentRenderBin() function, expected prototype:\nosgUtil::RenderBin * osgUtil::CullVisitor::getCurrentRenderBin()\nClass arguments details:\n");
		}


		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::RenderBin * osgUtil::CullVisitor::getCurrentRenderBin()");
		}
		osgUtil::RenderBin * lret = self->getCurrentRenderBin();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::RenderBin >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::CullVisitor::setCurrentRenderBin(osgUtil::RenderBin * rb)
	static int _bind_setCurrentRenderBin(lua_State *L) {
		if (!_lg_typecheck_setCurrentRenderBin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::setCurrentRenderBin(osgUtil::RenderBin * rb) function, expected prototype:\nvoid osgUtil::CullVisitor::setCurrentRenderBin(osgUtil::RenderBin * rb)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::RenderBin* rb=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::setCurrentRenderBin(osgUtil::RenderBin *)");
		}
		self->setCurrentRenderBin(rb);

		return 0;
	}

	// void osgUtil::CullVisitor::setCalculatedNearPlane(double value)
	static int _bind_setCalculatedNearPlane(lua_State *L) {
		if (!_lg_typecheck_setCalculatedNearPlane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::setCalculatedNearPlane(double value) function, expected prototype:\nvoid osgUtil::CullVisitor::setCalculatedNearPlane(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::setCalculatedNearPlane(double)");
		}
		self->setCalculatedNearPlane(value);

		return 0;
	}

	// double osgUtil::CullVisitor::getCalculatedNearPlane() const
	static int _bind_getCalculatedNearPlane(lua_State *L) {
		if (!_lg_typecheck_getCalculatedNearPlane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgUtil::CullVisitor::getCalculatedNearPlane() const function, expected prototype:\ndouble osgUtil::CullVisitor::getCalculatedNearPlane() const\nClass arguments details:\n");
		}


		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgUtil::CullVisitor::getCalculatedNearPlane() const");
		}
		double lret = self->getCalculatedNearPlane();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::CullVisitor::setCalculatedFarPlane(double value)
	static int _bind_setCalculatedFarPlane(lua_State *L) {
		if (!_lg_typecheck_setCalculatedFarPlane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::setCalculatedFarPlane(double value) function, expected prototype:\nvoid osgUtil::CullVisitor::setCalculatedFarPlane(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::setCalculatedFarPlane(double)");
		}
		self->setCalculatedFarPlane(value);

		return 0;
	}

	// double osgUtil::CullVisitor::getCalculatedFarPlane() const
	static int _bind_getCalculatedFarPlane(lua_State *L) {
		if (!_lg_typecheck_getCalculatedFarPlane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgUtil::CullVisitor::getCalculatedFarPlane() const function, expected prototype:\ndouble osgUtil::CullVisitor::getCalculatedFarPlane() const\nClass arguments details:\n");
		}


		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgUtil::CullVisitor::getCalculatedFarPlane() const");
		}
		double lret = self->getCalculatedFarPlane();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osgUtil::CullVisitor::computeNearestPointInFrustum(const osg::Matrixd & matrix, const osg::Polytope::PlaneList & planes, const osg::Drawable & drawable)
	static int _bind_computeNearestPointInFrustum(lua_State *L) {
		if (!_lg_typecheck_computeNearestPointInFrustum(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgUtil::CullVisitor::computeNearestPointInFrustum(const osg::Matrixd & matrix, const osg::Polytope::PlaneList & planes, const osg::Drawable & drawable) function, expected prototype:\ndouble osgUtil::CullVisitor::computeNearestPointInFrustum(const osg::Matrixd & matrix, const osg::Polytope::PlaneList & planes, const osg::Drawable & drawable)\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 33161232\narg 3 ID = 50169651\n");
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgUtil::CullVisitor::computeNearestPointInFrustum function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;
		const osg::Polytope::PlaneList* planes_ptr=(Luna< osg::Polytope::PlaneList >::check(L,3));
		if( !planes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planes in osgUtil::CullVisitor::computeNearestPointInFrustum function");
		}
		const osg::Polytope::PlaneList & planes=*planes_ptr;
		const osg::Drawable* drawable_ptr=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,4));
		if( !drawable_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg drawable in osgUtil::CullVisitor::computeNearestPointInFrustum function");
		}
		const osg::Drawable & drawable=*drawable_ptr;

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgUtil::CullVisitor::computeNearestPointInFrustum(const osg::Matrixd &, const osg::Polytope::PlaneList &, const osg::Drawable &)");
		}
		double lret = self->computeNearestPointInFrustum(matrix, planes, drawable);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgUtil::CullVisitor::updateCalculatedNearFar(const osg::Matrixd & matrix, const osg::BoundingBoxd & bb)
	static int _bind_updateCalculatedNearFar_overload_1(lua_State *L) {
		if (!_lg_typecheck_updateCalculatedNearFar_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::CullVisitor::updateCalculatedNearFar(const osg::Matrixd & matrix, const osg::BoundingBoxd & bb) function, expected prototype:\nbool osgUtil::CullVisitor::updateCalculatedNearFar(const osg::Matrixd & matrix, const osg::BoundingBoxd & bb)\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 82744897\n");
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgUtil::CullVisitor::updateCalculatedNearFar function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;
		const osg::BoundingBoxd* bb_ptr=(Luna< osg::BoundingBoxd >::check(L,3));
		if( !bb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bb in osgUtil::CullVisitor::updateCalculatedNearFar function");
		}
		const osg::BoundingBoxd & bb=*bb_ptr;

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::CullVisitor::updateCalculatedNearFar(const osg::Matrixd &, const osg::BoundingBoxd &)");
		}
		bool lret = self->updateCalculatedNearFar(matrix, bb);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::CullVisitor::updateCalculatedNearFar(const osg::Matrixd & matrix, const osg::Drawable & drawable, bool isBillboard = false)
	static int _bind_updateCalculatedNearFar_overload_2(lua_State *L) {
		if (!_lg_typecheck_updateCalculatedNearFar_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::CullVisitor::updateCalculatedNearFar(const osg::Matrixd & matrix, const osg::Drawable & drawable, bool isBillboard = false) function, expected prototype:\nbool osgUtil::CullVisitor::updateCalculatedNearFar(const osg::Matrixd & matrix, const osg::Drawable & drawable, bool isBillboard = false)\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgUtil::CullVisitor::updateCalculatedNearFar function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;
		const osg::Drawable* drawable_ptr=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,3));
		if( !drawable_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg drawable in osgUtil::CullVisitor::updateCalculatedNearFar function");
		}
		const osg::Drawable & drawable=*drawable_ptr;
		bool isBillboard=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : false;

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::CullVisitor::updateCalculatedNearFar(const osg::Matrixd &, const osg::Drawable &, bool)");
		}
		bool lret = self->updateCalculatedNearFar(matrix, drawable, isBillboard);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::CullVisitor::updateCalculatedNearFar(const osg::Vec3f & pos)
	static int _bind_updateCalculatedNearFar_overload_3(lua_State *L) {
		if (!_lg_typecheck_updateCalculatedNearFar_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::updateCalculatedNearFar(const osg::Vec3f & pos) function, expected prototype:\nvoid osgUtil::CullVisitor::updateCalculatedNearFar(const osg::Vec3f & pos)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* pos_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in osgUtil::CullVisitor::updateCalculatedNearFar function");
		}
		const osg::Vec3f & pos=*pos_ptr;

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::updateCalculatedNearFar(const osg::Vec3f &)");
		}
		self->updateCalculatedNearFar(pos);

		return 0;
	}

	// Overload binder for osgUtil::CullVisitor::updateCalculatedNearFar
	static int _bind_updateCalculatedNearFar(lua_State *L) {
		if (_lg_typecheck_updateCalculatedNearFar_overload_1(L)) return _bind_updateCalculatedNearFar_overload_1(L);
		if (_lg_typecheck_updateCalculatedNearFar_overload_2(L)) return _bind_updateCalculatedNearFar_overload_2(L);
		if (_lg_typecheck_updateCalculatedNearFar_overload_3(L)) return _bind_updateCalculatedNearFar_overload_3(L);

		luaL_error(L, "error in function updateCalculatedNearFar, cannot match any of the overloads for function updateCalculatedNearFar:\n  updateCalculatedNearFar(const osg::Matrixd &, const osg::BoundingBoxd &)\n  updateCalculatedNearFar(const osg::Matrixd &, const osg::Drawable &, bool)\n  updateCalculatedNearFar(const osg::Vec3f &)\n");
		return 0;
	}

	// void osgUtil::CullVisitor::addDrawable(osg::Drawable * drawable, osg::RefMatrixd * matrix)
	static int _bind_addDrawable(lua_State *L) {
		if (!_lg_typecheck_addDrawable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::addDrawable(osg::Drawable * drawable, osg::RefMatrixd * matrix) function, expected prototype:\nvoid osgUtil::CullVisitor::addDrawable(osg::Drawable * drawable, osg::RefMatrixd * matrix)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osg::Drawable* drawable=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,2));
		osg::RefMatrixd* matrix=dynamic_cast< osg::RefMatrixd* >(Luna< osg::Referenced >::check(L,3));

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::addDrawable(osg::Drawable *, osg::RefMatrixd *)");
		}
		self->addDrawable(drawable, matrix);

		return 0;
	}

	// void osgUtil::CullVisitor::addDrawableAndDepth(osg::Drawable * drawable, osg::RefMatrixd * matrix, float depth)
	static int _bind_addDrawableAndDepth(lua_State *L) {
		if (!_lg_typecheck_addDrawableAndDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::addDrawableAndDepth(osg::Drawable * drawable, osg::RefMatrixd * matrix, float depth) function, expected prototype:\nvoid osgUtil::CullVisitor::addDrawableAndDepth(osg::Drawable * drawable, osg::RefMatrixd * matrix, float depth)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osg::Drawable* drawable=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,2));
		osg::RefMatrixd* matrix=dynamic_cast< osg::RefMatrixd* >(Luna< osg::Referenced >::check(L,3));
		float depth=(float)lua_tonumber(L,4);

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::addDrawableAndDepth(osg::Drawable *, osg::RefMatrixd *, float)");
		}
		self->addDrawableAndDepth(drawable, matrix, depth);

		return 0;
	}

	// void osgUtil::CullVisitor::addPositionedAttribute(osg::RefMatrixd * matrix, const osg::StateAttribute * attr)
	static int _bind_addPositionedAttribute(lua_State *L) {
		if (!_lg_typecheck_addPositionedAttribute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::addPositionedAttribute(osg::RefMatrixd * matrix, const osg::StateAttribute * attr) function, expected prototype:\nvoid osgUtil::CullVisitor::addPositionedAttribute(osg::RefMatrixd * matrix, const osg::StateAttribute * attr)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osg::RefMatrixd* matrix=dynamic_cast< osg::RefMatrixd* >(Luna< osg::Referenced >::check(L,2));
		const osg::StateAttribute* attr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,3));

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::addPositionedAttribute(osg::RefMatrixd *, const osg::StateAttribute *)");
		}
		self->addPositionedAttribute(matrix, attr);

		return 0;
	}

	// void osgUtil::CullVisitor::addPositionedTextureAttribute(unsigned int textureUnit, osg::RefMatrixd * matrix, const osg::StateAttribute * attr)
	static int _bind_addPositionedTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_addPositionedTextureAttribute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::addPositionedTextureAttribute(unsigned int textureUnit, osg::RefMatrixd * matrix, const osg::StateAttribute * attr) function, expected prototype:\nvoid osgUtil::CullVisitor::addPositionedTextureAttribute(unsigned int textureUnit, osg::RefMatrixd * matrix, const osg::StateAttribute * attr)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 50169651\n");
		}

		unsigned int textureUnit=(unsigned int)lua_tointeger(L,2);
		osg::RefMatrixd* matrix=dynamic_cast< osg::RefMatrixd* >(Luna< osg::Referenced >::check(L,3));
		const osg::StateAttribute* attr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,4));

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::addPositionedTextureAttribute(unsigned int, osg::RefMatrixd *, const osg::StateAttribute *)");
		}
		self->addPositionedTextureAttribute(textureUnit, matrix, attr);

		return 0;
	}

	// void osgUtil::CullVisitor::computeNearPlane()
	static int _bind_computeNearPlane(lua_State *L) {
		if (!_lg_typecheck_computeNearPlane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::computeNearPlane() function, expected prototype:\nvoid osgUtil::CullVisitor::computeNearPlane()\nClass arguments details:\n");
		}


		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::computeNearPlane()");
		}
		self->computeNearPlane();

		return 0;
	}

	// void osgUtil::CullVisitor::popProjectionMatrix()
	static int _bind_popProjectionMatrix(lua_State *L) {
		if (!_lg_typecheck_popProjectionMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::popProjectionMatrix() function, expected prototype:\nvoid osgUtil::CullVisitor::popProjectionMatrix()\nClass arguments details:\n");
		}


		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::popProjectionMatrix()");
		}
		self->popProjectionMatrix();

		return 0;
	}

	// bool osgUtil::CullVisitor::clampProjectionMatrixImplementation(osg::Matrixf & projection, double & znear, double & zfar) const
	static int _bind_clampProjectionMatrixImplementation_overload_1(lua_State *L) {
		if (!_lg_typecheck_clampProjectionMatrixImplementation_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::CullVisitor::clampProjectionMatrixImplementation(osg::Matrixf & projection, double & znear, double & zfar) const function, expected prototype:\nbool osgUtil::CullVisitor::clampProjectionMatrixImplementation(osg::Matrixf & projection, double & znear, double & zfar) const\nClass arguments details:\narg 1 ID = 18903840\n");
		}

		osg::Matrixf* projection_ptr=(Luna< osg::Matrixf >::check(L,2));
		if( !projection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projection in osgUtil::CullVisitor::clampProjectionMatrixImplementation function");
		}
		osg::Matrixf & projection=*projection_ptr;
		double znear=(double)lua_tonumber(L,3);
		double zfar=(double)lua_tonumber(L,4);

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::CullVisitor::clampProjectionMatrixImplementation(osg::Matrixf &, double &, double &) const");
		}
		bool lret = self->clampProjectionMatrixImplementation(projection, znear, zfar);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::CullVisitor::clampProjectionMatrixImplementation(osg::Matrixd & projection, double & znear, double & zfar) const
	static int _bind_clampProjectionMatrixImplementation_overload_2(lua_State *L) {
		if (!_lg_typecheck_clampProjectionMatrixImplementation_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::CullVisitor::clampProjectionMatrixImplementation(osg::Matrixd & projection, double & znear, double & zfar) const function, expected prototype:\nbool osgUtil::CullVisitor::clampProjectionMatrixImplementation(osg::Matrixd & projection, double & znear, double & zfar) const\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		osg::Matrixd* projection_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !projection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projection in osgUtil::CullVisitor::clampProjectionMatrixImplementation function");
		}
		osg::Matrixd & projection=*projection_ptr;
		double znear=(double)lua_tonumber(L,3);
		double zfar=(double)lua_tonumber(L,4);

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::CullVisitor::clampProjectionMatrixImplementation(osg::Matrixd &, double &, double &) const");
		}
		bool lret = self->clampProjectionMatrixImplementation(projection, znear, zfar);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osgUtil::CullVisitor::clampProjectionMatrixImplementation
	static int _bind_clampProjectionMatrixImplementation(lua_State *L) {
		if (_lg_typecheck_clampProjectionMatrixImplementation_overload_1(L)) return _bind_clampProjectionMatrixImplementation_overload_1(L);
		if (_lg_typecheck_clampProjectionMatrixImplementation_overload_2(L)) return _bind_clampProjectionMatrixImplementation_overload_2(L);

		luaL_error(L, "error in function clampProjectionMatrixImplementation, cannot match any of the overloads for function clampProjectionMatrixImplementation:\n  clampProjectionMatrixImplementation(osg::Matrixf &, double &, double &)\n  clampProjectionMatrixImplementation(osg::Matrixd &, double &, double &)\n");
		return 0;
	}

	// bool osgUtil::CullVisitor::clampProjectionMatrix(osg::Matrixf & projection, double & znear, double & zfar) const
	static int _bind_clampProjectionMatrix_overload_1(lua_State *L) {
		if (!_lg_typecheck_clampProjectionMatrix_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::CullVisitor::clampProjectionMatrix(osg::Matrixf & projection, double & znear, double & zfar) const function, expected prototype:\nbool osgUtil::CullVisitor::clampProjectionMatrix(osg::Matrixf & projection, double & znear, double & zfar) const\nClass arguments details:\narg 1 ID = 18903840\n");
		}

		osg::Matrixf* projection_ptr=(Luna< osg::Matrixf >::check(L,2));
		if( !projection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projection in osgUtil::CullVisitor::clampProjectionMatrix function");
		}
		osg::Matrixf & projection=*projection_ptr;
		double znear=(double)lua_tonumber(L,3);
		double zfar=(double)lua_tonumber(L,4);

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::CullVisitor::clampProjectionMatrix(osg::Matrixf &, double &, double &) const");
		}
		bool lret = self->clampProjectionMatrix(projection, znear, zfar);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::CullVisitor::clampProjectionMatrix(osg::Matrixd & projection, double & znear, double & zfar) const
	static int _bind_clampProjectionMatrix_overload_2(lua_State *L) {
		if (!_lg_typecheck_clampProjectionMatrix_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::CullVisitor::clampProjectionMatrix(osg::Matrixd & projection, double & znear, double & zfar) const function, expected prototype:\nbool osgUtil::CullVisitor::clampProjectionMatrix(osg::Matrixd & projection, double & znear, double & zfar) const\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		osg::Matrixd* projection_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !projection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projection in osgUtil::CullVisitor::clampProjectionMatrix function");
		}
		osg::Matrixd & projection=*projection_ptr;
		double znear=(double)lua_tonumber(L,3);
		double zfar=(double)lua_tonumber(L,4);

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::CullVisitor::clampProjectionMatrix(osg::Matrixd &, double &, double &) const");
		}
		bool lret = self->clampProjectionMatrix(projection, znear, zfar);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osgUtil::CullVisitor::clampProjectionMatrix
	static int _bind_clampProjectionMatrix(lua_State *L) {
		if (_lg_typecheck_clampProjectionMatrix_overload_1(L)) return _bind_clampProjectionMatrix_overload_1(L);
		if (_lg_typecheck_clampProjectionMatrix_overload_2(L)) return _bind_clampProjectionMatrix_overload_2(L);

		luaL_error(L, "error in function clampProjectionMatrix, cannot match any of the overloads for function clampProjectionMatrix:\n  clampProjectionMatrix(osg::Matrixf &, double &, double &)\n  clampProjectionMatrix(osg::Matrixd &, double &, double &)\n");
		return 0;
	}

	// void osgUtil::CullVisitor::setState(osg::State * state)
	static int _bind_setState(lua_State *L) {
		if (!_lg_typecheck_setState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::setState(osg::State * state) function, expected prototype:\nvoid osgUtil::CullVisitor::setState(osg::State * state)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::setState(osg::State *)");
		}
		self->setState(state);

		return 0;
	}

	// osg::State * osgUtil::CullVisitor::getState()
	static int _bind_getState_overload_1(lua_State *L) {
		if (!_lg_typecheck_getState_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::State * osgUtil::CullVisitor::getState() function, expected prototype:\nosg::State * osgUtil::CullVisitor::getState()\nClass arguments details:\n");
		}


		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::State * osgUtil::CullVisitor::getState()");
		}
		osg::State * lret = self->getState();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::State >::push(L,lret,false);

		return 1;
	}

	// const osg::State * osgUtil::CullVisitor::getState() const
	static int _bind_getState_overload_2(lua_State *L) {
		if (!_lg_typecheck_getState_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::State * osgUtil::CullVisitor::getState() const function, expected prototype:\nconst osg::State * osgUtil::CullVisitor::getState() const\nClass arguments details:\n");
		}


		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::State * osgUtil::CullVisitor::getState() const");
		}
		const osg::State * lret = self->getState();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::State >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::CullVisitor::getState
	static int _bind_getState(lua_State *L) {
		if (_lg_typecheck_getState_overload_1(L)) return _bind_getState_overload_1(L);
		if (_lg_typecheck_getState_overload_2(L)) return _bind_getState_overload_2(L);

		luaL_error(L, "error in function getState, cannot match any of the overloads for function getState:\n  getState()\n  getState()\n");
		return 0;
	}

	// void osgUtil::CullVisitor::setRenderInfo(osg::RenderInfo & renderInfo)
	static int _bind_setRenderInfo(lua_State *L) {
		if (!_lg_typecheck_setRenderInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::setRenderInfo(osg::RenderInfo & renderInfo) function, expected prototype:\nvoid osgUtil::CullVisitor::setRenderInfo(osg::RenderInfo & renderInfo)\nClass arguments details:\narg 1 ID = 2286263\n");
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgUtil::CullVisitor::setRenderInfo function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::setRenderInfo(osg::RenderInfo &)");
		}
		self->setRenderInfo(renderInfo);

		return 0;
	}

	// osg::RenderInfo & osgUtil::CullVisitor::getRenderInfo()
	static int _bind_getRenderInfo_overload_1(lua_State *L) {
		if (!_lg_typecheck_getRenderInfo_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RenderInfo & osgUtil::CullVisitor::getRenderInfo() function, expected prototype:\nosg::RenderInfo & osgUtil::CullVisitor::getRenderInfo()\nClass arguments details:\n");
		}


		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::RenderInfo & osgUtil::CullVisitor::getRenderInfo()");
		}
		const osg::RenderInfo* lret = &self->getRenderInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RenderInfo >::push(L,lret,false);

		return 1;
	}

	// const osg::RenderInfo & osgUtil::CullVisitor::getRenderInfo() const
	static int _bind_getRenderInfo_overload_2(lua_State *L) {
		if (!_lg_typecheck_getRenderInfo_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::RenderInfo & osgUtil::CullVisitor::getRenderInfo() const function, expected prototype:\nconst osg::RenderInfo & osgUtil::CullVisitor::getRenderInfo() const\nClass arguments details:\n");
		}


		osgUtil::CullVisitor* self=dynamic_cast< osgUtil::CullVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::RenderInfo & osgUtil::CullVisitor::getRenderInfo() const");
		}
		const osg::RenderInfo* lret = &self->getRenderInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RenderInfo >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::CullVisitor::getRenderInfo
	static int _bind_getRenderInfo(lua_State *L) {
		if (_lg_typecheck_getRenderInfo_overload_1(L)) return _bind_getRenderInfo_overload_1(L);
		if (_lg_typecheck_getRenderInfo_overload_2(L)) return _bind_getRenderInfo_overload_2(L);

		luaL_error(L, "error in function getRenderInfo, cannot match any of the overloads for function getRenderInfo:\n  getRenderInfo()\n  getRenderInfo()\n");
		return 0;
	}

	// static osg::ref_ptr< osgUtil::CullVisitor > & osgUtil::CullVisitor::prototype()
	static int _bind_prototype(lua_State *L) {
		if (!_lg_typecheck_prototype(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::ref_ptr< osgUtil::CullVisitor > & osgUtil::CullVisitor::prototype() function, expected prototype:\nstatic osg::ref_ptr< osgUtil::CullVisitor > & osgUtil::CullVisitor::prototype()\nClass arguments details:\n");
		}


		osg::ref_ptr< osgUtil::CullVisitor > & lret = osgUtil::CullVisitor::prototype();
		Luna< osgUtil::CullVisitor >::push(L,lret.get(),false);

		return 1;
	}

	// static osgUtil::CullVisitor * osgUtil::CullVisitor::create()
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osgUtil::CullVisitor * osgUtil::CullVisitor::create() function, expected prototype:\nstatic osgUtil::CullVisitor * osgUtil::CullVisitor::create()\nClass arguments details:\n");
		}


		osgUtil::CullVisitor * lret = osgUtil::CullVisitor::create();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::CullVisitor >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

osgUtil::CullVisitor* LunaTraits< osgUtil::CullVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_CullVisitor::_bind_ctor(L);
}

void LunaTraits< osgUtil::CullVisitor >::_bind_dtor(osgUtil::CullVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::CullVisitor >::className[] = "CullVisitor";
const char LunaTraits< osgUtil::CullVisitor >::fullName[] = "osgUtil::CullVisitor";
const char LunaTraits< osgUtil::CullVisitor >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::CullVisitor >::parents[] = {"osg.NodeVisitor", "osg.CullStack", 0};
const int LunaTraits< osgUtil::CullVisitor >::hash = 6159026;
const int LunaTraits< osgUtil::CullVisitor >::uniqueIDs[] = {50169651, 31435107,0};

luna_RegType LunaTraits< osgUtil::CullVisitor >::methods[] = {
	{"libraryName", &luna_wrapper_osgUtil_CullVisitor::_bind_libraryName},
	{"className", &luna_wrapper_osgUtil_CullVisitor::_bind_className},
	{"clone", &luna_wrapper_osgUtil_CullVisitor::_bind_clone},
	{"reset", &luna_wrapper_osgUtil_CullVisitor::_bind_reset},
	{"getEyePoint", &luna_wrapper_osgUtil_CullVisitor::_bind_getEyePoint},
	{"getViewPoint", &luna_wrapper_osgUtil_CullVisitor::_bind_getViewPoint},
	{"getDistanceToEyePoint", &luna_wrapper_osgUtil_CullVisitor::_bind_getDistanceToEyePoint},
	{"getDistanceFromEyePoint", &luna_wrapper_osgUtil_CullVisitor::_bind_getDistanceFromEyePoint},
	{"getDistanceToViewPoint", &luna_wrapper_osgUtil_CullVisitor::_bind_getDistanceToViewPoint},
	{"apply", &luna_wrapper_osgUtil_CullVisitor::_bind_apply},
	{"pushStateSet", &luna_wrapper_osgUtil_CullVisitor::_bind_pushStateSet},
	{"popStateSet", &luna_wrapper_osgUtil_CullVisitor::_bind_popStateSet},
	{"setStateGraph", &luna_wrapper_osgUtil_CullVisitor::_bind_setStateGraph},
	{"getRootStateGraph", &luna_wrapper_osgUtil_CullVisitor::_bind_getRootStateGraph},
	{"getCurrentStateGraph", &luna_wrapper_osgUtil_CullVisitor::_bind_getCurrentStateGraph},
	{"setRenderStage", &luna_wrapper_osgUtil_CullVisitor::_bind_setRenderStage},
	{"getRenderStage", &luna_wrapper_osgUtil_CullVisitor::_bind_getRenderStage},
	{"getCurrentRenderStage", &luna_wrapper_osgUtil_CullVisitor::_bind_getCurrentRenderStage},
	{"getCurrentCamera", &luna_wrapper_osgUtil_CullVisitor::_bind_getCurrentCamera},
	{"getCurrentRenderBin", &luna_wrapper_osgUtil_CullVisitor::_bind_getCurrentRenderBin},
	{"setCurrentRenderBin", &luna_wrapper_osgUtil_CullVisitor::_bind_setCurrentRenderBin},
	{"setCalculatedNearPlane", &luna_wrapper_osgUtil_CullVisitor::_bind_setCalculatedNearPlane},
	{"getCalculatedNearPlane", &luna_wrapper_osgUtil_CullVisitor::_bind_getCalculatedNearPlane},
	{"setCalculatedFarPlane", &luna_wrapper_osgUtil_CullVisitor::_bind_setCalculatedFarPlane},
	{"getCalculatedFarPlane", &luna_wrapper_osgUtil_CullVisitor::_bind_getCalculatedFarPlane},
	{"computeNearestPointInFrustum", &luna_wrapper_osgUtil_CullVisitor::_bind_computeNearestPointInFrustum},
	{"updateCalculatedNearFar", &luna_wrapper_osgUtil_CullVisitor::_bind_updateCalculatedNearFar},
	{"addDrawable", &luna_wrapper_osgUtil_CullVisitor::_bind_addDrawable},
	{"addDrawableAndDepth", &luna_wrapper_osgUtil_CullVisitor::_bind_addDrawableAndDepth},
	{"addPositionedAttribute", &luna_wrapper_osgUtil_CullVisitor::_bind_addPositionedAttribute},
	{"addPositionedTextureAttribute", &luna_wrapper_osgUtil_CullVisitor::_bind_addPositionedTextureAttribute},
	{"computeNearPlane", &luna_wrapper_osgUtil_CullVisitor::_bind_computeNearPlane},
	{"popProjectionMatrix", &luna_wrapper_osgUtil_CullVisitor::_bind_popProjectionMatrix},
	{"clampProjectionMatrixImplementation", &luna_wrapper_osgUtil_CullVisitor::_bind_clampProjectionMatrixImplementation},
	{"clampProjectionMatrix", &luna_wrapper_osgUtil_CullVisitor::_bind_clampProjectionMatrix},
	{"setState", &luna_wrapper_osgUtil_CullVisitor::_bind_setState},
	{"getState", &luna_wrapper_osgUtil_CullVisitor::_bind_getState},
	{"setRenderInfo", &luna_wrapper_osgUtil_CullVisitor::_bind_setRenderInfo},
	{"getRenderInfo", &luna_wrapper_osgUtil_CullVisitor::_bind_getRenderInfo},
	{"prototype", &luna_wrapper_osgUtil_CullVisitor::_bind_prototype},
	{"create", &luna_wrapper_osgUtil_CullVisitor::_bind_create},
	{"__eq", &luna_wrapper_osgUtil_CullVisitor::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::CullVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_CullVisitor::_cast_from_Referenced},
	{"osg::CullSettings", &luna_wrapper_osgUtil_CullVisitor::_cast_from_CullSettings},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::CullVisitor >::enumValues[] = {
	{0,0}
};


