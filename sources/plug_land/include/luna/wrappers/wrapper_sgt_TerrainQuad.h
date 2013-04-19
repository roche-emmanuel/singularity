#ifndef _WRAPPERS_WRAPPER_SGT_TERRAINQUAD_H_
#define _WRAPPERS_WRAPPER_SGT_TERRAINQUAD_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <terrain/TerrainQuad.h>

class wrapper_sgt_TerrainQuad : public sgt::TerrainQuad, public luna_wrapper_base {

public:
		

	~wrapper_sgt_TerrainQuad() {
		logDEBUG3("Calling delete function for wrapper sgt_TerrainQuad");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((sgt::TerrainQuad*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_sgt_TerrainQuad(lua_State* L, lua_Table* dum, sgt::TerrainNode * owner, sgt::TerrainQuad * parent, int tx, int ty, double ox, double oy, double l, float zmin, float zmax) 
		: sgt::TerrainQuad(owner, parent, tx, ty, ox, oy, l, zmin, zmax), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((sgt::TerrainQuad*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void sgt::TerrainQuad::traverse(osg::NodeVisitor & nv)
	void traverse(osg::NodeVisitor & nv) {
		if(_obj.pushFunction("traverse")) {
			_obj.pushArg((sgt::TerrainQuad*)this);
			_obj.pushArg(&nv);
			return (_obj.callFunction<void>());
		}

		return TerrainQuad::traverse(nv);
	};

	// osg::BoundingSphere sgt::TerrainQuad::computeBound() const
	osg::BoundingSphere computeBound() const {
		if(_obj.pushFunction("computeBound")) {
			_obj.pushArg((sgt::TerrainQuad*)this);
			return (_obj.callFunction<osg::BoundingSphere>());
		}

		return TerrainQuad::computeBound();
	};


	// Protected non-virtual methods:
	// void sgt::TerrainQuad::subdivide()
	void public_subdivide() {
		return sgt::TerrainQuad::subdivide();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_subdivide(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// void sgt::TerrainQuad::public_subdivide()
	static int _bind_public_subdivide(lua_State *L) {
		if (!_lg_typecheck_public_subdivide(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainQuad::public_subdivide() function, expected prototype:\nvoid sgt::TerrainQuad::public_subdivide()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_sgt_TerrainQuad* self=Luna< osg::Referenced >::checkSubType< wrapper_sgt_TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainQuad::public_subdivide(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_subdivide();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"subdivide",_bind_public_subdivide},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

