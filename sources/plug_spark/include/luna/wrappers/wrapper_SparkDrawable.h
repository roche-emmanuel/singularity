#ifndef _WRAPPERS_WRAPPER_SPARKDRAWABLE_H_
#define _WRAPPERS_WRAPPER_SPARKDRAWABLE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <SparkDrawable.h>

class wrapper_SparkDrawable : public SparkDrawable, public luna_wrapper_base {

public:
		

	~wrapper_SparkDrawable() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_SparkDrawable(lua_State* L, lua_Table* dum) : SparkDrawable(), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_SparkDrawable(lua_State* L, lua_Table* dum, const SparkDrawable & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : SparkDrawable(copy, copyop), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// osg::Object * SparkDrawable::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return SparkDrawable::cloneType();
	};

	// osg::Object * SparkDrawable::clone(const osg::CopyOp & copyop) const
	osg::Object * clone(const osg::CopyOp & copyop) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&copyop);
			return (_obj.callFunction<osg::Object*>());
		}

		return SparkDrawable::clone(copyop);
	};

	// bool SparkDrawable::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return SparkDrawable::isSameKindAs(obj);
	};

	// const char * SparkDrawable::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return SparkDrawable::libraryName();
	};

	// const char * SparkDrawable::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return SparkDrawable::className();
	};

	// bool SparkDrawable::update(double currentTime, const osg::Vec3d & eye)
	bool update(double currentTime, const osg::Vec3d & eye) {
		if(_obj.pushFunction("update")) {
			_obj.pushArg(currentTime);
			_obj.pushArg(&eye);
			return (_obj.callFunction<bool>());
		}

		return SparkDrawable::update(currentTime, eye);
	};

	// osg::BoundingBox SparkDrawable::computeBound() const
	osg::BoundingBox computeBound() const {
		if(_obj.pushFunction("computeBound")) {
			return (_obj.callFunction<osg::BoundingBox>());
		}

		return SparkDrawable::computeBound();
	};

	// void SparkDrawable::drawImplementation(osg::RenderInfo & renderInfo) const
	void drawImplementation(osg::RenderInfo & renderInfo) const {
		if(_obj.pushFunction("drawImplementation")) {
			_obj.pushArg(&renderInfo);
			return (_obj.callFunction<void>());
		}

		return SparkDrawable::drawImplementation(renderInfo);
	};


	// Protected non-virtual methods:
	// SPK::System * SparkDrawable::createParticleSystem(const SPK::Vector3D & pos, const SPK::Vector3D & rot, float angle)
	SPK::System * public_createParticleSystem(const SPK::Vector3D & pos, const SPK::Vector3D & rot, float angle) {
		return SparkDrawable::createParticleSystem(pos, rot, angle);
	};

	// unsigned int SparkDrawable::compileInternalTexture(osg::Image * image, unsigned int type, unsigned int clamp) const
	unsigned int public_compileInternalTexture(osg::Image * image, unsigned int type, unsigned int clamp) const {
		return SparkDrawable::compileInternalTexture(image, type, clamp);
	};

	// void SparkDrawable::convertData(osg::Image * image, unsigned int type, unsigned int numCurrent, unsigned int numRequired) const
	void public_convertData(osg::Image * image, unsigned int type, unsigned int numCurrent, unsigned int numRequired) const {
		return SparkDrawable::convertData(image, type, numCurrent, numRequired);
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
	// SPK::System * SparkDrawable::public_createParticleSystem(const SPK::Vector3D & pos, const SPK::Vector3D & rot, float angle)
	static int _bind_public_createParticleSystem(lua_State *L) {
		if (!_lg_typecheck_public_createParticleSystem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::System * SparkDrawable::public_createParticleSystem(const SPK::Vector3D & pos, const SPK::Vector3D & rot, float angle) function, expected prototype:\nSPK::System * SparkDrawable::public_createParticleSystem(const SPK::Vector3D & pos, const SPK::Vector3D & rot, float angle)\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 70092749\n");
		}

		const SPK::Vector3D* pos_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in SparkDrawable::public_createParticleSystem function");
		}
		const SPK::Vector3D & pos=*pos_ptr;
		const SPK::Vector3D* rot_ptr=(Luna< SPK::Vector3D >::check(L,3));
		if( !rot_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rot in SparkDrawable::public_createParticleSystem function");
		}
		const SPK::Vector3D & rot=*rot_ptr;
		float angle=(float)lua_tonumber(L,4);

		wrapper_SparkDrawable* self=Luna< osg::Referenced >::checkSubType< wrapper_SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::System * SparkDrawable::public_createParticleSystem(const SPK::Vector3D &, const SPK::Vector3D &, float)");
		}
		SPK::System * lret = self->public_createParticleSystem(pos, rot, angle);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::System >::push(L,lret,false);

		return 1;
	}

	// unsigned int SparkDrawable::public_compileInternalTexture(osg::Image * image, unsigned int type, unsigned int clamp) const
	static int _bind_public_compileInternalTexture(lua_State *L) {
		if (!_lg_typecheck_public_compileInternalTexture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int SparkDrawable::public_compileInternalTexture(osg::Image * image, unsigned int type, unsigned int clamp) const function, expected prototype:\nunsigned int SparkDrawable::public_compileInternalTexture(osg::Image * image, unsigned int type, unsigned int clamp) const\nClass arguments details:\n");
		}

		osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		unsigned int type=(unsigned int)lua_tointeger(L,3);
		unsigned int clamp=(unsigned int)lua_tointeger(L,4);

		wrapper_SparkDrawable* self=Luna< osg::Referenced >::checkSubType< wrapper_SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int SparkDrawable::public_compileInternalTexture(osg::Image *, unsigned int, unsigned int) const");
		}
		unsigned int lret = self->public_compileInternalTexture(image, type, clamp);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void SparkDrawable::public_convertData(osg::Image * image, unsigned int type, unsigned int numCurrent, unsigned int numRequired) const
	static int _bind_public_convertData(lua_State *L) {
		if (!_lg_typecheck_public_convertData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SparkDrawable::public_convertData(osg::Image * image, unsigned int type, unsigned int numCurrent, unsigned int numRequired) const function, expected prototype:\nvoid SparkDrawable::public_convertData(osg::Image * image, unsigned int type, unsigned int numCurrent, unsigned int numRequired) const\nClass arguments details:\n");
		}

		osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		unsigned int type=(unsigned int)lua_tointeger(L,3);
		unsigned int numCurrent=(unsigned int)lua_tointeger(L,4);
		unsigned int numRequired=(unsigned int)lua_tointeger(L,5);

		wrapper_SparkDrawable* self=Luna< osg::Referenced >::checkSubType< wrapper_SparkDrawable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SparkDrawable::public_convertData(osg::Image *, unsigned int, unsigned int, unsigned int) const");
		}
		self->public_convertData(image, type, numCurrent, numRequired);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_createParticleSystem",_bind_public_createParticleSystem},
		{"protected_compileInternalTexture",_bind_public_compileInternalTexture},
		{"protected_convertData",_bind_public_convertData},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

