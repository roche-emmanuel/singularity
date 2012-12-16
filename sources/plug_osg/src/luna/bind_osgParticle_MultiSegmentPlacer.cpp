#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_MultiSegmentPlacer.h>

class luna_wrapper_osgParticle_MultiSegmentPlacer {
public:
	typedef Luna< osgParticle::MultiSegmentPlacer > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Referenced*)");
		}

		osg::Referenced* rhs =(Luna< osg::Referenced >::check(L,2));
		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osgParticle::MultiSegmentPlacer* ptr= dynamic_cast< osgParticle::MultiSegmentPlacer* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::MultiSegmentPlacer* ptr= luna_caster< osg::Referenced, osgParticle::MultiSegmentPlacer >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::MultiSegmentPlacer >::push(L,ptr,false);
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
		if( (!dynamic_cast< osgParticle::MultiSegmentPlacer* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
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
		if( (!dynamic_cast< osgParticle::MultiSegmentPlacer* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
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

	inline static bool _lg_typecheck_numVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertex_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( (!dynamic_cast< osg::Vec3f* >(Luna< osg::Vec3f >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertex_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addVertex_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!dynamic_cast< osg::Vec3f* >(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addVertex_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeVertex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_place(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81629555)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_volume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getControlPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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

	inline static bool _lg_typecheck_base_place(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81629555)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_volume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getControlPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::MultiSegmentPlacer::MultiSegmentPlacer()
	static osgParticle::MultiSegmentPlacer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::MultiSegmentPlacer::MultiSegmentPlacer() function, expected prototype:\nosgParticle::MultiSegmentPlacer::MultiSegmentPlacer()\nClass arguments details:\n");
		}


		return new osgParticle::MultiSegmentPlacer();
	}

	// osgParticle::MultiSegmentPlacer::MultiSegmentPlacer(const osgParticle::MultiSegmentPlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::MultiSegmentPlacer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::MultiSegmentPlacer::MultiSegmentPlacer(const osgParticle::MultiSegmentPlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::MultiSegmentPlacer::MultiSegmentPlacer(const osgParticle::MultiSegmentPlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::MultiSegmentPlacer* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::MultiSegmentPlacer >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::MultiSegmentPlacer::MultiSegmentPlacer function");
		}
		const osgParticle::MultiSegmentPlacer & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::MultiSegmentPlacer::MultiSegmentPlacer function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::MultiSegmentPlacer(copy, copyop);
	}

	// osgParticle::MultiSegmentPlacer::MultiSegmentPlacer(lua_Table * data)
	static osgParticle::MultiSegmentPlacer* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::MultiSegmentPlacer::MultiSegmentPlacer(lua_Table * data) function, expected prototype:\nosgParticle::MultiSegmentPlacer::MultiSegmentPlacer(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgParticle_MultiSegmentPlacer(L,NULL);
	}

	// osgParticle::MultiSegmentPlacer::MultiSegmentPlacer(lua_Table * data, const osgParticle::MultiSegmentPlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::MultiSegmentPlacer* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::MultiSegmentPlacer::MultiSegmentPlacer(lua_Table * data, const osgParticle::MultiSegmentPlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::MultiSegmentPlacer::MultiSegmentPlacer(lua_Table * data, const osgParticle::MultiSegmentPlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::MultiSegmentPlacer* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::MultiSegmentPlacer >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::MultiSegmentPlacer::MultiSegmentPlacer function");
		}
		const osgParticle::MultiSegmentPlacer & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::MultiSegmentPlacer::MultiSegmentPlacer function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_MultiSegmentPlacer(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::MultiSegmentPlacer::MultiSegmentPlacer
	static osgParticle::MultiSegmentPlacer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function MultiSegmentPlacer, cannot match any of the overloads for function MultiSegmentPlacer:\n  MultiSegmentPlacer()\n  MultiSegmentPlacer(const osgParticle::MultiSegmentPlacer &, const osg::CopyOp &)\n  MultiSegmentPlacer(lua_Table *)\n  MultiSegmentPlacer(lua_Table *, const osgParticle::MultiSegmentPlacer &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::MultiSegmentPlacer::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::MultiSegmentPlacer::cloneType() const function, expected prototype:\nosg::Object * osgParticle::MultiSegmentPlacer::cloneType() const\nClass arguments details:\n");
		}


		osgParticle::MultiSegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::MultiSegmentPlacer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::MultiSegmentPlacer::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::MultiSegmentPlacer::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::MultiSegmentPlacer::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgParticle::MultiSegmentPlacer::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::MultiSegmentPlacer::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::MultiSegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::MultiSegmentPlacer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::MultiSegmentPlacer::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::MultiSegmentPlacer::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::MultiSegmentPlacer::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::MultiSegmentPlacer::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::MultiSegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::MultiSegmentPlacer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::MultiSegmentPlacer::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::MultiSegmentPlacer::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::MultiSegmentPlacer::libraryName() const function, expected prototype:\nconst char * osgParticle::MultiSegmentPlacer::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::MultiSegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::MultiSegmentPlacer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::MultiSegmentPlacer::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::MultiSegmentPlacer::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::MultiSegmentPlacer::className() const function, expected prototype:\nconst char * osgParticle::MultiSegmentPlacer::className() const\nClass arguments details:\n");
		}


		osgParticle::MultiSegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::MultiSegmentPlacer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::MultiSegmentPlacer::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// int osgParticle::MultiSegmentPlacer::numVertices() const
	static int _bind_numVertices(lua_State *L) {
		if (!_lg_typecheck_numVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgParticle::MultiSegmentPlacer::numVertices() const function, expected prototype:\nint osgParticle::MultiSegmentPlacer::numVertices() const\nClass arguments details:\n");
		}


		osgParticle::MultiSegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::MultiSegmentPlacer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgParticle::MultiSegmentPlacer::numVertices() const");
		}
		int lret = self->numVertices();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const osg::Vec3f & osgParticle::MultiSegmentPlacer::getVertex(int i) const
	static int _bind_getVertex(lua_State *L) {
		if (!_lg_typecheck_getVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::MultiSegmentPlacer::getVertex(int i) const function, expected prototype:\nconst osg::Vec3f & osgParticle::MultiSegmentPlacer::getVertex(int i) const\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);

		osgParticle::MultiSegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::MultiSegmentPlacer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::MultiSegmentPlacer::getVertex(int) const");
		}
		const osg::Vec3f* lret = &self->getVertex(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::MultiSegmentPlacer::setVertex(int i, const osg::Vec3f & v)
	static int _bind_setVertex_overload_1(lua_State *L) {
		if (!_lg_typecheck_setVertex_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::MultiSegmentPlacer::setVertex(int i, const osg::Vec3f & v) function, expected prototype:\nvoid osgParticle::MultiSegmentPlacer::setVertex(int i, const osg::Vec3f & v)\nClass arguments details:\narg 2 ID = 92303204\n");
		}

		int i=(int)lua_tointeger(L,2);
		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgParticle::MultiSegmentPlacer::setVertex function");
		}
		const osg::Vec3f & v=*v_ptr;

		osgParticle::MultiSegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::MultiSegmentPlacer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::MultiSegmentPlacer::setVertex(int, const osg::Vec3f &)");
		}
		self->setVertex(i, v);

		return 0;
	}

	// void osgParticle::MultiSegmentPlacer::setVertex(int i, float x, float y, float z)
	static int _bind_setVertex_overload_2(lua_State *L) {
		if (!_lg_typecheck_setVertex_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::MultiSegmentPlacer::setVertex(int i, float x, float y, float z) function, expected prototype:\nvoid osgParticle::MultiSegmentPlacer::setVertex(int i, float x, float y, float z)\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);
		float x=(float)lua_tonumber(L,3);
		float y=(float)lua_tonumber(L,4);
		float z=(float)lua_tonumber(L,5);

		osgParticle::MultiSegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::MultiSegmentPlacer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::MultiSegmentPlacer::setVertex(int, float, float, float)");
		}
		self->setVertex(i, x, y, z);

		return 0;
	}

	// Overload binder for osgParticle::MultiSegmentPlacer::setVertex
	static int _bind_setVertex(lua_State *L) {
		if (_lg_typecheck_setVertex_overload_1(L)) return _bind_setVertex_overload_1(L);
		if (_lg_typecheck_setVertex_overload_2(L)) return _bind_setVertex_overload_2(L);

		luaL_error(L, "error in function setVertex, cannot match any of the overloads for function setVertex:\n  setVertex(int, const osg::Vec3f &)\n  setVertex(int, float, float, float)\n");
		return 0;
	}

	// void osgParticle::MultiSegmentPlacer::addVertex(const osg::Vec3f & v)
	static int _bind_addVertex_overload_1(lua_State *L) {
		if (!_lg_typecheck_addVertex_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::MultiSegmentPlacer::addVertex(const osg::Vec3f & v) function, expected prototype:\nvoid osgParticle::MultiSegmentPlacer::addVertex(const osg::Vec3f & v)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgParticle::MultiSegmentPlacer::addVertex function");
		}
		const osg::Vec3f & v=*v_ptr;

		osgParticle::MultiSegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::MultiSegmentPlacer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::MultiSegmentPlacer::addVertex(const osg::Vec3f &)");
		}
		self->addVertex(v);

		return 0;
	}

	// void osgParticle::MultiSegmentPlacer::addVertex(float x, float y, float z)
	static int _bind_addVertex_overload_2(lua_State *L) {
		if (!_lg_typecheck_addVertex_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::MultiSegmentPlacer::addVertex(float x, float y, float z) function, expected prototype:\nvoid osgParticle::MultiSegmentPlacer::addVertex(float x, float y, float z)\nClass arguments details:\n");
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=(float)lua_tonumber(L,4);

		osgParticle::MultiSegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::MultiSegmentPlacer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::MultiSegmentPlacer::addVertex(float, float, float)");
		}
		self->addVertex(x, y, z);

		return 0;
	}

	// Overload binder for osgParticle::MultiSegmentPlacer::addVertex
	static int _bind_addVertex(lua_State *L) {
		if (_lg_typecheck_addVertex_overload_1(L)) return _bind_addVertex_overload_1(L);
		if (_lg_typecheck_addVertex_overload_2(L)) return _bind_addVertex_overload_2(L);

		luaL_error(L, "error in function addVertex, cannot match any of the overloads for function addVertex:\n  addVertex(const osg::Vec3f &)\n  addVertex(float, float, float)\n");
		return 0;
	}

	// void osgParticle::MultiSegmentPlacer::removeVertex(int i)
	static int _bind_removeVertex(lua_State *L) {
		if (!_lg_typecheck_removeVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::MultiSegmentPlacer::removeVertex(int i) function, expected prototype:\nvoid osgParticle::MultiSegmentPlacer::removeVertex(int i)\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);

		osgParticle::MultiSegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::MultiSegmentPlacer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::MultiSegmentPlacer::removeVertex(int)");
		}
		self->removeVertex(i);

		return 0;
	}

	// void osgParticle::MultiSegmentPlacer::place(osgParticle::Particle * P) const
	static int _bind_place(lua_State *L) {
		if (!_lg_typecheck_place(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::MultiSegmentPlacer::place(osgParticle::Particle * P) const function, expected prototype:\nvoid osgParticle::MultiSegmentPlacer::place(osgParticle::Particle * P) const\nClass arguments details:\narg 1 ID = 81629555\n");
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));

		osgParticle::MultiSegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::MultiSegmentPlacer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::MultiSegmentPlacer::place(osgParticle::Particle *) const");
		}
		self->place(P);

		return 0;
	}

	// float osgParticle::MultiSegmentPlacer::volume() const
	static int _bind_volume(lua_State *L) {
		if (!_lg_typecheck_volume(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::MultiSegmentPlacer::volume() const function, expected prototype:\nfloat osgParticle::MultiSegmentPlacer::volume() const\nClass arguments details:\n");
		}


		osgParticle::MultiSegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::MultiSegmentPlacer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::MultiSegmentPlacer::volume() const");
		}
		float lret = self->volume();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Vec3f osgParticle::MultiSegmentPlacer::getControlPosition() const
	static int _bind_getControlPosition(lua_State *L) {
		if (!_lg_typecheck_getControlPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgParticle::MultiSegmentPlacer::getControlPosition() const function, expected prototype:\nosg::Vec3f osgParticle::MultiSegmentPlacer::getControlPosition() const\nClass arguments details:\n");
		}


		osgParticle::MultiSegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::MultiSegmentPlacer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osgParticle::MultiSegmentPlacer::getControlPosition() const");
		}
		osg::Vec3f stack_lret = self->getControlPosition();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// void osgParticle::MultiSegmentPlacer::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::MultiSegmentPlacer::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::MultiSegmentPlacer::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::MultiSegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::MultiSegmentPlacer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::MultiSegmentPlacer::base_setName(const std::string &)");
		}
		self->MultiSegmentPlacer::setName(name);

		return 0;
	}

	// void osgParticle::MultiSegmentPlacer::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::MultiSegmentPlacer::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::MultiSegmentPlacer::base_computeDataVariance()\nClass arguments details:\n");
		}


		osgParticle::MultiSegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::MultiSegmentPlacer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::MultiSegmentPlacer::base_computeDataVariance()");
		}
		self->MultiSegmentPlacer::computeDataVariance();

		return 0;
	}

	// void osgParticle::MultiSegmentPlacer::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::MultiSegmentPlacer::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::MultiSegmentPlacer::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::MultiSegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::MultiSegmentPlacer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::MultiSegmentPlacer::base_setUserData(osg::Referenced *)");
		}
		self->MultiSegmentPlacer::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::MultiSegmentPlacer::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::MultiSegmentPlacer::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::MultiSegmentPlacer::base_getUserData()\nClass arguments details:\n");
		}


		osgParticle::MultiSegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::MultiSegmentPlacer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::MultiSegmentPlacer::base_getUserData()");
		}
		osg::Referenced * lret = self->MultiSegmentPlacer::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::MultiSegmentPlacer::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::MultiSegmentPlacer::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::MultiSegmentPlacer::base_getUserData() const\nClass arguments details:\n");
		}


		osgParticle::MultiSegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::MultiSegmentPlacer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::MultiSegmentPlacer::base_getUserData() const");
		}
		const osg::Referenced * lret = self->MultiSegmentPlacer::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::MultiSegmentPlacer::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgParticle::MultiSegmentPlacer::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::MultiSegmentPlacer::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgParticle::MultiSegmentPlacer::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::MultiSegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::MultiSegmentPlacer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::MultiSegmentPlacer::base_releaseGLObjects(osg::State *) const");
		}
		self->MultiSegmentPlacer::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgParticle::MultiSegmentPlacer::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::MultiSegmentPlacer::base_cloneType() const function, expected prototype:\nosg::Object * osgParticle::MultiSegmentPlacer::base_cloneType() const\nClass arguments details:\n");
		}


		osgParticle::MultiSegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::MultiSegmentPlacer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::MultiSegmentPlacer::base_cloneType() const");
		}
		osg::Object * lret = self->MultiSegmentPlacer::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::MultiSegmentPlacer::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::MultiSegmentPlacer::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgParticle::MultiSegmentPlacer::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::MultiSegmentPlacer::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::MultiSegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::MultiSegmentPlacer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::MultiSegmentPlacer::base_clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->MultiSegmentPlacer::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::MultiSegmentPlacer::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::MultiSegmentPlacer::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::MultiSegmentPlacer::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::MultiSegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::MultiSegmentPlacer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::MultiSegmentPlacer::base_isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->MultiSegmentPlacer::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::MultiSegmentPlacer::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::MultiSegmentPlacer::base_libraryName() const function, expected prototype:\nconst char * osgParticle::MultiSegmentPlacer::base_libraryName() const\nClass arguments details:\n");
		}


		osgParticle::MultiSegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::MultiSegmentPlacer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::MultiSegmentPlacer::base_libraryName() const");
		}
		const char * lret = self->MultiSegmentPlacer::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::MultiSegmentPlacer::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::MultiSegmentPlacer::base_className() const function, expected prototype:\nconst char * osgParticle::MultiSegmentPlacer::base_className() const\nClass arguments details:\n");
		}


		osgParticle::MultiSegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::MultiSegmentPlacer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::MultiSegmentPlacer::base_className() const");
		}
		const char * lret = self->MultiSegmentPlacer::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::MultiSegmentPlacer::base_place(osgParticle::Particle * P) const
	static int _bind_base_place(lua_State *L) {
		if (!_lg_typecheck_base_place(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::MultiSegmentPlacer::base_place(osgParticle::Particle * P) const function, expected prototype:\nvoid osgParticle::MultiSegmentPlacer::base_place(osgParticle::Particle * P) const\nClass arguments details:\narg 1 ID = 81629555\n");
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));

		osgParticle::MultiSegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::MultiSegmentPlacer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::MultiSegmentPlacer::base_place(osgParticle::Particle *) const");
		}
		self->MultiSegmentPlacer::place(P);

		return 0;
	}

	// float osgParticle::MultiSegmentPlacer::base_volume() const
	static int _bind_base_volume(lua_State *L) {
		if (!_lg_typecheck_base_volume(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::MultiSegmentPlacer::base_volume() const function, expected prototype:\nfloat osgParticle::MultiSegmentPlacer::base_volume() const\nClass arguments details:\n");
		}


		osgParticle::MultiSegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::MultiSegmentPlacer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::MultiSegmentPlacer::base_volume() const");
		}
		float lret = self->MultiSegmentPlacer::volume();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Vec3f osgParticle::MultiSegmentPlacer::base_getControlPosition() const
	static int _bind_base_getControlPosition(lua_State *L) {
		if (!_lg_typecheck_base_getControlPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgParticle::MultiSegmentPlacer::base_getControlPosition() const function, expected prototype:\nosg::Vec3f osgParticle::MultiSegmentPlacer::base_getControlPosition() const\nClass arguments details:\n");
		}


		osgParticle::MultiSegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::MultiSegmentPlacer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osgParticle::MultiSegmentPlacer::base_getControlPosition() const");
		}
		osg::Vec3f stack_lret = self->MultiSegmentPlacer::getControlPosition();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osgParticle::MultiSegmentPlacer* LunaTraits< osgParticle::MultiSegmentPlacer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_MultiSegmentPlacer::_bind_ctor(L);
}

void LunaTraits< osgParticle::MultiSegmentPlacer >::_bind_dtor(osgParticle::MultiSegmentPlacer* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::MultiSegmentPlacer >::className[] = "MultiSegmentPlacer";
const char LunaTraits< osgParticle::MultiSegmentPlacer >::fullName[] = "osgParticle::MultiSegmentPlacer";
const char LunaTraits< osgParticle::MultiSegmentPlacer >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::MultiSegmentPlacer >::parents[] = {"osgParticle.Placer", 0};
const int LunaTraits< osgParticle::MultiSegmentPlacer >::hash = 84513959;
const int LunaTraits< osgParticle::MultiSegmentPlacer >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::MultiSegmentPlacer >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_MultiSegmentPlacer::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_MultiSegmentPlacer::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_MultiSegmentPlacer::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgParticle_MultiSegmentPlacer::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_MultiSegmentPlacer::_bind_className},
	{"numVertices", &luna_wrapper_osgParticle_MultiSegmentPlacer::_bind_numVertices},
	{"getVertex", &luna_wrapper_osgParticle_MultiSegmentPlacer::_bind_getVertex},
	{"setVertex", &luna_wrapper_osgParticle_MultiSegmentPlacer::_bind_setVertex},
	{"addVertex", &luna_wrapper_osgParticle_MultiSegmentPlacer::_bind_addVertex},
	{"removeVertex", &luna_wrapper_osgParticle_MultiSegmentPlacer::_bind_removeVertex},
	{"place", &luna_wrapper_osgParticle_MultiSegmentPlacer::_bind_place},
	{"volume", &luna_wrapper_osgParticle_MultiSegmentPlacer::_bind_volume},
	{"getControlPosition", &luna_wrapper_osgParticle_MultiSegmentPlacer::_bind_getControlPosition},
	{"base_setName", &luna_wrapper_osgParticle_MultiSegmentPlacer::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_MultiSegmentPlacer::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgParticle_MultiSegmentPlacer::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_MultiSegmentPlacer::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_MultiSegmentPlacer::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgParticle_MultiSegmentPlacer::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgParticle_MultiSegmentPlacer::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_MultiSegmentPlacer::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgParticle_MultiSegmentPlacer::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgParticle_MultiSegmentPlacer::_bind_base_className},
	{"base_place", &luna_wrapper_osgParticle_MultiSegmentPlacer::_bind_base_place},
	{"base_volume", &luna_wrapper_osgParticle_MultiSegmentPlacer::_bind_base_volume},
	{"base_getControlPosition", &luna_wrapper_osgParticle_MultiSegmentPlacer::_bind_base_getControlPosition},
	{"__eq", &luna_wrapper_osgParticle_MultiSegmentPlacer::_bind___eq},
	{"getTable", &luna_wrapper_osgParticle_MultiSegmentPlacer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::MultiSegmentPlacer >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_MultiSegmentPlacer::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::MultiSegmentPlacer >::enumValues[] = {
	{0,0}
};


