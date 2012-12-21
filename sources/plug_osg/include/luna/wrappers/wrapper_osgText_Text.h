#ifndef _WRAPPERS_WRAPPER_OSGTEXT_TEXT_H_
#define _WRAPPERS_WRAPPER_OSGTEXT_TEXT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgText/Text>

class wrapper_osgText_Text : public osgText::Text, public luna_wrapper_base {

public:
		

	~wrapper_osgText_Text() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgText_Text(lua_State* L, lua_Table* dum) : osgText::Text(), luna_wrapper_base(L) {};
	wrapper_osgText_Text(lua_State* L, lua_Table* dum, const osgText::Text & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgText::Text(text, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return Text::setName(name);
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return Text::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Text::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Text::getUserData();
	};

	// osg::Geometry * osg::Drawable::asGeometry()
	osg::Geometry * asGeometry() {
		if(_obj.pushFunction("asGeometry")) {
			return (_obj.callFunction<osg::Geometry*>());
		}

		return Text::asGeometry();
	};

	// const osg::Geometry * osg::Drawable::asGeometry() const
	const osg::Geometry * asGeometry() const {
		if(_obj.pushFunction("asGeometry")) {
			return (_obj.callFunction<osg::Geometry*>());
		}

		return Text::asGeometry();
	};

	// void osg::Drawable::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return Text::computeDataVariance();
	};

	// void osg::Drawable::setUseVertexBufferObjects(bool flag)
	void setUseVertexBufferObjects(bool flag) {
		if(_obj.pushFunction("setUseVertexBufferObjects")) {
			_obj.pushArg(flag);
			return (_obj.callFunction<void>());
		}

		return Text::setUseVertexBufferObjects(flag);
	};

	// void osg::Drawable::dirtyDisplayList()
	void dirtyDisplayList() {
		if(_obj.pushFunction("dirtyDisplayList")) {
			return (_obj.callFunction<void>());
		}

		return Text::dirtyDisplayList();
	};

	// unsigned int osg::Drawable::getGLObjectSizeHint() const
	unsigned int getGLObjectSizeHint() const {
		if(_obj.pushFunction("getGLObjectSizeHint")) {
			return (_obj.callFunction<unsigned int>());
		}

		return Text::getGLObjectSizeHint();
	};

	// void osg::Drawable::compileGLObjects(osg::RenderInfo & renderInfo) const
	void compileGLObjects(osg::RenderInfo & renderInfo) const {
		if(_obj.pushFunction("compileGLObjects")) {
			_obj.pushArg(&renderInfo);
			return (_obj.callFunction<void>());
		}

		return Text::compileGLObjects(renderInfo);
	};

	// void osg::Drawable::setUpdateCallback(osg::Drawable::UpdateCallback * ac)
	void setUpdateCallback(osg::Drawable::UpdateCallback * ac) {
		if(_obj.pushFunction("setUpdateCallback")) {
			_obj.pushArg(ac);
			return (_obj.callFunction<void>());
		}

		return Text::setUpdateCallback(ac);
	};

	// void osg::Drawable::setEventCallback(osg::Drawable::EventCallback * ac)
	void setEventCallback(osg::Drawable::EventCallback * ac) {
		if(_obj.pushFunction("setEventCallback")) {
			_obj.pushArg(ac);
			return (_obj.callFunction<void>());
		}

		return Text::setEventCallback(ac);
	};

	// void osg::Drawable::setCullCallback(osg::Drawable::CullCallback * cc)
	void setCullCallback(osg::Drawable::CullCallback * cc) {
		if(_obj.pushFunction("setCullCallback")) {
			_obj.pushArg(cc);
			return (_obj.callFunction<void>());
		}

		return Text::setCullCallback(cc);
	};

	// void osg::Drawable::setDrawCallback(osg::Drawable::DrawCallback * dc)
	void setDrawCallback(osg::Drawable::DrawCallback * dc) {
		if(_obj.pushFunction("setDrawCallback")) {
			_obj.pushArg(dc);
			return (_obj.callFunction<void>());
		}

		return Text::setDrawCallback(dc);
	};

	// osg::BoundingBoxd osgText::TextBase::computeBound() const
	osg::BoundingBoxd computeBound() const {
		if(_obj.pushFunction("computeBound")) {
			return *(_obj.callFunction<osg::BoundingBoxd*>());
		}

		return Text::computeBound();
	};

	// osg::Object * osgText::Text::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return Text::cloneType();
	};

	// osg::Object * osgText::Text::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return Text::clone(arg1);
	};

	// bool osgText::Text::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return Text::isSameKindAs(obj);
	};

	// const char * osgText::Text::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return Text::className();
	};

	// const char * osgText::Text::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return Text::libraryName();
	};

	// void osgText::Text::setFont(osgText::Font * font = 0)
	void setFont(osgText::Font * font = 0) {
		if(_obj.pushFunction("setFont")) {
			_obj.pushArg(font);
			return (_obj.callFunction<void>());
		}

		return Text::setFont(font);
	};

	// void osgText::Text::setFont(const std::string & fontfile)
	void setFont(const std::string & fontfile) {
		if(_obj.pushFunction("setFont")) {
			_obj.pushArg(fontfile);
			return (_obj.callFunction<void>());
		}

		return Text::setFont(fontfile);
	};

	// void osgText::Text::drawImplementation(osg::RenderInfo & renderInfo) const
	void drawImplementation(osg::RenderInfo & renderInfo) const {
		if(_obj.pushFunction("drawImplementation")) {
			_obj.pushArg(&renderInfo);
			return (_obj.callFunction<void>());
		}

		return Text::drawImplementation(renderInfo);
	};

	// void osgText::Text::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return Text::releaseGLObjects(state);
	};


protected:
	// void osgText::Text::computeGlyphRepresentation()
	void computeGlyphRepresentation() {
		if(_obj.pushFunction("computeGlyphRepresentation")) {
			return (_obj.callFunction<void>());
		}

		return Text::computeGlyphRepresentation();
	};

	// void osgText::Text::computePositions(unsigned int contextID) const
	void computePositions(unsigned int contextID) const {
		if(_obj.pushFunction("computePositions")) {
			_obj.pushArg(contextID);
			return (_obj.callFunction<void>());
		}

		return Text::computePositions(contextID);
	};

public:
// osgText::Font * osgText::Text::getActiveFont()
osgText::Font * public_getActiveFont() {
	return osgText::Text::getActiveFont();
};

// const osgText::Font * osgText::Text::getActiveFont() const
const osgText::Font * public_getActiveFont() const {
	return osgText::Text::getActiveFont();
};

// bool osgText::Text::computeAverageGlyphWidthAndHeight(float & avg_width, float & avg_height) const
bool public_computeAverageGlyphWidthAndHeight(float & avg_width, float & avg_height) const {
	return osgText::Text::computeAverageGlyphWidthAndHeight(avg_width, avg_height);
};

// void osgText::Text::computeBackdropPositions(unsigned int contextID) const
void public_computeBackdropPositions(unsigned int contextID) const {
	return osgText::Text::computeBackdropPositions(contextID);
};

// void osgText::Text::computeBackdropBoundingBox() const
void public_computeBackdropBoundingBox() const {
	return osgText::Text::computeBackdropBoundingBox();
};

// void osgText::Text::computeBoundingBoxMargin() const
void public_computeBoundingBoxMargin() const {
	return osgText::Text::computeBoundingBoxMargin();
};

// void osgText::Text::computeColorGradients() const
void public_computeColorGradients() const {
	return osgText::Text::computeColorGradients();
};

// void osgText::Text::computeColorGradientsOverall() const
void public_computeColorGradientsOverall() const {
	return osgText::Text::computeColorGradientsOverall();
};

// void osgText::Text::computeColorGradientsPerCharacter() const
void public_computeColorGradientsPerCharacter() const {
	return osgText::Text::computeColorGradientsPerCharacter();
};

// void osgText::Text::drawImplementation(osg::State & state, const osg::Vec4f & colorMultiplier) const
void public_drawImplementation(osg::State & state, const osg::Vec4f & colorMultiplier) const {
	return osgText::Text::drawImplementation(state, colorMultiplier);
};

// void osgText::Text::drawForegroundText(osg::State & state, const osgText::Text::GlyphQuads & glyphquad, const osg::Vec4f & colorMultiplier) const
void public_drawForegroundText(osg::State & state, const osgText::Text::GlyphQuads & glyphquad, const osg::Vec4f & colorMultiplier) const {
	return osgText::Text::drawForegroundText(state, glyphquad, colorMultiplier);
};

// void osgText::Text::drawTextWithBackdrop(osg::State & state, const osg::Vec4f & colorMultiplier) const
void public_drawTextWithBackdrop(osg::State & state, const osg::Vec4f & colorMultiplier) const {
	return osgText::Text::drawTextWithBackdrop(state, colorMultiplier);
};

// void osgText::Text::renderOnlyForegroundText(osg::State & state, const osg::Vec4f & colorMultiplier) const
void public_renderOnlyForegroundText(osg::State & state, const osg::Vec4f & colorMultiplier) const {
	return osgText::Text::renderOnlyForegroundText(state, colorMultiplier);
};

// void osgText::Text::renderWithPolygonOffset(osg::State & state, const osg::Vec4f & colorMultiplier) const
void public_renderWithPolygonOffset(osg::State & state, const osg::Vec4f & colorMultiplier) const {
	return osgText::Text::renderWithPolygonOffset(state, colorMultiplier);
};

// void osgText::Text::renderWithNoDepthBuffer(osg::State & state, const osg::Vec4f & colorMultiplier) const
void public_renderWithNoDepthBuffer(osg::State & state, const osg::Vec4f & colorMultiplier) const {
	return osgText::Text::renderWithNoDepthBuffer(state, colorMultiplier);
};

// void osgText::Text::renderWithDepthRange(osg::State & state, const osg::Vec4f & colorMultiplier) const
void public_renderWithDepthRange(osg::State & state, const osg::Vec4f & colorMultiplier) const {
	return osgText::Text::renderWithDepthRange(state, colorMultiplier);
};

// void osgText::Text::renderWithStencilBuffer(osg::State & state, const osg::Vec4f & colorMultiplier) const
void public_renderWithStencilBuffer(osg::State & state, const osg::Vec4f & colorMultiplier) const {
	return osgText::Text::renderWithStencilBuffer(state, colorMultiplier);
};

// void osgText::Text::renderWithDelayedDepthWrites(osg::State & state, const osg::Vec4f & colorMultiplier) const
void public_renderWithDelayedDepthWrites(osg::State & state, const osg::Vec4f & colorMultiplier) const {
	return osgText::Text::renderWithDelayedDepthWrites(state, colorMultiplier);
};

// float osgText::Text::bilinearInterpolate(float x1, float x2, float y1, float y2, float x, float y, float q11, float q12, float q21, float q22) const
float public_bilinearInterpolate(float x1, float x2, float y1, float y2, float x, float y, float q11, float q12, float q21, float q22) const {
	return osgText::Text::bilinearInterpolate(x1, x2, y1, y2, x, y, q11, q12, q21, q22);
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

