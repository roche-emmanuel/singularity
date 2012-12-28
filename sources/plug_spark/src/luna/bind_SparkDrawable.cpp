#include <plug_common.h>

#include <luna/wrappers/wrapper_SparkDrawable.h>

class luna_wrapper_SparkDrawable {
public:
	typedef Luna< SparkDrawable > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

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
	static int _cast_from_Drawable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SparkDrawable* ptr= dynamic_cast< SparkDrawable* >(Luna< osg::Referenced >::check(L,1));
		SparkDrawable* ptr= luna_caster< osg::Referenced, SparkDrawable >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SparkDrawable >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
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

	inline static bool _lg_typecheck_isValid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumParticles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBaseSystemCreator(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81795760)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBaseSystemID(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBaseSystemID(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSortParticles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSortParticles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAutoUpdateBound(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAutoUpdateBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProtoSystem_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProtoSystem_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParticleSystem_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParticleSystem_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumParticleSystems(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addExternalParticleSystem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_destroyParticleSystem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGlobalTransformMatrix(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,609798) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTransformMatrix(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,70092749) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,70092749) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addParticleSystem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,80396882) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addImage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_update(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// SparkDrawable::SparkDrawable()
	static SparkDrawable* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SparkDrawable::SparkDrawable() function, expected prototype:\nSparkDrawable::SparkDrawable()\nClass arguments details:\n");
		}


		return new SparkDrawable();
	}

	// SparkDrawable::SparkDrawable(const SparkDrawable & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static SparkDrawable* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SparkDrawable::SparkDrawable(const SparkDrawable & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nSparkDrawable::SparkDrawable(const SparkDrawable & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 20484188\n");
		}

		int luatop = lua_gettop(L);

		const SparkDrawable* copy_ptr=(Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in SparkDrawable::SparkDrawable function");
		}
		const SparkDrawable & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in SparkDrawable::SparkDrawable function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new SparkDrawable(copy, copyop);
	}

	// SparkDrawable::SparkDrawable(lua_Table * data)
	static SparkDrawable* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SparkDrawable::SparkDrawable(lua_Table * data) function, expected prototype:\nSparkDrawable::SparkDrawable(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_SparkDrawable(L,NULL);
	}

	// SparkDrawable::SparkDrawable(lua_Table * data, const SparkDrawable & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static SparkDrawable* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SparkDrawable::SparkDrawable(lua_Table * data, const SparkDrawable & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nSparkDrawable::SparkDrawable(lua_Table * data, const SparkDrawable & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 20484188\n");
		}

		int luatop = lua_gettop(L);

		const SparkDrawable* copy_ptr=(Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in SparkDrawable::SparkDrawable function");
		}
		const SparkDrawable & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in SparkDrawable::SparkDrawable function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_SparkDrawable(L,NULL, copy, copyop);
	}

	// Overload binder for SparkDrawable::SparkDrawable
	static SparkDrawable* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function SparkDrawable, cannot match any of the overloads for function SparkDrawable:\n  SparkDrawable()\n  SparkDrawable(const SparkDrawable &, const osg::CopyOp &)\n  SparkDrawable(lua_Table *)\n  SparkDrawable(lua_Table *, const SparkDrawable &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * SparkDrawable::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * SparkDrawable::cloneType() const function, expected prototype:\nosg::Object * SparkDrawable::cloneType() const\nClass arguments details:\n");
		}


		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * SparkDrawable::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'osg::Object *'
		////////////////////////////////////////////////////////////////////

		return 1;
	}

	// osg::Object * SparkDrawable::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * SparkDrawable::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * SparkDrawable::clone(const osg::CopyOp & copyop) const\nClass arguments details:\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in SparkDrawable::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * SparkDrawable::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(copyop);
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'osg::Object *'
		////////////////////////////////////////////////////////////////////

		return 1;
	}

	// bool SparkDrawable::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SparkDrawable::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool SparkDrawable::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SparkDrawable::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * SparkDrawable::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * SparkDrawable::libraryName() const function, expected prototype:\nconst char * SparkDrawable::libraryName() const\nClass arguments details:\n");
		}


		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * SparkDrawable::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * SparkDrawable::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * SparkDrawable::className() const function, expected prototype:\nconst char * SparkDrawable::className() const\nClass arguments details:\n");
		}


		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * SparkDrawable::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool SparkDrawable::isValid() const
	static int _bind_isValid(lua_State *L) {
		if (!_lg_typecheck_isValid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SparkDrawable::isValid() const function, expected prototype:\nbool SparkDrawable::isValid() const\nClass arguments details:\n");
		}


		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SparkDrawable::isValid() const");
		}
		bool lret = self->isValid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int SparkDrawable::getNumParticles() const
	static int _bind_getNumParticles(lua_State *L) {
		if (!_lg_typecheck_getNumParticles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int SparkDrawable::getNumParticles() const function, expected prototype:\nunsigned int SparkDrawable::getNumParticles() const\nClass arguments details:\n");
		}


		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int SparkDrawable::getNumParticles() const");
		}
		unsigned int lret = self->getNumParticles();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void SparkDrawable::setBaseSystemCreator(SparkDrawable::BaseSystemCreator * func, bool useProtoSystem = false)
	static int _bind_setBaseSystemCreator(lua_State *L) {
		if (!_lg_typecheck_setBaseSystemCreator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SparkDrawable::setBaseSystemCreator(SparkDrawable::BaseSystemCreator * func, bool useProtoSystem = false) function, expected prototype:\nvoid SparkDrawable::setBaseSystemCreator(SparkDrawable::BaseSystemCreator * func, bool useProtoSystem = false)\nClass arguments details:\narg 1 ID = 81795760\n");
		}

		int luatop = lua_gettop(L);

		SparkDrawable::BaseSystemCreator* func=(Luna< SparkDrawable::BaseSystemCreator >::check(L,2));
		bool useProtoSystem=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SparkDrawable::setBaseSystemCreator(SparkDrawable::BaseSystemCreator *, bool)");
		}
		self->setBaseSystemCreator(func, useProtoSystem);

		return 0;
	}

	// void SparkDrawable::setBaseSystemID(unsigned long id)
	static int _bind_setBaseSystemID(lua_State *L) {
		if (!_lg_typecheck_setBaseSystemID(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SparkDrawable::setBaseSystemID(unsigned long id) function, expected prototype:\nvoid SparkDrawable::setBaseSystemID(unsigned long id)\nClass arguments details:\n");
		}

		unsigned long id=(unsigned long)lua_tointeger(L,2);

		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SparkDrawable::setBaseSystemID(unsigned long)");
		}
		self->setBaseSystemID(id);

		return 0;
	}

	// unsigned long SparkDrawable::getBaseSystemID() const
	static int _bind_getBaseSystemID(lua_State *L) {
		if (!_lg_typecheck_getBaseSystemID(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned long SparkDrawable::getBaseSystemID() const function, expected prototype:\nunsigned long SparkDrawable::getBaseSystemID() const\nClass arguments details:\n");
		}


		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned long SparkDrawable::getBaseSystemID() const");
		}
		unsigned long lret = self->getBaseSystemID();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void SparkDrawable::setSortParticles(bool b)
	static int _bind_setSortParticles(lua_State *L) {
		if (!_lg_typecheck_setSortParticles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SparkDrawable::setSortParticles(bool b) function, expected prototype:\nvoid SparkDrawable::setSortParticles(bool b)\nClass arguments details:\n");
		}

		bool b=(bool)(lua_toboolean(L,2)==1);

		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SparkDrawable::setSortParticles(bool)");
		}
		self->setSortParticles(b);

		return 0;
	}

	// bool SparkDrawable::getSortParticles() const
	static int _bind_getSortParticles(lua_State *L) {
		if (!_lg_typecheck_getSortParticles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SparkDrawable::getSortParticles() const function, expected prototype:\nbool SparkDrawable::getSortParticles() const\nClass arguments details:\n");
		}


		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SparkDrawable::getSortParticles() const");
		}
		bool lret = self->getSortParticles();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SparkDrawable::setAutoUpdateBound(bool b)
	static int _bind_setAutoUpdateBound(lua_State *L) {
		if (!_lg_typecheck_setAutoUpdateBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SparkDrawable::setAutoUpdateBound(bool b) function, expected prototype:\nvoid SparkDrawable::setAutoUpdateBound(bool b)\nClass arguments details:\n");
		}

		bool b=(bool)(lua_toboolean(L,2)==1);

		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SparkDrawable::setAutoUpdateBound(bool)");
		}
		self->setAutoUpdateBound(b);

		return 0;
	}

	// bool SparkDrawable::getAutoUpdateBound() const
	static int _bind_getAutoUpdateBound(lua_State *L) {
		if (!_lg_typecheck_getAutoUpdateBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SparkDrawable::getAutoUpdateBound() const function, expected prototype:\nbool SparkDrawable::getAutoUpdateBound() const\nClass arguments details:\n");
		}


		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SparkDrawable::getAutoUpdateBound() const");
		}
		bool lret = self->getAutoUpdateBound();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// SPK::System * SparkDrawable::getProtoSystem()
	static int _bind_getProtoSystem_overload_1(lua_State *L) {
		if (!_lg_typecheck_getProtoSystem_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::System * SparkDrawable::getProtoSystem() function, expected prototype:\nSPK::System * SparkDrawable::getProtoSystem()\nClass arguments details:\n");
		}


		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::System * SparkDrawable::getProtoSystem()");
		}
		SPK::System * lret = self->getProtoSystem();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::System >::push(L,lret,false);

		return 1;
	}

	// const SPK::System * SparkDrawable::getProtoSystem() const
	static int _bind_getProtoSystem_overload_2(lua_State *L) {
		if (!_lg_typecheck_getProtoSystem_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const SPK::System * SparkDrawable::getProtoSystem() const function, expected prototype:\nconst SPK::System * SparkDrawable::getProtoSystem() const\nClass arguments details:\n");
		}


		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const SPK::System * SparkDrawable::getProtoSystem() const");
		}
		const SPK::System * lret = self->getProtoSystem();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::System >::push(L,lret,false);

		return 1;
	}

	// Overload binder for SparkDrawable::getProtoSystem
	static int _bind_getProtoSystem(lua_State *L) {
		if (_lg_typecheck_getProtoSystem_overload_1(L)) return _bind_getProtoSystem_overload_1(L);
		if (_lg_typecheck_getProtoSystem_overload_2(L)) return _bind_getProtoSystem_overload_2(L);

		luaL_error(L, "error in function getProtoSystem, cannot match any of the overloads for function getProtoSystem:\n  getProtoSystem()\n  getProtoSystem()\n");
		return 0;
	}

	// SPK::System * SparkDrawable::getParticleSystem(unsigned int i)
	static int _bind_getParticleSystem_overload_1(lua_State *L) {
		if (!_lg_typecheck_getParticleSystem_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::System * SparkDrawable::getParticleSystem(unsigned int i) function, expected prototype:\nSPK::System * SparkDrawable::getParticleSystem(unsigned int i)\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::System * SparkDrawable::getParticleSystem(unsigned int)");
		}
		SPK::System * lret = self->getParticleSystem(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::System >::push(L,lret,false);

		return 1;
	}

	// const SPK::System * SparkDrawable::getParticleSystem(unsigned int i) const
	static int _bind_getParticleSystem_overload_2(lua_State *L) {
		if (!_lg_typecheck_getParticleSystem_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const SPK::System * SparkDrawable::getParticleSystem(unsigned int i) const function, expected prototype:\nconst SPK::System * SparkDrawable::getParticleSystem(unsigned int i) const\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const SPK::System * SparkDrawable::getParticleSystem(unsigned int) const");
		}
		const SPK::System * lret = self->getParticleSystem(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::System >::push(L,lret,false);

		return 1;
	}

	// Overload binder for SparkDrawable::getParticleSystem
	static int _bind_getParticleSystem(lua_State *L) {
		if (_lg_typecheck_getParticleSystem_overload_1(L)) return _bind_getParticleSystem_overload_1(L);
		if (_lg_typecheck_getParticleSystem_overload_2(L)) return _bind_getParticleSystem_overload_2(L);

		luaL_error(L, "error in function getParticleSystem, cannot match any of the overloads for function getParticleSystem:\n  getParticleSystem(unsigned int)\n  getParticleSystem(unsigned int)\n");
		return 0;
	}

	// unsigned int SparkDrawable::getNumParticleSystems() const
	static int _bind_getNumParticleSystems(lua_State *L) {
		if (!_lg_typecheck_getNumParticleSystems(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int SparkDrawable::getNumParticleSystems() const function, expected prototype:\nunsigned int SparkDrawable::getNumParticleSystems() const\nClass arguments details:\n");
		}


		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int SparkDrawable::getNumParticleSystems() const");
		}
		unsigned int lret = self->getNumParticleSystems();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void SparkDrawable::addExternalParticleSystem(SPK::System * system)
	static int _bind_addExternalParticleSystem(lua_State *L) {
		if (!_lg_typecheck_addExternalParticleSystem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SparkDrawable::addExternalParticleSystem(SPK::System * system) function, expected prototype:\nvoid SparkDrawable::addExternalParticleSystem(SPK::System * system)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		SPK::System* system=(Luna< SPK::Registerable >::checkSubType< SPK::System >(L,2));

		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SparkDrawable::addExternalParticleSystem(SPK::System *)");
		}
		self->addExternalParticleSystem(system);

		return 0;
	}

	// void SparkDrawable::destroyParticleSystem(SPK::System * system, bool removeFromList = true)
	static int _bind_destroyParticleSystem(lua_State *L) {
		if (!_lg_typecheck_destroyParticleSystem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SparkDrawable::destroyParticleSystem(SPK::System * system, bool removeFromList = true) function, expected prototype:\nvoid SparkDrawable::destroyParticleSystem(SPK::System * system, bool removeFromList = true)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		int luatop = lua_gettop(L);

		SPK::System* system=(Luna< SPK::Registerable >::checkSubType< SPK::System >(L,2));
		bool removeFromList=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SparkDrawable::destroyParticleSystem(SPK::System *, bool)");
		}
		self->destroyParticleSystem(system, removeFromList);

		return 0;
	}

	// void SparkDrawable::setGlobalTransformMatrix(const osg::Matrix & matrix, bool useOffset = false)
	static int _bind_setGlobalTransformMatrix(lua_State *L) {
		if (!_lg_typecheck_setGlobalTransformMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SparkDrawable::setGlobalTransformMatrix(const osg::Matrix & matrix, bool useOffset = false) function, expected prototype:\nvoid SparkDrawable::setGlobalTransformMatrix(const osg::Matrix & matrix, bool useOffset = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const osg::Matrix* matrix_ptr=(Luna< osg::Matrix >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in SparkDrawable::setGlobalTransformMatrix function");
		}
		const osg::Matrix & matrix=*matrix_ptr;
		bool useOffset=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SparkDrawable::setGlobalTransformMatrix(const osg::Matrix &, bool)");
		}
		self->setGlobalTransformMatrix(matrix, useOffset);

		return 0;
	}

	// void SparkDrawable::setTransformMatrix(SPK::System * system, const SPK::Vector3D & pos, const SPK::Vector3D & rot, float angle, bool useOffset = false)
	static int _bind_setTransformMatrix(lua_State *L) {
		if (!_lg_typecheck_setTransformMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SparkDrawable::setTransformMatrix(SPK::System * system, const SPK::Vector3D & pos, const SPK::Vector3D & rot, float angle, bool useOffset = false) function, expected prototype:\nvoid SparkDrawable::setTransformMatrix(SPK::System * system, const SPK::Vector3D & pos, const SPK::Vector3D & rot, float angle, bool useOffset = false)\nClass arguments details:\narg 1 ID = 31337102\narg 2 ID = 70092749\narg 3 ID = 70092749\n");
		}

		int luatop = lua_gettop(L);

		SPK::System* system=(Luna< SPK::Registerable >::checkSubType< SPK::System >(L,2));
		const SPK::Vector3D* pos_ptr=(Luna< SPK::Vector3D >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in SparkDrawable::setTransformMatrix function");
		}
		const SPK::Vector3D & pos=*pos_ptr;
		const SPK::Vector3D* rot_ptr=(Luna< SPK::Vector3D >::check(L,4));
		if( !rot_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rot in SparkDrawable::setTransformMatrix function");
		}
		const SPK::Vector3D & rot=*rot_ptr;
		float angle=(float)lua_tonumber(L,5);
		bool useOffset=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : false;

		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SparkDrawable::setTransformMatrix(SPK::System *, const SPK::Vector3D &, const SPK::Vector3D &, float, bool)");
		}
		self->setTransformMatrix(system, pos, rot, angle, useOffset);

		return 0;
	}

	// unsigned int SparkDrawable::addParticleSystem(const osg::Vec3 & p = osg::Vec3(), const osg::Quat & r = osg::Quat())
	static int _bind_addParticleSystem(lua_State *L) {
		if (!_lg_typecheck_addParticleSystem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int SparkDrawable::addParticleSystem(const osg::Vec3 & p = osg::Vec3(), const osg::Quat & r = osg::Quat()) function, expected prototype:\nunsigned int SparkDrawable::addParticleSystem(const osg::Vec3 & p = osg::Vec3(), const osg::Quat & r = osg::Quat())\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const osg::Vec3* p_ptr=luatop>1 ? (Luna< osg::Vec3 >::check(L,2)) : NULL;
		if( luatop>1 && !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in SparkDrawable::addParticleSystem function");
		}
		const osg::Vec3 & p=luatop>1 ? *p_ptr : osg::Vec3();
		const osg::Quat* r_ptr=luatop>2 ? (Luna< osg::Quat >::check(L,3)) : NULL;
		if( luatop>2 && !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in SparkDrawable::addParticleSystem function");
		}
		const osg::Quat & r=luatop>2 ? *r_ptr : osg::Quat();

		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int SparkDrawable::addParticleSystem(const osg::Vec3 &, const osg::Quat &)");
		}
		unsigned int lret = self->addParticleSystem(p, r);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void SparkDrawable::addImage(const std::string & name, osg::Image * image, unsigned int type = GL_RGB, unsigned int clamp = 0x2900)
	static int _bind_addImage(lua_State *L) {
		if (!_lg_typecheck_addImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SparkDrawable::addImage(const std::string & name, osg::Image * image, unsigned int type = GL_RGB, unsigned int clamp = 0x2900) function, expected prototype:\nvoid SparkDrawable::addImage(const std::string & name, osg::Image * image, unsigned int type = GL_RGB, unsigned int clamp = 0x2900)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,3));
		unsigned int type=luatop>3 ? (unsigned int)lua_tointeger(L,4) : GL_RGB;
		unsigned int clamp=luatop>4 ? (unsigned int)lua_tointeger(L,5) : 0x2900;

		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SparkDrawable::addImage(const std::string &, osg::Image *, unsigned int, unsigned int)");
		}
		self->addImage(name, image, type, clamp);

		return 0;
	}

	// bool SparkDrawable::update(double currentTime, const osg::Vec3d & eye)
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SparkDrawable::update(double currentTime, const osg::Vec3d & eye) function, expected prototype:\nbool SparkDrawable::update(double currentTime, const osg::Vec3d & eye)\nClass arguments details:\n");
		}

		double currentTime=(double)lua_tonumber(L,2);
		const osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in SparkDrawable::update function");
		}
		const osg::Vec3d & eye=*eye_ptr;

		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SparkDrawable::update(double, const osg::Vec3d &)");
		}
		bool lret = self->update(currentTime, eye);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::BoundingBox SparkDrawable::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BoundingBox SparkDrawable::computeBound() const function, expected prototype:\nosg::BoundingBox SparkDrawable::computeBound() const\nClass arguments details:\n");
		}


		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BoundingBox SparkDrawable::computeBound() const");
		}
		osg::BoundingBox lret = self->computeBound();
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'osg::BoundingBox'
		////////////////////////////////////////////////////////////////////

		return 1;
	}

	// void SparkDrawable::drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_drawImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SparkDrawable::drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid SparkDrawable::drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\n");
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in SparkDrawable::drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SparkDrawable::drawImplementation(osg::RenderInfo &) const");
		}
		self->drawImplementation(renderInfo);

		return 0;
	}

	// osg::Object * SparkDrawable::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * SparkDrawable::base_cloneType() const function, expected prototype:\nosg::Object * SparkDrawable::base_cloneType() const\nClass arguments details:\n");
		}


		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * SparkDrawable::base_cloneType() const");
		}
		osg::Object * lret = self->SparkDrawable::cloneType();
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'osg::Object *'
		////////////////////////////////////////////////////////////////////

		return 1;
	}

	// osg::Object * SparkDrawable::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * SparkDrawable::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * SparkDrawable::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in SparkDrawable::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * SparkDrawable::base_clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->SparkDrawable::clone(copyop);
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'osg::Object *'
		////////////////////////////////////////////////////////////////////

		return 1;
	}

	// bool SparkDrawable::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SparkDrawable::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool SparkDrawable::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SparkDrawable::base_isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->SparkDrawable::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * SparkDrawable::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * SparkDrawable::base_libraryName() const function, expected prototype:\nconst char * SparkDrawable::base_libraryName() const\nClass arguments details:\n");
		}


		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * SparkDrawable::base_libraryName() const");
		}
		const char * lret = self->SparkDrawable::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * SparkDrawable::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * SparkDrawable::base_className() const function, expected prototype:\nconst char * SparkDrawable::base_className() const\nClass arguments details:\n");
		}


		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * SparkDrawable::base_className() const");
		}
		const char * lret = self->SparkDrawable::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool SparkDrawable::base_update(double currentTime, const osg::Vec3d & eye)
	static int _bind_base_update(lua_State *L) {
		if (!_lg_typecheck_base_update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SparkDrawable::base_update(double currentTime, const osg::Vec3d & eye) function, expected prototype:\nbool SparkDrawable::base_update(double currentTime, const osg::Vec3d & eye)\nClass arguments details:\n");
		}

		double currentTime=(double)lua_tonumber(L,2);
		const osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in SparkDrawable::base_update function");
		}
		const osg::Vec3d & eye=*eye_ptr;

		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SparkDrawable::base_update(double, const osg::Vec3d &)");
		}
		bool lret = self->SparkDrawable::update(currentTime, eye);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::BoundingBox SparkDrawable::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BoundingBox SparkDrawable::base_computeBound() const function, expected prototype:\nosg::BoundingBox SparkDrawable::base_computeBound() const\nClass arguments details:\n");
		}


		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BoundingBox SparkDrawable::base_computeBound() const");
		}
		osg::BoundingBox lret = self->SparkDrawable::computeBound();
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'osg::BoundingBox'
		////////////////////////////////////////////////////////////////////

		return 1;
	}

	// void SparkDrawable::base_drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_base_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_base_drawImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SparkDrawable::base_drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid SparkDrawable::base_drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\n");
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in SparkDrawable::base_drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		SparkDrawable* self=Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SparkDrawable::base_drawImplementation(osg::RenderInfo &) const");
		}
		self->SparkDrawable::drawImplementation(renderInfo);

		return 0;
	}


	// Operator binds:

};

SparkDrawable* LunaTraits< SparkDrawable >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SparkDrawable::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< SparkDrawable >::_bind_dtor(SparkDrawable* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< SparkDrawable >::className[] = "SparkDrawable";
const char LunaTraits< SparkDrawable >::fullName[] = "SparkDrawable";
const char LunaTraits< SparkDrawable >::moduleName[] = "spark";
const char* LunaTraits< SparkDrawable >::parents[] = {"osg.Drawable", 0};
const int LunaTraits< SparkDrawable >::hash = 8625788;
const int LunaTraits< SparkDrawable >::uniqueIDs[] = {20484188,0};

luna_RegType LunaTraits< SparkDrawable >::methods[] = {
	{"cloneType", &luna_wrapper_SparkDrawable::_bind_cloneType},
	{"clone", &luna_wrapper_SparkDrawable::_bind_clone},
	{"isSameKindAs", &luna_wrapper_SparkDrawable::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_SparkDrawable::_bind_libraryName},
	{"className", &luna_wrapper_SparkDrawable::_bind_className},
	{"isValid", &luna_wrapper_SparkDrawable::_bind_isValid},
	{"getNumParticles", &luna_wrapper_SparkDrawable::_bind_getNumParticles},
	{"setBaseSystemCreator", &luna_wrapper_SparkDrawable::_bind_setBaseSystemCreator},
	{"setBaseSystemID", &luna_wrapper_SparkDrawable::_bind_setBaseSystemID},
	{"getBaseSystemID", &luna_wrapper_SparkDrawable::_bind_getBaseSystemID},
	{"setSortParticles", &luna_wrapper_SparkDrawable::_bind_setSortParticles},
	{"getSortParticles", &luna_wrapper_SparkDrawable::_bind_getSortParticles},
	{"setAutoUpdateBound", &luna_wrapper_SparkDrawable::_bind_setAutoUpdateBound},
	{"getAutoUpdateBound", &luna_wrapper_SparkDrawable::_bind_getAutoUpdateBound},
	{"getProtoSystem", &luna_wrapper_SparkDrawable::_bind_getProtoSystem},
	{"getParticleSystem", &luna_wrapper_SparkDrawable::_bind_getParticleSystem},
	{"getNumParticleSystems", &luna_wrapper_SparkDrawable::_bind_getNumParticleSystems},
	{"addExternalParticleSystem", &luna_wrapper_SparkDrawable::_bind_addExternalParticleSystem},
	{"destroyParticleSystem", &luna_wrapper_SparkDrawable::_bind_destroyParticleSystem},
	{"setGlobalTransformMatrix", &luna_wrapper_SparkDrawable::_bind_setGlobalTransformMatrix},
	{"setTransformMatrix", &luna_wrapper_SparkDrawable::_bind_setTransformMatrix},
	{"addParticleSystem", &luna_wrapper_SparkDrawable::_bind_addParticleSystem},
	{"addImage", &luna_wrapper_SparkDrawable::_bind_addImage},
	{"update", &luna_wrapper_SparkDrawable::_bind_update},
	{"computeBound", &luna_wrapper_SparkDrawable::_bind_computeBound},
	{"drawImplementation", &luna_wrapper_SparkDrawable::_bind_drawImplementation},
	{"base_cloneType", &luna_wrapper_SparkDrawable::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_SparkDrawable::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_SparkDrawable::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_SparkDrawable::_bind_base_libraryName},
	{"base_className", &luna_wrapper_SparkDrawable::_bind_base_className},
	{"base_update", &luna_wrapper_SparkDrawable::_bind_base_update},
	{"base_computeBound", &luna_wrapper_SparkDrawable::_bind_base_computeBound},
	{"base_drawImplementation", &luna_wrapper_SparkDrawable::_bind_base_drawImplementation},
	{"__eq", &luna_wrapper_SparkDrawable::_bind___eq},
	{"getTable", &luna_wrapper_SparkDrawable::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SparkDrawable >::converters[] = {
	{"osg::Drawable", &luna_wrapper_SparkDrawable::_cast_from_Drawable},
	{0,0}
};

luna_RegEnumType LunaTraits< SparkDrawable >::enumValues[] = {
	{0,0}
};


