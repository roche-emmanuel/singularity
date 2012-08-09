#include <plug_common.h>

class luna_wrapper_osg_ClipPlane {
public:
	typedef Luna< osg::ClipPlane > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::ClipPlane* ptr= dynamic_cast< osg::ClipPlane* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ClipPlane >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303233) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,86970521) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
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

	inline static bool _lg_typecheck_getMember(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setClipPlane_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,86970521) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setClipPlane_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setClipPlane_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303233) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getClipPlane(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setClipPlaneNum(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getClipPlaneNum(lua_State *L) {
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
	// osg::ClipPlane::ClipPlane()
	static osg::ClipPlane* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClipPlane::ClipPlane() function, expected prototype:\nosg::ClipPlane::ClipPlane()\nClass arguments details:\n");
		}


		return new osg::ClipPlane();
	}

	// osg::ClipPlane::ClipPlane(unsigned int no)
	static osg::ClipPlane* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClipPlane::ClipPlane(unsigned int no) function, expected prototype:\nosg::ClipPlane::ClipPlane(unsigned int no)\nClass arguments details:\n");
		}

		unsigned int no=(unsigned int)lua_tointeger(L,1);

		return new osg::ClipPlane(no);
	}

	// osg::ClipPlane::ClipPlane(unsigned int no, const osg::Vec4d & plane)
	static osg::ClipPlane* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClipPlane::ClipPlane(unsigned int no, const osg::Vec4d & plane) function, expected prototype:\nosg::ClipPlane::ClipPlane(unsigned int no, const osg::Vec4d & plane)\nClass arguments details:\narg 2 ID = 92303233\n");
		}

		unsigned int no=(unsigned int)lua_tointeger(L,1);
		const osg::Vec4d* plane_ptr=(Luna< osg::Vec4d >::check(L,2));
		if( !plane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg plane in osg::ClipPlane::ClipPlane function");
		}
		const osg::Vec4d & plane=*plane_ptr;

		return new osg::ClipPlane(no, plane);
	}

	// osg::ClipPlane::ClipPlane(unsigned int no, const osg::Plane & plane)
	static osg::ClipPlane* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClipPlane::ClipPlane(unsigned int no, const osg::Plane & plane) function, expected prototype:\nosg::ClipPlane::ClipPlane(unsigned int no, const osg::Plane & plane)\nClass arguments details:\narg 2 ID = 86970521\n");
		}

		unsigned int no=(unsigned int)lua_tointeger(L,1);
		const osg::Plane* plane_ptr=(Luna< osg::Plane >::check(L,2));
		if( !plane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg plane in osg::ClipPlane::ClipPlane function");
		}
		const osg::Plane & plane=*plane_ptr;

		return new osg::ClipPlane(no, plane);
	}

	// osg::ClipPlane::ClipPlane(unsigned int no, double a, double b, double c, double d)
	static osg::ClipPlane* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClipPlane::ClipPlane(unsigned int no, double a, double b, double c, double d) function, expected prototype:\nosg::ClipPlane::ClipPlane(unsigned int no, double a, double b, double c, double d)\nClass arguments details:\n");
		}

		unsigned int no=(unsigned int)lua_tointeger(L,1);
		double a=(double)lua_tonumber(L,2);
		double b=(double)lua_tonumber(L,3);
		double c=(double)lua_tonumber(L,4);
		double d=(double)lua_tonumber(L,5);

		return new osg::ClipPlane(no, a, b, c, d);
	}

	// osg::ClipPlane::ClipPlane(const osg::ClipPlane & cp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ClipPlane* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClipPlane::ClipPlane(const osg::ClipPlane & cp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ClipPlane::ClipPlane(const osg::ClipPlane & cp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::ClipPlane* cp_ptr=dynamic_cast< osg::ClipPlane* >(Luna< osg::Referenced >::check(L,1));
		if( !cp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cp in osg::ClipPlane::ClipPlane function");
		}
		const osg::ClipPlane & cp=*cp_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ClipPlane::ClipPlane function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::ClipPlane(cp, copyop);
	}

	// Overload binder for osg::ClipPlane::ClipPlane
	static osg::ClipPlane* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function ClipPlane, cannot match any of the overloads for function ClipPlane:\n  ClipPlane()\n  ClipPlane(unsigned int)\n  ClipPlane(unsigned int, const osg::Vec4d &)\n  ClipPlane(unsigned int, const osg::Plane &)\n  ClipPlane(unsigned int, double, double, double, double)\n  ClipPlane(const osg::ClipPlane &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::ClipPlane::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ClipPlane::cloneType() const function, expected prototype:\nosg::Object * osg::ClipPlane::cloneType() const\nClass arguments details:\n");
		}


		osg::ClipPlane* self=dynamic_cast< osg::ClipPlane* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ClipPlane::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ClipPlane::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ClipPlane::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::ClipPlane::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ClipPlane::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ClipPlane* self=dynamic_cast< osg::ClipPlane* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ClipPlane::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ClipPlane::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ClipPlane::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ClipPlane::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::ClipPlane* self=dynamic_cast< osg::ClipPlane* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ClipPlane::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ClipPlane::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ClipPlane::libraryName() const function, expected prototype:\nconst char * osg::ClipPlane::libraryName() const\nClass arguments details:\n");
		}


		osg::ClipPlane* self=dynamic_cast< osg::ClipPlane* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ClipPlane::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ClipPlane::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ClipPlane::className() const function, expected prototype:\nconst char * osg::ClipPlane::className() const\nClass arguments details:\n");
		}


		osg::ClipPlane* self=dynamic_cast< osg::ClipPlane* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ClipPlane::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::ClipPlane::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::ClipPlane::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::ClipPlane::getType() const\nClass arguments details:\n");
		}


		osg::ClipPlane* self=dynamic_cast< osg::ClipPlane* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::ClipPlane::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::ClipPlane::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::ClipPlane::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::ClipPlane::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::ClipPlane::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::ClipPlane* self=dynamic_cast< osg::ClipPlane* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::ClipPlane::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::ClipPlane::getMember() const
	static int _bind_getMember(lua_State *L) {
		if (!_lg_typecheck_getMember(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::ClipPlane::getMember() const function, expected prototype:\nunsigned int osg::ClipPlane::getMember() const\nClass arguments details:\n");
		}


		osg::ClipPlane* self=dynamic_cast< osg::ClipPlane* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::ClipPlane::getMember() const");
		}
		unsigned int lret = self->getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::ClipPlane::getModeUsage(osg::StateAttribute::ModeUsage & ) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ClipPlane::getModeUsage(osg::StateAttribute::ModeUsage & ) const function, expected prototype:\nbool osg::ClipPlane::getModeUsage(osg::StateAttribute::ModeUsage & ) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ClipPlane::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::ClipPlane* self=dynamic_cast< osg::ClipPlane* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ClipPlane::getModeUsage(osg::StateAttribute::ModeUsage &) const");
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ClipPlane::setClipPlane(const osg::Plane & plane)
	static int _bind_setClipPlane_overload_1(lua_State *L) {
		if (!_lg_typecheck_setClipPlane_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClipPlane::setClipPlane(const osg::Plane & plane) function, expected prototype:\nvoid osg::ClipPlane::setClipPlane(const osg::Plane & plane)\nClass arguments details:\narg 1 ID = 86970521\n");
		}

		const osg::Plane* plane_ptr=(Luna< osg::Plane >::check(L,2));
		if( !plane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg plane in osg::ClipPlane::setClipPlane function");
		}
		const osg::Plane & plane=*plane_ptr;

		osg::ClipPlane* self=dynamic_cast< osg::ClipPlane* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClipPlane::setClipPlane(const osg::Plane &)");
		}
		self->setClipPlane(plane);

		return 0;
	}

	// void osg::ClipPlane::setClipPlane(double a, double b, double c, double d)
	static int _bind_setClipPlane_overload_2(lua_State *L) {
		if (!_lg_typecheck_setClipPlane_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClipPlane::setClipPlane(double a, double b, double c, double d) function, expected prototype:\nvoid osg::ClipPlane::setClipPlane(double a, double b, double c, double d)\nClass arguments details:\n");
		}

		double a=(double)lua_tonumber(L,2);
		double b=(double)lua_tonumber(L,3);
		double c=(double)lua_tonumber(L,4);
		double d=(double)lua_tonumber(L,5);

		osg::ClipPlane* self=dynamic_cast< osg::ClipPlane* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClipPlane::setClipPlane(double, double, double, double)");
		}
		self->setClipPlane(a, b, c, d);

		return 0;
	}

	// void osg::ClipPlane::setClipPlane(const osg::Vec4d & plane)
	static int _bind_setClipPlane_overload_3(lua_State *L) {
		if (!_lg_typecheck_setClipPlane_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClipPlane::setClipPlane(const osg::Vec4d & plane) function, expected prototype:\nvoid osg::ClipPlane::setClipPlane(const osg::Vec4d & plane)\nClass arguments details:\narg 1 ID = 92303233\n");
		}

		const osg::Vec4d* plane_ptr=(Luna< osg::Vec4d >::check(L,2));
		if( !plane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg plane in osg::ClipPlane::setClipPlane function");
		}
		const osg::Vec4d & plane=*plane_ptr;

		osg::ClipPlane* self=dynamic_cast< osg::ClipPlane* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClipPlane::setClipPlane(const osg::Vec4d &)");
		}
		self->setClipPlane(plane);

		return 0;
	}

	// Overload binder for osg::ClipPlane::setClipPlane
	static int _bind_setClipPlane(lua_State *L) {
		if (_lg_typecheck_setClipPlane_overload_1(L)) return _bind_setClipPlane_overload_1(L);
		if (_lg_typecheck_setClipPlane_overload_2(L)) return _bind_setClipPlane_overload_2(L);
		if (_lg_typecheck_setClipPlane_overload_3(L)) return _bind_setClipPlane_overload_3(L);

		luaL_error(L, "error in function setClipPlane, cannot match any of the overloads for function setClipPlane:\n  setClipPlane(const osg::Plane &)\n  setClipPlane(double, double, double, double)\n  setClipPlane(const osg::Vec4d &)\n");
		return 0;
	}

	// const osg::Vec4d & osg::ClipPlane::getClipPlane() const
	static int _bind_getClipPlane(lua_State *L) {
		if (!_lg_typecheck_getClipPlane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec4d & osg::ClipPlane::getClipPlane() const function, expected prototype:\nconst osg::Vec4d & osg::ClipPlane::getClipPlane() const\nClass arguments details:\n");
		}


		osg::ClipPlane* self=dynamic_cast< osg::ClipPlane* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec4d & osg::ClipPlane::getClipPlane() const");
		}
		const osg::Vec4d* lret = &self->getClipPlane();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4d >::push(L,lret,false);

		return 1;
	}

	// void osg::ClipPlane::setClipPlaneNum(unsigned int num)
	static int _bind_setClipPlaneNum(lua_State *L) {
		if (!_lg_typecheck_setClipPlaneNum(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClipPlane::setClipPlaneNum(unsigned int num) function, expected prototype:\nvoid osg::ClipPlane::setClipPlaneNum(unsigned int num)\nClass arguments details:\n");
		}

		unsigned int num=(unsigned int)lua_tointeger(L,2);

		osg::ClipPlane* self=dynamic_cast< osg::ClipPlane* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClipPlane::setClipPlaneNum(unsigned int)");
		}
		self->setClipPlaneNum(num);

		return 0;
	}

	// unsigned int osg::ClipPlane::getClipPlaneNum() const
	static int _bind_getClipPlaneNum(lua_State *L) {
		if (!_lg_typecheck_getClipPlaneNum(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::ClipPlane::getClipPlaneNum() const function, expected prototype:\nunsigned int osg::ClipPlane::getClipPlaneNum() const\nClass arguments details:\n");
		}


		osg::ClipPlane* self=dynamic_cast< osg::ClipPlane* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::ClipPlane::getClipPlaneNum() const");
		}
		unsigned int lret = self->getClipPlaneNum();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ClipPlane::apply(osg::State & state) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClipPlane::apply(osg::State & state) const function, expected prototype:\nvoid osg::ClipPlane::apply(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::ClipPlane::apply function");
		}
		osg::State & state=*state_ptr;

		osg::ClipPlane* self=dynamic_cast< osg::ClipPlane* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClipPlane::apply(osg::State &) const");
		}
		self->apply(state);

		return 0;
	}


	// Operator binds:

};

osg::ClipPlane* LunaTraits< osg::ClipPlane >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ClipPlane::_bind_ctor(L);
}

void LunaTraits< osg::ClipPlane >::_bind_dtor(osg::ClipPlane* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ClipPlane >::className[] = "ClipPlane";
const char LunaTraits< osg::ClipPlane >::fullName[] = "osg::ClipPlane";
const char LunaTraits< osg::ClipPlane >::moduleName[] = "osg";
const char* LunaTraits< osg::ClipPlane >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::ClipPlane >::hash = 52621767;
const int LunaTraits< osg::ClipPlane >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ClipPlane >::methods[] = {
	{"cloneType", &luna_wrapper_osg_ClipPlane::_bind_cloneType},
	{"clone", &luna_wrapper_osg_ClipPlane::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_ClipPlane::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_ClipPlane::_bind_libraryName},
	{"className", &luna_wrapper_osg_ClipPlane::_bind_className},
	{"getType", &luna_wrapper_osg_ClipPlane::_bind_getType},
	{"compare", &luna_wrapper_osg_ClipPlane::_bind_compare},
	{"getMember", &luna_wrapper_osg_ClipPlane::_bind_getMember},
	{"getModeUsage", &luna_wrapper_osg_ClipPlane::_bind_getModeUsage},
	{"setClipPlane", &luna_wrapper_osg_ClipPlane::_bind_setClipPlane},
	{"getClipPlane", &luna_wrapper_osg_ClipPlane::_bind_getClipPlane},
	{"setClipPlaneNum", &luna_wrapper_osg_ClipPlane::_bind_setClipPlaneNum},
	{"getClipPlaneNum", &luna_wrapper_osg_ClipPlane::_bind_getClipPlaneNum},
	{"apply", &luna_wrapper_osg_ClipPlane::_bind_apply},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ClipPlane >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ClipPlane::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ClipPlane >::enumValues[] = {
	{0,0}
};

