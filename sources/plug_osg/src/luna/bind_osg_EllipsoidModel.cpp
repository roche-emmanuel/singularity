#include <plug_common.h>

class luna_wrapper_osg_EllipsoidModel {
public:
	typedef Luna< osg::EllipsoidModel > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::EllipsoidModel* ptr= dynamic_cast< osg::EllipsoidModel* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::EllipsoidModel >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && lua_isnumber(L,1)==0 ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
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

	inline static bool _lg_typecheck_setRadiusEquator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRadiusEquator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRadiusPolar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRadiusPolar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_convertLatLongHeightToXYZ(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_convertXYZToLatLongHeight(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeLocalToWorldTransformFromLatLongHeight(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,5,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeLocalToWorldTransformFromXYZ(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,5,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeCoordinateFrame(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeLocalUpVector(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isWGS84(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::EllipsoidModel::EllipsoidModel(double radiusEquator = osg::WGS_84_RADIUS_EQUATOR, double radiusPolar = osg::WGS_84_RADIUS_POLAR)
	static osg::EllipsoidModel* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::EllipsoidModel::EllipsoidModel(double radiusEquator = osg::WGS_84_RADIUS_EQUATOR, double radiusPolar = osg::WGS_84_RADIUS_POLAR) function, expected prototype:\nosg::EllipsoidModel::EllipsoidModel(double radiusEquator = osg::WGS_84_RADIUS_EQUATOR, double radiusPolar = osg::WGS_84_RADIUS_POLAR)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double radiusEquator=luatop>0 ? (double)lua_tonumber(L,1) : osg::WGS_84_RADIUS_EQUATOR;
		double radiusPolar=luatop>1 ? (double)lua_tonumber(L,2) : osg::WGS_84_RADIUS_POLAR;

		return new osg::EllipsoidModel(radiusEquator, radiusPolar);
	}

	// osg::EllipsoidModel::EllipsoidModel(const osg::EllipsoidModel & et, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::EllipsoidModel* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::EllipsoidModel::EllipsoidModel(const osg::EllipsoidModel & et, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::EllipsoidModel::EllipsoidModel(const osg::EllipsoidModel & et, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::EllipsoidModel* et_ptr=dynamic_cast< osg::EllipsoidModel* >(Luna< osg::Referenced >::check(L,1));
		if( !et_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg et in osg::EllipsoidModel::EllipsoidModel function");
		}
		const osg::EllipsoidModel & et=*et_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::EllipsoidModel::EllipsoidModel function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::EllipsoidModel(et, copyop);
	}

	// Overload binder for osg::EllipsoidModel::EllipsoidModel
	static osg::EllipsoidModel* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function EllipsoidModel, cannot match any of the overloads for function EllipsoidModel:\n  EllipsoidModel(double, double)\n  EllipsoidModel(const osg::EllipsoidModel &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::EllipsoidModel::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::EllipsoidModel::cloneType() const function, expected prototype:\nosg::Object * osg::EllipsoidModel::cloneType() const\nClass arguments details:\n");
		}


		osg::EllipsoidModel* self=dynamic_cast< osg::EllipsoidModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::EllipsoidModel::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::EllipsoidModel::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::EllipsoidModel::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::EllipsoidModel::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::EllipsoidModel::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::EllipsoidModel* self=dynamic_cast< osg::EllipsoidModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::EllipsoidModel::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::EllipsoidModel::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::EllipsoidModel::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::EllipsoidModel::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::EllipsoidModel* self=dynamic_cast< osg::EllipsoidModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::EllipsoidModel::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::EllipsoidModel::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::EllipsoidModel::libraryName() const function, expected prototype:\nconst char * osg::EllipsoidModel::libraryName() const\nClass arguments details:\n");
		}


		osg::EllipsoidModel* self=dynamic_cast< osg::EllipsoidModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::EllipsoidModel::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::EllipsoidModel::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::EllipsoidModel::className() const function, expected prototype:\nconst char * osg::EllipsoidModel::className() const\nClass arguments details:\n");
		}


		osg::EllipsoidModel* self=dynamic_cast< osg::EllipsoidModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::EllipsoidModel::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::EllipsoidModel::setRadiusEquator(double radius)
	static int _bind_setRadiusEquator(lua_State *L) {
		if (!_lg_typecheck_setRadiusEquator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::EllipsoidModel::setRadiusEquator(double radius) function, expected prototype:\nvoid osg::EllipsoidModel::setRadiusEquator(double radius)\nClass arguments details:\n");
		}

		double radius=(double)lua_tonumber(L,2);

		osg::EllipsoidModel* self=dynamic_cast< osg::EllipsoidModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::EllipsoidModel::setRadiusEquator(double)");
		}
		self->setRadiusEquator(radius);

		return 0;
	}

	// double osg::EllipsoidModel::getRadiusEquator() const
	static int _bind_getRadiusEquator(lua_State *L) {
		if (!_lg_typecheck_getRadiusEquator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::EllipsoidModel::getRadiusEquator() const function, expected prototype:\ndouble osg::EllipsoidModel::getRadiusEquator() const\nClass arguments details:\n");
		}


		osg::EllipsoidModel* self=dynamic_cast< osg::EllipsoidModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::EllipsoidModel::getRadiusEquator() const");
		}
		double lret = self->getRadiusEquator();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::EllipsoidModel::setRadiusPolar(double radius)
	static int _bind_setRadiusPolar(lua_State *L) {
		if (!_lg_typecheck_setRadiusPolar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::EllipsoidModel::setRadiusPolar(double radius) function, expected prototype:\nvoid osg::EllipsoidModel::setRadiusPolar(double radius)\nClass arguments details:\n");
		}

		double radius=(double)lua_tonumber(L,2);

		osg::EllipsoidModel* self=dynamic_cast< osg::EllipsoidModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::EllipsoidModel::setRadiusPolar(double)");
		}
		self->setRadiusPolar(radius);

		return 0;
	}

	// double osg::EllipsoidModel::getRadiusPolar() const
	static int _bind_getRadiusPolar(lua_State *L) {
		if (!_lg_typecheck_getRadiusPolar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::EllipsoidModel::getRadiusPolar() const function, expected prototype:\ndouble osg::EllipsoidModel::getRadiusPolar() const\nClass arguments details:\n");
		}


		osg::EllipsoidModel* self=dynamic_cast< osg::EllipsoidModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::EllipsoidModel::getRadiusPolar() const");
		}
		double lret = self->getRadiusPolar();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::EllipsoidModel::convertLatLongHeightToXYZ(double latitude, double longitude, double height, double & X, double & Y, double & Z) const
	static int _bind_convertLatLongHeightToXYZ(lua_State *L) {
		if (!_lg_typecheck_convertLatLongHeightToXYZ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::EllipsoidModel::convertLatLongHeightToXYZ(double latitude, double longitude, double height, double & X, double & Y, double & Z) const function, expected prototype:\nvoid osg::EllipsoidModel::convertLatLongHeightToXYZ(double latitude, double longitude, double height, double & X, double & Y, double & Z) const\nClass arguments details:\n");
		}

		double latitude=(double)lua_tonumber(L,2);
		double longitude=(double)lua_tonumber(L,3);
		double height=(double)lua_tonumber(L,4);
		double X=(double)lua_tonumber(L,5);
		double Y=(double)lua_tonumber(L,6);
		double Z=(double)lua_tonumber(L,7);

		osg::EllipsoidModel* self=dynamic_cast< osg::EllipsoidModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::EllipsoidModel::convertLatLongHeightToXYZ(double, double, double, double &, double &, double &) const");
		}
		self->convertLatLongHeightToXYZ(latitude, longitude, height, X, Y, Z);

		return 0;
	}

	// void osg::EllipsoidModel::convertXYZToLatLongHeight(double X, double Y, double Z, double & latitude, double & longitude, double & height) const
	static int _bind_convertXYZToLatLongHeight(lua_State *L) {
		if (!_lg_typecheck_convertXYZToLatLongHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::EllipsoidModel::convertXYZToLatLongHeight(double X, double Y, double Z, double & latitude, double & longitude, double & height) const function, expected prototype:\nvoid osg::EllipsoidModel::convertXYZToLatLongHeight(double X, double Y, double Z, double & latitude, double & longitude, double & height) const\nClass arguments details:\n");
		}

		double X=(double)lua_tonumber(L,2);
		double Y=(double)lua_tonumber(L,3);
		double Z=(double)lua_tonumber(L,4);
		double latitude=(double)lua_tonumber(L,5);
		double longitude=(double)lua_tonumber(L,6);
		double height=(double)lua_tonumber(L,7);

		osg::EllipsoidModel* self=dynamic_cast< osg::EllipsoidModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::EllipsoidModel::convertXYZToLatLongHeight(double, double, double, double &, double &, double &) const");
		}
		self->convertXYZToLatLongHeight(X, Y, Z, latitude, longitude, height);

		return 0;
	}

	// void osg::EllipsoidModel::computeLocalToWorldTransformFromLatLongHeight(double latitude, double longitude, double height, osg::Matrixd & localToWorld) const
	static int _bind_computeLocalToWorldTransformFromLatLongHeight(lua_State *L) {
		if (!_lg_typecheck_computeLocalToWorldTransformFromLatLongHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::EllipsoidModel::computeLocalToWorldTransformFromLatLongHeight(double latitude, double longitude, double height, osg::Matrixd & localToWorld) const function, expected prototype:\nvoid osg::EllipsoidModel::computeLocalToWorldTransformFromLatLongHeight(double latitude, double longitude, double height, osg::Matrixd & localToWorld) const\nClass arguments details:\narg 4 ID = 18903838\n");
		}

		double latitude=(double)lua_tonumber(L,2);
		double longitude=(double)lua_tonumber(L,3);
		double height=(double)lua_tonumber(L,4);
		osg::Matrixd* localToWorld_ptr=(Luna< osg::Matrixd >::check(L,5));
		if( !localToWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localToWorld in osg::EllipsoidModel::computeLocalToWorldTransformFromLatLongHeight function");
		}
		osg::Matrixd & localToWorld=*localToWorld_ptr;

		osg::EllipsoidModel* self=dynamic_cast< osg::EllipsoidModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::EllipsoidModel::computeLocalToWorldTransformFromLatLongHeight(double, double, double, osg::Matrixd &) const");
		}
		self->computeLocalToWorldTransformFromLatLongHeight(latitude, longitude, height, localToWorld);

		return 0;
	}

	// void osg::EllipsoidModel::computeLocalToWorldTransformFromXYZ(double X, double Y, double Z, osg::Matrixd & localToWorld) const
	static int _bind_computeLocalToWorldTransformFromXYZ(lua_State *L) {
		if (!_lg_typecheck_computeLocalToWorldTransformFromXYZ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::EllipsoidModel::computeLocalToWorldTransformFromXYZ(double X, double Y, double Z, osg::Matrixd & localToWorld) const function, expected prototype:\nvoid osg::EllipsoidModel::computeLocalToWorldTransformFromXYZ(double X, double Y, double Z, osg::Matrixd & localToWorld) const\nClass arguments details:\narg 4 ID = 18903838\n");
		}

		double X=(double)lua_tonumber(L,2);
		double Y=(double)lua_tonumber(L,3);
		double Z=(double)lua_tonumber(L,4);
		osg::Matrixd* localToWorld_ptr=(Luna< osg::Matrixd >::check(L,5));
		if( !localToWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localToWorld in osg::EllipsoidModel::computeLocalToWorldTransformFromXYZ function");
		}
		osg::Matrixd & localToWorld=*localToWorld_ptr;

		osg::EllipsoidModel* self=dynamic_cast< osg::EllipsoidModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::EllipsoidModel::computeLocalToWorldTransformFromXYZ(double, double, double, osg::Matrixd &) const");
		}
		self->computeLocalToWorldTransformFromXYZ(X, Y, Z, localToWorld);

		return 0;
	}

	// void osg::EllipsoidModel::computeCoordinateFrame(double latitude, double longitude, osg::Matrixd & localToWorld) const
	static int _bind_computeCoordinateFrame(lua_State *L) {
		if (!_lg_typecheck_computeCoordinateFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::EllipsoidModel::computeCoordinateFrame(double latitude, double longitude, osg::Matrixd & localToWorld) const function, expected prototype:\nvoid osg::EllipsoidModel::computeCoordinateFrame(double latitude, double longitude, osg::Matrixd & localToWorld) const\nClass arguments details:\narg 3 ID = 18903838\n");
		}

		double latitude=(double)lua_tonumber(L,2);
		double longitude=(double)lua_tonumber(L,3);
		osg::Matrixd* localToWorld_ptr=(Luna< osg::Matrixd >::check(L,4));
		if( !localToWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localToWorld in osg::EllipsoidModel::computeCoordinateFrame function");
		}
		osg::Matrixd & localToWorld=*localToWorld_ptr;

		osg::EllipsoidModel* self=dynamic_cast< osg::EllipsoidModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::EllipsoidModel::computeCoordinateFrame(double, double, osg::Matrixd &) const");
		}
		self->computeCoordinateFrame(latitude, longitude, localToWorld);

		return 0;
	}

	// osg::Vec3d osg::EllipsoidModel::computeLocalUpVector(double X, double Y, double Z) const
	static int _bind_computeLocalUpVector(lua_State *L) {
		if (!_lg_typecheck_computeLocalUpVector(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3d osg::EllipsoidModel::computeLocalUpVector(double X, double Y, double Z) const function, expected prototype:\nosg::Vec3d osg::EllipsoidModel::computeLocalUpVector(double X, double Y, double Z) const\nClass arguments details:\n");
		}

		double X=(double)lua_tonumber(L,2);
		double Y=(double)lua_tonumber(L,3);
		double Z=(double)lua_tonumber(L,4);

		osg::EllipsoidModel* self=dynamic_cast< osg::EllipsoidModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3d osg::EllipsoidModel::computeLocalUpVector(double, double, double) const");
		}
		osg::Vec3d stack_lret = self->computeLocalUpVector(X, Y, Z);
		osg::Vec3d* lret = new osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}

	// bool osg::EllipsoidModel::isWGS84() const
	static int _bind_isWGS84(lua_State *L) {
		if (!_lg_typecheck_isWGS84(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::EllipsoidModel::isWGS84() const function, expected prototype:\nbool osg::EllipsoidModel::isWGS84() const\nClass arguments details:\n");
		}


		osg::EllipsoidModel* self=dynamic_cast< osg::EllipsoidModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::EllipsoidModel::isWGS84() const");
		}
		bool lret = self->isWGS84();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osg::EllipsoidModel* LunaTraits< osg::EllipsoidModel >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_EllipsoidModel::_bind_ctor(L);
}

void LunaTraits< osg::EllipsoidModel >::_bind_dtor(osg::EllipsoidModel* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::EllipsoidModel >::className[] = "EllipsoidModel";
const char LunaTraits< osg::EllipsoidModel >::fullName[] = "osg::EllipsoidModel";
const char LunaTraits< osg::EllipsoidModel >::moduleName[] = "osg";
const char* LunaTraits< osg::EllipsoidModel >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::EllipsoidModel >::hash = 38271934;
const int LunaTraits< osg::EllipsoidModel >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::EllipsoidModel >::methods[] = {
	{"cloneType", &luna_wrapper_osg_EllipsoidModel::_bind_cloneType},
	{"clone", &luna_wrapper_osg_EllipsoidModel::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_EllipsoidModel::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_EllipsoidModel::_bind_libraryName},
	{"className", &luna_wrapper_osg_EllipsoidModel::_bind_className},
	{"setRadiusEquator", &luna_wrapper_osg_EllipsoidModel::_bind_setRadiusEquator},
	{"getRadiusEquator", &luna_wrapper_osg_EllipsoidModel::_bind_getRadiusEquator},
	{"setRadiusPolar", &luna_wrapper_osg_EllipsoidModel::_bind_setRadiusPolar},
	{"getRadiusPolar", &luna_wrapper_osg_EllipsoidModel::_bind_getRadiusPolar},
	{"convertLatLongHeightToXYZ", &luna_wrapper_osg_EllipsoidModel::_bind_convertLatLongHeightToXYZ},
	{"convertXYZToLatLongHeight", &luna_wrapper_osg_EllipsoidModel::_bind_convertXYZToLatLongHeight},
	{"computeLocalToWorldTransformFromLatLongHeight", &luna_wrapper_osg_EllipsoidModel::_bind_computeLocalToWorldTransformFromLatLongHeight},
	{"computeLocalToWorldTransformFromXYZ", &luna_wrapper_osg_EllipsoidModel::_bind_computeLocalToWorldTransformFromXYZ},
	{"computeCoordinateFrame", &luna_wrapper_osg_EllipsoidModel::_bind_computeCoordinateFrame},
	{"computeLocalUpVector", &luna_wrapper_osg_EllipsoidModel::_bind_computeLocalUpVector},
	{"isWGS84", &luna_wrapper_osg_EllipsoidModel::_bind_isWGS84},
	{0,0}
};

luna_ConverterType LunaTraits< osg::EllipsoidModel >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_EllipsoidModel::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::EllipsoidModel >::enumValues[] = {
	{0,0}
};

