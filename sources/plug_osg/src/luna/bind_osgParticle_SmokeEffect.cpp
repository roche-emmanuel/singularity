#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_SmokeEffect.h>

class luna_wrapper_osgParticle_SmokeEffect {
public:
	typedef Luna< osgParticle::SmokeEffect > luna_t;

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
		osgParticle::SmokeEffect* ptr= dynamic_cast< osgParticle::SmokeEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::SmokeEffect >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && lua_isboolean(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
		if( (!dynamic_cast< osg::Vec3f* >(Luna< osg::Vec3f >::check(L,1))) ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!dynamic_cast< osgParticle::SmokeEffect* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!dynamic_cast< osg::Vec3f* >(Luna< osg::Vec3f >::check(L,2))) ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osgParticle::SmokeEffect* >(Luna< osg::Referenced >::check(L,2))) ) return false;
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

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDefaults(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUpEmitterAndProgram(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEmitter_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEmitter_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProgram_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProgram_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::SmokeEffect::SmokeEffect(bool automaticSetup = true)
	static osgParticle::SmokeEffect* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::SmokeEffect::SmokeEffect(bool automaticSetup = true) function, expected prototype:\nosgParticle::SmokeEffect::SmokeEffect(bool automaticSetup = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool automaticSetup=luatop>0 ? (bool)(lua_toboolean(L,1)==1) : true;

		return new osgParticle::SmokeEffect(automaticSetup);
	}

	// osgParticle::SmokeEffect::SmokeEffect(const osg::Vec3f & position, float scale = 1.0f, float intensity = 1.0f)
	static osgParticle::SmokeEffect* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::SmokeEffect::SmokeEffect(const osg::Vec3f & position, float scale = 1.0f, float intensity = 1.0f) function, expected prototype:\nosgParticle::SmokeEffect::SmokeEffect(const osg::Vec3f & position, float scale = 1.0f, float intensity = 1.0f)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		int luatop = lua_gettop(L);

		const osg::Vec3f* position_ptr=(Luna< osg::Vec3f >::check(L,1));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in osgParticle::SmokeEffect::SmokeEffect function");
		}
		const osg::Vec3f & position=*position_ptr;
		float scale=luatop>1 ? (float)lua_tonumber(L,2) : 1.0f;
		float intensity=luatop>2 ? (float)lua_tonumber(L,3) : 1.0f;

		return new osgParticle::SmokeEffect(position, scale, intensity);
	}

	// osgParticle::SmokeEffect::SmokeEffect(const osgParticle::SmokeEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::SmokeEffect* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::SmokeEffect::SmokeEffect(const osgParticle::SmokeEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::SmokeEffect::SmokeEffect(const osgParticle::SmokeEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::SmokeEffect* copy_ptr=dynamic_cast< osgParticle::SmokeEffect* >(Luna< osg::Referenced >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::SmokeEffect::SmokeEffect function");
		}
		const osgParticle::SmokeEffect & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::SmokeEffect::SmokeEffect function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::SmokeEffect(copy, copyop);
	}

	// osgParticle::SmokeEffect::SmokeEffect(lua_Table * data, bool automaticSetup = true)
	static osgParticle::SmokeEffect* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::SmokeEffect::SmokeEffect(lua_Table * data, bool automaticSetup = true) function, expected prototype:\nosgParticle::SmokeEffect::SmokeEffect(lua_Table * data, bool automaticSetup = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool automaticSetup=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		return new wrapper_osgParticle_SmokeEffect(L,NULL, automaticSetup);
	}

	// osgParticle::SmokeEffect::SmokeEffect(lua_Table * data, const osg::Vec3f & position, float scale = 1.0f, float intensity = 1.0f)
	static osgParticle::SmokeEffect* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::SmokeEffect::SmokeEffect(lua_Table * data, const osg::Vec3f & position, float scale = 1.0f, float intensity = 1.0f) function, expected prototype:\nosgParticle::SmokeEffect::SmokeEffect(lua_Table * data, const osg::Vec3f & position, float scale = 1.0f, float intensity = 1.0f)\nClass arguments details:\narg 2 ID = 92303204\n");
		}

		int luatop = lua_gettop(L);

		const osg::Vec3f* position_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in osgParticle::SmokeEffect::SmokeEffect function");
		}
		const osg::Vec3f & position=*position_ptr;
		float scale=luatop>2 ? (float)lua_tonumber(L,3) : 1.0f;
		float intensity=luatop>3 ? (float)lua_tonumber(L,4) : 1.0f;

		return new wrapper_osgParticle_SmokeEffect(L,NULL, position, scale, intensity);
	}

	// osgParticle::SmokeEffect::SmokeEffect(lua_Table * data, const osgParticle::SmokeEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::SmokeEffect* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::SmokeEffect::SmokeEffect(lua_Table * data, const osgParticle::SmokeEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::SmokeEffect::SmokeEffect(lua_Table * data, const osgParticle::SmokeEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::SmokeEffect* copy_ptr=dynamic_cast< osgParticle::SmokeEffect* >(Luna< osg::Referenced >::check(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::SmokeEffect::SmokeEffect function");
		}
		const osgParticle::SmokeEffect & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::SmokeEffect::SmokeEffect function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_SmokeEffect(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::SmokeEffect::SmokeEffect
	static osgParticle::SmokeEffect* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function SmokeEffect, cannot match any of the overloads for function SmokeEffect:\n  SmokeEffect(bool)\n  SmokeEffect(const osg::Vec3f &, float, float)\n  SmokeEffect(const osgParticle::SmokeEffect &, const osg::CopyOp &)\n  SmokeEffect(lua_Table *, bool)\n  SmokeEffect(lua_Table *, const osg::Vec3f &, float, float)\n  SmokeEffect(lua_Table *, const osgParticle::SmokeEffect &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::SmokeEffect::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::SmokeEffect::cloneType() const function, expected prototype:\nosg::Object * osgParticle::SmokeEffect::cloneType() const\nClass arguments details:\n");
		}


		osgParticle::SmokeEffect* self=dynamic_cast< osgParticle::SmokeEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::SmokeEffect::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::SmokeEffect::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::SmokeEffect::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osgParticle::SmokeEffect::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::SmokeEffect::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osgParticle::SmokeEffect* self=dynamic_cast< osgParticle::SmokeEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::SmokeEffect::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::SmokeEffect::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::SmokeEffect::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::SmokeEffect::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::SmokeEffect* self=dynamic_cast< osgParticle::SmokeEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::SmokeEffect::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::SmokeEffect::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::SmokeEffect::className() const function, expected prototype:\nconst char * osgParticle::SmokeEffect::className() const\nClass arguments details:\n");
		}


		osgParticle::SmokeEffect* self=dynamic_cast< osgParticle::SmokeEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::SmokeEffect::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::SmokeEffect::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::SmokeEffect::libraryName() const function, expected prototype:\nconst char * osgParticle::SmokeEffect::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::SmokeEffect* self=dynamic_cast< osgParticle::SmokeEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::SmokeEffect::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::SmokeEffect::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::SmokeEffect::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::SmokeEffect::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::SmokeEffect::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::SmokeEffect* self=dynamic_cast< osgParticle::SmokeEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::SmokeEffect::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}

	// void osgParticle::SmokeEffect::setDefaults()
	static int _bind_setDefaults(lua_State *L) {
		if (!_lg_typecheck_setDefaults(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::SmokeEffect::setDefaults() function, expected prototype:\nvoid osgParticle::SmokeEffect::setDefaults()\nClass arguments details:\n");
		}


		osgParticle::SmokeEffect* self=dynamic_cast< osgParticle::SmokeEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::SmokeEffect::setDefaults()");
		}
		self->setDefaults();

		return 0;
	}

	// void osgParticle::SmokeEffect::setUpEmitterAndProgram()
	static int _bind_setUpEmitterAndProgram(lua_State *L) {
		if (!_lg_typecheck_setUpEmitterAndProgram(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::SmokeEffect::setUpEmitterAndProgram() function, expected prototype:\nvoid osgParticle::SmokeEffect::setUpEmitterAndProgram()\nClass arguments details:\n");
		}


		osgParticle::SmokeEffect* self=dynamic_cast< osgParticle::SmokeEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::SmokeEffect::setUpEmitterAndProgram()");
		}
		self->setUpEmitterAndProgram();

		return 0;
	}

	// osgParticle::Emitter * osgParticle::SmokeEffect::getEmitter()
	static int _bind_getEmitter_overload_1(lua_State *L) {
		if (!_lg_typecheck_getEmitter_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::Emitter * osgParticle::SmokeEffect::getEmitter() function, expected prototype:\nosgParticle::Emitter * osgParticle::SmokeEffect::getEmitter()\nClass arguments details:\n");
		}


		osgParticle::SmokeEffect* self=dynamic_cast< osgParticle::SmokeEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgParticle::Emitter * osgParticle::SmokeEffect::getEmitter()");
		}
		osgParticle::Emitter * lret = self->getEmitter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Emitter >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Emitter * osgParticle::SmokeEffect::getEmitter() const
	static int _bind_getEmitter_overload_2(lua_State *L) {
		if (!_lg_typecheck_getEmitter_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgParticle::Emitter * osgParticle::SmokeEffect::getEmitter() const function, expected prototype:\nconst osgParticle::Emitter * osgParticle::SmokeEffect::getEmitter() const\nClass arguments details:\n");
		}


		osgParticle::SmokeEffect* self=dynamic_cast< osgParticle::SmokeEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgParticle::Emitter * osgParticle::SmokeEffect::getEmitter() const");
		}
		const osgParticle::Emitter * lret = self->getEmitter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Emitter >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::SmokeEffect::getEmitter
	static int _bind_getEmitter(lua_State *L) {
		if (_lg_typecheck_getEmitter_overload_1(L)) return _bind_getEmitter_overload_1(L);
		if (_lg_typecheck_getEmitter_overload_2(L)) return _bind_getEmitter_overload_2(L);

		luaL_error(L, "error in function getEmitter, cannot match any of the overloads for function getEmitter:\n  getEmitter()\n  getEmitter()\n");
		return 0;
	}

	// osgParticle::Program * osgParticle::SmokeEffect::getProgram()
	static int _bind_getProgram_overload_1(lua_State *L) {
		if (!_lg_typecheck_getProgram_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::Program * osgParticle::SmokeEffect::getProgram() function, expected prototype:\nosgParticle::Program * osgParticle::SmokeEffect::getProgram()\nClass arguments details:\n");
		}


		osgParticle::SmokeEffect* self=dynamic_cast< osgParticle::SmokeEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgParticle::Program * osgParticle::SmokeEffect::getProgram()");
		}
		osgParticle::Program * lret = self->getProgram();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Program >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Program * osgParticle::SmokeEffect::getProgram() const
	static int _bind_getProgram_overload_2(lua_State *L) {
		if (!_lg_typecheck_getProgram_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgParticle::Program * osgParticle::SmokeEffect::getProgram() const function, expected prototype:\nconst osgParticle::Program * osgParticle::SmokeEffect::getProgram() const\nClass arguments details:\n");
		}


		osgParticle::SmokeEffect* self=dynamic_cast< osgParticle::SmokeEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgParticle::Program * osgParticle::SmokeEffect::getProgram() const");
		}
		const osgParticle::Program * lret = self->getProgram();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Program >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::SmokeEffect::getProgram
	static int _bind_getProgram(lua_State *L) {
		if (_lg_typecheck_getProgram_overload_1(L)) return _bind_getProgram_overload_1(L);
		if (_lg_typecheck_getProgram_overload_2(L)) return _bind_getProgram_overload_2(L);

		luaL_error(L, "error in function getProgram, cannot match any of the overloads for function getProgram:\n  getProgram()\n  getProgram()\n");
		return 0;
	}


	// Operator binds:

};

osgParticle::SmokeEffect* LunaTraits< osgParticle::SmokeEffect >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_SmokeEffect::_bind_ctor(L);
}

void LunaTraits< osgParticle::SmokeEffect >::_bind_dtor(osgParticle::SmokeEffect* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::SmokeEffect >::className[] = "SmokeEffect";
const char LunaTraits< osgParticle::SmokeEffect >::fullName[] = "osgParticle::SmokeEffect";
const char LunaTraits< osgParticle::SmokeEffect >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::SmokeEffect >::parents[] = {"osgParticle.ParticleEffect", 0};
const int LunaTraits< osgParticle::SmokeEffect >::hash = 25401908;
const int LunaTraits< osgParticle::SmokeEffect >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::SmokeEffect >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_SmokeEffect::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_SmokeEffect::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_SmokeEffect::_bind_isSameKindAs},
	{"className", &luna_wrapper_osgParticle_SmokeEffect::_bind_className},
	{"libraryName", &luna_wrapper_osgParticle_SmokeEffect::_bind_libraryName},
	{"accept", &luna_wrapper_osgParticle_SmokeEffect::_bind_accept},
	{"setDefaults", &luna_wrapper_osgParticle_SmokeEffect::_bind_setDefaults},
	{"setUpEmitterAndProgram", &luna_wrapper_osgParticle_SmokeEffect::_bind_setUpEmitterAndProgram},
	{"getEmitter", &luna_wrapper_osgParticle_SmokeEffect::_bind_getEmitter},
	{"getProgram", &luna_wrapper_osgParticle_SmokeEffect::_bind_getProgram},
	{"__eq", &luna_wrapper_osgParticle_SmokeEffect::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::SmokeEffect >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_SmokeEffect::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::SmokeEffect >::enumValues[] = {
	{0,0}
};


