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
	
	wrapper_osgText_FadeText(lua_State* L, lua_Table* dum) : osgText::FadeText(), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osgText_FadeText(lua_State* L, lua_Table* dum, const osgText::Text & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgText::FadeText(text, copyop), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:
protected:
	// Protected virtual methods:
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

public:
	// Public virtual methods:
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


	// Protected non-virtual methods:
	// void osgText::FadeText::init()
	void public_init() {
		return osgText::FadeText::init();
	};

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

	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_getActiveFont_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_getActiveFont_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_computeAverageGlyphWidthAndHeight(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_computeBackdropPositions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_computeBackdropBoundingBox(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_computeBoundingBoxMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_computeColorGradients(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_computeColorGradientsOverall(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_computeColorGradientsPerCharacter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_drawForegroundText(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,89190250) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_drawTextWithBackdrop(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_renderOnlyForegroundText(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_renderWithPolygonOffset(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_renderWithNoDepthBuffer(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_renderWithDepthRange(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_renderWithStencilBuffer(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_renderWithDelayedDepthWrites(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_bilinearInterpolate(lua_State *L) {
		if( lua_gettop(L)!=11 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		if( lua_isnumber(L,8)==0 ) return false;
		if( lua_isnumber(L,9)==0 ) return false;
		if( lua_isnumber(L,10)==0 ) return false;
		if( lua_isnumber(L,11)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_positionCursor(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303173) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_computePositions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_setBound(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,82744897) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_addParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_removeParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_setNumChildrenRequiringUpdateTraversal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_getNumChildrenRequiringUpdateTraversal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_setNumChildrenRequiringEventTraversal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_getNumChildrenRequiringEventTraversal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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


	// Protected non-virtual function binds:
	// void osgText::FadeText::public_init()
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::FadeText::public_init() function, expected prototype:\nvoid osgText::FadeText::public_init()\nClass arguments details:\n");
		}


		wrapper_osgText_FadeText* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_FadeText >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::FadeText::public_init()");
		}
		self->public_init();

		return 0;
	}

	// osgText::Font * osgText::Text::public_getActiveFont()
	static int _bind_public_getActiveFont_overload_1(lua_State *L) {
		if (!_lg_typecheck_public_getActiveFont_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Font * osgText::Text::public_getActiveFont() function, expected prototype:\nosgText::Font * osgText::Text::public_getActiveFont()\nClass arguments details:\n");
		}


		wrapper_osgText_FadeText* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_FadeText >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::Font * osgText::Text::public_getActiveFont()");
		}
		osgText::Font * lret = self->public_getActiveFont();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Font >::push(L,lret,false);

		return 1;
	}

	// const osgText::Font * osgText::Text::public_getActiveFont() const
	static int _bind_public_getActiveFont_overload_2(lua_State *L) {
		if (!_lg_typecheck_public_getActiveFont_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgText::Font * osgText::Text::public_getActiveFont() const function, expected prototype:\nconst osgText::Font * osgText::Text::public_getActiveFont() const\nClass arguments details:\n");
		}


		wrapper_osgText_FadeText* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_FadeText >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgText::Font * osgText::Text::public_getActiveFont() const");
		}
		const osgText::Font * lret = self->public_getActiveFont();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Font >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::Text::public_getActiveFont
	static int _bind_public_getActiveFont(lua_State *L) {
		if (_lg_typecheck_public_getActiveFont_overload_1(L)) return _bind_public_getActiveFont_overload_1(L);
		if (_lg_typecheck_public_getActiveFont_overload_2(L)) return _bind_public_getActiveFont_overload_2(L);

		luaL_error(L, "error in function public_getActiveFont, cannot match any of the overloads for function public_getActiveFont:\n  public_getActiveFont()\n  public_getActiveFont()\n");
		return 0;
	}

	// bool osgText::Text::public_computeAverageGlyphWidthAndHeight(float & avg_width, float & avg_height) const
	static int _bind_public_computeAverageGlyphWidthAndHeight(lua_State *L) {
		if (!_lg_typecheck_public_computeAverageGlyphWidthAndHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgText::Text::public_computeAverageGlyphWidthAndHeight(float & avg_width, float & avg_height) const function, expected prototype:\nbool osgText::Text::public_computeAverageGlyphWidthAndHeight(float & avg_width, float & avg_height) const\nClass arguments details:\n");
		}

		float avg_width=(float)lua_tonumber(L,2);
		float avg_height=(float)lua_tonumber(L,3);

		wrapper_osgText_FadeText* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_FadeText >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgText::Text::public_computeAverageGlyphWidthAndHeight(float &, float &) const");
		}
		bool lret = self->public_computeAverageGlyphWidthAndHeight(avg_width, avg_height);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgText::Text::public_computeBackdropPositions(unsigned int contextID) const
	static int _bind_public_computeBackdropPositions(lua_State *L) {
		if (!_lg_typecheck_public_computeBackdropPositions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::public_computeBackdropPositions(unsigned int contextID) const function, expected prototype:\nvoid osgText::Text::public_computeBackdropPositions(unsigned int contextID) const\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		wrapper_osgText_FadeText* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_FadeText >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::public_computeBackdropPositions(unsigned int) const");
		}
		self->public_computeBackdropPositions(contextID);

		return 0;
	}

	// void osgText::Text::public_computeBackdropBoundingBox() const
	static int _bind_public_computeBackdropBoundingBox(lua_State *L) {
		if (!_lg_typecheck_public_computeBackdropBoundingBox(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::public_computeBackdropBoundingBox() const function, expected prototype:\nvoid osgText::Text::public_computeBackdropBoundingBox() const\nClass arguments details:\n");
		}


		wrapper_osgText_FadeText* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_FadeText >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::public_computeBackdropBoundingBox() const");
		}
		self->public_computeBackdropBoundingBox();

		return 0;
	}

	// void osgText::Text::public_computeBoundingBoxMargin() const
	static int _bind_public_computeBoundingBoxMargin(lua_State *L) {
		if (!_lg_typecheck_public_computeBoundingBoxMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::public_computeBoundingBoxMargin() const function, expected prototype:\nvoid osgText::Text::public_computeBoundingBoxMargin() const\nClass arguments details:\n");
		}


		wrapper_osgText_FadeText* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_FadeText >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::public_computeBoundingBoxMargin() const");
		}
		self->public_computeBoundingBoxMargin();

		return 0;
	}

	// void osgText::Text::public_computeColorGradients() const
	static int _bind_public_computeColorGradients(lua_State *L) {
		if (!_lg_typecheck_public_computeColorGradients(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::public_computeColorGradients() const function, expected prototype:\nvoid osgText::Text::public_computeColorGradients() const\nClass arguments details:\n");
		}


		wrapper_osgText_FadeText* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_FadeText >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::public_computeColorGradients() const");
		}
		self->public_computeColorGradients();

		return 0;
	}

	// void osgText::Text::public_computeColorGradientsOverall() const
	static int _bind_public_computeColorGradientsOverall(lua_State *L) {
		if (!_lg_typecheck_public_computeColorGradientsOverall(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::public_computeColorGradientsOverall() const function, expected prototype:\nvoid osgText::Text::public_computeColorGradientsOverall() const\nClass arguments details:\n");
		}


		wrapper_osgText_FadeText* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_FadeText >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::public_computeColorGradientsOverall() const");
		}
		self->public_computeColorGradientsOverall();

		return 0;
	}

	// void osgText::Text::public_computeColorGradientsPerCharacter() const
	static int _bind_public_computeColorGradientsPerCharacter(lua_State *L) {
		if (!_lg_typecheck_public_computeColorGradientsPerCharacter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::public_computeColorGradientsPerCharacter() const function, expected prototype:\nvoid osgText::Text::public_computeColorGradientsPerCharacter() const\nClass arguments details:\n");
		}


		wrapper_osgText_FadeText* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_FadeText >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::public_computeColorGradientsPerCharacter() const");
		}
		self->public_computeColorGradientsPerCharacter();

		return 0;
	}

	// void osgText::Text::public_drawImplementation(osg::State & state, const osg::Vec4f & colorMultiplier) const
	static int _bind_public_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_public_drawImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::public_drawImplementation(osg::State & state, const osg::Vec4f & colorMultiplier) const function, expected prototype:\nvoid osgText::Text::public_drawImplementation(osg::State & state, const osg::Vec4f & colorMultiplier) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 92303235\n");
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osgText::Text::public_drawImplementation function");
		}
		osg::State & state=*state_ptr;
		const osg::Vec4f* colorMultiplier_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !colorMultiplier_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colorMultiplier in osgText::Text::public_drawImplementation function");
		}
		const osg::Vec4f & colorMultiplier=*colorMultiplier_ptr;

		wrapper_osgText_FadeText* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_FadeText >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::public_drawImplementation(osg::State &, const osg::Vec4f &) const");
		}
		self->public_drawImplementation(state, colorMultiplier);

		return 0;
	}

	// void osgText::Text::public_drawForegroundText(osg::State & state, const osgText::Text::GlyphQuads & glyphquad, const osg::Vec4f & colorMultiplier) const
	static int _bind_public_drawForegroundText(lua_State *L) {
		if (!_lg_typecheck_public_drawForegroundText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::public_drawForegroundText(osg::State & state, const osgText::Text::GlyphQuads & glyphquad, const osg::Vec4f & colorMultiplier) const function, expected prototype:\nvoid osgText::Text::public_drawForegroundText(osg::State & state, const osgText::Text::GlyphQuads & glyphquad, const osg::Vec4f & colorMultiplier) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 89190250\narg 3 ID = 92303235\n");
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osgText::Text::public_drawForegroundText function");
		}
		osg::State & state=*state_ptr;
		const osgText::Text::GlyphQuads* glyphquad_ptr=(Luna< osgText::Text::GlyphQuads >::check(L,3));
		if( !glyphquad_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg glyphquad in osgText::Text::public_drawForegroundText function");
		}
		const osgText::Text::GlyphQuads & glyphquad=*glyphquad_ptr;
		const osg::Vec4f* colorMultiplier_ptr=(Luna< osg::Vec4f >::check(L,4));
		if( !colorMultiplier_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colorMultiplier in osgText::Text::public_drawForegroundText function");
		}
		const osg::Vec4f & colorMultiplier=*colorMultiplier_ptr;

		wrapper_osgText_FadeText* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_FadeText >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::public_drawForegroundText(osg::State &, const osgText::Text::GlyphQuads &, const osg::Vec4f &) const");
		}
		self->public_drawForegroundText(state, glyphquad, colorMultiplier);

		return 0;
	}

	// void osgText::Text::public_drawTextWithBackdrop(osg::State & state, const osg::Vec4f & colorMultiplier) const
	static int _bind_public_drawTextWithBackdrop(lua_State *L) {
		if (!_lg_typecheck_public_drawTextWithBackdrop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::public_drawTextWithBackdrop(osg::State & state, const osg::Vec4f & colorMultiplier) const function, expected prototype:\nvoid osgText::Text::public_drawTextWithBackdrop(osg::State & state, const osg::Vec4f & colorMultiplier) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 92303235\n");
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osgText::Text::public_drawTextWithBackdrop function");
		}
		osg::State & state=*state_ptr;
		const osg::Vec4f* colorMultiplier_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !colorMultiplier_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colorMultiplier in osgText::Text::public_drawTextWithBackdrop function");
		}
		const osg::Vec4f & colorMultiplier=*colorMultiplier_ptr;

		wrapper_osgText_FadeText* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_FadeText >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::public_drawTextWithBackdrop(osg::State &, const osg::Vec4f &) const");
		}
		self->public_drawTextWithBackdrop(state, colorMultiplier);

		return 0;
	}

	// void osgText::Text::public_renderOnlyForegroundText(osg::State & state, const osg::Vec4f & colorMultiplier) const
	static int _bind_public_renderOnlyForegroundText(lua_State *L) {
		if (!_lg_typecheck_public_renderOnlyForegroundText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::public_renderOnlyForegroundText(osg::State & state, const osg::Vec4f & colorMultiplier) const function, expected prototype:\nvoid osgText::Text::public_renderOnlyForegroundText(osg::State & state, const osg::Vec4f & colorMultiplier) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 92303235\n");
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osgText::Text::public_renderOnlyForegroundText function");
		}
		osg::State & state=*state_ptr;
		const osg::Vec4f* colorMultiplier_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !colorMultiplier_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colorMultiplier in osgText::Text::public_renderOnlyForegroundText function");
		}
		const osg::Vec4f & colorMultiplier=*colorMultiplier_ptr;

		wrapper_osgText_FadeText* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_FadeText >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::public_renderOnlyForegroundText(osg::State &, const osg::Vec4f &) const");
		}
		self->public_renderOnlyForegroundText(state, colorMultiplier);

		return 0;
	}

	// void osgText::Text::public_renderWithPolygonOffset(osg::State & state, const osg::Vec4f & colorMultiplier) const
	static int _bind_public_renderWithPolygonOffset(lua_State *L) {
		if (!_lg_typecheck_public_renderWithPolygonOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::public_renderWithPolygonOffset(osg::State & state, const osg::Vec4f & colorMultiplier) const function, expected prototype:\nvoid osgText::Text::public_renderWithPolygonOffset(osg::State & state, const osg::Vec4f & colorMultiplier) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 92303235\n");
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osgText::Text::public_renderWithPolygonOffset function");
		}
		osg::State & state=*state_ptr;
		const osg::Vec4f* colorMultiplier_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !colorMultiplier_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colorMultiplier in osgText::Text::public_renderWithPolygonOffset function");
		}
		const osg::Vec4f & colorMultiplier=*colorMultiplier_ptr;

		wrapper_osgText_FadeText* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_FadeText >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::public_renderWithPolygonOffset(osg::State &, const osg::Vec4f &) const");
		}
		self->public_renderWithPolygonOffset(state, colorMultiplier);

		return 0;
	}

	// void osgText::Text::public_renderWithNoDepthBuffer(osg::State & state, const osg::Vec4f & colorMultiplier) const
	static int _bind_public_renderWithNoDepthBuffer(lua_State *L) {
		if (!_lg_typecheck_public_renderWithNoDepthBuffer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::public_renderWithNoDepthBuffer(osg::State & state, const osg::Vec4f & colorMultiplier) const function, expected prototype:\nvoid osgText::Text::public_renderWithNoDepthBuffer(osg::State & state, const osg::Vec4f & colorMultiplier) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 92303235\n");
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osgText::Text::public_renderWithNoDepthBuffer function");
		}
		osg::State & state=*state_ptr;
		const osg::Vec4f* colorMultiplier_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !colorMultiplier_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colorMultiplier in osgText::Text::public_renderWithNoDepthBuffer function");
		}
		const osg::Vec4f & colorMultiplier=*colorMultiplier_ptr;

		wrapper_osgText_FadeText* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_FadeText >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::public_renderWithNoDepthBuffer(osg::State &, const osg::Vec4f &) const");
		}
		self->public_renderWithNoDepthBuffer(state, colorMultiplier);

		return 0;
	}

	// void osgText::Text::public_renderWithDepthRange(osg::State & state, const osg::Vec4f & colorMultiplier) const
	static int _bind_public_renderWithDepthRange(lua_State *L) {
		if (!_lg_typecheck_public_renderWithDepthRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::public_renderWithDepthRange(osg::State & state, const osg::Vec4f & colorMultiplier) const function, expected prototype:\nvoid osgText::Text::public_renderWithDepthRange(osg::State & state, const osg::Vec4f & colorMultiplier) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 92303235\n");
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osgText::Text::public_renderWithDepthRange function");
		}
		osg::State & state=*state_ptr;
		const osg::Vec4f* colorMultiplier_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !colorMultiplier_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colorMultiplier in osgText::Text::public_renderWithDepthRange function");
		}
		const osg::Vec4f & colorMultiplier=*colorMultiplier_ptr;

		wrapper_osgText_FadeText* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_FadeText >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::public_renderWithDepthRange(osg::State &, const osg::Vec4f &) const");
		}
		self->public_renderWithDepthRange(state, colorMultiplier);

		return 0;
	}

	// void osgText::Text::public_renderWithStencilBuffer(osg::State & state, const osg::Vec4f & colorMultiplier) const
	static int _bind_public_renderWithStencilBuffer(lua_State *L) {
		if (!_lg_typecheck_public_renderWithStencilBuffer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::public_renderWithStencilBuffer(osg::State & state, const osg::Vec4f & colorMultiplier) const function, expected prototype:\nvoid osgText::Text::public_renderWithStencilBuffer(osg::State & state, const osg::Vec4f & colorMultiplier) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 92303235\n");
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osgText::Text::public_renderWithStencilBuffer function");
		}
		osg::State & state=*state_ptr;
		const osg::Vec4f* colorMultiplier_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !colorMultiplier_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colorMultiplier in osgText::Text::public_renderWithStencilBuffer function");
		}
		const osg::Vec4f & colorMultiplier=*colorMultiplier_ptr;

		wrapper_osgText_FadeText* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_FadeText >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::public_renderWithStencilBuffer(osg::State &, const osg::Vec4f &) const");
		}
		self->public_renderWithStencilBuffer(state, colorMultiplier);

		return 0;
	}

	// void osgText::Text::public_renderWithDelayedDepthWrites(osg::State & state, const osg::Vec4f & colorMultiplier) const
	static int _bind_public_renderWithDelayedDepthWrites(lua_State *L) {
		if (!_lg_typecheck_public_renderWithDelayedDepthWrites(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::public_renderWithDelayedDepthWrites(osg::State & state, const osg::Vec4f & colorMultiplier) const function, expected prototype:\nvoid osgText::Text::public_renderWithDelayedDepthWrites(osg::State & state, const osg::Vec4f & colorMultiplier) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 92303235\n");
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osgText::Text::public_renderWithDelayedDepthWrites function");
		}
		osg::State & state=*state_ptr;
		const osg::Vec4f* colorMultiplier_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !colorMultiplier_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colorMultiplier in osgText::Text::public_renderWithDelayedDepthWrites function");
		}
		const osg::Vec4f & colorMultiplier=*colorMultiplier_ptr;

		wrapper_osgText_FadeText* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_FadeText >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::public_renderWithDelayedDepthWrites(osg::State &, const osg::Vec4f &) const");
		}
		self->public_renderWithDelayedDepthWrites(state, colorMultiplier);

		return 0;
	}

	// float osgText::Text::public_bilinearInterpolate(float x1, float x2, float y1, float y2, float x, float y, float q11, float q12, float q21, float q22) const
	static int _bind_public_bilinearInterpolate(lua_State *L) {
		if (!_lg_typecheck_public_bilinearInterpolate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgText::Text::public_bilinearInterpolate(float x1, float x2, float y1, float y2, float x, float y, float q11, float q12, float q21, float q22) const function, expected prototype:\nfloat osgText::Text::public_bilinearInterpolate(float x1, float x2, float y1, float y2, float x, float y, float q11, float q12, float q21, float q22) const\nClass arguments details:\n");
		}

		float x1=(float)lua_tonumber(L,2);
		float x2=(float)lua_tonumber(L,3);
		float y1=(float)lua_tonumber(L,4);
		float y2=(float)lua_tonumber(L,5);
		float x=(float)lua_tonumber(L,6);
		float y=(float)lua_tonumber(L,7);
		float q11=(float)lua_tonumber(L,8);
		float q12=(float)lua_tonumber(L,9);
		float q21=(float)lua_tonumber(L,10);
		float q22=(float)lua_tonumber(L,11);

		wrapper_osgText_FadeText* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_FadeText >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgText::Text::public_bilinearInterpolate(float, float, float, float, float, float, float, float, float, float) const");
		}
		float lret = self->public_bilinearInterpolate(x1, x2, y1, y2, x, y, q11, q12, q21, q22);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::TextBase::public_positionCursor(const osg::Vec2f & endOfLine_coords, osg::Vec2f & cursor, unsigned int linelength)
	static int _bind_public_positionCursor(lua_State *L) {
		if (!_lg_typecheck_public_positionCursor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::public_positionCursor(const osg::Vec2f & endOfLine_coords, osg::Vec2f & cursor, unsigned int linelength) function, expected prototype:\nvoid osgText::TextBase::public_positionCursor(const osg::Vec2f & endOfLine_coords, osg::Vec2f & cursor, unsigned int linelength)\nClass arguments details:\narg 1 ID = 92303173\narg 2 ID = 92303173\n");
		}

		const osg::Vec2f* endOfLine_coords_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !endOfLine_coords_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg endOfLine_coords in osgText::TextBase::public_positionCursor function");
		}
		const osg::Vec2f & endOfLine_coords=*endOfLine_coords_ptr;
		osg::Vec2f* cursor_ptr=(Luna< osg::Vec2f >::check(L,3));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in osgText::TextBase::public_positionCursor function");
		}
		osg::Vec2f & cursor=*cursor_ptr;
		unsigned int linelength=(unsigned int)lua_tointeger(L,4);

		wrapper_osgText_FadeText* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_FadeText >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::TextBase::public_positionCursor(const osg::Vec2f &, osg::Vec2f &, unsigned int)");
		}
		self->public_positionCursor(endOfLine_coords, cursor, linelength);

		return 0;
	}

	// void osgText::TextBase::public_computePositions()
	static int _bind_public_computePositions(lua_State *L) {
		if (!_lg_typecheck_public_computePositions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::public_computePositions() function, expected prototype:\nvoid osgText::TextBase::public_computePositions()\nClass arguments details:\n");
		}


		wrapper_osgText_FadeText* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_FadeText >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::TextBase::public_computePositions()");
		}
		self->public_computePositions();

		return 0;
	}

	// void osg::Drawable::public_setBound(const osg::BoundingBoxd & bb) const
	static int _bind_public_setBound(lua_State *L) {
		if (!_lg_typecheck_public_setBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::public_setBound(const osg::BoundingBoxd & bb) const function, expected prototype:\nvoid osg::Drawable::public_setBound(const osg::BoundingBoxd & bb) const\nClass arguments details:\narg 1 ID = 82744897\n");
		}

		const osg::BoundingBoxd* bb_ptr=(Luna< osg::BoundingBoxd >::check(L,2));
		if( !bb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bb in osg::Drawable::public_setBound function");
		}
		const osg::BoundingBoxd & bb=*bb_ptr;

		wrapper_osgText_FadeText* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_FadeText >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::public_setBound(const osg::BoundingBoxd &) const");
		}
		self->public_setBound(bb);

		return 0;
	}

	// void osg::Drawable::public_addParent(osg::Node * node)
	static int _bind_public_addParent(lua_State *L) {
		if (!_lg_typecheck_public_addParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::public_addParent(osg::Node * node) function, expected prototype:\nvoid osg::Drawable::public_addParent(osg::Node * node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		wrapper_osgText_FadeText* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_FadeText >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::public_addParent(osg::Node *)");
		}
		self->public_addParent(node);

		return 0;
	}

	// void osg::Drawable::public_removeParent(osg::Node * node)
	static int _bind_public_removeParent(lua_State *L) {
		if (!_lg_typecheck_public_removeParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::public_removeParent(osg::Node * node) function, expected prototype:\nvoid osg::Drawable::public_removeParent(osg::Node * node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		wrapper_osgText_FadeText* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_FadeText >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::public_removeParent(osg::Node *)");
		}
		self->public_removeParent(node);

		return 0;
	}

	// void osg::Drawable::public_setNumChildrenRequiringUpdateTraversal(unsigned int num)
	static int _bind_public_setNumChildrenRequiringUpdateTraversal(lua_State *L) {
		if (!_lg_typecheck_public_setNumChildrenRequiringUpdateTraversal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::public_setNumChildrenRequiringUpdateTraversal(unsigned int num) function, expected prototype:\nvoid osg::Drawable::public_setNumChildrenRequiringUpdateTraversal(unsigned int num)\nClass arguments details:\n");
		}

		unsigned int num=(unsigned int)lua_tointeger(L,2);

		wrapper_osgText_FadeText* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_FadeText >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::public_setNumChildrenRequiringUpdateTraversal(unsigned int)");
		}
		self->public_setNumChildrenRequiringUpdateTraversal(num);

		return 0;
	}

	// unsigned int osg::Drawable::public_getNumChildrenRequiringUpdateTraversal() const
	static int _bind_public_getNumChildrenRequiringUpdateTraversal(lua_State *L) {
		if (!_lg_typecheck_public_getNumChildrenRequiringUpdateTraversal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Drawable::public_getNumChildrenRequiringUpdateTraversal() const function, expected prototype:\nunsigned int osg::Drawable::public_getNumChildrenRequiringUpdateTraversal() const\nClass arguments details:\n");
		}


		wrapper_osgText_FadeText* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_FadeText >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Drawable::public_getNumChildrenRequiringUpdateTraversal() const");
		}
		unsigned int lret = self->public_getNumChildrenRequiringUpdateTraversal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Drawable::public_setNumChildrenRequiringEventTraversal(unsigned int num)
	static int _bind_public_setNumChildrenRequiringEventTraversal(lua_State *L) {
		if (!_lg_typecheck_public_setNumChildrenRequiringEventTraversal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::public_setNumChildrenRequiringEventTraversal(unsigned int num) function, expected prototype:\nvoid osg::Drawable::public_setNumChildrenRequiringEventTraversal(unsigned int num)\nClass arguments details:\n");
		}

		unsigned int num=(unsigned int)lua_tointeger(L,2);

		wrapper_osgText_FadeText* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_FadeText >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::public_setNumChildrenRequiringEventTraversal(unsigned int)");
		}
		self->public_setNumChildrenRequiringEventTraversal(num);

		return 0;
	}

	// unsigned int osg::Drawable::public_getNumChildrenRequiringEventTraversal() const
	static int _bind_public_getNumChildrenRequiringEventTraversal(lua_State *L) {
		if (!_lg_typecheck_public_getNumChildrenRequiringEventTraversal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Drawable::public_getNumChildrenRequiringEventTraversal() const function, expected prototype:\nunsigned int osg::Drawable::public_getNumChildrenRequiringEventTraversal() const\nClass arguments details:\n");
		}


		wrapper_osgText_FadeText* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_FadeText >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Drawable::public_getNumChildrenRequiringEventTraversal() const");
		}
		unsigned int lret = self->public_getNumChildrenRequiringEventTraversal();
		lua_pushnumber(L,lret);

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

		wrapper_osgText_FadeText* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_FadeText >(L,1);
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


		wrapper_osgText_FadeText* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_FadeText >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const");
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_init",_bind_public_init},
		{"protected_getActiveFont",_bind_public_getActiveFont},
		{"protected_getActiveFont",_bind_public_getActiveFont},
		{"protected_computeAverageGlyphWidthAndHeight",_bind_public_computeAverageGlyphWidthAndHeight},
		{"protected_computeBackdropPositions",_bind_public_computeBackdropPositions},
		{"protected_computeBackdropBoundingBox",_bind_public_computeBackdropBoundingBox},
		{"protected_computeBoundingBoxMargin",_bind_public_computeBoundingBoxMargin},
		{"protected_computeColorGradients",_bind_public_computeColorGradients},
		{"protected_computeColorGradientsOverall",_bind_public_computeColorGradientsOverall},
		{"protected_computeColorGradientsPerCharacter",_bind_public_computeColorGradientsPerCharacter},
		{"protected_drawImplementation",_bind_public_drawImplementation},
		{"protected_drawForegroundText",_bind_public_drawForegroundText},
		{"protected_drawTextWithBackdrop",_bind_public_drawTextWithBackdrop},
		{"protected_renderOnlyForegroundText",_bind_public_renderOnlyForegroundText},
		{"protected_renderWithPolygonOffset",_bind_public_renderWithPolygonOffset},
		{"protected_renderWithNoDepthBuffer",_bind_public_renderWithNoDepthBuffer},
		{"protected_renderWithDepthRange",_bind_public_renderWithDepthRange},
		{"protected_renderWithStencilBuffer",_bind_public_renderWithStencilBuffer},
		{"protected_renderWithDelayedDepthWrites",_bind_public_renderWithDelayedDepthWrites},
		{"protected_bilinearInterpolate",_bind_public_bilinearInterpolate},
		{"protected_positionCursor",_bind_public_positionCursor},
		{"protected_computePositions",_bind_public_computePositions},
		{"protected_setBound",_bind_public_setBound},
		{"protected_addParent",_bind_public_addParent},
		{"protected_removeParent",_bind_public_removeParent},
		{"protected_setNumChildrenRequiringUpdateTraversal",_bind_public_setNumChildrenRequiringUpdateTraversal},
		{"protected_getNumChildrenRequiringUpdateTraversal",_bind_public_getNumChildrenRequiringUpdateTraversal},
		{"protected_setNumChildrenRequiringEventTraversal",_bind_public_setNumChildrenRequiringEventTraversal},
		{"protected_getNumChildrenRequiringEventTraversal",_bind_public_getNumChildrenRequiringEventTraversal},
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

