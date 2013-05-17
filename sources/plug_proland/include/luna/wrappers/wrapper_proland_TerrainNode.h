#ifndef _WRAPPERS_WRAPPER_PROLAND_TERRAINNODE_H_
#define _WRAPPERS_WRAPPER_PROLAND_TERRAINNODE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <core/proland/terrain/TerrainNode.h>

class wrapper_proland_TerrainNode : public proland::TerrainNode, public luna_wrapper_base {

public:
		

	~wrapper_proland_TerrainNode() {
		logDEBUG3("Calling delete function for wrapper proland_TerrainNode");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::TerrainNode*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_TerrainNode(lua_State* L, lua_Table* dum) 
		: proland::TerrainNode(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::TerrainNode*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_TerrainNode(lua_State* L, lua_Table* dum, proland::Deformation * deform, osg::Geode * tile, double half_size, double zmin, double zmax, float splitFactor, int maxLevel) 
		: proland::TerrainNode(deform, tile, half_size, zmin, zmax, splitFactor, maxLevel), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::TerrainNode*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void proland::TerrainNode::traverse(osg::NodeVisitor & nv)
	void traverse(osg::NodeVisitor & nv) {
		if(_obj.pushFunction("traverse")) {
			_obj.pushArg((proland::TerrainNode*)this);
			_obj.pushArg(&nv);
			return (_obj.callFunction<void>());
		}

		return TerrainNode::traverse(nv);
	};

	// osg::BoundingSphere proland::TerrainNode::computeBound() const
	osg::BoundingSphere computeBound() const {
		if(_obj.pushFunction("computeBound")) {
			_obj.pushArg((proland::TerrainNode*)this);
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

