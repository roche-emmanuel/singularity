#include <plug_common.h>

class luna_wrapper_osg_PolygonOffset {
public:
	typedef Luna< osg::PolygonOffset > luna_t;

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
		osg::PolygonOffset* ptr= dynamic_cast< osg::PolygonOffset* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::PolygonOffset >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!dynamic_cast< osg::PolygonOffset* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFactor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUnits(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUnits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFactorMultiplier(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFactorMultiplier(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUnitsMultiplier(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUnitsMultiplier(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_areFactorAndUnitsMultipliersSet(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFactorAndUnitsMultipliersUsingBestGuessForDriver(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::PolygonOffset::PolygonOffset()
	static osg::PolygonOffset* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PolygonOffset::PolygonOffset() function, expected prototype:\nosg::PolygonOffset::PolygonOffset()\nClass arguments details:\n");
		}


		return new osg::PolygonOffset();
	}

	// osg::PolygonOffset::PolygonOffset(float factor, float units)
	static osg::PolygonOffset* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PolygonOffset::PolygonOffset(float factor, float units) function, expected prototype:\nosg::PolygonOffset::PolygonOffset(float factor, float units)\nClass arguments details:\n");
		}

		float factor=(float)lua_tonumber(L,1);
		float units=(float)lua_tonumber(L,2);

		return new osg::PolygonOffset(factor, units);
	}

	// osg::PolygonOffset::PolygonOffset(const osg::PolygonOffset & po, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::PolygonOffset* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PolygonOffset::PolygonOffset(const osg::PolygonOffset & po, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::PolygonOffset::PolygonOffset(const osg::PolygonOffset & po, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::PolygonOffset* po_ptr=dynamic_cast< osg::PolygonOffset* >(Luna< osg::Referenced >::check(L,1));
		if( !po_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg po in osg::PolygonOffset::PolygonOffset function");
		}
		const osg::PolygonOffset & po=*po_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::PolygonOffset::PolygonOffset function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::PolygonOffset(po, copyop);
	}

	// Overload binder for osg::PolygonOffset::PolygonOffset
	static osg::PolygonOffset* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function PolygonOffset, cannot match any of the overloads for function PolygonOffset:\n  PolygonOffset()\n  PolygonOffset(float, float)\n  PolygonOffset(const osg::PolygonOffset &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::PolygonOffset::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PolygonOffset::cloneType() const function, expected prototype:\nosg::Object * osg::PolygonOffset::cloneType() const\nClass arguments details:\n");
		}


		osg::PolygonOffset* self=dynamic_cast< osg::PolygonOffset* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::PolygonOffset::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::PolygonOffset::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PolygonOffset::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::PolygonOffset::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PolygonOffset::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::PolygonOffset* self=dynamic_cast< osg::PolygonOffset* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::PolygonOffset::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::PolygonOffset::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::PolygonOffset::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::PolygonOffset::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::PolygonOffset* self=dynamic_cast< osg::PolygonOffset* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::PolygonOffset::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::PolygonOffset::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::PolygonOffset::libraryName() const function, expected prototype:\nconst char * osg::PolygonOffset::libraryName() const\nClass arguments details:\n");
		}


		osg::PolygonOffset* self=dynamic_cast< osg::PolygonOffset* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::PolygonOffset::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::PolygonOffset::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::PolygonOffset::className() const function, expected prototype:\nconst char * osg::PolygonOffset::className() const\nClass arguments details:\n");
		}


		osg::PolygonOffset* self=dynamic_cast< osg::PolygonOffset* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::PolygonOffset::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::PolygonOffset::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::PolygonOffset::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::PolygonOffset::getType() const\nClass arguments details:\n");
		}


		osg::PolygonOffset* self=dynamic_cast< osg::PolygonOffset* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::PolygonOffset::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::PolygonOffset::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::PolygonOffset::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::PolygonOffset::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::PolygonOffset::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::PolygonOffset* self=dynamic_cast< osg::PolygonOffset* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::PolygonOffset::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::PolygonOffset::getModeUsage(osg::StateAttribute::ModeUsage & ) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::PolygonOffset::getModeUsage(osg::StateAttribute::ModeUsage & ) const function, expected prototype:\nbool osg::PolygonOffset::getModeUsage(osg::StateAttribute::ModeUsage & ) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PolygonOffset::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::PolygonOffset* self=dynamic_cast< osg::PolygonOffset* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::PolygonOffset::getModeUsage(osg::StateAttribute::ModeUsage &) const");
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::PolygonOffset::setFactor(float factor)
	static int _bind_setFactor(lua_State *L) {
		if (!_lg_typecheck_setFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PolygonOffset::setFactor(float factor) function, expected prototype:\nvoid osg::PolygonOffset::setFactor(float factor)\nClass arguments details:\n");
		}

		float factor=(float)lua_tonumber(L,2);

		osg::PolygonOffset* self=dynamic_cast< osg::PolygonOffset* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PolygonOffset::setFactor(float)");
		}
		self->setFactor(factor);

		return 0;
	}

	// float osg::PolygonOffset::getFactor() const
	static int _bind_getFactor(lua_State *L) {
		if (!_lg_typecheck_getFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::PolygonOffset::getFactor() const function, expected prototype:\nfloat osg::PolygonOffset::getFactor() const\nClass arguments details:\n");
		}


		osg::PolygonOffset* self=dynamic_cast< osg::PolygonOffset* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::PolygonOffset::getFactor() const");
		}
		float lret = self->getFactor();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::PolygonOffset::setUnits(float units)
	static int _bind_setUnits(lua_State *L) {
		if (!_lg_typecheck_setUnits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PolygonOffset::setUnits(float units) function, expected prototype:\nvoid osg::PolygonOffset::setUnits(float units)\nClass arguments details:\n");
		}

		float units=(float)lua_tonumber(L,2);

		osg::PolygonOffset* self=dynamic_cast< osg::PolygonOffset* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PolygonOffset::setUnits(float)");
		}
		self->setUnits(units);

		return 0;
	}

	// float osg::PolygonOffset::getUnits() const
	static int _bind_getUnits(lua_State *L) {
		if (!_lg_typecheck_getUnits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::PolygonOffset::getUnits() const function, expected prototype:\nfloat osg::PolygonOffset::getUnits() const\nClass arguments details:\n");
		}


		osg::PolygonOffset* self=dynamic_cast< osg::PolygonOffset* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::PolygonOffset::getUnits() const");
		}
		float lret = self->getUnits();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::PolygonOffset::apply(osg::State & ) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PolygonOffset::apply(osg::State & ) const function, expected prototype:\nvoid osg::PolygonOffset::apply(osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PolygonOffset::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::PolygonOffset* self=dynamic_cast< osg::PolygonOffset* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PolygonOffset::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}

	// static void osg::PolygonOffset::setFactorMultiplier(float multiplier)
	static int _bind_setFactorMultiplier(lua_State *L) {
		if (!_lg_typecheck_setFactorMultiplier(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::PolygonOffset::setFactorMultiplier(float multiplier) function, expected prototype:\nstatic void osg::PolygonOffset::setFactorMultiplier(float multiplier)\nClass arguments details:\n");
		}

		float multiplier=(float)lua_tonumber(L,1);

		osg::PolygonOffset::setFactorMultiplier(multiplier);

		return 0;
	}

	// static float osg::PolygonOffset::getFactorMultiplier()
	static int _bind_getFactorMultiplier(lua_State *L) {
		if (!_lg_typecheck_getFactorMultiplier(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static float osg::PolygonOffset::getFactorMultiplier() function, expected prototype:\nstatic float osg::PolygonOffset::getFactorMultiplier()\nClass arguments details:\n");
		}


		float lret = osg::PolygonOffset::getFactorMultiplier();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static void osg::PolygonOffset::setUnitsMultiplier(float multiplier)
	static int _bind_setUnitsMultiplier(lua_State *L) {
		if (!_lg_typecheck_setUnitsMultiplier(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::PolygonOffset::setUnitsMultiplier(float multiplier) function, expected prototype:\nstatic void osg::PolygonOffset::setUnitsMultiplier(float multiplier)\nClass arguments details:\n");
		}

		float multiplier=(float)lua_tonumber(L,1);

		osg::PolygonOffset::setUnitsMultiplier(multiplier);

		return 0;
	}

	// static float osg::PolygonOffset::getUnitsMultiplier()
	static int _bind_getUnitsMultiplier(lua_State *L) {
		if (!_lg_typecheck_getUnitsMultiplier(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static float osg::PolygonOffset::getUnitsMultiplier() function, expected prototype:\nstatic float osg::PolygonOffset::getUnitsMultiplier()\nClass arguments details:\n");
		}


		float lret = osg::PolygonOffset::getUnitsMultiplier();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static bool osg::PolygonOffset::areFactorAndUnitsMultipliersSet()
	static int _bind_areFactorAndUnitsMultipliersSet(lua_State *L) {
		if (!_lg_typecheck_areFactorAndUnitsMultipliersSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool osg::PolygonOffset::areFactorAndUnitsMultipliersSet() function, expected prototype:\nstatic bool osg::PolygonOffset::areFactorAndUnitsMultipliersSet()\nClass arguments details:\n");
		}


		bool lret = osg::PolygonOffset::areFactorAndUnitsMultipliersSet();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static void osg::PolygonOffset::setFactorAndUnitsMultipliersUsingBestGuessForDriver()
	static int _bind_setFactorAndUnitsMultipliersUsingBestGuessForDriver(lua_State *L) {
		if (!_lg_typecheck_setFactorAndUnitsMultipliersUsingBestGuessForDriver(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::PolygonOffset::setFactorAndUnitsMultipliersUsingBestGuessForDriver() function, expected prototype:\nstatic void osg::PolygonOffset::setFactorAndUnitsMultipliersUsingBestGuessForDriver()\nClass arguments details:\n");
		}


		osg::PolygonOffset::setFactorAndUnitsMultipliersUsingBestGuessForDriver();

		return 0;
	}


	// Operator binds:

};

osg::PolygonOffset* LunaTraits< osg::PolygonOffset >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_PolygonOffset::_bind_ctor(L);
}

void LunaTraits< osg::PolygonOffset >::_bind_dtor(osg::PolygonOffset* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::PolygonOffset >::className[] = "PolygonOffset";
const char LunaTraits< osg::PolygonOffset >::fullName[] = "osg::PolygonOffset";
const char LunaTraits< osg::PolygonOffset >::moduleName[] = "osg";
const char* LunaTraits< osg::PolygonOffset >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::PolygonOffset >::hash = 56254867;
const int LunaTraits< osg::PolygonOffset >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::PolygonOffset >::methods[] = {
	{"cloneType", &luna_wrapper_osg_PolygonOffset::_bind_cloneType},
	{"clone", &luna_wrapper_osg_PolygonOffset::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_PolygonOffset::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_PolygonOffset::_bind_libraryName},
	{"className", &luna_wrapper_osg_PolygonOffset::_bind_className},
	{"getType", &luna_wrapper_osg_PolygonOffset::_bind_getType},
	{"compare", &luna_wrapper_osg_PolygonOffset::_bind_compare},
	{"getModeUsage", &luna_wrapper_osg_PolygonOffset::_bind_getModeUsage},
	{"setFactor", &luna_wrapper_osg_PolygonOffset::_bind_setFactor},
	{"getFactor", &luna_wrapper_osg_PolygonOffset::_bind_getFactor},
	{"setUnits", &luna_wrapper_osg_PolygonOffset::_bind_setUnits},
	{"getUnits", &luna_wrapper_osg_PolygonOffset::_bind_getUnits},
	{"apply", &luna_wrapper_osg_PolygonOffset::_bind_apply},
	{"setFactorMultiplier", &luna_wrapper_osg_PolygonOffset::_bind_setFactorMultiplier},
	{"getFactorMultiplier", &luna_wrapper_osg_PolygonOffset::_bind_getFactorMultiplier},
	{"setUnitsMultiplier", &luna_wrapper_osg_PolygonOffset::_bind_setUnitsMultiplier},
	{"getUnitsMultiplier", &luna_wrapper_osg_PolygonOffset::_bind_getUnitsMultiplier},
	{"areFactorAndUnitsMultipliersSet", &luna_wrapper_osg_PolygonOffset::_bind_areFactorAndUnitsMultipliersSet},
	{"setFactorAndUnitsMultipliersUsingBestGuessForDriver", &luna_wrapper_osg_PolygonOffset::_bind_setFactorAndUnitsMultipliersUsingBestGuessForDriver},
	{"__eq", &luna_wrapper_osg_PolygonOffset::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::PolygonOffset >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_PolygonOffset::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::PolygonOffset >::enumValues[] = {
	{0,0}
};


