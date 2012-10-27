#include <plug_common.h>

class luna_wrapper_osg_AnimationPath {
public:
	typedef Luna< osg::AnimationPath > luna_t;

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
		osg::AnimationPath* ptr= dynamic_cast< osg::AnimationPath* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::AnimationPath >::push(L,ptr,false);
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
		if( (!dynamic_cast< osg::AnimationPath* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
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

	inline static bool _lg_typecheck_getMatrix_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903840) ) return false;
		if( (!dynamic_cast< osg::Matrixf* >(Luna< osg::Matrixf >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMatrix_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903838) ) return false;
		if( (!dynamic_cast< osg::Matrixd* >(Luna< osg::Matrixd >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInverse_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903840) ) return false;
		if( (!dynamic_cast< osg::Matrixf* >(Luna< osg::Matrixf >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInverse_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903838) ) return false;
		if( (!dynamic_cast< osg::Matrixd* >(Luna< osg::Matrixd >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInterpolatedControlPoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,19942584) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_insert(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,19942584) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFirstTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLastTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPeriod(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLoopMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLoopMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTimeControlPointMap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87612809) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTimeControlPointMap_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTimeControlPointMap_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_empty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::AnimationPath::AnimationPath()
	static osg::AnimationPath* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::AnimationPath::AnimationPath() function, expected prototype:\nosg::AnimationPath::AnimationPath()\nClass arguments details:\n");
		}


		return new osg::AnimationPath();
	}

	// osg::AnimationPath::AnimationPath(const osg::AnimationPath & ap, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::AnimationPath* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::AnimationPath::AnimationPath(const osg::AnimationPath & ap, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::AnimationPath::AnimationPath(const osg::AnimationPath & ap, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::AnimationPath* ap_ptr=dynamic_cast< osg::AnimationPath* >(Luna< osg::Referenced >::check(L,1));
		if( !ap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ap in osg::AnimationPath::AnimationPath function");
		}
		const osg::AnimationPath & ap=*ap_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::AnimationPath::AnimationPath function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::AnimationPath(ap, copyop);
	}

	// Overload binder for osg::AnimationPath::AnimationPath
	static osg::AnimationPath* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function AnimationPath, cannot match any of the overloads for function AnimationPath:\n  AnimationPath()\n  AnimationPath(const osg::AnimationPath &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::AnimationPath::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::AnimationPath::cloneType() const function, expected prototype:\nosg::Object * osg::AnimationPath::cloneType() const\nClass arguments details:\n");
		}


		osg::AnimationPath* self=dynamic_cast< osg::AnimationPath* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::AnimationPath::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::AnimationPath::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::AnimationPath::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::AnimationPath::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::AnimationPath::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::AnimationPath* self=dynamic_cast< osg::AnimationPath* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::AnimationPath::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::AnimationPath::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::AnimationPath::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::AnimationPath::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::AnimationPath* self=dynamic_cast< osg::AnimationPath* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::AnimationPath::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::AnimationPath::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::AnimationPath::libraryName() const function, expected prototype:\nconst char * osg::AnimationPath::libraryName() const\nClass arguments details:\n");
		}


		osg::AnimationPath* self=dynamic_cast< osg::AnimationPath* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::AnimationPath::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::AnimationPath::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::AnimationPath::className() const function, expected prototype:\nconst char * osg::AnimationPath::className() const\nClass arguments details:\n");
		}


		osg::AnimationPath* self=dynamic_cast< osg::AnimationPath* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::AnimationPath::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osg::AnimationPath::getMatrix(double time, osg::Matrixf & matrix) const
	static int _bind_getMatrix_overload_1(lua_State *L) {
		if (!_lg_typecheck_getMatrix_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::AnimationPath::getMatrix(double time, osg::Matrixf & matrix) const function, expected prototype:\nbool osg::AnimationPath::getMatrix(double time, osg::Matrixf & matrix) const\nClass arguments details:\narg 2 ID = 18903840\n");
		}

		double time=(double)lua_tonumber(L,2);
		osg::Matrixf* matrix_ptr=(Luna< osg::Matrixf >::check(L,3));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::AnimationPath::getMatrix function");
		}
		osg::Matrixf & matrix=*matrix_ptr;

		osg::AnimationPath* self=dynamic_cast< osg::AnimationPath* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::AnimationPath::getMatrix(double, osg::Matrixf &) const");
		}
		bool lret = self->getMatrix(time, matrix);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::AnimationPath::getMatrix(double time, osg::Matrixd & matrix) const
	static int _bind_getMatrix_overload_2(lua_State *L) {
		if (!_lg_typecheck_getMatrix_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::AnimationPath::getMatrix(double time, osg::Matrixd & matrix) const function, expected prototype:\nbool osg::AnimationPath::getMatrix(double time, osg::Matrixd & matrix) const\nClass arguments details:\narg 2 ID = 18903838\n");
		}

		double time=(double)lua_tonumber(L,2);
		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,3));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::AnimationPath::getMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;

		osg::AnimationPath* self=dynamic_cast< osg::AnimationPath* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::AnimationPath::getMatrix(double, osg::Matrixd &) const");
		}
		bool lret = self->getMatrix(time, matrix);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::AnimationPath::getMatrix
	static int _bind_getMatrix(lua_State *L) {
		if (_lg_typecheck_getMatrix_overload_1(L)) return _bind_getMatrix_overload_1(L);
		if (_lg_typecheck_getMatrix_overload_2(L)) return _bind_getMatrix_overload_2(L);

		luaL_error(L, "error in function getMatrix, cannot match any of the overloads for function getMatrix:\n  getMatrix(double, osg::Matrixf &)\n  getMatrix(double, osg::Matrixd &)\n");
		return 0;
	}

	// bool osg::AnimationPath::getInverse(double time, osg::Matrixf & matrix) const
	static int _bind_getInverse_overload_1(lua_State *L) {
		if (!_lg_typecheck_getInverse_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::AnimationPath::getInverse(double time, osg::Matrixf & matrix) const function, expected prototype:\nbool osg::AnimationPath::getInverse(double time, osg::Matrixf & matrix) const\nClass arguments details:\narg 2 ID = 18903840\n");
		}

		double time=(double)lua_tonumber(L,2);
		osg::Matrixf* matrix_ptr=(Luna< osg::Matrixf >::check(L,3));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::AnimationPath::getInverse function");
		}
		osg::Matrixf & matrix=*matrix_ptr;

		osg::AnimationPath* self=dynamic_cast< osg::AnimationPath* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::AnimationPath::getInverse(double, osg::Matrixf &) const");
		}
		bool lret = self->getInverse(time, matrix);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::AnimationPath::getInverse(double time, osg::Matrixd & matrix) const
	static int _bind_getInverse_overload_2(lua_State *L) {
		if (!_lg_typecheck_getInverse_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::AnimationPath::getInverse(double time, osg::Matrixd & matrix) const function, expected prototype:\nbool osg::AnimationPath::getInverse(double time, osg::Matrixd & matrix) const\nClass arguments details:\narg 2 ID = 18903838\n");
		}

		double time=(double)lua_tonumber(L,2);
		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,3));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::AnimationPath::getInverse function");
		}
		osg::Matrixd & matrix=*matrix_ptr;

		osg::AnimationPath* self=dynamic_cast< osg::AnimationPath* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::AnimationPath::getInverse(double, osg::Matrixd &) const");
		}
		bool lret = self->getInverse(time, matrix);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::AnimationPath::getInverse
	static int _bind_getInverse(lua_State *L) {
		if (_lg_typecheck_getInverse_overload_1(L)) return _bind_getInverse_overload_1(L);
		if (_lg_typecheck_getInverse_overload_2(L)) return _bind_getInverse_overload_2(L);

		luaL_error(L, "error in function getInverse, cannot match any of the overloads for function getInverse:\n  getInverse(double, osg::Matrixf &)\n  getInverse(double, osg::Matrixd &)\n");
		return 0;
	}

	// bool osg::AnimationPath::getInterpolatedControlPoint(double time, osg::AnimationPath::ControlPoint & controlPoint) const
	static int _bind_getInterpolatedControlPoint(lua_State *L) {
		if (!_lg_typecheck_getInterpolatedControlPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::AnimationPath::getInterpolatedControlPoint(double time, osg::AnimationPath::ControlPoint & controlPoint) const function, expected prototype:\nbool osg::AnimationPath::getInterpolatedControlPoint(double time, osg::AnimationPath::ControlPoint & controlPoint) const\nClass arguments details:\narg 2 ID = 19942584\n");
		}

		double time=(double)lua_tonumber(L,2);
		osg::AnimationPath::ControlPoint* controlPoint_ptr=(Luna< osg::AnimationPath::ControlPoint >::check(L,3));
		if( !controlPoint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg controlPoint in osg::AnimationPath::getInterpolatedControlPoint function");
		}
		osg::AnimationPath::ControlPoint & controlPoint=*controlPoint_ptr;

		osg::AnimationPath* self=dynamic_cast< osg::AnimationPath* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::AnimationPath::getInterpolatedControlPoint(double, osg::AnimationPath::ControlPoint &) const");
		}
		bool lret = self->getInterpolatedControlPoint(time, controlPoint);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::AnimationPath::insert(double time, const osg::AnimationPath::ControlPoint & controlPoint)
	static int _bind_insert(lua_State *L) {
		if (!_lg_typecheck_insert(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AnimationPath::insert(double time, const osg::AnimationPath::ControlPoint & controlPoint) function, expected prototype:\nvoid osg::AnimationPath::insert(double time, const osg::AnimationPath::ControlPoint & controlPoint)\nClass arguments details:\narg 2 ID = 19942584\n");
		}

		double time=(double)lua_tonumber(L,2);
		const osg::AnimationPath::ControlPoint* controlPoint_ptr=(Luna< osg::AnimationPath::ControlPoint >::check(L,3));
		if( !controlPoint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg controlPoint in osg::AnimationPath::insert function");
		}
		const osg::AnimationPath::ControlPoint & controlPoint=*controlPoint_ptr;

		osg::AnimationPath* self=dynamic_cast< osg::AnimationPath* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AnimationPath::insert(double, const osg::AnimationPath::ControlPoint &)");
		}
		self->insert(time, controlPoint);

		return 0;
	}

	// double osg::AnimationPath::getFirstTime() const
	static int _bind_getFirstTime(lua_State *L) {
		if (!_lg_typecheck_getFirstTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::AnimationPath::getFirstTime() const function, expected prototype:\ndouble osg::AnimationPath::getFirstTime() const\nClass arguments details:\n");
		}


		osg::AnimationPath* self=dynamic_cast< osg::AnimationPath* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::AnimationPath::getFirstTime() const");
		}
		double lret = self->getFirstTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::AnimationPath::getLastTime() const
	static int _bind_getLastTime(lua_State *L) {
		if (!_lg_typecheck_getLastTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::AnimationPath::getLastTime() const function, expected prototype:\ndouble osg::AnimationPath::getLastTime() const\nClass arguments details:\n");
		}


		osg::AnimationPath* self=dynamic_cast< osg::AnimationPath* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::AnimationPath::getLastTime() const");
		}
		double lret = self->getLastTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::AnimationPath::getPeriod() const
	static int _bind_getPeriod(lua_State *L) {
		if (!_lg_typecheck_getPeriod(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::AnimationPath::getPeriod() const function, expected prototype:\ndouble osg::AnimationPath::getPeriod() const\nClass arguments details:\n");
		}


		osg::AnimationPath* self=dynamic_cast< osg::AnimationPath* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::AnimationPath::getPeriod() const");
		}
		double lret = self->getPeriod();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::AnimationPath::setLoopMode(osg::AnimationPath::LoopMode lm)
	static int _bind_setLoopMode(lua_State *L) {
		if (!_lg_typecheck_setLoopMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AnimationPath::setLoopMode(osg::AnimationPath::LoopMode lm) function, expected prototype:\nvoid osg::AnimationPath::setLoopMode(osg::AnimationPath::LoopMode lm)\nClass arguments details:\n");
		}

		osg::AnimationPath::LoopMode lm=(osg::AnimationPath::LoopMode)lua_tointeger(L,2);

		osg::AnimationPath* self=dynamic_cast< osg::AnimationPath* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AnimationPath::setLoopMode(osg::AnimationPath::LoopMode)");
		}
		self->setLoopMode(lm);

		return 0;
	}

	// osg::AnimationPath::LoopMode osg::AnimationPath::getLoopMode() const
	static int _bind_getLoopMode(lua_State *L) {
		if (!_lg_typecheck_getLoopMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::AnimationPath::LoopMode osg::AnimationPath::getLoopMode() const function, expected prototype:\nosg::AnimationPath::LoopMode osg::AnimationPath::getLoopMode() const\nClass arguments details:\n");
		}


		osg::AnimationPath* self=dynamic_cast< osg::AnimationPath* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::AnimationPath::LoopMode osg::AnimationPath::getLoopMode() const");
		}
		osg::AnimationPath::LoopMode lret = self->getLoopMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::AnimationPath::setTimeControlPointMap(osg::AnimationPath::TimeControlPointMap & tcpm)
	static int _bind_setTimeControlPointMap(lua_State *L) {
		if (!_lg_typecheck_setTimeControlPointMap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AnimationPath::setTimeControlPointMap(osg::AnimationPath::TimeControlPointMap & tcpm) function, expected prototype:\nvoid osg::AnimationPath::setTimeControlPointMap(osg::AnimationPath::TimeControlPointMap & tcpm)\nClass arguments details:\narg 1 ID = 87612809\n");
		}

		osg::AnimationPath::TimeControlPointMap* tcpm_ptr=(Luna< osg::AnimationPath::TimeControlPointMap >::check(L,2));
		if( !tcpm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tcpm in osg::AnimationPath::setTimeControlPointMap function");
		}
		osg::AnimationPath::TimeControlPointMap & tcpm=*tcpm_ptr;

		osg::AnimationPath* self=dynamic_cast< osg::AnimationPath* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AnimationPath::setTimeControlPointMap(osg::AnimationPath::TimeControlPointMap &)");
		}
		self->setTimeControlPointMap(tcpm);

		return 0;
	}

	// osg::AnimationPath::TimeControlPointMap & osg::AnimationPath::getTimeControlPointMap()
	static int _bind_getTimeControlPointMap_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTimeControlPointMap_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::AnimationPath::TimeControlPointMap & osg::AnimationPath::getTimeControlPointMap() function, expected prototype:\nosg::AnimationPath::TimeControlPointMap & osg::AnimationPath::getTimeControlPointMap()\nClass arguments details:\n");
		}


		osg::AnimationPath* self=dynamic_cast< osg::AnimationPath* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::AnimationPath::TimeControlPointMap & osg::AnimationPath::getTimeControlPointMap()");
		}
		const osg::AnimationPath::TimeControlPointMap* lret = &self->getTimeControlPointMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::AnimationPath::TimeControlPointMap >::push(L,lret,false);

		return 1;
	}

	// const osg::AnimationPath::TimeControlPointMap & osg::AnimationPath::getTimeControlPointMap() const
	static int _bind_getTimeControlPointMap_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTimeControlPointMap_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::AnimationPath::TimeControlPointMap & osg::AnimationPath::getTimeControlPointMap() const function, expected prototype:\nconst osg::AnimationPath::TimeControlPointMap & osg::AnimationPath::getTimeControlPointMap() const\nClass arguments details:\n");
		}


		osg::AnimationPath* self=dynamic_cast< osg::AnimationPath* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::AnimationPath::TimeControlPointMap & osg::AnimationPath::getTimeControlPointMap() const");
		}
		const osg::AnimationPath::TimeControlPointMap* lret = &self->getTimeControlPointMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::AnimationPath::TimeControlPointMap >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::AnimationPath::getTimeControlPointMap
	static int _bind_getTimeControlPointMap(lua_State *L) {
		if (_lg_typecheck_getTimeControlPointMap_overload_1(L)) return _bind_getTimeControlPointMap_overload_1(L);
		if (_lg_typecheck_getTimeControlPointMap_overload_2(L)) return _bind_getTimeControlPointMap_overload_2(L);

		luaL_error(L, "error in function getTimeControlPointMap, cannot match any of the overloads for function getTimeControlPointMap:\n  getTimeControlPointMap()\n  getTimeControlPointMap()\n");
		return 0;
	}

	// bool osg::AnimationPath::empty() const
	static int _bind_empty(lua_State *L) {
		if (!_lg_typecheck_empty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::AnimationPath::empty() const function, expected prototype:\nbool osg::AnimationPath::empty() const\nClass arguments details:\n");
		}


		osg::AnimationPath* self=dynamic_cast< osg::AnimationPath* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::AnimationPath::empty() const");
		}
		bool lret = self->empty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::AnimationPath::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AnimationPath::clear() function, expected prototype:\nvoid osg::AnimationPath::clear()\nClass arguments details:\n");
		}


		osg::AnimationPath* self=dynamic_cast< osg::AnimationPath* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AnimationPath::clear()");
		}
		self->clear();

		return 0;
	}


	// Operator binds:

};

osg::AnimationPath* LunaTraits< osg::AnimationPath >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_AnimationPath::_bind_ctor(L);
}

void LunaTraits< osg::AnimationPath >::_bind_dtor(osg::AnimationPath* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::AnimationPath >::className[] = "AnimationPath";
const char LunaTraits< osg::AnimationPath >::fullName[] = "osg::AnimationPath";
const char LunaTraits< osg::AnimationPath >::moduleName[] = "osg";
const char* LunaTraits< osg::AnimationPath >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::AnimationPath >::hash = 17776116;
const int LunaTraits< osg::AnimationPath >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::AnimationPath >::methods[] = {
	{"cloneType", &luna_wrapper_osg_AnimationPath::_bind_cloneType},
	{"clone", &luna_wrapper_osg_AnimationPath::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_AnimationPath::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_AnimationPath::_bind_libraryName},
	{"className", &luna_wrapper_osg_AnimationPath::_bind_className},
	{"getMatrix", &luna_wrapper_osg_AnimationPath::_bind_getMatrix},
	{"getInverse", &luna_wrapper_osg_AnimationPath::_bind_getInverse},
	{"getInterpolatedControlPoint", &luna_wrapper_osg_AnimationPath::_bind_getInterpolatedControlPoint},
	{"insert", &luna_wrapper_osg_AnimationPath::_bind_insert},
	{"getFirstTime", &luna_wrapper_osg_AnimationPath::_bind_getFirstTime},
	{"getLastTime", &luna_wrapper_osg_AnimationPath::_bind_getLastTime},
	{"getPeriod", &luna_wrapper_osg_AnimationPath::_bind_getPeriod},
	{"setLoopMode", &luna_wrapper_osg_AnimationPath::_bind_setLoopMode},
	{"getLoopMode", &luna_wrapper_osg_AnimationPath::_bind_getLoopMode},
	{"setTimeControlPointMap", &luna_wrapper_osg_AnimationPath::_bind_setTimeControlPointMap},
	{"getTimeControlPointMap", &luna_wrapper_osg_AnimationPath::_bind_getTimeControlPointMap},
	{"empty", &luna_wrapper_osg_AnimationPath::_bind_empty},
	{"clear", &luna_wrapper_osg_AnimationPath::_bind_clear},
	{"__eq", &luna_wrapper_osg_AnimationPath::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::AnimationPath >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_AnimationPath::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::AnimationPath >::enumValues[] = {
	{"SWING", osg::AnimationPath::SWING},
	{"LOOP", osg::AnimationPath::LOOP},
	{"NO_LOOPING", osg::AnimationPath::NO_LOOPING},
	{0,0}
};


