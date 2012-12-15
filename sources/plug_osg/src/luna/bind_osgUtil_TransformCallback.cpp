#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_TransformCallback.h>

class luna_wrapper_osgUtil_TransformCallback {
public:
	typedef Luna< osgUtil::TransformCallback > luna_t;

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
		//osgUtil::TransformCallback* ptr= dynamic_cast< osgUtil::TransformCallback* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::TransformCallback* ptr= luna_caster< osg::Referenced, osgUtil::TransformCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::TransformCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
		if( (!dynamic_cast< osg::Vec3f* >(Luna< osg::Vec3f >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!dynamic_cast< osg::Vec3f* >(Luna< osg::Vec3f >::check(L,2))) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!dynamic_cast< osg::Vec3f* >(Luna< osg::Vec3f >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( (!dynamic_cast< osg::Vec3f* >(Luna< osg::Vec3f >::check(L,3))) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setPause(lua_State *L) {
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


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}


	// Constructor binds:
	// osgUtil::TransformCallback::TransformCallback(const osg::Vec3f & pivot, const osg::Vec3f & axis, float angularVelocity)
	static osgUtil::TransformCallback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::TransformCallback::TransformCallback(const osg::Vec3f & pivot, const osg::Vec3f & axis, float angularVelocity) function, expected prototype:\nosgUtil::TransformCallback::TransformCallback(const osg::Vec3f & pivot, const osg::Vec3f & axis, float angularVelocity)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\n");
		}

		const osg::Vec3f* pivot_ptr=(Luna< osg::Vec3f >::check(L,1));
		if( !pivot_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pivot in osgUtil::TransformCallback::TransformCallback function");
		}
		const osg::Vec3f & pivot=*pivot_ptr;
		const osg::Vec3f* axis_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in osgUtil::TransformCallback::TransformCallback function");
		}
		const osg::Vec3f & axis=*axis_ptr;
		float angularVelocity=(float)lua_tonumber(L,3);

		return new osgUtil::TransformCallback(pivot, axis, angularVelocity);
	}

	// osgUtil::TransformCallback::TransformCallback(lua_Table * data, const osg::Vec3f & pivot, const osg::Vec3f & axis, float angularVelocity)
	static osgUtil::TransformCallback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::TransformCallback::TransformCallback(lua_Table * data, const osg::Vec3f & pivot, const osg::Vec3f & axis, float angularVelocity) function, expected prototype:\nosgUtil::TransformCallback::TransformCallback(lua_Table * data, const osg::Vec3f & pivot, const osg::Vec3f & axis, float angularVelocity)\nClass arguments details:\narg 2 ID = 92303204\narg 3 ID = 92303204\n");
		}

		const osg::Vec3f* pivot_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !pivot_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pivot in osgUtil::TransformCallback::TransformCallback function");
		}
		const osg::Vec3f & pivot=*pivot_ptr;
		const osg::Vec3f* axis_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in osgUtil::TransformCallback::TransformCallback function");
		}
		const osg::Vec3f & axis=*axis_ptr;
		float angularVelocity=(float)lua_tonumber(L,4);

		return new wrapper_osgUtil_TransformCallback(L,NULL, pivot, axis, angularVelocity);
	}

	// Overload binder for osgUtil::TransformCallback::TransformCallback
	static osgUtil::TransformCallback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TransformCallback, cannot match any of the overloads for function TransformCallback:\n  TransformCallback(const osg::Vec3f &, const osg::Vec3f &, float)\n  TransformCallback(lua_Table *, const osg::Vec3f &, const osg::Vec3f &, float)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::TransformCallback::setPause(bool pause)
	static int _bind_setPause(lua_State *L) {
		if (!_lg_typecheck_setPause(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::TransformCallback::setPause(bool pause) function, expected prototype:\nvoid osgUtil::TransformCallback::setPause(bool pause)\nClass arguments details:\n");
		}

		bool pause=(bool)(lua_toboolean(L,2)==1);

		osgUtil::TransformCallback* self=Luna< osg::Referenced >::checkSubType< osgUtil::TransformCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::TransformCallback::setPause(bool)");
		}
		self->setPause(pause);

		return 0;
	}

	// void osgUtil::TransformCallback::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::TransformCallback::base_setName(const std::string & name) function, expected prototype:\nvoid osgUtil::TransformCallback::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgUtil::TransformCallback* self=Luna< osg::Referenced >::checkSubType< osgUtil::TransformCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::TransformCallback::base_setName(const std::string &)");
		}
		self->TransformCallback::setName(name);

		return 0;
	}

	// void osgUtil::TransformCallback::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::TransformCallback::base_computeDataVariance() function, expected prototype:\nvoid osgUtil::TransformCallback::base_computeDataVariance()\nClass arguments details:\n");
		}


		osgUtil::TransformCallback* self=Luna< osg::Referenced >::checkSubType< osgUtil::TransformCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::TransformCallback::base_computeDataVariance()");
		}
		self->TransformCallback::computeDataVariance();

		return 0;
	}

	// void osgUtil::TransformCallback::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::TransformCallback::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgUtil::TransformCallback::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgUtil::TransformCallback* self=Luna< osg::Referenced >::checkSubType< osgUtil::TransformCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::TransformCallback::base_setUserData(osg::Referenced *)");
		}
		self->TransformCallback::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgUtil::TransformCallback::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgUtil::TransformCallback::base_getUserData() function, expected prototype:\nosg::Referenced * osgUtil::TransformCallback::base_getUserData()\nClass arguments details:\n");
		}


		osgUtil::TransformCallback* self=Luna< osg::Referenced >::checkSubType< osgUtil::TransformCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osgUtil::TransformCallback::base_getUserData()");
		}
		osg::Referenced * lret = self->TransformCallback::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgUtil::TransformCallback::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgUtil::TransformCallback::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgUtil::TransformCallback::base_getUserData() const\nClass arguments details:\n");
		}


		osgUtil::TransformCallback* self=Luna< osg::Referenced >::checkSubType< osgUtil::TransformCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgUtil::TransformCallback::base_getUserData() const");
		}
		const osg::Referenced * lret = self->TransformCallback::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::TransformCallback::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgUtil::TransformCallback::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::TransformCallback::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgUtil::TransformCallback::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgUtil::TransformCallback* self=Luna< osg::Referenced >::checkSubType< osgUtil::TransformCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::TransformCallback::base_releaseGLObjects(osg::State *) const");
		}
		self->TransformCallback::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgUtil::TransformCallback::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgUtil::TransformCallback::base_cloneType() const function, expected prototype:\nosg::Object * osgUtil::TransformCallback::base_cloneType() const\nClass arguments details:\n");
		}


		osgUtil::TransformCallback* self=Luna< osg::Referenced >::checkSubType< osgUtil::TransformCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgUtil::TransformCallback::base_cloneType() const");
		}
		osg::Object * lret = self->TransformCallback::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgUtil::TransformCallback::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgUtil::TransformCallback::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgUtil::TransformCallback::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::TransformCallback::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgUtil::TransformCallback* self=Luna< osg::Referenced >::checkSubType< osgUtil::TransformCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgUtil::TransformCallback::base_clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->TransformCallback::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgUtil::TransformCallback::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::TransformCallback::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgUtil::TransformCallback::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgUtil::TransformCallback* self=Luna< osg::Referenced >::checkSubType< osgUtil::TransformCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::TransformCallback::base_isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->TransformCallback::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgUtil::TransformCallback::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::TransformCallback::base_libraryName() const function, expected prototype:\nconst char * osgUtil::TransformCallback::base_libraryName() const\nClass arguments details:\n");
		}


		osgUtil::TransformCallback* self=Luna< osg::Referenced >::checkSubType< osgUtil::TransformCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::TransformCallback::base_libraryName() const");
		}
		const char * lret = self->TransformCallback::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::TransformCallback::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::TransformCallback::base_className() const function, expected prototype:\nconst char * osgUtil::TransformCallback::base_className() const\nClass arguments details:\n");
		}


		osgUtil::TransformCallback* self=Luna< osg::Referenced >::checkSubType< osgUtil::TransformCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::TransformCallback::base_className() const");
		}
		const char * lret = self->TransformCallback::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:
	// void osgUtil::TransformCallback::operator()(osg::Node * node, osg::NodeVisitor * nv)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::TransformCallback::operator()(osg::Node * node, osg::NodeVisitor * nv) function, expected prototype:\nvoid osgUtil::TransformCallback::operator()(osg::Node * node, osg::NodeVisitor * nv)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osgUtil::TransformCallback* self=Luna< osg::Referenced >::checkSubType< osgUtil::TransformCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::TransformCallback::operator()(osg::Node *, osg::NodeVisitor *)");
		}
		self->operator()(node, nv);

		return 0;
	}


};

osgUtil::TransformCallback* LunaTraits< osgUtil::TransformCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_TransformCallback::_bind_ctor(L);
}

void LunaTraits< osgUtil::TransformCallback >::_bind_dtor(osgUtil::TransformCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::TransformCallback >::className[] = "TransformCallback";
const char LunaTraits< osgUtil::TransformCallback >::fullName[] = "osgUtil::TransformCallback";
const char LunaTraits< osgUtil::TransformCallback >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::TransformCallback >::parents[] = {"osg.NodeCallback", 0};
const int LunaTraits< osgUtil::TransformCallback >::hash = 26178532;
const int LunaTraits< osgUtil::TransformCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::TransformCallback >::methods[] = {
	{"setPause", &luna_wrapper_osgUtil_TransformCallback::_bind_setPause},
	{"base_setName", &luna_wrapper_osgUtil_TransformCallback::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgUtil_TransformCallback::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgUtil_TransformCallback::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgUtil_TransformCallback::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgUtil_TransformCallback::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgUtil_TransformCallback::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgUtil_TransformCallback::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgUtil_TransformCallback::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgUtil_TransformCallback::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgUtil_TransformCallback::_bind_base_className},
	{"op_call", &luna_wrapper_osgUtil_TransformCallback::_bind_op_call},
	{"__eq", &luna_wrapper_osgUtil_TransformCallback::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::TransformCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_TransformCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::TransformCallback >::enumValues[] = {
	{0,0}
};


