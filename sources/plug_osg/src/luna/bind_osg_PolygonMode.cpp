#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_PolygonMode.h>

class luna_wrapper_osg_PolygonMode {
public:
	typedef Luna< osg::PolygonMode > luna_t;

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
		osg::PolygonMode* ptr= dynamic_cast< osg::PolygonMode* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::PolygonMode >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!dynamic_cast< osg::PolygonMode* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::PolygonMode* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,3))) ) return false;
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

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMode(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFrontAndBack(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::PolygonMode::PolygonMode()
	static osg::PolygonMode* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PolygonMode::PolygonMode() function, expected prototype:\nosg::PolygonMode::PolygonMode()\nClass arguments details:\n");
		}


		return new osg::PolygonMode();
	}

	// osg::PolygonMode::PolygonMode(osg::PolygonMode::Face face, osg::PolygonMode::Mode mode)
	static osg::PolygonMode* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PolygonMode::PolygonMode(osg::PolygonMode::Face face, osg::PolygonMode::Mode mode) function, expected prototype:\nosg::PolygonMode::PolygonMode(osg::PolygonMode::Face face, osg::PolygonMode::Mode mode)\nClass arguments details:\n");
		}

		osg::PolygonMode::Face face=(osg::PolygonMode::Face)lua_tointeger(L,1);
		osg::PolygonMode::Mode mode=(osg::PolygonMode::Mode)lua_tointeger(L,2);

		return new osg::PolygonMode(face, mode);
	}

	// osg::PolygonMode::PolygonMode(const osg::PolygonMode & pm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::PolygonMode* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PolygonMode::PolygonMode(const osg::PolygonMode & pm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::PolygonMode::PolygonMode(const osg::PolygonMode & pm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::PolygonMode* pm_ptr=dynamic_cast< osg::PolygonMode* >(Luna< osg::Referenced >::check(L,1));
		if( !pm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pm in osg::PolygonMode::PolygonMode function");
		}
		const osg::PolygonMode & pm=*pm_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::PolygonMode::PolygonMode function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::PolygonMode(pm, copyop);
	}

	// osg::PolygonMode::PolygonMode(lua_Table * data)
	static osg::PolygonMode* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PolygonMode::PolygonMode(lua_Table * data) function, expected prototype:\nosg::PolygonMode::PolygonMode(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_PolygonMode(L,NULL);
	}

	// osg::PolygonMode::PolygonMode(lua_Table * data, osg::PolygonMode::Face face, osg::PolygonMode::Mode mode)
	static osg::PolygonMode* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PolygonMode::PolygonMode(lua_Table * data, osg::PolygonMode::Face face, osg::PolygonMode::Mode mode) function, expected prototype:\nosg::PolygonMode::PolygonMode(lua_Table * data, osg::PolygonMode::Face face, osg::PolygonMode::Mode mode)\nClass arguments details:\n");
		}

		osg::PolygonMode::Face face=(osg::PolygonMode::Face)lua_tointeger(L,2);
		osg::PolygonMode::Mode mode=(osg::PolygonMode::Mode)lua_tointeger(L,3);

		return new wrapper_osg_PolygonMode(L,NULL, face, mode);
	}

	// osg::PolygonMode::PolygonMode(lua_Table * data, const osg::PolygonMode & pm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::PolygonMode* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PolygonMode::PolygonMode(lua_Table * data, const osg::PolygonMode & pm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::PolygonMode::PolygonMode(lua_Table * data, const osg::PolygonMode & pm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::PolygonMode* pm_ptr=dynamic_cast< osg::PolygonMode* >(Luna< osg::Referenced >::check(L,2));
		if( !pm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pm in osg::PolygonMode::PolygonMode function");
		}
		const osg::PolygonMode & pm=*pm_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::PolygonMode::PolygonMode function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_PolygonMode(L,NULL, pm, copyop);
	}

	// Overload binder for osg::PolygonMode::PolygonMode
	static osg::PolygonMode* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function PolygonMode, cannot match any of the overloads for function PolygonMode:\n  PolygonMode()\n  PolygonMode(osg::PolygonMode::Face, osg::PolygonMode::Mode)\n  PolygonMode(const osg::PolygonMode &, const osg::CopyOp &)\n  PolygonMode(lua_Table *)\n  PolygonMode(lua_Table *, osg::PolygonMode::Face, osg::PolygonMode::Mode)\n  PolygonMode(lua_Table *, const osg::PolygonMode &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::PolygonMode::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PolygonMode::cloneType() const function, expected prototype:\nosg::Object * osg::PolygonMode::cloneType() const\nClass arguments details:\n");
		}


		osg::PolygonMode* self=dynamic_cast< osg::PolygonMode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::PolygonMode::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::PolygonMode::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PolygonMode::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::PolygonMode::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PolygonMode::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::PolygonMode* self=dynamic_cast< osg::PolygonMode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::PolygonMode::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::PolygonMode::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::PolygonMode::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::PolygonMode::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::PolygonMode* self=dynamic_cast< osg::PolygonMode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::PolygonMode::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::PolygonMode::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::PolygonMode::libraryName() const function, expected prototype:\nconst char * osg::PolygonMode::libraryName() const\nClass arguments details:\n");
		}


		osg::PolygonMode* self=dynamic_cast< osg::PolygonMode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::PolygonMode::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::PolygonMode::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::PolygonMode::className() const function, expected prototype:\nconst char * osg::PolygonMode::className() const\nClass arguments details:\n");
		}


		osg::PolygonMode* self=dynamic_cast< osg::PolygonMode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::PolygonMode::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::PolygonMode::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::PolygonMode::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::PolygonMode::getType() const\nClass arguments details:\n");
		}


		osg::PolygonMode* self=dynamic_cast< osg::PolygonMode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::PolygonMode::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::PolygonMode::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::PolygonMode::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::PolygonMode::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::PolygonMode::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::PolygonMode* self=dynamic_cast< osg::PolygonMode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::PolygonMode::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::PolygonMode::setMode(osg::PolygonMode::Face face, osg::PolygonMode::Mode mode)
	static int _bind_setMode(lua_State *L) {
		if (!_lg_typecheck_setMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PolygonMode::setMode(osg::PolygonMode::Face face, osg::PolygonMode::Mode mode) function, expected prototype:\nvoid osg::PolygonMode::setMode(osg::PolygonMode::Face face, osg::PolygonMode::Mode mode)\nClass arguments details:\n");
		}

		osg::PolygonMode::Face face=(osg::PolygonMode::Face)lua_tointeger(L,2);
		osg::PolygonMode::Mode mode=(osg::PolygonMode::Mode)lua_tointeger(L,3);

		osg::PolygonMode* self=dynamic_cast< osg::PolygonMode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PolygonMode::setMode(osg::PolygonMode::Face, osg::PolygonMode::Mode)");
		}
		self->setMode(face, mode);

		return 0;
	}

	// osg::PolygonMode::Mode osg::PolygonMode::getMode(osg::PolygonMode::Face face) const
	static int _bind_getMode(lua_State *L) {
		if (!_lg_typecheck_getMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PolygonMode::Mode osg::PolygonMode::getMode(osg::PolygonMode::Face face) const function, expected prototype:\nosg::PolygonMode::Mode osg::PolygonMode::getMode(osg::PolygonMode::Face face) const\nClass arguments details:\n");
		}

		osg::PolygonMode::Face face=(osg::PolygonMode::Face)lua_tointeger(L,2);

		osg::PolygonMode* self=dynamic_cast< osg::PolygonMode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::PolygonMode::Mode osg::PolygonMode::getMode(osg::PolygonMode::Face) const");
		}
		osg::PolygonMode::Mode lret = self->getMode(face);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::PolygonMode::getFrontAndBack() const
	static int _bind_getFrontAndBack(lua_State *L) {
		if (!_lg_typecheck_getFrontAndBack(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::PolygonMode::getFrontAndBack() const function, expected prototype:\nbool osg::PolygonMode::getFrontAndBack() const\nClass arguments details:\n");
		}


		osg::PolygonMode* self=dynamic_cast< osg::PolygonMode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::PolygonMode::getFrontAndBack() const");
		}
		bool lret = self->getFrontAndBack();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::PolygonMode::apply(osg::State & arg1) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PolygonMode::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::PolygonMode::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PolygonMode::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::PolygonMode* self=dynamic_cast< osg::PolygonMode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PolygonMode::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::PolygonMode* LunaTraits< osg::PolygonMode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_PolygonMode::_bind_ctor(L);
}

void LunaTraits< osg::PolygonMode >::_bind_dtor(osg::PolygonMode* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::PolygonMode >::className[] = "PolygonMode";
const char LunaTraits< osg::PolygonMode >::fullName[] = "osg::PolygonMode";
const char LunaTraits< osg::PolygonMode >::moduleName[] = "osg";
const char* LunaTraits< osg::PolygonMode >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::PolygonMode >::hash = 60049159;
const int LunaTraits< osg::PolygonMode >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::PolygonMode >::methods[] = {
	{"cloneType", &luna_wrapper_osg_PolygonMode::_bind_cloneType},
	{"clone", &luna_wrapper_osg_PolygonMode::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_PolygonMode::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_PolygonMode::_bind_libraryName},
	{"className", &luna_wrapper_osg_PolygonMode::_bind_className},
	{"getType", &luna_wrapper_osg_PolygonMode::_bind_getType},
	{"compare", &luna_wrapper_osg_PolygonMode::_bind_compare},
	{"setMode", &luna_wrapper_osg_PolygonMode::_bind_setMode},
	{"getMode", &luna_wrapper_osg_PolygonMode::_bind_getMode},
	{"getFrontAndBack", &luna_wrapper_osg_PolygonMode::_bind_getFrontAndBack},
	{"apply", &luna_wrapper_osg_PolygonMode::_bind_apply},
	{"__eq", &luna_wrapper_osg_PolygonMode::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::PolygonMode >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_PolygonMode::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::PolygonMode >::enumValues[] = {
	{"POINT", osg::PolygonMode::POINT},
	{"LINE", osg::PolygonMode::LINE},
	{"FILL", osg::PolygonMode::FILL},
	{"FRONT_AND_BACK", osg::PolygonMode::FRONT_AND_BACK},
	{"FRONT", osg::PolygonMode::FRONT},
	{"BACK", osg::PolygonMode::BACK},
	{0,0}
};


