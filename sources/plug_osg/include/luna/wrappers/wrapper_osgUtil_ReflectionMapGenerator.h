#ifndef _WRAPPERS_WRAPPER_OSGUTIL_REFLECTIONMAPGENERATOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_REFLECTIONMAPGENERATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/ReflectionMapGenerator>

class wrapper_osgUtil_ReflectionMapGenerator : public osgUtil::ReflectionMapGenerator, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_ReflectionMapGenerator() {
		logDEBUG3("Calling delete function for wrapper osgUtil_ReflectionMapGenerator");
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_ReflectionMapGenerator(lua_State* L, lua_Table* dum, int texture_size = 64) : osgUtil::ReflectionMapGenerator(texture_size), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osgUtil_ReflectionMapGenerator(lua_State* L, lua_Table* dum, const osgUtil::ReflectionMapGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgUtil::ReflectionMapGenerator(copy, copyop), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// osg::Vec4f osgUtil::ReflectionMapGenerator::compute_color(const osg::Vec3f & R) const
	osg::Vec4f compute_color(const osg::Vec3f & R) const {
		if(_obj.pushFunction("compute_color")) {
			_obj.pushArg(&R);
			return *(_obj.callFunction<osg::Vec4f*>());
		}

		return ReflectionMapGenerator::compute_color(R);
	};

public:
	// Public virtual methods:

	// Protected non-virtual methods:
	// void osgUtil::CubeMapGenerator::set_pixel(int index, int c, int r, const osg::Vec4f & color)
	void public_set_pixel(int index, int c, int r, const osg::Vec4f & color) {
		return osgUtil::CubeMapGenerator::set_pixel(index, c, r, color);
	};

	// static osg::Vec4f osgUtil::CubeMapGenerator::vector_to_color(const osg::Vec3f & vec)
	static osg::Vec4f public_vector_to_color(const osg::Vec3f & vec) {
		return osgUtil::CubeMapGenerator::vector_to_color(vec);
	};

	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_set_pixel(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_vector_to_color(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_signalObserversAndDelete(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_deleteUsingDeleteHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// void osgUtil::CubeMapGenerator::public_set_pixel(int index, int c, int r, const osg::Vec4f & color)
	static int _bind_public_set_pixel(lua_State *L) {
		if (!_lg_typecheck_public_set_pixel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CubeMapGenerator::public_set_pixel(int index, int c, int r, const osg::Vec4f & color) function, expected prototype:\nvoid osgUtil::CubeMapGenerator::public_set_pixel(int index, int c, int r, const osg::Vec4f & color)\nClass arguments details:\narg 4 ID = 92303235\n");
		}

		int index=(int)lua_tointeger(L,2);
		int c=(int)lua_tointeger(L,3);
		int r=(int)lua_tointeger(L,4);
		const osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,5));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osgUtil::CubeMapGenerator::public_set_pixel function");
		}
		const osg::Vec4f & color=*color_ptr;

		wrapper_osgUtil_ReflectionMapGenerator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_ReflectionMapGenerator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CubeMapGenerator::public_set_pixel(int, int, int, const osg::Vec4f &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_set_pixel(index, c, r, color);

		return 0;
	}

	// static osg::Vec4f osgUtil::CubeMapGenerator::public_vector_to_color(const osg::Vec3f & vec)
	static int _bind_public_vector_to_color(lua_State *L) {
		if (!_lg_typecheck_public_vector_to_color(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::Vec4f osgUtil::CubeMapGenerator::public_vector_to_color(const osg::Vec3f & vec) function, expected prototype:\nstatic osg::Vec4f osgUtil::CubeMapGenerator::public_vector_to_color(const osg::Vec3f & vec)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* vec_ptr=(Luna< osg::Vec3f >::check(L,1));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in osgUtil::CubeMapGenerator::public_vector_to_color function");
		}
		const osg::Vec3f & vec=*vec_ptr;

		wrapper_osgUtil_ReflectionMapGenerator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_ReflectionMapGenerator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call static osg::Vec4f osgUtil::CubeMapGenerator::public_vector_to_color(const osg::Vec3f &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Vec4f stack_lret = self->public_vector_to_color(vec);
		osg::Vec4f* lret = new osg::Vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,true);

		return 1;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n");
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgUtil_ReflectionMapGenerator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_ReflectionMapGenerator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_signalObserversAndDelete(bool, bool) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_signalObserversAndDelete(signalDelete, doDelete);

		return 0;
	}

	// void osg::Referenced::public_deleteUsingDeleteHandler() const
	static int _bind_public_deleteUsingDeleteHandler(lua_State *L) {
		if (!_lg_typecheck_public_deleteUsingDeleteHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_deleteUsingDeleteHandler() const function, expected prototype:\nvoid osg::Referenced::public_deleteUsingDeleteHandler() const\nClass arguments details:\n");
		}


		wrapper_osgUtil_ReflectionMapGenerator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_ReflectionMapGenerator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_set_pixel",_bind_public_set_pixel},
		{"protected_vector_to_color",_bind_public_vector_to_color},
		{"protected_signalObserversAndDelete",_bind_public_signalObserversAndDelete},
		{"protected_deleteUsingDeleteHandler",_bind_public_deleteUsingDeleteHandler},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

