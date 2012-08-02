#include <plug_common.h>

class luna_wrapper_osgGA_AnimationPathManipulator {
public:
	typedef Luna< osgGA::AnimationPathManipulator > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgGA::AnimationPathManipulator* ptr= dynamic_cast< osgGA::AnimationPathManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::AnimationPathManipulator >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTimeScale(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTimeScale(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTimeOffset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTimeOffset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAnimationCompletedCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAnimationCompletedCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAnimationCompletedCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPrintOutTimingInfo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPrintOutTimingInfo(lua_State *L) {
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

	inline static bool _lg_typecheck_setAnimationPath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAnimationPath_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAnimationPath_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_valid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_init(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
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

	inline static bool _lg_typecheck_handle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgGA::AnimationPathManipulator::AnimationPathManipulator(osg::AnimationPath * animationPath = 0)
	static osgGA::AnimationPathManipulator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::AnimationPathManipulator::AnimationPathManipulator(osg::AnimationPath * animationPath = 0) function, expected prototype:\nosgGA::AnimationPathManipulator::AnimationPathManipulator(osg::AnimationPath * animationPath = 0)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::AnimationPath* animationPath=luatop>0 ? dynamic_cast< osg::AnimationPath* >(Luna< osg::Referenced >::check(L,1)) : (osg::AnimationPath*)0;

		return new osgGA::AnimationPathManipulator(animationPath);
	}

	// osgGA::AnimationPathManipulator::AnimationPathManipulator(const std::string & filename)
	static osgGA::AnimationPathManipulator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::AnimationPathManipulator::AnimationPathManipulator(const std::string & filename) function, expected prototype:\nosgGA::AnimationPathManipulator::AnimationPathManipulator(const std::string & filename)\nClass arguments details:\n");
		}

		std::string filename(lua_tostring(L,1),lua_objlen(L,1));

		return new osgGA::AnimationPathManipulator(filename);
	}

	// Overload binder for osgGA::AnimationPathManipulator::AnimationPathManipulator
	static osgGA::AnimationPathManipulator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function AnimationPathManipulator, cannot match any of the overloads for function AnimationPathManipulator:\n  AnimationPathManipulator(osg::AnimationPath *)\n  AnimationPathManipulator(const std::string &)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgGA::AnimationPathManipulator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::AnimationPathManipulator::className() const function, expected prototype:\nconst char * osgGA::AnimationPathManipulator::className() const\nClass arguments details:\n");
		}


		osgGA::AnimationPathManipulator* self=dynamic_cast< osgGA::AnimationPathManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::AnimationPathManipulator::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::AnimationPathManipulator::setTimeScale(double s)
	static int _bind_setTimeScale(lua_State *L) {
		if (!_lg_typecheck_setTimeScale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::setTimeScale(double s) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::setTimeScale(double s)\nClass arguments details:\n");
		}

		double s=(double)lua_tonumber(L,2);

		osgGA::AnimationPathManipulator* self=dynamic_cast< osgGA::AnimationPathManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::setTimeScale(double)");
		}
		self->setTimeScale(s);

		return 0;
	}

	// double osgGA::AnimationPathManipulator::getTimeScale() const
	static int _bind_getTimeScale(lua_State *L) {
		if (!_lg_typecheck_getTimeScale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgGA::AnimationPathManipulator::getTimeScale() const function, expected prototype:\ndouble osgGA::AnimationPathManipulator::getTimeScale() const\nClass arguments details:\n");
		}


		osgGA::AnimationPathManipulator* self=dynamic_cast< osgGA::AnimationPathManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgGA::AnimationPathManipulator::getTimeScale() const");
		}
		double lret = self->getTimeScale();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::AnimationPathManipulator::setTimeOffset(double o)
	static int _bind_setTimeOffset(lua_State *L) {
		if (!_lg_typecheck_setTimeOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::setTimeOffset(double o) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::setTimeOffset(double o)\nClass arguments details:\n");
		}

		double o=(double)lua_tonumber(L,2);

		osgGA::AnimationPathManipulator* self=dynamic_cast< osgGA::AnimationPathManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::setTimeOffset(double)");
		}
		self->setTimeOffset(o);

		return 0;
	}

	// double osgGA::AnimationPathManipulator::getTimeOffset() const
	static int _bind_getTimeOffset(lua_State *L) {
		if (!_lg_typecheck_getTimeOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgGA::AnimationPathManipulator::getTimeOffset() const function, expected prototype:\ndouble osgGA::AnimationPathManipulator::getTimeOffset() const\nClass arguments details:\n");
		}


		osgGA::AnimationPathManipulator* self=dynamic_cast< osgGA::AnimationPathManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgGA::AnimationPathManipulator::getTimeOffset() const");
		}
		double lret = self->getTimeOffset();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::AnimationPathManipulator::setAnimationCompletedCallback(osgGA::AnimationPathManipulator::AnimationCompletedCallback * acc)
	static int _bind_setAnimationCompletedCallback(lua_State *L) {
		if (!_lg_typecheck_setAnimationCompletedCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::setAnimationCompletedCallback(osgGA::AnimationPathManipulator::AnimationCompletedCallback * acc) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::setAnimationCompletedCallback(osgGA::AnimationPathManipulator::AnimationCompletedCallback * acc)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgGA::AnimationPathManipulator::AnimationCompletedCallback* acc=dynamic_cast< osgGA::AnimationPathManipulator::AnimationCompletedCallback* >(Luna< osg::Referenced >::check(L,2));

		osgGA::AnimationPathManipulator* self=dynamic_cast< osgGA::AnimationPathManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::setAnimationCompletedCallback(osgGA::AnimationPathManipulator::AnimationCompletedCallback *)");
		}
		self->setAnimationCompletedCallback(acc);

		return 0;
	}

	// osgGA::AnimationPathManipulator::AnimationCompletedCallback * osgGA::AnimationPathManipulator::getAnimationCompletedCallback()
	static int _bind_getAnimationCompletedCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getAnimationCompletedCallback_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::AnimationPathManipulator::AnimationCompletedCallback * osgGA::AnimationPathManipulator::getAnimationCompletedCallback() function, expected prototype:\nosgGA::AnimationPathManipulator::AnimationCompletedCallback * osgGA::AnimationPathManipulator::getAnimationCompletedCallback()\nClass arguments details:\n");
		}


		osgGA::AnimationPathManipulator* self=dynamic_cast< osgGA::AnimationPathManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgGA::AnimationPathManipulator::AnimationCompletedCallback * osgGA::AnimationPathManipulator::getAnimationCompletedCallback()");
		}
		osgGA::AnimationPathManipulator::AnimationCompletedCallback * lret = self->getAnimationCompletedCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::AnimationPathManipulator::AnimationCompletedCallback >::push(L,lret,false);

		return 1;
	}

	// const osgGA::AnimationPathManipulator::AnimationCompletedCallback * osgGA::AnimationPathManipulator::getAnimationCompletedCallback() const
	static int _bind_getAnimationCompletedCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getAnimationCompletedCallback_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgGA::AnimationPathManipulator::AnimationCompletedCallback * osgGA::AnimationPathManipulator::getAnimationCompletedCallback() const function, expected prototype:\nconst osgGA::AnimationPathManipulator::AnimationCompletedCallback * osgGA::AnimationPathManipulator::getAnimationCompletedCallback() const\nClass arguments details:\n");
		}


		osgGA::AnimationPathManipulator* self=dynamic_cast< osgGA::AnimationPathManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgGA::AnimationPathManipulator::AnimationCompletedCallback * osgGA::AnimationPathManipulator::getAnimationCompletedCallback() const");
		}
		const osgGA::AnimationPathManipulator::AnimationCompletedCallback * lret = self->getAnimationCompletedCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::AnimationPathManipulator::AnimationCompletedCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::AnimationPathManipulator::getAnimationCompletedCallback
	static int _bind_getAnimationCompletedCallback(lua_State *L) {
		if (_lg_typecheck_getAnimationCompletedCallback_overload_1(L)) return _bind_getAnimationCompletedCallback_overload_1(L);
		if (_lg_typecheck_getAnimationCompletedCallback_overload_2(L)) return _bind_getAnimationCompletedCallback_overload_2(L);

		luaL_error(L, "error in function getAnimationCompletedCallback, cannot match any of the overloads for function getAnimationCompletedCallback:\n  getAnimationCompletedCallback()\n  getAnimationCompletedCallback()\n");
		return 0;
	}

	// void osgGA::AnimationPathManipulator::setPrintOutTimingInfo(bool printOutTimingInfo)
	static int _bind_setPrintOutTimingInfo(lua_State *L) {
		if (!_lg_typecheck_setPrintOutTimingInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::setPrintOutTimingInfo(bool printOutTimingInfo) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::setPrintOutTimingInfo(bool printOutTimingInfo)\nClass arguments details:\n");
		}

		bool printOutTimingInfo=(bool)(lua_toboolean(L,2)==1);

		osgGA::AnimationPathManipulator* self=dynamic_cast< osgGA::AnimationPathManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::setPrintOutTimingInfo(bool)");
		}
		self->setPrintOutTimingInfo(printOutTimingInfo);

		return 0;
	}

	// bool osgGA::AnimationPathManipulator::getPrintOutTimingInfo() const
	static int _bind_getPrintOutTimingInfo(lua_State *L) {
		if (!_lg_typecheck_getPrintOutTimingInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::AnimationPathManipulator::getPrintOutTimingInfo() const function, expected prototype:\nbool osgGA::AnimationPathManipulator::getPrintOutTimingInfo() const\nClass arguments details:\n");
		}


		osgGA::AnimationPathManipulator* self=dynamic_cast< osgGA::AnimationPathManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::AnimationPathManipulator::getPrintOutTimingInfo() const");
		}
		bool lret = self->getPrintOutTimingInfo();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::AnimationPathManipulator::setByMatrix(const osg::Matrixd & matrix)
	static int _bind_setByMatrix(lua_State *L) {
		if (!_lg_typecheck_setByMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::setByMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::setByMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::AnimationPathManipulator::setByMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::AnimationPathManipulator* self=dynamic_cast< osgGA::AnimationPathManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::setByMatrix(const osg::Matrixd &)");
		}
		self->setByMatrix(matrix);

		return 0;
	}

	// void osgGA::AnimationPathManipulator::setByInverseMatrix(const osg::Matrixd & matrix)
	static int _bind_setByInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_setByInverseMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::setByInverseMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::setByInverseMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::AnimationPathManipulator::setByInverseMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::AnimationPathManipulator* self=dynamic_cast< osgGA::AnimationPathManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::setByInverseMatrix(const osg::Matrixd &)");
		}
		self->setByInverseMatrix(matrix);

		return 0;
	}

	// osg::Matrixd osgGA::AnimationPathManipulator::getMatrix() const
	static int _bind_getMatrix(lua_State *L) {
		if (!_lg_typecheck_getMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::AnimationPathManipulator::getMatrix() const function, expected prototype:\nosg::Matrixd osgGA::AnimationPathManipulator::getMatrix() const\nClass arguments details:\n");
		}


		osgGA::AnimationPathManipulator* self=dynamic_cast< osgGA::AnimationPathManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::AnimationPathManipulator::getMatrix() const");
		}
		osg::Matrixd stack_lret = self->getMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgGA::AnimationPathManipulator::getInverseMatrix() const
	static int _bind_getInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_getInverseMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::AnimationPathManipulator::getInverseMatrix() const function, expected prototype:\nosg::Matrixd osgGA::AnimationPathManipulator::getInverseMatrix() const\nClass arguments details:\n");
		}


		osgGA::AnimationPathManipulator* self=dynamic_cast< osgGA::AnimationPathManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::AnimationPathManipulator::getInverseMatrix() const");
		}
		osg::Matrixd stack_lret = self->getInverseMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// void osgGA::AnimationPathManipulator::setAnimationPath(osg::AnimationPath * animationPath)
	static int _bind_setAnimationPath(lua_State *L) {
		if (!_lg_typecheck_setAnimationPath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::setAnimationPath(osg::AnimationPath * animationPath) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::setAnimationPath(osg::AnimationPath * animationPath)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::AnimationPath* animationPath=dynamic_cast< osg::AnimationPath* >(Luna< osg::Referenced >::check(L,2));

		osgGA::AnimationPathManipulator* self=dynamic_cast< osgGA::AnimationPathManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::setAnimationPath(osg::AnimationPath *)");
		}
		self->setAnimationPath(animationPath);

		return 0;
	}

	// osg::AnimationPath * osgGA::AnimationPathManipulator::getAnimationPath()
	static int _bind_getAnimationPath_overload_1(lua_State *L) {
		if (!_lg_typecheck_getAnimationPath_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::AnimationPath * osgGA::AnimationPathManipulator::getAnimationPath() function, expected prototype:\nosg::AnimationPath * osgGA::AnimationPathManipulator::getAnimationPath()\nClass arguments details:\n");
		}


		osgGA::AnimationPathManipulator* self=dynamic_cast< osgGA::AnimationPathManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::AnimationPath * osgGA::AnimationPathManipulator::getAnimationPath()");
		}
		osg::AnimationPath * lret = self->getAnimationPath();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::AnimationPath >::push(L,lret,false);

		return 1;
	}

	// const osg::AnimationPath * osgGA::AnimationPathManipulator::getAnimationPath() const
	static int _bind_getAnimationPath_overload_2(lua_State *L) {
		if (!_lg_typecheck_getAnimationPath_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::AnimationPath * osgGA::AnimationPathManipulator::getAnimationPath() const function, expected prototype:\nconst osg::AnimationPath * osgGA::AnimationPathManipulator::getAnimationPath() const\nClass arguments details:\n");
		}


		osgGA::AnimationPathManipulator* self=dynamic_cast< osgGA::AnimationPathManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::AnimationPath * osgGA::AnimationPathManipulator::getAnimationPath() const");
		}
		const osg::AnimationPath * lret = self->getAnimationPath();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::AnimationPath >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::AnimationPathManipulator::getAnimationPath
	static int _bind_getAnimationPath(lua_State *L) {
		if (_lg_typecheck_getAnimationPath_overload_1(L)) return _bind_getAnimationPath_overload_1(L);
		if (_lg_typecheck_getAnimationPath_overload_2(L)) return _bind_getAnimationPath_overload_2(L);

		luaL_error(L, "error in function getAnimationPath, cannot match any of the overloads for function getAnimationPath:\n  getAnimationPath()\n  getAnimationPath()\n");
		return 0;
	}

	// bool osgGA::AnimationPathManipulator::valid() const
	static int _bind_valid(lua_State *L) {
		if (!_lg_typecheck_valid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::AnimationPathManipulator::valid() const function, expected prototype:\nbool osgGA::AnimationPathManipulator::valid() const\nClass arguments details:\n");
		}


		osgGA::AnimationPathManipulator* self=dynamic_cast< osgGA::AnimationPathManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::AnimationPathManipulator::valid() const");
		}
		bool lret = self->valid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::AnimationPathManipulator::init(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )
	static int _bind_init(lua_State *L) {
		if (!_lg_typecheck_init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::init(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & ) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::init(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::AnimationPathManipulator::init function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::AnimationPathManipulator::init function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::AnimationPathManipulator* self=dynamic_cast< osgGA::AnimationPathManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::init(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		self->init(_arg1, _arg2);

		return 0;
	}

	// void osgGA::AnimationPathManipulator::home(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )
	static int _bind_home_overload_1(lua_State *L) {
		if (!_lg_typecheck_home_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::home(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & ) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::home(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::AnimationPathManipulator::home function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::AnimationPathManipulator::home function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::AnimationPathManipulator* self=dynamic_cast< osgGA::AnimationPathManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		self->home(_arg1, _arg2);

		return 0;
	}

	// void osgGA::AnimationPathManipulator::home(double )
	static int _bind_home_overload_2(lua_State *L) {
		if (!_lg_typecheck_home_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::home(double ) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::home(double )\nClass arguments details:\n");
		}

		double _arg1=(double)lua_tonumber(L,2);

		osgGA::AnimationPathManipulator* self=dynamic_cast< osgGA::AnimationPathManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::home(double)");
		}
		self->home(_arg1);

		return 0;
	}

	// Overload binder for osgGA::AnimationPathManipulator::home
	static int _bind_home(lua_State *L) {
		if (_lg_typecheck_home_overload_1(L)) return _bind_home_overload_1(L);
		if (_lg_typecheck_home_overload_2(L)) return _bind_home_overload_2(L);

		luaL_error(L, "error in function home, cannot match any of the overloads for function home:\n  home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)\n  home(double)\n");
		return 0;
	}

	// bool osgGA::AnimationPathManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::AnimationPathManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) function, expected prototype:\nbool osgGA::AnimationPathManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* ea_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::AnimationPathManipulator::handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* us_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !us_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg us in osgGA::AnimationPathManipulator::handle function");
		}
		osgGA::GUIActionAdapter & us=*us_ptr;

		osgGA::AnimationPathManipulator* self=dynamic_cast< osgGA::AnimationPathManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::AnimationPathManipulator::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		bool lret = self->handle(ea, us);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::AnimationPathManipulator::getUsage(osg::ApplicationUsage & usage) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgGA::AnimationPathManipulator::getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ApplicationUsage* usage_ptr=dynamic_cast< osg::ApplicationUsage* >(Luna< osg::Referenced >::check(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgGA::AnimationPathManipulator::getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgGA::AnimationPathManipulator* self=dynamic_cast< osgGA::AnimationPathManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::getUsage(osg::ApplicationUsage &) const");
		}
		self->getUsage(usage);

		return 0;
	}


	// Operator binds:

};

osgGA::AnimationPathManipulator* LunaTraits< osgGA::AnimationPathManipulator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgGA_AnimationPathManipulator::_bind_ctor(L);
}

void LunaTraits< osgGA::AnimationPathManipulator >::_bind_dtor(osgGA::AnimationPathManipulator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::AnimationPathManipulator >::className[] = "AnimationPathManipulator";
const char LunaTraits< osgGA::AnimationPathManipulator >::fullName[] = "osgGA::AnimationPathManipulator";
const char LunaTraits< osgGA::AnimationPathManipulator >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::AnimationPathManipulator >::parents[] = {"osgGA.CameraManipulator", 0};
const int LunaTraits< osgGA::AnimationPathManipulator >::hash = 5735478;
const int LunaTraits< osgGA::AnimationPathManipulator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::AnimationPathManipulator >::methods[] = {
	{"className", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_className},
	{"setTimeScale", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_setTimeScale},
	{"getTimeScale", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_getTimeScale},
	{"setTimeOffset", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_setTimeOffset},
	{"getTimeOffset", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_getTimeOffset},
	{"setAnimationCompletedCallback", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_setAnimationCompletedCallback},
	{"getAnimationCompletedCallback", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_getAnimationCompletedCallback},
	{"setPrintOutTimingInfo", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_setPrintOutTimingInfo},
	{"getPrintOutTimingInfo", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_getPrintOutTimingInfo},
	{"setByMatrix", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_setByMatrix},
	{"setByInverseMatrix", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_setByInverseMatrix},
	{"getMatrix", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_getMatrix},
	{"getInverseMatrix", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_getInverseMatrix},
	{"setAnimationPath", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_setAnimationPath},
	{"getAnimationPath", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_getAnimationPath},
	{"valid", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_valid},
	{"init", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_init},
	{"home", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_home},
	{"handle", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_handle},
	{"getUsage", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_getUsage},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::AnimationPathManipulator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_AnimationPathManipulator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::AnimationPathManipulator >::enumValues[] = {
	{0,0}
};


