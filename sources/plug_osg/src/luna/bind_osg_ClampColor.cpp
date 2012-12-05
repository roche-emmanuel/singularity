#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_ClampColor.h>

class luna_wrapper_osg_ClampColor {
public:
	typedef Luna< osg::ClampColor > luna_t;

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
		osg::ClampColor* ptr= dynamic_cast< osg::ClampColor* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ClampColor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!dynamic_cast< osg::ClampColor* >(Luna< osg::Referenced >::check(L,1))) ) return false;
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
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::ClampColor* >(Luna< osg::Referenced >::check(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setClampVertexColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getClampVertexColor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setClampFragmentColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getClampFragmentColor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setClampReadColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getClampReadColor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getExtensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setExtensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ClampColor::ClampColor()
	static osg::ClampColor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClampColor::ClampColor() function, expected prototype:\nosg::ClampColor::ClampColor()\nClass arguments details:\n");
		}


		return new osg::ClampColor();
	}

	// osg::ClampColor::ClampColor(unsigned int vertexMode, unsigned int fragmentMode, unsigned int readMode)
	static osg::ClampColor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClampColor::ClampColor(unsigned int vertexMode, unsigned int fragmentMode, unsigned int readMode) function, expected prototype:\nosg::ClampColor::ClampColor(unsigned int vertexMode, unsigned int fragmentMode, unsigned int readMode)\nClass arguments details:\n");
		}

		unsigned int vertexMode=(unsigned int)lua_tointeger(L,1);
		unsigned int fragmentMode=(unsigned int)lua_tointeger(L,2);
		unsigned int readMode=(unsigned int)lua_tointeger(L,3);

		return new osg::ClampColor(vertexMode, fragmentMode, readMode);
	}

	// osg::ClampColor::ClampColor(const osg::ClampColor & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ClampColor* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClampColor::ClampColor(const osg::ClampColor & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ClampColor::ClampColor(const osg::ClampColor & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::ClampColor* rhs_ptr=dynamic_cast< osg::ClampColor* >(Luna< osg::Referenced >::check(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::ClampColor::ClampColor function");
		}
		const osg::ClampColor & rhs=*rhs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ClampColor::ClampColor function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::ClampColor(rhs, copyop);
	}

	// osg::ClampColor::ClampColor(lua_Table * data)
	static osg::ClampColor* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClampColor::ClampColor(lua_Table * data) function, expected prototype:\nosg::ClampColor::ClampColor(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_ClampColor(L,NULL);
	}

	// osg::ClampColor::ClampColor(lua_Table * data, unsigned int vertexMode, unsigned int fragmentMode, unsigned int readMode)
	static osg::ClampColor* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClampColor::ClampColor(lua_Table * data, unsigned int vertexMode, unsigned int fragmentMode, unsigned int readMode) function, expected prototype:\nosg::ClampColor::ClampColor(lua_Table * data, unsigned int vertexMode, unsigned int fragmentMode, unsigned int readMode)\nClass arguments details:\n");
		}

		unsigned int vertexMode=(unsigned int)lua_tointeger(L,2);
		unsigned int fragmentMode=(unsigned int)lua_tointeger(L,3);
		unsigned int readMode=(unsigned int)lua_tointeger(L,4);

		return new wrapper_osg_ClampColor(L,NULL, vertexMode, fragmentMode, readMode);
	}

	// osg::ClampColor::ClampColor(lua_Table * data, const osg::ClampColor & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ClampColor* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClampColor::ClampColor(lua_Table * data, const osg::ClampColor & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ClampColor::ClampColor(lua_Table * data, const osg::ClampColor & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::ClampColor* rhs_ptr=dynamic_cast< osg::ClampColor* >(Luna< osg::Referenced >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::ClampColor::ClampColor function");
		}
		const osg::ClampColor & rhs=*rhs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ClampColor::ClampColor function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_ClampColor(L,NULL, rhs, copyop);
	}

	// Overload binder for osg::ClampColor::ClampColor
	static osg::ClampColor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function ClampColor, cannot match any of the overloads for function ClampColor:\n  ClampColor()\n  ClampColor(unsigned int, unsigned int, unsigned int)\n  ClampColor(const osg::ClampColor &, const osg::CopyOp &)\n  ClampColor(lua_Table *)\n  ClampColor(lua_Table *, unsigned int, unsigned int, unsigned int)\n  ClampColor(lua_Table *, const osg::ClampColor &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::ClampColor::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ClampColor::cloneType() const function, expected prototype:\nosg::Object * osg::ClampColor::cloneType() const\nClass arguments details:\n");
		}


		osg::ClampColor* self=dynamic_cast< osg::ClampColor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ClampColor::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ClampColor::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ClampColor::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::ClampColor::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ClampColor::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ClampColor* self=dynamic_cast< osg::ClampColor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ClampColor::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ClampColor::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ClampColor::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ClampColor::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::ClampColor* self=dynamic_cast< osg::ClampColor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ClampColor::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ClampColor::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ClampColor::libraryName() const function, expected prototype:\nconst char * osg::ClampColor::libraryName() const\nClass arguments details:\n");
		}


		osg::ClampColor* self=dynamic_cast< osg::ClampColor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ClampColor::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ClampColor::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ClampColor::className() const function, expected prototype:\nconst char * osg::ClampColor::className() const\nClass arguments details:\n");
		}


		osg::ClampColor* self=dynamic_cast< osg::ClampColor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ClampColor::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::ClampColor::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::ClampColor::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::ClampColor::getType() const\nClass arguments details:\n");
		}


		osg::ClampColor* self=dynamic_cast< osg::ClampColor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::ClampColor::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::ClampColor::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::ClampColor::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::ClampColor::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::ClampColor::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::ClampColor* self=dynamic_cast< osg::ClampColor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::ClampColor::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ClampColor::setClampVertexColor(unsigned int mode)
	static int _bind_setClampVertexColor(lua_State *L) {
		if (!_lg_typecheck_setClampVertexColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClampColor::setClampVertexColor(unsigned int mode) function, expected prototype:\nvoid osg::ClampColor::setClampVertexColor(unsigned int mode)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osg::ClampColor* self=dynamic_cast< osg::ClampColor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClampColor::setClampVertexColor(unsigned int)");
		}
		self->setClampVertexColor(mode);

		return 0;
	}

	// unsigned int osg::ClampColor::getClampVertexColor() const
	static int _bind_getClampVertexColor(lua_State *L) {
		if (!_lg_typecheck_getClampVertexColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::ClampColor::getClampVertexColor() const function, expected prototype:\nunsigned int osg::ClampColor::getClampVertexColor() const\nClass arguments details:\n");
		}


		osg::ClampColor* self=dynamic_cast< osg::ClampColor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::ClampColor::getClampVertexColor() const");
		}
		unsigned int lret = self->getClampVertexColor();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ClampColor::setClampFragmentColor(unsigned int mode)
	static int _bind_setClampFragmentColor(lua_State *L) {
		if (!_lg_typecheck_setClampFragmentColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClampColor::setClampFragmentColor(unsigned int mode) function, expected prototype:\nvoid osg::ClampColor::setClampFragmentColor(unsigned int mode)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osg::ClampColor* self=dynamic_cast< osg::ClampColor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClampColor::setClampFragmentColor(unsigned int)");
		}
		self->setClampFragmentColor(mode);

		return 0;
	}

	// unsigned int osg::ClampColor::getClampFragmentColor() const
	static int _bind_getClampFragmentColor(lua_State *L) {
		if (!_lg_typecheck_getClampFragmentColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::ClampColor::getClampFragmentColor() const function, expected prototype:\nunsigned int osg::ClampColor::getClampFragmentColor() const\nClass arguments details:\n");
		}


		osg::ClampColor* self=dynamic_cast< osg::ClampColor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::ClampColor::getClampFragmentColor() const");
		}
		unsigned int lret = self->getClampFragmentColor();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ClampColor::setClampReadColor(unsigned int mode)
	static int _bind_setClampReadColor(lua_State *L) {
		if (!_lg_typecheck_setClampReadColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClampColor::setClampReadColor(unsigned int mode) function, expected prototype:\nvoid osg::ClampColor::setClampReadColor(unsigned int mode)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osg::ClampColor* self=dynamic_cast< osg::ClampColor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClampColor::setClampReadColor(unsigned int)");
		}
		self->setClampReadColor(mode);

		return 0;
	}

	// unsigned int osg::ClampColor::getClampReadColor() const
	static int _bind_getClampReadColor(lua_State *L) {
		if (!_lg_typecheck_getClampReadColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::ClampColor::getClampReadColor() const function, expected prototype:\nunsigned int osg::ClampColor::getClampReadColor() const\nClass arguments details:\n");
		}


		osg::ClampColor* self=dynamic_cast< osg::ClampColor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::ClampColor::getClampReadColor() const");
		}
		unsigned int lret = self->getClampReadColor();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ClampColor::apply(osg::State & arg1) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClampColor::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::ClampColor::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ClampColor::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::ClampColor* self=dynamic_cast< osg::ClampColor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClampColor::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}

	// static osg::ClampColor::Extensions * osg::ClampColor::getExtensions(unsigned int contextID, bool createIfNotInitalized)
	static int _bind_getExtensions(lua_State *L) {
		if (!_lg_typecheck_getExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::ClampColor::Extensions * osg::ClampColor::getExtensions(unsigned int contextID, bool createIfNotInitalized) function, expected prototype:\nstatic osg::ClampColor::Extensions * osg::ClampColor::getExtensions(unsigned int contextID, bool createIfNotInitalized)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		bool createIfNotInitalized=(bool)(lua_toboolean(L,2)==1);

		osg::ClampColor::Extensions * lret = osg::ClampColor::getExtensions(contextID, createIfNotInitalized);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ClampColor::Extensions >::push(L,lret,false);

		return 1;
	}

	// static void osg::ClampColor::setExtensions(unsigned int contextID, osg::ClampColor::Extensions * extensions)
	static int _bind_setExtensions(lua_State *L) {
		if (!_lg_typecheck_setExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::ClampColor::setExtensions(unsigned int contextID, osg::ClampColor::Extensions * extensions) function, expected prototype:\nstatic void osg::ClampColor::setExtensions(unsigned int contextID, osg::ClampColor::Extensions * extensions)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		osg::ClampColor::Extensions* extensions=dynamic_cast< osg::ClampColor::Extensions* >(Luna< osg::Referenced >::check(L,2));

		osg::ClampColor::setExtensions(contextID, extensions);

		return 0;
	}


	// Operator binds:

};

osg::ClampColor* LunaTraits< osg::ClampColor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ClampColor::_bind_ctor(L);
}

void LunaTraits< osg::ClampColor >::_bind_dtor(osg::ClampColor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ClampColor >::className[] = "ClampColor";
const char LunaTraits< osg::ClampColor >::fullName[] = "osg::ClampColor";
const char LunaTraits< osg::ClampColor >::moduleName[] = "osg";
const char* LunaTraits< osg::ClampColor >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::ClampColor >::hash = 46562823;
const int LunaTraits< osg::ClampColor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ClampColor >::methods[] = {
	{"cloneType", &luna_wrapper_osg_ClampColor::_bind_cloneType},
	{"clone", &luna_wrapper_osg_ClampColor::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_ClampColor::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_ClampColor::_bind_libraryName},
	{"className", &luna_wrapper_osg_ClampColor::_bind_className},
	{"getType", &luna_wrapper_osg_ClampColor::_bind_getType},
	{"compare", &luna_wrapper_osg_ClampColor::_bind_compare},
	{"setClampVertexColor", &luna_wrapper_osg_ClampColor::_bind_setClampVertexColor},
	{"getClampVertexColor", &luna_wrapper_osg_ClampColor::_bind_getClampVertexColor},
	{"setClampFragmentColor", &luna_wrapper_osg_ClampColor::_bind_setClampFragmentColor},
	{"getClampFragmentColor", &luna_wrapper_osg_ClampColor::_bind_getClampFragmentColor},
	{"setClampReadColor", &luna_wrapper_osg_ClampColor::_bind_setClampReadColor},
	{"getClampReadColor", &luna_wrapper_osg_ClampColor::_bind_getClampReadColor},
	{"apply", &luna_wrapper_osg_ClampColor::_bind_apply},
	{"getExtensions", &luna_wrapper_osg_ClampColor::_bind_getExtensions},
	{"setExtensions", &luna_wrapper_osg_ClampColor::_bind_setExtensions},
	{"__eq", &luna_wrapper_osg_ClampColor::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ClampColor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ClampColor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ClampColor >::enumValues[] = {
	{0,0}
};


