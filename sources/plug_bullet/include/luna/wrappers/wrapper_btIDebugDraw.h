#ifndef _WRAPPERS_WRAPPER_BTIDEBUGDRAW_H_
#define _WRAPPERS_WRAPPER_BTIDEBUGDRAW_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <LinearMath/btIDebugDraw.h>

class wrapper_btIDebugDraw : public btIDebugDraw, public luna_wrapper_base {

public:
		

	~wrapper_btIDebugDraw() {
		logDEBUG3("Calling delete function for wrapper btIDebugDraw");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btIDebugDraw*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btIDebugDraw(lua_State* L, lua_Table* dum) 
		: btIDebugDraw(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btIDebugDraw*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btIDebugDraw::drawLine(const btVector3 & from, const btVector3 & to, const btVector3 & color)
	void drawLine(const btVector3 & from, const btVector3 & to, const btVector3 & color) {
		THROW_IF(!_obj.pushFunction("drawLine"),"No implementation for abstract function btIDebugDraw::drawLine");
		_obj.pushArg((btIDebugDraw*)this);
		_obj.pushArg(&from);
		_obj.pushArg(&to);
		_obj.pushArg(&color);
		return (_obj.callFunction<void>());
	};

	// void btIDebugDraw::drawLine(const btVector3 & from, const btVector3 & to, const btVector3 & fromColor, const btVector3 & toColor)
	void drawLine(const btVector3 & from, const btVector3 & to, const btVector3 & fromColor, const btVector3 & toColor) {
		if(_obj.pushFunction("drawLine")) {
			_obj.pushArg((btIDebugDraw*)this);
			_obj.pushArg(&from);
			_obj.pushArg(&to);
			_obj.pushArg(&fromColor);
			_obj.pushArg(&toColor);
			return (_obj.callFunction<void>());
		}

		return btIDebugDraw::drawLine(from, to, fromColor, toColor);
	};

	// void btIDebugDraw::drawSphere(float radius, const btTransform & transform, const btVector3 & color)
	void drawSphere(float radius, const btTransform & transform, const btVector3 & color) {
		if(_obj.pushFunction("drawSphere")) {
			_obj.pushArg((btIDebugDraw*)this);
			_obj.pushArg(radius);
			_obj.pushArg(&transform);
			_obj.pushArg(&color);
			return (_obj.callFunction<void>());
		}

		return btIDebugDraw::drawSphere(radius, transform, color);
	};

	// void btIDebugDraw::drawSphere(const btVector3 & p, float radius, const btVector3 & color)
	void drawSphere(const btVector3 & p, float radius, const btVector3 & color) {
		if(_obj.pushFunction("drawSphere")) {
			_obj.pushArg((btIDebugDraw*)this);
			_obj.pushArg(&p);
			_obj.pushArg(radius);
			_obj.pushArg(&color);
			return (_obj.callFunction<void>());
		}

		return btIDebugDraw::drawSphere(p, radius, color);
	};

	// void btIDebugDraw::drawTriangle(const btVector3 & v0, const btVector3 & v1, const btVector3 & v2, const btVector3 & arg4, const btVector3 & arg5, const btVector3 & arg6, const btVector3 & color, float alpha)
	void drawTriangle(const btVector3 & v0, const btVector3 & v1, const btVector3 & v2, const btVector3 & arg4, const btVector3 & arg5, const btVector3 & arg6, const btVector3 & color, float alpha) {
		if(_obj.pushFunction("drawTriangle")) {
			_obj.pushArg((btIDebugDraw*)this);
			_obj.pushArg(&v0);
			_obj.pushArg(&v1);
			_obj.pushArg(&v2);
			_obj.pushArg(&arg4);
			_obj.pushArg(&arg5);
			_obj.pushArg(&arg6);
			_obj.pushArg(&color);
			_obj.pushArg(alpha);
			return (_obj.callFunction<void>());
		}

		return btIDebugDraw::drawTriangle(v0, v1, v2, arg4, arg5, arg6, color, alpha);
	};

	// void btIDebugDraw::drawTriangle(const btVector3 & v0, const btVector3 & v1, const btVector3 & v2, const btVector3 & color, float arg5)
	void drawTriangle(const btVector3 & v0, const btVector3 & v1, const btVector3 & v2, const btVector3 & color, float arg5) {
		if(_obj.pushFunction("drawTriangle")) {
			_obj.pushArg((btIDebugDraw*)this);
			_obj.pushArg(&v0);
			_obj.pushArg(&v1);
			_obj.pushArg(&v2);
			_obj.pushArg(&color);
			_obj.pushArg(arg5);
			return (_obj.callFunction<void>());
		}

		return btIDebugDraw::drawTriangle(v0, v1, v2, color, arg5);
	};

	// void btIDebugDraw::drawContactPoint(const btVector3 & PointOnB, const btVector3 & normalOnB, float distance, int lifeTime, const btVector3 & color)
	void drawContactPoint(const btVector3 & PointOnB, const btVector3 & normalOnB, float distance, int lifeTime, const btVector3 & color) {
		THROW_IF(!_obj.pushFunction("drawContactPoint"),"No implementation for abstract function btIDebugDraw::drawContactPoint");
		_obj.pushArg((btIDebugDraw*)this);
		_obj.pushArg(&PointOnB);
		_obj.pushArg(&normalOnB);
		_obj.pushArg(distance);
		_obj.pushArg(lifeTime);
		_obj.pushArg(&color);
		return (_obj.callFunction<void>());
	};

	// void btIDebugDraw::reportErrorWarning(const char * warningString)
	void reportErrorWarning(const char * warningString) {
		THROW_IF(!_obj.pushFunction("reportErrorWarning"),"No implementation for abstract function btIDebugDraw::reportErrorWarning");
		_obj.pushArg((btIDebugDraw*)this);
		_obj.pushArg(warningString);
		return (_obj.callFunction<void>());
	};

	// void btIDebugDraw::draw3dText(const btVector3 & location, const char * textString)
	void draw3dText(const btVector3 & location, const char * textString) {
		THROW_IF(!_obj.pushFunction("draw3dText"),"No implementation for abstract function btIDebugDraw::draw3dText");
		_obj.pushArg((btIDebugDraw*)this);
		_obj.pushArg(&location);
		_obj.pushArg(textString);
		return (_obj.callFunction<void>());
	};

	// void btIDebugDraw::setDebugMode(int debugMode)
	void setDebugMode(int debugMode) {
		THROW_IF(!_obj.pushFunction("setDebugMode"),"No implementation for abstract function btIDebugDraw::setDebugMode");
		_obj.pushArg((btIDebugDraw*)this);
		_obj.pushArg(debugMode);
		return (_obj.callFunction<void>());
	};

	// int btIDebugDraw::getDebugMode() const
	int getDebugMode() const {
		THROW_IF(!_obj.pushFunction("getDebugMode"),"No implementation for abstract function btIDebugDraw::getDebugMode");
		_obj.pushArg((btIDebugDraw*)this);
		return (_obj.callFunction<int>());
	};

	// void btIDebugDraw::drawAabb(const btVector3 & from, const btVector3 & to, const btVector3 & color)
	void drawAabb(const btVector3 & from, const btVector3 & to, const btVector3 & color) {
		if(_obj.pushFunction("drawAabb")) {
			_obj.pushArg((btIDebugDraw*)this);
			_obj.pushArg(&from);
			_obj.pushArg(&to);
			_obj.pushArg(&color);
			return (_obj.callFunction<void>());
		}

		return btIDebugDraw::drawAabb(from, to, color);
	};

	// void btIDebugDraw::drawTransform(const btTransform & transform, float orthoLen)
	void drawTransform(const btTransform & transform, float orthoLen) {
		if(_obj.pushFunction("drawTransform")) {
			_obj.pushArg((btIDebugDraw*)this);
			_obj.pushArg(&transform);
			_obj.pushArg(orthoLen);
			return (_obj.callFunction<void>());
		}

		return btIDebugDraw::drawTransform(transform, orthoLen);
	};

	// void btIDebugDraw::drawArc(const btVector3 & center, const btVector3 & normal, const btVector3 & axis, float radiusA, float radiusB, float minAngle, float maxAngle, const btVector3 & color, bool drawSect, float stepDegrees = float (10.f))
	void drawArc(const btVector3 & center, const btVector3 & normal, const btVector3 & axis, float radiusA, float radiusB, float minAngle, float maxAngle, const btVector3 & color, bool drawSect, float stepDegrees = float (10.f)) {
		if(_obj.pushFunction("drawArc")) {
			_obj.pushArg((btIDebugDraw*)this);
			_obj.pushArg(&center);
			_obj.pushArg(&normal);
			_obj.pushArg(&axis);
			_obj.pushArg(radiusA);
			_obj.pushArg(radiusB);
			_obj.pushArg(minAngle);
			_obj.pushArg(maxAngle);
			_obj.pushArg(&color);
			_obj.pushArg(drawSect);
			_obj.pushArg(stepDegrees);
			return (_obj.callFunction<void>());
		}

		return btIDebugDraw::drawArc(center, normal, axis, radiusA, radiusB, minAngle, maxAngle, color, drawSect, stepDegrees);
	};

	// void btIDebugDraw::drawSpherePatch(const btVector3 & center, const btVector3 & up, const btVector3 & axis, float radius, float minTh, float maxTh, float minPs, float maxPs, const btVector3 & color, float stepDegrees = float (10.f))
	void drawSpherePatch(const btVector3 & center, const btVector3 & up, const btVector3 & axis, float radius, float minTh, float maxTh, float minPs, float maxPs, const btVector3 & color, float stepDegrees = float (10.f)) {
		if(_obj.pushFunction("drawSpherePatch")) {
			_obj.pushArg((btIDebugDraw*)this);
			_obj.pushArg(&center);
			_obj.pushArg(&up);
			_obj.pushArg(&axis);
			_obj.pushArg(radius);
			_obj.pushArg(minTh);
			_obj.pushArg(maxTh);
			_obj.pushArg(minPs);
			_obj.pushArg(maxPs);
			_obj.pushArg(&color);
			_obj.pushArg(stepDegrees);
			return (_obj.callFunction<void>());
		}

		return btIDebugDraw::drawSpherePatch(center, up, axis, radius, minTh, maxTh, minPs, maxPs, color, stepDegrees);
	};

	// void btIDebugDraw::drawBox(const btVector3 & bbMin, const btVector3 & bbMax, const btVector3 & color)
	void drawBox(const btVector3 & bbMin, const btVector3 & bbMax, const btVector3 & color) {
		if(_obj.pushFunction("drawBox")) {
			_obj.pushArg((btIDebugDraw*)this);
			_obj.pushArg(&bbMin);
			_obj.pushArg(&bbMax);
			_obj.pushArg(&color);
			return (_obj.callFunction<void>());
		}

		return btIDebugDraw::drawBox(bbMin, bbMax, color);
	};

	// void btIDebugDraw::drawBox(const btVector3 & bbMin, const btVector3 & bbMax, const btTransform & trans, const btVector3 & color)
	void drawBox(const btVector3 & bbMin, const btVector3 & bbMax, const btTransform & trans, const btVector3 & color) {
		if(_obj.pushFunction("drawBox")) {
			_obj.pushArg((btIDebugDraw*)this);
			_obj.pushArg(&bbMin);
			_obj.pushArg(&bbMax);
			_obj.pushArg(&trans);
			_obj.pushArg(&color);
			return (_obj.callFunction<void>());
		}

		return btIDebugDraw::drawBox(bbMin, bbMax, trans, color);
	};

	// void btIDebugDraw::drawCapsule(float radius, float halfHeight, int upAxis, const btTransform & transform, const btVector3 & color)
	void drawCapsule(float radius, float halfHeight, int upAxis, const btTransform & transform, const btVector3 & color) {
		if(_obj.pushFunction("drawCapsule")) {
			_obj.pushArg((btIDebugDraw*)this);
			_obj.pushArg(radius);
			_obj.pushArg(halfHeight);
			_obj.pushArg(upAxis);
			_obj.pushArg(&transform);
			_obj.pushArg(&color);
			return (_obj.callFunction<void>());
		}

		return btIDebugDraw::drawCapsule(radius, halfHeight, upAxis, transform, color);
	};

	// void btIDebugDraw::drawCylinder(float radius, float halfHeight, int upAxis, const btTransform & transform, const btVector3 & color)
	void drawCylinder(float radius, float halfHeight, int upAxis, const btTransform & transform, const btVector3 & color) {
		if(_obj.pushFunction("drawCylinder")) {
			_obj.pushArg((btIDebugDraw*)this);
			_obj.pushArg(radius);
			_obj.pushArg(halfHeight);
			_obj.pushArg(upAxis);
			_obj.pushArg(&transform);
			_obj.pushArg(&color);
			return (_obj.callFunction<void>());
		}

		return btIDebugDraw::drawCylinder(radius, halfHeight, upAxis, transform, color);
	};

	// void btIDebugDraw::drawCone(float radius, float height, int upAxis, const btTransform & transform, const btVector3 & color)
	void drawCone(float radius, float height, int upAxis, const btTransform & transform, const btVector3 & color) {
		if(_obj.pushFunction("drawCone")) {
			_obj.pushArg((btIDebugDraw*)this);
			_obj.pushArg(radius);
			_obj.pushArg(height);
			_obj.pushArg(upAxis);
			_obj.pushArg(&transform);
			_obj.pushArg(&color);
			return (_obj.callFunction<void>());
		}

		return btIDebugDraw::drawCone(radius, height, upAxis, transform, color);
	};

	// void btIDebugDraw::drawPlane(const btVector3 & planeNormal, float planeConst, const btTransform & transform, const btVector3 & color)
	void drawPlane(const btVector3 & planeNormal, float planeConst, const btTransform & transform, const btVector3 & color) {
		if(_obj.pushFunction("drawPlane")) {
			_obj.pushArg((btIDebugDraw*)this);
			_obj.pushArg(&planeNormal);
			_obj.pushArg(planeConst);
			_obj.pushArg(&transform);
			_obj.pushArg(&color);
			return (_obj.callFunction<void>());
		}

		return btIDebugDraw::drawPlane(planeNormal, planeConst, transform, color);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

