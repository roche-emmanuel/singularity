#ifndef _WRAPPERS_WRAPPER_SGT_DEFORMATION_H_
#define _WRAPPERS_WRAPPER_SGT_DEFORMATION_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <terrain/Deformation.h>

class wrapper_sgt_Deformation : public sgt::Deformation, public luna_wrapper_base {

public:
		

	~wrapper_sgt_Deformation() {
		logDEBUG3("Calling delete function for wrapper sgt_Deformation");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((sgt::Deformation*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_sgt_Deformation(lua_State* L, lua_Table* dum) 
		: sgt::Deformation(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((sgt::Deformation*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void sgt::Deformation::setScreenUniforms(sgt::TerrainQuad * q) const
	void setScreenUniforms(sgt::TerrainQuad * q) const {
		if(_obj.pushFunction("setScreenUniforms")) {
			_obj.pushArg((sgt::Deformation*)this);
			_obj.pushArg(q);
			return (_obj.callFunction<void>());
		}

		return Deformation::setScreenUniforms(q);
	};

public:
	// Public virtual methods:
	// sgt::vec3d sgt::Deformation::localToDeformed(const sgt::vec3d & localPt) const
	sgt::vec3d localToDeformed(const sgt::vec3d & localPt) const {
		if(_obj.pushFunction("localToDeformed")) {
			_obj.pushArg((sgt::Deformation*)this);
			_obj.pushArg(&localPt);
			return *(_obj.callFunction<sgt::vec3d*>());
		}

		return Deformation::localToDeformed(localPt);
	};

	// sgt::mat4d sgt::Deformation::localToDeformedDifferential(const sgt::vec3d & localPt, bool clamp = false) const
	sgt::mat4d localToDeformedDifferential(const sgt::vec3d & localPt, bool clamp = false) const {
		if(_obj.pushFunction("localToDeformedDifferential")) {
			_obj.pushArg((sgt::Deformation*)this);
			_obj.pushArg(&localPt);
			_obj.pushArg(clamp);
			return *(_obj.callFunction<sgt::mat4d*>());
		}

		return Deformation::localToDeformedDifferential(localPt, clamp);
	};

	// sgt::vec3d sgt::Deformation::deformedToLocal(const sgt::vec3d & deformedPt) const
	sgt::vec3d deformedToLocal(const sgt::vec3d & deformedPt) const {
		if(_obj.pushFunction("deformedToLocal")) {
			_obj.pushArg((sgt::Deformation*)this);
			_obj.pushArg(&deformedPt);
			return *(_obj.callFunction<sgt::vec3d*>());
		}

		return Deformation::deformedToLocal(deformedPt);
	};

	// sgt::box2f sgt::Deformation::deformedToLocalBounds(const sgt::vec3d & deformedCenter, double deformedRadius) const
	sgt::box2f deformedToLocalBounds(const sgt::vec3d & deformedCenter, double deformedRadius) const {
		if(_obj.pushFunction("deformedToLocalBounds")) {
			_obj.pushArg((sgt::Deformation*)this);
			_obj.pushArg(&deformedCenter);
			_obj.pushArg(deformedRadius);
			return *(_obj.callFunction<sgt::box2f*>());
		}

		return Deformation::deformedToLocalBounds(deformedCenter, deformedRadius);
	};

	// sgt::mat4d sgt::Deformation::deformedToTangentFrame(const sgt::vec3d & deformedPt) const
	sgt::mat4d deformedToTangentFrame(const sgt::vec3d & deformedPt) const {
		if(_obj.pushFunction("deformedToTangentFrame")) {
			_obj.pushArg((sgt::Deformation*)this);
			_obj.pushArg(&deformedPt);
			return *(_obj.callFunction<sgt::mat4d*>());
		}

		return Deformation::deformedToTangentFrame(deformedPt);
	};

	// float sgt::Deformation::getLocalDist(const sgt::vec3d & localPt, const sgt::box3d & localBox) const
	float getLocalDist(const sgt::vec3d & localPt, const sgt::box3d & localBox) const {
		if(_obj.pushFunction("getLocalDist")) {
			_obj.pushArg((sgt::Deformation*)this);
			_obj.pushArg(&localPt);
			_obj.pushArg(&localBox);
			return (_obj.callFunction<float>());
		}

		return Deformation::getLocalDist(localPt, localBox);
	};

	// sgt::LandManager::Visibility sgt::Deformation::getVisibility(const sgt::TerrainNode * t, const sgt::box3d & localBox) const
	sgt::LandManager::Visibility getVisibility(const sgt::TerrainNode * t, const sgt::box3d & localBox) const {
		if(_obj.pushFunction("getVisibility")) {
			_obj.pushArg((sgt::Deformation*)this);
			_obj.pushArg(t);
			_obj.pushArg(&localBox);
			return (sgt::LandManager::Visibility)(_obj.callFunction<int>());
		}

		return Deformation::getVisibility(t, localBox);
	};

	// void sgt::Deformation::setUniforms(sgt::TerrainNode * n) const
	void setUniforms(sgt::TerrainNode * n) const {
		if(_obj.pushFunction("setUniforms")) {
			_obj.pushArg((sgt::Deformation*)this);
			_obj.pushArg(n);
			return (_obj.callFunction<void>());
		}

		return Deformation::setUniforms(n);
	};

	// void sgt::Deformation::setUniforms(sgt::TerrainQuad * q) const
	void setUniforms(sgt::TerrainQuad * q) const {
		if(_obj.pushFunction("setUniforms")) {
			_obj.pushArg((sgt::Deformation*)this);
			_obj.pushArg(q);
			return (_obj.callFunction<void>());
		}

		return Deformation::setUniforms(q);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

