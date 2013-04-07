#ifndef _WRAPPERS_WRAPPER_B_DRAW_H_
#define _WRAPPERS_WRAPPER_B_DRAW_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <Box2D/Common/b2Draw.h>

class wrapper_b2Draw : public b2Draw, public luna_wrapper_base {

public:
		

	~wrapper_b2Draw() {
		logDEBUG3("Calling delete function for wrapper b2Draw");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((b2Draw*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_b2Draw(lua_State* L, lua_Table* dum) 
		: b2Draw(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((b2Draw*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void b2Draw::DrawPolygon(const b2Vec2 * vertices, signed int vertexCount, const b2Color & color)
	void DrawPolygon(const b2Vec2 * vertices, signed int vertexCount, const b2Color & color) {
		THROW_IF(!_obj.pushFunction("DrawPolygon"),"No implementation for abstract function b2Draw::DrawPolygon");
		_obj.pushArg((b2Draw*)this);
		_obj.pushArg(vertices);
		_obj.pushArg(vertexCount);
		_obj.pushArg(&color);
		return (_obj.callFunction<void>());
	};

	// void b2Draw::DrawSolidPolygon(const b2Vec2 * vertices, signed int vertexCount, const b2Color & color)
	void DrawSolidPolygon(const b2Vec2 * vertices, signed int vertexCount, const b2Color & color) {
		THROW_IF(!_obj.pushFunction("DrawSolidPolygon"),"No implementation for abstract function b2Draw::DrawSolidPolygon");
		_obj.pushArg((b2Draw*)this);
		_obj.pushArg(vertices);
		_obj.pushArg(vertexCount);
		_obj.pushArg(&color);
		return (_obj.callFunction<void>());
	};

	// void b2Draw::DrawCircle(const b2Vec2 & center, float radius, const b2Color & color)
	void DrawCircle(const b2Vec2 & center, float radius, const b2Color & color) {
		THROW_IF(!_obj.pushFunction("DrawCircle"),"No implementation for abstract function b2Draw::DrawCircle");
		_obj.pushArg((b2Draw*)this);
		_obj.pushArg(&center);
		_obj.pushArg(radius);
		_obj.pushArg(&color);
		return (_obj.callFunction<void>());
	};

	// void b2Draw::DrawSolidCircle(const b2Vec2 & center, float radius, const b2Vec2 & axis, const b2Color & color)
	void DrawSolidCircle(const b2Vec2 & center, float radius, const b2Vec2 & axis, const b2Color & color) {
		THROW_IF(!_obj.pushFunction("DrawSolidCircle"),"No implementation for abstract function b2Draw::DrawSolidCircle");
		_obj.pushArg((b2Draw*)this);
		_obj.pushArg(&center);
		_obj.pushArg(radius);
		_obj.pushArg(&axis);
		_obj.pushArg(&color);
		return (_obj.callFunction<void>());
	};

	// void b2Draw::DrawSegment(const b2Vec2 & p1, const b2Vec2 & p2, const b2Color & color)
	void DrawSegment(const b2Vec2 & p1, const b2Vec2 & p2, const b2Color & color) {
		THROW_IF(!_obj.pushFunction("DrawSegment"),"No implementation for abstract function b2Draw::DrawSegment");
		_obj.pushArg((b2Draw*)this);
		_obj.pushArg(&p1);
		_obj.pushArg(&p2);
		_obj.pushArg(&color);
		return (_obj.callFunction<void>());
	};

	// void b2Draw::DrawTransform(const b2Transform & xf)
	void DrawTransform(const b2Transform & xf) {
		THROW_IF(!_obj.pushFunction("DrawTransform"),"No implementation for abstract function b2Draw::DrawTransform");
		_obj.pushArg((b2Draw*)this);
		_obj.pushArg(&xf);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

