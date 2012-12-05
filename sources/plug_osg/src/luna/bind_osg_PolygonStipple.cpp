#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_PolygonStipple.h>

class luna_wrapper_osg_PolygonStipple {
public:
	typedef Luna< osg::PolygonStipple > luna_t;

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
		osg::PolygonStipple* ptr= dynamic_cast< osg::PolygonStipple* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::PolygonStipple >::push(L,ptr,false);
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
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!dynamic_cast< osg::PolygonStipple* >(Luna< osg::Referenced >::check(L,1))) ) return false;
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
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::PolygonStipple* >(Luna< osg::Referenced >::check(L,2))) ) return false;
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

	inline static bool _lg_typecheck_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMask(lua_State *L) {
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
	// osg::PolygonStipple::PolygonStipple()
	static osg::PolygonStipple* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PolygonStipple::PolygonStipple() function, expected prototype:\nosg::PolygonStipple::PolygonStipple()\nClass arguments details:\n");
		}


		return new osg::PolygonStipple();
	}

	// osg::PolygonStipple::PolygonStipple(const unsigned char * mask)
	static osg::PolygonStipple* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PolygonStipple::PolygonStipple(const unsigned char * mask) function, expected prototype:\nosg::PolygonStipple::PolygonStipple(const unsigned char * mask)\nClass arguments details:\n");
		}

		unsigned char mask = (unsigned char)(lua_tointeger(L,1));

		return new osg::PolygonStipple(&mask);
	}

	// osg::PolygonStipple::PolygonStipple(const osg::PolygonStipple & lw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::PolygonStipple* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PolygonStipple::PolygonStipple(const osg::PolygonStipple & lw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::PolygonStipple::PolygonStipple(const osg::PolygonStipple & lw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::PolygonStipple* lw_ptr=dynamic_cast< osg::PolygonStipple* >(Luna< osg::Referenced >::check(L,1));
		if( !lw_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg lw in osg::PolygonStipple::PolygonStipple function");
		}
		const osg::PolygonStipple & lw=*lw_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::PolygonStipple::PolygonStipple function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::PolygonStipple(lw, copyop);
	}

	// osg::PolygonStipple::PolygonStipple(lua_Table * data)
	static osg::PolygonStipple* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PolygonStipple::PolygonStipple(lua_Table * data) function, expected prototype:\nosg::PolygonStipple::PolygonStipple(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_PolygonStipple(L,NULL);
	}

	// osg::PolygonStipple::PolygonStipple(lua_Table * data, const unsigned char * mask)
	static osg::PolygonStipple* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PolygonStipple::PolygonStipple(lua_Table * data, const unsigned char * mask) function, expected prototype:\nosg::PolygonStipple::PolygonStipple(lua_Table * data, const unsigned char * mask)\nClass arguments details:\n");
		}

		unsigned char mask = (unsigned char)(lua_tointeger(L,2));

		return new wrapper_osg_PolygonStipple(L,NULL, &mask);
	}

	// osg::PolygonStipple::PolygonStipple(lua_Table * data, const osg::PolygonStipple & lw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::PolygonStipple* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PolygonStipple::PolygonStipple(lua_Table * data, const osg::PolygonStipple & lw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::PolygonStipple::PolygonStipple(lua_Table * data, const osg::PolygonStipple & lw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::PolygonStipple* lw_ptr=dynamic_cast< osg::PolygonStipple* >(Luna< osg::Referenced >::check(L,2));
		if( !lw_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg lw in osg::PolygonStipple::PolygonStipple function");
		}
		const osg::PolygonStipple & lw=*lw_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::PolygonStipple::PolygonStipple function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_PolygonStipple(L,NULL, lw, copyop);
	}

	// Overload binder for osg::PolygonStipple::PolygonStipple
	static osg::PolygonStipple* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function PolygonStipple, cannot match any of the overloads for function PolygonStipple:\n  PolygonStipple()\n  PolygonStipple(const unsigned char *)\n  PolygonStipple(const osg::PolygonStipple &, const osg::CopyOp &)\n  PolygonStipple(lua_Table *)\n  PolygonStipple(lua_Table *, const unsigned char *)\n  PolygonStipple(lua_Table *, const osg::PolygonStipple &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::PolygonStipple::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PolygonStipple::cloneType() const function, expected prototype:\nosg::Object * osg::PolygonStipple::cloneType() const\nClass arguments details:\n");
		}


		osg::PolygonStipple* self=dynamic_cast< osg::PolygonStipple* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::PolygonStipple::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::PolygonStipple::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PolygonStipple::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::PolygonStipple::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PolygonStipple::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::PolygonStipple* self=dynamic_cast< osg::PolygonStipple* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::PolygonStipple::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::PolygonStipple::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::PolygonStipple::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::PolygonStipple::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::PolygonStipple* self=dynamic_cast< osg::PolygonStipple* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::PolygonStipple::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::PolygonStipple::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::PolygonStipple::libraryName() const function, expected prototype:\nconst char * osg::PolygonStipple::libraryName() const\nClass arguments details:\n");
		}


		osg::PolygonStipple* self=dynamic_cast< osg::PolygonStipple* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::PolygonStipple::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::PolygonStipple::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::PolygonStipple::className() const function, expected prototype:\nconst char * osg::PolygonStipple::className() const\nClass arguments details:\n");
		}


		osg::PolygonStipple* self=dynamic_cast< osg::PolygonStipple* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::PolygonStipple::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::PolygonStipple::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::PolygonStipple::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::PolygonStipple::getType() const\nClass arguments details:\n");
		}


		osg::PolygonStipple* self=dynamic_cast< osg::PolygonStipple* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::PolygonStipple::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::PolygonStipple::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::PolygonStipple::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::PolygonStipple::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::PolygonStipple::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::PolygonStipple* self=dynamic_cast< osg::PolygonStipple* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::PolygonStipple::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::PolygonStipple::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::PolygonStipple::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::PolygonStipple::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PolygonStipple::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::PolygonStipple* self=dynamic_cast< osg::PolygonStipple* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::PolygonStipple::getModeUsage(osg::StateAttribute::ModeUsage &) const");
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::PolygonStipple::setMask(const unsigned char * mask)
	static int _bind_setMask(lua_State *L) {
		if (!_lg_typecheck_setMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PolygonStipple::setMask(const unsigned char * mask) function, expected prototype:\nvoid osg::PolygonStipple::setMask(const unsigned char * mask)\nClass arguments details:\n");
		}

		unsigned char mask = (unsigned char)(lua_tointeger(L,2));

		osg::PolygonStipple* self=dynamic_cast< osg::PolygonStipple* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PolygonStipple::setMask(const unsigned char *)");
		}
		self->setMask(&mask);

		return 0;
	}

	// const unsigned char * osg::PolygonStipple::getMask() const
	static int _bind_getMask(lua_State *L) {
		if (!_lg_typecheck_getMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const unsigned char * osg::PolygonStipple::getMask() const function, expected prototype:\nconst unsigned char * osg::PolygonStipple::getMask() const\nClass arguments details:\n");
		}


		osg::PolygonStipple* self=dynamic_cast< osg::PolygonStipple* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const unsigned char * osg::PolygonStipple::getMask() const");
		}
		const unsigned char * lret = self->getMask();
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// void osg::PolygonStipple::apply(osg::State & arg1) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PolygonStipple::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::PolygonStipple::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PolygonStipple::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::PolygonStipple* self=dynamic_cast< osg::PolygonStipple* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PolygonStipple::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::PolygonStipple* LunaTraits< osg::PolygonStipple >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_PolygonStipple::_bind_ctor(L);
}

void LunaTraits< osg::PolygonStipple >::_bind_dtor(osg::PolygonStipple* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::PolygonStipple >::className[] = "PolygonStipple";
const char LunaTraits< osg::PolygonStipple >::fullName[] = "osg::PolygonStipple";
const char LunaTraits< osg::PolygonStipple >::moduleName[] = "osg";
const char* LunaTraits< osg::PolygonStipple >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::PolygonStipple >::hash = 97414296;
const int LunaTraits< osg::PolygonStipple >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::PolygonStipple >::methods[] = {
	{"cloneType", &luna_wrapper_osg_PolygonStipple::_bind_cloneType},
	{"clone", &luna_wrapper_osg_PolygonStipple::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_PolygonStipple::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_PolygonStipple::_bind_libraryName},
	{"className", &luna_wrapper_osg_PolygonStipple::_bind_className},
	{"getType", &luna_wrapper_osg_PolygonStipple::_bind_getType},
	{"compare", &luna_wrapper_osg_PolygonStipple::_bind_compare},
	{"getModeUsage", &luna_wrapper_osg_PolygonStipple::_bind_getModeUsage},
	{"setMask", &luna_wrapper_osg_PolygonStipple::_bind_setMask},
	{"getMask", &luna_wrapper_osg_PolygonStipple::_bind_getMask},
	{"apply", &luna_wrapper_osg_PolygonStipple::_bind_apply},
	{"__eq", &luna_wrapper_osg_PolygonStipple::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::PolygonStipple >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_PolygonStipple::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::PolygonStipple >::enumValues[] = {
	{0,0}
};


