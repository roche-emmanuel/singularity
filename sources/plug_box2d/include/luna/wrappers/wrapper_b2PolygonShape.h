#ifndef _WRAPPERS_WRAPPER_B_POLYGONSHAPE_H_
#define _WRAPPERS_WRAPPER_B_POLYGONSHAPE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Box2D/Collision/Shapes/b2PolygonShape.h>

class wrapper_b2PolygonShape : public b2PolygonShape, public luna_wrapper_base {

public:
		

	~wrapper_b2PolygonShape() {
		logDEBUG3("Calling delete function for wrapper b2PolygonShape");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((b2PolygonShape*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_b2PolygonShape(lua_State* L, lua_Table* dum) 
		: b2PolygonShape(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((b2PolygonShape*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// b2Shape * b2PolygonShape::Clone(b2BlockAllocator * allocator) const
	b2Shape * Clone(b2BlockAllocator * allocator) const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((b2PolygonShape*)this);
			_obj.pushArg(allocator);
			return (_obj.callFunction<b2Shape*>());
		}

		return b2PolygonShape::Clone(allocator);
	};

	// signed int b2PolygonShape::GetChildCount() const
	signed int GetChildCount() const {
		if(_obj.pushFunction("GetChildCount")) {
			_obj.pushArg((b2PolygonShape*)this);
			return (_obj.callFunction<signed int>());
		}

		return b2PolygonShape::GetChildCount();
	};

	// bool b2PolygonShape::TestPoint(const b2Transform & transform, const b2Vec2 & p) const
	bool TestPoint(const b2Transform & transform, const b2Vec2 & p) const {
		if(_obj.pushFunction("TestPoint")) {
			_obj.pushArg((b2PolygonShape*)this);
			_obj.pushArg(&transform);
			_obj.pushArg(&p);
			return (_obj.callFunction<bool>());
		}

		return b2PolygonShape::TestPoint(transform, p);
	};

	// bool b2PolygonShape::RayCast(b2RayCastOutput * output, const b2RayCastInput & input, const b2Transform & transform, signed int childIndex) const
	bool RayCast(b2RayCastOutput * output, const b2RayCastInput & input, const b2Transform & transform, signed int childIndex) const {
		if(_obj.pushFunction("RayCast")) {
			_obj.pushArg((b2PolygonShape*)this);
			_obj.pushArg(output);
			_obj.pushArg(&input);
			_obj.pushArg(&transform);
			_obj.pushArg(childIndex);
			return (_obj.callFunction<bool>());
		}

		return b2PolygonShape::RayCast(output, input, transform, childIndex);
	};

	// void b2PolygonShape::ComputeAABB(b2AABB * aabb, const b2Transform & transform, signed int childIndex) const
	void ComputeAABB(b2AABB * aabb, const b2Transform & transform, signed int childIndex) const {
		if(_obj.pushFunction("ComputeAABB")) {
			_obj.pushArg((b2PolygonShape*)this);
			_obj.pushArg(aabb);
			_obj.pushArg(&transform);
			_obj.pushArg(childIndex);
			return (_obj.callFunction<void>());
		}

		return b2PolygonShape::ComputeAABB(aabb, transform, childIndex);
	};

	// void b2PolygonShape::ComputeMass(b2MassData * massData, float density) const
	void ComputeMass(b2MassData * massData, float density) const {
		if(_obj.pushFunction("ComputeMass")) {
			_obj.pushArg((b2PolygonShape*)this);
			_obj.pushArg(massData);
			_obj.pushArg(density);
			return (_obj.callFunction<void>());
		}

		return b2PolygonShape::ComputeMass(massData, density);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

