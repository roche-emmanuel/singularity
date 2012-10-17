#include <plug_common.h>

class luna_wrapper_osg_Viewport {
public:
	typedef Luna< osg::Viewport > luna_t;

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
		osg::Viewport* ptr= dynamic_cast< osg::Viewport* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Viewport >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
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

	inline static bool _lg_typecheck_setViewport(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
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

	inline static bool _lg_typecheck_valid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_aspectRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeWindowMatrix(lua_State *L) {
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
	// osg::Viewport::Viewport()
	static osg::Viewport* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Viewport::Viewport() function, expected prototype:\nosg::Viewport::Viewport()\nClass arguments details:\n");
		}


		return new osg::Viewport();
	}

	// osg::Viewport::Viewport(double x, double y, double width, double height)
	static osg::Viewport* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Viewport::Viewport(double x, double y, double width, double height) function, expected prototype:\nosg::Viewport::Viewport(double x, double y, double width, double height)\nClass arguments details:\n");
		}

		double x=(double)lua_tonumber(L,1);
		double y=(double)lua_tonumber(L,2);
		double width=(double)lua_tonumber(L,3);
		double height=(double)lua_tonumber(L,4);

		return new osg::Viewport(x, y, width, height);
	}

	// osg::Viewport::Viewport(const osg::Viewport & vp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Viewport* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Viewport::Viewport(const osg::Viewport & vp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Viewport::Viewport(const osg::Viewport & vp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Viewport* vp_ptr=dynamic_cast< osg::Viewport* >(Luna< osg::Referenced >::check(L,1));
		if( !vp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vp in osg::Viewport::Viewport function");
		}
		const osg::Viewport & vp=*vp_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Viewport::Viewport function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::Viewport(vp, copyop);
	}

	// Overload binder for osg::Viewport::Viewport
	static osg::Viewport* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function Viewport, cannot match any of the overloads for function Viewport:\n  Viewport()\n  Viewport(double, double, double, double)\n  Viewport(const osg::Viewport &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Viewport::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Viewport::cloneType() const function, expected prototype:\nosg::Object * osg::Viewport::cloneType() const\nClass arguments details:\n");
		}


		osg::Viewport* self=dynamic_cast< osg::Viewport* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Viewport::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Viewport::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Viewport::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::Viewport::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Viewport::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Viewport* self=dynamic_cast< osg::Viewport* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Viewport::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Viewport::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Viewport::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Viewport::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::Viewport* self=dynamic_cast< osg::Viewport* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Viewport::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Viewport::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Viewport::libraryName() const function, expected prototype:\nconst char * osg::Viewport::libraryName() const\nClass arguments details:\n");
		}


		osg::Viewport* self=dynamic_cast< osg::Viewport* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Viewport::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Viewport::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Viewport::className() const function, expected prototype:\nconst char * osg::Viewport::className() const\nClass arguments details:\n");
		}


		osg::Viewport* self=dynamic_cast< osg::Viewport* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Viewport::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::Viewport::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::Viewport::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::Viewport::getType() const\nClass arguments details:\n");
		}


		osg::Viewport* self=dynamic_cast< osg::Viewport* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::Viewport::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Viewport::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Viewport::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::Viewport::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::Viewport::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::Viewport* self=dynamic_cast< osg::Viewport* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Viewport::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Viewport::setViewport(double x, double y, double width, double height)
	static int _bind_setViewport(lua_State *L) {
		if (!_lg_typecheck_setViewport(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Viewport::setViewport(double x, double y, double width, double height) function, expected prototype:\nvoid osg::Viewport::setViewport(double x, double y, double width, double height)\nClass arguments details:\n");
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		double width=(double)lua_tonumber(L,4);
		double height=(double)lua_tonumber(L,5);

		osg::Viewport* self=dynamic_cast< osg::Viewport* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Viewport::setViewport(double, double, double, double)");
		}
		self->setViewport(x, y, width, height);

		return 0;
	}

	// double & osg::Viewport::x()
	static int _bind_x_overload_1(lua_State *L) {
		if (!_lg_typecheck_x_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double & osg::Viewport::x() function, expected prototype:\ndouble & osg::Viewport::x()\nClass arguments details:\n");
		}


		osg::Viewport* self=dynamic_cast< osg::Viewport* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double & osg::Viewport::x()");
		}
		double & lret = self->x();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::Viewport::x() const
	static int _bind_x_overload_2(lua_State *L) {
		if (!_lg_typecheck_x_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::Viewport::x() const function, expected prototype:\ndouble osg::Viewport::x() const\nClass arguments details:\n");
		}


		osg::Viewport* self=dynamic_cast< osg::Viewport* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::Viewport::x() const");
		}
		double lret = self->x();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Viewport::x
	static int _bind_x(lua_State *L) {
		if (_lg_typecheck_x_overload_1(L)) return _bind_x_overload_1(L);
		if (_lg_typecheck_x_overload_2(L)) return _bind_x_overload_2(L);

		luaL_error(L, "error in function x, cannot match any of the overloads for function x:\n  x()\n  x()\n");
		return 0;
	}

	// double & osg::Viewport::y()
	static int _bind_y_overload_1(lua_State *L) {
		if (!_lg_typecheck_y_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double & osg::Viewport::y() function, expected prototype:\ndouble & osg::Viewport::y()\nClass arguments details:\n");
		}


		osg::Viewport* self=dynamic_cast< osg::Viewport* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double & osg::Viewport::y()");
		}
		double & lret = self->y();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::Viewport::y() const
	static int _bind_y_overload_2(lua_State *L) {
		if (!_lg_typecheck_y_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::Viewport::y() const function, expected prototype:\ndouble osg::Viewport::y() const\nClass arguments details:\n");
		}


		osg::Viewport* self=dynamic_cast< osg::Viewport* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::Viewport::y() const");
		}
		double lret = self->y();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Viewport::y
	static int _bind_y(lua_State *L) {
		if (_lg_typecheck_y_overload_1(L)) return _bind_y_overload_1(L);
		if (_lg_typecheck_y_overload_2(L)) return _bind_y_overload_2(L);

		luaL_error(L, "error in function y, cannot match any of the overloads for function y:\n  y()\n  y()\n");
		return 0;
	}

	// double & osg::Viewport::width()
	static int _bind_width_overload_1(lua_State *L) {
		if (!_lg_typecheck_width_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double & osg::Viewport::width() function, expected prototype:\ndouble & osg::Viewport::width()\nClass arguments details:\n");
		}


		osg::Viewport* self=dynamic_cast< osg::Viewport* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double & osg::Viewport::width()");
		}
		double & lret = self->width();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::Viewport::width() const
	static int _bind_width_overload_2(lua_State *L) {
		if (!_lg_typecheck_width_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::Viewport::width() const function, expected prototype:\ndouble osg::Viewport::width() const\nClass arguments details:\n");
		}


		osg::Viewport* self=dynamic_cast< osg::Viewport* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::Viewport::width() const");
		}
		double lret = self->width();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Viewport::width
	static int _bind_width(lua_State *L) {
		if (_lg_typecheck_width_overload_1(L)) return _bind_width_overload_1(L);
		if (_lg_typecheck_width_overload_2(L)) return _bind_width_overload_2(L);

		luaL_error(L, "error in function width, cannot match any of the overloads for function width:\n  width()\n  width()\n");
		return 0;
	}

	// double & osg::Viewport::height()
	static int _bind_height_overload_1(lua_State *L) {
		if (!_lg_typecheck_height_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double & osg::Viewport::height() function, expected prototype:\ndouble & osg::Viewport::height()\nClass arguments details:\n");
		}


		osg::Viewport* self=dynamic_cast< osg::Viewport* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double & osg::Viewport::height()");
		}
		double & lret = self->height();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::Viewport::height() const
	static int _bind_height_overload_2(lua_State *L) {
		if (!_lg_typecheck_height_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::Viewport::height() const function, expected prototype:\ndouble osg::Viewport::height() const\nClass arguments details:\n");
		}


		osg::Viewport* self=dynamic_cast< osg::Viewport* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::Viewport::height() const");
		}
		double lret = self->height();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Viewport::height
	static int _bind_height(lua_State *L) {
		if (_lg_typecheck_height_overload_1(L)) return _bind_height_overload_1(L);
		if (_lg_typecheck_height_overload_2(L)) return _bind_height_overload_2(L);

		luaL_error(L, "error in function height, cannot match any of the overloads for function height:\n  height()\n  height()\n");
		return 0;
	}

	// bool osg::Viewport::valid() const
	static int _bind_valid(lua_State *L) {
		if (!_lg_typecheck_valid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Viewport::valid() const function, expected prototype:\nbool osg::Viewport::valid() const\nClass arguments details:\n");
		}


		osg::Viewport* self=dynamic_cast< osg::Viewport* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Viewport::valid() const");
		}
		bool lret = self->valid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// double osg::Viewport::aspectRatio() const
	static int _bind_aspectRatio(lua_State *L) {
		if (!_lg_typecheck_aspectRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::Viewport::aspectRatio() const function, expected prototype:\ndouble osg::Viewport::aspectRatio() const\nClass arguments details:\n");
		}


		osg::Viewport* self=dynamic_cast< osg::Viewport* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::Viewport::aspectRatio() const");
		}
		double lret = self->aspectRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const osg::Matrixd osg::Viewport::computeWindowMatrix() const
	static int _bind_computeWindowMatrix(lua_State *L) {
		if (!_lg_typecheck_computeWindowMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Matrixd osg::Viewport::computeWindowMatrix() const function, expected prototype:\nconst osg::Matrixd osg::Viewport::computeWindowMatrix() const\nClass arguments details:\n");
		}


		osg::Viewport* self=dynamic_cast< osg::Viewport* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Matrixd osg::Viewport::computeWindowMatrix() const");
		}
		const osg::Matrixd stack_lret = self->computeWindowMatrix();
		const osg::Matrixd* lret = new const osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// void osg::Viewport::apply(osg::State & ) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Viewport::apply(osg::State & ) const function, expected prototype:\nvoid osg::Viewport::apply(osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Viewport::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Viewport* self=dynamic_cast< osg::Viewport* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Viewport::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::Viewport* LunaTraits< osg::Viewport >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Viewport::_bind_ctor(L);
}

void LunaTraits< osg::Viewport >::_bind_dtor(osg::Viewport* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Viewport >::className[] = "Viewport";
const char LunaTraits< osg::Viewport >::fullName[] = "osg::Viewport";
const char LunaTraits< osg::Viewport >::moduleName[] = "osg";
const char* LunaTraits< osg::Viewport >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::Viewport >::hash = 74927543;
const int LunaTraits< osg::Viewport >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Viewport >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Viewport::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Viewport::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Viewport::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Viewport::_bind_libraryName},
	{"className", &luna_wrapper_osg_Viewport::_bind_className},
	{"getType", &luna_wrapper_osg_Viewport::_bind_getType},
	{"compare", &luna_wrapper_osg_Viewport::_bind_compare},
	{"setViewport", &luna_wrapper_osg_Viewport::_bind_setViewport},
	{"x", &luna_wrapper_osg_Viewport::_bind_x},
	{"y", &luna_wrapper_osg_Viewport::_bind_y},
	{"width", &luna_wrapper_osg_Viewport::_bind_width},
	{"height", &luna_wrapper_osg_Viewport::_bind_height},
	{"valid", &luna_wrapper_osg_Viewport::_bind_valid},
	{"aspectRatio", &luna_wrapper_osg_Viewport::_bind_aspectRatio},
	{"computeWindowMatrix", &luna_wrapper_osg_Viewport::_bind_computeWindowMatrix},
	{"apply", &luna_wrapper_osg_Viewport::_bind_apply},
	{"__eq", &luna_wrapper_osg_Viewport::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Viewport >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Viewport::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Viewport >::enumValues[] = {
	{0,0}
};


