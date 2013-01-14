#ifndef _WRAPPERS_WRAPPER_B_CIRCLESHAPE_H_
#define _WRAPPERS_WRAPPER_B_CIRCLESHAPE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Box2D/Collision/Shapes/b2CircleShape.h>

class wrapper_b2CircleShape : public b2CircleShape, public luna_wrapper_base {

public:
		

	~wrapper_b2CircleShape() {
		logDEBUG3("Calling delete function for wrapper b2CircleShape");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((b2CircleShape*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_b2CircleShape(lua_State* L, lua_Table* dum) 
		: b2CircleShape(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((b2CircleShape*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// b2Shape * b2CircleShape::Clone(b2BlockAllocator * allocator) const
	b2Shape * Clone(b2BlockAllocator * allocator) const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((b2CircleShape*)this);
			_obj.pushArg(allocator);
			return (_obj.callFunction<b2Shape*>());
		}

		return b2CircleShape::Clone(allocator);
	};

	// signed int b2CircleShape::GetChildCount() const
	signed int GetChildCount() const {
		if(_obj.pushFunction("GetChildCount")) {
			_obj.pushArg((b2CircleShape*)this);
			return (_obj.callFunction<signed int>());
		}

		return b2CircleShape::GetChildCount();
	};

	// bool b2CircleShape::TestPoint(const b2Transform & transform, const b2Vec2 & p) const
	bool TestPoint(const b2Transform & transform, const b2Vec2 & p) const {
		if(_obj.pushFunction("TestPoint")) {
			_obj.pushArg((b2CircleShape*)this);
			_obj.pushArg(&transform);
			_obj.pushArg(&p);
			return (_obj.callFunction<bool>());
		}

		return b2CircleShape::TestPoint(transform, p);
	};

	// bool b2CircleShape::RayCast(b2RayCastOutput * output, const b2RayCastInput & input, const b2Transform & transform, signed int childIndex) const
	bool RayCast(b2RayCastOutput * output, const b2RayCastInput & input, const b2Transform & transform, signed int childIndex) const {
		if(_obj.pushFunction("RayCast")) {
			_obj.pushArg((b2CircleShape*)this);
			_obj.pushArg(output);
			_obj.pushArg(&input);
			_obj.pushArg(&transform);
			_obj.pushArg(childIndex);
			return (_obj.callFunction<bool>());
		}

		return b2CircleShape::RayCast(output, input, transform, childIndex);
	};

	// void b2CircleShape::ComputeAABB(b2AABB * aabb, const b2Transform & transform, signed int childIndex) const
	void ComputeAABB(b2AABB * aabb, const b2Transform & transform, signed int childIndex) const {
		if(_obj.pushFunction("ComputeAABB")) {
			_obj.pushArg((b2CircleShape*)this);
			_obj.pushArg(aabb);
			_obj.pushArg(&transform);
			_obj.pushArg(childIndex);
			return (_obj.callFunction<void>());
		}

		return b2CircleShape::ComputeAABB(aabb, transform, childIndex);
	};

	// void b2CircleShape::ComputeMass(b2MassData * massData, float density) const
	void ComputeMass(b2MassData * massData, float density) const {
		if(_obj.pushFunction("ComputeMass")) {
			_obj.pushArg((b2CircleShape*)this);
			_obj.pushArg(massData);
			_obj.pushArg(density);
			return (_obj.callFunction<void>());
		}

		return b2CircleShape::ComputeMass(massData, density);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

