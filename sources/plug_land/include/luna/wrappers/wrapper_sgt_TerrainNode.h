#ifndef _WRAPPERS_WRAPPER_SGT_TERRAINNODE_H_
#define _WRAPPERS_WRAPPER_SGT_TERRAINNODE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <terrain/TerrainNode.h>

class wrapper_sgt_TerrainNode : public sgt::TerrainNode, public luna_wrapper_base {

public:
		

	~wrapper_sgt_TerrainNode() {
		logDEBUG3("Calling delete function for wrapper sgt_TerrainNode");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((sgt::TerrainNode*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_sgt_TerrainNode(lua_State* L, lua_Table* dum) 
		: sgt::TerrainNode(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((sgt::TerrainNode*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_sgt_TerrainNode(lua_State* L, lua_Table* dum, sgt::Deformation * deform, osg::Geode * tile, double half_size, double zmin, double zmax, float splitFactor, int maxLevel) 
		: sgt::TerrainNode(deform, tile, half_size, zmin, zmax, splitFactor, maxLevel), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((sgt::TerrainNode*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void sgt::TerrainNode::traverse(osg::NodeVisitor & nv)
	void traverse(osg::NodeVisitor & nv) {
		if(_obj.pushFunction("traverse")) {
			_obj.pushArg((sgt::TerrainNode*)this);
			_obj.pushArg(&nv);
			return (_obj.callFunction<void>());
		}

		return TerrainNode::traverse(nv);
	};

	// osg::BoundingSphere sgt::TerrainNode::computeBound() const
	osg::BoundingSphere computeBound() const {
		if(_obj.pushFunction("computeBound")) {
			_obj.pushArg((sgt::TerrainNode*)this);
			return (_obj.callFunction<osg::BoundingSphere>());
		}

		return TerrainNode::computeBound();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

