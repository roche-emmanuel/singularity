#ifndef _WRAPPERS_WRAPPER_GIZMODRAWABLE_H_
#define _WRAPPERS_WRAPPER_GIZMODRAWABLE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <GizmoDrawable.h>

class wrapper_GizmoDrawable : public GizmoDrawable, public luna_wrapper_base {

public:
		

	~wrapper_GizmoDrawable() {
		logDEBUG3("Calling delete function for wrapper GizmoDrawable");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((GizmoDrawable*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_GizmoDrawable(lua_State* L, lua_Table* dum) 
		: GizmoDrawable(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((GizmoDrawable*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_GizmoDrawable(lua_State* L, lua_Table* dum, const GizmoDrawable & copy, osg::CopyOp op = osg::CopyOp::SHALLOW_COPY) 
		: GizmoDrawable(copy, op), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((GizmoDrawable*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// osg::Object * GizmoDrawable::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((GizmoDrawable*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return GizmoDrawable::cloneType();
	};

	// osg::Object * GizmoDrawable::clone(const osg::CopyOp & copyop) const
	osg::Object * clone(const osg::CopyOp & copyop) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((GizmoDrawable*)this);
			_obj.pushArg(&copyop);
			return (_obj.callFunction<osg::Object*>());
		}

		return GizmoDrawable::clone(copyop);
	};

	// bool GizmoDrawable::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((GizmoDrawable*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return GizmoDrawable::isSameKindAs(obj);
	};

	// const char * GizmoDrawable::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((GizmoDrawable*)this);
			return (_obj.callFunction<const char*>());
		}

		return GizmoDrawable::libraryName();
	};

	// const char * GizmoDrawable::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((GizmoDrawable*)this);
			return (_obj.callFunction<const char*>());
		}

		return GizmoDrawable::className();
	};

	// void GizmoDrawable::drawImplementation(osg::RenderInfo & renderInfo) const
	void drawImplementation(osg::RenderInfo & renderInfo) const {
		if(_obj.pushFunction("drawImplementation")) {
			_obj.pushArg((GizmoDrawable*)this);
			_obj.pushArg(&renderInfo);
			return (_obj.callFunction<void>());
		}

		return GizmoDrawable::drawImplementation(renderInfo);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

