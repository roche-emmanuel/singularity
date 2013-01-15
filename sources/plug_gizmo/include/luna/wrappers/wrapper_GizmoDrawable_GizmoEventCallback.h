#ifndef _WRAPPERS_WRAPPER_GIZMODRAWABLE_GIZMOEVENTCALLBACK_H_
#define _WRAPPERS_WRAPPER_GIZMODRAWABLE_GIZMOEVENTCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <GizmoDrawable.h>

class wrapper_GizmoDrawable_GizmoEventCallback : public GizmoDrawable::GizmoEventCallback, public luna_wrapper_base {

public:
		

	~wrapper_GizmoDrawable_GizmoEventCallback() {
		logDEBUG3("Calling delete function for wrapper GizmoDrawable_GizmoEventCallback");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((GizmoDrawable::GizmoEventCallback*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_GizmoDrawable_GizmoEventCallback(lua_State* L, lua_Table* dum) 
		: GizmoDrawable::GizmoEventCallback(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((GizmoDrawable::GizmoEventCallback*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void GizmoDrawable::GizmoEventCallback::event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	void event(osg::NodeVisitor * nv, osg::Drawable * drawable) {
		if(_obj.pushFunction("event")) {
			_obj.pushArg((GizmoDrawable::GizmoEventCallback*)this);
			_obj.pushArg(nv);
			_obj.pushArg(drawable);
			return (_obj.callFunction<void>());
		}

		return GizmoEventCallback::event(nv, drawable);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

