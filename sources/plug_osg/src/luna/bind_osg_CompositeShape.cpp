#include <plug_common.h>

class luna_wrapper_osg_CompositeShape {
public:
	typedef Luna< osg::CompositeShape > luna_t;

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
		osg::CompositeShape* ptr= dynamic_cast< osg::CompositeShape* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::CompositeShape >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setShape(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getShape_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getShape_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumChildren(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getChild_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getChild_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_findChildNo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::CompositeShape::CompositeShape()
	static osg::CompositeShape* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CompositeShape::CompositeShape() function, expected prototype:\nosg::CompositeShape::CompositeShape()\nClass arguments details:\n");
		}


		return new osg::CompositeShape();
	}

	// osg::CompositeShape::CompositeShape(const osg::CompositeShape & cs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::CompositeShape* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CompositeShape::CompositeShape(const osg::CompositeShape & cs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::CompositeShape::CompositeShape(const osg::CompositeShape & cs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::CompositeShape* cs_ptr=dynamic_cast< osg::CompositeShape* >(Luna< osg::Referenced >::check(L,1));
		if( !cs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cs in osg::CompositeShape::CompositeShape function");
		}
		const osg::CompositeShape & cs=*cs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::CompositeShape::CompositeShape function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::CompositeShape(cs, copyop);
	}

	// Overload binder for osg::CompositeShape::CompositeShape
	static osg::CompositeShape* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function CompositeShape, cannot match any of the overloads for function CompositeShape:\n  CompositeShape()\n  CompositeShape(const osg::CompositeShape &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::CompositeShape::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::CompositeShape::cloneType() const function, expected prototype:\nosg::Object * osg::CompositeShape::cloneType() const\nClass arguments details:\n");
		}


		osg::CompositeShape* self=dynamic_cast< osg::CompositeShape* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::CompositeShape::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::CompositeShape::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::CompositeShape::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::CompositeShape::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::CompositeShape::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::CompositeShape* self=dynamic_cast< osg::CompositeShape* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::CompositeShape::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::CompositeShape::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::CompositeShape::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::CompositeShape::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::CompositeShape* self=dynamic_cast< osg::CompositeShape* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::CompositeShape::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::CompositeShape::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::CompositeShape::libraryName() const function, expected prototype:\nconst char * osg::CompositeShape::libraryName() const\nClass arguments details:\n");
		}


		osg::CompositeShape* self=dynamic_cast< osg::CompositeShape* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::CompositeShape::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::CompositeShape::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::CompositeShape::className() const function, expected prototype:\nconst char * osg::CompositeShape::className() const\nClass arguments details:\n");
		}


		osg::CompositeShape* self=dynamic_cast< osg::CompositeShape* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::CompositeShape::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::CompositeShape::accept(osg::ShapeVisitor & )
	static int _bind_accept_overload_1(lua_State *L) {
		if (!_lg_typecheck_accept_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::CompositeShape::accept(osg::ShapeVisitor & ) function, expected prototype:\nvoid osg::CompositeShape::accept(osg::ShapeVisitor & )\nClass arguments details:\narg 1 ID = 36301858\n");
		}

		osg::ShapeVisitor* _arg1_ptr=(Luna< osg::ShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::CompositeShape::accept function");
		}
		osg::ShapeVisitor & _arg1=*_arg1_ptr;

		osg::CompositeShape* self=dynamic_cast< osg::CompositeShape* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::CompositeShape::accept(osg::ShapeVisitor &)");
		}
		self->accept(_arg1);

		return 0;
	}

	// void osg::CompositeShape::accept(osg::ConstShapeVisitor & ) const
	static int _bind_accept_overload_2(lua_State *L) {
		if (!_lg_typecheck_accept_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::CompositeShape::accept(osg::ConstShapeVisitor & ) const function, expected prototype:\nvoid osg::CompositeShape::accept(osg::ConstShapeVisitor & ) const\nClass arguments details:\narg 1 ID = 45826538\n");
		}

		osg::ConstShapeVisitor* _arg1_ptr=(Luna< osg::ConstShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::CompositeShape::accept function");
		}
		osg::ConstShapeVisitor & _arg1=*_arg1_ptr;

		osg::CompositeShape* self=dynamic_cast< osg::CompositeShape* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::CompositeShape::accept(osg::ConstShapeVisitor &) const");
		}
		self->accept(_arg1);

		return 0;
	}

	// Overload binder for osg::CompositeShape::accept
	static int _bind_accept(lua_State *L) {
		if (_lg_typecheck_accept_overload_1(L)) return _bind_accept_overload_1(L);
		if (_lg_typecheck_accept_overload_2(L)) return _bind_accept_overload_2(L);

		luaL_error(L, "error in function accept, cannot match any of the overloads for function accept:\n  accept(osg::ShapeVisitor &)\n  accept(osg::ConstShapeVisitor &)\n");
		return 0;
	}

	// void osg::CompositeShape::setShape(osg::Shape * shape)
	static int _bind_setShape(lua_State *L) {
		if (!_lg_typecheck_setShape(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::CompositeShape::setShape(osg::Shape * shape) function, expected prototype:\nvoid osg::CompositeShape::setShape(osg::Shape * shape)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Shape* shape=dynamic_cast< osg::Shape* >(Luna< osg::Referenced >::check(L,2));

		osg::CompositeShape* self=dynamic_cast< osg::CompositeShape* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::CompositeShape::setShape(osg::Shape *)");
		}
		self->setShape(shape);

		return 0;
	}

	// osg::Shape * osg::CompositeShape::getShape()
	static int _bind_getShape_overload_1(lua_State *L) {
		if (!_lg_typecheck_getShape_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Shape * osg::CompositeShape::getShape() function, expected prototype:\nosg::Shape * osg::CompositeShape::getShape()\nClass arguments details:\n");
		}


		osg::CompositeShape* self=dynamic_cast< osg::CompositeShape* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Shape * osg::CompositeShape::getShape()");
		}
		osg::Shape * lret = self->getShape();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Shape >::push(L,lret,false);

		return 1;
	}

	// const osg::Shape * osg::CompositeShape::getShape() const
	static int _bind_getShape_overload_2(lua_State *L) {
		if (!_lg_typecheck_getShape_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Shape * osg::CompositeShape::getShape() const function, expected prototype:\nconst osg::Shape * osg::CompositeShape::getShape() const\nClass arguments details:\n");
		}


		osg::CompositeShape* self=dynamic_cast< osg::CompositeShape* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Shape * osg::CompositeShape::getShape() const");
		}
		const osg::Shape * lret = self->getShape();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Shape >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::CompositeShape::getShape
	static int _bind_getShape(lua_State *L) {
		if (_lg_typecheck_getShape_overload_1(L)) return _bind_getShape_overload_1(L);
		if (_lg_typecheck_getShape_overload_2(L)) return _bind_getShape_overload_2(L);

		luaL_error(L, "error in function getShape, cannot match any of the overloads for function getShape:\n  getShape()\n  getShape()\n");
		return 0;
	}

	// unsigned int osg::CompositeShape::getNumChildren() const
	static int _bind_getNumChildren(lua_State *L) {
		if (!_lg_typecheck_getNumChildren(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::CompositeShape::getNumChildren() const function, expected prototype:\nunsigned int osg::CompositeShape::getNumChildren() const\nClass arguments details:\n");
		}


		osg::CompositeShape* self=dynamic_cast< osg::CompositeShape* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::CompositeShape::getNumChildren() const");
		}
		unsigned int lret = self->getNumChildren();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Shape * osg::CompositeShape::getChild(unsigned int i)
	static int _bind_getChild_overload_1(lua_State *L) {
		if (!_lg_typecheck_getChild_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Shape * osg::CompositeShape::getChild(unsigned int i) function, expected prototype:\nosg::Shape * osg::CompositeShape::getChild(unsigned int i)\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::CompositeShape* self=dynamic_cast< osg::CompositeShape* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Shape * osg::CompositeShape::getChild(unsigned int)");
		}
		osg::Shape * lret = self->getChild(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Shape >::push(L,lret,false);

		return 1;
	}

	// const osg::Shape * osg::CompositeShape::getChild(unsigned int i) const
	static int _bind_getChild_overload_2(lua_State *L) {
		if (!_lg_typecheck_getChild_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Shape * osg::CompositeShape::getChild(unsigned int i) const function, expected prototype:\nconst osg::Shape * osg::CompositeShape::getChild(unsigned int i) const\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::CompositeShape* self=dynamic_cast< osg::CompositeShape* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Shape * osg::CompositeShape::getChild(unsigned int) const");
		}
		const osg::Shape * lret = self->getChild(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Shape >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::CompositeShape::getChild
	static int _bind_getChild(lua_State *L) {
		if (_lg_typecheck_getChild_overload_1(L)) return _bind_getChild_overload_1(L);
		if (_lg_typecheck_getChild_overload_2(L)) return _bind_getChild_overload_2(L);

		luaL_error(L, "error in function getChild, cannot match any of the overloads for function getChild:\n  getChild(unsigned int)\n  getChild(unsigned int)\n");
		return 0;
	}

	// void osg::CompositeShape::addChild(osg::Shape * shape)
	static int _bind_addChild(lua_State *L) {
		if (!_lg_typecheck_addChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::CompositeShape::addChild(osg::Shape * shape) function, expected prototype:\nvoid osg::CompositeShape::addChild(osg::Shape * shape)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Shape* shape=dynamic_cast< osg::Shape* >(Luna< osg::Referenced >::check(L,2));

		osg::CompositeShape* self=dynamic_cast< osg::CompositeShape* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::CompositeShape::addChild(osg::Shape *)");
		}
		self->addChild(shape);

		return 0;
	}

	// void osg::CompositeShape::removeChild(unsigned int i)
	static int _bind_removeChild(lua_State *L) {
		if (!_lg_typecheck_removeChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::CompositeShape::removeChild(unsigned int i) function, expected prototype:\nvoid osg::CompositeShape::removeChild(unsigned int i)\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::CompositeShape* self=dynamic_cast< osg::CompositeShape* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::CompositeShape::removeChild(unsigned int)");
		}
		self->removeChild(i);

		return 0;
	}

	// unsigned int osg::CompositeShape::findChildNo(osg::Shape * shape) const
	static int _bind_findChildNo(lua_State *L) {
		if (!_lg_typecheck_findChildNo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::CompositeShape::findChildNo(osg::Shape * shape) const function, expected prototype:\nunsigned int osg::CompositeShape::findChildNo(osg::Shape * shape) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Shape* shape=dynamic_cast< osg::Shape* >(Luna< osg::Referenced >::check(L,2));

		osg::CompositeShape* self=dynamic_cast< osg::CompositeShape* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::CompositeShape::findChildNo(osg::Shape *) const");
		}
		unsigned int lret = self->findChildNo(shape);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::CompositeShape* LunaTraits< osg::CompositeShape >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_CompositeShape::_bind_ctor(L);
}

void LunaTraits< osg::CompositeShape >::_bind_dtor(osg::CompositeShape* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::CompositeShape >::className[] = "CompositeShape";
const char LunaTraits< osg::CompositeShape >::fullName[] = "osg::CompositeShape";
const char LunaTraits< osg::CompositeShape >::moduleName[] = "osg";
const char* LunaTraits< osg::CompositeShape >::parents[] = {"osg.Shape", 0};
const int LunaTraits< osg::CompositeShape >::hash = 75936557;
const int LunaTraits< osg::CompositeShape >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::CompositeShape >::methods[] = {
	{"cloneType", &luna_wrapper_osg_CompositeShape::_bind_cloneType},
	{"clone", &luna_wrapper_osg_CompositeShape::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_CompositeShape::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_CompositeShape::_bind_libraryName},
	{"className", &luna_wrapper_osg_CompositeShape::_bind_className},
	{"accept", &luna_wrapper_osg_CompositeShape::_bind_accept},
	{"setShape", &luna_wrapper_osg_CompositeShape::_bind_setShape},
	{"getShape", &luna_wrapper_osg_CompositeShape::_bind_getShape},
	{"getNumChildren", &luna_wrapper_osg_CompositeShape::_bind_getNumChildren},
	{"getChild", &luna_wrapper_osg_CompositeShape::_bind_getChild},
	{"addChild", &luna_wrapper_osg_CompositeShape::_bind_addChild},
	{"removeChild", &luna_wrapper_osg_CompositeShape::_bind_removeChild},
	{"findChildNo", &luna_wrapper_osg_CompositeShape::_bind_findChildNo},
	{"__eq", &luna_wrapper_osg_CompositeShape::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::CompositeShape >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_CompositeShape::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::CompositeShape >::enumValues[] = {
	{0,0}
};


