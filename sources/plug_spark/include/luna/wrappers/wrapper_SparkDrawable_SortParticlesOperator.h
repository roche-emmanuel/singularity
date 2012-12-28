#ifndef _WRAPPERS_WRAPPER_SPARKDRAWABLE_SORTPARTICLESOPERATOR_H_
#define _WRAPPERS_WRAPPER_SPARKDRAWABLE_SORTPARTICLESOPERATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <SparkDrawable.h>

class wrapper_SparkDrawable_SortParticlesOperator : public SparkDrawable::SortParticlesOperator, public luna_wrapper_base {

public:
		

	~wrapper_SparkDrawable_SortParticlesOperator() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_SparkDrawable_SortParticlesOperator(lua_State* L, lua_Table* dum, const osg::Vec3d & eye) : SparkDrawable::SortParticlesOperator(eye), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool SparkDrawable::SortParticlesOperator::operator()(SPK::System * lhs, SPK::System * rhs)
	bool operator()(SPK::System * lhs, SPK::System * rhs) {
		if(_obj.pushFunction("op_call")) {
			_obj.pushArg(lhs);
			_obj.pushArg(rhs);
			return (_obj.callFunction<bool>());
		}

		return SortParticlesOperator::operator()(lhs, rhs);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

