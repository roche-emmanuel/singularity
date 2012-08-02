#include <plug_common.h>

class luna_wrapper_osg_ClusterCullingCallback {
public:
	typedef Luna< osg::ClusterCullingCallback > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::ClusterCullingCallback* ptr= dynamic_cast< osg::ClusterCullingCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ClusterCullingCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
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

	inline static bool _lg_typecheck_computeFrom(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_transform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setControlPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getControlPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNormal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNormal(lua_State *L) {
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

	inline static bool _lg_typecheck_setDeviation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDeviation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_cull(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::ClusterCullingCallback::ClusterCullingCallback()
	static osg::ClusterCullingCallback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClusterCullingCallback::ClusterCullingCallback() function, expected prototype:\nosg::ClusterCullingCallback::ClusterCullingCallback()\nClass arguments details:\n");
		}


		return new osg::ClusterCullingCallback();
	}

	// osg::ClusterCullingCallback::ClusterCullingCallback(const osg::ClusterCullingCallback & ccc, const osg::CopyOp & copyop)
	static osg::ClusterCullingCallback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClusterCullingCallback::ClusterCullingCallback(const osg::ClusterCullingCallback & ccc, const osg::CopyOp & copyop) function, expected prototype:\nosg::ClusterCullingCallback::ClusterCullingCallback(const osg::ClusterCullingCallback & ccc, const osg::CopyOp & copyop)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		const osg::ClusterCullingCallback* ccc_ptr=dynamic_cast< osg::ClusterCullingCallback* >(Luna< osg::Referenced >::check(L,1));
		if( !ccc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ccc in osg::ClusterCullingCallback::ClusterCullingCallback function");
		}
		const osg::ClusterCullingCallback & ccc=*ccc_ptr;
		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ClusterCullingCallback::ClusterCullingCallback function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		return new osg::ClusterCullingCallback(ccc, copyop);
	}

	// osg::ClusterCullingCallback::ClusterCullingCallback(const osg::Vec3f & controlPoint, const osg::Vec3f & normal, float deviation)
	static osg::ClusterCullingCallback* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClusterCullingCallback::ClusterCullingCallback(const osg::Vec3f & controlPoint, const osg::Vec3f & normal, float deviation) function, expected prototype:\nosg::ClusterCullingCallback::ClusterCullingCallback(const osg::Vec3f & controlPoint, const osg::Vec3f & normal, float deviation)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\n");
		}

		const osg::Vec3f* controlPoint_ptr=(Luna< osg::Vec3f >::check(L,1));
		if( !controlPoint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg controlPoint in osg::ClusterCullingCallback::ClusterCullingCallback function");
		}
		const osg::Vec3f & controlPoint=*controlPoint_ptr;
		const osg::Vec3f* normal_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !normal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normal in osg::ClusterCullingCallback::ClusterCullingCallback function");
		}
		const osg::Vec3f & normal=*normal_ptr;
		float deviation=(float)lua_tonumber(L,3);

		return new osg::ClusterCullingCallback(controlPoint, normal, deviation);
	}

	// osg::ClusterCullingCallback::ClusterCullingCallback(const osg::Drawable * drawable)
	static osg::ClusterCullingCallback* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClusterCullingCallback::ClusterCullingCallback(const osg::Drawable * drawable) function, expected prototype:\nosg::ClusterCullingCallback::ClusterCullingCallback(const osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Drawable* drawable=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,1));

		return new osg::ClusterCullingCallback(drawable);
	}

	// Overload binder for osg::ClusterCullingCallback::ClusterCullingCallback
	static osg::ClusterCullingCallback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ClusterCullingCallback, cannot match any of the overloads for function ClusterCullingCallback:\n  ClusterCullingCallback()\n  ClusterCullingCallback(const osg::ClusterCullingCallback &, const osg::CopyOp &)\n  ClusterCullingCallback(const osg::Vec3f &, const osg::Vec3f &, float)\n  ClusterCullingCallback(const osg::Drawable *)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::ClusterCullingCallback::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ClusterCullingCallback::cloneType() const function, expected prototype:\nosg::Object * osg::ClusterCullingCallback::cloneType() const\nClass arguments details:\n");
		}


		osg::ClusterCullingCallback* self=dynamic_cast< osg::ClusterCullingCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ClusterCullingCallback::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ClusterCullingCallback::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ClusterCullingCallback::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::ClusterCullingCallback::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ClusterCullingCallback::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ClusterCullingCallback* self=dynamic_cast< osg::ClusterCullingCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ClusterCullingCallback::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ClusterCullingCallback::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ClusterCullingCallback::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ClusterCullingCallback::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::ClusterCullingCallback* self=dynamic_cast< osg::ClusterCullingCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ClusterCullingCallback::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ClusterCullingCallback::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ClusterCullingCallback::libraryName() const function, expected prototype:\nconst char * osg::ClusterCullingCallback::libraryName() const\nClass arguments details:\n");
		}


		osg::ClusterCullingCallback* self=dynamic_cast< osg::ClusterCullingCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ClusterCullingCallback::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ClusterCullingCallback::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ClusterCullingCallback::className() const function, expected prototype:\nconst char * osg::ClusterCullingCallback::className() const\nClass arguments details:\n");
		}


		osg::ClusterCullingCallback* self=dynamic_cast< osg::ClusterCullingCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ClusterCullingCallback::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::ClusterCullingCallback::computeFrom(const osg::Drawable * drawable)
	static int _bind_computeFrom(lua_State *L) {
		if (!_lg_typecheck_computeFrom(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClusterCullingCallback::computeFrom(const osg::Drawable * drawable) function, expected prototype:\nvoid osg::ClusterCullingCallback::computeFrom(const osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Drawable* drawable=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,2));

		osg::ClusterCullingCallback* self=dynamic_cast< osg::ClusterCullingCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClusterCullingCallback::computeFrom(const osg::Drawable *)");
		}
		self->computeFrom(drawable);

		return 0;
	}

	// void osg::ClusterCullingCallback::transform(const osg::Matrixd & matrix)
	static int _bind_transform(lua_State *L) {
		if (!_lg_typecheck_transform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClusterCullingCallback::transform(const osg::Matrixd & matrix) function, expected prototype:\nvoid osg::ClusterCullingCallback::transform(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::ClusterCullingCallback::transform function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osg::ClusterCullingCallback* self=dynamic_cast< osg::ClusterCullingCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClusterCullingCallback::transform(const osg::Matrixd &)");
		}
		self->transform(matrix);

		return 0;
	}

	// void osg::ClusterCullingCallback::set(const osg::Vec3f & controlPoint, const osg::Vec3f & normal, float deviation, float radius)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClusterCullingCallback::set(const osg::Vec3f & controlPoint, const osg::Vec3f & normal, float deviation, float radius) function, expected prototype:\nvoid osg::ClusterCullingCallback::set(const osg::Vec3f & controlPoint, const osg::Vec3f & normal, float deviation, float radius)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\n");
		}

		const osg::Vec3f* controlPoint_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !controlPoint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg controlPoint in osg::ClusterCullingCallback::set function");
		}
		const osg::Vec3f & controlPoint=*controlPoint_ptr;
		const osg::Vec3f* normal_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !normal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normal in osg::ClusterCullingCallback::set function");
		}
		const osg::Vec3f & normal=*normal_ptr;
		float deviation=(float)lua_tonumber(L,4);
		float radius=(float)lua_tonumber(L,5);

		osg::ClusterCullingCallback* self=dynamic_cast< osg::ClusterCullingCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClusterCullingCallback::set(const osg::Vec3f &, const osg::Vec3f &, float, float)");
		}
		self->set(controlPoint, normal, deviation, radius);

		return 0;
	}

	// void osg::ClusterCullingCallback::setControlPoint(const osg::Vec3f & controlPoint)
	static int _bind_setControlPoint(lua_State *L) {
		if (!_lg_typecheck_setControlPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClusterCullingCallback::setControlPoint(const osg::Vec3f & controlPoint) function, expected prototype:\nvoid osg::ClusterCullingCallback::setControlPoint(const osg::Vec3f & controlPoint)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* controlPoint_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !controlPoint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg controlPoint in osg::ClusterCullingCallback::setControlPoint function");
		}
		const osg::Vec3f & controlPoint=*controlPoint_ptr;

		osg::ClusterCullingCallback* self=dynamic_cast< osg::ClusterCullingCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClusterCullingCallback::setControlPoint(const osg::Vec3f &)");
		}
		self->setControlPoint(controlPoint);

		return 0;
	}

	// const osg::Vec3f & osg::ClusterCullingCallback::getControlPoint() const
	static int _bind_getControlPoint(lua_State *L) {
		if (!_lg_typecheck_getControlPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osg::ClusterCullingCallback::getControlPoint() const function, expected prototype:\nconst osg::Vec3f & osg::ClusterCullingCallback::getControlPoint() const\nClass arguments details:\n");
		}


		osg::ClusterCullingCallback* self=dynamic_cast< osg::ClusterCullingCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osg::ClusterCullingCallback::getControlPoint() const");
		}
		const osg::Vec3f* lret = &self->getControlPoint();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osg::ClusterCullingCallback::setNormal(const osg::Vec3f & normal)
	static int _bind_setNormal(lua_State *L) {
		if (!_lg_typecheck_setNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClusterCullingCallback::setNormal(const osg::Vec3f & normal) function, expected prototype:\nvoid osg::ClusterCullingCallback::setNormal(const osg::Vec3f & normal)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* normal_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !normal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normal in osg::ClusterCullingCallback::setNormal function");
		}
		const osg::Vec3f & normal=*normal_ptr;

		osg::ClusterCullingCallback* self=dynamic_cast< osg::ClusterCullingCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClusterCullingCallback::setNormal(const osg::Vec3f &)");
		}
		self->setNormal(normal);

		return 0;
	}

	// const osg::Vec3f & osg::ClusterCullingCallback::getNormal() const
	static int _bind_getNormal(lua_State *L) {
		if (!_lg_typecheck_getNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osg::ClusterCullingCallback::getNormal() const function, expected prototype:\nconst osg::Vec3f & osg::ClusterCullingCallback::getNormal() const\nClass arguments details:\n");
		}


		osg::ClusterCullingCallback* self=dynamic_cast< osg::ClusterCullingCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osg::ClusterCullingCallback::getNormal() const");
		}
		const osg::Vec3f* lret = &self->getNormal();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osg::ClusterCullingCallback::setRadius(float radius)
	static int _bind_setRadius(lua_State *L) {
		if (!_lg_typecheck_setRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClusterCullingCallback::setRadius(float radius) function, expected prototype:\nvoid osg::ClusterCullingCallback::setRadius(float radius)\nClass arguments details:\n");
		}

		float radius=(float)lua_tonumber(L,2);

		osg::ClusterCullingCallback* self=dynamic_cast< osg::ClusterCullingCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClusterCullingCallback::setRadius(float)");
		}
		self->setRadius(radius);

		return 0;
	}

	// float osg::ClusterCullingCallback::getRadius() const
	static int _bind_getRadius(lua_State *L) {
		if (!_lg_typecheck_getRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::ClusterCullingCallback::getRadius() const function, expected prototype:\nfloat osg::ClusterCullingCallback::getRadius() const\nClass arguments details:\n");
		}


		osg::ClusterCullingCallback* self=dynamic_cast< osg::ClusterCullingCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::ClusterCullingCallback::getRadius() const");
		}
		float lret = self->getRadius();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ClusterCullingCallback::setDeviation(float deviation)
	static int _bind_setDeviation(lua_State *L) {
		if (!_lg_typecheck_setDeviation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClusterCullingCallback::setDeviation(float deviation) function, expected prototype:\nvoid osg::ClusterCullingCallback::setDeviation(float deviation)\nClass arguments details:\n");
		}

		float deviation=(float)lua_tonumber(L,2);

		osg::ClusterCullingCallback* self=dynamic_cast< osg::ClusterCullingCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClusterCullingCallback::setDeviation(float)");
		}
		self->setDeviation(deviation);

		return 0;
	}

	// float osg::ClusterCullingCallback::getDeviation() const
	static int _bind_getDeviation(lua_State *L) {
		if (!_lg_typecheck_getDeviation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::ClusterCullingCallback::getDeviation() const function, expected prototype:\nfloat osg::ClusterCullingCallback::getDeviation() const\nClass arguments details:\n");
		}


		osg::ClusterCullingCallback* self=dynamic_cast< osg::ClusterCullingCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::ClusterCullingCallback::getDeviation() const");
		}
		float lret = self->getDeviation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::ClusterCullingCallback::cull(osg::NodeVisitor * , osg::Drawable * , osg::State * ) const
	static int _bind_cull(lua_State *L) {
		if (!_lg_typecheck_cull(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ClusterCullingCallback::cull(osg::NodeVisitor * , osg::Drawable * , osg::State * ) const function, expected prototype:\nbool osg::ClusterCullingCallback::cull(osg::NodeVisitor * , osg::Drawable * , osg::State * ) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 50169651\n");
		}

		osg::NodeVisitor* _arg1=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		osg::Drawable* _arg2=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,3));
		osg::State* _arg3=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,4));

		osg::ClusterCullingCallback* self=dynamic_cast< osg::ClusterCullingCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ClusterCullingCallback::cull(osg::NodeVisitor *, osg::Drawable *, osg::State *) const");
		}
		bool lret = self->cull(_arg1, _arg2, _arg3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:
	// void osg::ClusterCullingCallback::operator()(osg::Node * node, osg::NodeVisitor * nv)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClusterCullingCallback::operator()(osg::Node * node, osg::NodeVisitor * nv) function, expected prototype:\nvoid osg::ClusterCullingCallback::operator()(osg::Node * node, osg::NodeVisitor * nv)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osg::Node* node=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		osg::NodeVisitor* nv=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,3));

		osg::ClusterCullingCallback* self=dynamic_cast< osg::ClusterCullingCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClusterCullingCallback::operator()(osg::Node *, osg::NodeVisitor *)");
		}
		self->operator()(node, nv);

		return 0;
	}


};

osg::ClusterCullingCallback* LunaTraits< osg::ClusterCullingCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ClusterCullingCallback::_bind_ctor(L);
}

void LunaTraits< osg::ClusterCullingCallback >::_bind_dtor(osg::ClusterCullingCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ClusterCullingCallback >::className[] = "ClusterCullingCallback";
const char LunaTraits< osg::ClusterCullingCallback >::fullName[] = "osg::ClusterCullingCallback";
const char LunaTraits< osg::ClusterCullingCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::ClusterCullingCallback >::parents[] = {"osg.CullCallback", "osg.NodeCallback", 0};
const int LunaTraits< osg::ClusterCullingCallback >::hash = 69111348;
const int LunaTraits< osg::ClusterCullingCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ClusterCullingCallback >::methods[] = {
	{"cloneType", &luna_wrapper_osg_ClusterCullingCallback::_bind_cloneType},
	{"clone", &luna_wrapper_osg_ClusterCullingCallback::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_ClusterCullingCallback::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_ClusterCullingCallback::_bind_libraryName},
	{"className", &luna_wrapper_osg_ClusterCullingCallback::_bind_className},
	{"computeFrom", &luna_wrapper_osg_ClusterCullingCallback::_bind_computeFrom},
	{"transform", &luna_wrapper_osg_ClusterCullingCallback::_bind_transform},
	{"set", &luna_wrapper_osg_ClusterCullingCallback::_bind_set},
	{"setControlPoint", &luna_wrapper_osg_ClusterCullingCallback::_bind_setControlPoint},
	{"getControlPoint", &luna_wrapper_osg_ClusterCullingCallback::_bind_getControlPoint},
	{"setNormal", &luna_wrapper_osg_ClusterCullingCallback::_bind_setNormal},
	{"getNormal", &luna_wrapper_osg_ClusterCullingCallback::_bind_getNormal},
	{"setRadius", &luna_wrapper_osg_ClusterCullingCallback::_bind_setRadius},
	{"getRadius", &luna_wrapper_osg_ClusterCullingCallback::_bind_getRadius},
	{"setDeviation", &luna_wrapper_osg_ClusterCullingCallback::_bind_setDeviation},
	{"getDeviation", &luna_wrapper_osg_ClusterCullingCallback::_bind_getDeviation},
	{"cull", &luna_wrapper_osg_ClusterCullingCallback::_bind_cull},
	{"op_call", &luna_wrapper_osg_ClusterCullingCallback::_bind_op_call},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ClusterCullingCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ClusterCullingCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ClusterCullingCallback >::enumValues[] = {
	{0,0}
};


