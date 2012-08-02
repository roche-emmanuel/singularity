#include <plug_common.h>

class luna_wrapper_osg_Drawable_ConstAttributeFunctor {
public:
	typedef Luna< osg::Drawable::ConstAttributeFunctor > luna_t;

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

		osg::Drawable::ConstAttributeFunctor* self=(Luna< osg::Drawable::ConstAttributeFunctor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Drawable::ConstAttributeFunctor");
		
		return luna_dynamicCast(L,converters,"osg::Drawable::ConstAttributeFunctor",name);
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
	// void osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const signed char * )
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const signed char * ) function, expected prototype:\nvoid osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const signed char * )\nClass arguments details:\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);
		signed char _arg3=(signed char)lua_tointeger(L,4);

		osg::Drawable::ConstAttributeFunctor* self=(Luna< osg::Drawable::ConstAttributeFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::ConstAttributeFunctor::apply(unsigned int, unsigned, const signed char *)");
		}
		self->apply(_arg1, _arg2, &_arg3);

		return 0;
	}

	// void osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const short * )
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const short * ) function, expected prototype:\nvoid osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const short * )\nClass arguments details:\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);
		short _arg3=(short)lua_tointeger(L,4);

		osg::Drawable::ConstAttributeFunctor* self=(Luna< osg::Drawable::ConstAttributeFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::ConstAttributeFunctor::apply(unsigned int, unsigned, const short *)");
		}
		self->apply(_arg1, _arg2, &_arg3);

		return 0;
	}

	// void osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const int * )
	static int _bind_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_apply_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const int * ) function, expected prototype:\nvoid osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const int * )\nClass arguments details:\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);
		int _arg3=(int)lua_tointeger(L,4);

		osg::Drawable::ConstAttributeFunctor* self=(Luna< osg::Drawable::ConstAttributeFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::ConstAttributeFunctor::apply(unsigned int, unsigned, const int *)");
		}
		self->apply(_arg1, _arg2, &_arg3);

		return 0;
	}

	// void osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const unsigned char * )
	static int _bind_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_apply_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const unsigned char * ) function, expected prototype:\nvoid osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const unsigned char * )\nClass arguments details:\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);
		unsigned char _arg3 = (unsigned char)(lua_tointeger(L,4));

		osg::Drawable::ConstAttributeFunctor* self=(Luna< osg::Drawable::ConstAttributeFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::ConstAttributeFunctor::apply(unsigned int, unsigned, const unsigned char *)");
		}
		self->apply(_arg1, _arg2, &_arg3);

		return 0;
	}

	// void osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const unsigned short * )
	static int _bind_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_apply_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const unsigned short * ) function, expected prototype:\nvoid osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const unsigned short * )\nClass arguments details:\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);
		unsigned short _arg3=(unsigned short)lua_tointeger(L,4);

		osg::Drawable::ConstAttributeFunctor* self=(Luna< osg::Drawable::ConstAttributeFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::ConstAttributeFunctor::apply(unsigned int, unsigned, const unsigned short *)");
		}
		self->apply(_arg1, _arg2, &_arg3);

		return 0;
	}

	// void osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const unsigned int * )
	static int _bind_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_apply_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const unsigned int * ) function, expected prototype:\nvoid osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const unsigned int * )\nClass arguments details:\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);
		unsigned int _arg3=(unsigned int)lua_tointeger(L,4);

		osg::Drawable::ConstAttributeFunctor* self=(Luna< osg::Drawable::ConstAttributeFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::ConstAttributeFunctor::apply(unsigned int, unsigned, const unsigned int *)");
		}
		self->apply(_arg1, _arg2, &_arg3);

		return 0;
	}

	// void osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const float * )
	static int _bind_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_apply_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const float * ) function, expected prototype:\nvoid osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const float * )\nClass arguments details:\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);
		float _arg3=(float)lua_tonumber(L,4);

		osg::Drawable::ConstAttributeFunctor* self=(Luna< osg::Drawable::ConstAttributeFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::ConstAttributeFunctor::apply(unsigned int, unsigned, const float *)");
		}
		self->apply(_arg1, _arg2, &_arg3);

		return 0;
	}

	// void osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const osg::Vec2f * )
	static int _bind_apply_overload_8(lua_State *L) {
		if (!_lg_typecheck_apply_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const osg::Vec2f * ) function, expected prototype:\nvoid osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const osg::Vec2f * )\nClass arguments details:\narg 3 ID = 92303173\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);
		const osg::Vec2f* _arg3=(Luna< osg::Vec2f >::check(L,4));

		osg::Drawable::ConstAttributeFunctor* self=(Luna< osg::Drawable::ConstAttributeFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::ConstAttributeFunctor::apply(unsigned int, unsigned, const osg::Vec2f *)");
		}
		self->apply(_arg1, _arg2, _arg3);

		return 0;
	}

	// void osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const osg::Vec3f * )
	static int _bind_apply_overload_9(lua_State *L) {
		if (!_lg_typecheck_apply_overload_9(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const osg::Vec3f * ) function, expected prototype:\nvoid osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const osg::Vec3f * )\nClass arguments details:\narg 3 ID = 92303204\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);
		const osg::Vec3f* _arg3=(Luna< osg::Vec3f >::check(L,4));

		osg::Drawable::ConstAttributeFunctor* self=(Luna< osg::Drawable::ConstAttributeFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::ConstAttributeFunctor::apply(unsigned int, unsigned, const osg::Vec3f *)");
		}
		self->apply(_arg1, _arg2, _arg3);

		return 0;
	}

	// void osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const osg::Vec4f * )
	static int _bind_apply_overload_10(lua_State *L) {
		if (!_lg_typecheck_apply_overload_10(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const osg::Vec4f * ) function, expected prototype:\nvoid osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const osg::Vec4f * )\nClass arguments details:\narg 3 ID = 92303235\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);
		const osg::Vec4f* _arg3=(Luna< osg::Vec4f >::check(L,4));

		osg::Drawable::ConstAttributeFunctor* self=(Luna< osg::Drawable::ConstAttributeFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::ConstAttributeFunctor::apply(unsigned int, unsigned, const osg::Vec4f *)");
		}
		self->apply(_arg1, _arg2, _arg3);

		return 0;
	}

	// void osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const osg::Vec4ub * )
	static int _bind_apply_overload_11(lua_State *L) {
		if (!_lg_typecheck_apply_overload_11(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const osg::Vec4ub * ) function, expected prototype:\nvoid osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const osg::Vec4ub * )\nClass arguments details:\narg 3 ID = 61400540\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);
		const osg::Vec4ub* _arg3=(Luna< osg::Vec4ub >::check(L,4));

		osg::Drawable::ConstAttributeFunctor* self=(Luna< osg::Drawable::ConstAttributeFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::ConstAttributeFunctor::apply(unsigned int, unsigned, const osg::Vec4ub *)");
		}
		self->apply(_arg1, _arg2, _arg3);

		return 0;
	}

	// void osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const double * )
	static int _bind_apply_overload_12(lua_State *L) {
		if (!_lg_typecheck_apply_overload_12(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const double * ) function, expected prototype:\nvoid osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const double * )\nClass arguments details:\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);
		double _arg3=(double)lua_tonumber(L,4);

		osg::Drawable::ConstAttributeFunctor* self=(Luna< osg::Drawable::ConstAttributeFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::ConstAttributeFunctor::apply(unsigned int, unsigned, const double *)");
		}
		self->apply(_arg1, _arg2, &_arg3);

		return 0;
	}

	// void osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const osg::Vec2d * )
	static int _bind_apply_overload_13(lua_State *L) {
		if (!_lg_typecheck_apply_overload_13(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const osg::Vec2d * ) function, expected prototype:\nvoid osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const osg::Vec2d * )\nClass arguments details:\narg 3 ID = 92303171\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);
		const osg::Vec2d* _arg3=(Luna< osg::Vec2d >::check(L,4));

		osg::Drawable::ConstAttributeFunctor* self=(Luna< osg::Drawable::ConstAttributeFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::ConstAttributeFunctor::apply(unsigned int, unsigned, const osg::Vec2d *)");
		}
		self->apply(_arg1, _arg2, _arg3);

		return 0;
	}

	// void osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const osg::Vec3d * )
	static int _bind_apply_overload_14(lua_State *L) {
		if (!_lg_typecheck_apply_overload_14(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const osg::Vec3d * ) function, expected prototype:\nvoid osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const osg::Vec3d * )\nClass arguments details:\narg 3 ID = 92303202\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);
		const osg::Vec3d* _arg3=(Luna< osg::Vec3d >::check(L,4));

		osg::Drawable::ConstAttributeFunctor* self=(Luna< osg::Drawable::ConstAttributeFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::ConstAttributeFunctor::apply(unsigned int, unsigned, const osg::Vec3d *)");
		}
		self->apply(_arg1, _arg2, _arg3);

		return 0;
	}

	// void osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const osg::Vec4d * )
	static int _bind_apply_overload_15(lua_State *L) {
		if (!_lg_typecheck_apply_overload_15(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const osg::Vec4d * ) function, expected prototype:\nvoid osg::Drawable::ConstAttributeFunctor::apply(unsigned int , unsigned int, const osg::Vec4d * )\nClass arguments details:\narg 3 ID = 92303233\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);
		const osg::Vec4d* _arg3=(Luna< osg::Vec4d >::check(L,4));

		osg::Drawable::ConstAttributeFunctor* self=(Luna< osg::Drawable::ConstAttributeFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::ConstAttributeFunctor::apply(unsigned int, unsigned, const osg::Vec4d *)");
		}
		self->apply(_arg1, _arg2, _arg3);

		return 0;
	}

	// Overload binder for osg::Drawable::ConstAttributeFunctor::apply
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

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(unsigned int, unsigned, const signed char *)\n  apply(unsigned int, unsigned, const short *)\n  apply(unsigned int, unsigned, const int *)\n  apply(unsigned int, unsigned, const unsigned char *)\n  apply(unsigned int, unsigned, const unsigned short *)\n  apply(unsigned int, unsigned, const unsigned int *)\n  apply(unsigned int, unsigned, const float *)\n  apply(unsigned int, unsigned, const osg::Vec2f *)\n  apply(unsigned int, unsigned, const osg::Vec3f *)\n  apply(unsigned int, unsigned, const osg::Vec4f *)\n  apply(unsigned int, unsigned, const osg::Vec4ub *)\n  apply(unsigned int, unsigned, const double *)\n  apply(unsigned int, unsigned, const osg::Vec2d *)\n  apply(unsigned int, unsigned, const osg::Vec3d *)\n  apply(unsigned int, unsigned, const osg::Vec4d *)\n");
		return 0;
	}


	// Operator binds:

};

osg::Drawable::ConstAttributeFunctor* LunaTraits< osg::Drawable::ConstAttributeFunctor >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::Drawable::ConstAttributeFunctor >::_bind_dtor(osg::Drawable::ConstAttributeFunctor* obj) {
	delete obj;
}

const char LunaTraits< osg::Drawable::ConstAttributeFunctor >::className[] = "ConstAttributeFunctor";
const char LunaTraits< osg::Drawable::ConstAttributeFunctor >::fullName[] = "osg::Drawable::ConstAttributeFunctor";
const char LunaTraits< osg::Drawable::ConstAttributeFunctor >::moduleName[] = "osg";
const char* LunaTraits< osg::Drawable::ConstAttributeFunctor >::parents[] = {0};
const int LunaTraits< osg::Drawable::ConstAttributeFunctor >::hash = 68991165;
const int LunaTraits< osg::Drawable::ConstAttributeFunctor >::uniqueIDs[] = {68991165,0};

luna_RegType LunaTraits< osg::Drawable::ConstAttributeFunctor >::methods[] = {
	{"apply", &luna_wrapper_osg_Drawable_ConstAttributeFunctor::_bind_apply},
	{"dynCast", &luna_wrapper_osg_Drawable_ConstAttributeFunctor::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Drawable::ConstAttributeFunctor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Drawable::ConstAttributeFunctor >::enumValues[] = {
	{0,0}
};


