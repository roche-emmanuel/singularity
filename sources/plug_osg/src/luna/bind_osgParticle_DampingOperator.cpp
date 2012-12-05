#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_DampingOperator.h>

class luna_wrapper_osgParticle_DampingOperator {
public:
	typedef Luna< osgParticle::DampingOperator > luna_t;

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
		osgParticle::DampingOperator* ptr= dynamic_cast< osgParticle::DampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::DampingOperator >::push(L,ptr,false);
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
		if( (!dynamic_cast< osgParticle::DampingOperator* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osgParticle::DampingOperator* >(Luna< osg::Referenced >::check(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setDamping_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDamping_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!dynamic_cast< osg::Vec3f* >(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDamping_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDamping_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDamping_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCutoff(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCutoffLow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCutoffHigh(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCutoff(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCutoffLow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCutoffHigh(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_operate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81629555)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::DampingOperator::DampingOperator()
	static osgParticle::DampingOperator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::DampingOperator::DampingOperator() function, expected prototype:\nosgParticle::DampingOperator::DampingOperator()\nClass arguments details:\n");
		}


		return new osgParticle::DampingOperator();
	}

	// osgParticle::DampingOperator::DampingOperator(const osgParticle::DampingOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::DampingOperator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::DampingOperator::DampingOperator(const osgParticle::DampingOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::DampingOperator::DampingOperator(const osgParticle::DampingOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::DampingOperator* copy_ptr=dynamic_cast< osgParticle::DampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::DampingOperator::DampingOperator function");
		}
		const osgParticle::DampingOperator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::DampingOperator::DampingOperator function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::DampingOperator(copy, copyop);
	}

	// osgParticle::DampingOperator::DampingOperator(lua_Table * data)
	static osgParticle::DampingOperator* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::DampingOperator::DampingOperator(lua_Table * data) function, expected prototype:\nosgParticle::DampingOperator::DampingOperator(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgParticle_DampingOperator(L,NULL);
	}

	// osgParticle::DampingOperator::DampingOperator(lua_Table * data, const osgParticle::DampingOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::DampingOperator* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::DampingOperator::DampingOperator(lua_Table * data, const osgParticle::DampingOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::DampingOperator::DampingOperator(lua_Table * data, const osgParticle::DampingOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::DampingOperator* copy_ptr=dynamic_cast< osgParticle::DampingOperator* >(Luna< osg::Referenced >::check(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::DampingOperator::DampingOperator function");
		}
		const osgParticle::DampingOperator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::DampingOperator::DampingOperator function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_DampingOperator(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::DampingOperator::DampingOperator
	static osgParticle::DampingOperator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function DampingOperator, cannot match any of the overloads for function DampingOperator:\n  DampingOperator()\n  DampingOperator(const osgParticle::DampingOperator &, const osg::CopyOp &)\n  DampingOperator(lua_Table *)\n  DampingOperator(lua_Table *, const osgParticle::DampingOperator &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::DampingOperator::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::DampingOperator::cloneType() const function, expected prototype:\nosg::Object * osgParticle::DampingOperator::cloneType() const\nClass arguments details:\n");
		}


		osgParticle::DampingOperator* self=dynamic_cast< osgParticle::DampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::DampingOperator::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::DampingOperator::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::DampingOperator::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgParticle::DampingOperator::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::DampingOperator::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::DampingOperator* self=dynamic_cast< osgParticle::DampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::DampingOperator::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::DampingOperator::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::DampingOperator::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::DampingOperator::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::DampingOperator* self=dynamic_cast< osgParticle::DampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::DampingOperator::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::DampingOperator::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::DampingOperator::libraryName() const function, expected prototype:\nconst char * osgParticle::DampingOperator::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::DampingOperator* self=dynamic_cast< osgParticle::DampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::DampingOperator::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::DampingOperator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::DampingOperator::className() const function, expected prototype:\nconst char * osgParticle::DampingOperator::className() const\nClass arguments details:\n");
		}


		osgParticle::DampingOperator* self=dynamic_cast< osgParticle::DampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::DampingOperator::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::DampingOperator::setDamping(float x, float y, float z)
	static int _bind_setDamping_overload_1(lua_State *L) {
		if (!_lg_typecheck_setDamping_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::DampingOperator::setDamping(float x, float y, float z) function, expected prototype:\nvoid osgParticle::DampingOperator::setDamping(float x, float y, float z)\nClass arguments details:\n");
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=(float)lua_tonumber(L,4);

		osgParticle::DampingOperator* self=dynamic_cast< osgParticle::DampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::DampingOperator::setDamping(float, float, float)");
		}
		self->setDamping(x, y, z);

		return 0;
	}

	// void osgParticle::DampingOperator::setDamping(const osg::Vec3f & damping)
	static int _bind_setDamping_overload_2(lua_State *L) {
		if (!_lg_typecheck_setDamping_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::DampingOperator::setDamping(const osg::Vec3f & damping) function, expected prototype:\nvoid osgParticle::DampingOperator::setDamping(const osg::Vec3f & damping)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* damping_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !damping_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg damping in osgParticle::DampingOperator::setDamping function");
		}
		const osg::Vec3f & damping=*damping_ptr;

		osgParticle::DampingOperator* self=dynamic_cast< osgParticle::DampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::DampingOperator::setDamping(const osg::Vec3f &)");
		}
		self->setDamping(damping);

		return 0;
	}

	// void osgParticle::DampingOperator::setDamping(float x)
	static int _bind_setDamping_overload_3(lua_State *L) {
		if (!_lg_typecheck_setDamping_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::DampingOperator::setDamping(float x) function, expected prototype:\nvoid osgParticle::DampingOperator::setDamping(float x)\nClass arguments details:\n");
		}

		float x=(float)lua_tonumber(L,2);

		osgParticle::DampingOperator* self=dynamic_cast< osgParticle::DampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::DampingOperator::setDamping(float)");
		}
		self->setDamping(x);

		return 0;
	}

	// Overload binder for osgParticle::DampingOperator::setDamping
	static int _bind_setDamping(lua_State *L) {
		if (_lg_typecheck_setDamping_overload_1(L)) return _bind_setDamping_overload_1(L);
		if (_lg_typecheck_setDamping_overload_2(L)) return _bind_setDamping_overload_2(L);
		if (_lg_typecheck_setDamping_overload_3(L)) return _bind_setDamping_overload_3(L);

		luaL_error(L, "error in function setDamping, cannot match any of the overloads for function setDamping:\n  setDamping(float, float, float)\n  setDamping(const osg::Vec3f &)\n  setDamping(float)\n");
		return 0;
	}

	// void osgParticle::DampingOperator::getDamping(float & x, float & y, float & z) const
	static int _bind_getDamping_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDamping_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::DampingOperator::getDamping(float & x, float & y, float & z) const function, expected prototype:\nvoid osgParticle::DampingOperator::getDamping(float & x, float & y, float & z) const\nClass arguments details:\n");
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=(float)lua_tonumber(L,4);

		osgParticle::DampingOperator* self=dynamic_cast< osgParticle::DampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::DampingOperator::getDamping(float &, float &, float &) const");
		}
		self->getDamping(x, y, z);

		return 0;
	}

	// const osg::Vec3f & osgParticle::DampingOperator::getDamping() const
	static int _bind_getDamping_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDamping_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::DampingOperator::getDamping() const function, expected prototype:\nconst osg::Vec3f & osgParticle::DampingOperator::getDamping() const\nClass arguments details:\n");
		}


		osgParticle::DampingOperator* self=dynamic_cast< osgParticle::DampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::DampingOperator::getDamping() const");
		}
		const osg::Vec3f* lret = &self->getDamping();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::DampingOperator::getDamping
	static int _bind_getDamping(lua_State *L) {
		if (_lg_typecheck_getDamping_overload_1(L)) return _bind_getDamping_overload_1(L);
		if (_lg_typecheck_getDamping_overload_2(L)) return _bind_getDamping_overload_2(L);

		luaL_error(L, "error in function getDamping, cannot match any of the overloads for function getDamping:\n  getDamping(float &, float &, float &)\n  getDamping()\n");
		return 0;
	}

	// void osgParticle::DampingOperator::setCutoff(float low, float high)
	static int _bind_setCutoff(lua_State *L) {
		if (!_lg_typecheck_setCutoff(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::DampingOperator::setCutoff(float low, float high) function, expected prototype:\nvoid osgParticle::DampingOperator::setCutoff(float low, float high)\nClass arguments details:\n");
		}

		float low=(float)lua_tonumber(L,2);
		float high=(float)lua_tonumber(L,3);

		osgParticle::DampingOperator* self=dynamic_cast< osgParticle::DampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::DampingOperator::setCutoff(float, float)");
		}
		self->setCutoff(low, high);

		return 0;
	}

	// void osgParticle::DampingOperator::setCutoffLow(float low)
	static int _bind_setCutoffLow(lua_State *L) {
		if (!_lg_typecheck_setCutoffLow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::DampingOperator::setCutoffLow(float low) function, expected prototype:\nvoid osgParticle::DampingOperator::setCutoffLow(float low)\nClass arguments details:\n");
		}

		float low=(float)lua_tonumber(L,2);

		osgParticle::DampingOperator* self=dynamic_cast< osgParticle::DampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::DampingOperator::setCutoffLow(float)");
		}
		self->setCutoffLow(low);

		return 0;
	}

	// void osgParticle::DampingOperator::setCutoffHigh(float low)
	static int _bind_setCutoffHigh(lua_State *L) {
		if (!_lg_typecheck_setCutoffHigh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::DampingOperator::setCutoffHigh(float low) function, expected prototype:\nvoid osgParticle::DampingOperator::setCutoffHigh(float low)\nClass arguments details:\n");
		}

		float low=(float)lua_tonumber(L,2);

		osgParticle::DampingOperator* self=dynamic_cast< osgParticle::DampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::DampingOperator::setCutoffHigh(float)");
		}
		self->setCutoffHigh(low);

		return 0;
	}

	// void osgParticle::DampingOperator::getCutoff(float & low, float & high) const
	static int _bind_getCutoff(lua_State *L) {
		if (!_lg_typecheck_getCutoff(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::DampingOperator::getCutoff(float & low, float & high) const function, expected prototype:\nvoid osgParticle::DampingOperator::getCutoff(float & low, float & high) const\nClass arguments details:\n");
		}

		float low=(float)lua_tonumber(L,2);
		float high=(float)lua_tonumber(L,3);

		osgParticle::DampingOperator* self=dynamic_cast< osgParticle::DampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::DampingOperator::getCutoff(float &, float &) const");
		}
		self->getCutoff(low, high);

		return 0;
	}

	// float osgParticle::DampingOperator::getCutoffLow() const
	static int _bind_getCutoffLow(lua_State *L) {
		if (!_lg_typecheck_getCutoffLow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::DampingOperator::getCutoffLow() const function, expected prototype:\nfloat osgParticle::DampingOperator::getCutoffLow() const\nClass arguments details:\n");
		}


		osgParticle::DampingOperator* self=dynamic_cast< osgParticle::DampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::DampingOperator::getCutoffLow() const");
		}
		float lret = self->getCutoffLow();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgParticle::DampingOperator::getCutoffHigh() const
	static int _bind_getCutoffHigh(lua_State *L) {
		if (!_lg_typecheck_getCutoffHigh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::DampingOperator::getCutoffHigh() const function, expected prototype:\nfloat osgParticle::DampingOperator::getCutoffHigh() const\nClass arguments details:\n");
		}


		osgParticle::DampingOperator* self=dynamic_cast< osgParticle::DampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::DampingOperator::getCutoffHigh() const");
		}
		float lret = self->getCutoffHigh();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::DampingOperator::operate(osgParticle::Particle * P, double dt)
	static int _bind_operate(lua_State *L) {
		if (!_lg_typecheck_operate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::DampingOperator::operate(osgParticle::Particle * P, double dt) function, expected prototype:\nvoid osgParticle::DampingOperator::operate(osgParticle::Particle * P, double dt)\nClass arguments details:\narg 1 ID = 81629555\n");
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));
		double dt=(double)lua_tonumber(L,3);

		osgParticle::DampingOperator* self=dynamic_cast< osgParticle::DampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::DampingOperator::operate(osgParticle::Particle *, double)");
		}
		self->operate(P, dt);

		return 0;
	}


	// Operator binds:

};

osgParticle::DampingOperator* LunaTraits< osgParticle::DampingOperator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_DampingOperator::_bind_ctor(L);
}

void LunaTraits< osgParticle::DampingOperator >::_bind_dtor(osgParticle::DampingOperator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::DampingOperator >::className[] = "DampingOperator";
const char LunaTraits< osgParticle::DampingOperator >::fullName[] = "osgParticle::DampingOperator";
const char LunaTraits< osgParticle::DampingOperator >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::DampingOperator >::parents[] = {"osgParticle.Operator", 0};
const int LunaTraits< osgParticle::DampingOperator >::hash = 59156275;
const int LunaTraits< osgParticle::DampingOperator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::DampingOperator >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_DampingOperator::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_DampingOperator::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_DampingOperator::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgParticle_DampingOperator::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_DampingOperator::_bind_className},
	{"setDamping", &luna_wrapper_osgParticle_DampingOperator::_bind_setDamping},
	{"getDamping", &luna_wrapper_osgParticle_DampingOperator::_bind_getDamping},
	{"setCutoff", &luna_wrapper_osgParticle_DampingOperator::_bind_setCutoff},
	{"setCutoffLow", &luna_wrapper_osgParticle_DampingOperator::_bind_setCutoffLow},
	{"setCutoffHigh", &luna_wrapper_osgParticle_DampingOperator::_bind_setCutoffHigh},
	{"getCutoff", &luna_wrapper_osgParticle_DampingOperator::_bind_getCutoff},
	{"getCutoffLow", &luna_wrapper_osgParticle_DampingOperator::_bind_getCutoffLow},
	{"getCutoffHigh", &luna_wrapper_osgParticle_DampingOperator::_bind_getCutoffHigh},
	{"operate", &luna_wrapper_osgParticle_DampingOperator::_bind_operate},
	{"__eq", &luna_wrapper_osgParticle_DampingOperator::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::DampingOperator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_DampingOperator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::DampingOperator >::enumValues[] = {
	{0,0}
};


