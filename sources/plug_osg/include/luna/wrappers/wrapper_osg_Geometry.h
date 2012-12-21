#ifndef _WRAPPERS_WRAPPER_OSG_GEOMETRY_H_
#define _WRAPPERS_WRAPPER_OSG_GEOMETRY_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Geometry>

class wrapper_osg_Geometry : public osg::Geometry, public luna_wrapper_base {

public:
		

	~wrapper_osg_Geometry() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_Geometry(lua_State* L, lua_Table* dum) : osg::Geometry(), luna_wrapper_base(L) {};
	wrapper_osg_Geometry(lua_State* L, lua_Table* dum, const osg::Geometry & geometry, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::Geometry(geometry, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return Geometry::setName(name);
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return Geometry::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Geometry::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Geometry::getUserData();
	};

	// void osg::Drawable::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return Geometry::computeDataVariance();
	};

	// osg::BoundingBoxd osg::Drawable::computeBound() const
	osg::BoundingBoxd computeBound() const {
		if(_obj.pushFunction("computeBound")) {
			return *(_obj.callFunction<osg::BoundingBoxd*>());
		}

		return Geometry::computeBound();
	};

	// void osg::Drawable::setUpdateCallback(osg::Drawable::UpdateCallback * ac)
	void setUpdateCallback(osg::Drawable::UpdateCallback * ac) {
		if(_obj.pushFunction("setUpdateCallback")) {
			_obj.pushArg(ac);
			return (_obj.callFunction<void>());
		}

		return Geometry::setUpdateCallback(ac);
	};

	// void osg::Drawable::setEventCallback(osg::Drawable::EventCallback * ac)
	void setEventCallback(osg::Drawable::EventCallback * ac) {
		if(_obj.pushFunction("setEventCallback")) {
			_obj.pushArg(ac);
			return (_obj.callFunction<void>());
		}

		return Geometry::setEventCallback(ac);
	};

	// void osg::Drawable::setCullCallback(osg::Drawable::CullCallback * cc)
	void setCullCallback(osg::Drawable::CullCallback * cc) {
		if(_obj.pushFunction("setCullCallback")) {
			_obj.pushArg(cc);
			return (_obj.callFunction<void>());
		}

		return Geometry::setCullCallback(cc);
	};

	// void osg::Drawable::setDrawCallback(osg::Drawable::DrawCallback * dc)
	void setDrawCallback(osg::Drawable::DrawCallback * dc) {
		if(_obj.pushFunction("setDrawCallback")) {
			_obj.pushArg(dc);
			return (_obj.callFunction<void>());
		}

		return Geometry::setDrawCallback(dc);
	};

	// osg::Object * osg::Geometry::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return Geometry::cloneType();
	};

	// osg::Object * osg::Geometry::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return Geometry::clone(arg1);
	};

	// bool osg::Geometry::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return Geometry::isSameKindAs(obj);
	};

	// const char * osg::Geometry::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return Geometry::libraryName();
	};

	// const char * osg::Geometry::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return Geometry::className();
	};

	// osg::Geometry * osg::Geometry::asGeometry()
	osg::Geometry * asGeometry() {
		if(_obj.pushFunction("asGeometry")) {
			return (_obj.callFunction<osg::Geometry*>());
		}

		return Geometry::asGeometry();
	};

	// const osg::Geometry * osg::Geometry::asGeometry() const
	const osg::Geometry * asGeometry() const {
		if(_obj.pushFunction("asGeometry")) {
			return (_obj.callFunction<osg::Geometry*>());
		}

		return Geometry::asGeometry();
	};

	// void osg::Geometry::setUseVertexBufferObjects(bool flag)
	void setUseVertexBufferObjects(bool flag) {
		if(_obj.pushFunction("setUseVertexBufferObjects")) {
			_obj.pushArg(flag);
			return (_obj.callFunction<void>());
		}

		return Geometry::setUseVertexBufferObjects(flag);
	};

	// void osg::Geometry::dirtyDisplayList()
	void dirtyDisplayList() {
		if(_obj.pushFunction("dirtyDisplayList")) {
			return (_obj.callFunction<void>());
		}

		return Geometry::dirtyDisplayList();
	};

	// void osg::Geometry::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return Geometry::releaseGLObjects(state);
	};

	// unsigned int osg::Geometry::getGLObjectSizeHint() const
	unsigned int getGLObjectSizeHint() const {
		if(_obj.pushFunction("getGLObjectSizeHint")) {
			return (_obj.callFunction<unsigned int>());
		}

		return Geometry::getGLObjectSizeHint();
	};

	// void osg::Geometry::compileGLObjects(osg::RenderInfo & renderInfo) const
	void compileGLObjects(osg::RenderInfo & renderInfo) const {
		if(_obj.pushFunction("compileGLObjects")) {
			_obj.pushArg(&renderInfo);
			return (_obj.callFunction<void>());
		}

		return Geometry::compileGLObjects(renderInfo);
	};

	// void osg::Geometry::drawImplementation(osg::RenderInfo & renderInfo) const
	void drawImplementation(osg::RenderInfo & renderInfo) const {
		if(_obj.pushFunction("drawImplementation")) {
			_obj.pushArg(&renderInfo);
			return (_obj.callFunction<void>());
		}

		return Geometry::drawImplementation(renderInfo);
	};




// bool osg::Geometry::verifyBindings(const osg::Geometry::ArrayData & arrayData) const
bool public_verifyBindings(const osg::Geometry::ArrayData & arrayData) const {
	return osg::Geometry::verifyBindings(arrayData);
};

// bool osg::Geometry::verifyBindings(const osg::Geometry::Vec3ArrayData & arrayData) const
bool public_verifyBindings(const osg::Geometry::Vec3ArrayData & arrayData) const {
	return osg::Geometry::verifyBindings(arrayData);
};

// void osg::Geometry::computeCorrectBindingsAndArraySizes(osg::Geometry::ArrayData & arrayData, const char * arrayName)
void public_computeCorrectBindingsAndArraySizes(osg::Geometry::ArrayData & arrayData, const char * arrayName) {
	return osg::Geometry::computeCorrectBindingsAndArraySizes(arrayData, arrayName);
};

// void osg::Geometry::computeCorrectBindingsAndArraySizes(osg::Geometry::Vec3ArrayData & arrayData, const char * arrayName)
void public_computeCorrectBindingsAndArraySizes(osg::Geometry::Vec3ArrayData & arrayData, const char * arrayName) {
	return osg::Geometry::computeCorrectBindingsAndArraySizes(arrayData, arrayName);
};

// void osg::Geometry::addVertexBufferObjectIfRequired(osg::Array * array)
void public_addVertexBufferObjectIfRequired(osg::Array * array) {
	return osg::Geometry::addVertexBufferObjectIfRequired(array);
};

// void osg::Geometry::addElementBufferObjectIfRequired(osg::PrimitiveSet * primitiveSet)
void public_addElementBufferObjectIfRequired(osg::PrimitiveSet * primitiveSet) {
	return osg::Geometry::addElementBufferObjectIfRequired(primitiveSet);
};

// osg::Geometry & osg::Geometry::operator=(const osg::Geometry & arg1)
// void osg::Drawable::setBound(const osg::BoundingBoxd & bb) const
void public_setBound(const osg::BoundingBoxd & bb) const {
	return osg::Drawable::setBound(bb);
};

// void osg::Drawable::addParent(osg::Node * node)
void public_addParent(osg::Node * node) {
	return osg::Drawable::addParent(node);
};

// void osg::Drawable::removeParent(osg::Node * node)
void public_removeParent(osg::Node * node) {
	return osg::Drawable::removeParent(node);
};

// void osg::Drawable::setNumChildrenRequiringUpdateTraversal(unsigned int num)
void public_setNumChildrenRequiringUpdateTraversal(unsigned int num) {
	return osg::Drawable::setNumChildrenRequiringUpdateTraversal(num);
};

// unsigned int osg::Drawable::getNumChildrenRequiringUpdateTraversal() const
unsigned int public_getNumChildrenRequiringUpdateTraversal() const {
	return osg::Drawable::getNumChildrenRequiringUpdateTraversal();
};

// void osg::Drawable::setNumChildrenRequiringEventTraversal(unsigned int num)
void public_setNumChildrenRequiringEventTraversal(unsigned int num) {
	return osg::Drawable::setNumChildrenRequiringEventTraversal(num);
};

// unsigned int osg::Drawable::getNumChildrenRequiringEventTraversal() const
unsigned int public_getNumChildrenRequiringEventTraversal() const {
	return osg::Drawable::getNumChildrenRequiringEventTraversal();
};

// osg::Drawable & osg::Drawable::operator=(const osg::Drawable & arg1)
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

