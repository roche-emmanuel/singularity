#ifndef _WRAPPERS_WRAPPER_OSGUTIL_PICKVISITOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_PICKVISITOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/IntersectVisitor>

class wrapper_osgUtil_PickVisitor : public osgUtil::PickVisitor, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_PickVisitor() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_PickVisitor(lua_State* L, lua_Table* dum, const osg::Viewport * viewport, const osg::Matrixd & proj, const osg::Matrixd & view, float mx, float my) : osgUtil::PickVisitor(viewport, proj, view, mx, my), luna_wrapper_base(L) {};

	// osg::Vec3f osg::NodeVisitor::getViewPoint() const
	osg::Vec3f getViewPoint() const {
		if(_obj.pushFunction("getViewPoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return PickVisitor::getViewPoint();
	};

	// float osg::NodeVisitor::getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceFromEyePoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return PickVisitor::getDistanceFromEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToViewPoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return PickVisitor::getDistanceToViewPoint(arg1, arg2);
	};

	// const char * osgUtil::IntersectVisitor::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return PickVisitor::libraryName();
	};

	// const char * osgUtil::IntersectVisitor::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return PickVisitor::className();
	};

	// void osgUtil::IntersectVisitor::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			return (_obj.callFunction<void>());
		}

		return PickVisitor::reset();
	};

	// osg::Vec3f osgUtil::IntersectVisitor::getEyePoint() const
	osg::Vec3f getEyePoint() const {
		if(_obj.pushFunction("getEyePoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return PickVisitor::getEyePoint();
	};

	// float osgUtil::IntersectVisitor::getDistanceToEyePoint(const osg::Vec3f & pos, bool withLODScale) const
	float getDistanceToEyePoint(const osg::Vec3f & pos, bool withLODScale) const {
		if(_obj.pushFunction("getDistanceToEyePoint")) {
			_obj.pushArg(&pos);
			_obj.pushArg(withLODScale);
			return (_obj.callFunction<float>());
		}

		return PickVisitor::getDistanceToEyePoint(pos, withLODScale);
	};

	// void osgUtil::PickVisitor::apply(osg::Projection & projection)
	void apply(osg::Projection & projection) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&projection);
			return (_obj.callFunction<void>());
		}

		return PickVisitor::apply(projection);
	};

	// void osgUtil::PickVisitor::apply(osg::Camera & camera)
	void apply(osg::Camera & camera) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&camera);
			return (_obj.callFunction<void>());
		}

		return PickVisitor::apply(camera);
	};




// bool osgUtil::IntersectVisitor::intersect(osg::Drawable & gset)
bool public_intersect(osg::Drawable & gset) {
	return osgUtil::IntersectVisitor::intersect(gset);
};

// void osgUtil::IntersectVisitor::pushMatrix(osg::RefMatrixd * matrix, osg::Transform::ReferenceFrame rf)
void public_pushMatrix(osg::RefMatrixd * matrix, osg::Transform::ReferenceFrame rf) {
	return osgUtil::IntersectVisitor::pushMatrix(matrix, rf);
};

// void osgUtil::IntersectVisitor::popMatrix()
void public_popMatrix() {
	return osgUtil::IntersectVisitor::popMatrix();
};

// bool osgUtil::IntersectVisitor::enterNode(osg::Node & node)
bool public_enterNode(osg::Node & node) {
	return osgUtil::IntersectVisitor::enterNode(node);
};

// void osgUtil::IntersectVisitor::leaveNode()
void public_leaveNode() {
	return osgUtil::IntersectVisitor::leaveNode();
};

// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
	return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
};

// void osg::Referenced::deleteUsingDeleteHandler() const
void public_deleteUsingDeleteHandler() const {
	return osg::Referenced::deleteUsingDeleteHandler();
};


};




#endif

