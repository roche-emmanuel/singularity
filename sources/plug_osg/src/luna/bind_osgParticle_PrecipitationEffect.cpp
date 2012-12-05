#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_PrecipitationEffect.h>

class luna_wrapper_osgParticle_PrecipitationEffect {
public:
	typedef Luna< osgParticle::PrecipitationEffect > luna_t;

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
		osgParticle::PrecipitationEffect* ptr= dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::PrecipitationEffect >::push(L,ptr,false);
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
		if( (!dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1))) ) return false;
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
		if( (!dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_rain(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_snow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaximumParticleDensity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaximumParticleDensity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWind(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCellSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCellSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setParticleSpeed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParticleSpeed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setParticleSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParticleSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setParticleColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParticleColor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNearTransition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNearTransition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFarTransition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFarTransition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUseFarLineSegments(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUseFarLineSegments(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFog(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFog_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFog_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getQuadGeometry(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getQuadStateSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLineGeometry(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLineStateSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPointGeometry(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPointStateSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::PrecipitationEffect::PrecipitationEffect()
	static osgParticle::PrecipitationEffect* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::PrecipitationEffect::PrecipitationEffect() function, expected prototype:\nosgParticle::PrecipitationEffect::PrecipitationEffect()\nClass arguments details:\n");
		}


		return new osgParticle::PrecipitationEffect();
	}

	// osgParticle::PrecipitationEffect::PrecipitationEffect(const osgParticle::PrecipitationEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::PrecipitationEffect* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::PrecipitationEffect::PrecipitationEffect(const osgParticle::PrecipitationEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::PrecipitationEffect::PrecipitationEffect(const osgParticle::PrecipitationEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::PrecipitationEffect* copy_ptr=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::PrecipitationEffect::PrecipitationEffect function");
		}
		const osgParticle::PrecipitationEffect & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::PrecipitationEffect::PrecipitationEffect function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::PrecipitationEffect(copy, copyop);
	}

	// osgParticle::PrecipitationEffect::PrecipitationEffect(lua_Table * data)
	static osgParticle::PrecipitationEffect* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::PrecipitationEffect::PrecipitationEffect(lua_Table * data) function, expected prototype:\nosgParticle::PrecipitationEffect::PrecipitationEffect(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgParticle_PrecipitationEffect(L,NULL);
	}

	// osgParticle::PrecipitationEffect::PrecipitationEffect(lua_Table * data, const osgParticle::PrecipitationEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::PrecipitationEffect* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::PrecipitationEffect::PrecipitationEffect(lua_Table * data, const osgParticle::PrecipitationEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::PrecipitationEffect::PrecipitationEffect(lua_Table * data, const osgParticle::PrecipitationEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::PrecipitationEffect* copy_ptr=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::PrecipitationEffect::PrecipitationEffect function");
		}
		const osgParticle::PrecipitationEffect & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::PrecipitationEffect::PrecipitationEffect function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_PrecipitationEffect(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::PrecipitationEffect::PrecipitationEffect
	static osgParticle::PrecipitationEffect* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function PrecipitationEffect, cannot match any of the overloads for function PrecipitationEffect:\n  PrecipitationEffect()\n  PrecipitationEffect(const osgParticle::PrecipitationEffect &, const osg::CopyOp &)\n  PrecipitationEffect(lua_Table *)\n  PrecipitationEffect(lua_Table *, const osgParticle::PrecipitationEffect &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgParticle::PrecipitationEffect::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::PrecipitationEffect::libraryName() const function, expected prototype:\nconst char * osgParticle::PrecipitationEffect::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::PrecipitationEffect::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::PrecipitationEffect::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::PrecipitationEffect::className() const function, expected prototype:\nconst char * osgParticle::PrecipitationEffect::className() const\nClass arguments details:\n");
		}


		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::PrecipitationEffect::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::PrecipitationEffect::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::PrecipitationEffect::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::PrecipitationEffect::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::PrecipitationEffect::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::PrecipitationEffect::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}

	// void osgParticle::PrecipitationEffect::traverse(osg::NodeVisitor & arg1)
	static int _bind_traverse(lua_State *L) {
		if (!_lg_typecheck_traverse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* _arg1_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::PrecipitationEffect::traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::traverse(osg::NodeVisitor &)");
		}
		self->traverse(_arg1);

		return 0;
	}

	// void osgParticle::PrecipitationEffect::rain(float intensity)
	static int _bind_rain(lua_State *L) {
		if (!_lg_typecheck_rain(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::rain(float intensity) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::rain(float intensity)\nClass arguments details:\n");
		}

		float intensity=(float)lua_tonumber(L,2);

		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::rain(float)");
		}
		self->rain(intensity);

		return 0;
	}

	// void osgParticle::PrecipitationEffect::snow(float intensity)
	static int _bind_snow(lua_State *L) {
		if (!_lg_typecheck_snow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::snow(float intensity) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::snow(float intensity)\nClass arguments details:\n");
		}

		float intensity=(float)lua_tonumber(L,2);

		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::snow(float)");
		}
		self->snow(intensity);

		return 0;
	}

	// void osgParticle::PrecipitationEffect::setMaximumParticleDensity(float density)
	static int _bind_setMaximumParticleDensity(lua_State *L) {
		if (!_lg_typecheck_setMaximumParticleDensity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::setMaximumParticleDensity(float density) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::setMaximumParticleDensity(float density)\nClass arguments details:\n");
		}

		float density=(float)lua_tonumber(L,2);

		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::setMaximumParticleDensity(float)");
		}
		self->setMaximumParticleDensity(density);

		return 0;
	}

	// float osgParticle::PrecipitationEffect::getMaximumParticleDensity() const
	static int _bind_getMaximumParticleDensity(lua_State *L) {
		if (!_lg_typecheck_getMaximumParticleDensity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::PrecipitationEffect::getMaximumParticleDensity() const function, expected prototype:\nfloat osgParticle::PrecipitationEffect::getMaximumParticleDensity() const\nClass arguments details:\n");
		}


		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::PrecipitationEffect::getMaximumParticleDensity() const");
		}
		float lret = self->getMaximumParticleDensity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::setWind(const osg::Vec3f & wind)
	static int _bind_setWind(lua_State *L) {
		if (!_lg_typecheck_setWind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::setWind(const osg::Vec3f & wind) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::setWind(const osg::Vec3f & wind)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* wind_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !wind_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg wind in osgParticle::PrecipitationEffect::setWind function");
		}
		const osg::Vec3f & wind=*wind_ptr;

		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::setWind(const osg::Vec3f &)");
		}
		self->setWind(wind);

		return 0;
	}

	// const osg::Vec3f & osgParticle::PrecipitationEffect::getWind() const
	static int _bind_getWind(lua_State *L) {
		if (!_lg_typecheck_getWind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::PrecipitationEffect::getWind() const function, expected prototype:\nconst osg::Vec3f & osgParticle::PrecipitationEffect::getWind() const\nClass arguments details:\n");
		}


		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::PrecipitationEffect::getWind() const");
		}
		const osg::Vec3f* lret = &self->getWind();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::setPosition(const osg::Vec3f & position)
	static int _bind_setPosition(lua_State *L) {
		if (!_lg_typecheck_setPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::setPosition(const osg::Vec3f & position) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::setPosition(const osg::Vec3f & position)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* position_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in osgParticle::PrecipitationEffect::setPosition function");
		}
		const osg::Vec3f & position=*position_ptr;

		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::setPosition(const osg::Vec3f &)");
		}
		self->setPosition(position);

		return 0;
	}

	// const osg::Vec3f & osgParticle::PrecipitationEffect::getPosition() const
	static int _bind_getPosition(lua_State *L) {
		if (!_lg_typecheck_getPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::PrecipitationEffect::getPosition() const function, expected prototype:\nconst osg::Vec3f & osgParticle::PrecipitationEffect::getPosition() const\nClass arguments details:\n");
		}


		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::PrecipitationEffect::getPosition() const");
		}
		const osg::Vec3f* lret = &self->getPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::setCellSize(const osg::Vec3f & cellSize)
	static int _bind_setCellSize(lua_State *L) {
		if (!_lg_typecheck_setCellSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::setCellSize(const osg::Vec3f & cellSize) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::setCellSize(const osg::Vec3f & cellSize)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* cellSize_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !cellSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cellSize in osgParticle::PrecipitationEffect::setCellSize function");
		}
		const osg::Vec3f & cellSize=*cellSize_ptr;

		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::setCellSize(const osg::Vec3f &)");
		}
		self->setCellSize(cellSize);

		return 0;
	}

	// const osg::Vec3f & osgParticle::PrecipitationEffect::getCellSize() const
	static int _bind_getCellSize(lua_State *L) {
		if (!_lg_typecheck_getCellSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::PrecipitationEffect::getCellSize() const function, expected prototype:\nconst osg::Vec3f & osgParticle::PrecipitationEffect::getCellSize() const\nClass arguments details:\n");
		}


		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::PrecipitationEffect::getCellSize() const");
		}
		const osg::Vec3f* lret = &self->getCellSize();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::setParticleSpeed(float particleSpeed)
	static int _bind_setParticleSpeed(lua_State *L) {
		if (!_lg_typecheck_setParticleSpeed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::setParticleSpeed(float particleSpeed) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::setParticleSpeed(float particleSpeed)\nClass arguments details:\n");
		}

		float particleSpeed=(float)lua_tonumber(L,2);

		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::setParticleSpeed(float)");
		}
		self->setParticleSpeed(particleSpeed);

		return 0;
	}

	// float osgParticle::PrecipitationEffect::getParticleSpeed() const
	static int _bind_getParticleSpeed(lua_State *L) {
		if (!_lg_typecheck_getParticleSpeed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::PrecipitationEffect::getParticleSpeed() const function, expected prototype:\nfloat osgParticle::PrecipitationEffect::getParticleSpeed() const\nClass arguments details:\n");
		}


		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::PrecipitationEffect::getParticleSpeed() const");
		}
		float lret = self->getParticleSpeed();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::setParticleSize(float particleSize)
	static int _bind_setParticleSize(lua_State *L) {
		if (!_lg_typecheck_setParticleSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::setParticleSize(float particleSize) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::setParticleSize(float particleSize)\nClass arguments details:\n");
		}

		float particleSize=(float)lua_tonumber(L,2);

		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::setParticleSize(float)");
		}
		self->setParticleSize(particleSize);

		return 0;
	}

	// float osgParticle::PrecipitationEffect::getParticleSize() const
	static int _bind_getParticleSize(lua_State *L) {
		if (!_lg_typecheck_getParticleSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::PrecipitationEffect::getParticleSize() const function, expected prototype:\nfloat osgParticle::PrecipitationEffect::getParticleSize() const\nClass arguments details:\n");
		}


		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::PrecipitationEffect::getParticleSize() const");
		}
		float lret = self->getParticleSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::setParticleColor(const osg::Vec4f & color)
	static int _bind_setParticleColor(lua_State *L) {
		if (!_lg_typecheck_setParticleColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::setParticleColor(const osg::Vec4f & color) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::setParticleColor(const osg::Vec4f & color)\nClass arguments details:\narg 1 ID = 92303235\n");
		}

		const osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osgParticle::PrecipitationEffect::setParticleColor function");
		}
		const osg::Vec4f & color=*color_ptr;

		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::setParticleColor(const osg::Vec4f &)");
		}
		self->setParticleColor(color);

		return 0;
	}

	// const osg::Vec4f & osgParticle::PrecipitationEffect::getParticleColor() const
	static int _bind_getParticleColor(lua_State *L) {
		if (!_lg_typecheck_getParticleColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osgParticle::PrecipitationEffect::getParticleColor() const function, expected prototype:\nconst osg::Vec4f & osgParticle::PrecipitationEffect::getParticleColor() const\nClass arguments details:\n");
		}


		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osgParticle::PrecipitationEffect::getParticleColor() const");
		}
		const osg::Vec4f* lret = &self->getParticleColor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::setNearTransition(float nearTransition)
	static int _bind_setNearTransition(lua_State *L) {
		if (!_lg_typecheck_setNearTransition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::setNearTransition(float nearTransition) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::setNearTransition(float nearTransition)\nClass arguments details:\n");
		}

		float nearTransition=(float)lua_tonumber(L,2);

		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::setNearTransition(float)");
		}
		self->setNearTransition(nearTransition);

		return 0;
	}

	// float osgParticle::PrecipitationEffect::getNearTransition() const
	static int _bind_getNearTransition(lua_State *L) {
		if (!_lg_typecheck_getNearTransition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::PrecipitationEffect::getNearTransition() const function, expected prototype:\nfloat osgParticle::PrecipitationEffect::getNearTransition() const\nClass arguments details:\n");
		}


		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::PrecipitationEffect::getNearTransition() const");
		}
		float lret = self->getNearTransition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::setFarTransition(float farTransition)
	static int _bind_setFarTransition(lua_State *L) {
		if (!_lg_typecheck_setFarTransition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::setFarTransition(float farTransition) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::setFarTransition(float farTransition)\nClass arguments details:\n");
		}

		float farTransition=(float)lua_tonumber(L,2);

		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::setFarTransition(float)");
		}
		self->setFarTransition(farTransition);

		return 0;
	}

	// float osgParticle::PrecipitationEffect::getFarTransition() const
	static int _bind_getFarTransition(lua_State *L) {
		if (!_lg_typecheck_getFarTransition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::PrecipitationEffect::getFarTransition() const function, expected prototype:\nfloat osgParticle::PrecipitationEffect::getFarTransition() const\nClass arguments details:\n");
		}


		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::PrecipitationEffect::getFarTransition() const");
		}
		float lret = self->getFarTransition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::setUseFarLineSegments(bool useFarLineSegments)
	static int _bind_setUseFarLineSegments(lua_State *L) {
		if (!_lg_typecheck_setUseFarLineSegments(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::setUseFarLineSegments(bool useFarLineSegments) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::setUseFarLineSegments(bool useFarLineSegments)\nClass arguments details:\n");
		}

		bool useFarLineSegments=(bool)(lua_toboolean(L,2)==1);

		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::setUseFarLineSegments(bool)");
		}
		self->setUseFarLineSegments(useFarLineSegments);

		return 0;
	}

	// bool osgParticle::PrecipitationEffect::getUseFarLineSegments() const
	static int _bind_getUseFarLineSegments(lua_State *L) {
		if (!_lg_typecheck_getUseFarLineSegments(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::PrecipitationEffect::getUseFarLineSegments() const function, expected prototype:\nbool osgParticle::PrecipitationEffect::getUseFarLineSegments() const\nClass arguments details:\n");
		}


		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::PrecipitationEffect::getUseFarLineSegments() const");
		}
		bool lret = self->getUseFarLineSegments();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::setFog(osg::Fog * fog)
	static int _bind_setFog(lua_State *L) {
		if (!_lg_typecheck_setFog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::setFog(osg::Fog * fog) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::setFog(osg::Fog * fog)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Fog* fog=dynamic_cast< osg::Fog* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::setFog(osg::Fog *)");
		}
		self->setFog(fog);

		return 0;
	}

	// osg::Fog * osgParticle::PrecipitationEffect::getFog()
	static int _bind_getFog_overload_1(lua_State *L) {
		if (!_lg_typecheck_getFog_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Fog * osgParticle::PrecipitationEffect::getFog() function, expected prototype:\nosg::Fog * osgParticle::PrecipitationEffect::getFog()\nClass arguments details:\n");
		}


		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Fog * osgParticle::PrecipitationEffect::getFog()");
		}
		osg::Fog * lret = self->getFog();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Fog >::push(L,lret,false);

		return 1;
	}

	// const osg::Fog * osgParticle::PrecipitationEffect::getFog() const
	static int _bind_getFog_overload_2(lua_State *L) {
		if (!_lg_typecheck_getFog_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Fog * osgParticle::PrecipitationEffect::getFog() const function, expected prototype:\nconst osg::Fog * osgParticle::PrecipitationEffect::getFog() const\nClass arguments details:\n");
		}


		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Fog * osgParticle::PrecipitationEffect::getFog() const");
		}
		const osg::Fog * lret = self->getFog();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Fog >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::PrecipitationEffect::getFog
	static int _bind_getFog(lua_State *L) {
		if (_lg_typecheck_getFog_overload_1(L)) return _bind_getFog_overload_1(L);
		if (_lg_typecheck_getFog_overload_2(L)) return _bind_getFog_overload_2(L);

		luaL_error(L, "error in function getFog, cannot match any of the overloads for function getFog:\n  getFog()\n  getFog()\n");
		return 0;
	}

	// osg::Geometry * osgParticle::PrecipitationEffect::getQuadGeometry()
	static int _bind_getQuadGeometry(lua_State *L) {
		if (!_lg_typecheck_getQuadGeometry(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Geometry * osgParticle::PrecipitationEffect::getQuadGeometry() function, expected prototype:\nosg::Geometry * osgParticle::PrecipitationEffect::getQuadGeometry()\nClass arguments details:\n");
		}


		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Geometry * osgParticle::PrecipitationEffect::getQuadGeometry()");
		}
		osg::Geometry * lret = self->getQuadGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// osg::StateSet * osgParticle::PrecipitationEffect::getQuadStateSet()
	static int _bind_getQuadStateSet(lua_State *L) {
		if (!_lg_typecheck_getQuadStateSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateSet * osgParticle::PrecipitationEffect::getQuadStateSet() function, expected prototype:\nosg::StateSet * osgParticle::PrecipitationEffect::getQuadStateSet()\nClass arguments details:\n");
		}


		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateSet * osgParticle::PrecipitationEffect::getQuadStateSet()");
		}
		osg::StateSet * lret = self->getQuadStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// osg::Geometry * osgParticle::PrecipitationEffect::getLineGeometry()
	static int _bind_getLineGeometry(lua_State *L) {
		if (!_lg_typecheck_getLineGeometry(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Geometry * osgParticle::PrecipitationEffect::getLineGeometry() function, expected prototype:\nosg::Geometry * osgParticle::PrecipitationEffect::getLineGeometry()\nClass arguments details:\n");
		}


		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Geometry * osgParticle::PrecipitationEffect::getLineGeometry()");
		}
		osg::Geometry * lret = self->getLineGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// osg::StateSet * osgParticle::PrecipitationEffect::getLineStateSet()
	static int _bind_getLineStateSet(lua_State *L) {
		if (!_lg_typecheck_getLineStateSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateSet * osgParticle::PrecipitationEffect::getLineStateSet() function, expected prototype:\nosg::StateSet * osgParticle::PrecipitationEffect::getLineStateSet()\nClass arguments details:\n");
		}


		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateSet * osgParticle::PrecipitationEffect::getLineStateSet()");
		}
		osg::StateSet * lret = self->getLineStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// osg::Geometry * osgParticle::PrecipitationEffect::getPointGeometry()
	static int _bind_getPointGeometry(lua_State *L) {
		if (!_lg_typecheck_getPointGeometry(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Geometry * osgParticle::PrecipitationEffect::getPointGeometry() function, expected prototype:\nosg::Geometry * osgParticle::PrecipitationEffect::getPointGeometry()\nClass arguments details:\n");
		}


		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Geometry * osgParticle::PrecipitationEffect::getPointGeometry()");
		}
		osg::Geometry * lret = self->getPointGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// osg::StateSet * osgParticle::PrecipitationEffect::getPointStateSet()
	static int _bind_getPointStateSet(lua_State *L) {
		if (!_lg_typecheck_getPointStateSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateSet * osgParticle::PrecipitationEffect::getPointStateSet() function, expected prototype:\nosg::StateSet * osgParticle::PrecipitationEffect::getPointStateSet()\nClass arguments details:\n");
		}


		osgParticle::PrecipitationEffect* self=dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateSet * osgParticle::PrecipitationEffect::getPointStateSet()");
		}
		osg::StateSet * lret = self->getPointStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

osgParticle::PrecipitationEffect* LunaTraits< osgParticle::PrecipitationEffect >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_PrecipitationEffect::_bind_ctor(L);
}

void LunaTraits< osgParticle::PrecipitationEffect >::_bind_dtor(osgParticle::PrecipitationEffect* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::PrecipitationEffect >::className[] = "PrecipitationEffect";
const char LunaTraits< osgParticle::PrecipitationEffect >::fullName[] = "osgParticle::PrecipitationEffect";
const char LunaTraits< osgParticle::PrecipitationEffect >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::PrecipitationEffect >::parents[] = {"osg.Node", 0};
const int LunaTraits< osgParticle::PrecipitationEffect >::hash = 96995024;
const int LunaTraits< osgParticle::PrecipitationEffect >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::PrecipitationEffect >::methods[] = {
	{"libraryName", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_className},
	{"isSameKindAs", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_isSameKindAs},
	{"accept", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_accept},
	{"traverse", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_traverse},
	{"rain", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_rain},
	{"snow", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_snow},
	{"setMaximumParticleDensity", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_setMaximumParticleDensity},
	{"getMaximumParticleDensity", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getMaximumParticleDensity},
	{"setWind", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_setWind},
	{"getWind", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getWind},
	{"setPosition", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_setPosition},
	{"getPosition", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getPosition},
	{"setCellSize", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_setCellSize},
	{"getCellSize", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getCellSize},
	{"setParticleSpeed", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_setParticleSpeed},
	{"getParticleSpeed", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getParticleSpeed},
	{"setParticleSize", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_setParticleSize},
	{"getParticleSize", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getParticleSize},
	{"setParticleColor", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_setParticleColor},
	{"getParticleColor", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getParticleColor},
	{"setNearTransition", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_setNearTransition},
	{"getNearTransition", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getNearTransition},
	{"setFarTransition", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_setFarTransition},
	{"getFarTransition", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getFarTransition},
	{"setUseFarLineSegments", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_setUseFarLineSegments},
	{"getUseFarLineSegments", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getUseFarLineSegments},
	{"setFog", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_setFog},
	{"getFog", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getFog},
	{"getQuadGeometry", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getQuadGeometry},
	{"getQuadStateSet", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getQuadStateSet},
	{"getLineGeometry", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getLineGeometry},
	{"getLineStateSet", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getLineStateSet},
	{"getPointGeometry", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getPointGeometry},
	{"getPointStateSet", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getPointStateSet},
	{"__eq", &luna_wrapper_osgParticle_PrecipitationEffect::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::PrecipitationEffect >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_PrecipitationEffect::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::PrecipitationEffect >::enumValues[] = {
	{0,0}
};


