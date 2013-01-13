#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Cylinder.h>

class luna_wrapper_osg_Cylinder {
public:
	typedef Luna< osg::Cylinder > luna_t;

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
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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
		//osg::Cylinder* ptr= dynamic_cast< osg::Cylinder* >(Luna< osg::Referenced >::check(L,1));
		osg::Cylinder* ptr= luna_caster< osg::Referenced, osg::Cylinder >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Cylinder >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,1))) ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
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

	inline static bool _lg_typecheck_accept_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,36301858) ) return false;
		if( (!(Luna< osg::ShapeVisitor >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_accept_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45826538) ) return false;
		if( (!(Luna< osg::ConstShapeVisitor >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_valid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCenter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCenter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRadius(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRadius(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRotation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRotation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeRotationMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_zeroRotation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_base_accept_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,36301858) ) return false;
		if( (!(Luna< osg::ShapeVisitor >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_accept_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45826538) ) return false;
		if( (!(Luna< osg::ConstShapeVisitor >::check(L,2))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Cylinder::Cylinder()
	static osg::Cylinder* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Cylinder::Cylinder() function, expected prototype:\nosg::Cylinder::Cylinder()\nClass arguments details:\n");
		}


		return new osg::Cylinder();
	}

	// osg::Cylinder::Cylinder(const osg::Vec3f & center, float radius, float height)
	static osg::Cylinder* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Cylinder::Cylinder(const osg::Vec3f & center, float radius, float height) function, expected prototype:\nosg::Cylinder::Cylinder(const osg::Vec3f & center, float radius, float height)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* center_ptr=(Luna< osg::Vec3f >::check(L,1));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osg::Cylinder::Cylinder function");
		}
		const osg::Vec3f & center=*center_ptr;
		float radius=(float)lua_tonumber(L,2);
		float height=(float)lua_tonumber(L,3);

		return new osg::Cylinder(center, radius, height);
	}

	// osg::Cylinder::Cylinder(const osg::Cylinder & cylinder, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Cylinder* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Cylinder::Cylinder(const osg::Cylinder & cylinder, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Cylinder::Cylinder(const osg::Cylinder & cylinder, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Cylinder* cylinder_ptr=(Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1));
		if( !cylinder_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cylinder in osg::Cylinder::Cylinder function");
		}
		const osg::Cylinder & cylinder=*cylinder_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Cylinder::Cylinder function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::Cylinder(cylinder, copyop);
	}

	// osg::Cylinder::Cylinder(lua_Table * data)
	static osg::Cylinder* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Cylinder::Cylinder(lua_Table * data) function, expected prototype:\nosg::Cylinder::Cylinder(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_Cylinder(L,NULL);
	}

	// osg::Cylinder::Cylinder(lua_Table * data, const osg::Vec3f & center, float radius, float height)
	static osg::Cylinder* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Cylinder::Cylinder(lua_Table * data, const osg::Vec3f & center, float radius, float height) function, expected prototype:\nosg::Cylinder::Cylinder(lua_Table * data, const osg::Vec3f & center, float radius, float height)\nClass arguments details:\narg 2 ID = 92303204\n");
		}

		const osg::Vec3f* center_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osg::Cylinder::Cylinder function");
		}
		const osg::Vec3f & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);
		float height=(float)lua_tonumber(L,4);

		return new wrapper_osg_Cylinder(L,NULL, center, radius, height);
	}

	// osg::Cylinder::Cylinder(lua_Table * data, const osg::Cylinder & cylinder, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Cylinder* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Cylinder::Cylinder(lua_Table * data, const osg::Cylinder & cylinder, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Cylinder::Cylinder(lua_Table * data, const osg::Cylinder & cylinder, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Cylinder* cylinder_ptr=(Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,2));
		if( !cylinder_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cylinder in osg::Cylinder::Cylinder function");
		}
		const osg::Cylinder & cylinder=*cylinder_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Cylinder::Cylinder function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_Cylinder(L,NULL, cylinder, copyop);
	}

	// Overload binder for osg::Cylinder::Cylinder
	static osg::Cylinder* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function Cylinder, cannot match any of the overloads for function Cylinder:\n  Cylinder()\n  Cylinder(const osg::Vec3f &, float, float)\n  Cylinder(const osg::Cylinder &, const osg::CopyOp &)\n  Cylinder(lua_Table *)\n  Cylinder(lua_Table *, const osg::Vec3f &, float, float)\n  Cylinder(lua_Table *, const osg::Cylinder &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Cylinder::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Cylinder::cloneType() const function, expected prototype:\nosg::Object * osg::Cylinder::cloneType() const\nClass arguments details:\n");
		}


		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Cylinder::cloneType() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Cylinder::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Cylinder::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Cylinder::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Cylinder::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Cylinder::clone(const osg::CopyOp &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Cylinder::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Cylinder::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Cylinder::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Cylinder::isSameKindAs(const osg::Object *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Cylinder::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Cylinder::libraryName() const function, expected prototype:\nconst char * osg::Cylinder::libraryName() const\nClass arguments details:\n");
		}


		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Cylinder::libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Cylinder::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Cylinder::className() const function, expected prototype:\nconst char * osg::Cylinder::className() const\nClass arguments details:\n");
		}


		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Cylinder::className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Cylinder::accept(osg::ShapeVisitor & arg1)
	static int _bind_accept_overload_1(lua_State *L) {
		if (!_lg_typecheck_accept_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Cylinder::accept(osg::ShapeVisitor & arg1) function, expected prototype:\nvoid osg::Cylinder::accept(osg::ShapeVisitor & arg1)\nClass arguments details:\narg 1 ID = 36301858\n");
		}

		osg::ShapeVisitor* _arg1_ptr=(Luna< osg::ShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Cylinder::accept function");
		}
		osg::ShapeVisitor & _arg1=*_arg1_ptr;

		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Cylinder::accept(osg::ShapeVisitor &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->accept(_arg1);

		return 0;
	}

	// void osg::Cylinder::accept(osg::ConstShapeVisitor & arg1) const
	static int _bind_accept_overload_2(lua_State *L) {
		if (!_lg_typecheck_accept_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Cylinder::accept(osg::ConstShapeVisitor & arg1) const function, expected prototype:\nvoid osg::Cylinder::accept(osg::ConstShapeVisitor & arg1) const\nClass arguments details:\narg 1 ID = 45826538\n");
		}

		osg::ConstShapeVisitor* _arg1_ptr=(Luna< osg::ConstShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Cylinder::accept function");
		}
		osg::ConstShapeVisitor & _arg1=*_arg1_ptr;

		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Cylinder::accept(osg::ConstShapeVisitor &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->accept(_arg1);

		return 0;
	}

	// Overload binder for osg::Cylinder::accept
	static int _bind_accept(lua_State *L) {
		if (_lg_typecheck_accept_overload_1(L)) return _bind_accept_overload_1(L);
		if (_lg_typecheck_accept_overload_2(L)) return _bind_accept_overload_2(L);

		luaL_error(L, "error in function accept, cannot match any of the overloads for function accept:\n  accept(osg::ShapeVisitor &)\n  accept(osg::ConstShapeVisitor &)\n");
		return 0;
	}

	// bool osg::Cylinder::valid() const
	static int _bind_valid(lua_State *L) {
		if (!_lg_typecheck_valid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Cylinder::valid() const function, expected prototype:\nbool osg::Cylinder::valid() const\nClass arguments details:\n");
		}


		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Cylinder::valid() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->valid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Cylinder::set(const osg::Vec3f & center, float radius, float height)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Cylinder::set(const osg::Vec3f & center, float radius, float height) function, expected prototype:\nvoid osg::Cylinder::set(const osg::Vec3f & center, float radius, float height)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* center_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osg::Cylinder::set function");
		}
		const osg::Vec3f & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);
		float height=(float)lua_tonumber(L,4);

		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Cylinder::set(const osg::Vec3f &, float, float). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->set(center, radius, height);

		return 0;
	}

	// void osg::Cylinder::setCenter(const osg::Vec3f & center)
	static int _bind_setCenter(lua_State *L) {
		if (!_lg_typecheck_setCenter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Cylinder::setCenter(const osg::Vec3f & center) function, expected prototype:\nvoid osg::Cylinder::setCenter(const osg::Vec3f & center)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* center_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osg::Cylinder::setCenter function");
		}
		const osg::Vec3f & center=*center_ptr;

		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Cylinder::setCenter(const osg::Vec3f &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setCenter(center);

		return 0;
	}

	// const osg::Vec3f & osg::Cylinder::getCenter() const
	static int _bind_getCenter(lua_State *L) {
		if (!_lg_typecheck_getCenter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osg::Cylinder::getCenter() const function, expected prototype:\nconst osg::Vec3f & osg::Cylinder::getCenter() const\nClass arguments details:\n");
		}


		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osg::Cylinder::getCenter() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::Vec3f* lret = &self->getCenter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osg::Cylinder::setRadius(float radius)
	static int _bind_setRadius(lua_State *L) {
		if (!_lg_typecheck_setRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Cylinder::setRadius(float radius) function, expected prototype:\nvoid osg::Cylinder::setRadius(float radius)\nClass arguments details:\n");
		}

		float radius=(float)lua_tonumber(L,2);

		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Cylinder::setRadius(float). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setRadius(radius);

		return 0;
	}

	// float osg::Cylinder::getRadius() const
	static int _bind_getRadius(lua_State *L) {
		if (!_lg_typecheck_getRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::Cylinder::getRadius() const function, expected prototype:\nfloat osg::Cylinder::getRadius() const\nClass arguments details:\n");
		}


		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::Cylinder::getRadius() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		float lret = self->getRadius();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Cylinder::setHeight(float height)
	static int _bind_setHeight(lua_State *L) {
		if (!_lg_typecheck_setHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Cylinder::setHeight(float height) function, expected prototype:\nvoid osg::Cylinder::setHeight(float height)\nClass arguments details:\n");
		}

		float height=(float)lua_tonumber(L,2);

		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Cylinder::setHeight(float). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setHeight(height);

		return 0;
	}

	// float osg::Cylinder::getHeight() const
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::Cylinder::getHeight() const function, expected prototype:\nfloat osg::Cylinder::getHeight() const\nClass arguments details:\n");
		}


		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::Cylinder::getHeight() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		float lret = self->getHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Cylinder::setRotation(const osg::Quat & quat)
	static int _bind_setRotation(lua_State *L) {
		if (!_lg_typecheck_setRotation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Cylinder::setRotation(const osg::Quat & quat) function, expected prototype:\nvoid osg::Cylinder::setRotation(const osg::Quat & quat)\nClass arguments details:\narg 1 ID = 80263306\n");
		}

		const osg::Quat* quat_ptr=(Luna< osg::Quat >::check(L,2));
		if( !quat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg quat in osg::Cylinder::setRotation function");
		}
		const osg::Quat & quat=*quat_ptr;

		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Cylinder::setRotation(const osg::Quat &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setRotation(quat);

		return 0;
	}

	// const osg::Quat & osg::Cylinder::getRotation() const
	static int _bind_getRotation(lua_State *L) {
		if (!_lg_typecheck_getRotation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Quat & osg::Cylinder::getRotation() const function, expected prototype:\nconst osg::Quat & osg::Cylinder::getRotation() const\nClass arguments details:\n");
		}


		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Quat & osg::Cylinder::getRotation() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::Quat* lret = &self->getRotation();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,false);

		return 1;
	}

	// osg::Matrixd osg::Cylinder::computeRotationMatrix() const
	static int _bind_computeRotationMatrix(lua_State *L) {
		if (!_lg_typecheck_computeRotationMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osg::Cylinder::computeRotationMatrix() const function, expected prototype:\nosg::Matrixd osg::Cylinder::computeRotationMatrix() const\nClass arguments details:\n");
		}


		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osg::Cylinder::computeRotationMatrix() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Matrixd stack_lret = self->computeRotationMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// bool osg::Cylinder::zeroRotation() const
	static int _bind_zeroRotation(lua_State *L) {
		if (!_lg_typecheck_zeroRotation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Cylinder::zeroRotation() const function, expected prototype:\nbool osg::Cylinder::zeroRotation() const\nClass arguments details:\n");
		}


		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Cylinder::zeroRotation() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->zeroRotation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Cylinder::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Cylinder::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Cylinder::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Cylinder::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Cylinder::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Cylinder::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Cylinder::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Cylinder::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Cylinder::base_setName(const std::string &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Cylinder::setName(name);

		return 0;
	}

	// void osg::Cylinder::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Cylinder::base_computeDataVariance() function, expected prototype:\nvoid osg::Cylinder::base_computeDataVariance()\nClass arguments details:\n");
		}


		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Cylinder::base_computeDataVariance(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Cylinder::computeDataVariance();

		return 0;
	}

	// void osg::Cylinder::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Cylinder::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Cylinder::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Cylinder::base_setUserData(osg::Referenced *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Cylinder::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Cylinder::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Cylinder::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Cylinder::base_getUserData()\nClass arguments details:\n");
		}


		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Cylinder::base_getUserData(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Referenced * lret = self->Cylinder::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Cylinder::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Cylinder::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Cylinder::base_getUserData() const\nClass arguments details:\n");
		}


		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Cylinder::base_getUserData() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::Referenced * lret = self->Cylinder::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Cylinder::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::Cylinder::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Cylinder::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::Cylinder::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Cylinder::base_releaseGLObjects(osg::State *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Cylinder::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::Cylinder::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Cylinder::base_cloneType() const function, expected prototype:\nosg::Object * osg::Cylinder::base_cloneType() const\nClass arguments details:\n");
		}


		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Cylinder::base_cloneType() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->Cylinder::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Cylinder::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Cylinder::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Cylinder::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Cylinder::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Cylinder::base_clone(const osg::CopyOp &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->Cylinder::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Cylinder::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Cylinder::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Cylinder::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Cylinder::base_isSameKindAs(const osg::Object *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->Cylinder::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Cylinder::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Cylinder::base_libraryName() const function, expected prototype:\nconst char * osg::Cylinder::base_libraryName() const\nClass arguments details:\n");
		}


		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Cylinder::base_libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->Cylinder::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Cylinder::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Cylinder::base_className() const function, expected prototype:\nconst char * osg::Cylinder::base_className() const\nClass arguments details:\n");
		}


		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Cylinder::base_className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->Cylinder::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Cylinder::base_accept(osg::ShapeVisitor & arg1)
	static int _bind_base_accept_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_accept_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Cylinder::base_accept(osg::ShapeVisitor & arg1) function, expected prototype:\nvoid osg::Cylinder::base_accept(osg::ShapeVisitor & arg1)\nClass arguments details:\narg 1 ID = 36301858\n");
		}

		osg::ShapeVisitor* _arg1_ptr=(Luna< osg::ShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Cylinder::base_accept function");
		}
		osg::ShapeVisitor & _arg1=*_arg1_ptr;

		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Cylinder::base_accept(osg::ShapeVisitor &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Cylinder::accept(_arg1);

		return 0;
	}

	// void osg::Cylinder::base_accept(osg::ConstShapeVisitor & arg1) const
	static int _bind_base_accept_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_accept_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Cylinder::base_accept(osg::ConstShapeVisitor & arg1) const function, expected prototype:\nvoid osg::Cylinder::base_accept(osg::ConstShapeVisitor & arg1) const\nClass arguments details:\narg 1 ID = 45826538\n");
		}

		osg::ConstShapeVisitor* _arg1_ptr=(Luna< osg::ConstShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Cylinder::base_accept function");
		}
		osg::ConstShapeVisitor & _arg1=*_arg1_ptr;

		osg::Cylinder* self=Luna< osg::Referenced >::checkSubType< osg::Cylinder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Cylinder::base_accept(osg::ConstShapeVisitor &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Cylinder::accept(_arg1);

		return 0;
	}

	// Overload binder for osg::Cylinder::base_accept
	static int _bind_base_accept(lua_State *L) {
		if (_lg_typecheck_base_accept_overload_1(L)) return _bind_base_accept_overload_1(L);
		if (_lg_typecheck_base_accept_overload_2(L)) return _bind_base_accept_overload_2(L);

		luaL_error(L, "error in function base_accept, cannot match any of the overloads for function base_accept:\n  base_accept(osg::ShapeVisitor &)\n  base_accept(osg::ConstShapeVisitor &)\n");
		return 0;
	}


	// Operator binds:

};

osg::Cylinder* LunaTraits< osg::Cylinder >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Cylinder::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::Cylinder >::_bind_dtor(osg::Cylinder* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Cylinder >::className[] = "Cylinder";
const char LunaTraits< osg::Cylinder >::fullName[] = "osg::Cylinder";
const char LunaTraits< osg::Cylinder >::moduleName[] = "osg";
const char* LunaTraits< osg::Cylinder >::parents[] = {"osg.Shape", 0};
const int LunaTraits< osg::Cylinder >::hash = 22778725;
const int LunaTraits< osg::Cylinder >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Cylinder >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Cylinder::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Cylinder::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Cylinder::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Cylinder::_bind_libraryName},
	{"className", &luna_wrapper_osg_Cylinder::_bind_className},
	{"accept", &luna_wrapper_osg_Cylinder::_bind_accept},
	{"valid", &luna_wrapper_osg_Cylinder::_bind_valid},
	{"set", &luna_wrapper_osg_Cylinder::_bind_set},
	{"setCenter", &luna_wrapper_osg_Cylinder::_bind_setCenter},
	{"getCenter", &luna_wrapper_osg_Cylinder::_bind_getCenter},
	{"setRadius", &luna_wrapper_osg_Cylinder::_bind_setRadius},
	{"getRadius", &luna_wrapper_osg_Cylinder::_bind_getRadius},
	{"setHeight", &luna_wrapper_osg_Cylinder::_bind_setHeight},
	{"getHeight", &luna_wrapper_osg_Cylinder::_bind_getHeight},
	{"setRotation", &luna_wrapper_osg_Cylinder::_bind_setRotation},
	{"getRotation", &luna_wrapper_osg_Cylinder::_bind_getRotation},
	{"computeRotationMatrix", &luna_wrapper_osg_Cylinder::_bind_computeRotationMatrix},
	{"zeroRotation", &luna_wrapper_osg_Cylinder::_bind_zeroRotation},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Cylinder::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_Cylinder::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Cylinder::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Cylinder::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Cylinder::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_Cylinder::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_Cylinder::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Cylinder::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_Cylinder::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_Cylinder::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_Cylinder::_bind_base_className},
	{"base_accept", &luna_wrapper_osg_Cylinder::_bind_base_accept},
	{"__eq", &luna_wrapper_osg_Cylinder::_bind___eq},
	{"getTable", &luna_wrapper_osg_Cylinder::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Cylinder >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Cylinder::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Cylinder >::enumValues[] = {
	{0,0}
};


