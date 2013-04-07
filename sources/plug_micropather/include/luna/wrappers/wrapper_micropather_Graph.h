#ifndef _WRAPPERS_WRAPPER_MICROPATHER_GRAPH_H_
#define _WRAPPERS_WRAPPER_MICROPATHER_GRAPH_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <micropather.h>

class wrapper_micropather_Graph : public micropather::Graph, public luna_wrapper_base {

public:
		

	~wrapper_micropather_Graph() {
		logDEBUG3("Calling delete function for wrapper micropather_Graph");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((micropather::Graph*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_micropather_Graph(lua_State* L, lua_Table* dum) 
		: micropather::Graph(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((micropather::Graph*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// float micropather::Graph::LeastCostEstimate(void * stateStart, void * stateEnd)
	float LeastCostEstimate(void * stateStart, void * stateEnd) {
		THROW_IF(!_obj.pushFunction("LeastCostEstimate"),"No implementation for abstract function micropather::Graph::LeastCostEstimate");
		_obj.pushArg((micropather::Graph*)this);
		_obj.pushArg(stateStart);
		_obj.pushArg(stateEnd);
		return (_obj.callFunction<float>());
	};

	// void micropather::Graph::AdjacentCost(void * state, std::vector< micropather::StateCost > * adjacent)
	void AdjacentCost(void * state, std::vector< micropather::StateCost > * adjacent) {
		THROW_IF(!_obj.pushFunction("AdjacentCost"),"No implementation for abstract function micropather::Graph::AdjacentCost");
		_obj.pushArg((micropather::Graph*)this);
		_obj.pushArg(state);
		_obj.pushArg(adjacent);
		return (_obj.callFunction<void>());
	};

	// void micropather::Graph::PrintStateInfo(void * state)
	void PrintStateInfo(void * state) {
		THROW_IF(!_obj.pushFunction("PrintStateInfo"),"No implementation for abstract function micropather::Graph::PrintStateInfo");
		_obj.pushArg((micropather::Graph*)this);
		_obj.pushArg(state);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

