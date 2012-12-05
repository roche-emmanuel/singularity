#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Depth.h>

class luna_wrapper_osg_Depth {
public:
	typedef Luna< osg::Depth > luna_t;

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
		osg::Depth* ptr= dynamic_cast< osg::Depth* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Depth >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>4 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!dynamic_cast< osg::Depth* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Depth* >(Luna< osg::Referenced >::check(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setFunction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFunction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRange(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setZNear(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getZNear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setZFar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getZFar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWriteMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWriteMask(lua_State *L) {
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
	// osg::Depth::Depth(osg::Depth::Function func = osg::Depth::LESS, double zNear = 0.0, double zFar = 1.0, bool writeMask = true)
	static osg::Depth* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Depth::Depth(osg::Depth::Function func = osg::Depth::LESS, double zNear = 0.0, double zFar = 1.0, bool writeMask = true) function, expected prototype:\nosg::Depth::Depth(osg::Depth::Function func = osg::Depth::LESS, double zNear = 0.0, double zFar = 1.0, bool writeMask = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		osg::Depth::Function func=luatop>0 ? (osg::Depth::Function)lua_tointeger(L,1) : osg::Depth::LESS;
		double zNear=luatop>1 ? (double)lua_tonumber(L,2) : 0.0;
		double zFar=luatop>2 ? (double)lua_tonumber(L,3) : 1.0;
		bool writeMask=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : true;

		return new osg::Depth(func, zNear, zFar, writeMask);
	}

	// osg::Depth::Depth(const osg::Depth & dp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Depth* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Depth::Depth(const osg::Depth & dp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Depth::Depth(const osg::Depth & dp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Depth* dp_ptr=dynamic_cast< osg::Depth* >(Luna< osg::Referenced >::check(L,1));
		if( !dp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dp in osg::Depth::Depth function");
		}
		const osg::Depth & dp=*dp_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Depth::Depth function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::Depth(dp, copyop);
	}

	// osg::Depth::Depth(lua_Table * data, osg::Depth::Function func = osg::Depth::LESS, double zNear = 0.0, double zFar = 1.0, bool writeMask = true)
	static osg::Depth* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Depth::Depth(lua_Table * data, osg::Depth::Function func = osg::Depth::LESS, double zNear = 0.0, double zFar = 1.0, bool writeMask = true) function, expected prototype:\nosg::Depth::Depth(lua_Table * data, osg::Depth::Function func = osg::Depth::LESS, double zNear = 0.0, double zFar = 1.0, bool writeMask = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		osg::Depth::Function func=luatop>1 ? (osg::Depth::Function)lua_tointeger(L,2) : osg::Depth::LESS;
		double zNear=luatop>2 ? (double)lua_tonumber(L,3) : 0.0;
		double zFar=luatop>3 ? (double)lua_tonumber(L,4) : 1.0;
		bool writeMask=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : true;

		return new wrapper_osg_Depth(L,NULL, func, zNear, zFar, writeMask);
	}

	// osg::Depth::Depth(lua_Table * data, const osg::Depth & dp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Depth* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Depth::Depth(lua_Table * data, const osg::Depth & dp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Depth::Depth(lua_Table * data, const osg::Depth & dp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Depth* dp_ptr=dynamic_cast< osg::Depth* >(Luna< osg::Referenced >::check(L,2));
		if( !dp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dp in osg::Depth::Depth function");
		}
		const osg::Depth & dp=*dp_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Depth::Depth function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_Depth(L,NULL, dp, copyop);
	}

	// Overload binder for osg::Depth::Depth
	static osg::Depth* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function Depth, cannot match any of the overloads for function Depth:\n  Depth(osg::Depth::Function, double, double, bool)\n  Depth(const osg::Depth &, const osg::CopyOp &)\n  Depth(lua_Table *, osg::Depth::Function, double, double, bool)\n  Depth(lua_Table *, const osg::Depth &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Depth::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Depth::cloneType() const function, expected prototype:\nosg::Object * osg::Depth::cloneType() const\nClass arguments details:\n");
		}


		osg::Depth* self=dynamic_cast< osg::Depth* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Depth::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Depth::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Depth::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Depth::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Depth::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Depth* self=dynamic_cast< osg::Depth* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Depth::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Depth::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Depth::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Depth::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::Depth* self=dynamic_cast< osg::Depth* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Depth::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Depth::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Depth::libraryName() const function, expected prototype:\nconst char * osg::Depth::libraryName() const\nClass arguments details:\n");
		}


		osg::Depth* self=dynamic_cast< osg::Depth* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Depth::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Depth::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Depth::className() const function, expected prototype:\nconst char * osg::Depth::className() const\nClass arguments details:\n");
		}


		osg::Depth* self=dynamic_cast< osg::Depth* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Depth::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::Depth::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::Depth::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::Depth::getType() const\nClass arguments details:\n");
		}


		osg::Depth* self=dynamic_cast< osg::Depth* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::Depth::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Depth::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Depth::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::Depth::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::Depth::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::Depth* self=dynamic_cast< osg::Depth* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Depth::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Depth::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Depth::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::Depth::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Depth::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::Depth* self=dynamic_cast< osg::Depth* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Depth::getModeUsage(osg::StateAttribute::ModeUsage &) const");
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Depth::setFunction(osg::Depth::Function func)
	static int _bind_setFunction(lua_State *L) {
		if (!_lg_typecheck_setFunction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Depth::setFunction(osg::Depth::Function func) function, expected prototype:\nvoid osg::Depth::setFunction(osg::Depth::Function func)\nClass arguments details:\n");
		}

		osg::Depth::Function func=(osg::Depth::Function)lua_tointeger(L,2);

		osg::Depth* self=dynamic_cast< osg::Depth* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Depth::setFunction(osg::Depth::Function)");
		}
		self->setFunction(func);

		return 0;
	}

	// osg::Depth::Function osg::Depth::getFunction() const
	static int _bind_getFunction(lua_State *L) {
		if (!_lg_typecheck_getFunction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Depth::Function osg::Depth::getFunction() const function, expected prototype:\nosg::Depth::Function osg::Depth::getFunction() const\nClass arguments details:\n");
		}


		osg::Depth* self=dynamic_cast< osg::Depth* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Depth::Function osg::Depth::getFunction() const");
		}
		osg::Depth::Function lret = self->getFunction();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Depth::setRange(double zNear, double zFar)
	static int _bind_setRange(lua_State *L) {
		if (!_lg_typecheck_setRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Depth::setRange(double zNear, double zFar) function, expected prototype:\nvoid osg::Depth::setRange(double zNear, double zFar)\nClass arguments details:\n");
		}

		double zNear=(double)lua_tonumber(L,2);
		double zFar=(double)lua_tonumber(L,3);

		osg::Depth* self=dynamic_cast< osg::Depth* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Depth::setRange(double, double)");
		}
		self->setRange(zNear, zFar);

		return 0;
	}

	// void osg::Depth::setZNear(double zNear)
	static int _bind_setZNear(lua_State *L) {
		if (!_lg_typecheck_setZNear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Depth::setZNear(double zNear) function, expected prototype:\nvoid osg::Depth::setZNear(double zNear)\nClass arguments details:\n");
		}

		double zNear=(double)lua_tonumber(L,2);

		osg::Depth* self=dynamic_cast< osg::Depth* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Depth::setZNear(double)");
		}
		self->setZNear(zNear);

		return 0;
	}

	// double osg::Depth::getZNear() const
	static int _bind_getZNear(lua_State *L) {
		if (!_lg_typecheck_getZNear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::Depth::getZNear() const function, expected prototype:\ndouble osg::Depth::getZNear() const\nClass arguments details:\n");
		}


		osg::Depth* self=dynamic_cast< osg::Depth* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::Depth::getZNear() const");
		}
		double lret = self->getZNear();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Depth::setZFar(double zFar)
	static int _bind_setZFar(lua_State *L) {
		if (!_lg_typecheck_setZFar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Depth::setZFar(double zFar) function, expected prototype:\nvoid osg::Depth::setZFar(double zFar)\nClass arguments details:\n");
		}

		double zFar=(double)lua_tonumber(L,2);

		osg::Depth* self=dynamic_cast< osg::Depth* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Depth::setZFar(double)");
		}
		self->setZFar(zFar);

		return 0;
	}

	// double osg::Depth::getZFar() const
	static int _bind_getZFar(lua_State *L) {
		if (!_lg_typecheck_getZFar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::Depth::getZFar() const function, expected prototype:\ndouble osg::Depth::getZFar() const\nClass arguments details:\n");
		}


		osg::Depth* self=dynamic_cast< osg::Depth* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::Depth::getZFar() const");
		}
		double lret = self->getZFar();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Depth::setWriteMask(bool mask)
	static int _bind_setWriteMask(lua_State *L) {
		if (!_lg_typecheck_setWriteMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Depth::setWriteMask(bool mask) function, expected prototype:\nvoid osg::Depth::setWriteMask(bool mask)\nClass arguments details:\n");
		}

		bool mask=(bool)(lua_toboolean(L,2)==1);

		osg::Depth* self=dynamic_cast< osg::Depth* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Depth::setWriteMask(bool)");
		}
		self->setWriteMask(mask);

		return 0;
	}

	// bool osg::Depth::getWriteMask() const
	static int _bind_getWriteMask(lua_State *L) {
		if (!_lg_typecheck_getWriteMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Depth::getWriteMask() const function, expected prototype:\nbool osg::Depth::getWriteMask() const\nClass arguments details:\n");
		}


		osg::Depth* self=dynamic_cast< osg::Depth* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Depth::getWriteMask() const");
		}
		bool lret = self->getWriteMask();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Depth::apply(osg::State & arg1) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Depth::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::Depth::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Depth::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Depth* self=dynamic_cast< osg::Depth* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Depth::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::Depth* LunaTraits< osg::Depth >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Depth::_bind_ctor(L);
}

void LunaTraits< osg::Depth >::_bind_dtor(osg::Depth* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Depth >::className[] = "Depth";
const char LunaTraits< osg::Depth >::fullName[] = "osg::Depth";
const char LunaTraits< osg::Depth >::moduleName[] = "osg";
const char* LunaTraits< osg::Depth >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::Depth >::hash = 75694336;
const int LunaTraits< osg::Depth >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Depth >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Depth::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Depth::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Depth::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Depth::_bind_libraryName},
	{"className", &luna_wrapper_osg_Depth::_bind_className},
	{"getType", &luna_wrapper_osg_Depth::_bind_getType},
	{"compare", &luna_wrapper_osg_Depth::_bind_compare},
	{"getModeUsage", &luna_wrapper_osg_Depth::_bind_getModeUsage},
	{"setFunction", &luna_wrapper_osg_Depth::_bind_setFunction},
	{"getFunction", &luna_wrapper_osg_Depth::_bind_getFunction},
	{"setRange", &luna_wrapper_osg_Depth::_bind_setRange},
	{"setZNear", &luna_wrapper_osg_Depth::_bind_setZNear},
	{"getZNear", &luna_wrapper_osg_Depth::_bind_getZNear},
	{"setZFar", &luna_wrapper_osg_Depth::_bind_setZFar},
	{"getZFar", &luna_wrapper_osg_Depth::_bind_getZFar},
	{"setWriteMask", &luna_wrapper_osg_Depth::_bind_setWriteMask},
	{"getWriteMask", &luna_wrapper_osg_Depth::_bind_getWriteMask},
	{"apply", &luna_wrapper_osg_Depth::_bind_apply},
	{"__eq", &luna_wrapper_osg_Depth::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Depth >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Depth::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Depth >::enumValues[] = {
	{"NEVER", osg::Depth::NEVER},
	{"LESS", osg::Depth::LESS},
	{"EQUAL", osg::Depth::EQUAL},
	{"LEQUAL", osg::Depth::LEQUAL},
	{"GREATER", osg::Depth::GREATER},
	{"NOTEQUAL", osg::Depth::NOTEQUAL},
	{"GEQUAL", osg::Depth::GEQUAL},
	{"ALWAYS", osg::Depth::ALWAYS},
	{0,0}
};


