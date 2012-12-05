#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Camera_DrawCallback.h>

class luna_wrapper_osg_Camera_DrawCallback {
public:
	typedef Luna< osg::Camera::DrawCallback > luna_t;

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
		osg::Camera::DrawCallback* ptr= dynamic_cast< osg::Camera::DrawCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Camera::DrawCallback >::push(L,ptr,false);
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
		if( (!dynamic_cast< osg::Camera::DrawCallback* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Camera::DrawCallback* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,3))) ) return false;
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


	// Operator checkers:
	// (found 2 valid operators)
	inline static bool _lg_typecheck_op_call_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		if( (!dynamic_cast< osg::RenderInfo* >(Luna< osg::RenderInfo >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_call_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Camera* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::Camera::DrawCallback::DrawCallback()
	static osg::Camera::DrawCallback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Camera::DrawCallback::DrawCallback() function, expected prototype:\nosg::Camera::DrawCallback::DrawCallback()\nClass arguments details:\n");
		}


		return new osg::Camera::DrawCallback();
	}

	// osg::Camera::DrawCallback::DrawCallback(const osg::Camera::DrawCallback & arg1, const osg::CopyOp & arg2)
	static osg::Camera::DrawCallback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Camera::DrawCallback::DrawCallback(const osg::Camera::DrawCallback & arg1, const osg::CopyOp & arg2) function, expected prototype:\nosg::Camera::DrawCallback::DrawCallback(const osg::Camera::DrawCallback & arg1, const osg::CopyOp & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		const osg::Camera::DrawCallback* _arg1_ptr=dynamic_cast< osg::Camera::DrawCallback* >(Luna< osg::Referenced >::check(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Camera::DrawCallback::DrawCallback function");
		}
		const osg::Camera::DrawCallback & _arg1=*_arg1_ptr;
		const osg::CopyOp* _arg2_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::Camera::DrawCallback::DrawCallback function");
		}
		const osg::CopyOp & _arg2=*_arg2_ptr;

		return new osg::Camera::DrawCallback(_arg1, _arg2);
	}

	// osg::Camera::DrawCallback::DrawCallback(lua_Table * data)
	static osg::Camera::DrawCallback* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Camera::DrawCallback::DrawCallback(lua_Table * data) function, expected prototype:\nosg::Camera::DrawCallback::DrawCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_Camera_DrawCallback(L,NULL);
	}

	// osg::Camera::DrawCallback::DrawCallback(lua_Table * data, const osg::Camera::DrawCallback & arg2, const osg::CopyOp & arg3)
	static osg::Camera::DrawCallback* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Camera::DrawCallback::DrawCallback(lua_Table * data, const osg::Camera::DrawCallback & arg2, const osg::CopyOp & arg3) function, expected prototype:\nosg::Camera::DrawCallback::DrawCallback(lua_Table * data, const osg::Camera::DrawCallback & arg2, const osg::CopyOp & arg3)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		const osg::Camera::DrawCallback* _arg2_ptr=dynamic_cast< osg::Camera::DrawCallback* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::Camera::DrawCallback::DrawCallback function");
		}
		const osg::Camera::DrawCallback & _arg2=*_arg2_ptr;
		const osg::CopyOp* _arg3_ptr=(Luna< osg::CopyOp >::check(L,3));
		if( !_arg3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg3 in osg::Camera::DrawCallback::DrawCallback function");
		}
		const osg::CopyOp & _arg3=*_arg3_ptr;

		return new wrapper_osg_Camera_DrawCallback(L,NULL, _arg2, _arg3);
	}

	// Overload binder for osg::Camera::DrawCallback::DrawCallback
	static osg::Camera::DrawCallback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function DrawCallback, cannot match any of the overloads for function DrawCallback:\n  DrawCallback()\n  DrawCallback(const osg::Camera::DrawCallback &, const osg::CopyOp &)\n  DrawCallback(lua_Table *)\n  DrawCallback(lua_Table *, const osg::Camera::DrawCallback &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Camera::DrawCallback::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Camera::DrawCallback::cloneType() const function, expected prototype:\nosg::Object * osg::Camera::DrawCallback::cloneType() const\nClass arguments details:\n");
		}


		osg::Camera::DrawCallback* self=dynamic_cast< osg::Camera::DrawCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Camera::DrawCallback::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Camera::DrawCallback::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Camera::DrawCallback::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Camera::DrawCallback::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Camera::DrawCallback::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Camera::DrawCallback* self=dynamic_cast< osg::Camera::DrawCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Camera::DrawCallback::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Camera::DrawCallback::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Camera::DrawCallback::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Camera::DrawCallback::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::Camera::DrawCallback* self=dynamic_cast< osg::Camera::DrawCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Camera::DrawCallback::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Camera::DrawCallback::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Camera::DrawCallback::libraryName() const function, expected prototype:\nconst char * osg::Camera::DrawCallback::libraryName() const\nClass arguments details:\n");
		}


		osg::Camera::DrawCallback* self=dynamic_cast< osg::Camera::DrawCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Camera::DrawCallback::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Camera::DrawCallback::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Camera::DrawCallback::className() const function, expected prototype:\nconst char * osg::Camera::DrawCallback::className() const\nClass arguments details:\n");
		}


		osg::Camera::DrawCallback* self=dynamic_cast< osg::Camera::DrawCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Camera::DrawCallback::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:
	// void osg::Camera::DrawCallback::operator()(osg::RenderInfo & renderInfo) const
	static int _bind_op_call_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Camera::DrawCallback::operator()(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osg::Camera::DrawCallback::operator()(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n");
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osg::Camera::DrawCallback::operator() function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osg::Camera::DrawCallback* self=dynamic_cast< osg::Camera::DrawCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Camera::DrawCallback::operator()(osg::RenderInfo &) const");
		}
		self->operator()(renderInfo);

		return 0;
	}

	// void osg::Camera::DrawCallback::operator()(const osg::Camera & arg1) const
	static int _bind_op_call_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Camera::DrawCallback::operator()(const osg::Camera & arg1) const function, expected prototype:\nvoid osg::Camera::DrawCallback::operator()(const osg::Camera & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Camera* _arg1_ptr=dynamic_cast< osg::Camera* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Camera::DrawCallback::operator() function");
		}
		const osg::Camera & _arg1=*_arg1_ptr;

		osg::Camera::DrawCallback* self=dynamic_cast< osg::Camera::DrawCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Camera::DrawCallback::operator()(const osg::Camera &) const");
		}
		self->operator()(_arg1);

		return 0;
	}

	// Overload binder for osg::Camera::DrawCallback::operator()
	static int _bind_op_call(lua_State *L) {
		if (_lg_typecheck_op_call_overload_1(L)) return _bind_op_call_overload_1(L);
		if (_lg_typecheck_op_call_overload_2(L)) return _bind_op_call_overload_2(L);

		luaL_error(L, "error in function operator(), cannot match any of the overloads for function operator():\n  operator()(osg::RenderInfo &)\n  operator()(const osg::Camera &)\n");
		return 0;
	}


};

osg::Camera::DrawCallback* LunaTraits< osg::Camera::DrawCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Camera_DrawCallback::_bind_ctor(L);
}

void LunaTraits< osg::Camera::DrawCallback >::_bind_dtor(osg::Camera::DrawCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Camera::DrawCallback >::className[] = "DrawCallback";
const char LunaTraits< osg::Camera::DrawCallback >::fullName[] = "osg::Camera::DrawCallback";
const char LunaTraits< osg::Camera::DrawCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::Camera::DrawCallback >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::Camera::DrawCallback >::hash = 71550717;
const int LunaTraits< osg::Camera::DrawCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Camera::DrawCallback >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Camera_DrawCallback::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Camera_DrawCallback::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Camera_DrawCallback::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Camera_DrawCallback::_bind_libraryName},
	{"className", &luna_wrapper_osg_Camera_DrawCallback::_bind_className},
	{"op_call", &luna_wrapper_osg_Camera_DrawCallback::_bind_op_call},
	{"__eq", &luna_wrapper_osg_Camera_DrawCallback::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Camera::DrawCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Camera_DrawCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Camera::DrawCallback >::enumValues[] = {
	{0,0}
};


