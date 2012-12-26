#ifndef _WRAPPERS_WRAPPER_OSGUTIL_RENDERSTAGE_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_RENDERSTAGE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/RenderStage>

class wrapper_osgUtil_RenderStage : public osgUtil::RenderStage, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_RenderStage() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_RenderStage(lua_State* L, lua_Table* dum) : osgUtil::RenderStage(), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osgUtil_RenderStage(lua_State* L, lua_Table* dum, osgUtil::RenderBin::SortMode mode) : osgUtil::RenderStage(mode), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osgUtil_RenderStage(lua_State* L, lua_Table* dum, const osgUtil::RenderStage & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgUtil::RenderStage(rhs, copyop), luna_wrapper_base(L) { register_protected_methods(L); };

	// Public virtual methods:
	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return RenderStage::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return RenderStage::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return RenderStage::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return RenderStage::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return RenderStage::getUserData();
	};

	// const char * osgUtil::RenderBin::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return RenderStage::libraryName();
	};

	// void osgUtil::RenderBin::sortImplementation()
	void sortImplementation() {
		if(_obj.pushFunction("sortImplementation")) {
			return (_obj.callFunction<void>());
		}

		return RenderStage::sortImplementation();
	};

	// void osgUtil::RenderBin::sortByState()
	void sortByState() {
		if(_obj.pushFunction("sortByState")) {
			return (_obj.callFunction<void>());
		}

		return RenderStage::sortByState();
	};

	// void osgUtil::RenderBin::sortByStateThenFrontToBack()
	void sortByStateThenFrontToBack() {
		if(_obj.pushFunction("sortByStateThenFrontToBack")) {
			return (_obj.callFunction<void>());
		}

		return RenderStage::sortByStateThenFrontToBack();
	};

	// void osgUtil::RenderBin::sortFrontToBack()
	void sortFrontToBack() {
		if(_obj.pushFunction("sortFrontToBack")) {
			return (_obj.callFunction<void>());
		}

		return RenderStage::sortFrontToBack();
	};

	// void osgUtil::RenderBin::sortBackToFront()
	void sortBackToFront() {
		if(_obj.pushFunction("sortBackToFront")) {
			return (_obj.callFunction<void>());
		}

		return RenderStage::sortBackToFront();
	};

	// void osgUtil::RenderBin::sortTraversalOrder()
	void sortTraversalOrder() {
		if(_obj.pushFunction("sortTraversalOrder")) {
			return (_obj.callFunction<void>());
		}

		return RenderStage::sortTraversalOrder();
	};

	// osg::Object * osgUtil::RenderStage::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return RenderStage::cloneType();
	};

	// osg::Object * osgUtil::RenderStage::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return RenderStage::clone(arg1);
	};

	// bool osgUtil::RenderStage::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return RenderStage::isSameKindAs(obj);
	};

	// const char * osgUtil::RenderStage::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return RenderStage::className();
	};

	// void osgUtil::RenderStage::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			return (_obj.callFunction<void>());
		}

		return RenderStage::reset();
	};

	// void osgUtil::RenderStage::addPositionedAttribute(osg::RefMatrixd * matrix, const osg::StateAttribute * attr)
	void addPositionedAttribute(osg::RefMatrixd * matrix, const osg::StateAttribute * attr) {
		if(_obj.pushFunction("addPositionedAttribute")) {
			_obj.pushArg(matrix);
			_obj.pushArg(attr);
			return (_obj.callFunction<void>());
		}

		return RenderStage::addPositionedAttribute(matrix, attr);
	};

	// void osgUtil::RenderStage::addPositionedTextureAttribute(unsigned int textureUnit, osg::RefMatrixd * matrix, const osg::StateAttribute * attr)
	void addPositionedTextureAttribute(unsigned int textureUnit, osg::RefMatrixd * matrix, const osg::StateAttribute * attr) {
		if(_obj.pushFunction("addPositionedTextureAttribute")) {
			_obj.pushArg(textureUnit);
			_obj.pushArg(matrix);
			_obj.pushArg(attr);
			return (_obj.callFunction<void>());
		}

		return RenderStage::addPositionedTextureAttribute(textureUnit, matrix, attr);
	};

	// void osgUtil::RenderStage::sort()
	void sort() {
		if(_obj.pushFunction("sort")) {
			return (_obj.callFunction<void>());
		}

		return RenderStage::sort();
	};

	// void osgUtil::RenderStage::drawPreRenderStages(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)
	void drawPreRenderStages(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous) {
		if(_obj.pushFunction("drawPreRenderStages")) {
			_obj.pushArg(&renderInfo);
			_obj.pushArg(previous);
			return (_obj.callFunction<void>());
		}

		return RenderStage::drawPreRenderStages(renderInfo, previous);
	};

	// void osgUtil::RenderStage::draw(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)
	void draw(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous) {
		if(_obj.pushFunction("draw")) {
			_obj.pushArg(&renderInfo);
			_obj.pushArg(previous);
			return (_obj.callFunction<void>());
		}

		return RenderStage::draw(renderInfo, previous);
	};

	// void osgUtil::RenderStage::drawInner(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous, bool & doCopyTexture)
	void drawInner(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous, bool & doCopyTexture) {
		if(_obj.pushFunction("drawInner")) {
			_obj.pushArg(&renderInfo);
			_obj.pushArg(previous);
			_obj.pushArg(doCopyTexture);
			return (_obj.callFunction<void>());
		}

		return RenderStage::drawInner(renderInfo, previous, doCopyTexture);
	};

	// void osgUtil::RenderStage::drawPostRenderStages(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)
	void drawPostRenderStages(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous) {
		if(_obj.pushFunction("drawPostRenderStages")) {
			_obj.pushArg(&renderInfo);
			_obj.pushArg(previous);
			return (_obj.callFunction<void>());
		}

		return RenderStage::drawPostRenderStages(renderInfo, previous);
	};

	// void osgUtil::RenderStage::drawImplementation(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)
	void drawImplementation(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous) {
		if(_obj.pushFunction("drawImplementation")) {
			_obj.pushArg(&renderInfo);
			_obj.pushArg(previous);
			return (_obj.callFunction<void>());
		}

		return RenderStage::drawImplementation(renderInfo, previous);
	};

	// unsigned int osgUtil::RenderStage::computeNumberOfDynamicRenderLeaves() const
	unsigned int computeNumberOfDynamicRenderLeaves() const {
		if(_obj.pushFunction("computeNumberOfDynamicRenderLeaves")) {
			return (_obj.callFunction<unsigned int>());
		}

		return RenderStage::computeNumberOfDynamicRenderLeaves();
	};

	// void osgUtil::RenderStage::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return RenderStage::releaseGLObjects(state);
	};



	// Protected virtual methods:

	// Protected non-virtual methods:
	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};


	// Protected non-virtual checkers:
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


	// Protected non-virtual function binds:
	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n");
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgUtil_RenderStage* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_RenderStage >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_signalObserversAndDelete(bool, bool) const");
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


		wrapper_osgUtil_RenderStage* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_RenderStage >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const");
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_signalObserversAndDelete",_bind_public_signalObserversAndDelete},
		{"protected_deleteUsingDeleteHandler",_bind_public_deleteUsingDeleteHandler},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

