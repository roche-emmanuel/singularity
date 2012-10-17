#include <plug_common.h>

class luna_wrapper_osg_Billboard {
public:
	typedef Luna< osg::Billboard > luna_t;

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
		osg::Billboard* ptr= dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Billboard >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAxis(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAxis(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNormal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPosition(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPositionList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75373010) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPositionList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPositionList_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addDrawable_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addDrawable_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeDrawable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeMatrix(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Billboard::Billboard()
	static osg::Billboard* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Billboard::Billboard() function, expected prototype:\nosg::Billboard::Billboard()\nClass arguments details:\n");
		}


		return new osg::Billboard();
	}

	// osg::Billboard::Billboard(const osg::Billboard & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Billboard* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Billboard::Billboard(const osg::Billboard & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Billboard::Billboard(const osg::Billboard & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Billboard* _arg1_ptr=dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Billboard::Billboard function");
		}
		const osg::Billboard & _arg1=*_arg1_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Billboard::Billboard function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::Billboard(_arg1, copyop);
	}

	// Overload binder for osg::Billboard::Billboard
	static osg::Billboard* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Billboard, cannot match any of the overloads for function Billboard:\n  Billboard()\n  Billboard(const osg::Billboard &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Billboard::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Billboard::cloneType() const function, expected prototype:\nosg::Object * osg::Billboard::cloneType() const\nClass arguments details:\n");
		}


		osg::Billboard* self=dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Billboard::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Billboard::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Billboard::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::Billboard::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Billboard::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::Billboard* self=dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Billboard::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Billboard::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Billboard::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Billboard::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::Billboard* self=dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Billboard::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Billboard::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Billboard::className() const function, expected prototype:\nconst char * osg::Billboard::className() const\nClass arguments details:\n");
		}


		osg::Billboard* self=dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Billboard::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Billboard::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Billboard::libraryName() const function, expected prototype:\nconst char * osg::Billboard::libraryName() const\nClass arguments details:\n");
		}


		osg::Billboard* self=dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Billboard::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Billboard::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Billboard::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::Billboard::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::Billboard::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::Billboard* self=dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Billboard::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}

	// void osg::Billboard::setMode(osg::Billboard::Mode mode)
	static int _bind_setMode(lua_State *L) {
		if (!_lg_typecheck_setMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Billboard::setMode(osg::Billboard::Mode mode) function, expected prototype:\nvoid osg::Billboard::setMode(osg::Billboard::Mode mode)\nClass arguments details:\n");
		}

		osg::Billboard::Mode mode=(osg::Billboard::Mode)lua_tointeger(L,2);

		osg::Billboard* self=dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Billboard::setMode(osg::Billboard::Mode)");
		}
		self->setMode(mode);

		return 0;
	}

	// osg::Billboard::Mode osg::Billboard::getMode() const
	static int _bind_getMode(lua_State *L) {
		if (!_lg_typecheck_getMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Billboard::Mode osg::Billboard::getMode() const function, expected prototype:\nosg::Billboard::Mode osg::Billboard::getMode() const\nClass arguments details:\n");
		}


		osg::Billboard* self=dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Billboard::Mode osg::Billboard::getMode() const");
		}
		osg::Billboard::Mode lret = self->getMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Billboard::setAxis(const osg::Vec3f & axis)
	static int _bind_setAxis(lua_State *L) {
		if (!_lg_typecheck_setAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Billboard::setAxis(const osg::Vec3f & axis) function, expected prototype:\nvoid osg::Billboard::setAxis(const osg::Vec3f & axis)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* axis_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in osg::Billboard::setAxis function");
		}
		const osg::Vec3f & axis=*axis_ptr;

		osg::Billboard* self=dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Billboard::setAxis(const osg::Vec3f &)");
		}
		self->setAxis(axis);

		return 0;
	}

	// const osg::Vec3f & osg::Billboard::getAxis() const
	static int _bind_getAxis(lua_State *L) {
		if (!_lg_typecheck_getAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osg::Billboard::getAxis() const function, expected prototype:\nconst osg::Vec3f & osg::Billboard::getAxis() const\nClass arguments details:\n");
		}


		osg::Billboard* self=dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osg::Billboard::getAxis() const");
		}
		const osg::Vec3f* lret = &self->getAxis();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osg::Billboard::setNormal(const osg::Vec3f & normal)
	static int _bind_setNormal(lua_State *L) {
		if (!_lg_typecheck_setNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Billboard::setNormal(const osg::Vec3f & normal) function, expected prototype:\nvoid osg::Billboard::setNormal(const osg::Vec3f & normal)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* normal_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !normal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normal in osg::Billboard::setNormal function");
		}
		const osg::Vec3f & normal=*normal_ptr;

		osg::Billboard* self=dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Billboard::setNormal(const osg::Vec3f &)");
		}
		self->setNormal(normal);

		return 0;
	}

	// const osg::Vec3f & osg::Billboard::getNormal() const
	static int _bind_getNormal(lua_State *L) {
		if (!_lg_typecheck_getNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osg::Billboard::getNormal() const function, expected prototype:\nconst osg::Vec3f & osg::Billboard::getNormal() const\nClass arguments details:\n");
		}


		osg::Billboard* self=dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osg::Billboard::getNormal() const");
		}
		const osg::Vec3f* lret = &self->getNormal();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osg::Billboard::setPosition(unsigned int i, const osg::Vec3f & pos)
	static int _bind_setPosition(lua_State *L) {
		if (!_lg_typecheck_setPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Billboard::setPosition(unsigned int i, const osg::Vec3f & pos) function, expected prototype:\nvoid osg::Billboard::setPosition(unsigned int i, const osg::Vec3f & pos)\nClass arguments details:\narg 2 ID = 92303204\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		const osg::Vec3f* pos_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in osg::Billboard::setPosition function");
		}
		const osg::Vec3f & pos=*pos_ptr;

		osg::Billboard* self=dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Billboard::setPosition(unsigned int, const osg::Vec3f &)");
		}
		self->setPosition(i, pos);

		return 0;
	}

	// const osg::Vec3f & osg::Billboard::getPosition(unsigned int i) const
	static int _bind_getPosition(lua_State *L) {
		if (!_lg_typecheck_getPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osg::Billboard::getPosition(unsigned int i) const function, expected prototype:\nconst osg::Vec3f & osg::Billboard::getPosition(unsigned int i) const\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::Billboard* self=dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osg::Billboard::getPosition(unsigned int) const");
		}
		const osg::Vec3f* lret = &self->getPosition(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osg::Billboard::setPositionList(osg::Billboard::PositionList & pl)
	static int _bind_setPositionList(lua_State *L) {
		if (!_lg_typecheck_setPositionList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Billboard::setPositionList(osg::Billboard::PositionList & pl) function, expected prototype:\nvoid osg::Billboard::setPositionList(osg::Billboard::PositionList & pl)\nClass arguments details:\narg 1 ID = 75373010\n");
		}

		osg::Billboard::PositionList* pl_ptr=(Luna< osg::Billboard::PositionList >::check(L,2));
		if( !pl_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pl in osg::Billboard::setPositionList function");
		}
		osg::Billboard::PositionList & pl=*pl_ptr;

		osg::Billboard* self=dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Billboard::setPositionList(osg::Billboard::PositionList &)");
		}
		self->setPositionList(pl);

		return 0;
	}

	// osg::Billboard::PositionList & osg::Billboard::getPositionList()
	static int _bind_getPositionList_overload_1(lua_State *L) {
		if (!_lg_typecheck_getPositionList_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Billboard::PositionList & osg::Billboard::getPositionList() function, expected prototype:\nosg::Billboard::PositionList & osg::Billboard::getPositionList()\nClass arguments details:\n");
		}


		osg::Billboard* self=dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Billboard::PositionList & osg::Billboard::getPositionList()");
		}
		const osg::Billboard::PositionList* lret = &self->getPositionList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Billboard::PositionList >::push(L,lret,false);

		return 1;
	}

	// const osg::Billboard::PositionList & osg::Billboard::getPositionList() const
	static int _bind_getPositionList_overload_2(lua_State *L) {
		if (!_lg_typecheck_getPositionList_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Billboard::PositionList & osg::Billboard::getPositionList() const function, expected prototype:\nconst osg::Billboard::PositionList & osg::Billboard::getPositionList() const\nClass arguments details:\n");
		}


		osg::Billboard* self=dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Billboard::PositionList & osg::Billboard::getPositionList() const");
		}
		const osg::Billboard::PositionList* lret = &self->getPositionList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Billboard::PositionList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Billboard::getPositionList
	static int _bind_getPositionList(lua_State *L) {
		if (_lg_typecheck_getPositionList_overload_1(L)) return _bind_getPositionList_overload_1(L);
		if (_lg_typecheck_getPositionList_overload_2(L)) return _bind_getPositionList_overload_2(L);

		luaL_error(L, "error in function getPositionList, cannot match any of the overloads for function getPositionList:\n  getPositionList()\n  getPositionList()\n");
		return 0;
	}

	// bool osg::Billboard::addDrawable(osg::Drawable * gset)
	static int _bind_addDrawable_overload_1(lua_State *L) {
		if (!_lg_typecheck_addDrawable_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Billboard::addDrawable(osg::Drawable * gset) function, expected prototype:\nbool osg::Billboard::addDrawable(osg::Drawable * gset)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Drawable* gset=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,2));

		osg::Billboard* self=dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Billboard::addDrawable(osg::Drawable *)");
		}
		bool lret = self->addDrawable(gset);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Billboard::addDrawable(osg::Drawable * gset, const osg::Vec3f & pos)
	static int _bind_addDrawable_overload_2(lua_State *L) {
		if (!_lg_typecheck_addDrawable_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Billboard::addDrawable(osg::Drawable * gset, const osg::Vec3f & pos) function, expected prototype:\nbool osg::Billboard::addDrawable(osg::Drawable * gset, const osg::Vec3f & pos)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 92303204\n");
		}

		osg::Drawable* gset=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,2));
		const osg::Vec3f* pos_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in osg::Billboard::addDrawable function");
		}
		const osg::Vec3f & pos=*pos_ptr;

		osg::Billboard* self=dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Billboard::addDrawable(osg::Drawable *, const osg::Vec3f &)");
		}
		bool lret = self->addDrawable(gset, pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::Billboard::addDrawable
	static int _bind_addDrawable(lua_State *L) {
		if (_lg_typecheck_addDrawable_overload_1(L)) return _bind_addDrawable_overload_1(L);
		if (_lg_typecheck_addDrawable_overload_2(L)) return _bind_addDrawable_overload_2(L);

		luaL_error(L, "error in function addDrawable, cannot match any of the overloads for function addDrawable:\n  addDrawable(osg::Drawable *)\n  addDrawable(osg::Drawable *, const osg::Vec3f &)\n");
		return 0;
	}

	// bool osg::Billboard::removeDrawable(osg::Drawable * gset)
	static int _bind_removeDrawable(lua_State *L) {
		if (!_lg_typecheck_removeDrawable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Billboard::removeDrawable(osg::Drawable * gset) function, expected prototype:\nbool osg::Billboard::removeDrawable(osg::Drawable * gset)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Drawable* gset=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,2));

		osg::Billboard* self=dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Billboard::removeDrawable(osg::Drawable *)");
		}
		bool lret = self->removeDrawable(gset);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Billboard::computeMatrix(osg::Matrixd & modelview, const osg::Vec3f & eye_local, const osg::Vec3f & pos_local) const
	static int _bind_computeMatrix(lua_State *L) {
		if (!_lg_typecheck_computeMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Billboard::computeMatrix(osg::Matrixd & modelview, const osg::Vec3f & eye_local, const osg::Vec3f & pos_local) const function, expected prototype:\nbool osg::Billboard::computeMatrix(osg::Matrixd & modelview, const osg::Vec3f & eye_local, const osg::Vec3f & pos_local) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 92303204\narg 3 ID = 92303204\n");
		}

		osg::Matrixd* modelview_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !modelview_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg modelview in osg::Billboard::computeMatrix function");
		}
		osg::Matrixd & modelview=*modelview_ptr;
		const osg::Vec3f* eye_local_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !eye_local_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye_local in osg::Billboard::computeMatrix function");
		}
		const osg::Vec3f & eye_local=*eye_local_ptr;
		const osg::Vec3f* pos_local_ptr=(Luna< osg::Vec3f >::check(L,4));
		if( !pos_local_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos_local in osg::Billboard::computeMatrix function");
		}
		const osg::Vec3f & pos_local=*pos_local_ptr;

		osg::Billboard* self=dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Billboard::computeMatrix(osg::Matrixd &, const osg::Vec3f &, const osg::Vec3f &) const");
		}
		bool lret = self->computeMatrix(modelview, eye_local, pos_local);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::BoundingSpheref osg::Billboard::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BoundingSpheref osg::Billboard::computeBound() const function, expected prototype:\nosg::BoundingSpheref osg::Billboard::computeBound() const\nClass arguments details:\n");
		}


		osg::Billboard* self=dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BoundingSpheref osg::Billboard::computeBound() const");
		}
		osg::BoundingSpheref stack_lret = self->computeBound();
		osg::BoundingSpheref* lret = new osg::BoundingSpheref(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSpheref >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osg::Billboard* LunaTraits< osg::Billboard >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Billboard::_bind_ctor(L);
}

void LunaTraits< osg::Billboard >::_bind_dtor(osg::Billboard* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Billboard >::className[] = "Billboard";
const char LunaTraits< osg::Billboard >::fullName[] = "osg::Billboard";
const char LunaTraits< osg::Billboard >::moduleName[] = "osg";
const char* LunaTraits< osg::Billboard >::parents[] = {"osg.Geode", 0};
const int LunaTraits< osg::Billboard >::hash = 88531180;
const int LunaTraits< osg::Billboard >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Billboard >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Billboard::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Billboard::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Billboard::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_Billboard::_bind_className},
	{"libraryName", &luna_wrapper_osg_Billboard::_bind_libraryName},
	{"accept", &luna_wrapper_osg_Billboard::_bind_accept},
	{"setMode", &luna_wrapper_osg_Billboard::_bind_setMode},
	{"getMode", &luna_wrapper_osg_Billboard::_bind_getMode},
	{"setAxis", &luna_wrapper_osg_Billboard::_bind_setAxis},
	{"getAxis", &luna_wrapper_osg_Billboard::_bind_getAxis},
	{"setNormal", &luna_wrapper_osg_Billboard::_bind_setNormal},
	{"getNormal", &luna_wrapper_osg_Billboard::_bind_getNormal},
	{"setPosition", &luna_wrapper_osg_Billboard::_bind_setPosition},
	{"getPosition", &luna_wrapper_osg_Billboard::_bind_getPosition},
	{"setPositionList", &luna_wrapper_osg_Billboard::_bind_setPositionList},
	{"getPositionList", &luna_wrapper_osg_Billboard::_bind_getPositionList},
	{"addDrawable", &luna_wrapper_osg_Billboard::_bind_addDrawable},
	{"removeDrawable", &luna_wrapper_osg_Billboard::_bind_removeDrawable},
	{"computeMatrix", &luna_wrapper_osg_Billboard::_bind_computeMatrix},
	{"computeBound", &luna_wrapper_osg_Billboard::_bind_computeBound},
	{"__eq", &luna_wrapper_osg_Billboard::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Billboard >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Billboard::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Billboard >::enumValues[] = {
	{"POINT_ROT_EYE", osg::Billboard::POINT_ROT_EYE},
	{"POINT_ROT_WORLD", osg::Billboard::POINT_ROT_WORLD},
	{"AXIAL_ROT", osg::Billboard::AXIAL_ROT},
	{0,0}
};


