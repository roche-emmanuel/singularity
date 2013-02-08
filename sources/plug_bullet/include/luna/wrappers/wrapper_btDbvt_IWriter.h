#ifndef _WRAPPERS_WRAPPER_BTDBVT_IWRITER_H_
#define _WRAPPERS_WRAPPER_BTDBVT_IWRITER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/BroadphaseCollision/btDbvt.h>

class wrapper_btDbvt_IWriter : public btDbvt::IWriter, public luna_wrapper_base {

public:
		

	~wrapper_btDbvt_IWriter() {
		logDEBUG3("Calling delete function for wrapper btDbvt_IWriter");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btDbvt::IWriter*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btDbvt_IWriter(lua_State* L, lua_Table* dum) 
		: btDbvt::IWriter(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btDbvt::IWriter*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btDbvt::IWriter::Prepare(const btDbvtNode * root, int numnodes)
	void Prepare(const btDbvtNode * root, int numnodes) {
		THROW_IF(!_obj.pushFunction("Prepare"),"No implementation for abstract function btDbvt::IWriter::Prepare");
		_obj.pushArg((btDbvt::IWriter*)this);
		_obj.pushArg(root);
		_obj.pushArg(numnodes);
		return (_obj.callFunction<void>());
	};

	// void btDbvt::IWriter::WriteNode(const btDbvtNode * arg1, int index, int parent, int child0, int child1)
	void WriteNode(const btDbvtNode * arg1, int index, int parent, int child0, int child1) {
		THROW_IF(!_obj.pushFunction("WriteNode"),"No implementation for abstract function btDbvt::IWriter::WriteNode");
		_obj.pushArg((btDbvt::IWriter*)this);
		_obj.pushArg(arg1);
		_obj.pushArg(index);
		_obj.pushArg(parent);
		_obj.pushArg(child0);
		_obj.pushArg(child1);
		return (_obj.callFunction<void>());
	};

	// void btDbvt::IWriter::WriteLeaf(const btDbvtNode * arg1, int index, int parent)
	void WriteLeaf(const btDbvtNode * arg1, int index, int parent) {
		THROW_IF(!_obj.pushFunction("WriteLeaf"),"No implementation for abstract function btDbvt::IWriter::WriteLeaf");
		_obj.pushArg((btDbvt::IWriter*)this);
		_obj.pushArg(arg1);
		_obj.pushArg(index);
		_obj.pushArg(parent);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

