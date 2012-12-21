#ifndef _WRAPPERS_WRAPPER_OSGTEXT_TEXT_D_H_
#define _WRAPPERS_WRAPPER_OSGTEXT_TEXT_D_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgText/Text3D>

class wrapper_osgText_Text3D : public osgText::Text3D, public luna_wrapper_base {

public:
		

	~wrapper_osgText_Text3D() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgText_Text3D(lua_State* L, lua_Table* dum) : osgText::Text3D(), luna_wrapper_base(L) {};
	wrapper_osgText_Text3D(lua_State* L, lua_Table* dum, const osgText::Text3D & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgText::Text3D(text, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return Text3D::setName(name);
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return Text3D::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Text3D::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Text3D::getUserData();
	};

	// osg::Geometry * osg::Drawable::asGeometry()
	osg::Geometry * asGeometry() {
		if(_obj.pushFunction("asGeometry")) {
			return (_obj.callFunction<osg::Geometry*>());
		}

		return Text3D::asGeometry();
	};

	// const osg::Geometry * osg::Drawable::asGeometry() const
	const osg::Geometry * asGeometry() const {
		if(_obj.pushFunction("asGeometry")) {
			return (_obj.callFunction<osg::Geometry*>());
		}

		return Text3D::asGeometry();
	};

	// void osg::Drawable::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return Text3D::computeDataVariance();
	};

	// void osg::Drawable::setUseVertexBufferObjects(bool flag)
	void setUseVertexBufferObjects(bool flag) {
		if(_obj.pushFunction("setUseVertexBufferObjects")) {
			_obj.pushArg(flag);
			return (_obj.callFunction<void>());
		}

		return Text3D::setUseVertexBufferObjects(flag);
	};

	// void osg::Drawable::dirtyDisplayList()
	void dirtyDisplayList() {
		if(_obj.pushFunction("dirtyDisplayList")) {
			return (_obj.callFunction<void>());
		}

		return Text3D::dirtyDisplayList();
	};

	// unsigned int osg::Drawable::getGLObjectSizeHint() const
	unsigned int getGLObjectSizeHint() const {
		if(_obj.pushFunction("getGLObjectSizeHint")) {
			return (_obj.callFunction<unsigned int>());
		}

		return Text3D::getGLObjectSizeHint();
	};

	// void osg::Drawable::compileGLObjects(osg::RenderInfo & renderInfo) const
	void compileGLObjects(osg::RenderInfo & renderInfo) const {
		if(_obj.pushFunction("compileGLObjects")) {
			_obj.pushArg(&renderInfo);
			return (_obj.callFunction<void>());
		}

		return Text3D::compileGLObjects(renderInfo);
	};

	// void osg::Drawable::setUpdateCallback(osg::Drawable::UpdateCallback * ac)
	void setUpdateCallback(osg::Drawable::UpdateCallback * ac) {
		if(_obj.pushFunction("setUpdateCallback")) {
			_obj.pushArg(ac);
			return (_obj.callFunction<void>());
		}

		return Text3D::setUpdateCallback(ac);
	};

	// void osg::Drawable::setEventCallback(osg::Drawable::EventCallback * ac)
	void setEventCallback(osg::Drawable::EventCallback * ac) {
		if(_obj.pushFunction("setEventCallback")) {
			_obj.pushArg(ac);
			return (_obj.callFunction<void>());
		}

		return Text3D::setEventCallback(ac);
	};

	// void osg::Drawable::setCullCallback(osg::Drawable::CullCallback * cc)
	void setCullCallback(osg::Drawable::CullCallback * cc) {
		if(_obj.pushFunction("setCullCallback")) {
			_obj.pushArg(cc);
			return (_obj.callFunction<void>());
		}

		return Text3D::setCullCallback(cc);
	};

	// void osg::Drawable::setDrawCallback(osg::Drawable::DrawCallback * dc)
	void setDrawCallback(osg::Drawable::DrawCallback * dc) {
		if(_obj.pushFunction("setDrawCallback")) {
			_obj.pushArg(dc);
			return (_obj.callFunction<void>());
		}

		return Text3D::setDrawCallback(dc);
	};

	// void osgText::TextBase::setFont(osgText::Font * font = 0)
	void setFont(osgText::Font * font = 0) {
		if(_obj.pushFunction("setFont")) {
			_obj.pushArg(font);
			return (_obj.callFunction<void>());
		}

		return Text3D::setFont(font);
	};

	// void osgText::TextBase::setFont(const std::string & fontfile)
	void setFont(const std::string & fontfile) {
		if(_obj.pushFunction("setFont")) {
			_obj.pushArg(fontfile);
			return (_obj.callFunction<void>());
		}

		return Text3D::setFont(fontfile);
	};

	// osg::Object * osgText::Text3D::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return Text3D::cloneType();
	};

	// osg::Object * osgText::Text3D::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return Text3D::clone(arg1);
	};

	// bool osgText::Text3D::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return Text3D::isSameKindAs(obj);
	};

	// const char * osgText::Text3D::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return Text3D::libraryName();
	};

	// const char * osgText::Text3D::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return Text3D::className();
	};

	// void osgText::Text3D::drawImplementation(osg::RenderInfo & renderInfo) const
	void drawImplementation(osg::RenderInfo & renderInfo) const {
		if(_obj.pushFunction("drawImplementation")) {
			_obj.pushArg(&renderInfo);
			return (_obj.callFunction<void>());
		}

		return Text3D::drawImplementation(renderInfo);
	};

	// void osgText::Text3D::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return Text3D::releaseGLObjects(state);
	};

	// osg::BoundingBoxd osgText::Text3D::computeBound() const
	osg::BoundingBoxd computeBound() const {
		if(_obj.pushFunction("computeBound")) {
			return *(_obj.callFunction<osg::BoundingBoxd*>());
		}

		return Text3D::computeBound();
	};


protected:
	// void osgText::Text3D::computeGlyphRepresentation()
	void computeGlyphRepresentation() {
		if(_obj.pushFunction("computeGlyphRepresentation")) {
			return (_obj.callFunction<void>());
		}

		return Text3D::computeGlyphRepresentation();
	};

	// void osgText::Text3D::computePositions(unsigned int contextID) const
	void computePositions(unsigned int contextID) const {
		if(_obj.pushFunction("computePositions")) {
			_obj.pushArg(contextID);
			return (_obj.callFunction<void>());
		}

		return Text3D::computePositions(contextID);
	};

public:
// void osgText::Text3D::renderPerGlyph(osg::State & state) const
void public_renderPerGlyph(osg::State & state) const {
	return osgText::Text3D::renderPerGlyph(state);
};

// void osgText::Text3D::renderPerFace(osg::State & state) const
void public_renderPerFace(osg::State & state) const {
	return osgText::Text3D::renderPerFace(state);
};

// void osgText::TextBase::positionCursor(const osg::Vec2f & endOfLine_coords, osg::Vec2f & cursor, unsigned int linelength)
void public_positionCursor(const osg::Vec2f & endOfLine_coords, osg::Vec2f & cursor, unsigned int linelength) {
	return osgText::TextBase::positionCursor(endOfLine_coords, cursor, linelength);
};

// void osgText::TextBase::computePositions()
void public_computePositions() {
	return osgText::TextBase::computePositions();
};

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

