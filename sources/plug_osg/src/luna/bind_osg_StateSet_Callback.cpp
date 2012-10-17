#include <plug_common.h>

class luna_wrapper_osg_StateSet_Callback {
public:
	typedef Luna< osg::StateSet::Callback > luna_t;

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
		osg::StateSet::Callback* ptr= dynamic_cast< osg::StateSet::Callback* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::StateSet::Callback >::push(L,ptr,false);
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
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::StateSet::Callback::Callback()
	static osg::StateSet::Callback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateSet::Callback::Callback() function, expected prototype:\nosg::StateSet::Callback::Callback()\nClass arguments details:\n");
		}


		return new osg::StateSet::Callback();
	}

	// osg::StateSet::Callback::Callback(const osg::StateSet::Callback & , const osg::CopyOp & )
	static osg::StateSet::Callback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateSet::Callback::Callback(const osg::StateSet::Callback & , const osg::CopyOp & ) function, expected prototype:\nosg::StateSet::Callback::Callback(const osg::StateSet::Callback & , const osg::CopyOp & )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		const osg::StateSet::Callback* _arg1_ptr=dynamic_cast< osg::StateSet::Callback* >(Luna< osg::Referenced >::check(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::StateSet::Callback::Callback function");
		}
		const osg::StateSet::Callback & _arg1=*_arg1_ptr;
		const osg::CopyOp* _arg2_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::StateSet::Callback::Callback function");
		}
		const osg::CopyOp & _arg2=*_arg2_ptr;

		return new osg::StateSet::Callback(_arg1, _arg2);
	}

	// Overload binder for osg::StateSet::Callback::Callback
	static osg::StateSet::Callback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Callback, cannot match any of the overloads for function Callback:\n  Callback()\n  Callback(const osg::StateSet::Callback &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::StateSet::Callback::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::StateSet::Callback::cloneType() const function, expected prototype:\nosg::Object * osg::StateSet::Callback::cloneType() const\nClass arguments details:\n");
		}


		osg::StateSet::Callback* self=dynamic_cast< osg::StateSet::Callback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::StateSet::Callback::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::StateSet::Callback::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::StateSet::Callback::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::StateSet::Callback::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::StateSet::Callback::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::StateSet::Callback* self=dynamic_cast< osg::StateSet::Callback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::StateSet::Callback::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::StateSet::Callback::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::StateSet::Callback::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::StateSet::Callback::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::StateSet::Callback* self=dynamic_cast< osg::StateSet::Callback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::StateSet::Callback::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::StateSet::Callback::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::StateSet::Callback::libraryName() const function, expected prototype:\nconst char * osg::StateSet::Callback::libraryName() const\nClass arguments details:\n");
		}


		osg::StateSet::Callback* self=dynamic_cast< osg::StateSet::Callback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::StateSet::Callback::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::StateSet::Callback::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::StateSet::Callback::className() const function, expected prototype:\nconst char * osg::StateSet::Callback::className() const\nClass arguments details:\n");
		}


		osg::StateSet::Callback* self=dynamic_cast< osg::StateSet::Callback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::StateSet::Callback::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:
	// void osg::StateSet::Callback::operator()(osg::StateSet * , osg::NodeVisitor * )
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::StateSet::Callback::operator()(osg::StateSet * , osg::NodeVisitor * ) function, expected prototype:\nvoid osg::StateSet::Callback::operator()(osg::StateSet * , osg::NodeVisitor * )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osg::StateSet* _arg1=dynamic_cast< osg::StateSet* >(Luna< osg::Referenced >::check(L,2));
		osg::NodeVisitor* _arg2=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,3));

		osg::StateSet::Callback* self=dynamic_cast< osg::StateSet::Callback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::StateSet::Callback::operator()(osg::StateSet *, osg::NodeVisitor *)");
		}
		self->operator()(_arg1, _arg2);

		return 0;
	}


};

osg::StateSet::Callback* LunaTraits< osg::StateSet::Callback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_StateSet_Callback::_bind_ctor(L);
}

void LunaTraits< osg::StateSet::Callback >::_bind_dtor(osg::StateSet::Callback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::StateSet::Callback >::className[] = "Callback";
const char LunaTraits< osg::StateSet::Callback >::fullName[] = "osg::StateSet::Callback";
const char LunaTraits< osg::StateSet::Callback >::moduleName[] = "osg";
const char* LunaTraits< osg::StateSet::Callback >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::StateSet::Callback >::hash = 44476119;
const int LunaTraits< osg::StateSet::Callback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::StateSet::Callback >::methods[] = {
	{"cloneType", &luna_wrapper_osg_StateSet_Callback::_bind_cloneType},
	{"clone", &luna_wrapper_osg_StateSet_Callback::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_StateSet_Callback::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_StateSet_Callback::_bind_libraryName},
	{"className", &luna_wrapper_osg_StateSet_Callback::_bind_className},
	{"op_call", &luna_wrapper_osg_StateSet_Callback::_bind_op_call},
	{"__eq", &luna_wrapper_osg_StateSet_Callback::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::StateSet::Callback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_StateSet_Callback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::StateSet::Callback >::enumValues[] = {
	{0,0}
};


