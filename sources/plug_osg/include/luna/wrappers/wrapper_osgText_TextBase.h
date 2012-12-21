#ifndef _WRAPPERS_WRAPPER_OSGTEXT_TEXTBASE_H_
#define _WRAPPERS_WRAPPER_OSGTEXT_TEXTBASE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgText/TextBase>

class wrapper_osgText_TextBase : public osgText::TextBase, public luna_wrapper_base {

public:
		

	~wrapper_osgText_TextBase() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgText_TextBase(lua_State* L, lua_Table* dum) : osgText::TextBase(), luna_wrapper_base(L) {};
	wrapper_osgText_TextBase(lua_State* L, lua_Table* dum, const osgText::TextBase & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgText::TextBase(text, copyop), luna_wrapper_base(L) {};

	// osg::Object * osg::Object::cloneType() const
	osg::Object * cloneType() const {
		THROW_IF(!_obj.pushFunction("cloneType"),"No implementation for abstract function osg::Object::cloneType");
		return (_obj.callFunction<osg::Object*>());
	};

	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		THROW_IF(!_obj.pushFunction("clone"),"No implementation for abstract function osg::Object::clone");
		_obj.pushArg(&arg1);
		return (_obj.callFunction<osg::Object*>());
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return TextBase::setName(name);
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return TextBase::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return TextBase::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return TextBase::getUserData();
	};

	// osg::Geometry * osg::Drawable::asGeometry()
	osg::Geometry * asGeometry() {
		if(_obj.pushFunction("asGeometry")) {
			return (_obj.callFunction<osg::Geometry*>());
		}

		return TextBase::asGeometry();
	};

	// const osg::Geometry * osg::Drawable::asGeometry() const
	const osg::Geometry * asGeometry() const {
		if(_obj.pushFunction("asGeometry")) {
			return (_obj.callFunction<osg::Geometry*>());
		}

		return TextBase::asGeometry();
	};

	// void osg::Drawable::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return TextBase::computeDataVariance();
	};

	// void osg::Drawable::setUseVertexBufferObjects(bool flag)
	void setUseVertexBufferObjects(bool flag) {
		if(_obj.pushFunction("setUseVertexBufferObjects")) {
			_obj.pushArg(flag);
			return (_obj.callFunction<void>());
		}

		return TextBase::setUseVertexBufferObjects(flag);
	};

	// void osg::Drawable::dirtyDisplayList()
	void dirtyDisplayList() {
		if(_obj.pushFunction("dirtyDisplayList")) {
			return (_obj.callFunction<void>());
		}

		return TextBase::dirtyDisplayList();
	};

	// unsigned int osg::Drawable::getGLObjectSizeHint() const
	unsigned int getGLObjectSizeHint() const {
		if(_obj.pushFunction("getGLObjectSizeHint")) {
			return (_obj.callFunction<unsigned int>());
		}

		return TextBase::getGLObjectSizeHint();
	};

	// void osg::Drawable::compileGLObjects(osg::RenderInfo & renderInfo) const
	void compileGLObjects(osg::RenderInfo & renderInfo) const {
		if(_obj.pushFunction("compileGLObjects")) {
			_obj.pushArg(&renderInfo);
			return (_obj.callFunction<void>());
		}

		return TextBase::compileGLObjects(renderInfo);
	};

	// void osg::Drawable::setUpdateCallback(osg::Drawable::UpdateCallback * ac)
	void setUpdateCallback(osg::Drawable::UpdateCallback * ac) {
		if(_obj.pushFunction("setUpdateCallback")) {
			_obj.pushArg(ac);
			return (_obj.callFunction<void>());
		}

		return TextBase::setUpdateCallback(ac);
	};

	// void osg::Drawable::setEventCallback(osg::Drawable::EventCallback * ac)
	void setEventCallback(osg::Drawable::EventCallback * ac) {
		if(_obj.pushFunction("setEventCallback")) {
			_obj.pushArg(ac);
			return (_obj.callFunction<void>());
		}

		return TextBase::setEventCallback(ac);
	};

	// void osg::Drawable::setCullCallback(osg::Drawable::CullCallback * cc)
	void setCullCallback(osg::Drawable::CullCallback * cc) {
		if(_obj.pushFunction("setCullCallback")) {
			_obj.pushArg(cc);
			return (_obj.callFunction<void>());
		}

		return TextBase::setCullCallback(cc);
	};

	// void osg::Drawable::setDrawCallback(osg::Drawable::DrawCallback * dc)
	void setDrawCallback(osg::Drawable::DrawCallback * dc) {
		if(_obj.pushFunction("setDrawCallback")) {
			_obj.pushArg(dc);
			return (_obj.callFunction<void>());
		}

		return TextBase::setDrawCallback(dc);
	};

	// void osg::Drawable::drawImplementation(osg::RenderInfo & renderInfo) const
	void drawImplementation(osg::RenderInfo & renderInfo) const {
		THROW_IF(!_obj.pushFunction("drawImplementation"),"No implementation for abstract function osg::Drawable::drawImplementation");
		_obj.pushArg(&renderInfo);
		return (_obj.callFunction<void>());
	};

	// bool osgText::TextBase::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return TextBase::isSameKindAs(obj);
	};

	// const char * osgText::TextBase::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return TextBase::className();
	};

	// const char * osgText::TextBase::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return TextBase::libraryName();
	};

	// void osgText::TextBase::setFont(osgText::Font * font = 0)
	void setFont(osgText::Font * font = 0) {
		if(_obj.pushFunction("setFont")) {
			_obj.pushArg(font);
			return (_obj.callFunction<void>());
		}

		return TextBase::setFont(font);
	};

	// void osgText::TextBase::setFont(const std::string & fontfile)
	void setFont(const std::string & fontfile) {
		if(_obj.pushFunction("setFont")) {
			_obj.pushArg(fontfile);
			return (_obj.callFunction<void>());
		}

		return TextBase::setFont(fontfile);
	};

	// void osgText::TextBase::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return TextBase::releaseGLObjects(state);
	};

	// osg::BoundingBoxd osgText::TextBase::computeBound() const
	osg::BoundingBoxd computeBound() const {
		if(_obj.pushFunction("computeBound")) {
			return *(_obj.callFunction<osg::BoundingBoxd*>());
		}

		return TextBase::computeBound();
	};


protected:
	// void osgText::TextBase::computePositions(unsigned int contextID) const
	void computePositions(unsigned int contextID) const {
		THROW_IF(!_obj.pushFunction("computePositions"),"No implementation for abstract function osgText::TextBase::computePositions");
		_obj.pushArg(contextID);
		return (_obj.callFunction<void>());
	};

	// void osgText::TextBase::computeGlyphRepresentation()
	void computeGlyphRepresentation() {
		THROW_IF(!_obj.pushFunction("computeGlyphRepresentation"),"No implementation for abstract function osgText::TextBase::computeGlyphRepresentation");
		return (_obj.callFunction<void>());
	};


};




#endif

