#include <plug_common.h>

class luna_wrapper_osg_HeightField {
public:
	typedef Luna< osg::HeightField > luna_t;

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
		osg::HeightField* ptr= dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::HeightField >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_accept_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,36301858) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_accept_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45826538) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_allocate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumColumns(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumRows(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setOrigin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOrigin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setXInterval(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getXInterval(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setYInterval(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getYInterval(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFloatArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFloatArray_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHeightList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHeightList_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSkirtHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSkirtHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBorderWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBorderWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRotation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRotation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeRotationMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_zeroRotation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setHeight(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getHeight_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getHeight_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertex(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNormal(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getHeightDelta(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::HeightField::HeightField()
	static osg::HeightField* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::HeightField::HeightField() function, expected prototype:\nosg::HeightField::HeightField()\nClass arguments details:\n");
		}


		return new osg::HeightField();
	}

	// osg::HeightField::HeightField(const osg::HeightField & mesh, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::HeightField* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::HeightField::HeightField(const osg::HeightField & mesh, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::HeightField::HeightField(const osg::HeightField & mesh, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::HeightField* mesh_ptr=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if( !mesh_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mesh in osg::HeightField::HeightField function");
		}
		const osg::HeightField & mesh=*mesh_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::HeightField::HeightField function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::HeightField(mesh, copyop);
	}

	// Overload binder for osg::HeightField::HeightField
	static osg::HeightField* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function HeightField, cannot match any of the overloads for function HeightField:\n  HeightField()\n  HeightField(const osg::HeightField &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::HeightField::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::HeightField::cloneType() const function, expected prototype:\nosg::Object * osg::HeightField::cloneType() const\nClass arguments details:\n");
		}


		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::HeightField::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::HeightField::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::HeightField::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::HeightField::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::HeightField::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::HeightField::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::HeightField::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::HeightField::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::HeightField::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::HeightField::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::HeightField::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::HeightField::libraryName() const function, expected prototype:\nconst char * osg::HeightField::libraryName() const\nClass arguments details:\n");
		}


		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::HeightField::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::HeightField::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::HeightField::className() const function, expected prototype:\nconst char * osg::HeightField::className() const\nClass arguments details:\n");
		}


		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::HeightField::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::HeightField::accept(osg::ShapeVisitor & )
	static int _bind_accept_overload_1(lua_State *L) {
		if (!_lg_typecheck_accept_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::HeightField::accept(osg::ShapeVisitor & ) function, expected prototype:\nvoid osg::HeightField::accept(osg::ShapeVisitor & )\nClass arguments details:\narg 1 ID = 36301858\n");
		}

		osg::ShapeVisitor* _arg1_ptr=(Luna< osg::ShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::HeightField::accept function");
		}
		osg::ShapeVisitor & _arg1=*_arg1_ptr;

		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::HeightField::accept(osg::ShapeVisitor &)");
		}
		self->accept(_arg1);

		return 0;
	}

	// void osg::HeightField::accept(osg::ConstShapeVisitor & ) const
	static int _bind_accept_overload_2(lua_State *L) {
		if (!_lg_typecheck_accept_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::HeightField::accept(osg::ConstShapeVisitor & ) const function, expected prototype:\nvoid osg::HeightField::accept(osg::ConstShapeVisitor & ) const\nClass arguments details:\narg 1 ID = 45826538\n");
		}

		osg::ConstShapeVisitor* _arg1_ptr=(Luna< osg::ConstShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::HeightField::accept function");
		}
		osg::ConstShapeVisitor & _arg1=*_arg1_ptr;

		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::HeightField::accept(osg::ConstShapeVisitor &) const");
		}
		self->accept(_arg1);

		return 0;
	}

	// Overload binder for osg::HeightField::accept
	static int _bind_accept(lua_State *L) {
		if (_lg_typecheck_accept_overload_1(L)) return _bind_accept_overload_1(L);
		if (_lg_typecheck_accept_overload_2(L)) return _bind_accept_overload_2(L);

		luaL_error(L, "error in function accept, cannot match any of the overloads for function accept:\n  accept(osg::ShapeVisitor &)\n  accept(osg::ConstShapeVisitor &)\n");
		return 0;
	}

	// void osg::HeightField::allocate(unsigned int numColumns, unsigned int numRows)
	static int _bind_allocate(lua_State *L) {
		if (!_lg_typecheck_allocate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::HeightField::allocate(unsigned int numColumns, unsigned int numRows) function, expected prototype:\nvoid osg::HeightField::allocate(unsigned int numColumns, unsigned int numRows)\nClass arguments details:\n");
		}

		unsigned int numColumns=(unsigned int)lua_tointeger(L,2);
		unsigned int numRows=(unsigned int)lua_tointeger(L,3);

		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::HeightField::allocate(unsigned int, unsigned int)");
		}
		self->allocate(numColumns, numRows);

		return 0;
	}

	// unsigned int osg::HeightField::getNumColumns() const
	static int _bind_getNumColumns(lua_State *L) {
		if (!_lg_typecheck_getNumColumns(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::HeightField::getNumColumns() const function, expected prototype:\nunsigned int osg::HeightField::getNumColumns() const\nClass arguments details:\n");
		}


		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::HeightField::getNumColumns() const");
		}
		unsigned int lret = self->getNumColumns();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::HeightField::getNumRows() const
	static int _bind_getNumRows(lua_State *L) {
		if (!_lg_typecheck_getNumRows(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::HeightField::getNumRows() const function, expected prototype:\nunsigned int osg::HeightField::getNumRows() const\nClass arguments details:\n");
		}


		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::HeightField::getNumRows() const");
		}
		unsigned int lret = self->getNumRows();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::HeightField::setOrigin(const osg::Vec3f & origin)
	static int _bind_setOrigin(lua_State *L) {
		if (!_lg_typecheck_setOrigin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::HeightField::setOrigin(const osg::Vec3f & origin) function, expected prototype:\nvoid osg::HeightField::setOrigin(const osg::Vec3f & origin)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* origin_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !origin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg origin in osg::HeightField::setOrigin function");
		}
		const osg::Vec3f & origin=*origin_ptr;

		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::HeightField::setOrigin(const osg::Vec3f &)");
		}
		self->setOrigin(origin);

		return 0;
	}

	// const osg::Vec3f & osg::HeightField::getOrigin() const
	static int _bind_getOrigin(lua_State *L) {
		if (!_lg_typecheck_getOrigin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osg::HeightField::getOrigin() const function, expected prototype:\nconst osg::Vec3f & osg::HeightField::getOrigin() const\nClass arguments details:\n");
		}


		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osg::HeightField::getOrigin() const");
		}
		const osg::Vec3f* lret = &self->getOrigin();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osg::HeightField::setXInterval(float dx)
	static int _bind_setXInterval(lua_State *L) {
		if (!_lg_typecheck_setXInterval(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::HeightField::setXInterval(float dx) function, expected prototype:\nvoid osg::HeightField::setXInterval(float dx)\nClass arguments details:\n");
		}

		float dx=(float)lua_tonumber(L,2);

		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::HeightField::setXInterval(float)");
		}
		self->setXInterval(dx);

		return 0;
	}

	// float osg::HeightField::getXInterval() const
	static int _bind_getXInterval(lua_State *L) {
		if (!_lg_typecheck_getXInterval(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::HeightField::getXInterval() const function, expected prototype:\nfloat osg::HeightField::getXInterval() const\nClass arguments details:\n");
		}


		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::HeightField::getXInterval() const");
		}
		float lret = self->getXInterval();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::HeightField::setYInterval(float dy)
	static int _bind_setYInterval(lua_State *L) {
		if (!_lg_typecheck_setYInterval(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::HeightField::setYInterval(float dy) function, expected prototype:\nvoid osg::HeightField::setYInterval(float dy)\nClass arguments details:\n");
		}

		float dy=(float)lua_tonumber(L,2);

		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::HeightField::setYInterval(float)");
		}
		self->setYInterval(dy);

		return 0;
	}

	// float osg::HeightField::getYInterval() const
	static int _bind_getYInterval(lua_State *L) {
		if (!_lg_typecheck_getYInterval(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::HeightField::getYInterval() const function, expected prototype:\nfloat osg::HeightField::getYInterval() const\nClass arguments details:\n");
		}


		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::HeightField::getYInterval() const");
		}
		float lret = self->getYInterval();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::FloatArray * osg::HeightField::getFloatArray()
	static int _bind_getFloatArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_getFloatArray_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::FloatArray * osg::HeightField::getFloatArray() function, expected prototype:\nosg::FloatArray * osg::HeightField::getFloatArray()\nClass arguments details:\n");
		}


		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::FloatArray * osg::HeightField::getFloatArray()");
		}
		osg::FloatArray * lret = self->getFloatArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FloatArray >::push(L,lret,false);

		return 1;
	}

	// const osg::FloatArray * osg::HeightField::getFloatArray() const
	static int _bind_getFloatArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_getFloatArray_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::FloatArray * osg::HeightField::getFloatArray() const function, expected prototype:\nconst osg::FloatArray * osg::HeightField::getFloatArray() const\nClass arguments details:\n");
		}


		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::FloatArray * osg::HeightField::getFloatArray() const");
		}
		const osg::FloatArray * lret = self->getFloatArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FloatArray >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::HeightField::getFloatArray
	static int _bind_getFloatArray(lua_State *L) {
		if (_lg_typecheck_getFloatArray_overload_1(L)) return _bind_getFloatArray_overload_1(L);
		if (_lg_typecheck_getFloatArray_overload_2(L)) return _bind_getFloatArray_overload_2(L);

		luaL_error(L, "error in function getFloatArray, cannot match any of the overloads for function getFloatArray:\n  getFloatArray()\n  getFloatArray()\n");
		return 0;
	}

	// osg::HeightField::HeightList & osg::HeightField::getHeightList()
	static int _bind_getHeightList_overload_1(lua_State *L) {
		if (!_lg_typecheck_getHeightList_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::HeightField::HeightList & osg::HeightField::getHeightList() function, expected prototype:\nosg::HeightField::HeightList & osg::HeightField::getHeightList()\nClass arguments details:\n");
		}


		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::HeightField::HeightList & osg::HeightField::getHeightList()");
		}
		const osg::HeightField::HeightList* lret = &self->getHeightList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::HeightField::HeightList >::push(L,lret,false);

		return 1;
	}

	// const osg::HeightField::HeightList & osg::HeightField::getHeightList() const
	static int _bind_getHeightList_overload_2(lua_State *L) {
		if (!_lg_typecheck_getHeightList_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::HeightField::HeightList & osg::HeightField::getHeightList() const function, expected prototype:\nconst osg::HeightField::HeightList & osg::HeightField::getHeightList() const\nClass arguments details:\n");
		}


		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::HeightField::HeightList & osg::HeightField::getHeightList() const");
		}
		const osg::HeightField::HeightList* lret = &self->getHeightList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::HeightField::HeightList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::HeightField::getHeightList
	static int _bind_getHeightList(lua_State *L) {
		if (_lg_typecheck_getHeightList_overload_1(L)) return _bind_getHeightList_overload_1(L);
		if (_lg_typecheck_getHeightList_overload_2(L)) return _bind_getHeightList_overload_2(L);

		luaL_error(L, "error in function getHeightList, cannot match any of the overloads for function getHeightList:\n  getHeightList()\n  getHeightList()\n");
		return 0;
	}

	// void osg::HeightField::setSkirtHeight(float skirtHeight)
	static int _bind_setSkirtHeight(lua_State *L) {
		if (!_lg_typecheck_setSkirtHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::HeightField::setSkirtHeight(float skirtHeight) function, expected prototype:\nvoid osg::HeightField::setSkirtHeight(float skirtHeight)\nClass arguments details:\n");
		}

		float skirtHeight=(float)lua_tonumber(L,2);

		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::HeightField::setSkirtHeight(float)");
		}
		self->setSkirtHeight(skirtHeight);

		return 0;
	}

	// float osg::HeightField::getSkirtHeight() const
	static int _bind_getSkirtHeight(lua_State *L) {
		if (!_lg_typecheck_getSkirtHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::HeightField::getSkirtHeight() const function, expected prototype:\nfloat osg::HeightField::getSkirtHeight() const\nClass arguments details:\n");
		}


		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::HeightField::getSkirtHeight() const");
		}
		float lret = self->getSkirtHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::HeightField::setBorderWidth(unsigned int borderWidth)
	static int _bind_setBorderWidth(lua_State *L) {
		if (!_lg_typecheck_setBorderWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::HeightField::setBorderWidth(unsigned int borderWidth) function, expected prototype:\nvoid osg::HeightField::setBorderWidth(unsigned int borderWidth)\nClass arguments details:\n");
		}

		unsigned int borderWidth=(unsigned int)lua_tointeger(L,2);

		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::HeightField::setBorderWidth(unsigned int)");
		}
		self->setBorderWidth(borderWidth);

		return 0;
	}

	// unsigned int osg::HeightField::getBorderWidth() const
	static int _bind_getBorderWidth(lua_State *L) {
		if (!_lg_typecheck_getBorderWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::HeightField::getBorderWidth() const function, expected prototype:\nunsigned int osg::HeightField::getBorderWidth() const\nClass arguments details:\n");
		}


		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::HeightField::getBorderWidth() const");
		}
		unsigned int lret = self->getBorderWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::HeightField::setRotation(const osg::Quat & quat)
	static int _bind_setRotation(lua_State *L) {
		if (!_lg_typecheck_setRotation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::HeightField::setRotation(const osg::Quat & quat) function, expected prototype:\nvoid osg::HeightField::setRotation(const osg::Quat & quat)\nClass arguments details:\narg 1 ID = 80263306\n");
		}

		const osg::Quat* quat_ptr=(Luna< osg::Quat >::check(L,2));
		if( !quat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg quat in osg::HeightField::setRotation function");
		}
		const osg::Quat & quat=*quat_ptr;

		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::HeightField::setRotation(const osg::Quat &)");
		}
		self->setRotation(quat);

		return 0;
	}

	// const osg::Quat & osg::HeightField::getRotation() const
	static int _bind_getRotation(lua_State *L) {
		if (!_lg_typecheck_getRotation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Quat & osg::HeightField::getRotation() const function, expected prototype:\nconst osg::Quat & osg::HeightField::getRotation() const\nClass arguments details:\n");
		}


		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Quat & osg::HeightField::getRotation() const");
		}
		const osg::Quat* lret = &self->getRotation();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,false);

		return 1;
	}

	// osg::Matrixd osg::HeightField::computeRotationMatrix() const
	static int _bind_computeRotationMatrix(lua_State *L) {
		if (!_lg_typecheck_computeRotationMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osg::HeightField::computeRotationMatrix() const function, expected prototype:\nosg::Matrixd osg::HeightField::computeRotationMatrix() const\nClass arguments details:\n");
		}


		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osg::HeightField::computeRotationMatrix() const");
		}
		osg::Matrixd stack_lret = self->computeRotationMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// bool osg::HeightField::zeroRotation() const
	static int _bind_zeroRotation(lua_State *L) {
		if (!_lg_typecheck_zeroRotation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::HeightField::zeroRotation() const function, expected prototype:\nbool osg::HeightField::zeroRotation() const\nClass arguments details:\n");
		}


		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::HeightField::zeroRotation() const");
		}
		bool lret = self->zeroRotation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::HeightField::setHeight(unsigned int c, unsigned int r, float value)
	static int _bind_setHeight(lua_State *L) {
		if (!_lg_typecheck_setHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::HeightField::setHeight(unsigned int c, unsigned int r, float value) function, expected prototype:\nvoid osg::HeightField::setHeight(unsigned int c, unsigned int r, float value)\nClass arguments details:\n");
		}

		unsigned int c=(unsigned int)lua_tointeger(L,2);
		unsigned int r=(unsigned int)lua_tointeger(L,3);
		float value=(float)lua_tonumber(L,4);

		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::HeightField::setHeight(unsigned int, unsigned int, float)");
		}
		self->setHeight(c, r, value);

		return 0;
	}

	// float & osg::HeightField::getHeight(unsigned int c, unsigned int r)
	static int _bind_getHeight_overload_1(lua_State *L) {
		if (!_lg_typecheck_getHeight_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float & osg::HeightField::getHeight(unsigned int c, unsigned int r) function, expected prototype:\nfloat & osg::HeightField::getHeight(unsigned int c, unsigned int r)\nClass arguments details:\n");
		}

		unsigned int c=(unsigned int)lua_tointeger(L,2);
		unsigned int r=(unsigned int)lua_tointeger(L,3);

		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float & osg::HeightField::getHeight(unsigned int, unsigned int)");
		}
		float & lret = self->getHeight(c, r);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::HeightField::getHeight(unsigned int c, unsigned int r) const
	static int _bind_getHeight_overload_2(lua_State *L) {
		if (!_lg_typecheck_getHeight_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::HeightField::getHeight(unsigned int c, unsigned int r) const function, expected prototype:\nfloat osg::HeightField::getHeight(unsigned int c, unsigned int r) const\nClass arguments details:\n");
		}

		unsigned int c=(unsigned int)lua_tointeger(L,2);
		unsigned int r=(unsigned int)lua_tointeger(L,3);

		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::HeightField::getHeight(unsigned int, unsigned int) const");
		}
		float lret = self->getHeight(c, r);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::HeightField::getHeight
	static int _bind_getHeight(lua_State *L) {
		if (_lg_typecheck_getHeight_overload_1(L)) return _bind_getHeight_overload_1(L);
		if (_lg_typecheck_getHeight_overload_2(L)) return _bind_getHeight_overload_2(L);

		luaL_error(L, "error in function getHeight, cannot match any of the overloads for function getHeight:\n  getHeight(unsigned int, unsigned int)\n  getHeight(unsigned int, unsigned int)\n");
		return 0;
	}

	// osg::Vec3f osg::HeightField::getVertex(unsigned int c, unsigned int r) const
	static int _bind_getVertex(lua_State *L) {
		if (!_lg_typecheck_getVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osg::HeightField::getVertex(unsigned int c, unsigned int r) const function, expected prototype:\nosg::Vec3f osg::HeightField::getVertex(unsigned int c, unsigned int r) const\nClass arguments details:\n");
		}

		unsigned int c=(unsigned int)lua_tointeger(L,2);
		unsigned int r=(unsigned int)lua_tointeger(L,3);

		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osg::HeightField::getVertex(unsigned int, unsigned int) const");
		}
		osg::Vec3f stack_lret = self->getVertex(c, r);
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osg::HeightField::getNormal(unsigned int c, unsigned int r) const
	static int _bind_getNormal(lua_State *L) {
		if (!_lg_typecheck_getNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osg::HeightField::getNormal(unsigned int c, unsigned int r) const function, expected prototype:\nosg::Vec3f osg::HeightField::getNormal(unsigned int c, unsigned int r) const\nClass arguments details:\n");
		}

		unsigned int c=(unsigned int)lua_tointeger(L,2);
		unsigned int r=(unsigned int)lua_tointeger(L,3);

		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osg::HeightField::getNormal(unsigned int, unsigned int) const");
		}
		osg::Vec3f stack_lret = self->getNormal(c, r);
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec2f osg::HeightField::getHeightDelta(unsigned int c, unsigned int r) const
	static int _bind_getHeightDelta(lua_State *L) {
		if (!_lg_typecheck_getHeightDelta(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec2f osg::HeightField::getHeightDelta(unsigned int c, unsigned int r) const function, expected prototype:\nosg::Vec2f osg::HeightField::getHeightDelta(unsigned int c, unsigned int r) const\nClass arguments details:\n");
		}

		unsigned int c=(unsigned int)lua_tointeger(L,2);
		unsigned int r=(unsigned int)lua_tointeger(L,3);

		osg::HeightField* self=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec2f osg::HeightField::getHeightDelta(unsigned int, unsigned int) const");
		}
		osg::Vec2f stack_lret = self->getHeightDelta(c, r);
		osg::Vec2f* lret = new osg::Vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2f >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osg::HeightField* LunaTraits< osg::HeightField >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_HeightField::_bind_ctor(L);
}

void LunaTraits< osg::HeightField >::_bind_dtor(osg::HeightField* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::HeightField >::className[] = "HeightField";
const char LunaTraits< osg::HeightField >::fullName[] = "osg::HeightField";
const char LunaTraits< osg::HeightField >::moduleName[] = "osg";
const char* LunaTraits< osg::HeightField >::parents[] = {"osg.Shape", 0};
const int LunaTraits< osg::HeightField >::hash = 98538837;
const int LunaTraits< osg::HeightField >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::HeightField >::methods[] = {
	{"cloneType", &luna_wrapper_osg_HeightField::_bind_cloneType},
	{"clone", &luna_wrapper_osg_HeightField::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_HeightField::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_HeightField::_bind_libraryName},
	{"className", &luna_wrapper_osg_HeightField::_bind_className},
	{"accept", &luna_wrapper_osg_HeightField::_bind_accept},
	{"allocate", &luna_wrapper_osg_HeightField::_bind_allocate},
	{"getNumColumns", &luna_wrapper_osg_HeightField::_bind_getNumColumns},
	{"getNumRows", &luna_wrapper_osg_HeightField::_bind_getNumRows},
	{"setOrigin", &luna_wrapper_osg_HeightField::_bind_setOrigin},
	{"getOrigin", &luna_wrapper_osg_HeightField::_bind_getOrigin},
	{"setXInterval", &luna_wrapper_osg_HeightField::_bind_setXInterval},
	{"getXInterval", &luna_wrapper_osg_HeightField::_bind_getXInterval},
	{"setYInterval", &luna_wrapper_osg_HeightField::_bind_setYInterval},
	{"getYInterval", &luna_wrapper_osg_HeightField::_bind_getYInterval},
	{"getFloatArray", &luna_wrapper_osg_HeightField::_bind_getFloatArray},
	{"getHeightList", &luna_wrapper_osg_HeightField::_bind_getHeightList},
	{"setSkirtHeight", &luna_wrapper_osg_HeightField::_bind_setSkirtHeight},
	{"getSkirtHeight", &luna_wrapper_osg_HeightField::_bind_getSkirtHeight},
	{"setBorderWidth", &luna_wrapper_osg_HeightField::_bind_setBorderWidth},
	{"getBorderWidth", &luna_wrapper_osg_HeightField::_bind_getBorderWidth},
	{"setRotation", &luna_wrapper_osg_HeightField::_bind_setRotation},
	{"getRotation", &luna_wrapper_osg_HeightField::_bind_getRotation},
	{"computeRotationMatrix", &luna_wrapper_osg_HeightField::_bind_computeRotationMatrix},
	{"zeroRotation", &luna_wrapper_osg_HeightField::_bind_zeroRotation},
	{"setHeight", &luna_wrapper_osg_HeightField::_bind_setHeight},
	{"getHeight", &luna_wrapper_osg_HeightField::_bind_getHeight},
	{"getVertex", &luna_wrapper_osg_HeightField::_bind_getVertex},
	{"getNormal", &luna_wrapper_osg_HeightField::_bind_getNormal},
	{"getHeightDelta", &luna_wrapper_osg_HeightField::_bind_getHeightDelta},
	{"__eq", &luna_wrapper_osg_HeightField::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::HeightField >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_HeightField::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::HeightField >::enumValues[] = {
	{0,0}
};


