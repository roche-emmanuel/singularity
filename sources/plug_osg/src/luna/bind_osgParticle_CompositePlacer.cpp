#include <plug_common.h>

class luna_wrapper_osgParticle_CompositePlacer {
public:
	typedef Luna< osgParticle::CompositePlacer > luna_t;

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
		osgParticle::CompositePlacer* ptr= dynamic_cast< osgParticle::CompositePlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::CompositePlacer >::push(L,ptr,false);
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
		if( (!dynamic_cast< osgParticle::CompositePlacer* >(Luna< osg::Referenced >::check(L,1))) ) return false;
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

	inline static bool _lg_typecheck_setPlacer(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addPlacer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removePlacer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPlacer_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPlacer_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumPlacers(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_place(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81629555)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_volume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getControlPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::CompositePlacer::CompositePlacer()
	static osgParticle::CompositePlacer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::CompositePlacer::CompositePlacer() function, expected prototype:\nosgParticle::CompositePlacer::CompositePlacer()\nClass arguments details:\n");
		}


		return new osgParticle::CompositePlacer();
	}

	// osgParticle::CompositePlacer::CompositePlacer(const osgParticle::CompositePlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::CompositePlacer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::CompositePlacer::CompositePlacer(const osgParticle::CompositePlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::CompositePlacer::CompositePlacer(const osgParticle::CompositePlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::CompositePlacer* copy_ptr=dynamic_cast< osgParticle::CompositePlacer* >(Luna< osg::Referenced >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::CompositePlacer::CompositePlacer function");
		}
		const osgParticle::CompositePlacer & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::CompositePlacer::CompositePlacer function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::CompositePlacer(copy, copyop);
	}

	// Overload binder for osgParticle::CompositePlacer::CompositePlacer
	static osgParticle::CompositePlacer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function CompositePlacer, cannot match any of the overloads for function CompositePlacer:\n  CompositePlacer()\n  CompositePlacer(const osgParticle::CompositePlacer &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::CompositePlacer::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::CompositePlacer::cloneType() const function, expected prototype:\nosg::Object * osgParticle::CompositePlacer::cloneType() const\nClass arguments details:\n");
		}


		osgParticle::CompositePlacer* self=dynamic_cast< osgParticle::CompositePlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::CompositePlacer::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::CompositePlacer::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::CompositePlacer::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgParticle::CompositePlacer::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::CompositePlacer::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::CompositePlacer* self=dynamic_cast< osgParticle::CompositePlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::CompositePlacer::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::CompositePlacer::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::CompositePlacer::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::CompositePlacer::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::CompositePlacer* self=dynamic_cast< osgParticle::CompositePlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::CompositePlacer::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::CompositePlacer::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::CompositePlacer::libraryName() const function, expected prototype:\nconst char * osgParticle::CompositePlacer::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::CompositePlacer* self=dynamic_cast< osgParticle::CompositePlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::CompositePlacer::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::CompositePlacer::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::CompositePlacer::className() const function, expected prototype:\nconst char * osgParticle::CompositePlacer::className() const\nClass arguments details:\n");
		}


		osgParticle::CompositePlacer* self=dynamic_cast< osgParticle::CompositePlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::CompositePlacer::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::CompositePlacer::setPlacer(unsigned int i, osgParticle::Placer * p)
	static int _bind_setPlacer(lua_State *L) {
		if (!_lg_typecheck_setPlacer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::CompositePlacer::setPlacer(unsigned int i, osgParticle::Placer * p) function, expected prototype:\nvoid osgParticle::CompositePlacer::setPlacer(unsigned int i, osgParticle::Placer * p)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osgParticle::Placer* p=dynamic_cast< osgParticle::Placer* >(Luna< osg::Referenced >::check(L,3));

		osgParticle::CompositePlacer* self=dynamic_cast< osgParticle::CompositePlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::CompositePlacer::setPlacer(unsigned int, osgParticle::Placer *)");
		}
		self->setPlacer(i, p);

		return 0;
	}

	// void osgParticle::CompositePlacer::addPlacer(osgParticle::Placer * p)
	static int _bind_addPlacer(lua_State *L) {
		if (!_lg_typecheck_addPlacer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::CompositePlacer::addPlacer(osgParticle::Placer * p) function, expected prototype:\nvoid osgParticle::CompositePlacer::addPlacer(osgParticle::Placer * p)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgParticle::Placer* p=dynamic_cast< osgParticle::Placer* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::CompositePlacer* self=dynamic_cast< osgParticle::CompositePlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::CompositePlacer::addPlacer(osgParticle::Placer *)");
		}
		self->addPlacer(p);

		return 0;
	}

	// void osgParticle::CompositePlacer::removePlacer(unsigned int i)
	static int _bind_removePlacer(lua_State *L) {
		if (!_lg_typecheck_removePlacer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::CompositePlacer::removePlacer(unsigned int i) function, expected prototype:\nvoid osgParticle::CompositePlacer::removePlacer(unsigned int i)\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osgParticle::CompositePlacer* self=dynamic_cast< osgParticle::CompositePlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::CompositePlacer::removePlacer(unsigned int)");
		}
		self->removePlacer(i);

		return 0;
	}

	// osgParticle::Placer * osgParticle::CompositePlacer::getPlacer(unsigned int i)
	static int _bind_getPlacer_overload_1(lua_State *L) {
		if (!_lg_typecheck_getPlacer_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::Placer * osgParticle::CompositePlacer::getPlacer(unsigned int i) function, expected prototype:\nosgParticle::Placer * osgParticle::CompositePlacer::getPlacer(unsigned int i)\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osgParticle::CompositePlacer* self=dynamic_cast< osgParticle::CompositePlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgParticle::Placer * osgParticle::CompositePlacer::getPlacer(unsigned int)");
		}
		osgParticle::Placer * lret = self->getPlacer(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Placer >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Placer * osgParticle::CompositePlacer::getPlacer(unsigned int i) const
	static int _bind_getPlacer_overload_2(lua_State *L) {
		if (!_lg_typecheck_getPlacer_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgParticle::Placer * osgParticle::CompositePlacer::getPlacer(unsigned int i) const function, expected prototype:\nconst osgParticle::Placer * osgParticle::CompositePlacer::getPlacer(unsigned int i) const\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osgParticle::CompositePlacer* self=dynamic_cast< osgParticle::CompositePlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgParticle::Placer * osgParticle::CompositePlacer::getPlacer(unsigned int) const");
		}
		const osgParticle::Placer * lret = self->getPlacer(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Placer >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::CompositePlacer::getPlacer
	static int _bind_getPlacer(lua_State *L) {
		if (_lg_typecheck_getPlacer_overload_1(L)) return _bind_getPlacer_overload_1(L);
		if (_lg_typecheck_getPlacer_overload_2(L)) return _bind_getPlacer_overload_2(L);

		luaL_error(L, "error in function getPlacer, cannot match any of the overloads for function getPlacer:\n  getPlacer(unsigned int)\n  getPlacer(unsigned int)\n");
		return 0;
	}

	// unsigned int osgParticle::CompositePlacer::getNumPlacers() const
	static int _bind_getNumPlacers(lua_State *L) {
		if (!_lg_typecheck_getNumPlacers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgParticle::CompositePlacer::getNumPlacers() const function, expected prototype:\nunsigned int osgParticle::CompositePlacer::getNumPlacers() const\nClass arguments details:\n");
		}


		osgParticle::CompositePlacer* self=dynamic_cast< osgParticle::CompositePlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgParticle::CompositePlacer::getNumPlacers() const");
		}
		unsigned int lret = self->getNumPlacers();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::CompositePlacer::place(osgParticle::Particle * P) const
	static int _bind_place(lua_State *L) {
		if (!_lg_typecheck_place(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::CompositePlacer::place(osgParticle::Particle * P) const function, expected prototype:\nvoid osgParticle::CompositePlacer::place(osgParticle::Particle * P) const\nClass arguments details:\narg 1 ID = 81629555\n");
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));

		osgParticle::CompositePlacer* self=dynamic_cast< osgParticle::CompositePlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::CompositePlacer::place(osgParticle::Particle *) const");
		}
		self->place(P);

		return 0;
	}

	// float osgParticle::CompositePlacer::volume() const
	static int _bind_volume(lua_State *L) {
		if (!_lg_typecheck_volume(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::CompositePlacer::volume() const function, expected prototype:\nfloat osgParticle::CompositePlacer::volume() const\nClass arguments details:\n");
		}


		osgParticle::CompositePlacer* self=dynamic_cast< osgParticle::CompositePlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::CompositePlacer::volume() const");
		}
		float lret = self->volume();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Vec3f osgParticle::CompositePlacer::getControlPosition() const
	static int _bind_getControlPosition(lua_State *L) {
		if (!_lg_typecheck_getControlPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgParticle::CompositePlacer::getControlPosition() const function, expected prototype:\nosg::Vec3f osgParticle::CompositePlacer::getControlPosition() const\nClass arguments details:\n");
		}


		osgParticle::CompositePlacer* self=dynamic_cast< osgParticle::CompositePlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osgParticle::CompositePlacer::getControlPosition() const");
		}
		osg::Vec3f stack_lret = self->getControlPosition();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osgParticle::CompositePlacer* LunaTraits< osgParticle::CompositePlacer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_CompositePlacer::_bind_ctor(L);
}

void LunaTraits< osgParticle::CompositePlacer >::_bind_dtor(osgParticle::CompositePlacer* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::CompositePlacer >::className[] = "CompositePlacer";
const char LunaTraits< osgParticle::CompositePlacer >::fullName[] = "osgParticle::CompositePlacer";
const char LunaTraits< osgParticle::CompositePlacer >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::CompositePlacer >::parents[] = {"osgParticle.Placer", 0};
const int LunaTraits< osgParticle::CompositePlacer >::hash = 97682337;
const int LunaTraits< osgParticle::CompositePlacer >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::CompositePlacer >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_CompositePlacer::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_CompositePlacer::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_CompositePlacer::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgParticle_CompositePlacer::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_CompositePlacer::_bind_className},
	{"setPlacer", &luna_wrapper_osgParticle_CompositePlacer::_bind_setPlacer},
	{"addPlacer", &luna_wrapper_osgParticle_CompositePlacer::_bind_addPlacer},
	{"removePlacer", &luna_wrapper_osgParticle_CompositePlacer::_bind_removePlacer},
	{"getPlacer", &luna_wrapper_osgParticle_CompositePlacer::_bind_getPlacer},
	{"getNumPlacers", &luna_wrapper_osgParticle_CompositePlacer::_bind_getNumPlacers},
	{"place", &luna_wrapper_osgParticle_CompositePlacer::_bind_place},
	{"volume", &luna_wrapper_osgParticle_CompositePlacer::_bind_volume},
	{"getControlPosition", &luna_wrapper_osgParticle_CompositePlacer::_bind_getControlPosition},
	{"__eq", &luna_wrapper_osgParticle_CompositePlacer::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::CompositePlacer >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_CompositePlacer::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::CompositePlacer >::enumValues[] = {
	{0,0}
};


