#include <plug_common.h>

#include <luna/wrappers/wrapper_sgt_TerrainQuad.h>

class luna_wrapper_sgt_TerrainQuad {
public:
	typedef Luna< sgt::TerrainQuad > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgt::TerrainQuad* self= (sgt::TerrainQuad*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::TerrainQuad >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Node(lua_State *L) {
		// all checked are already performed before reaching this point.
		//sgt::TerrainQuad* ptr= dynamic_cast< sgt::TerrainQuad* >(Luna< osg::Referenced >::check(L,1));
		sgt::TerrainQuad* ptr= luna_caster< osg::Referenced, sgt::TerrainQuad >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::TerrainQuad >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		if( lua_isnumber(L,8)==0 ) return false;
		if( lua_isnumber(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=10 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,3)) ) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		if( lua_isnumber(L,8)==0 ) return false;
		if( lua_isnumber(L,9)==0 ) return false;
		if( lua_isnumber(L,10)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_isLeaf(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOwner(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTx(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOx(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getL(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getZmin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getZmax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVisible(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOccluded(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDrawable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getScreenQuadCornersU(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getScreenQuadVerticalsU(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOffsetU(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCameraU(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTileToTangentU(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,39952981) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setZmin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setZmax(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOccluded(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDrawable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setScreenQuadCornersU(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,36174510) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setScreenQuadVerticalsU(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,36174510) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOffsetU(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,36174510) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCameraU(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,36174510) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTileToTangentU(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,36174510) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::TerrainQuad::TerrainQuad(sgt::TerrainNode * owner, sgt::TerrainQuad * parent, int tx, int ty, double ox, double oy, double l, float zmin, float zmax)
	static sgt::TerrainQuad* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TerrainQuad::TerrainQuad(sgt::TerrainNode * owner, sgt::TerrainQuad * parent, int tx, int ty, double ox, double oy, double l, float zmin, float zmax) function, expected prototype:\nsgt::TerrainQuad::TerrainQuad(sgt::TerrainNode * owner, sgt::TerrainQuad * parent, int tx, int ty, double ox, double oy, double l, float zmin, float zmax)\nClass arguments details:\narg 1 ID = 80168245\narg 2 ID = 80168245\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::TerrainNode* owner=(Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1));
		sgt::TerrainQuad* parent=(Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,2));
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		double ox=(double)lua_tonumber(L,5);
		double oy=(double)lua_tonumber(L,6);
		double l=(double)lua_tonumber(L,7);
		float zmin=(float)lua_tonumber(L,8);
		float zmax=(float)lua_tonumber(L,9);

		return new sgt::TerrainQuad(owner, parent, tx, ty, ox, oy, l, zmin, zmax);
	}

	// sgt::TerrainQuad::TerrainQuad(lua_Table * data, sgt::TerrainNode * owner, sgt::TerrainQuad * parent, int tx, int ty, double ox, double oy, double l, float zmin, float zmax)
	static sgt::TerrainQuad* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TerrainQuad::TerrainQuad(lua_Table * data, sgt::TerrainNode * owner, sgt::TerrainQuad * parent, int tx, int ty, double ox, double oy, double l, float zmin, float zmax) function, expected prototype:\nsgt::TerrainQuad::TerrainQuad(lua_Table * data, sgt::TerrainNode * owner, sgt::TerrainQuad * parent, int tx, int ty, double ox, double oy, double l, float zmin, float zmax)\nClass arguments details:\narg 2 ID = 80168245\narg 3 ID = 80168245\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::TerrainNode* owner=(Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,2));
		sgt::TerrainQuad* parent=(Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,3));
		int tx=(int)lua_tointeger(L,4);
		int ty=(int)lua_tointeger(L,5);
		double ox=(double)lua_tonumber(L,6);
		double oy=(double)lua_tonumber(L,7);
		double l=(double)lua_tonumber(L,8);
		float zmin=(float)lua_tonumber(L,9);
		float zmax=(float)lua_tonumber(L,10);

		return new wrapper_sgt_TerrainQuad(L,NULL, owner, parent, tx, ty, ox, oy, l, zmin, zmax);
	}

	// Overload binder for sgt::TerrainQuad::TerrainQuad
	static sgt::TerrainQuad* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TerrainQuad, cannot match any of the overloads for function TerrainQuad:\n  TerrainQuad(sgt::TerrainNode *, sgt::TerrainQuad *, int, int, double, double, double, float, float)\n  TerrainQuad(lua_Table *, sgt::TerrainNode *, sgt::TerrainQuad *, int, int, double, double, double, float, float)\n");
		return NULL;
	}


	// Function binds:
	// bool sgt::TerrainQuad::isLeaf() const
	static int _bind_isLeaf(lua_State *L) {
		if (!_lg_typecheck_isLeaf(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::TerrainQuad::isLeaf() const function, expected prototype:\nbool sgt::TerrainQuad::isLeaf() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::TerrainQuad::isLeaf() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isLeaf();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int sgt::TerrainQuad::getSize() const
	static int _bind_getSize(lua_State *L) {
		if (!_lg_typecheck_getSize(L)) {
			luaL_error(L, "luna typecheck failed in int sgt::TerrainQuad::getSize() const function, expected prototype:\nint sgt::TerrainQuad::getSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int sgt::TerrainQuad::getSize() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int sgt::TerrainQuad::getDepth() const
	static int _bind_getDepth(lua_State *L) {
		if (!_lg_typecheck_getDepth(L)) {
			luaL_error(L, "luna typecheck failed in int sgt::TerrainQuad::getDepth() const function, expected prototype:\nint sgt::TerrainQuad::getDepth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int sgt::TerrainQuad::getDepth() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getDepth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::TerrainQuad::update()
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainQuad::update() function, expected prototype:\nvoid sgt::TerrainQuad::update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainQuad::update(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->update();

		return 0;
	}

	// void sgt::TerrainQuad::traverse(osg::NodeVisitor & nv)
	static int _bind_traverse(lua_State *L) {
		if (!_lg_typecheck_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainQuad::traverse(osg::NodeVisitor & nv) function, expected prototype:\nvoid sgt::TerrainQuad::traverse(osg::NodeVisitor & nv)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in sgt::TerrainQuad::traverse function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainQuad::traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->traverse(nv);

		return 0;
	}

	// osg::BoundingSphere sgt::TerrainQuad::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphere sgt::TerrainQuad::computeBound() const function, expected prototype:\nosg::BoundingSphere sgt::TerrainQuad::computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphere sgt::TerrainQuad::computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphere stack_lret = self->computeBound();
		osg::BoundingSphere* lret = new osg::BoundingSphere(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphere >::push(L,lret,true);

		return 1;
	}

	// sgt::TerrainNode * sgt::TerrainQuad::getOwner()
	static int _bind_getOwner(lua_State *L) {
		if (!_lg_typecheck_getOwner(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TerrainNode * sgt::TerrainQuad::getOwner() function, expected prototype:\nsgt::TerrainNode * sgt::TerrainQuad::getOwner()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::TerrainNode * sgt::TerrainQuad::getOwner(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::TerrainNode * lret = self->getOwner();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::TerrainNode >::push(L,lret,false);

		return 1;
	}

	// sgtObserver< sgt::TerrainQuad > sgt::TerrainQuad::parent()
	static int _bind_getParent(lua_State *L) {
		if (!_lg_typecheck_getParent(L)) {
			luaL_error(L, "luna typecheck failed in sgtObserver< sgt::TerrainQuad > sgt::TerrainQuad::parent() function, expected prototype:\nsgtObserver< sgt::TerrainQuad > sgt::TerrainQuad::parent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgtObserver< sgt::TerrainQuad > sgt::TerrainQuad::parent(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const sgtObserver< sgt::TerrainQuad >* lret = &self->parent;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgtObserver< sgt::TerrainQuad > >::push(L,lret,false);

		return 1;
	}

	// const int sgt::TerrainQuad::level()
	static int _bind_getLevel(lua_State *L) {
		if (!_lg_typecheck_getLevel(L)) {
			luaL_error(L, "luna typecheck failed in const int sgt::TerrainQuad::level() function, expected prototype:\nconst int sgt::TerrainQuad::level()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const int sgt::TerrainQuad::level(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const int lret = self->level;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const int sgt::TerrainQuad::tx()
	static int _bind_getTx(lua_State *L) {
		if (!_lg_typecheck_getTx(L)) {
			luaL_error(L, "luna typecheck failed in const int sgt::TerrainQuad::tx() function, expected prototype:\nconst int sgt::TerrainQuad::tx()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const int sgt::TerrainQuad::tx(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const int lret = self->tx;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const int sgt::TerrainQuad::ty()
	static int _bind_getTy(lua_State *L) {
		if (!_lg_typecheck_getTy(L)) {
			luaL_error(L, "luna typecheck failed in const int sgt::TerrainQuad::ty() function, expected prototype:\nconst int sgt::TerrainQuad::ty()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const int sgt::TerrainQuad::ty(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const int lret = self->ty;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const double sgt::TerrainQuad::ox()
	static int _bind_getOx(lua_State *L) {
		if (!_lg_typecheck_getOx(L)) {
			luaL_error(L, "luna typecheck failed in const double sgt::TerrainQuad::ox() function, expected prototype:\nconst double sgt::TerrainQuad::ox()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const double sgt::TerrainQuad::ox(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const double lret = self->ox;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const double sgt::TerrainQuad::oy()
	static int _bind_getOy(lua_State *L) {
		if (!_lg_typecheck_getOy(L)) {
			luaL_error(L, "luna typecheck failed in const double sgt::TerrainQuad::oy() function, expected prototype:\nconst double sgt::TerrainQuad::oy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const double sgt::TerrainQuad::oy(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const double lret = self->oy;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const double sgt::TerrainQuad::l()
	static int _bind_getL(lua_State *L) {
		if (!_lg_typecheck_getL(L)) {
			luaL_error(L, "luna typecheck failed in const double sgt::TerrainQuad::l() function, expected prototype:\nconst double sgt::TerrainQuad::l()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const double sgt::TerrainQuad::l(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const double lret = self->l;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float sgt::TerrainQuad::zmin()
	static int _bind_getZmin(lua_State *L) {
		if (!_lg_typecheck_getZmin(L)) {
			luaL_error(L, "luna typecheck failed in float sgt::TerrainQuad::zmin() function, expected prototype:\nfloat sgt::TerrainQuad::zmin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float sgt::TerrainQuad::zmin(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->zmin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float sgt::TerrainQuad::zmax()
	static int _bind_getZmax(lua_State *L) {
		if (!_lg_typecheck_getZmax(L)) {
			luaL_error(L, "luna typecheck failed in float sgt::TerrainQuad::zmax() function, expected prototype:\nfloat sgt::TerrainQuad::zmax()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float sgt::TerrainQuad::zmax(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->zmax;
		lua_pushnumber(L,lret);

		return 1;
	}

	// sgt::LandManager::Visibility sgt::TerrainQuad::visible()
	static int _bind_getVisible(lua_State *L) {
		if (!_lg_typecheck_getVisible(L)) {
			luaL_error(L, "luna typecheck failed in sgt::LandManager::Visibility sgt::TerrainQuad::visible() function, expected prototype:\nsgt::LandManager::Visibility sgt::TerrainQuad::visible()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::LandManager::Visibility sgt::TerrainQuad::visible(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::LandManager::Visibility lret = self->visible;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool sgt::TerrainQuad::occluded()
	static int _bind_getOccluded(lua_State *L) {
		if (!_lg_typecheck_getOccluded(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::TerrainQuad::occluded() function, expected prototype:\nbool sgt::TerrainQuad::occluded()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::TerrainQuad::occluded(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->occluded;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool sgt::TerrainQuad::drawable()
	static int _bind_getDrawable(lua_State *L) {
		if (!_lg_typecheck_getDrawable(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::TerrainQuad::drawable() function, expected prototype:\nbool sgt::TerrainQuad::drawable()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::TerrainQuad::drawable(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->drawable;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::ref_ptr< osg::Uniform > sgt::TerrainQuad::screenQuadCornersU()
	static int _bind_getScreenQuadCornersU(lua_State *L) {
		if (!_lg_typecheck_getScreenQuadCornersU(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Uniform > sgt::TerrainQuad::screenQuadCornersU() function, expected prototype:\nosg::ref_ptr< osg::Uniform > sgt::TerrainQuad::screenQuadCornersU()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Uniform > sgt::TerrainQuad::screenQuadCornersU(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::Uniform > lret = self->screenQuadCornersU;
		Luna< osg::Uniform >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osg::Uniform > sgt::TerrainQuad::screenQuadVerticalsU()
	static int _bind_getScreenQuadVerticalsU(lua_State *L) {
		if (!_lg_typecheck_getScreenQuadVerticalsU(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Uniform > sgt::TerrainQuad::screenQuadVerticalsU() function, expected prototype:\nosg::ref_ptr< osg::Uniform > sgt::TerrainQuad::screenQuadVerticalsU()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Uniform > sgt::TerrainQuad::screenQuadVerticalsU(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::Uniform > lret = self->screenQuadVerticalsU;
		Luna< osg::Uniform >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osg::Uniform > sgt::TerrainQuad::offsetU()
	static int _bind_getOffsetU(lua_State *L) {
		if (!_lg_typecheck_getOffsetU(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Uniform > sgt::TerrainQuad::offsetU() function, expected prototype:\nosg::ref_ptr< osg::Uniform > sgt::TerrainQuad::offsetU()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Uniform > sgt::TerrainQuad::offsetU(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::Uniform > lret = self->offsetU;
		Luna< osg::Uniform >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osg::Uniform > sgt::TerrainQuad::cameraU()
	static int _bind_getCameraU(lua_State *L) {
		if (!_lg_typecheck_getCameraU(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Uniform > sgt::TerrainQuad::cameraU() function, expected prototype:\nosg::ref_ptr< osg::Uniform > sgt::TerrainQuad::cameraU()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Uniform > sgt::TerrainQuad::cameraU(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::Uniform > lret = self->cameraU;
		Luna< osg::Uniform >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osg::Uniform > sgt::TerrainQuad::tileToTangentU()
	static int _bind_getTileToTangentU(lua_State *L) {
		if (!_lg_typecheck_getTileToTangentU(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Uniform > sgt::TerrainQuad::tileToTangentU() function, expected prototype:\nosg::ref_ptr< osg::Uniform > sgt::TerrainQuad::tileToTangentU()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Uniform > sgt::TerrainQuad::tileToTangentU(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::Uniform > lret = self->tileToTangentU;
		Luna< osg::Uniform >::push(L,lret.get(),false);

		return 1;
	}

	// void sgt::TerrainQuad::parent(sgtObserver< sgt::TerrainQuad > value)
	static int _bind_setParent(lua_State *L) {
		if (!_lg_typecheck_setParent(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainQuad::parent(sgtObserver< sgt::TerrainQuad > value) function, expected prototype:\nvoid sgt::TerrainQuad::parent(sgtObserver< sgt::TerrainQuad > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		sgtObserver< sgt::TerrainQuad >* value_ptr=(Luna< sgtObserver< sgt::TerrainQuad > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in sgt::TerrainQuad::parent function");
		}
		sgtObserver< sgt::TerrainQuad > value=*value_ptr;

		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainQuad::parent(sgtObserver< sgt::TerrainQuad >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->parent = value;

		return 0;
	}

	// void sgt::TerrainQuad::zmin(float value)
	static int _bind_setZmin(lua_State *L) {
		if (!_lg_typecheck_setZmin(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainQuad::zmin(float value) function, expected prototype:\nvoid sgt::TerrainQuad::zmin(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainQuad::zmin(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->zmin = value;

		return 0;
	}

	// void sgt::TerrainQuad::zmax(float value)
	static int _bind_setZmax(lua_State *L) {
		if (!_lg_typecheck_setZmax(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainQuad::zmax(float value) function, expected prototype:\nvoid sgt::TerrainQuad::zmax(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainQuad::zmax(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->zmax = value;

		return 0;
	}

	// void sgt::TerrainQuad::visible(sgt::LandManager::Visibility value)
	static int _bind_setVisible(lua_State *L) {
		if (!_lg_typecheck_setVisible(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainQuad::visible(sgt::LandManager::Visibility value) function, expected prototype:\nvoid sgt::TerrainQuad::visible(sgt::LandManager::Visibility value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::LandManager::Visibility value=(sgt::LandManager::Visibility)lua_tointeger(L,2);

		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainQuad::visible(sgt::LandManager::Visibility). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->visible = value;

		return 0;
	}

	// void sgt::TerrainQuad::occluded(bool value)
	static int _bind_setOccluded(lua_State *L) {
		if (!_lg_typecheck_setOccluded(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainQuad::occluded(bool value) function, expected prototype:\nvoid sgt::TerrainQuad::occluded(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainQuad::occluded(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->occluded = value;

		return 0;
	}

	// void sgt::TerrainQuad::drawable(bool value)
	static int _bind_setDrawable(lua_State *L) {
		if (!_lg_typecheck_setDrawable(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainQuad::drawable(bool value) function, expected prototype:\nvoid sgt::TerrainQuad::drawable(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainQuad::drawable(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawable = value;

		return 0;
	}

	// void sgt::TerrainQuad::screenQuadCornersU(osg::ref_ptr< osg::Uniform > value)
	static int _bind_setScreenQuadCornersU(lua_State *L) {
		if (!_lg_typecheck_setScreenQuadCornersU(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainQuad::screenQuadCornersU(osg::ref_ptr< osg::Uniform > value) function, expected prototype:\nvoid sgt::TerrainQuad::screenQuadCornersU(osg::ref_ptr< osg::Uniform > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::Uniform > value = dynamic_cast< osg::Uniform* >(Luna< osg::Referenced >::check(L,2));

		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainQuad::screenQuadCornersU(osg::ref_ptr< osg::Uniform >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->screenQuadCornersU = value;

		return 0;
	}

	// void sgt::TerrainQuad::screenQuadVerticalsU(osg::ref_ptr< osg::Uniform > value)
	static int _bind_setScreenQuadVerticalsU(lua_State *L) {
		if (!_lg_typecheck_setScreenQuadVerticalsU(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainQuad::screenQuadVerticalsU(osg::ref_ptr< osg::Uniform > value) function, expected prototype:\nvoid sgt::TerrainQuad::screenQuadVerticalsU(osg::ref_ptr< osg::Uniform > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::Uniform > value = dynamic_cast< osg::Uniform* >(Luna< osg::Referenced >::check(L,2));

		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainQuad::screenQuadVerticalsU(osg::ref_ptr< osg::Uniform >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->screenQuadVerticalsU = value;

		return 0;
	}

	// void sgt::TerrainQuad::offsetU(osg::ref_ptr< osg::Uniform > value)
	static int _bind_setOffsetU(lua_State *L) {
		if (!_lg_typecheck_setOffsetU(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainQuad::offsetU(osg::ref_ptr< osg::Uniform > value) function, expected prototype:\nvoid sgt::TerrainQuad::offsetU(osg::ref_ptr< osg::Uniform > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::Uniform > value = dynamic_cast< osg::Uniform* >(Luna< osg::Referenced >::check(L,2));

		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainQuad::offsetU(osg::ref_ptr< osg::Uniform >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->offsetU = value;

		return 0;
	}

	// void sgt::TerrainQuad::cameraU(osg::ref_ptr< osg::Uniform > value)
	static int _bind_setCameraU(lua_State *L) {
		if (!_lg_typecheck_setCameraU(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainQuad::cameraU(osg::ref_ptr< osg::Uniform > value) function, expected prototype:\nvoid sgt::TerrainQuad::cameraU(osg::ref_ptr< osg::Uniform > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::Uniform > value = dynamic_cast< osg::Uniform* >(Luna< osg::Referenced >::check(L,2));

		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainQuad::cameraU(osg::ref_ptr< osg::Uniform >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->cameraU = value;

		return 0;
	}

	// void sgt::TerrainQuad::tileToTangentU(osg::ref_ptr< osg::Uniform > value)
	static int _bind_setTileToTangentU(lua_State *L) {
		if (!_lg_typecheck_setTileToTangentU(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainQuad::tileToTangentU(osg::ref_ptr< osg::Uniform > value) function, expected prototype:\nvoid sgt::TerrainQuad::tileToTangentU(osg::ref_ptr< osg::Uniform > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::Uniform > value = dynamic_cast< osg::Uniform* >(Luna< osg::Referenced >::check(L,2));

		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainQuad::tileToTangentU(osg::ref_ptr< osg::Uniform >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->tileToTangentU = value;

		return 0;
	}

	// void sgt::TerrainQuad::base_traverse(osg::NodeVisitor & nv)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainQuad::base_traverse(osg::NodeVisitor & nv) function, expected prototype:\nvoid sgt::TerrainQuad::base_traverse(osg::NodeVisitor & nv)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in sgt::TerrainQuad::base_traverse function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainQuad::base_traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TerrainQuad::traverse(nv);

		return 0;
	}

	// osg::BoundingSphere sgt::TerrainQuad::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphere sgt::TerrainQuad::base_computeBound() const function, expected prototype:\nosg::BoundingSphere sgt::TerrainQuad::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainQuad* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphere sgt::TerrainQuad::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphere stack_lret = self->TerrainQuad::computeBound();
		osg::BoundingSphere* lret = new osg::BoundingSphere(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphere >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

sgt::TerrainQuad* LunaTraits< sgt::TerrainQuad >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_TerrainQuad::_bind_ctor(L);
}

void LunaTraits< sgt::TerrainQuad >::_bind_dtor(sgt::TerrainQuad* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< sgt::TerrainQuad >::className[] = "TerrainQuad";
const char LunaTraits< sgt::TerrainQuad >::fullName[] = "sgt::TerrainQuad";
const char LunaTraits< sgt::TerrainQuad >::moduleName[] = "sgt";
const char* LunaTraits< sgt::TerrainQuad >::parents[] = {"osg.Node", 0};
const int LunaTraits< sgt::TerrainQuad >::hash = 32371091;
const int LunaTraits< sgt::TerrainQuad >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< sgt::TerrainQuad >::methods[] = {
	{"isLeaf", &luna_wrapper_sgt_TerrainQuad::_bind_isLeaf},
	{"getSize", &luna_wrapper_sgt_TerrainQuad::_bind_getSize},
	{"getDepth", &luna_wrapper_sgt_TerrainQuad::_bind_getDepth},
	{"update", &luna_wrapper_sgt_TerrainQuad::_bind_update},
	{"traverse", &luna_wrapper_sgt_TerrainQuad::_bind_traverse},
	{"computeBound", &luna_wrapper_sgt_TerrainQuad::_bind_computeBound},
	{"getOwner", &luna_wrapper_sgt_TerrainQuad::_bind_getOwner},
	{"getParent", &luna_wrapper_sgt_TerrainQuad::_bind_getParent},
	{"getLevel", &luna_wrapper_sgt_TerrainQuad::_bind_getLevel},
	{"getTx", &luna_wrapper_sgt_TerrainQuad::_bind_getTx},
	{"getTy", &luna_wrapper_sgt_TerrainQuad::_bind_getTy},
	{"getOx", &luna_wrapper_sgt_TerrainQuad::_bind_getOx},
	{"getOy", &luna_wrapper_sgt_TerrainQuad::_bind_getOy},
	{"getL", &luna_wrapper_sgt_TerrainQuad::_bind_getL},
	{"getZmin", &luna_wrapper_sgt_TerrainQuad::_bind_getZmin},
	{"getZmax", &luna_wrapper_sgt_TerrainQuad::_bind_getZmax},
	{"getVisible", &luna_wrapper_sgt_TerrainQuad::_bind_getVisible},
	{"getOccluded", &luna_wrapper_sgt_TerrainQuad::_bind_getOccluded},
	{"getDrawable", &luna_wrapper_sgt_TerrainQuad::_bind_getDrawable},
	{"getScreenQuadCornersU", &luna_wrapper_sgt_TerrainQuad::_bind_getScreenQuadCornersU},
	{"getScreenQuadVerticalsU", &luna_wrapper_sgt_TerrainQuad::_bind_getScreenQuadVerticalsU},
	{"getOffsetU", &luna_wrapper_sgt_TerrainQuad::_bind_getOffsetU},
	{"getCameraU", &luna_wrapper_sgt_TerrainQuad::_bind_getCameraU},
	{"getTileToTangentU", &luna_wrapper_sgt_TerrainQuad::_bind_getTileToTangentU},
	{"setParent", &luna_wrapper_sgt_TerrainQuad::_bind_setParent},
	{"setZmin", &luna_wrapper_sgt_TerrainQuad::_bind_setZmin},
	{"setZmax", &luna_wrapper_sgt_TerrainQuad::_bind_setZmax},
	{"setVisible", &luna_wrapper_sgt_TerrainQuad::_bind_setVisible},
	{"setOccluded", &luna_wrapper_sgt_TerrainQuad::_bind_setOccluded},
	{"setDrawable", &luna_wrapper_sgt_TerrainQuad::_bind_setDrawable},
	{"setScreenQuadCornersU", &luna_wrapper_sgt_TerrainQuad::_bind_setScreenQuadCornersU},
	{"setScreenQuadVerticalsU", &luna_wrapper_sgt_TerrainQuad::_bind_setScreenQuadVerticalsU},
	{"setOffsetU", &luna_wrapper_sgt_TerrainQuad::_bind_setOffsetU},
	{"setCameraU", &luna_wrapper_sgt_TerrainQuad::_bind_setCameraU},
	{"setTileToTangentU", &luna_wrapper_sgt_TerrainQuad::_bind_setTileToTangentU},
	{"base_traverse", &luna_wrapper_sgt_TerrainQuad::_bind_base_traverse},
	{"base_computeBound", &luna_wrapper_sgt_TerrainQuad::_bind_base_computeBound},
	{"fromVoid", &luna_wrapper_sgt_TerrainQuad::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_TerrainQuad::_bind_asVoid},
	{"getTable", &luna_wrapper_sgt_TerrainQuad::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::TerrainQuad >::converters[] = {
	{"osg::Node", &luna_wrapper_sgt_TerrainQuad::_cast_from_Node},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::TerrainQuad >::enumValues[] = {
	{0,0}
};


