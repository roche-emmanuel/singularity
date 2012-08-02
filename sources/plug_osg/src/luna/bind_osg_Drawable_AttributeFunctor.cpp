#include <plug_common.h>

class luna_wrapper_osg_Drawable_AttributeFunctor {
public:
	typedef Luna< osg::Drawable::AttributeFunctor > luna_t;

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Drawable::AttributeFunctor* self=(Luna< osg::Drawable::AttributeFunctor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Drawable::AttributeFunctor");
		
		return luna_dynamicCast(L,converters,"osg::Drawable::AttributeFunctor",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_6(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_7(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_8(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,92303173)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_9(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,92303204)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_10(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,92303235)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_11(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,61400540)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_12(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_13(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,92303171)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_14(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,92303202)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_15(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,92303233)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, signed char * )
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, signed char * ) function, expected prototype:\nvoid osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, signed char * )\nClass arguments details:\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);
		signed char _arg3=(signed char)lua_tointeger(L,4);

		osg::Drawable::AttributeFunctor* self=(Luna< osg::Drawable::AttributeFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::AttributeFunctor::apply(unsigned int, unsigned, signed char *)");
		}
		self->apply(_arg1, _arg2, &_arg3);

		return 0;
	}

	// void osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, short * )
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, short * ) function, expected prototype:\nvoid osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, short * )\nClass arguments details:\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);
		short _arg3=(short)lua_tointeger(L,4);

		osg::Drawable::AttributeFunctor* self=(Luna< osg::Drawable::AttributeFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::AttributeFunctor::apply(unsigned int, unsigned, short *)");
		}
		self->apply(_arg1, _arg2, &_arg3);

		return 0;
	}

	// void osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, int * )
	static int _bind_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_apply_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, int * ) function, expected prototype:\nvoid osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, int * )\nClass arguments details:\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);
		int _arg3=(int)lua_tointeger(L,4);

		osg::Drawable::AttributeFunctor* self=(Luna< osg::Drawable::AttributeFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::AttributeFunctor::apply(unsigned int, unsigned, int *)");
		}
		self->apply(_arg1, _arg2, &_arg3);

		return 0;
	}

	// void osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, unsigned char * )
	static int _bind_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_apply_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, unsigned char * ) function, expected prototype:\nvoid osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, unsigned char * )\nClass arguments details:\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);
		unsigned char _arg3 = (unsigned char)(lua_tointeger(L,4));

		osg::Drawable::AttributeFunctor* self=(Luna< osg::Drawable::AttributeFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::AttributeFunctor::apply(unsigned int, unsigned, unsigned char *)");
		}
		self->apply(_arg1, _arg2, &_arg3);

		return 0;
	}

	// void osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, unsigned short * )
	static int _bind_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_apply_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, unsigned short * ) function, expected prototype:\nvoid osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, unsigned short * )\nClass arguments details:\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);
		unsigned short _arg3=(unsigned short)lua_tointeger(L,4);

		osg::Drawable::AttributeFunctor* self=(Luna< osg::Drawable::AttributeFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::AttributeFunctor::apply(unsigned int, unsigned, unsigned short *)");
		}
		self->apply(_arg1, _arg2, &_arg3);

		return 0;
	}

	// void osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, unsigned int * )
	static int _bind_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_apply_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, unsigned int * ) function, expected prototype:\nvoid osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, unsigned int * )\nClass arguments details:\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);
		unsigned int _arg3=(unsigned int)lua_tointeger(L,4);

		osg::Drawable::AttributeFunctor* self=(Luna< osg::Drawable::AttributeFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::AttributeFunctor::apply(unsigned int, unsigned, unsigned int *)");
		}
		self->apply(_arg1, _arg2, &_arg3);

		return 0;
	}

	// void osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, float * )
	static int _bind_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_apply_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, float * ) function, expected prototype:\nvoid osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, float * )\nClass arguments details:\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);
		float _arg3=(float)lua_tonumber(L,4);

		osg::Drawable::AttributeFunctor* self=(Luna< osg::Drawable::AttributeFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::AttributeFunctor::apply(unsigned int, unsigned, float *)");
		}
		self->apply(_arg1, _arg2, &_arg3);

		return 0;
	}

	// void osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, osg::Vec2f * )
	static int _bind_apply_overload_8(lua_State *L) {
		if (!_lg_typecheck_apply_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, osg::Vec2f * ) function, expected prototype:\nvoid osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, osg::Vec2f * )\nClass arguments details:\narg 3 ID = 92303173\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);
		osg::Vec2f* _arg3=(Luna< osg::Vec2f >::check(L,4));

		osg::Drawable::AttributeFunctor* self=(Luna< osg::Drawable::AttributeFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::AttributeFunctor::apply(unsigned int, unsigned, osg::Vec2f *)");
		}
		self->apply(_arg1, _arg2, _arg3);

		return 0;
	}

	// void osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, osg::Vec3f * )
	static int _bind_apply_overload_9(lua_State *L) {
		if (!_lg_typecheck_apply_overload_9(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, osg::Vec3f * ) function, expected prototype:\nvoid osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, osg::Vec3f * )\nClass arguments details:\narg 3 ID = 92303204\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);
		osg::Vec3f* _arg3=(Luna< osg::Vec3f >::check(L,4));

		osg::Drawable::AttributeFunctor* self=(Luna< osg::Drawable::AttributeFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::AttributeFunctor::apply(unsigned int, unsigned, osg::Vec3f *)");
		}
		self->apply(_arg1, _arg2, _arg3);

		return 0;
	}

	// void osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, osg::Vec4f * )
	static int _bind_apply_overload_10(lua_State *L) {
		if (!_lg_typecheck_apply_overload_10(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, osg::Vec4f * ) function, expected prototype:\nvoid osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, osg::Vec4f * )\nClass arguments details:\narg 3 ID = 92303235\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);
		osg::Vec4f* _arg3=(Luna< osg::Vec4f >::check(L,4));

		osg::Drawable::AttributeFunctor* self=(Luna< osg::Drawable::AttributeFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::AttributeFunctor::apply(unsigned int, unsigned, osg::Vec4f *)");
		}
		self->apply(_arg1, _arg2, _arg3);

		return 0;
	}

	// void osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, osg::Vec4ub * )
	static int _bind_apply_overload_11(lua_State *L) {
		if (!_lg_typecheck_apply_overload_11(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, osg::Vec4ub * ) function, expected prototype:\nvoid osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, osg::Vec4ub * )\nClass arguments details:\narg 3 ID = 61400540\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);
		osg::Vec4ub* _arg3=(Luna< osg::Vec4ub >::check(L,4));

		osg::Drawable::AttributeFunctor* self=(Luna< osg::Drawable::AttributeFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::AttributeFunctor::apply(unsigned int, unsigned, osg::Vec4ub *)");
		}
		self->apply(_arg1, _arg2, _arg3);

		return 0;
	}

	// void osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, double * )
	static int _bind_apply_overload_12(lua_State *L) {
		if (!_lg_typecheck_apply_overload_12(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, double * ) function, expected prototype:\nvoid osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, double * )\nClass arguments details:\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);
		double _arg3=(double)lua_tonumber(L,4);

		osg::Drawable::AttributeFunctor* self=(Luna< osg::Drawable::AttributeFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::AttributeFunctor::apply(unsigned int, unsigned, double *)");
		}
		self->apply(_arg1, _arg2, &_arg3);

		return 0;
	}

	// void osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, osg::Vec2d * )
	static int _bind_apply_overload_13(lua_State *L) {
		if (!_lg_typecheck_apply_overload_13(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, osg::Vec2d * ) function, expected prototype:\nvoid osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, osg::Vec2d * )\nClass arguments details:\narg 3 ID = 92303171\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);
		osg::Vec2d* _arg3=(Luna< osg::Vec2d >::check(L,4));

		osg::Drawable::AttributeFunctor* self=(Luna< osg::Drawable::AttributeFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::AttributeFunctor::apply(unsigned int, unsigned, osg::Vec2d *)");
		}
		self->apply(_arg1, _arg2, _arg3);

		return 0;
	}

	// void osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, osg::Vec3d * )
	static int _bind_apply_overload_14(lua_State *L) {
		if (!_lg_typecheck_apply_overload_14(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, osg::Vec3d * ) function, expected prototype:\nvoid osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, osg::Vec3d * )\nClass arguments details:\narg 3 ID = 92303202\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);
		osg::Vec3d* _arg3=(Luna< osg::Vec3d >::check(L,4));

		osg::Drawable::AttributeFunctor* self=(Luna< osg::Drawable::AttributeFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::AttributeFunctor::apply(unsigned int, unsigned, osg::Vec3d *)");
		}
		self->apply(_arg1, _arg2, _arg3);

		return 0;
	}

	// void osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, osg::Vec4d * )
	static int _bind_apply_overload_15(lua_State *L) {
		if (!_lg_typecheck_apply_overload_15(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, osg::Vec4d * ) function, expected prototype:\nvoid osg::Drawable::AttributeFunctor::apply(unsigned int , unsigned int, osg::Vec4d * )\nClass arguments details:\narg 3 ID = 92303233\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);
		osg::Vec4d* _arg3=(Luna< osg::Vec4d >::check(L,4));

		osg::Drawable::AttributeFunctor* self=(Luna< osg::Drawable::AttributeFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::AttributeFunctor::apply(unsigned int, unsigned, osg::Vec4d *)");
		}
		self->apply(_arg1, _arg2, _arg3);

		return 0;
	}

	// Overload binder for osg::Drawable::AttributeFunctor::apply
	static int _bind_apply(lua_State *L) {
		if (_lg_typecheck_apply_overload_1(L)) return _bind_apply_overload_1(L);
		if (_lg_typecheck_apply_overload_2(L)) return _bind_apply_overload_2(L);
		if (_lg_typecheck_apply_overload_3(L)) return _bind_apply_overload_3(L);
		if (_lg_typecheck_apply_overload_4(L)) return _bind_apply_overload_4(L);
		if (_lg_typecheck_apply_overload_5(L)) return _bind_apply_overload_5(L);
		if (_lg_typecheck_apply_overload_6(L)) return _bind_apply_overload_6(L);
		if (_lg_typecheck_apply_overload_7(L)) return _bind_apply_overload_7(L);
		if (_lg_typecheck_apply_overload_8(L)) return _bind_apply_overload_8(L);
		if (_lg_typecheck_apply_overload_9(L)) return _bind_apply_overload_9(L);
		if (_lg_typecheck_apply_overload_10(L)) return _bind_apply_overload_10(L);
		if (_lg_typecheck_apply_overload_11(L)) return _bind_apply_overload_11(L);
		if (_lg_typecheck_apply_overload_12(L)) return _bind_apply_overload_12(L);
		if (_lg_typecheck_apply_overload_13(L)) return _bind_apply_overload_13(L);
		if (_lg_typecheck_apply_overload_14(L)) return _bind_apply_overload_14(L);
		if (_lg_typecheck_apply_overload_15(L)) return _bind_apply_overload_15(L);

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(unsigned int, unsigned, signed char *)\n  apply(unsigned int, unsigned, short *)\n  apply(unsigned int, unsigned, int *)\n  apply(unsigned int, unsigned, unsigned char *)\n  apply(unsigned int, unsigned, unsigned short *)\n  apply(unsigned int, unsigned, unsigned int *)\n  apply(unsigned int, unsigned, float *)\n  apply(unsigned int, unsigned, osg::Vec2f *)\n  apply(unsigned int, unsigned, osg::Vec3f *)\n  apply(unsigned int, unsigned, osg::Vec4f *)\n  apply(unsigned int, unsigned, osg::Vec4ub *)\n  apply(unsigned int, unsigned, double *)\n  apply(unsigned int, unsigned, osg::Vec2d *)\n  apply(unsigned int, unsigned, osg::Vec3d *)\n  apply(unsigned int, unsigned, osg::Vec4d *)\n");
		return 0;
	}


	// Operator binds:

};

osg::Drawable::AttributeFunctor* LunaTraits< osg::Drawable::AttributeFunctor >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::Drawable::AttributeFunctor >::_bind_dtor(osg::Drawable::AttributeFunctor* obj) {
	delete obj;
}

const char LunaTraits< osg::Drawable::AttributeFunctor >::className[] = "AttributeFunctor";
const char LunaTraits< osg::Drawable::AttributeFunctor >::fullName[] = "osg::Drawable::AttributeFunctor";
const char LunaTraits< osg::Drawable::AttributeFunctor >::moduleName[] = "osg";
const char* LunaTraits< osg::Drawable::AttributeFunctor >::parents[] = {0};
const int LunaTraits< osg::Drawable::AttributeFunctor >::hash = 20397010;
const int LunaTraits< osg::Drawable::AttributeFunctor >::uniqueIDs[] = {20397010,0};

luna_RegType LunaTraits< osg::Drawable::AttributeFunctor >::methods[] = {
	{"apply", &luna_wrapper_osg_Drawable_AttributeFunctor::_bind_apply},
	{"dynCast", &luna_wrapper_osg_Drawable_AttributeFunctor::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Drawable::AttributeFunctor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Drawable::AttributeFunctor >::enumValues[] = {
	{0,0}
};


