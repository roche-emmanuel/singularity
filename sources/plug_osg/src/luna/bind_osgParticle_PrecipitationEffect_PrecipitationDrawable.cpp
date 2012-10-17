#include <plug_common.h>

class luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable {
public:
	typedef Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable > luna_t;

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
		osgParticle::PrecipitationEffect::PrecipitationDrawable* ptr= dynamic_cast< osgParticle::PrecipitationEffect::PrecipitationDrawable* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setRequiresPreviousMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRequiresPreviousMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGeometry(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGeometry_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGeometry_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDrawType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDrawType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNumberOfVertices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumberOfVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCurrentCellMatrixMap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPreviousCellMatrixMap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_newFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::PrecipitationEffect::PrecipitationDrawable::PrecipitationDrawable()
	static osgParticle::PrecipitationEffect::PrecipitationDrawable* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::PrecipitationEffect::PrecipitationDrawable::PrecipitationDrawable() function, expected prototype:\nosgParticle::PrecipitationEffect::PrecipitationDrawable::PrecipitationDrawable()\nClass arguments details:\n");
		}


		return new osgParticle::PrecipitationEffect::PrecipitationDrawable();
	}

	// osgParticle::PrecipitationEffect::PrecipitationDrawable::PrecipitationDrawable(const osgParticle::PrecipitationEffect::PrecipitationDrawable & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::PrecipitationEffect::PrecipitationDrawable* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::PrecipitationEffect::PrecipitationDrawable::PrecipitationDrawable(const osgParticle::PrecipitationEffect::PrecipitationDrawable & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::PrecipitationEffect::PrecipitationDrawable::PrecipitationDrawable(const osgParticle::PrecipitationEffect::PrecipitationDrawable & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::PrecipitationEffect::PrecipitationDrawable* copy_ptr=dynamic_cast< osgParticle::PrecipitationEffect::PrecipitationDrawable* >(Luna< osg::Referenced >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::PrecipitationEffect::PrecipitationDrawable::PrecipitationDrawable function");
		}
		const osgParticle::PrecipitationEffect::PrecipitationDrawable & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::PrecipitationEffect::PrecipitationDrawable::PrecipitationDrawable function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::PrecipitationEffect::PrecipitationDrawable(copy, copyop);
	}

	// Overload binder for osgParticle::PrecipitationEffect::PrecipitationDrawable::PrecipitationDrawable
	static osgParticle::PrecipitationEffect::PrecipitationDrawable* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function PrecipitationDrawable, cannot match any of the overloads for function PrecipitationDrawable:\n  PrecipitationDrawable()\n  PrecipitationDrawable(const osgParticle::PrecipitationEffect::PrecipitationDrawable &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::PrecipitationEffect::PrecipitationDrawable::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::PrecipitationEffect::PrecipitationDrawable::cloneType() const function, expected prototype:\nosg::Object * osgParticle::PrecipitationEffect::PrecipitationDrawable::cloneType() const\nClass arguments details:\n");
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=dynamic_cast< osgParticle::PrecipitationEffect::PrecipitationDrawable* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::PrecipitationEffect::PrecipitationDrawable::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::PrecipitationEffect::PrecipitationDrawable::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::PrecipitationEffect::PrecipitationDrawable::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgParticle::PrecipitationEffect::PrecipitationDrawable::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::PrecipitationEffect::PrecipitationDrawable::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=dynamic_cast< osgParticle::PrecipitationEffect::PrecipitationDrawable* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::PrecipitationEffect::PrecipitationDrawable::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::PrecipitationEffect::PrecipitationDrawable::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::PrecipitationEffect::PrecipitationDrawable::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::PrecipitationEffect::PrecipitationDrawable::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=dynamic_cast< osgParticle::PrecipitationEffect::PrecipitationDrawable* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::PrecipitationEffect::PrecipitationDrawable::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::PrecipitationEffect::PrecipitationDrawable::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::PrecipitationEffect::PrecipitationDrawable::libraryName() const function, expected prototype:\nconst char * osgParticle::PrecipitationEffect::PrecipitationDrawable::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=dynamic_cast< osgParticle::PrecipitationEffect::PrecipitationDrawable* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::PrecipitationEffect::PrecipitationDrawable::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::PrecipitationEffect::PrecipitationDrawable::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::PrecipitationEffect::PrecipitationDrawable::className() const function, expected prototype:\nconst char * osgParticle::PrecipitationEffect::PrecipitationDrawable::className() const\nClass arguments details:\n");
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=dynamic_cast< osgParticle::PrecipitationEffect::PrecipitationDrawable* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::PrecipitationEffect::PrecipitationDrawable::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::PrecipitationDrawable::setRequiresPreviousMatrix(bool flag)
	static int _bind_setRequiresPreviousMatrix(lua_State *L) {
		if (!_lg_typecheck_setRequiresPreviousMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::PrecipitationDrawable::setRequiresPreviousMatrix(bool flag) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::PrecipitationDrawable::setRequiresPreviousMatrix(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=dynamic_cast< osgParticle::PrecipitationEffect::PrecipitationDrawable* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::PrecipitationDrawable::setRequiresPreviousMatrix(bool)");
		}
		self->setRequiresPreviousMatrix(flag);

		return 0;
	}

	// bool osgParticle::PrecipitationEffect::PrecipitationDrawable::getRequiresPreviousMatrix() const
	static int _bind_getRequiresPreviousMatrix(lua_State *L) {
		if (!_lg_typecheck_getRequiresPreviousMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::PrecipitationEffect::PrecipitationDrawable::getRequiresPreviousMatrix() const function, expected prototype:\nbool osgParticle::PrecipitationEffect::PrecipitationDrawable::getRequiresPreviousMatrix() const\nClass arguments details:\n");
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=dynamic_cast< osgParticle::PrecipitationEffect::PrecipitationDrawable* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::PrecipitationEffect::PrecipitationDrawable::getRequiresPreviousMatrix() const");
		}
		bool lret = self->getRequiresPreviousMatrix();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::PrecipitationDrawable::setGeometry(osg::Geometry * geom)
	static int _bind_setGeometry(lua_State *L) {
		if (!_lg_typecheck_setGeometry(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::PrecipitationDrawable::setGeometry(osg::Geometry * geom) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::PrecipitationDrawable::setGeometry(osg::Geometry * geom)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geometry* geom=dynamic_cast< osg::Geometry* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=dynamic_cast< osgParticle::PrecipitationEffect::PrecipitationDrawable* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::PrecipitationDrawable::setGeometry(osg::Geometry *)");
		}
		self->setGeometry(geom);

		return 0;
	}

	// osg::Geometry * osgParticle::PrecipitationEffect::PrecipitationDrawable::getGeometry()
	static int _bind_getGeometry_overload_1(lua_State *L) {
		if (!_lg_typecheck_getGeometry_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Geometry * osgParticle::PrecipitationEffect::PrecipitationDrawable::getGeometry() function, expected prototype:\nosg::Geometry * osgParticle::PrecipitationEffect::PrecipitationDrawable::getGeometry()\nClass arguments details:\n");
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=dynamic_cast< osgParticle::PrecipitationEffect::PrecipitationDrawable* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Geometry * osgParticle::PrecipitationEffect::PrecipitationDrawable::getGeometry()");
		}
		osg::Geometry * lret = self->getGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// const osg::Geometry * osgParticle::PrecipitationEffect::PrecipitationDrawable::getGeometry() const
	static int _bind_getGeometry_overload_2(lua_State *L) {
		if (!_lg_typecheck_getGeometry_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Geometry * osgParticle::PrecipitationEffect::PrecipitationDrawable::getGeometry() const function, expected prototype:\nconst osg::Geometry * osgParticle::PrecipitationEffect::PrecipitationDrawable::getGeometry() const\nClass arguments details:\n");
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=dynamic_cast< osgParticle::PrecipitationEffect::PrecipitationDrawable* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Geometry * osgParticle::PrecipitationEffect::PrecipitationDrawable::getGeometry() const");
		}
		const osg::Geometry * lret = self->getGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::PrecipitationEffect::PrecipitationDrawable::getGeometry
	static int _bind_getGeometry(lua_State *L) {
		if (_lg_typecheck_getGeometry_overload_1(L)) return _bind_getGeometry_overload_1(L);
		if (_lg_typecheck_getGeometry_overload_2(L)) return _bind_getGeometry_overload_2(L);

		luaL_error(L, "error in function getGeometry, cannot match any of the overloads for function getGeometry:\n  getGeometry()\n  getGeometry()\n");
		return 0;
	}

	// void osgParticle::PrecipitationEffect::PrecipitationDrawable::setDrawType(unsigned int type)
	static int _bind_setDrawType(lua_State *L) {
		if (!_lg_typecheck_setDrawType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::PrecipitationDrawable::setDrawType(unsigned int type) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::PrecipitationDrawable::setDrawType(unsigned int type)\nClass arguments details:\n");
		}

		unsigned int type=(unsigned int)lua_tointeger(L,2);

		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=dynamic_cast< osgParticle::PrecipitationEffect::PrecipitationDrawable* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::PrecipitationDrawable::setDrawType(unsigned int)");
		}
		self->setDrawType(type);

		return 0;
	}

	// unsigned int osgParticle::PrecipitationEffect::PrecipitationDrawable::getDrawType() const
	static int _bind_getDrawType(lua_State *L) {
		if (!_lg_typecheck_getDrawType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgParticle::PrecipitationEffect::PrecipitationDrawable::getDrawType() const function, expected prototype:\nunsigned int osgParticle::PrecipitationEffect::PrecipitationDrawable::getDrawType() const\nClass arguments details:\n");
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=dynamic_cast< osgParticle::PrecipitationEffect::PrecipitationDrawable* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgParticle::PrecipitationEffect::PrecipitationDrawable::getDrawType() const");
		}
		unsigned int lret = self->getDrawType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::PrecipitationDrawable::setNumberOfVertices(unsigned int numVertices)
	static int _bind_setNumberOfVertices(lua_State *L) {
		if (!_lg_typecheck_setNumberOfVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::PrecipitationDrawable::setNumberOfVertices(unsigned int numVertices) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::PrecipitationDrawable::setNumberOfVertices(unsigned int numVertices)\nClass arguments details:\n");
		}

		unsigned int numVertices=(unsigned int)lua_tointeger(L,2);

		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=dynamic_cast< osgParticle::PrecipitationEffect::PrecipitationDrawable* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::PrecipitationDrawable::setNumberOfVertices(unsigned int)");
		}
		self->setNumberOfVertices(numVertices);

		return 0;
	}

	// unsigned int osgParticle::PrecipitationEffect::PrecipitationDrawable::getNumberOfVertices() const
	static int _bind_getNumberOfVertices(lua_State *L) {
		if (!_lg_typecheck_getNumberOfVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgParticle::PrecipitationEffect::PrecipitationDrawable::getNumberOfVertices() const function, expected prototype:\nunsigned int osgParticle::PrecipitationEffect::PrecipitationDrawable::getNumberOfVertices() const\nClass arguments details:\n");
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=dynamic_cast< osgParticle::PrecipitationEffect::PrecipitationDrawable* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgParticle::PrecipitationEffect::PrecipitationDrawable::getNumberOfVertices() const");
		}
		unsigned int lret = self->getNumberOfVertices();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::PrecipitationDrawable::drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_drawImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::PrecipitationDrawable::drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osgParticle::PrecipitationEffect::PrecipitationDrawable::drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n");
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgParticle::PrecipitationEffect::PrecipitationDrawable::drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=dynamic_cast< osgParticle::PrecipitationEffect::PrecipitationDrawable* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::PrecipitationDrawable::drawImplementation(osg::RenderInfo &) const");
		}
		self->drawImplementation(renderInfo);

		return 0;
	}

	// osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap & osgParticle::PrecipitationEffect::PrecipitationDrawable::getCurrentCellMatrixMap()
	static int _bind_getCurrentCellMatrixMap(lua_State *L) {
		if (!_lg_typecheck_getCurrentCellMatrixMap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap & osgParticle::PrecipitationEffect::PrecipitationDrawable::getCurrentCellMatrixMap() function, expected prototype:\nosgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap & osgParticle::PrecipitationEffect::PrecipitationDrawable::getCurrentCellMatrixMap()\nClass arguments details:\n");
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=dynamic_cast< osgParticle::PrecipitationEffect::PrecipitationDrawable* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap & osgParticle::PrecipitationEffect::PrecipitationDrawable::getCurrentCellMatrixMap()");
		}
		const osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap* lret = &self->getCurrentCellMatrixMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap >::push(L,lret,false);

		return 1;
	}

	// osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap & osgParticle::PrecipitationEffect::PrecipitationDrawable::getPreviousCellMatrixMap()
	static int _bind_getPreviousCellMatrixMap(lua_State *L) {
		if (!_lg_typecheck_getPreviousCellMatrixMap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap & osgParticle::PrecipitationEffect::PrecipitationDrawable::getPreviousCellMatrixMap() function, expected prototype:\nosgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap & osgParticle::PrecipitationEffect::PrecipitationDrawable::getPreviousCellMatrixMap()\nClass arguments details:\n");
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=dynamic_cast< osgParticle::PrecipitationEffect::PrecipitationDrawable* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap & osgParticle::PrecipitationEffect::PrecipitationDrawable::getPreviousCellMatrixMap()");
		}
		const osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap* lret = &self->getPreviousCellMatrixMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::PrecipitationDrawable::newFrame()
	static int _bind_newFrame(lua_State *L) {
		if (!_lg_typecheck_newFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::PrecipitationDrawable::newFrame() function, expected prototype:\nvoid osgParticle::PrecipitationEffect::PrecipitationDrawable::newFrame()\nClass arguments details:\n");
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=dynamic_cast< osgParticle::PrecipitationEffect::PrecipitationDrawable* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::PrecipitationDrawable::newFrame()");
		}
		self->newFrame();

		return 0;
	}


	// Operator binds:

};

osgParticle::PrecipitationEffect::PrecipitationDrawable* LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_ctor(L);
}

void LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable >::_bind_dtor(osgParticle::PrecipitationEffect::PrecipitationDrawable* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable >::className[] = "PrecipitationDrawable";
const char LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable >::fullName[] = "osgParticle::PrecipitationEffect::PrecipitationDrawable";
const char LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable >::parents[] = {"osg.Drawable", 0};
const int LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable >::hash = 83449039;
const int LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_className},
	{"setRequiresPreviousMatrix", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_setRequiresPreviousMatrix},
	{"getRequiresPreviousMatrix", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_getRequiresPreviousMatrix},
	{"setGeometry", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_setGeometry},
	{"getGeometry", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_getGeometry},
	{"setDrawType", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_setDrawType},
	{"getDrawType", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_getDrawType},
	{"setNumberOfVertices", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_setNumberOfVertices},
	{"getNumberOfVertices", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_getNumberOfVertices},
	{"drawImplementation", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_drawImplementation},
	{"getCurrentCellMatrixMap", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_getCurrentCellMatrixMap},
	{"getPreviousCellMatrixMap", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_getPreviousCellMatrixMap},
	{"newFrame", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_newFrame},
	{"__eq", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable >::enumValues[] = {
	{0,0}
};


