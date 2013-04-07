#ifndef _WRAPPERS_WRAPPER_B_SHAPE_H_
#define _WRAPPERS_WRAPPER_B_SHAPE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <Box2D/Collision/Shapes/b2Shape.h>

class wrapper_b2Shape : public b2Shape, public luna_wrapper_base {

public:
		

	~wrapper_b2Shape() {
		logDEBUG3("Calling delete function for wrapper b2Shape");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((b2Shape*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_b2Shape(lua_State* L, lua_Table* dum) 
		: b2Shape(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((b2Shape*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// b2Shape * b2Shape::Clone(b2BlockAllocator * allocator) const
	b2Shape * Clone(b2BlockAllocator * allocator) const {
		THROW_IF(!_obj.pushFunction("Clone"),"No implementation for abstract function b2Shape::Clone");
		_obj.pushArg((b2Shape*)this);
		_obj.pushArg(allocator);
		return (_obj.callFunction<b2Shape*>());
	};

	// signed int b2Shape::GetChildCount() const
	signed int GetChildCount() const {
		THROW_IF(!_obj.pushFunction("GetChildCount"),"No implementation for abstract function b2Shape::GetChildCount");
		_obj.pushArg((b2Shape*)this);
		return (_obj.callFunction<signed int>());
	};

	// bool b2Shape::TestPoint(const b2Transform & xf, const b2Vec2 & p) const
	bool TestPoint(const b2Transform & xf, const b2Vec2 & p) const {
		THROW_IF(!_obj.pushFunction("TestPoint"),"No implementation for abstract function b2Shape::TestPoint");
		_obj.pushArg((b2Shape*)this);
		_obj.pushArg(&xf);
		_obj.pushArg(&p);
		return (_obj.callFunction<bool>());
	};

	// bool b2Shape::RayCast(b2RayCastOutput * output, const b2RayCastInput & input, const b2Transform & transform, signed int childIndex) const
	bool RayCast(b2RayCastOutput * output, const b2RayCastInput & input, const b2Transform & transform, signed int childIndex) const {
		THROW_IF(!_obj.pushFunction("RayCast"),"No implementation for abstract function b2Shape::RayCast");
		_obj.pushArg((b2Shape*)this);
		_obj.pushArg(output);
		_obj.pushArg(&input);
		_obj.pushArg(&transform);
		_obj.pushArg(childIndex);
		return (_obj.callFunction<bool>());
	};

	// void b2Shape::ComputeAABB(b2AABB * aabb, const b2Transform & xf, signed int childIndex) const
	void ComputeAABB(b2AABB * aabb, const b2Transform & xf, signed int childIndex) const {
		THROW_IF(!_obj.pushFunction("ComputeAABB"),"No implementation for abstract function b2Shape::ComputeAABB");
		_obj.pushArg((b2Shape*)this);
		_obj.pushArg(aabb);
		_obj.pushArg(&xf);
		_obj.pushArg(childIndex);
		return (_obj.callFunction<void>());
	};

	// void b2Shape::ComputeMass(b2MassData * massData, float density) const
	void ComputeMass(b2MassData * massData, float density) const {
		THROW_IF(!_obj.pushFunction("ComputeMass"),"No implementation for abstract function b2Shape::ComputeMass");
		_obj.pushArg((b2Shape*)this);
		_obj.pushArg(massData);
		_obj.pushArg(density);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

