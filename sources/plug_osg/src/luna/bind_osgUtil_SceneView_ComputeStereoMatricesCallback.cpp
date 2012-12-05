#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_SceneView_ComputeStereoMatricesCallback.h>

class luna_wrapper_osgUtil_SceneView_ComputeStereoMatricesCallback {
public:
	typedef Luna< osgUtil::SceneView::ComputeStereoMatricesCallback > luna_t;

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
		osgUtil::SceneView::ComputeStereoMatricesCallback* ptr= dynamic_cast< osgUtil::SceneView::ComputeStereoMatricesCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::SceneView::ComputeStereoMatricesCallback >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_computeLeftEyeProjection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeLeftEyeView(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeRightEyeProjection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeRightEyeView(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeLeftEyeProjection(const osg::Matrixd & projection) const
	static int _bind_computeLeftEyeProjection(lua_State *L) {
		if (!_lg_typecheck_computeLeftEyeProjection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeLeftEyeProjection(const osg::Matrixd & projection) const function, expected prototype:\nosg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeLeftEyeProjection(const osg::Matrixd & projection) const\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* projection_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !projection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projection in osgUtil::SceneView::ComputeStereoMatricesCallback::computeLeftEyeProjection function");
		}
		const osg::Matrixd & projection=*projection_ptr;

		osgUtil::SceneView::ComputeStereoMatricesCallback* self=dynamic_cast< osgUtil::SceneView::ComputeStereoMatricesCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeLeftEyeProjection(const osg::Matrixd &) const");
		}
		osg::Matrixd stack_lret = self->computeLeftEyeProjection(projection);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeLeftEyeView(const osg::Matrixd & view) const
	static int _bind_computeLeftEyeView(lua_State *L) {
		if (!_lg_typecheck_computeLeftEyeView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeLeftEyeView(const osg::Matrixd & view) const function, expected prototype:\nosg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeLeftEyeView(const osg::Matrixd & view) const\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* view_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !view_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg view in osgUtil::SceneView::ComputeStereoMatricesCallback::computeLeftEyeView function");
		}
		const osg::Matrixd & view=*view_ptr;

		osgUtil::SceneView::ComputeStereoMatricesCallback* self=dynamic_cast< osgUtil::SceneView::ComputeStereoMatricesCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeLeftEyeView(const osg::Matrixd &) const");
		}
		osg::Matrixd stack_lret = self->computeLeftEyeView(view);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeRightEyeProjection(const osg::Matrixd & projection) const
	static int _bind_computeRightEyeProjection(lua_State *L) {
		if (!_lg_typecheck_computeRightEyeProjection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeRightEyeProjection(const osg::Matrixd & projection) const function, expected prototype:\nosg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeRightEyeProjection(const osg::Matrixd & projection) const\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* projection_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !projection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projection in osgUtil::SceneView::ComputeStereoMatricesCallback::computeRightEyeProjection function");
		}
		const osg::Matrixd & projection=*projection_ptr;

		osgUtil::SceneView::ComputeStereoMatricesCallback* self=dynamic_cast< osgUtil::SceneView::ComputeStereoMatricesCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeRightEyeProjection(const osg::Matrixd &) const");
		}
		osg::Matrixd stack_lret = self->computeRightEyeProjection(projection);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeRightEyeView(const osg::Matrixd & view) const
	static int _bind_computeRightEyeView(lua_State *L) {
		if (!_lg_typecheck_computeRightEyeView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeRightEyeView(const osg::Matrixd & view) const function, expected prototype:\nosg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeRightEyeView(const osg::Matrixd & view) const\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* view_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !view_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg view in osgUtil::SceneView::ComputeStereoMatricesCallback::computeRightEyeView function");
		}
		const osg::Matrixd & view=*view_ptr;

		osgUtil::SceneView::ComputeStereoMatricesCallback* self=dynamic_cast< osgUtil::SceneView::ComputeStereoMatricesCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeRightEyeView(const osg::Matrixd &) const");
		}
		osg::Matrixd stack_lret = self->computeRightEyeView(view);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osgUtil::SceneView::ComputeStereoMatricesCallback* LunaTraits< osgUtil::SceneView::ComputeStereoMatricesCallback >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeLeftEyeProjection(const osg::Matrixd & projection) const
	// osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeLeftEyeView(const osg::Matrixd & view) const
	// osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeRightEyeProjection(const osg::Matrixd & projection) const
	// osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeRightEyeView(const osg::Matrixd & view) const
}

void LunaTraits< osgUtil::SceneView::ComputeStereoMatricesCallback >::_bind_dtor(osgUtil::SceneView::ComputeStereoMatricesCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::SceneView::ComputeStereoMatricesCallback >::className[] = "ComputeStereoMatricesCallback";
const char LunaTraits< osgUtil::SceneView::ComputeStereoMatricesCallback >::fullName[] = "osgUtil::SceneView::ComputeStereoMatricesCallback";
const char LunaTraits< osgUtil::SceneView::ComputeStereoMatricesCallback >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::SceneView::ComputeStereoMatricesCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::SceneView::ComputeStereoMatricesCallback >::hash = 42058343;
const int LunaTraits< osgUtil::SceneView::ComputeStereoMatricesCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::SceneView::ComputeStereoMatricesCallback >::methods[] = {
	{"computeLeftEyeProjection", &luna_wrapper_osgUtil_SceneView_ComputeStereoMatricesCallback::_bind_computeLeftEyeProjection},
	{"computeLeftEyeView", &luna_wrapper_osgUtil_SceneView_ComputeStereoMatricesCallback::_bind_computeLeftEyeView},
	{"computeRightEyeProjection", &luna_wrapper_osgUtil_SceneView_ComputeStereoMatricesCallback::_bind_computeRightEyeProjection},
	{"computeRightEyeView", &luna_wrapper_osgUtil_SceneView_ComputeStereoMatricesCallback::_bind_computeRightEyeView},
	{"__eq", &luna_wrapper_osgUtil_SceneView_ComputeStereoMatricesCallback::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::SceneView::ComputeStereoMatricesCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_SceneView_ComputeStereoMatricesCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::SceneView::ComputeStereoMatricesCallback >::enumValues[] = {
	{0,0}
};


