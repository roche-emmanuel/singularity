#include <plug_common.h>

class luna_wrapper_osg_Scissor {
public:
	typedef Luna< osg::Scissor > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::Scissor* ptr= dynamic_cast< osg::Scissor* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Scissor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
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

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setScissor(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScissor(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_x_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_x_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_y_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_y_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_width_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_width_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_height_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_height_overload_2(lua_State *L) {
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
	// osg::Scissor::Scissor()
	static osg::Scissor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Scissor::Scissor() function, expected prototype:\nosg::Scissor::Scissor()\nClass arguments details:\n");
		}


		return new osg::Scissor();
	}

	// osg::Scissor::Scissor(int x, int y, int width, int height)
	static osg::Scissor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Scissor::Scissor(int x, int y, int width, int height) function, expected prototype:\nosg::Scissor::Scissor(int x, int y, int width, int height)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,1);
		int y=(int)lua_tointeger(L,2);
		int width=(int)lua_tointeger(L,3);
		int height=(int)lua_tointeger(L,4);

		return new osg::Scissor(x, y, width, height);
	}

	// osg::Scissor::Scissor(const osg::Scissor & vp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Scissor* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Scissor::Scissor(const osg::Scissor & vp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Scissor::Scissor(const osg::Scissor & vp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Scissor* vp_ptr=dynamic_cast< osg::Scissor* >(Luna< osg::Referenced >::check(L,1));
		if( !vp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vp in osg::Scissor::Scissor function");
		}
		const osg::Scissor & vp=*vp_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Scissor::Scissor function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::Scissor(vp, copyop);
	}

	// Overload binder for osg::Scissor::Scissor
	static osg::Scissor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function Scissor, cannot match any of the overloads for function Scissor:\n  Scissor()\n  Scissor(int, int, int, int)\n  Scissor(const osg::Scissor &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Scissor::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Scissor::cloneType() const function, expected prototype:\nosg::Object * osg::Scissor::cloneType() const\nClass arguments details:\n");
		}


		osg::Scissor* self=dynamic_cast< osg::Scissor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Scissor::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Scissor::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Scissor::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::Scissor::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Scissor::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Scissor* self=dynamic_cast< osg::Scissor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Scissor::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Scissor::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Scissor::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Scissor::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::Scissor* self=dynamic_cast< osg::Scissor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Scissor::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Scissor::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Scissor::libraryName() const function, expected prototype:\nconst char * osg::Scissor::libraryName() const\nClass arguments details:\n");
		}


		osg::Scissor* self=dynamic_cast< osg::Scissor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Scissor::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Scissor::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Scissor::className() const function, expected prototype:\nconst char * osg::Scissor::className() const\nClass arguments details:\n");
		}


		osg::Scissor* self=dynamic_cast< osg::Scissor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Scissor::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::Scissor::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::Scissor::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::Scissor::getType() const\nClass arguments details:\n");
		}


		osg::Scissor* self=dynamic_cast< osg::Scissor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::Scissor::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Scissor::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Scissor::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::Scissor::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::Scissor::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::Scissor* self=dynamic_cast< osg::Scissor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Scissor::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Scissor::getModeUsage(osg::StateAttribute::ModeUsage & ) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Scissor::getModeUsage(osg::StateAttribute::ModeUsage & ) const function, expected prototype:\nbool osg::Scissor::getModeUsage(osg::StateAttribute::ModeUsage & ) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Scissor::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::Scissor* self=dynamic_cast< osg::Scissor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Scissor::getModeUsage(osg::StateAttribute::ModeUsage &) const");
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Scissor::setScissor(int x, int y, int width, int height)
	static int _bind_setScissor(lua_State *L) {
		if (!_lg_typecheck_setScissor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Scissor::setScissor(int x, int y, int width, int height) function, expected prototype:\nvoid osg::Scissor::setScissor(int x, int y, int width, int height)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		osg::Scissor* self=dynamic_cast< osg::Scissor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Scissor::setScissor(int, int, int, int)");
		}
		self->setScissor(x, y, width, height);

		return 0;
	}

	// void osg::Scissor::getScissor(int & x, int & y, int & width, int & height) const
	static int _bind_getScissor(lua_State *L) {
		if (!_lg_typecheck_getScissor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Scissor::getScissor(int & x, int & y, int & width, int & height) const function, expected prototype:\nvoid osg::Scissor::getScissor(int & x, int & y, int & width, int & height) const\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		osg::Scissor* self=dynamic_cast< osg::Scissor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Scissor::getScissor(int &, int &, int &, int &) const");
		}
		self->getScissor(x, y, width, height);

		return 0;
	}

	// int & osg::Scissor::x()
	static int _bind_x_overload_1(lua_State *L) {
		if (!_lg_typecheck_x_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int & osg::Scissor::x() function, expected prototype:\nint & osg::Scissor::x()\nClass arguments details:\n");
		}


		osg::Scissor* self=dynamic_cast< osg::Scissor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int & osg::Scissor::x()");
		}
		int & lret = self->x();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Scissor::x() const
	static int _bind_x_overload_2(lua_State *L) {
		if (!_lg_typecheck_x_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Scissor::x() const function, expected prototype:\nint osg::Scissor::x() const\nClass arguments details:\n");
		}


		osg::Scissor* self=dynamic_cast< osg::Scissor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Scissor::x() const");
		}
		int lret = self->x();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Scissor::x
	static int _bind_x(lua_State *L) {
		if (_lg_typecheck_x_overload_1(L)) return _bind_x_overload_1(L);
		if (_lg_typecheck_x_overload_2(L)) return _bind_x_overload_2(L);

		luaL_error(L, "error in function x, cannot match any of the overloads for function x:\n  x()\n  x()\n");
		return 0;
	}

	// int & osg::Scissor::y()
	static int _bind_y_overload_1(lua_State *L) {
		if (!_lg_typecheck_y_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int & osg::Scissor::y() function, expected prototype:\nint & osg::Scissor::y()\nClass arguments details:\n");
		}


		osg::Scissor* self=dynamic_cast< osg::Scissor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int & osg::Scissor::y()");
		}
		int & lret = self->y();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Scissor::y() const
	static int _bind_y_overload_2(lua_State *L) {
		if (!_lg_typecheck_y_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Scissor::y() const function, expected prototype:\nint osg::Scissor::y() const\nClass arguments details:\n");
		}


		osg::Scissor* self=dynamic_cast< osg::Scissor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Scissor::y() const");
		}
		int lret = self->y();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Scissor::y
	static int _bind_y(lua_State *L) {
		if (_lg_typecheck_y_overload_1(L)) return _bind_y_overload_1(L);
		if (_lg_typecheck_y_overload_2(L)) return _bind_y_overload_2(L);

		luaL_error(L, "error in function y, cannot match any of the overloads for function y:\n  y()\n  y()\n");
		return 0;
	}

	// int & osg::Scissor::width()
	static int _bind_width_overload_1(lua_State *L) {
		if (!_lg_typecheck_width_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int & osg::Scissor::width() function, expected prototype:\nint & osg::Scissor::width()\nClass arguments details:\n");
		}


		osg::Scissor* self=dynamic_cast< osg::Scissor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int & osg::Scissor::width()");
		}
		int & lret = self->width();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Scissor::width() const
	static int _bind_width_overload_2(lua_State *L) {
		if (!_lg_typecheck_width_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Scissor::width() const function, expected prototype:\nint osg::Scissor::width() const\nClass arguments details:\n");
		}


		osg::Scissor* self=dynamic_cast< osg::Scissor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Scissor::width() const");
		}
		int lret = self->width();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Scissor::width
	static int _bind_width(lua_State *L) {
		if (_lg_typecheck_width_overload_1(L)) return _bind_width_overload_1(L);
		if (_lg_typecheck_width_overload_2(L)) return _bind_width_overload_2(L);

		luaL_error(L, "error in function width, cannot match any of the overloads for function width:\n  width()\n  width()\n");
		return 0;
	}

	// int & osg::Scissor::height()
	static int _bind_height_overload_1(lua_State *L) {
		if (!_lg_typecheck_height_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int & osg::Scissor::height() function, expected prototype:\nint & osg::Scissor::height()\nClass arguments details:\n");
		}


		osg::Scissor* self=dynamic_cast< osg::Scissor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int & osg::Scissor::height()");
		}
		int & lret = self->height();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Scissor::height() const
	static int _bind_height_overload_2(lua_State *L) {
		if (!_lg_typecheck_height_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Scissor::height() const function, expected prototype:\nint osg::Scissor::height() const\nClass arguments details:\n");
		}


		osg::Scissor* self=dynamic_cast< osg::Scissor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Scissor::height() const");
		}
		int lret = self->height();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Scissor::height
	static int _bind_height(lua_State *L) {
		if (_lg_typecheck_height_overload_1(L)) return _bind_height_overload_1(L);
		if (_lg_typecheck_height_overload_2(L)) return _bind_height_overload_2(L);

		luaL_error(L, "error in function height, cannot match any of the overloads for function height:\n  height()\n  height()\n");
		return 0;
	}

	// void osg::Scissor::apply(osg::State & ) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Scissor::apply(osg::State & ) const function, expected prototype:\nvoid osg::Scissor::apply(osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Scissor::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Scissor* self=dynamic_cast< osg::Scissor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Scissor::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::Scissor* LunaTraits< osg::Scissor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Scissor::_bind_ctor(L);
}

void LunaTraits< osg::Scissor >::_bind_dtor(osg::Scissor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Scissor >::className[] = "Scissor";
const char LunaTraits< osg::Scissor >::fullName[] = "osg::Scissor";
const char LunaTraits< osg::Scissor >::moduleName[] = "osg";
const char* LunaTraits< osg::Scissor >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::Scissor >::hash = 91064026;
const int LunaTraits< osg::Scissor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Scissor >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Scissor::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Scissor::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Scissor::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Scissor::_bind_libraryName},
	{"className", &luna_wrapper_osg_Scissor::_bind_className},
	{"getType", &luna_wrapper_osg_Scissor::_bind_getType},
	{"compare", &luna_wrapper_osg_Scissor::_bind_compare},
	{"getModeUsage", &luna_wrapper_osg_Scissor::_bind_getModeUsage},
	{"setScissor", &luna_wrapper_osg_Scissor::_bind_setScissor},
	{"getScissor", &luna_wrapper_osg_Scissor::_bind_getScissor},
	{"x", &luna_wrapper_osg_Scissor::_bind_x},
	{"y", &luna_wrapper_osg_Scissor::_bind_y},
	{"width", &luna_wrapper_osg_Scissor::_bind_width},
	{"height", &luna_wrapper_osg_Scissor::_bind_height},
	{"apply", &luna_wrapper_osg_Scissor::_bind_apply},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Scissor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Scissor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Scissor >::enumValues[] = {
	{0,0}
};


