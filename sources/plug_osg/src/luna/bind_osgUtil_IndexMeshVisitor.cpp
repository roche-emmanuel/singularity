#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_IndexMeshVisitor.h>

class luna_wrapper_osgUtil_IndexMeshVisitor {
public:
	typedef Luna< osgUtil::IndexMeshVisitor > luna_t;

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
		//osgUtil::IndexMeshVisitor* ptr= dynamic_cast< osgUtil::IndexMeshVisitor* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::IndexMeshVisitor* ptr= luna_caster< osg::Referenced, osgUtil::IndexMeshVisitor >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::IndexMeshVisitor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,85233381)) ) return false;
		if( luatop>0 && (lua_isnil(L,1)==0 && !(Luna< osgUtil::Optimizer >::check(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85233381)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !(Luna< osgUtil::Optimizer >::check(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_makeMesh_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_makeMesh_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_base_getEyePoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getViewPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceToEyePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceFromEyePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceToViewPoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::IndexMeshVisitor::IndexMeshVisitor(osgUtil::Optimizer * optimizer = 0)
	static osgUtil::IndexMeshVisitor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::IndexMeshVisitor::IndexMeshVisitor(osgUtil::Optimizer * optimizer = 0) function, expected prototype:\nosgUtil::IndexMeshVisitor::IndexMeshVisitor(osgUtil::Optimizer * optimizer = 0)\nClass arguments details:\narg 1 ID = 85233381\n");
		}

		int luatop = lua_gettop(L);

		osgUtil::Optimizer* optimizer=luatop>0 ? (Luna< osgUtil::Optimizer >::check(L,1)) : (osgUtil::Optimizer*)0;

		return new osgUtil::IndexMeshVisitor(optimizer);
	}

	// osgUtil::IndexMeshVisitor::IndexMeshVisitor(lua_Table * data, osgUtil::Optimizer * optimizer = 0)
	static osgUtil::IndexMeshVisitor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::IndexMeshVisitor::IndexMeshVisitor(lua_Table * data, osgUtil::Optimizer * optimizer = 0) function, expected prototype:\nosgUtil::IndexMeshVisitor::IndexMeshVisitor(lua_Table * data, osgUtil::Optimizer * optimizer = 0)\nClass arguments details:\narg 2 ID = 85233381\n");
		}

		int luatop = lua_gettop(L);

		osgUtil::Optimizer* optimizer=luatop>1 ? (Luna< osgUtil::Optimizer >::check(L,2)) : (osgUtil::Optimizer*)0;

		return new wrapper_osgUtil_IndexMeshVisitor(L,NULL, optimizer);
	}

	// Overload binder for osgUtil::IndexMeshVisitor::IndexMeshVisitor
	static osgUtil::IndexMeshVisitor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function IndexMeshVisitor, cannot match any of the overloads for function IndexMeshVisitor:\n  IndexMeshVisitor(osgUtil::Optimizer *)\n  IndexMeshVisitor(lua_Table *, osgUtil::Optimizer *)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::IndexMeshVisitor::makeMesh(osg::Geometry & geom)
	static int _bind_makeMesh_overload_1(lua_State *L) {
		if (!_lg_typecheck_makeMesh_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IndexMeshVisitor::makeMesh(osg::Geometry & geom) function, expected prototype:\nvoid osgUtil::IndexMeshVisitor::makeMesh(osg::Geometry & geom)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geometry* geom_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,2));
		if( !geom_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geom in osgUtil::IndexMeshVisitor::makeMesh function");
		}
		osg::Geometry & geom=*geom_ptr;

		osgUtil::IndexMeshVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IndexMeshVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IndexMeshVisitor::makeMesh(osg::Geometry &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->makeMesh(geom);

		return 0;
	}

	// void osgUtil::IndexMeshVisitor::makeMesh()
	static int _bind_makeMesh_overload_2(lua_State *L) {
		if (!_lg_typecheck_makeMesh_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IndexMeshVisitor::makeMesh() function, expected prototype:\nvoid osgUtil::IndexMeshVisitor::makeMesh()\nClass arguments details:\n");
		}


		osgUtil::IndexMeshVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IndexMeshVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IndexMeshVisitor::makeMesh(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->makeMesh();

		return 0;
	}

	// Overload binder for osgUtil::IndexMeshVisitor::makeMesh
	static int _bind_makeMesh(lua_State *L) {
		if (_lg_typecheck_makeMesh_overload_1(L)) return _bind_makeMesh_overload_1(L);
		if (_lg_typecheck_makeMesh_overload_2(L)) return _bind_makeMesh_overload_2(L);

		luaL_error(L, "error in function makeMesh, cannot match any of the overloads for function makeMesh:\n  makeMesh(osg::Geometry &)\n  makeMesh()\n");
		return 0;
	}

	// void osgUtil::IndexMeshVisitor::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IndexMeshVisitor::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::IndexMeshVisitor::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::IndexMeshVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IndexMeshVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IndexMeshVisitor::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->IndexMeshVisitor::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// const char * osgUtil::IndexMeshVisitor::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::IndexMeshVisitor::base_libraryName() const function, expected prototype:\nconst char * osgUtil::IndexMeshVisitor::base_libraryName() const\nClass arguments details:\n");
		}


		osgUtil::IndexMeshVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IndexMeshVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::IndexMeshVisitor::base_libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->IndexMeshVisitor::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::IndexMeshVisitor::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::IndexMeshVisitor::base_className() const function, expected prototype:\nconst char * osgUtil::IndexMeshVisitor::base_className() const\nClass arguments details:\n");
		}


		osgUtil::IndexMeshVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IndexMeshVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::IndexMeshVisitor::base_className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->IndexMeshVisitor::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::Vec3f osgUtil::IndexMeshVisitor::base_getEyePoint() const
	static int _bind_base_getEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::IndexMeshVisitor::base_getEyePoint() const function, expected prototype:\nosg::Vec3f osgUtil::IndexMeshVisitor::base_getEyePoint() const\nClass arguments details:\n");
		}


		osgUtil::IndexMeshVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IndexMeshVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::IndexMeshVisitor::base_getEyePoint() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Vec3f stack_lret = self->IndexMeshVisitor::getEyePoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osgUtil::IndexMeshVisitor::base_getViewPoint() const
	static int _bind_base_getViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getViewPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::IndexMeshVisitor::base_getViewPoint() const function, expected prototype:\nosg::Vec3f osgUtil::IndexMeshVisitor::base_getViewPoint() const\nClass arguments details:\n");
		}


		osgUtil::IndexMeshVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IndexMeshVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::IndexMeshVisitor::base_getViewPoint() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Vec3f stack_lret = self->IndexMeshVisitor::getViewPoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// float osgUtil::IndexMeshVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgUtil::IndexMeshVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::IndexMeshVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::IndexMeshVisitor::base_getDistanceToEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::IndexMeshVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IndexMeshVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgUtil::IndexMeshVisitor::base_getDistanceToEyePoint(const osg::Vec3f &, bool) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		float lret = self->IndexMeshVisitor::getDistanceToEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::IndexMeshVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceFromEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceFromEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgUtil::IndexMeshVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::IndexMeshVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::IndexMeshVisitor::base_getDistanceFromEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::IndexMeshVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IndexMeshVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgUtil::IndexMeshVisitor::base_getDistanceFromEyePoint(const osg::Vec3f &, bool) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		float lret = self->IndexMeshVisitor::getDistanceFromEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::IndexMeshVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToViewPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgUtil::IndexMeshVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::IndexMeshVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::IndexMeshVisitor::base_getDistanceToViewPoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::IndexMeshVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IndexMeshVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgUtil::IndexMeshVisitor::base_getDistanceToViewPoint(const osg::Vec3f &, bool) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		float lret = self->IndexMeshVisitor::getDistanceToViewPoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::IndexMeshVisitor::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IndexMeshVisitor::base_reset() function, expected prototype:\nvoid osgUtil::IndexMeshVisitor::base_reset()\nClass arguments details:\n");
		}


		osgUtil::IndexMeshVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IndexMeshVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IndexMeshVisitor::base_reset(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->IndexMeshVisitor::reset();

		return 0;
	}

	// void osgUtil::IndexMeshVisitor::base_apply(osg::Geode & geode)
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IndexMeshVisitor::base_apply(osg::Geode & geode) function, expected prototype:\nvoid osgUtil::IndexMeshVisitor::base_apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* geode_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgUtil::IndexMeshVisitor::base_apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osgUtil::IndexMeshVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IndexMeshVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IndexMeshVisitor::base_apply(osg::Geode &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->IndexMeshVisitor::apply(geode);

		return 0;
	}


	// Operator binds:

};

osgUtil::IndexMeshVisitor* LunaTraits< osgUtil::IndexMeshVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_IndexMeshVisitor::_bind_ctor(L);
}

void LunaTraits< osgUtil::IndexMeshVisitor >::_bind_dtor(osgUtil::IndexMeshVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::IndexMeshVisitor >::className[] = "IndexMeshVisitor";
const char LunaTraits< osgUtil::IndexMeshVisitor >::fullName[] = "osgUtil::IndexMeshVisitor";
const char LunaTraits< osgUtil::IndexMeshVisitor >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::IndexMeshVisitor >::parents[] = {"osgUtil.GeometryCollector", 0};
const int LunaTraits< osgUtil::IndexMeshVisitor >::hash = 6251060;
const int LunaTraits< osgUtil::IndexMeshVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::IndexMeshVisitor >::methods[] = {
	{"makeMesh", &luna_wrapper_osgUtil_IndexMeshVisitor::_bind_makeMesh},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_IndexMeshVisitor::_bind_base_setThreadSafeRefUnref},
	{"base_libraryName", &luna_wrapper_osgUtil_IndexMeshVisitor::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgUtil_IndexMeshVisitor::_bind_base_className},
	{"base_getEyePoint", &luna_wrapper_osgUtil_IndexMeshVisitor::_bind_base_getEyePoint},
	{"base_getViewPoint", &luna_wrapper_osgUtil_IndexMeshVisitor::_bind_base_getViewPoint},
	{"base_getDistanceToEyePoint", &luna_wrapper_osgUtil_IndexMeshVisitor::_bind_base_getDistanceToEyePoint},
	{"base_getDistanceFromEyePoint", &luna_wrapper_osgUtil_IndexMeshVisitor::_bind_base_getDistanceFromEyePoint},
	{"base_getDistanceToViewPoint", &luna_wrapper_osgUtil_IndexMeshVisitor::_bind_base_getDistanceToViewPoint},
	{"base_reset", &luna_wrapper_osgUtil_IndexMeshVisitor::_bind_base_reset},
	{"base_apply", &luna_wrapper_osgUtil_IndexMeshVisitor::_bind_base_apply},
	{"__eq", &luna_wrapper_osgUtil_IndexMeshVisitor::_bind___eq},
	{"getTable", &luna_wrapper_osgUtil_IndexMeshVisitor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::IndexMeshVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_IndexMeshVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::IndexMeshVisitor >::enumValues[] = {
	{0,0}
};


