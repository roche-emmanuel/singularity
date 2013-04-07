#ifndef _WRAPPERS_WRAPPER_SPARK_SPARKDRAWABLE_H_
#define _WRAPPERS_WRAPPER_SPARK_SPARKDRAWABLE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <SparkDrawable.h>

class wrapper_spark_SparkDrawable : public spark::SparkDrawable, public luna_wrapper_base {

public:
		

	~wrapper_spark_SparkDrawable() {
		logDEBUG3("Calling delete function for wrapper spark_SparkDrawable");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((spark::SparkDrawable*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_spark_SparkDrawable(lua_State* L, lua_Table* dum) 
		: spark::SparkDrawable(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((spark::SparkDrawable*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_spark_SparkDrawable(lua_State* L, lua_Table* dum, const spark::SparkDrawable & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) 
		: spark::SparkDrawable(copy, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((spark::SparkDrawable*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// osg::Object * spark::SparkDrawable::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((spark::SparkDrawable*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return SparkDrawable::cloneType();
	};

	// osg::Object * spark::SparkDrawable::clone(const osg::CopyOp & copyop) const
	osg::Object * clone(const osg::CopyOp & copyop) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((spark::SparkDrawable*)this);
			_obj.pushArg(&copyop);
			return (_obj.callFunction<osg::Object*>());
		}

		return SparkDrawable::clone(copyop);
	};

	// bool spark::SparkDrawable::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((spark::SparkDrawable*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return SparkDrawable::isSameKindAs(obj);
	};

	// const char * spark::SparkDrawable::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((spark::SparkDrawable*)this);
			return (_obj.callFunction<const char*>());
		}

		return SparkDrawable::libraryName();
	};

	// const char * spark::SparkDrawable::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((spark::SparkDrawable*)this);
			return (_obj.callFunction<const char*>());
		}

		return SparkDrawable::className();
	};

	// bool spark::SparkDrawable::update(double currentTime, const osg::Vec3d & eye)
	bool update(double currentTime, const osg::Vec3d & eye) {
		if(_obj.pushFunction("update")) {
			_obj.pushArg((spark::SparkDrawable*)this);
			_obj.pushArg(currentTime);
			_obj.pushArg(&eye);
			return (_obj.callFunction<bool>());
		}

		return SparkDrawable::update(currentTime, eye);
	};

	// osg::BoundingBox spark::SparkDrawable::computeBound() const
	osg::BoundingBox computeBound() const {
		if(_obj.pushFunction("computeBound")) {
			_obj.pushArg((spark::SparkDrawable*)this);
			return (_obj.callFunction<osg::BoundingBox>());
		}

		return SparkDrawable::computeBound();
	};

	// void spark::SparkDrawable::drawImplementation(osg::RenderInfo & renderInfo) const
	void drawImplementation(osg::RenderInfo & renderInfo) const {
		if(_obj.pushFunction("drawImplementation")) {
			_obj.pushArg((spark::SparkDrawable*)this);
			_obj.pushArg(&renderInfo);
			return (_obj.callFunction<void>());
		}

		return SparkDrawable::drawImplementation(renderInfo);
	};


	// Protected non-virtual methods:
	// SPK::System * spark::SparkDrawable::createParticleSystem(const SPK::Vector3D & pos, const SPK::Vector3D & rot, float angle)
	SPK::System * public_createParticleSystem(const SPK::Vector3D & pos, const SPK::Vector3D & rot, float angle) {
		return spark::SparkDrawable::createParticleSystem(pos, rot, angle);
	};

	// unsigned int spark::SparkDrawable::compileInternalTexture(osg::Image * image, unsigned int type, unsigned int clamp) const
	unsigned int public_compileInternalTexture(osg::Image * image, unsigned int type, unsigned int clamp) const {
		return spark::SparkDrawable::compileInternalTexture(image, type, clamp);
	};

	// void spark::SparkDrawable::convertData(osg::Image * image, unsigned int type, unsigned int numCurrent, unsigned int numRequired) const
	void public_convertData(osg::Image * image, unsigned int type, unsigned int numCurrent, unsigned int numRequired) const {
		return spark::SparkDrawable::convertData(image, type, numCurrent, numRequired);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_createParticleSystem(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,70092749) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_compileInternalTexture(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_convertData(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// SPK::System * spark::SparkDrawable::public_createParticleSystem(const SPK::Vector3D & pos, const SPK::Vector3D & rot, float angle)
	static int _bind_public_createParticleSystem(lua_State *L) {
		if (!_lg_typecheck_public_createParticleSystem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::System * spark::SparkDrawable::public_createParticleSystem(const SPK::Vector3D & pos, const SPK::Vector3D & rot, float angle) function, expected prototype:\nSPK::System * spark::SparkDrawable::public_createParticleSystem(const SPK::Vector3D & pos, const SPK::Vector3D & rot, float angle)\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 70092749\n");
		}

		const SPK::Vector3D* pos_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in spark::SparkDrawable::public_createParticleSystem function");
		}
		const SPK::Vector3D & pos=*pos_ptr;
		const SPK::Vector3D* rot_ptr=(Luna< SPK::Vector3D >::check(L,3));
		if( !rot_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rot in spark::SparkDrawable::public_createParticleSystem function");
		}
		const SPK::Vector3D & rot=*rot_ptr;
		float angle=(float)lua_tonumber(L,4);

		wrapper_spark_SparkDrawable* self=Luna< osg::Referenced >::checkSubType< wrapper_spark_SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::System * spark::SparkDrawable::public_createParticleSystem(const SPK::Vector3D &, const SPK::Vector3D &, float). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		SPK::System * lret = self->public_createParticleSystem(pos, rot, angle);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::System >::push(L,lret,false);

		return 1;
	}

	// unsigned int spark::SparkDrawable::public_compileInternalTexture(osg::Image * image, unsigned int type, unsigned int clamp) const
	static int _bind_public_compileInternalTexture(lua_State *L) {
		if (!_lg_typecheck_public_compileInternalTexture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int spark::SparkDrawable::public_compileInternalTexture(osg::Image * image, unsigned int type, unsigned int clamp) const function, expected prototype:\nunsigned int spark::SparkDrawable::public_compileInternalTexture(osg::Image * image, unsigned int type, unsigned int clamp) const\nClass arguments details:\n");
		}

		osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		unsigned int type=(unsigned int)lua_tointeger(L,3);
		unsigned int clamp=(unsigned int)lua_tointeger(L,4);

		wrapper_spark_SparkDrawable* self=Luna< osg::Referenced >::checkSubType< wrapper_spark_SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int spark::SparkDrawable::public_compileInternalTexture(osg::Image *, unsigned int, unsigned int) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->public_compileInternalTexture(image, type, clamp);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void spark::SparkDrawable::public_convertData(osg::Image * image, unsigned int type, unsigned int numCurrent, unsigned int numRequired) const
	static int _bind_public_convertData(lua_State *L) {
		if (!_lg_typecheck_public_convertData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void spark::SparkDrawable::public_convertData(osg::Image * image, unsigned int type, unsigned int numCurrent, unsigned int numRequired) const function, expected prototype:\nvoid spark::SparkDrawable::public_convertData(osg::Image * image, unsigned int type, unsigned int numCurrent, unsigned int numRequired) const\nClass arguments details:\n");
		}

		osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		unsigned int type=(unsigned int)lua_tointeger(L,3);
		unsigned int numCurrent=(unsigned int)lua_tointeger(L,4);
		unsigned int numRequired=(unsigned int)lua_tointeger(L,5);

		wrapper_spark_SparkDrawable* self=Luna< osg::Referenced >::checkSubType< wrapper_spark_SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void spark::SparkDrawable::public_convertData(osg::Image *, unsigned int, unsigned int, unsigned int) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_convertData(image, type, numCurrent, numRequired);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"createParticleSystem",_bind_public_createParticleSystem},
		{"compileInternalTexture",_bind_public_compileInternalTexture},
		{"convertData",_bind_public_convertData},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

