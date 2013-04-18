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

	// Protected virtual methods:

	// Public virtual methods:
	// osg::Vec3d sgt::Deformation::localToDeformed(const osg::Vec3d & localPt) const
	osg::Vec3d localToDeformed(const osg::Vec3d & localPt) const {
		if(_obj.pushFunction("localToDeformed")) {
			_obj.pushArg((sgt::Deformation*)this);
			_obj.pushArg(&localPt);
			return (_obj.callFunction<osg::Vec3d>());
		}

		return Deformation::localToDeformed(localPt);
	};

	// osg::Matrixd sgt::Deformation::localToDeformedDifferential(const osg::Vec3d & localPt, bool clamp = false) const
	osg::Matrixd localToDeformedDifferential(const osg::Vec3d & localPt, bool clamp = false) const {
		if(_obj.pushFunction("localToDeformedDifferential")) {
			_obj.pushArg((sgt::Deformation*)this);
			_obj.pushArg(&localPt);
			_obj.pushArg(clamp);
			return (_obj.callFunction<osg::Matrixd>());
		}

		return Deformation::localToDeformedDifferential(localPt, clamp);
	};

	// osg::Vec3d sgt::Deformation::deformedToLocal(const osg::Vec3d & deformedPt) const
	osg::Vec3d deformedToLocal(const osg::Vec3d & deformedPt) const {
		if(_obj.pushFunction("deformedToLocal")) {
			_obj.pushArg((sgt::Deformation*)this);
			_obj.pushArg(&deformedPt);
			return (_obj.callFunction<osg::Vec3d>());
		}

		return Deformation::deformedToLocal(deformedPt);
	};

	// sgt::box2f sgt::Deformation::deformedToLocalBounds(const osg::Vec3d & deformedCenter, double deformedRadius) const
	sgt::box2f deformedToLocalBounds(const osg::Vec3d & deformedCenter, double deformedRadius) const {
		if(_obj.pushFunction("deformedToLocalBounds")) {
			_obj.pushArg((sgt::Deformation*)this);
			_obj.pushArg(&deformedCenter);
			_obj.pushArg(deformedRadius);
			return *(_obj.callFunction<sgt::box2f*>());
		}

		return Deformation::deformedToLocalBounds(deformedCenter, deformedRadius);
	};

	// osg::Matrixd sgt::Deformation::deformedToTangentFrame(const osg::Vec3d & deformedPt) const
	osg::Matrixd deformedToTangentFrame(const osg::Vec3d & deformedPt) const {
		if(_obj.pushFunction("deformedToTangentFrame")) {
			_obj.pushArg((sgt::Deformation*)this);
			_obj.pushArg(&deformedPt);
			return (_obj.callFunction<osg::Matrixd>());
		}

		return Deformation::deformedToTangentFrame(deformedPt);
	};

	// float sgt::Deformation::getLocalDist(const osg::Vec3d & localPt, const sgt::box3d & localBox) const
	float getLocalDist(const osg::Vec3d & localPt, const sgt::box3d & localBox) const {
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


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

