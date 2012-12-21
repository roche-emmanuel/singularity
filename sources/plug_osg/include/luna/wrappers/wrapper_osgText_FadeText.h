#ifndef _WRAPPERS_WRAPPER_OSGTEXT_FADETEXT_H_
#define _WRAPPERS_WRAPPER_OSGTEXT_FADETEXT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgText/FadeText>

class wrapper_osgText_FadeText : public osgText::FadeText, public luna_wrapper_base {

public:
		

	~wrapper_osgText_FadeText() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgText_FadeText(lua_State* L, lua_Table* dum) : osgText::FadeText(), luna_wrapper_base(L) {};
	wrapper_osgText_FadeText(lua_State* L, lua_Table* dum, const osgText::Text & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgText::FadeText(text, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return FadeText::setName(name);
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return FadeText::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return FadeText::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return FadeText::getUserData();
	};

	// osg::Geometry * osg::Drawable::asGeometry()
	osg::Geometry * asGeometry() {
		if(_obj.pushFunction("asGeometry")) {
			return (_obj.callFunction<osg::Geometry*>());
		}

		return FadeText::asGeometry();
	};

	// const osg::Geometry * osg::Drawable::asGeometry() const
	const osg::Geometry * asGeometry() const {
		if(_obj.pushFunction("asGeometry")) {
			return (_obj.callFunction<osg::Geometry*>());
		}

		return FadeText::asGeometry();
	};

	// void osg::Drawable::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return FadeText::computeDataVariance();
	};

	// void osg::Drawable::setUseVertexBufferObjects(bool flag)
	void setUseVertexBufferObjects(bool flag) {
		if(_obj.pushFunction("setUseVertexBufferObjects")) {
			_obj.pushArg(flag);
			return (_obj.callFunction<void>());
		}

		return FadeText::setUseVertexBufferObjects(flag);
	};

	// void osg::Drawable::dirtyDisplayList()
	void dirtyDisplayList() {
		if(_obj.pushFunction("dirtyDisplayList")) {
			return (_obj.callFunction<void>());
		}

		return FadeText::dirtyDisplayList();
	};

	// unsigned int osg::Drawable::getGLObjectSizeHint() const
	unsigned int getGLObjectSizeHint() const {
		if(_obj.pushFunction("getGLObjectSizeHint")) {
			return (_obj.callFunction<unsigned int>());
		}

		return FadeText::getGLObjectSizeHint();
	};

	// void osg::Drawable::compileGLObjects(osg::RenderInfo & renderInfo) const
	void compileGLObjects(osg::RenderInfo & renderInfo) const {
		if(_obj.pushFunction("compileGLObjects")) {
			_obj.pushArg(&renderInfo);
			return (_obj.callFunction<void>());
		}

		return FadeText::compileGLObjects(renderInfo);
	};

	// void osg::Drawable::setUpdateCallback(osg::Drawable::UpdateCallback * ac)
	void setUpdateCallback(osg::Drawable::UpdateCallback * ac) {
		if(_obj.pushFunction("setUpdateCallback")) {
			_obj.pushArg(ac);
			return (_obj.callFunction<void>());
		}

		return FadeText::setUpdateCallback(ac);
	};

	// void osg::Drawable::setEventCallback(osg::Drawable::EventCallback * ac)
	void setEventCallback(osg::Drawable::EventCallback * ac) {
		if(_obj.pushFunction("setEventCallback")) {
			_obj.pushArg(ac);
			return (_obj.callFunction<void>());
		}

		return FadeText::setEventCallback(ac);
	};

	// void osg::Drawable::setCullCallback(osg::Drawable::CullCallback * cc)
	void setCullCallback(osg::Drawable::CullCallback * cc) {
		if(_obj.pushFunction("setCullCallback")) {
			_obj.pushArg(cc);
			return (_obj.callFunction<void>());
		}

		return FadeText::setCullCallback(cc);
	};

	// void osg::Drawable::setDrawCallback(osg::Drawable::DrawCallback * dc)
	void setDrawCallback(osg::Drawable::DrawCallback * dc) {
		if(_obj.pushFunction("setDrawCallback")) {
			_obj.pushArg(dc);
			return (_obj.callFunction<void>());
		}

		return FadeText::setDrawCallback(dc);
	};

	// osg::BoundingBoxd osgText::TextBase::computeBound() const
	osg::BoundingBoxd computeBound() const {
		if(_obj.pushFunction("computeBound")) {
			return *(_obj.callFunction<osg::BoundingBoxd*>());
		}

		return FadeText::computeBound();
	};

	// void osgText::Text::setFont(osgText::Font * font = 0)
	void setFont(osgText::Font * font = 0) {
		if(_obj.pushFunction("setFont")) {
			_obj.pushArg(font);
			return (_obj.callFunction<void>());
		}

		return FadeText::setFont(font);
	};

	// void osgText::Text::setFont(const std::string & fontfile)
	void setFont(const std::string & fontfile) {
		if(_obj.pushFunction("setFont")) {
			_obj.pushArg(fontfile);
			return (_obj.callFunction<void>());
		}

		return FadeText::setFont(fontfile);
	};

	// void osgText::Text::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return FadeText::releaseGLObjects(state);
	};

	// osg::Object * osgText::FadeText::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return FadeText::cloneType();
	};

	// osg::Object * osgText::FadeText::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return FadeText::clone(arg1);
	};

	// bool osgText::FadeText::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return FadeText::isSameKindAs(obj);
	};

	// const char * osgText::FadeText::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return FadeText::libraryName();
	};

	// const char * osgText::FadeText::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return FadeText::className();
	};

	// void osgText::FadeText::drawImplementation(osg::RenderInfo & renderInfo) const
	void drawImplementation(osg::RenderInfo & renderInfo) const {
		if(_obj.pushFunction("drawImplementation")) {
			_obj.pushArg(&renderInfo);
			return (_obj.callFunction<void>());
		}

		return FadeText::drawImplementation(renderInfo);
	};


protected:
	// void osgText::Text::computeGlyphRepresentation()
	void computeGlyphRepresentation() {
		if(_obj.pushFunction("computeGlyphRepresentation")) {
			return (_obj.callFunction<void>());
		}

		return FadeText::computeGlyphRepresentation();
	};

	// void osgText::Text::computePositions(unsigned int contextID) const
	void computePositions(unsigned int contextID) const {
		if(_obj.pushFunction("computePositions")) {
			_obj.pushArg(contextID);
			return (_obj.callFunction<void>());
		}

		return FadeText::computePositions(contextID);
	};


};




#endif

