#include <plug_common.h>

#include <luna/wrappers/wrapper_gizmo_GizmoDrawable.h>

class luna_wrapper_gizmo_GizmoDrawable {
public:
	typedef Luna< gizmo::GizmoDrawable > luna_t;

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

		gizmo::GizmoDrawable* self= (gizmo::GizmoDrawable*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< gizmo::GizmoDrawable >::push(L,self,false);
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
	static int _cast_from_Drawable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//gizmo::GizmoDrawable* ptr= dynamic_cast< gizmo::GizmoDrawable* >(Luna< osg::Referenced >::check(L,1));
		gizmo::GizmoDrawable* ptr= luna_caster< osg::Referenced, gizmo::GizmoDrawable >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< gizmo::GizmoDrawable >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< gizmo::GizmoDrawable >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< gizmo::GizmoDrawable >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setGizmoMode(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGizmoMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGizmoObject_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGizmoObject_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTransform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setScreenSize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_applyTransform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// gizmo::GizmoDrawable::GizmoDrawable()
	static gizmo::GizmoDrawable* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in gizmo::GizmoDrawable::GizmoDrawable() function, expected prototype:\ngizmo::GizmoDrawable::GizmoDrawable()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new gizmo::GizmoDrawable();
	}

	// gizmo::GizmoDrawable::GizmoDrawable(const gizmo::GizmoDrawable & copy, osg::CopyOp op = osg::CopyOp::SHALLOW_COPY)
	static gizmo::GizmoDrawable* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in gizmo::GizmoDrawable::GizmoDrawable(const gizmo::GizmoDrawable & copy, osg::CopyOp op = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\ngizmo::GizmoDrawable::GizmoDrawable(const gizmo::GizmoDrawable & copy, osg::CopyOp op = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 20484188\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const gizmo::GizmoDrawable* copy_ptr=(Luna< osg::Referenced >::checkSubType< gizmo::GizmoDrawable >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in gizmo::GizmoDrawable::GizmoDrawable function");
		}
		const gizmo::GizmoDrawable & copy=*copy_ptr;
		osg::CopyOp* op_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !op_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg op in gizmo::GizmoDrawable::GizmoDrawable function");
		}
		osg::CopyOp op=luatop>1 ? *op_ptr : (osg::CopyOp)osg::CopyOp::SHALLOW_COPY;

		return new gizmo::GizmoDrawable(copy, op);
	}

	// gizmo::GizmoDrawable::GizmoDrawable(lua_Table * data)
	static gizmo::GizmoDrawable* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in gizmo::GizmoDrawable::GizmoDrawable(lua_Table * data) function, expected prototype:\ngizmo::GizmoDrawable::GizmoDrawable(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_gizmo_GizmoDrawable(L,NULL);
	}

	// gizmo::GizmoDrawable::GizmoDrawable(lua_Table * data, const gizmo::GizmoDrawable & copy, osg::CopyOp op = osg::CopyOp::SHALLOW_COPY)
	static gizmo::GizmoDrawable* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in gizmo::GizmoDrawable::GizmoDrawable(lua_Table * data, const gizmo::GizmoDrawable & copy, osg::CopyOp op = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\ngizmo::GizmoDrawable::GizmoDrawable(lua_Table * data, const gizmo::GizmoDrawable & copy, osg::CopyOp op = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 20484188\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const gizmo::GizmoDrawable* copy_ptr=(Luna< osg::Referenced >::checkSubType< gizmo::GizmoDrawable >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in gizmo::GizmoDrawable::GizmoDrawable function");
		}
		const gizmo::GizmoDrawable & copy=*copy_ptr;
		osg::CopyOp* op_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !op_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg op in gizmo::GizmoDrawable::GizmoDrawable function");
		}
		osg::CopyOp op=luatop>2 ? *op_ptr : (osg::CopyOp)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_gizmo_GizmoDrawable(L,NULL, copy, op);
	}

	// Overload binder for gizmo::GizmoDrawable::GizmoDrawable
	static gizmo::GizmoDrawable* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function GizmoDrawable, cannot match any of the overloads for function GizmoDrawable:\n  GizmoDrawable()\n  GizmoDrawable(const gizmo::GizmoDrawable &, osg::CopyOp)\n  GizmoDrawable(lua_Table *)\n  GizmoDrawable(lua_Table *, const gizmo::GizmoDrawable &, osg::CopyOp)\n");
		return NULL;
	}


	// Function binds:
	// void gizmo::GizmoDrawable::setGizmoMode(gizmo::GizmoDrawable::Mode m, IGizmo::LOCATION loc = IGizmo::LOCATE_LOCAL)
	static int _bind_setGizmoMode(lua_State *L) {
		if (!_lg_typecheck_setGizmoMode(L)) {
			luaL_error(L, "luna typecheck failed in void gizmo::GizmoDrawable::setGizmoMode(gizmo::GizmoDrawable::Mode m, IGizmo::LOCATION loc = IGizmo::LOCATE_LOCAL) function, expected prototype:\nvoid gizmo::GizmoDrawable::setGizmoMode(gizmo::GizmoDrawable::Mode m, IGizmo::LOCATION loc = IGizmo::LOCATE_LOCAL)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		gizmo::GizmoDrawable::Mode m=(gizmo::GizmoDrawable::Mode)lua_tointeger(L,2);
		IGizmo::LOCATION loc=luatop>2 ? (IGizmo::LOCATION)lua_tointeger(L,3) : (IGizmo::LOCATION)IGizmo::LOCATE_LOCAL;

		gizmo::GizmoDrawable* self=Luna< osg::Referenced >::checkSubType< gizmo::GizmoDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void gizmo::GizmoDrawable::setGizmoMode(gizmo::GizmoDrawable::Mode, IGizmo::LOCATION). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setGizmoMode(m, loc);

		return 0;
	}

	// gizmo::GizmoDrawable::Mode gizmo::GizmoDrawable::getGizmoMode() const
	static int _bind_getGizmoMode(lua_State *L) {
		if (!_lg_typecheck_getGizmoMode(L)) {
			luaL_error(L, "luna typecheck failed in gizmo::GizmoDrawable::Mode gizmo::GizmoDrawable::getGizmoMode() const function, expected prototype:\ngizmo::GizmoDrawable::Mode gizmo::GizmoDrawable::getGizmoMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		gizmo::GizmoDrawable* self=Luna< osg::Referenced >::checkSubType< gizmo::GizmoDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call gizmo::GizmoDrawable::Mode gizmo::GizmoDrawable::getGizmoMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		gizmo::GizmoDrawable::Mode lret = self->getGizmoMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// IGizmo * gizmo::GizmoDrawable::getGizmoObject()
	static int _bind_getGizmoObject_overload_1(lua_State *L) {
		if (!_lg_typecheck_getGizmoObject_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in IGizmo * gizmo::GizmoDrawable::getGizmoObject() function, expected prototype:\nIGizmo * gizmo::GizmoDrawable::getGizmoObject()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		gizmo::GizmoDrawable* self=Luna< osg::Referenced >::checkSubType< gizmo::GizmoDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call IGizmo * gizmo::GizmoDrawable::getGizmoObject(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IGizmo * lret = self->getGizmoObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IGizmo >::push(L,lret,false);

		return 1;
	}

	// const IGizmo * gizmo::GizmoDrawable::getGizmoObject() const
	static int _bind_getGizmoObject_overload_2(lua_State *L) {
		if (!_lg_typecheck_getGizmoObject_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const IGizmo * gizmo::GizmoDrawable::getGizmoObject() const function, expected prototype:\nconst IGizmo * gizmo::GizmoDrawable::getGizmoObject() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		gizmo::GizmoDrawable* self=Luna< osg::Referenced >::checkSubType< gizmo::GizmoDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const IGizmo * gizmo::GizmoDrawable::getGizmoObject() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const IGizmo * lret = self->getGizmoObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IGizmo >::push(L,lret,false);

		return 1;
	}

	// Overload binder for gizmo::GizmoDrawable::getGizmoObject
	static int _bind_getGizmoObject(lua_State *L) {
		if (_lg_typecheck_getGizmoObject_overload_1(L)) return _bind_getGizmoObject_overload_1(L);
		if (_lg_typecheck_getGizmoObject_overload_2(L)) return _bind_getGizmoObject_overload_2(L);

		luaL_error(L, "error in function getGizmoObject, cannot match any of the overloads for function getGizmoObject:\n  getGizmoObject()\n  getGizmoObject()\n");
		return 0;
	}

	// void gizmo::GizmoDrawable::setTransform(osg::MatrixTransform * node)
	static int _bind_setTransform(lua_State *L) {
		if (!_lg_typecheck_setTransform(L)) {
			luaL_error(L, "luna typecheck failed in void gizmo::GizmoDrawable::setTransform(osg::MatrixTransform * node) function, expected prototype:\nvoid gizmo::GizmoDrawable::setTransform(osg::MatrixTransform * node)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::MatrixTransform* node=(Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,2));

		gizmo::GizmoDrawable* self=Luna< osg::Referenced >::checkSubType< gizmo::GizmoDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void gizmo::GizmoDrawable::setTransform(osg::MatrixTransform *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTransform(node);

		return 0;
	}

	// osg::MatrixTransform * gizmo::GizmoDrawable::getTransform()
	static int _bind_getTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::MatrixTransform * gizmo::GizmoDrawable::getTransform() function, expected prototype:\nosg::MatrixTransform * gizmo::GizmoDrawable::getTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		gizmo::GizmoDrawable* self=Luna< osg::Referenced >::checkSubType< gizmo::GizmoDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::MatrixTransform * gizmo::GizmoDrawable::getTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::MatrixTransform * lret = self->getTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::MatrixTransform >::push(L,lret,false);

		return 1;
	}

	// const osg::MatrixTransform * gizmo::GizmoDrawable::getTransform() const
	static int _bind_getTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::MatrixTransform * gizmo::GizmoDrawable::getTransform() const function, expected prototype:\nconst osg::MatrixTransform * gizmo::GizmoDrawable::getTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		gizmo::GizmoDrawable* self=Luna< osg::Referenced >::checkSubType< gizmo::GizmoDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::MatrixTransform * gizmo::GizmoDrawable::getTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::MatrixTransform * lret = self->getTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::MatrixTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for gizmo::GizmoDrawable::getTransform
	static int _bind_getTransform(lua_State *L) {
		if (_lg_typecheck_getTransform_overload_1(L)) return _bind_getTransform_overload_1(L);
		if (_lg_typecheck_getTransform_overload_2(L)) return _bind_getTransform_overload_2(L);

		luaL_error(L, "error in function getTransform, cannot match any of the overloads for function getTransform:\n  getTransform()\n  getTransform()\n");
		return 0;
	}

	// void gizmo::GizmoDrawable::setScreenSize(int w, int h)
	static int _bind_setScreenSize(lua_State *L) {
		if (!_lg_typecheck_setScreenSize(L)) {
			luaL_error(L, "luna typecheck failed in void gizmo::GizmoDrawable::setScreenSize(int w, int h) function, expected prototype:\nvoid gizmo::GizmoDrawable::setScreenSize(int w, int h)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int w=(int)lua_tointeger(L,2);
		int h=(int)lua_tointeger(L,3);

		gizmo::GizmoDrawable* self=Luna< osg::Referenced >::checkSubType< gizmo::GizmoDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void gizmo::GizmoDrawable::setScreenSize(int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setScreenSize(w, h);

		return 0;
	}

	// void gizmo::GizmoDrawable::applyTransform()
	static int _bind_applyTransform(lua_State *L) {
		if (!_lg_typecheck_applyTransform(L)) {
			luaL_error(L, "luna typecheck failed in void gizmo::GizmoDrawable::applyTransform() function, expected prototype:\nvoid gizmo::GizmoDrawable::applyTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		gizmo::GizmoDrawable* self=Luna< osg::Referenced >::checkSubType< gizmo::GizmoDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void gizmo::GizmoDrawable::applyTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->applyTransform();

		return 0;
	}

	// osg::Object * gizmo::GizmoDrawable::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * gizmo::GizmoDrawable::cloneType() const function, expected prototype:\nosg::Object * gizmo::GizmoDrawable::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		gizmo::GizmoDrawable* self=Luna< osg::Referenced >::checkSubType< gizmo::GizmoDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * gizmo::GizmoDrawable::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * gizmo::GizmoDrawable::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * gizmo::GizmoDrawable::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * gizmo::GizmoDrawable::clone(const osg::CopyOp & copyop) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in gizmo::GizmoDrawable::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		gizmo::GizmoDrawable* self=Luna< osg::Referenced >::checkSubType< gizmo::GizmoDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * gizmo::GizmoDrawable::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool gizmo::GizmoDrawable::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool gizmo::GizmoDrawable::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool gizmo::GizmoDrawable::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		gizmo::GizmoDrawable* self=Luna< osg::Referenced >::checkSubType< gizmo::GizmoDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool gizmo::GizmoDrawable::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * gizmo::GizmoDrawable::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * gizmo::GizmoDrawable::libraryName() const function, expected prototype:\nconst char * gizmo::GizmoDrawable::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		gizmo::GizmoDrawable* self=Luna< osg::Referenced >::checkSubType< gizmo::GizmoDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * gizmo::GizmoDrawable::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * gizmo::GizmoDrawable::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * gizmo::GizmoDrawable::className() const function, expected prototype:\nconst char * gizmo::GizmoDrawable::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		gizmo::GizmoDrawable* self=Luna< osg::Referenced >::checkSubType< gizmo::GizmoDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * gizmo::GizmoDrawable::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void gizmo::GizmoDrawable::drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_drawImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void gizmo::GizmoDrawable::drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid gizmo::GizmoDrawable::drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in gizmo::GizmoDrawable::drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		gizmo::GizmoDrawable* self=Luna< osg::Referenced >::checkSubType< gizmo::GizmoDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void gizmo::GizmoDrawable::drawImplementation(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawImplementation(renderInfo);

		return 0;
	}

	// osg::Object * gizmo::GizmoDrawable::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * gizmo::GizmoDrawable::base_cloneType() const function, expected prototype:\nosg::Object * gizmo::GizmoDrawable::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		gizmo::GizmoDrawable* self=Luna< osg::Referenced >::checkSubType< gizmo::GizmoDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * gizmo::GizmoDrawable::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->GizmoDrawable::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * gizmo::GizmoDrawable::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * gizmo::GizmoDrawable::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * gizmo::GizmoDrawable::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in gizmo::GizmoDrawable::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		gizmo::GizmoDrawable* self=Luna< osg::Referenced >::checkSubType< gizmo::GizmoDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * gizmo::GizmoDrawable::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->GizmoDrawable::clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool gizmo::GizmoDrawable::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool gizmo::GizmoDrawable::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool gizmo::GizmoDrawable::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		gizmo::GizmoDrawable* self=Luna< osg::Referenced >::checkSubType< gizmo::GizmoDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool gizmo::GizmoDrawable::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GizmoDrawable::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * gizmo::GizmoDrawable::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * gizmo::GizmoDrawable::base_libraryName() const function, expected prototype:\nconst char * gizmo::GizmoDrawable::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		gizmo::GizmoDrawable* self=Luna< osg::Referenced >::checkSubType< gizmo::GizmoDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * gizmo::GizmoDrawable::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->GizmoDrawable::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * gizmo::GizmoDrawable::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * gizmo::GizmoDrawable::base_className() const function, expected prototype:\nconst char * gizmo::GizmoDrawable::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		gizmo::GizmoDrawable* self=Luna< osg::Referenced >::checkSubType< gizmo::GizmoDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * gizmo::GizmoDrawable::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->GizmoDrawable::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void gizmo::GizmoDrawable::base_drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_base_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_base_drawImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void gizmo::GizmoDrawable::base_drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid gizmo::GizmoDrawable::base_drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in gizmo::GizmoDrawable::base_drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		gizmo::GizmoDrawable* self=Luna< osg::Referenced >::checkSubType< gizmo::GizmoDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void gizmo::GizmoDrawable::base_drawImplementation(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GizmoDrawable::drawImplementation(renderInfo);

		return 0;
	}


	// Operator binds:

};

gizmo::GizmoDrawable* LunaTraits< gizmo::GizmoDrawable >::_bind_ctor(lua_State *L) {
	return luna_wrapper_gizmo_GizmoDrawable::_bind_ctor(L);
}

void LunaTraits< gizmo::GizmoDrawable >::_bind_dtor(gizmo::GizmoDrawable* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< gizmo::GizmoDrawable >::className[] = "GizmoDrawable";
const char LunaTraits< gizmo::GizmoDrawable >::fullName[] = "gizmo::GizmoDrawable";
const char LunaTraits< gizmo::GizmoDrawable >::moduleName[] = "gizmo";
const char* LunaTraits< gizmo::GizmoDrawable >::parents[] = {"osg.Drawable", 0};
const int LunaTraits< gizmo::GizmoDrawable >::hash = 60285906;
const int LunaTraits< gizmo::GizmoDrawable >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< gizmo::GizmoDrawable >::methods[] = {
	{"setGizmoMode", &luna_wrapper_gizmo_GizmoDrawable::_bind_setGizmoMode},
	{"getGizmoMode", &luna_wrapper_gizmo_GizmoDrawable::_bind_getGizmoMode},
	{"getGizmoObject", &luna_wrapper_gizmo_GizmoDrawable::_bind_getGizmoObject},
	{"setTransform", &luna_wrapper_gizmo_GizmoDrawable::_bind_setTransform},
	{"getTransform", &luna_wrapper_gizmo_GizmoDrawable::_bind_getTransform},
	{"setScreenSize", &luna_wrapper_gizmo_GizmoDrawable::_bind_setScreenSize},
	{"applyTransform", &luna_wrapper_gizmo_GizmoDrawable::_bind_applyTransform},
	{"cloneType", &luna_wrapper_gizmo_GizmoDrawable::_bind_cloneType},
	{"clone", &luna_wrapper_gizmo_GizmoDrawable::_bind_clone},
	{"isSameKindAs", &luna_wrapper_gizmo_GizmoDrawable::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_gizmo_GizmoDrawable::_bind_libraryName},
	{"className", &luna_wrapper_gizmo_GizmoDrawable::_bind_className},
	{"drawImplementation", &luna_wrapper_gizmo_GizmoDrawable::_bind_drawImplementation},
	{"base_cloneType", &luna_wrapper_gizmo_GizmoDrawable::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_gizmo_GizmoDrawable::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_gizmo_GizmoDrawable::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_gizmo_GizmoDrawable::_bind_base_libraryName},
	{"base_className", &luna_wrapper_gizmo_GizmoDrawable::_bind_base_className},
	{"base_drawImplementation", &luna_wrapper_gizmo_GizmoDrawable::_bind_base_drawImplementation},
	{"fromVoid", &luna_wrapper_gizmo_GizmoDrawable::_bind_fromVoid},
	{"asVoid", &luna_wrapper_gizmo_GizmoDrawable::_bind_asVoid},
	{"getTable", &luna_wrapper_gizmo_GizmoDrawable::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< gizmo::GizmoDrawable >::converters[] = {
	{"osg::Drawable", &luna_wrapper_gizmo_GizmoDrawable::_cast_from_Drawable},
	{0,0}
};

luna_RegEnumType LunaTraits< gizmo::GizmoDrawable >::enumValues[] = {
	{"NO_GIZMO", gizmo::GizmoDrawable::NO_GIZMO},
	{"MOVE_GIZMO", gizmo::GizmoDrawable::MOVE_GIZMO},
	{"ROTATE_GIZMO", gizmo::GizmoDrawable::ROTATE_GIZMO},
	{"SCALE_GIZMO", gizmo::GizmoDrawable::SCALE_GIZMO},
	{0,0}
};


