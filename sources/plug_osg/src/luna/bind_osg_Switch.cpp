#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Switch.h>

class luna_wrapper_osg_Switch {
public:
	typedef Luna< osg::Switch > luna_t;

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
		osg::Switch* ptr= dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Switch >::push(L,ptr,false);
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
		if( (!dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_asSwitch_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asSwitch_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

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

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNewChildDefaultValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNewChildDefaultValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addChild_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addChild_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_insertChild_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_insertChild_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,3)) ) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeChildren(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setValue(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setChildValue(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getChildValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAllChildrenOff(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAllChildrenOn(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSingleChildOn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setValueList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,23153681) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getValueList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Switch::Switch()
	static osg::Switch* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Switch::Switch() function, expected prototype:\nosg::Switch::Switch()\nClass arguments details:\n");
		}


		return new osg::Switch();
	}

	// osg::Switch::Switch(const osg::Switch & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Switch* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Switch::Switch(const osg::Switch & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Switch::Switch(const osg::Switch & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Switch* _arg1_ptr=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Switch::Switch function");
		}
		const osg::Switch & _arg1=*_arg1_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Switch::Switch function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::Switch(_arg1, copyop);
	}

	// osg::Switch::Switch(lua_Table * data)
	static osg::Switch* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Switch::Switch(lua_Table * data) function, expected prototype:\nosg::Switch::Switch(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_Switch(L,NULL);
	}

	// osg::Switch::Switch(lua_Table * data, const osg::Switch & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Switch* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Switch::Switch(lua_Table * data, const osg::Switch & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Switch::Switch(lua_Table * data, const osg::Switch & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Switch* _arg2_ptr=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::Switch::Switch function");
		}
		const osg::Switch & _arg2=*_arg2_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Switch::Switch function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_Switch(L,NULL, _arg2, copyop);
	}

	// Overload binder for osg::Switch::Switch
	static osg::Switch* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function Switch, cannot match any of the overloads for function Switch:\n  Switch()\n  Switch(const osg::Switch &, const osg::CopyOp &)\n  Switch(lua_Table *)\n  Switch(lua_Table *, const osg::Switch &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Switch * osg::Switch::asSwitch()
	static int _bind_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_asSwitch_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Switch * osg::Switch::asSwitch() function, expected prototype:\nosg::Switch * osg::Switch::asSwitch()\nClass arguments details:\n");
		}


		osg::Switch* self=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Switch * osg::Switch::asSwitch()");
		}
		osg::Switch * lret = self->asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osg::Switch::asSwitch() const
	static int _bind_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_asSwitch_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Switch * osg::Switch::asSwitch() const function, expected prototype:\nconst osg::Switch * osg::Switch::asSwitch() const\nClass arguments details:\n");
		}


		osg::Switch* self=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Switch * osg::Switch::asSwitch() const");
		}
		const osg::Switch * lret = self->asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Switch::asSwitch
	static int _bind_asSwitch(lua_State *L) {
		if (_lg_typecheck_asSwitch_overload_1(L)) return _bind_asSwitch_overload_1(L);
		if (_lg_typecheck_asSwitch_overload_2(L)) return _bind_asSwitch_overload_2(L);

		luaL_error(L, "error in function asSwitch, cannot match any of the overloads for function asSwitch:\n  asSwitch()\n  asSwitch()\n");
		return 0;
	}

	// osg::Object * osg::Switch::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Switch::cloneType() const function, expected prototype:\nosg::Object * osg::Switch::cloneType() const\nClass arguments details:\n");
		}


		osg::Switch* self=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Switch::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Switch::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Switch::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::Switch::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Switch::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::Switch* self=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Switch::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Switch::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Switch::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Switch::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::Switch* self=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Switch::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Switch::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Switch::className() const function, expected prototype:\nconst char * osg::Switch::className() const\nClass arguments details:\n");
		}


		osg::Switch* self=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Switch::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Switch::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Switch::libraryName() const function, expected prototype:\nconst char * osg::Switch::libraryName() const\nClass arguments details:\n");
		}


		osg::Switch* self=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Switch::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Switch::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Switch::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::Switch::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::Switch::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::Switch* self=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Switch::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}

	// void osg::Switch::traverse(osg::NodeVisitor & arg1)
	static int _bind_traverse(lua_State *L) {
		if (!_lg_typecheck_traverse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Switch::traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osg::Switch::traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* _arg1_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Switch::traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osg::Switch* self=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Switch::traverse(osg::NodeVisitor &)");
		}
		self->traverse(_arg1);

		return 0;
	}

	// void osg::Switch::setNewChildDefaultValue(bool value)
	static int _bind_setNewChildDefaultValue(lua_State *L) {
		if (!_lg_typecheck_setNewChildDefaultValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Switch::setNewChildDefaultValue(bool value) function, expected prototype:\nvoid osg::Switch::setNewChildDefaultValue(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		osg::Switch* self=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Switch::setNewChildDefaultValue(bool)");
		}
		self->setNewChildDefaultValue(value);

		return 0;
	}

	// bool osg::Switch::getNewChildDefaultValue() const
	static int _bind_getNewChildDefaultValue(lua_State *L) {
		if (!_lg_typecheck_getNewChildDefaultValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Switch::getNewChildDefaultValue() const function, expected prototype:\nbool osg::Switch::getNewChildDefaultValue() const\nClass arguments details:\n");
		}


		osg::Switch* self=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Switch::getNewChildDefaultValue() const");
		}
		bool lret = self->getNewChildDefaultValue();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Switch::addChild(osg::Node * child)
	static int _bind_addChild_overload_1(lua_State *L) {
		if (!_lg_typecheck_addChild_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Switch::addChild(osg::Node * child) function, expected prototype:\nbool osg::Switch::addChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* child=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));

		osg::Switch* self=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Switch::addChild(osg::Node *)");
		}
		bool lret = self->addChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Switch::addChild(osg::Node * child, bool value)
	static int _bind_addChild_overload_2(lua_State *L) {
		if (!_lg_typecheck_addChild_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Switch::addChild(osg::Node * child, bool value) function, expected prototype:\nbool osg::Switch::addChild(osg::Node * child, bool value)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* child=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		bool value=(bool)(lua_toboolean(L,3)==1);

		osg::Switch* self=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Switch::addChild(osg::Node *, bool)");
		}
		bool lret = self->addChild(child, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::Switch::addChild
	static int _bind_addChild(lua_State *L) {
		if (_lg_typecheck_addChild_overload_1(L)) return _bind_addChild_overload_1(L);
		if (_lg_typecheck_addChild_overload_2(L)) return _bind_addChild_overload_2(L);

		luaL_error(L, "error in function addChild, cannot match any of the overloads for function addChild:\n  addChild(osg::Node *)\n  addChild(osg::Node *, bool)\n");
		return 0;
	}

	// bool osg::Switch::insertChild(unsigned int index, osg::Node * child)
	static int _bind_insertChild_overload_1(lua_State *L) {
		if (!_lg_typecheck_insertChild_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Switch::insertChild(unsigned int index, osg::Node * child) function, expected prototype:\nbool osg::Switch::insertChild(unsigned int index, osg::Node * child)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,3));

		osg::Switch* self=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Switch::insertChild(unsigned int, osg::Node *)");
		}
		bool lret = self->insertChild(index, child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Switch::insertChild(unsigned int index, osg::Node * child, bool value)
	static int _bind_insertChild_overload_2(lua_State *L) {
		if (!_lg_typecheck_insertChild_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Switch::insertChild(unsigned int index, osg::Node * child, bool value) function, expected prototype:\nbool osg::Switch::insertChild(unsigned int index, osg::Node * child, bool value)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,3));
		bool value=(bool)(lua_toboolean(L,4)==1);

		osg::Switch* self=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Switch::insertChild(unsigned int, osg::Node *, bool)");
		}
		bool lret = self->insertChild(index, child, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::Switch::insertChild
	static int _bind_insertChild(lua_State *L) {
		if (_lg_typecheck_insertChild_overload_1(L)) return _bind_insertChild_overload_1(L);
		if (_lg_typecheck_insertChild_overload_2(L)) return _bind_insertChild_overload_2(L);

		luaL_error(L, "error in function insertChild, cannot match any of the overloads for function insertChild:\n  insertChild(unsigned int, osg::Node *)\n  insertChild(unsigned int, osg::Node *, bool)\n");
		return 0;
	}

	// bool osg::Switch::removeChildren(unsigned int pos, unsigned int numChildrenToRemove)
	static int _bind_removeChildren(lua_State *L) {
		if (!_lg_typecheck_removeChildren(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Switch::removeChildren(unsigned int pos, unsigned int numChildrenToRemove) function, expected prototype:\nbool osg::Switch::removeChildren(unsigned int pos, unsigned int numChildrenToRemove)\nClass arguments details:\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=(unsigned int)lua_tointeger(L,3);

		osg::Switch* self=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Switch::removeChildren(unsigned int, unsigned int)");
		}
		bool lret = self->removeChildren(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Switch::setValue(unsigned int pos, bool value)
	static int _bind_setValue(lua_State *L) {
		if (!_lg_typecheck_setValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Switch::setValue(unsigned int pos, bool value) function, expected prototype:\nvoid osg::Switch::setValue(unsigned int pos, bool value)\nClass arguments details:\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		bool value=(bool)(lua_toboolean(L,3)==1);

		osg::Switch* self=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Switch::setValue(unsigned int, bool)");
		}
		self->setValue(pos, value);

		return 0;
	}

	// bool osg::Switch::getValue(unsigned int pos) const
	static int _bind_getValue(lua_State *L) {
		if (!_lg_typecheck_getValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Switch::getValue(unsigned int pos) const function, expected prototype:\nbool osg::Switch::getValue(unsigned int pos) const\nClass arguments details:\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::Switch* self=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Switch::getValue(unsigned int) const");
		}
		bool lret = self->getValue(pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Switch::setChildValue(const osg::Node * child, bool value)
	static int _bind_setChildValue(lua_State *L) {
		if (!_lg_typecheck_setChildValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Switch::setChildValue(const osg::Node * child, bool value) function, expected prototype:\nvoid osg::Switch::setChildValue(const osg::Node * child, bool value)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Node* child=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		bool value=(bool)(lua_toboolean(L,3)==1);

		osg::Switch* self=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Switch::setChildValue(const osg::Node *, bool)");
		}
		self->setChildValue(child, value);

		return 0;
	}

	// bool osg::Switch::getChildValue(const osg::Node * child) const
	static int _bind_getChildValue(lua_State *L) {
		if (!_lg_typecheck_getChildValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Switch::getChildValue(const osg::Node * child) const function, expected prototype:\nbool osg::Switch::getChildValue(const osg::Node * child) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Node* child=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));

		osg::Switch* self=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Switch::getChildValue(const osg::Node *) const");
		}
		bool lret = self->getChildValue(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Switch::setAllChildrenOff()
	static int _bind_setAllChildrenOff(lua_State *L) {
		if (!_lg_typecheck_setAllChildrenOff(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Switch::setAllChildrenOff() function, expected prototype:\nbool osg::Switch::setAllChildrenOff()\nClass arguments details:\n");
		}


		osg::Switch* self=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Switch::setAllChildrenOff()");
		}
		bool lret = self->setAllChildrenOff();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Switch::setAllChildrenOn()
	static int _bind_setAllChildrenOn(lua_State *L) {
		if (!_lg_typecheck_setAllChildrenOn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Switch::setAllChildrenOn() function, expected prototype:\nbool osg::Switch::setAllChildrenOn()\nClass arguments details:\n");
		}


		osg::Switch* self=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Switch::setAllChildrenOn()");
		}
		bool lret = self->setAllChildrenOn();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Switch::setSingleChildOn(unsigned int pos)
	static int _bind_setSingleChildOn(lua_State *L) {
		if (!_lg_typecheck_setSingleChildOn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Switch::setSingleChildOn(unsigned int pos) function, expected prototype:\nbool osg::Switch::setSingleChildOn(unsigned int pos)\nClass arguments details:\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::Switch* self=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Switch::setSingleChildOn(unsigned int)");
		}
		bool lret = self->setSingleChildOn(pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Switch::setValueList(const osg::Switch::ValueList & values)
	static int _bind_setValueList(lua_State *L) {
		if (!_lg_typecheck_setValueList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Switch::setValueList(const osg::Switch::ValueList & values) function, expected prototype:\nvoid osg::Switch::setValueList(const osg::Switch::ValueList & values)\nClass arguments details:\narg 1 ID = 23153681\n");
		}

		const osg::Switch::ValueList* values_ptr=(Luna< osg::Switch::ValueList >::check(L,2));
		if( !values_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg values in osg::Switch::setValueList function");
		}
		const osg::Switch::ValueList & values=*values_ptr;

		osg::Switch* self=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Switch::setValueList(const osg::Switch::ValueList &)");
		}
		self->setValueList(values);

		return 0;
	}

	// const osg::Switch::ValueList & osg::Switch::getValueList() const
	static int _bind_getValueList(lua_State *L) {
		if (!_lg_typecheck_getValueList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Switch::ValueList & osg::Switch::getValueList() const function, expected prototype:\nconst osg::Switch::ValueList & osg::Switch::getValueList() const\nClass arguments details:\n");
		}


		osg::Switch* self=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Switch::ValueList & osg::Switch::getValueList() const");
		}
		const osg::Switch::ValueList* lret = &self->getValueList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch::ValueList >::push(L,lret,false);

		return 1;
	}

	// osg::BoundingSphered osg::Switch::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::Switch::computeBound() const function, expected prototype:\nosg::BoundingSphered osg::Switch::computeBound() const\nClass arguments details:\n");
		}


		osg::Switch* self=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::Switch::computeBound() const");
		}
		osg::BoundingSphered stack_lret = self->computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osg::Switch* LunaTraits< osg::Switch >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Switch::_bind_ctor(L);
}

void LunaTraits< osg::Switch >::_bind_dtor(osg::Switch* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Switch >::className[] = "Switch";
const char LunaTraits< osg::Switch >::fullName[] = "osg::Switch";
const char LunaTraits< osg::Switch >::moduleName[] = "osg";
const char* LunaTraits< osg::Switch >::parents[] = {"osg.Group", 0};
const int LunaTraits< osg::Switch >::hash = 92376174;
const int LunaTraits< osg::Switch >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Switch >::methods[] = {
	{"asSwitch", &luna_wrapper_osg_Switch::_bind_asSwitch},
	{"cloneType", &luna_wrapper_osg_Switch::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Switch::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Switch::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_Switch::_bind_className},
	{"libraryName", &luna_wrapper_osg_Switch::_bind_libraryName},
	{"accept", &luna_wrapper_osg_Switch::_bind_accept},
	{"traverse", &luna_wrapper_osg_Switch::_bind_traverse},
	{"setNewChildDefaultValue", &luna_wrapper_osg_Switch::_bind_setNewChildDefaultValue},
	{"getNewChildDefaultValue", &luna_wrapper_osg_Switch::_bind_getNewChildDefaultValue},
	{"addChild", &luna_wrapper_osg_Switch::_bind_addChild},
	{"insertChild", &luna_wrapper_osg_Switch::_bind_insertChild},
	{"removeChildren", &luna_wrapper_osg_Switch::_bind_removeChildren},
	{"setValue", &luna_wrapper_osg_Switch::_bind_setValue},
	{"getValue", &luna_wrapper_osg_Switch::_bind_getValue},
	{"setChildValue", &luna_wrapper_osg_Switch::_bind_setChildValue},
	{"getChildValue", &luna_wrapper_osg_Switch::_bind_getChildValue},
	{"setAllChildrenOff", &luna_wrapper_osg_Switch::_bind_setAllChildrenOff},
	{"setAllChildrenOn", &luna_wrapper_osg_Switch::_bind_setAllChildrenOn},
	{"setSingleChildOn", &luna_wrapper_osg_Switch::_bind_setSingleChildOn},
	{"setValueList", &luna_wrapper_osg_Switch::_bind_setValueList},
	{"getValueList", &luna_wrapper_osg_Switch::_bind_getValueList},
	{"computeBound", &luna_wrapper_osg_Switch::_bind_computeBound},
	{"__eq", &luna_wrapper_osg_Switch::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Switch >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Switch::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Switch >::enumValues[] = {
	{0,0}
};


