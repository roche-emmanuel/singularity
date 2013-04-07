#ifndef _WRAPPERS_WRAPPER_MGLGRAPH_H_
#define _WRAPPERS_WRAPPER_MGLGRAPH_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <mgl2/mgl.h>

class wrapper_mglGraph : public mglGraph, public luna_wrapper_base {

public:
		

	~wrapper_mglGraph() {
		logDEBUG3("Calling delete function for wrapper mglGraph");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((mglGraph*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_mglGraph(lua_State* L, lua_Table* dum, int kind = 0, int width = 600, int height = 400) 
		: mglGraph(kind, width, height), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((mglGraph*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_mglGraph(lua_State* L, lua_Table* dum, const mglGraph & graph) 
		: mglGraph(graph), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((mglGraph*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_mglGraph(lua_State* L, lua_Table* dum, mglBase * graph) 
		: mglGraph(graph), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((mglGraph*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void mglGraph::SetFontSizePT(double pt, int dpi = 72)
	void SetFontSizePT(double pt, int dpi = 72) {
		if(_obj.pushFunction("SetFontSizePT")) {
			_obj.pushArg((mglGraph*)this);
			_obj.pushArg(pt);
			_obj.pushArg(dpi);
			return (_obj.callFunction<void>());
		}

		return mglGraph::SetFontSizePT(pt, dpi);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

