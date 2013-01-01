#ifndef _WRAPPERS_WRAPPER_OSGUTIL_CULLVISITOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_CULLVISITOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/CullVisitor>

class wrapper_osgUtil_CullVisitor : public osgUtil::CullVisitor, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_CullVisitor() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_CullVisitor(lua_State* L, lua_Table* dum) : osgUtil::CullVisitor(), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osgUtil_CullVisitor(lua_State* L, lua_Table* dum, const osgUtil::CullVisitor & arg1) : osgUtil::CullVisitor(arg1), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::CullSettings::setDefaults()
	void setDefaults() {
		if(_obj.pushFunction("setDefaults")) {
			return (_obj.callFunction<void>());
		}

		return CullVisitor::setDefaults();
	};

	// void osg::CullSettings::inheritCullSettings(const osg::CullSettings & settings)
	void inheritCullSettings(const osg::CullSettings & settings) {
		if(_obj.pushFunction("inheritCullSettings")) {
			_obj.pushArg(&settings);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::inheritCullSettings(settings);
	};

	// void osg::CullSettings::inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask)
	void inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask) {
		if(_obj.pushFunction("inheritCullSettings")) {
			_obj.pushArg(&settings);
			_obj.pushArg(inheritanceMask);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::inheritCullSettings(settings, inheritanceMask);
	};

	// const char * osgUtil::CullVisitor::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return CullVisitor::libraryName();
	};

	// const char * osgUtil::CullVisitor::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return CullVisitor::className();
	};

	// osgUtil::CullVisitor * osgUtil::CullVisitor::clone() const
	osgUtil::CullVisitor * clone() const {
		if(_obj.pushFunction("clone")) {
			return (_obj.callFunction<osgUtil::CullVisitor*>());
		}

		return CullVisitor::clone();
	};

	// void osgUtil::CullVisitor::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			return (_obj.callFunction<void>());
		}

		return CullVisitor::reset();
	};

	// osg::Vec3f osgUtil::CullVisitor::getEyePoint() const
	osg::Vec3f getEyePoint() const {
		if(_obj.pushFunction("getEyePoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return CullVisitor::getEyePoint();
	};

	// osg::Vec3f osgUtil::CullVisitor::getViewPoint() const
	osg::Vec3f getViewPoint() const {
		if(_obj.pushFunction("getViewPoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return CullVisitor::getViewPoint();
	};

	// float osgUtil::CullVisitor::getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToEyePoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return CullVisitor::getDistanceToEyePoint(arg1, arg2);
	};

	// float osgUtil::CullVisitor::getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceFromEyePoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return CullVisitor::getDistanceFromEyePoint(arg1, arg2);
	};

	// float osgUtil::CullVisitor::getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToViewPoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return CullVisitor::getDistanceToViewPoint(arg1, arg2);
	};

	// void osgUtil::CullVisitor::apply(osg::Node & arg1)
	void apply(osg::Node & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::apply(arg1);
	};

	// void osgUtil::CullVisitor::apply(osg::Geode & node)
	void apply(osg::Geode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::apply(node);
	};

	// void osgUtil::CullVisitor::apply(osg::Billboard & node)
	void apply(osg::Billboard & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::apply(node);
	};

	// void osgUtil::CullVisitor::apply(osg::LightSource & node)
	void apply(osg::LightSource & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::apply(node);
	};

	// void osgUtil::CullVisitor::apply(osg::ClipNode & node)
	void apply(osg::ClipNode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::apply(node);
	};

	// void osgUtil::CullVisitor::apply(osg::TexGenNode & node)
	void apply(osg::TexGenNode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::apply(node);
	};

	// void osgUtil::CullVisitor::apply(osg::Group & node)
	void apply(osg::Group & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::apply(node);
	};

	// void osgUtil::CullVisitor::apply(osg::Transform & node)
	void apply(osg::Transform & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::apply(node);
	};

	// void osgUtil::CullVisitor::apply(osg::Projection & node)
	void apply(osg::Projection & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::apply(node);
	};

	// void osgUtil::CullVisitor::apply(osg::Switch & node)
	void apply(osg::Switch & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::apply(node);
	};

	// void osgUtil::CullVisitor::apply(osg::LOD & node)
	void apply(osg::LOD & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::apply(node);
	};

	// void osgUtil::CullVisitor::apply(osg::ClearNode & node)
	void apply(osg::ClearNode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::apply(node);
	};

	// void osgUtil::CullVisitor::apply(osg::Camera & node)
	void apply(osg::Camera & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::apply(node);
	};

	// void osgUtil::CullVisitor::apply(osg::OccluderNode & node)
	void apply(osg::OccluderNode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::apply(node);
	};

	// void osgUtil::CullVisitor::apply(osg::OcclusionQueryNode & node)
	void apply(osg::OcclusionQueryNode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CullVisitor::apply(node);
	};

	// void osgUtil::CullVisitor::popProjectionMatrix()
	void popProjectionMatrix() {
		if(_obj.pushFunction("popProjectionMatrix")) {
			return (_obj.callFunction<void>());
		}

		return CullVisitor::popProjectionMatrix();
	};

	// bool osgUtil::CullVisitor::clampProjectionMatrixImplementation(osg::Matrixf & projection, double & znear, double & zfar) const
	bool clampProjectionMatrixImplementation(osg::Matrixf & projection, double & znear, double & zfar) const {
		if(_obj.pushFunction("clampProjectionMatrixImplementation")) {
			_obj.pushArg(&projection);
			_obj.pushArg(znear);
			_obj.pushArg(zfar);
			return (_obj.callFunction<bool>());
		}

		return CullVisitor::clampProjectionMatrixImplementation(projection, znear, zfar);
	};

	// bool osgUtil::CullVisitor::clampProjectionMatrixImplementation(osg::Matrixd & projection, double & znear, double & zfar) const
	bool clampProjectionMatrixImplementation(osg::Matrixd & projection, double & znear, double & zfar) const {
		if(_obj.pushFunction("clampProjectionMatrixImplementation")) {
			_obj.pushArg(&projection);
			_obj.pushArg(znear);
			_obj.pushArg(zfar);
			return (_obj.callFunction<bool>());
		}

		return CullVisitor::clampProjectionMatrixImplementation(projection, znear, zfar);
	};


	// Protected non-virtual methods:
	// void osgUtil::CullVisitor::handle_cull_callbacks_and_traverse(osg::Node & node)
	void public_handle_cull_callbacks_and_traverse(osg::Node & node) {
		return osgUtil::CullVisitor::handle_cull_callbacks_and_traverse(node);
	};

	// void osgUtil::CullVisitor::handle_cull_callbacks_and_accept(osg::Node & node, osg::Node * acceptNode)
	void public_handle_cull_callbacks_and_accept(osg::Node & node, osg::Node * acceptNode) {
		return osgUtil::CullVisitor::handle_cull_callbacks_and_accept(node, acceptNode);
	};

	// osgUtil::RenderLeaf * osgUtil::CullVisitor::createOrReuseRenderLeaf(osg::Drawable * drawable, osg::RefMatrixd * projection, osg::RefMatrixd * matrix, float depth = 0.0f)
	osgUtil::RenderLeaf * public_createOrReuseRenderLeaf(osg::Drawable * drawable, osg::RefMatrixd * projection, osg::RefMatrixd * matrix, float depth = 0.0f) {
		return osgUtil::CullVisitor::createOrReuseRenderLeaf(drawable, projection, matrix, depth);
	};

	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};

	// void osg::CullStack::computeFrustumVolume()
	void public_computeFrustumVolume() {
		return osg::CullStack::computeFrustumVolume();
	};

	// osg::RefMatrixd * osg::CullStack::createOrReuseMatrix(const osg::Matrixd & value)
	osg::RefMatrixd * public_createOrReuseMatrix(const osg::Matrixd & value) {
		return osg::CullStack::createOrReuseMatrix(value);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_handle_cull_callbacks_and_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_handle_cull_callbacks_and_accept(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_createOrReuseRenderLeaf(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_signalObserversAndDelete(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_deleteUsingDeleteHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_computeFrustumVolume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_createOrReuseMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void osgUtil::CullVisitor::public_handle_cull_callbacks_and_traverse(osg::Node & node)
	static int _bind_public_handle_cull_callbacks_and_traverse(lua_State *L) {
		if (!_lg_typecheck_public_handle_cull_callbacks_and_traverse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::public_handle_cull_callbacks_and_traverse(osg::Node & node) function, expected prototype:\nvoid osgUtil::CullVisitor::public_handle_cull_callbacks_and_traverse(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::CullVisitor::public_handle_cull_callbacks_and_traverse function");
		}
		osg::Node & node=*node_ptr;

		wrapper_osgUtil_CullVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_CullVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::public_handle_cull_callbacks_and_traverse(osg::Node &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_handle_cull_callbacks_and_traverse(node);

		return 0;
	}

	// void osgUtil::CullVisitor::public_handle_cull_callbacks_and_accept(osg::Node & node, osg::Node * acceptNode)
	static int _bind_public_handle_cull_callbacks_and_accept(lua_State *L) {
		if (!_lg_typecheck_public_handle_cull_callbacks_and_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CullVisitor::public_handle_cull_callbacks_and_accept(osg::Node & node, osg::Node * acceptNode) function, expected prototype:\nvoid osgUtil::CullVisitor::public_handle_cull_callbacks_and_accept(osg::Node & node, osg::Node * acceptNode)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::CullVisitor::public_handle_cull_callbacks_and_accept function");
		}
		osg::Node & node=*node_ptr;
		osg::Node* acceptNode=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		wrapper_osgUtil_CullVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_CullVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CullVisitor::public_handle_cull_callbacks_and_accept(osg::Node &, osg::Node *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_handle_cull_callbacks_and_accept(node, acceptNode);

		return 0;
	}

	// osgUtil::RenderLeaf * osgUtil::CullVisitor::public_createOrReuseRenderLeaf(osg::Drawable * drawable, osg::RefMatrixd * projection, osg::RefMatrixd * matrix, float depth = 0.0f)
	static int _bind_public_createOrReuseRenderLeaf(lua_State *L) {
		if (!_lg_typecheck_public_createOrReuseRenderLeaf(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::RenderLeaf * osgUtil::CullVisitor::public_createOrReuseRenderLeaf(osg::Drawable * drawable, osg::RefMatrixd * projection, osg::RefMatrixd * matrix, float depth = 0.0f) function, expected prototype:\nosgUtil::RenderLeaf * osgUtil::CullVisitor::public_createOrReuseRenderLeaf(osg::Drawable * drawable, osg::RefMatrixd * projection, osg::RefMatrixd * matrix, float depth = 0.0f)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));
		osg::RefMatrixd* projection=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,3));
		osg::RefMatrixd* matrix=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,4));
		float depth=luatop>4 ? (float)lua_tonumber(L,5) : 0.0f;

		wrapper_osgUtil_CullVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_CullVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::RenderLeaf * osgUtil::CullVisitor::public_createOrReuseRenderLeaf(osg::Drawable *, osg::RefMatrixd *, osg::RefMatrixd *, float). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osgUtil::RenderLeaf * lret = self->public_createOrReuseRenderLeaf(drawable, projection, matrix, depth);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::RenderLeaf >::push(L,lret,false);

		return 1;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n");
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgUtil_CullVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_CullVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_signalObserversAndDelete(bool, bool) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_signalObserversAndDelete(signalDelete, doDelete);

		return 0;
	}

	// void osg::Referenced::public_deleteUsingDeleteHandler() const
	static int _bind_public_deleteUsingDeleteHandler(lua_State *L) {
		if (!_lg_typecheck_public_deleteUsingDeleteHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_deleteUsingDeleteHandler() const function, expected prototype:\nvoid osg::Referenced::public_deleteUsingDeleteHandler() const\nClass arguments details:\n");
		}


		wrapper_osgUtil_CullVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_CullVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}

	// void osg::CullStack::public_computeFrustumVolume()
	static int _bind_public_computeFrustumVolume(lua_State *L) {
		if (!_lg_typecheck_public_computeFrustumVolume(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::CullStack::public_computeFrustumVolume() function, expected prototype:\nvoid osg::CullStack::public_computeFrustumVolume()\nClass arguments details:\n");
		}


		wrapper_osgUtil_CullVisitor* self=Luna< osg::CullSettings >::checkSubType< wrapper_osgUtil_CullVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::CullStack::public_computeFrustumVolume(). Got : '%s'",typeid(Luna< osg::CullSettings >::check(L,1)).name());
		}
		self->public_computeFrustumVolume();

		return 0;
	}

	// osg::RefMatrixd * osg::CullStack::public_createOrReuseMatrix(const osg::Matrixd & value)
	static int _bind_public_createOrReuseMatrix(lua_State *L) {
		if (!_lg_typecheck_public_createOrReuseMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RefMatrixd * osg::CullStack::public_createOrReuseMatrix(const osg::Matrixd & value) function, expected prototype:\nosg::RefMatrixd * osg::CullStack::public_createOrReuseMatrix(const osg::Matrixd & value)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* value_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::CullStack::public_createOrReuseMatrix function");
		}
		const osg::Matrixd & value=*value_ptr;

		wrapper_osgUtil_CullVisitor* self=Luna< osg::CullSettings >::checkSubType< wrapper_osgUtil_CullVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::RefMatrixd * osg::CullStack::public_createOrReuseMatrix(const osg::Matrixd &). Got : '%s'",typeid(Luna< osg::CullSettings >::check(L,1)).name());
		}
		osg::RefMatrixd * lret = self->public_createOrReuseMatrix(value);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RefMatrixd >::push(L,lret,false);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_handle_cull_callbacks_and_traverse",_bind_public_handle_cull_callbacks_and_traverse},
		{"protected_handle_cull_callbacks_and_accept",_bind_public_handle_cull_callbacks_and_accept},
		{"protected_createOrReuseRenderLeaf",_bind_public_createOrReuseRenderLeaf},
		{"protected_signalObserversAndDelete",_bind_public_signalObserversAndDelete},
		{"protected_deleteUsingDeleteHandler",_bind_public_deleteUsingDeleteHandler},
		{"protected_computeFrustumVolume",_bind_public_computeFrustumVolume},
		{"protected_createOrReuseMatrix",_bind_public_createOrReuseMatrix},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

