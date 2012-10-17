#include <plug_common.h>

class luna_wrapper_osg_TexGen {
public:
	typedef Luna< osg::TexGen > luna_t;

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
		osg::TexGen* ptr= dynamic_cast< osg::TexGen* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::TexGen >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_isTextureAttribute(lua_State *L) {
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

	inline static bool _lg_typecheck_apply(lua_State *L) {
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

	inline static bool _lg_typecheck_setPlane(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,86970521) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPlane_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPlane_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPlanesFromMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::TexGen::TexGen()
	static osg::TexGen* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TexGen::TexGen() function, expected prototype:\nosg::TexGen::TexGen()\nClass arguments details:\n");
		}


		return new osg::TexGen();
	}

	// osg::TexGen::TexGen(const osg::TexGen & texgen, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::TexGen* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TexGen::TexGen(const osg::TexGen & texgen, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::TexGen::TexGen(const osg::TexGen & texgen, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::TexGen* texgen_ptr=dynamic_cast< osg::TexGen* >(Luna< osg::Referenced >::check(L,1));
		if( !texgen_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg texgen in osg::TexGen::TexGen function");
		}
		const osg::TexGen & texgen=*texgen_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::TexGen::TexGen function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::TexGen(texgen, copyop);
	}

	// Overload binder for osg::TexGen::TexGen
	static osg::TexGen* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TexGen, cannot match any of the overloads for function TexGen:\n  TexGen()\n  TexGen(const osg::TexGen &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::TexGen::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TexGen::cloneType() const function, expected prototype:\nosg::Object * osg::TexGen::cloneType() const\nClass arguments details:\n");
		}


		osg::TexGen* self=dynamic_cast< osg::TexGen* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::TexGen::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::TexGen::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TexGen::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::TexGen::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TexGen::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::TexGen* self=dynamic_cast< osg::TexGen* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::TexGen::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::TexGen::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::TexGen::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::TexGen::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::TexGen* self=dynamic_cast< osg::TexGen* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::TexGen::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::TexGen::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::TexGen::libraryName() const function, expected prototype:\nconst char * osg::TexGen::libraryName() const\nClass arguments details:\n");
		}


		osg::TexGen* self=dynamic_cast< osg::TexGen* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::TexGen::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::TexGen::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::TexGen::className() const function, expected prototype:\nconst char * osg::TexGen::className() const\nClass arguments details:\n");
		}


		osg::TexGen* self=dynamic_cast< osg::TexGen* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::TexGen::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::TexGen::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::TexGen::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::TexGen::getType() const\nClass arguments details:\n");
		}


		osg::TexGen* self=dynamic_cast< osg::TexGen* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::TexGen::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::TexGen::isTextureAttribute() const
	static int _bind_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_isTextureAttribute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::TexGen::isTextureAttribute() const function, expected prototype:\nbool osg::TexGen::isTextureAttribute() const\nClass arguments details:\n");
		}


		osg::TexGen* self=dynamic_cast< osg::TexGen* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::TexGen::isTextureAttribute() const");
		}
		bool lret = self->isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int osg::TexGen::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::TexGen::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::TexGen::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::TexGen::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::TexGen* self=dynamic_cast< osg::TexGen* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::TexGen::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::TexGen::getModeUsage(osg::StateAttribute::ModeUsage & ) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::TexGen::getModeUsage(osg::StateAttribute::ModeUsage & ) const function, expected prototype:\nbool osg::TexGen::getModeUsage(osg::StateAttribute::ModeUsage & ) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TexGen::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::TexGen* self=dynamic_cast< osg::TexGen* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::TexGen::getModeUsage(osg::StateAttribute::ModeUsage &) const");
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::TexGen::apply(osg::State & ) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexGen::apply(osg::State & ) const function, expected prototype:\nvoid osg::TexGen::apply(osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TexGen::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::TexGen* self=dynamic_cast< osg::TexGen* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexGen::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::TexGen::setMode(osg::TexGen::Mode mode)
	static int _bind_setMode(lua_State *L) {
		if (!_lg_typecheck_setMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexGen::setMode(osg::TexGen::Mode mode) function, expected prototype:\nvoid osg::TexGen::setMode(osg::TexGen::Mode mode)\nClass arguments details:\n");
		}

		osg::TexGen::Mode mode=(osg::TexGen::Mode)lua_tointeger(L,2);

		osg::TexGen* self=dynamic_cast< osg::TexGen* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexGen::setMode(osg::TexGen::Mode)");
		}
		self->setMode(mode);

		return 0;
	}

	// osg::TexGen::Mode osg::TexGen::getMode() const
	static int _bind_getMode(lua_State *L) {
		if (!_lg_typecheck_getMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TexGen::Mode osg::TexGen::getMode() const function, expected prototype:\nosg::TexGen::Mode osg::TexGen::getMode() const\nClass arguments details:\n");
		}


		osg::TexGen* self=dynamic_cast< osg::TexGen* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::TexGen::Mode osg::TexGen::getMode() const");
		}
		osg::TexGen::Mode lret = self->getMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TexGen::setPlane(osg::TexGen::Coord which, const osg::Plane & plane)
	static int _bind_setPlane(lua_State *L) {
		if (!_lg_typecheck_setPlane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexGen::setPlane(osg::TexGen::Coord which, const osg::Plane & plane) function, expected prototype:\nvoid osg::TexGen::setPlane(osg::TexGen::Coord which, const osg::Plane & plane)\nClass arguments details:\narg 2 ID = 86970521\n");
		}

		osg::TexGen::Coord which=(osg::TexGen::Coord)lua_tointeger(L,2);
		const osg::Plane* plane_ptr=(Luna< osg::Plane >::check(L,3));
		if( !plane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg plane in osg::TexGen::setPlane function");
		}
		const osg::Plane & plane=*plane_ptr;

		osg::TexGen* self=dynamic_cast< osg::TexGen* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexGen::setPlane(osg::TexGen::Coord, const osg::Plane &)");
		}
		self->setPlane(which, plane);

		return 0;
	}

	// osg::Plane & osg::TexGen::getPlane(osg::TexGen::Coord which)
	static int _bind_getPlane_overload_1(lua_State *L) {
		if (!_lg_typecheck_getPlane_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Plane & osg::TexGen::getPlane(osg::TexGen::Coord which) function, expected prototype:\nosg::Plane & osg::TexGen::getPlane(osg::TexGen::Coord which)\nClass arguments details:\n");
		}

		osg::TexGen::Coord which=(osg::TexGen::Coord)lua_tointeger(L,2);

		osg::TexGen* self=dynamic_cast< osg::TexGen* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Plane & osg::TexGen::getPlane(osg::TexGen::Coord)");
		}
		const osg::Plane* lret = &self->getPlane(which);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Plane >::push(L,lret,false);

		return 1;
	}

	// const osg::Plane & osg::TexGen::getPlane(osg::TexGen::Coord which) const
	static int _bind_getPlane_overload_2(lua_State *L) {
		if (!_lg_typecheck_getPlane_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Plane & osg::TexGen::getPlane(osg::TexGen::Coord which) const function, expected prototype:\nconst osg::Plane & osg::TexGen::getPlane(osg::TexGen::Coord which) const\nClass arguments details:\n");
		}

		osg::TexGen::Coord which=(osg::TexGen::Coord)lua_tointeger(L,2);

		osg::TexGen* self=dynamic_cast< osg::TexGen* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Plane & osg::TexGen::getPlane(osg::TexGen::Coord) const");
		}
		const osg::Plane* lret = &self->getPlane(which);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Plane >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TexGen::getPlane
	static int _bind_getPlane(lua_State *L) {
		if (_lg_typecheck_getPlane_overload_1(L)) return _bind_getPlane_overload_1(L);
		if (_lg_typecheck_getPlane_overload_2(L)) return _bind_getPlane_overload_2(L);

		luaL_error(L, "error in function getPlane, cannot match any of the overloads for function getPlane:\n  getPlane(osg::TexGen::Coord)\n  getPlane(osg::TexGen::Coord)\n");
		return 0;
	}

	// void osg::TexGen::setPlanesFromMatrix(const osg::Matrixd & matrix)
	static int _bind_setPlanesFromMatrix(lua_State *L) {
		if (!_lg_typecheck_setPlanesFromMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexGen::setPlanesFromMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osg::TexGen::setPlanesFromMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::TexGen::setPlanesFromMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osg::TexGen* self=dynamic_cast< osg::TexGen* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexGen::setPlanesFromMatrix(const osg::Matrixd &)");
		}
		self->setPlanesFromMatrix(matrix);

		return 0;
	}


	// Operator binds:

};

osg::TexGen* LunaTraits< osg::TexGen >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_TexGen::_bind_ctor(L);
}

void LunaTraits< osg::TexGen >::_bind_dtor(osg::TexGen* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::TexGen >::className[] = "TexGen";
const char LunaTraits< osg::TexGen >::fullName[] = "osg::TexGen";
const char LunaTraits< osg::TexGen >::moduleName[] = "osg";
const char* LunaTraits< osg::TexGen >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::TexGen >::hash = 4785624;
const int LunaTraits< osg::TexGen >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::TexGen >::methods[] = {
	{"cloneType", &luna_wrapper_osg_TexGen::_bind_cloneType},
	{"clone", &luna_wrapper_osg_TexGen::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_TexGen::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_TexGen::_bind_libraryName},
	{"className", &luna_wrapper_osg_TexGen::_bind_className},
	{"getType", &luna_wrapper_osg_TexGen::_bind_getType},
	{"isTextureAttribute", &luna_wrapper_osg_TexGen::_bind_isTextureAttribute},
	{"compare", &luna_wrapper_osg_TexGen::_bind_compare},
	{"getModeUsage", &luna_wrapper_osg_TexGen::_bind_getModeUsage},
	{"apply", &luna_wrapper_osg_TexGen::_bind_apply},
	{"setMode", &luna_wrapper_osg_TexGen::_bind_setMode},
	{"getMode", &luna_wrapper_osg_TexGen::_bind_getMode},
	{"setPlane", &luna_wrapper_osg_TexGen::_bind_setPlane},
	{"getPlane", &luna_wrapper_osg_TexGen::_bind_getPlane},
	{"setPlanesFromMatrix", &luna_wrapper_osg_TexGen::_bind_setPlanesFromMatrix},
	{"__eq", &luna_wrapper_osg_TexGen::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::TexGen >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_TexGen::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TexGen >::enumValues[] = {
	{"OBJECT_LINEAR", osg::TexGen::OBJECT_LINEAR},
	{"EYE_LINEAR", osg::TexGen::EYE_LINEAR},
	{"SPHERE_MAP", osg::TexGen::SPHERE_MAP},
	{"NORMAL_MAP", osg::TexGen::NORMAL_MAP},
	{"REFLECTION_MAP", osg::TexGen::REFLECTION_MAP},
	{"S", osg::TexGen::S},
	{"T", osg::TexGen::T},
	{"R", osg::TexGen::R},
	{"Q", osg::TexGen::Q},
	{0,0}
};


