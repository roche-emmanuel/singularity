#include <plug_common.h>

class luna_wrapper_osgGA_FirstPersonManipulator {
public:
	typedef Luna< osgGA::FirstPersonManipulator > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgGA::FirstPersonManipulator* ptr= dynamic_cast< osgGA::FirstPersonManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::FirstPersonManipulator >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
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

	inline static bool _lg_typecheck_setByMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setByInverseMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInverseMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTransformation_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTransformation_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTransformation_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTransformation_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAcceleration(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAcceleration(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxVelocity(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaxVelocity(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWheelMovement(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWheelMovement(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_home_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_home_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_init(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgGA::FirstPersonManipulator::FirstPersonManipulator(int flags = osgGA::StandardManipulator::DEFAULT_SETTINGS)
	static osgGA::FirstPersonManipulator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::FirstPersonManipulator::FirstPersonManipulator(int flags = osgGA::StandardManipulator::DEFAULT_SETTINGS) function, expected prototype:\nosgGA::FirstPersonManipulator::FirstPersonManipulator(int flags = osgGA::StandardManipulator::DEFAULT_SETTINGS)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>0 ? (int)lua_tointeger(L,1) : osgGA::StandardManipulator::DEFAULT_SETTINGS;

		return new osgGA::FirstPersonManipulator(flags);
	}

	// osgGA::FirstPersonManipulator::FirstPersonManipulator(const osgGA::FirstPersonManipulator & fpm, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY)
	static osgGA::FirstPersonManipulator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::FirstPersonManipulator::FirstPersonManipulator(const osgGA::FirstPersonManipulator & fpm, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgGA::FirstPersonManipulator::FirstPersonManipulator(const osgGA::FirstPersonManipulator & fpm, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgGA::FirstPersonManipulator* fpm_ptr=dynamic_cast< osgGA::FirstPersonManipulator* >(Luna< osg::Referenced >::check(L,1));
		if( !fpm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fpm in osgGA::FirstPersonManipulator::FirstPersonManipulator function");
		}
		const osgGA::FirstPersonManipulator & fpm=*fpm_ptr;
		const osg::CopyOp* copyOp_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyOp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyOp in osgGA::FirstPersonManipulator::FirstPersonManipulator function");
		}
		const osg::CopyOp & copyOp=luatop>1 ? *copyOp_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgGA::FirstPersonManipulator(fpm, copyOp);
	}

	// Overload binder for osgGA::FirstPersonManipulator::FirstPersonManipulator
	static osgGA::FirstPersonManipulator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function FirstPersonManipulator, cannot match any of the overloads for function FirstPersonManipulator:\n  FirstPersonManipulator(int)\n  FirstPersonManipulator(const osgGA::FirstPersonManipulator &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgGA::FirstPersonManipulator::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::FirstPersonManipulator::cloneType() const function, expected prototype:\nosg::Object * osgGA::FirstPersonManipulator::cloneType() const\nClass arguments details:\n");
		}


		osgGA::FirstPersonManipulator* self=dynamic_cast< osgGA::FirstPersonManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::FirstPersonManipulator::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgGA::FirstPersonManipulator::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::FirstPersonManipulator::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgGA::FirstPersonManipulator::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::FirstPersonManipulator::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgGA::FirstPersonManipulator* self=dynamic_cast< osgGA::FirstPersonManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::FirstPersonManipulator::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgGA::FirstPersonManipulator::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::FirstPersonManipulator::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgGA::FirstPersonManipulator::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgGA::FirstPersonManipulator* self=dynamic_cast< osgGA::FirstPersonManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::FirstPersonManipulator::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgGA::FirstPersonManipulator::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::FirstPersonManipulator::libraryName() const function, expected prototype:\nconst char * osgGA::FirstPersonManipulator::libraryName() const\nClass arguments details:\n");
		}


		osgGA::FirstPersonManipulator* self=dynamic_cast< osgGA::FirstPersonManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::FirstPersonManipulator::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgGA::FirstPersonManipulator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::FirstPersonManipulator::className() const function, expected prototype:\nconst char * osgGA::FirstPersonManipulator::className() const\nClass arguments details:\n");
		}


		osgGA::FirstPersonManipulator* self=dynamic_cast< osgGA::FirstPersonManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::FirstPersonManipulator::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::FirstPersonManipulator::setByMatrix(const osg::Matrixd & matrix)
	static int _bind_setByMatrix(lua_State *L) {
		if (!_lg_typecheck_setByMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::FirstPersonManipulator::setByMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::FirstPersonManipulator::setByMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::FirstPersonManipulator::setByMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::FirstPersonManipulator* self=dynamic_cast< osgGA::FirstPersonManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::FirstPersonManipulator::setByMatrix(const osg::Matrixd &)");
		}
		self->setByMatrix(matrix);

		return 0;
	}

	// void osgGA::FirstPersonManipulator::setByInverseMatrix(const osg::Matrixd & matrix)
	static int _bind_setByInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_setByInverseMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::FirstPersonManipulator::setByInverseMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::FirstPersonManipulator::setByInverseMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::FirstPersonManipulator::setByInverseMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::FirstPersonManipulator* self=dynamic_cast< osgGA::FirstPersonManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::FirstPersonManipulator::setByInverseMatrix(const osg::Matrixd &)");
		}
		self->setByInverseMatrix(matrix);

		return 0;
	}

	// osg::Matrixd osgGA::FirstPersonManipulator::getMatrix() const
	static int _bind_getMatrix(lua_State *L) {
		if (!_lg_typecheck_getMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::FirstPersonManipulator::getMatrix() const function, expected prototype:\nosg::Matrixd osgGA::FirstPersonManipulator::getMatrix() const\nClass arguments details:\n");
		}


		osgGA::FirstPersonManipulator* self=dynamic_cast< osgGA::FirstPersonManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::FirstPersonManipulator::getMatrix() const");
		}
		osg::Matrixd stack_lret = self->getMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgGA::FirstPersonManipulator::getInverseMatrix() const
	static int _bind_getInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_getInverseMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::FirstPersonManipulator::getInverseMatrix() const function, expected prototype:\nosg::Matrixd osgGA::FirstPersonManipulator::getInverseMatrix() const\nClass arguments details:\n");
		}


		osgGA::FirstPersonManipulator* self=dynamic_cast< osgGA::FirstPersonManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::FirstPersonManipulator::getInverseMatrix() const");
		}
		osg::Matrixd stack_lret = self->getInverseMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// void osgGA::FirstPersonManipulator::setTransformation(const osg::Vec3d & eye, const osg::Quat & rotation)
	static int _bind_setTransformation_overload_1(lua_State *L) {
		if (!_lg_typecheck_setTransformation_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::FirstPersonManipulator::setTransformation(const osg::Vec3d & eye, const osg::Quat & rotation) function, expected prototype:\nvoid osgGA::FirstPersonManipulator::setTransformation(const osg::Vec3d & eye, const osg::Quat & rotation)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 80263306\n");
		}

		const osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::FirstPersonManipulator::setTransformation function");
		}
		const osg::Vec3d & eye=*eye_ptr;
		const osg::Quat* rotation_ptr=(Luna< osg::Quat >::check(L,3));
		if( !rotation_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rotation in osgGA::FirstPersonManipulator::setTransformation function");
		}
		const osg::Quat & rotation=*rotation_ptr;

		osgGA::FirstPersonManipulator* self=dynamic_cast< osgGA::FirstPersonManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::FirstPersonManipulator::setTransformation(const osg::Vec3d &, const osg::Quat &)");
		}
		self->setTransformation(eye, rotation);

		return 0;
	}

	// void osgGA::FirstPersonManipulator::setTransformation(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up)
	static int _bind_setTransformation_overload_2(lua_State *L) {
		if (!_lg_typecheck_setTransformation_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::FirstPersonManipulator::setTransformation(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up) function, expected prototype:\nvoid osgGA::FirstPersonManipulator::setTransformation(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n");
		}

		const osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::FirstPersonManipulator::setTransformation function");
		}
		const osg::Vec3d & eye=*eye_ptr;
		const osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::FirstPersonManipulator::setTransformation function");
		}
		const osg::Vec3d & center=*center_ptr;
		const osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgGA::FirstPersonManipulator::setTransformation function");
		}
		const osg::Vec3d & up=*up_ptr;

		osgGA::FirstPersonManipulator* self=dynamic_cast< osgGA::FirstPersonManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::FirstPersonManipulator::setTransformation(const osg::Vec3d &, const osg::Vec3d &, const osg::Vec3d &)");
		}
		self->setTransformation(eye, center, up);

		return 0;
	}

	// Overload binder for osgGA::FirstPersonManipulator::setTransformation
	static int _bind_setTransformation(lua_State *L) {
		if (_lg_typecheck_setTransformation_overload_1(L)) return _bind_setTransformation_overload_1(L);
		if (_lg_typecheck_setTransformation_overload_2(L)) return _bind_setTransformation_overload_2(L);

		luaL_error(L, "error in function setTransformation, cannot match any of the overloads for function setTransformation:\n  setTransformation(const osg::Vec3d &, const osg::Quat &)\n  setTransformation(const osg::Vec3d &, const osg::Vec3d &, const osg::Vec3d &)\n");
		return 0;
	}

	// void osgGA::FirstPersonManipulator::getTransformation(osg::Vec3d & eye, osg::Quat & rotation) const
	static int _bind_getTransformation_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTransformation_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::FirstPersonManipulator::getTransformation(osg::Vec3d & eye, osg::Quat & rotation) const function, expected prototype:\nvoid osgGA::FirstPersonManipulator::getTransformation(osg::Vec3d & eye, osg::Quat & rotation) const\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 80263306\n");
		}

		osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::FirstPersonManipulator::getTransformation function");
		}
		osg::Vec3d & eye=*eye_ptr;
		osg::Quat* rotation_ptr=(Luna< osg::Quat >::check(L,3));
		if( !rotation_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rotation in osgGA::FirstPersonManipulator::getTransformation function");
		}
		osg::Quat & rotation=*rotation_ptr;

		osgGA::FirstPersonManipulator* self=dynamic_cast< osgGA::FirstPersonManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::FirstPersonManipulator::getTransformation(osg::Vec3d &, osg::Quat &) const");
		}
		self->getTransformation(eye, rotation);

		return 0;
	}

	// void osgGA::FirstPersonManipulator::getTransformation(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const
	static int _bind_getTransformation_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTransformation_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::FirstPersonManipulator::getTransformation(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const function, expected prototype:\nvoid osgGA::FirstPersonManipulator::getTransformation(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n");
		}

		osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::FirstPersonManipulator::getTransformation function");
		}
		osg::Vec3d & eye=*eye_ptr;
		osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::FirstPersonManipulator::getTransformation function");
		}
		osg::Vec3d & center=*center_ptr;
		osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgGA::FirstPersonManipulator::getTransformation function");
		}
		osg::Vec3d & up=*up_ptr;

		osgGA::FirstPersonManipulator* self=dynamic_cast< osgGA::FirstPersonManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::FirstPersonManipulator::getTransformation(osg::Vec3d &, osg::Vec3d &, osg::Vec3d &) const");
		}
		self->getTransformation(eye, center, up);

		return 0;
	}

	// Overload binder for osgGA::FirstPersonManipulator::getTransformation
	static int _bind_getTransformation(lua_State *L) {
		if (_lg_typecheck_getTransformation_overload_1(L)) return _bind_getTransformation_overload_1(L);
		if (_lg_typecheck_getTransformation_overload_2(L)) return _bind_getTransformation_overload_2(L);

		luaL_error(L, "error in function getTransformation, cannot match any of the overloads for function getTransformation:\n  getTransformation(osg::Vec3d &, osg::Quat &)\n  getTransformation(osg::Vec3d &, osg::Vec3d &, osg::Vec3d &)\n");
		return 0;
	}

	// void osgGA::FirstPersonManipulator::setVelocity(const double & velocity)
	static int _bind_setVelocity(lua_State *L) {
		if (!_lg_typecheck_setVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::FirstPersonManipulator::setVelocity(const double & velocity) function, expected prototype:\nvoid osgGA::FirstPersonManipulator::setVelocity(const double & velocity)\nClass arguments details:\n");
		}

		double velocity=(double)lua_tonumber(L,2);

		osgGA::FirstPersonManipulator* self=dynamic_cast< osgGA::FirstPersonManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::FirstPersonManipulator::setVelocity(const double &)");
		}
		self->setVelocity(velocity);

		return 0;
	}

	// double osgGA::FirstPersonManipulator::getVelocity() const
	static int _bind_getVelocity(lua_State *L) {
		if (!_lg_typecheck_getVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgGA::FirstPersonManipulator::getVelocity() const function, expected prototype:\ndouble osgGA::FirstPersonManipulator::getVelocity() const\nClass arguments details:\n");
		}


		osgGA::FirstPersonManipulator* self=dynamic_cast< osgGA::FirstPersonManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgGA::FirstPersonManipulator::getVelocity() const");
		}
		double lret = self->getVelocity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::FirstPersonManipulator::setAcceleration(const double & acceleration, bool relativeToModelSize = false)
	static int _bind_setAcceleration(lua_State *L) {
		if (!_lg_typecheck_setAcceleration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::FirstPersonManipulator::setAcceleration(const double & acceleration, bool relativeToModelSize = false) function, expected prototype:\nvoid osgGA::FirstPersonManipulator::setAcceleration(const double & acceleration, bool relativeToModelSize = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double acceleration=(double)lua_tonumber(L,2);
		bool relativeToModelSize=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		osgGA::FirstPersonManipulator* self=dynamic_cast< osgGA::FirstPersonManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::FirstPersonManipulator::setAcceleration(const double &, bool)");
		}
		self->setAcceleration(acceleration, relativeToModelSize);

		return 0;
	}

	// double osgGA::FirstPersonManipulator::getAcceleration(bool * relativeToModelSize = ((void *) 0)) const
	static int _bind_getAcceleration(lua_State *L) {
		if (!_lg_typecheck_getAcceleration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgGA::FirstPersonManipulator::getAcceleration(bool * relativeToModelSize = ((void *) 0)) const function, expected prototype:\ndouble osgGA::FirstPersonManipulator::getAcceleration(bool * relativeToModelSize = ((void *) 0)) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool relativeToModelSize=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : ((void *) 0);

		osgGA::FirstPersonManipulator* self=dynamic_cast< osgGA::FirstPersonManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgGA::FirstPersonManipulator::getAcceleration(bool *) const");
		}
		double lret = self->getAcceleration(&relativeToModelSize);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::FirstPersonManipulator::setMaxVelocity(const double & maxVelocity, bool relativeToModelSize = false)
	static int _bind_setMaxVelocity(lua_State *L) {
		if (!_lg_typecheck_setMaxVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::FirstPersonManipulator::setMaxVelocity(const double & maxVelocity, bool relativeToModelSize = false) function, expected prototype:\nvoid osgGA::FirstPersonManipulator::setMaxVelocity(const double & maxVelocity, bool relativeToModelSize = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double maxVelocity=(double)lua_tonumber(L,2);
		bool relativeToModelSize=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		osgGA::FirstPersonManipulator* self=dynamic_cast< osgGA::FirstPersonManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::FirstPersonManipulator::setMaxVelocity(const double &, bool)");
		}
		self->setMaxVelocity(maxVelocity, relativeToModelSize);

		return 0;
	}

	// double osgGA::FirstPersonManipulator::getMaxVelocity(bool * relativeToModelSize = ((void *) 0)) const
	static int _bind_getMaxVelocity(lua_State *L) {
		if (!_lg_typecheck_getMaxVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgGA::FirstPersonManipulator::getMaxVelocity(bool * relativeToModelSize = ((void *) 0)) const function, expected prototype:\ndouble osgGA::FirstPersonManipulator::getMaxVelocity(bool * relativeToModelSize = ((void *) 0)) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool relativeToModelSize=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : ((void *) 0);

		osgGA::FirstPersonManipulator* self=dynamic_cast< osgGA::FirstPersonManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgGA::FirstPersonManipulator::getMaxVelocity(bool *) const");
		}
		double lret = self->getMaxVelocity(&relativeToModelSize);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::FirstPersonManipulator::setWheelMovement(const double & wheelMovement, bool relativeToModelSize = false)
	static int _bind_setWheelMovement(lua_State *L) {
		if (!_lg_typecheck_setWheelMovement(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::FirstPersonManipulator::setWheelMovement(const double & wheelMovement, bool relativeToModelSize = false) function, expected prototype:\nvoid osgGA::FirstPersonManipulator::setWheelMovement(const double & wheelMovement, bool relativeToModelSize = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double wheelMovement=(double)lua_tonumber(L,2);
		bool relativeToModelSize=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		osgGA::FirstPersonManipulator* self=dynamic_cast< osgGA::FirstPersonManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::FirstPersonManipulator::setWheelMovement(const double &, bool)");
		}
		self->setWheelMovement(wheelMovement, relativeToModelSize);

		return 0;
	}

	// double osgGA::FirstPersonManipulator::getWheelMovement(bool * relativeToModelSize = ((void *) 0)) const
	static int _bind_getWheelMovement(lua_State *L) {
		if (!_lg_typecheck_getWheelMovement(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgGA::FirstPersonManipulator::getWheelMovement(bool * relativeToModelSize = ((void *) 0)) const function, expected prototype:\ndouble osgGA::FirstPersonManipulator::getWheelMovement(bool * relativeToModelSize = ((void *) 0)) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool relativeToModelSize=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : ((void *) 0);

		osgGA::FirstPersonManipulator* self=dynamic_cast< osgGA::FirstPersonManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgGA::FirstPersonManipulator::getWheelMovement(bool *) const");
		}
		double lret = self->getWheelMovement(&relativeToModelSize);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::FirstPersonManipulator::home(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )
	static int _bind_home_overload_1(lua_State *L) {
		if (!_lg_typecheck_home_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::FirstPersonManipulator::home(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & ) function, expected prototype:\nvoid osgGA::FirstPersonManipulator::home(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::FirstPersonManipulator::home function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::FirstPersonManipulator::home function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::FirstPersonManipulator* self=dynamic_cast< osgGA::FirstPersonManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::FirstPersonManipulator::home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		self->home(_arg1, _arg2);

		return 0;
	}

	// void osgGA::FirstPersonManipulator::home(double )
	static int _bind_home_overload_2(lua_State *L) {
		if (!_lg_typecheck_home_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::FirstPersonManipulator::home(double ) function, expected prototype:\nvoid osgGA::FirstPersonManipulator::home(double )\nClass arguments details:\n");
		}

		double _arg1=(double)lua_tonumber(L,2);

		osgGA::FirstPersonManipulator* self=dynamic_cast< osgGA::FirstPersonManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::FirstPersonManipulator::home(double)");
		}
		self->home(_arg1);

		return 0;
	}

	// Overload binder for osgGA::FirstPersonManipulator::home
	static int _bind_home(lua_State *L) {
		if (_lg_typecheck_home_overload_1(L)) return _bind_home_overload_1(L);
		if (_lg_typecheck_home_overload_2(L)) return _bind_home_overload_2(L);

		luaL_error(L, "error in function home, cannot match any of the overloads for function home:\n  home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)\n  home(double)\n");
		return 0;
	}

	// void osgGA::FirstPersonManipulator::init(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )
	static int _bind_init(lua_State *L) {
		if (!_lg_typecheck_init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::FirstPersonManipulator::init(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & ) function, expected prototype:\nvoid osgGA::FirstPersonManipulator::init(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::FirstPersonManipulator::init function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::FirstPersonManipulator::init function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::FirstPersonManipulator* self=dynamic_cast< osgGA::FirstPersonManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::FirstPersonManipulator::init(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		self->init(_arg1, _arg2);

		return 0;
	}


	// Operator binds:

};

osgGA::FirstPersonManipulator* LunaTraits< osgGA::FirstPersonManipulator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgGA_FirstPersonManipulator::_bind_ctor(L);
}

void LunaTraits< osgGA::FirstPersonManipulator >::_bind_dtor(osgGA::FirstPersonManipulator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::FirstPersonManipulator >::className[] = "FirstPersonManipulator";
const char LunaTraits< osgGA::FirstPersonManipulator >::fullName[] = "osgGA::FirstPersonManipulator";
const char LunaTraits< osgGA::FirstPersonManipulator >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::FirstPersonManipulator >::parents[] = {"osgGA.StandardManipulator", 0};
const int LunaTraits< osgGA::FirstPersonManipulator >::hash = 79841328;
const int LunaTraits< osgGA::FirstPersonManipulator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::FirstPersonManipulator >::methods[] = {
	{"cloneType", &luna_wrapper_osgGA_FirstPersonManipulator::_bind_cloneType},
	{"clone", &luna_wrapper_osgGA_FirstPersonManipulator::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgGA_FirstPersonManipulator::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgGA_FirstPersonManipulator::_bind_libraryName},
	{"className", &luna_wrapper_osgGA_FirstPersonManipulator::_bind_className},
	{"setByMatrix", &luna_wrapper_osgGA_FirstPersonManipulator::_bind_setByMatrix},
	{"setByInverseMatrix", &luna_wrapper_osgGA_FirstPersonManipulator::_bind_setByInverseMatrix},
	{"getMatrix", &luna_wrapper_osgGA_FirstPersonManipulator::_bind_getMatrix},
	{"getInverseMatrix", &luna_wrapper_osgGA_FirstPersonManipulator::_bind_getInverseMatrix},
	{"setTransformation", &luna_wrapper_osgGA_FirstPersonManipulator::_bind_setTransformation},
	{"getTransformation", &luna_wrapper_osgGA_FirstPersonManipulator::_bind_getTransformation},
	{"setVelocity", &luna_wrapper_osgGA_FirstPersonManipulator::_bind_setVelocity},
	{"getVelocity", &luna_wrapper_osgGA_FirstPersonManipulator::_bind_getVelocity},
	{"setAcceleration", &luna_wrapper_osgGA_FirstPersonManipulator::_bind_setAcceleration},
	{"getAcceleration", &luna_wrapper_osgGA_FirstPersonManipulator::_bind_getAcceleration},
	{"setMaxVelocity", &luna_wrapper_osgGA_FirstPersonManipulator::_bind_setMaxVelocity},
	{"getMaxVelocity", &luna_wrapper_osgGA_FirstPersonManipulator::_bind_getMaxVelocity},
	{"setWheelMovement", &luna_wrapper_osgGA_FirstPersonManipulator::_bind_setWheelMovement},
	{"getWheelMovement", &luna_wrapper_osgGA_FirstPersonManipulator::_bind_getWheelMovement},
	{"home", &luna_wrapper_osgGA_FirstPersonManipulator::_bind_home},
	{"init", &luna_wrapper_osgGA_FirstPersonManipulator::_bind_init},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::FirstPersonManipulator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_FirstPersonManipulator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::FirstPersonManipulator >::enumValues[] = {
	{0,0}
};


