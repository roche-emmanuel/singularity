#include <plug_common.h>

class luna_wrapper_osg_ConstValueVisitor {
public:
	typedef Luna< osg::ConstValueVisitor > luna_t;

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

		osg::ConstValueVisitor* self=(Luna< osg::ConstValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ConstValueVisitor");
		
		return luna_dynamicCast(L,converters,"osg::ConstValueVisitor",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,61400540) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_10(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_11(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_12(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_13(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303169) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_14(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303200) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_15(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303231) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_16(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303186) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_17(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303217) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_18(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303248) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_19(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303171) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_20(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_21(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303233) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_22(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903840) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ConstValueVisitor::ConstValueVisitor()
	static osg::ConstValueVisitor* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ConstValueVisitor::ConstValueVisitor() function, expected prototype:\nosg::ConstValueVisitor::ConstValueVisitor()\nClass arguments details:\n");
		}


		return new osg::ConstValueVisitor();
	}


	// Function binds:
	// void osg::ConstValueVisitor::apply(const signed char & )
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstValueVisitor::apply(const signed char & ) function, expected prototype:\nvoid osg::ConstValueVisitor::apply(const signed char & )\nClass arguments details:\n");
		}

		signed char _arg1=(signed char)lua_tointeger(L,2);

		osg::ConstValueVisitor* self=(Luna< osg::ConstValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstValueVisitor::apply(const signed char &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstValueVisitor::apply(const short & )
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstValueVisitor::apply(const short & ) function, expected prototype:\nvoid osg::ConstValueVisitor::apply(const short & )\nClass arguments details:\n");
		}

		short _arg1=(short)lua_tointeger(L,2);

		osg::ConstValueVisitor* self=(Luna< osg::ConstValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstValueVisitor::apply(const short &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstValueVisitor::apply(const int & )
	static int _bind_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_apply_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstValueVisitor::apply(const int & ) function, expected prototype:\nvoid osg::ConstValueVisitor::apply(const int & )\nClass arguments details:\n");
		}

		int _arg1=(int)lua_tointeger(L,2);

		osg::ConstValueVisitor* self=(Luna< osg::ConstValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstValueVisitor::apply(const int &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstValueVisitor::apply(const unsigned short & )
	static int _bind_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_apply_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstValueVisitor::apply(const unsigned short & ) function, expected prototype:\nvoid osg::ConstValueVisitor::apply(const unsigned short & )\nClass arguments details:\n");
		}

		unsigned short _arg1=(unsigned short)lua_tointeger(L,2);

		osg::ConstValueVisitor* self=(Luna< osg::ConstValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstValueVisitor::apply(const unsigned short &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstValueVisitor::apply(const unsigned char & )
	static int _bind_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_apply_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstValueVisitor::apply(const unsigned char & ) function, expected prototype:\nvoid osg::ConstValueVisitor::apply(const unsigned char & )\nClass arguments details:\n");
		}

		unsigned char _arg1 = (unsigned char)(lua_tointeger(L,2));

		osg::ConstValueVisitor* self=(Luna< osg::ConstValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstValueVisitor::apply(const unsigned char &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstValueVisitor::apply(const unsigned int & )
	static int _bind_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_apply_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstValueVisitor::apply(const unsigned int & ) function, expected prototype:\nvoid osg::ConstValueVisitor::apply(const unsigned int & )\nClass arguments details:\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);

		osg::ConstValueVisitor* self=(Luna< osg::ConstValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstValueVisitor::apply(const unsigned int &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstValueVisitor::apply(const float & )
	static int _bind_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_apply_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstValueVisitor::apply(const float & ) function, expected prototype:\nvoid osg::ConstValueVisitor::apply(const float & )\nClass arguments details:\n");
		}

		float _arg1=(float)lua_tonumber(L,2);

		osg::ConstValueVisitor* self=(Luna< osg::ConstValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstValueVisitor::apply(const float &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstValueVisitor::apply(const double & )
	static int _bind_apply_overload_8(lua_State *L) {
		if (!_lg_typecheck_apply_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstValueVisitor::apply(const double & ) function, expected prototype:\nvoid osg::ConstValueVisitor::apply(const double & )\nClass arguments details:\n");
		}

		double _arg1=(double)lua_tonumber(L,2);

		osg::ConstValueVisitor* self=(Luna< osg::ConstValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstValueVisitor::apply(const double &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstValueVisitor::apply(const osg::Vec4ub & )
	static int _bind_apply_overload_9(lua_State *L) {
		if (!_lg_typecheck_apply_overload_9(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstValueVisitor::apply(const osg::Vec4ub & ) function, expected prototype:\nvoid osg::ConstValueVisitor::apply(const osg::Vec4ub & )\nClass arguments details:\narg 1 ID = 61400540\n");
		}

		const osg::Vec4ub* _arg1_ptr=(Luna< osg::Vec4ub >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstValueVisitor::apply function");
		}
		const osg::Vec4ub & _arg1=*_arg1_ptr;

		osg::ConstValueVisitor* self=(Luna< osg::ConstValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstValueVisitor::apply(const osg::Vec4ub &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstValueVisitor::apply(const osg::Vec2f & )
	static int _bind_apply_overload_10(lua_State *L) {
		if (!_lg_typecheck_apply_overload_10(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstValueVisitor::apply(const osg::Vec2f & ) function, expected prototype:\nvoid osg::ConstValueVisitor::apply(const osg::Vec2f & )\nClass arguments details:\narg 1 ID = 92303173\n");
		}

		const osg::Vec2f* _arg1_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstValueVisitor::apply function");
		}
		const osg::Vec2f & _arg1=*_arg1_ptr;

		osg::ConstValueVisitor* self=(Luna< osg::ConstValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstValueVisitor::apply(const osg::Vec2f &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstValueVisitor::apply(const osg::Vec3f & )
	static int _bind_apply_overload_11(lua_State *L) {
		if (!_lg_typecheck_apply_overload_11(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstValueVisitor::apply(const osg::Vec3f & ) function, expected prototype:\nvoid osg::ConstValueVisitor::apply(const osg::Vec3f & )\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstValueVisitor::apply function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;

		osg::ConstValueVisitor* self=(Luna< osg::ConstValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstValueVisitor::apply(const osg::Vec3f &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstValueVisitor::apply(const osg::Vec4f & )
	static int _bind_apply_overload_12(lua_State *L) {
		if (!_lg_typecheck_apply_overload_12(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstValueVisitor::apply(const osg::Vec4f & ) function, expected prototype:\nvoid osg::ConstValueVisitor::apply(const osg::Vec4f & )\nClass arguments details:\narg 1 ID = 92303235\n");
		}

		const osg::Vec4f* _arg1_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstValueVisitor::apply function");
		}
		const osg::Vec4f & _arg1=*_arg1_ptr;

		osg::ConstValueVisitor* self=(Luna< osg::ConstValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstValueVisitor::apply(const osg::Vec4f &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstValueVisitor::apply(const osg::Vec2b & )
	static int _bind_apply_overload_13(lua_State *L) {
		if (!_lg_typecheck_apply_overload_13(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstValueVisitor::apply(const osg::Vec2b & ) function, expected prototype:\nvoid osg::ConstValueVisitor::apply(const osg::Vec2b & )\nClass arguments details:\narg 1 ID = 92303169\n");
		}

		const osg::Vec2b* _arg1_ptr=(Luna< osg::Vec2b >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstValueVisitor::apply function");
		}
		const osg::Vec2b & _arg1=*_arg1_ptr;

		osg::ConstValueVisitor* self=(Luna< osg::ConstValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstValueVisitor::apply(const osg::Vec2b &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstValueVisitor::apply(const osg::Vec3b & )
	static int _bind_apply_overload_14(lua_State *L) {
		if (!_lg_typecheck_apply_overload_14(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstValueVisitor::apply(const osg::Vec3b & ) function, expected prototype:\nvoid osg::ConstValueVisitor::apply(const osg::Vec3b & )\nClass arguments details:\narg 1 ID = 92303200\n");
		}

		const osg::Vec3b* _arg1_ptr=(Luna< osg::Vec3b >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstValueVisitor::apply function");
		}
		const osg::Vec3b & _arg1=*_arg1_ptr;

		osg::ConstValueVisitor* self=(Luna< osg::ConstValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstValueVisitor::apply(const osg::Vec3b &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstValueVisitor::apply(const osg::Vec4b & )
	static int _bind_apply_overload_15(lua_State *L) {
		if (!_lg_typecheck_apply_overload_15(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstValueVisitor::apply(const osg::Vec4b & ) function, expected prototype:\nvoid osg::ConstValueVisitor::apply(const osg::Vec4b & )\nClass arguments details:\narg 1 ID = 92303231\n");
		}

		const osg::Vec4b* _arg1_ptr=(Luna< osg::Vec4b >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstValueVisitor::apply function");
		}
		const osg::Vec4b & _arg1=*_arg1_ptr;

		osg::ConstValueVisitor* self=(Luna< osg::ConstValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstValueVisitor::apply(const osg::Vec4b &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstValueVisitor::apply(const osg::Vec2s & )
	static int _bind_apply_overload_16(lua_State *L) {
		if (!_lg_typecheck_apply_overload_16(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstValueVisitor::apply(const osg::Vec2s & ) function, expected prototype:\nvoid osg::ConstValueVisitor::apply(const osg::Vec2s & )\nClass arguments details:\narg 1 ID = 92303186\n");
		}

		const osg::Vec2s* _arg1_ptr=(Luna< osg::Vec2s >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstValueVisitor::apply function");
		}
		const osg::Vec2s & _arg1=*_arg1_ptr;

		osg::ConstValueVisitor* self=(Luna< osg::ConstValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstValueVisitor::apply(const osg::Vec2s &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstValueVisitor::apply(const osg::Vec3s & )
	static int _bind_apply_overload_17(lua_State *L) {
		if (!_lg_typecheck_apply_overload_17(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstValueVisitor::apply(const osg::Vec3s & ) function, expected prototype:\nvoid osg::ConstValueVisitor::apply(const osg::Vec3s & )\nClass arguments details:\narg 1 ID = 92303217\n");
		}

		const osg::Vec3s* _arg1_ptr=(Luna< osg::Vec3s >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstValueVisitor::apply function");
		}
		const osg::Vec3s & _arg1=*_arg1_ptr;

		osg::ConstValueVisitor* self=(Luna< osg::ConstValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstValueVisitor::apply(const osg::Vec3s &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstValueVisitor::apply(const osg::Vec4s & )
	static int _bind_apply_overload_18(lua_State *L) {
		if (!_lg_typecheck_apply_overload_18(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstValueVisitor::apply(const osg::Vec4s & ) function, expected prototype:\nvoid osg::ConstValueVisitor::apply(const osg::Vec4s & )\nClass arguments details:\narg 1 ID = 92303248\n");
		}

		const osg::Vec4s* _arg1_ptr=(Luna< osg::Vec4s >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstValueVisitor::apply function");
		}
		const osg::Vec4s & _arg1=*_arg1_ptr;

		osg::ConstValueVisitor* self=(Luna< osg::ConstValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstValueVisitor::apply(const osg::Vec4s &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstValueVisitor::apply(const osg::Vec2d & )
	static int _bind_apply_overload_19(lua_State *L) {
		if (!_lg_typecheck_apply_overload_19(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstValueVisitor::apply(const osg::Vec2d & ) function, expected prototype:\nvoid osg::ConstValueVisitor::apply(const osg::Vec2d & )\nClass arguments details:\narg 1 ID = 92303171\n");
		}

		const osg::Vec2d* _arg1_ptr=(Luna< osg::Vec2d >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstValueVisitor::apply function");
		}
		const osg::Vec2d & _arg1=*_arg1_ptr;

		osg::ConstValueVisitor* self=(Luna< osg::ConstValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstValueVisitor::apply(const osg::Vec2d &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstValueVisitor::apply(const osg::Vec3d & )
	static int _bind_apply_overload_20(lua_State *L) {
		if (!_lg_typecheck_apply_overload_20(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstValueVisitor::apply(const osg::Vec3d & ) function, expected prototype:\nvoid osg::ConstValueVisitor::apply(const osg::Vec3d & )\nClass arguments details:\narg 1 ID = 92303202\n");
		}

		const osg::Vec3d* _arg1_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstValueVisitor::apply function");
		}
		const osg::Vec3d & _arg1=*_arg1_ptr;

		osg::ConstValueVisitor* self=(Luna< osg::ConstValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstValueVisitor::apply(const osg::Vec3d &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstValueVisitor::apply(const osg::Vec4d & )
	static int _bind_apply_overload_21(lua_State *L) {
		if (!_lg_typecheck_apply_overload_21(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstValueVisitor::apply(const osg::Vec4d & ) function, expected prototype:\nvoid osg::ConstValueVisitor::apply(const osg::Vec4d & )\nClass arguments details:\narg 1 ID = 92303233\n");
		}

		const osg::Vec4d* _arg1_ptr=(Luna< osg::Vec4d >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstValueVisitor::apply function");
		}
		const osg::Vec4d & _arg1=*_arg1_ptr;

		osg::ConstValueVisitor* self=(Luna< osg::ConstValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstValueVisitor::apply(const osg::Vec4d &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstValueVisitor::apply(const osg::Matrixf & )
	static int _bind_apply_overload_22(lua_State *L) {
		if (!_lg_typecheck_apply_overload_22(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstValueVisitor::apply(const osg::Matrixf & ) function, expected prototype:\nvoid osg::ConstValueVisitor::apply(const osg::Matrixf & )\nClass arguments details:\narg 1 ID = 18903840\n");
		}

		const osg::Matrixf* _arg1_ptr=(Luna< osg::Matrixf >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstValueVisitor::apply function");
		}
		const osg::Matrixf & _arg1=*_arg1_ptr;

		osg::ConstValueVisitor* self=(Luna< osg::ConstValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstValueVisitor::apply(const osg::Matrixf &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// Overload binder for osg::ConstValueVisitor::apply
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
		if (_lg_typecheck_apply_overload_16(L)) return _bind_apply_overload_16(L);
		if (_lg_typecheck_apply_overload_17(L)) return _bind_apply_overload_17(L);
		if (_lg_typecheck_apply_overload_18(L)) return _bind_apply_overload_18(L);
		if (_lg_typecheck_apply_overload_19(L)) return _bind_apply_overload_19(L);
		if (_lg_typecheck_apply_overload_20(L)) return _bind_apply_overload_20(L);
		if (_lg_typecheck_apply_overload_21(L)) return _bind_apply_overload_21(L);
		if (_lg_typecheck_apply_overload_22(L)) return _bind_apply_overload_22(L);

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(const signed char &)\n  apply(const short &)\n  apply(const int &)\n  apply(const unsigned short &)\n  apply(const unsigned char &)\n  apply(const unsigned int &)\n  apply(const float &)\n  apply(const double &)\n  apply(const osg::Vec4ub &)\n  apply(const osg::Vec2f &)\n  apply(const osg::Vec3f &)\n  apply(const osg::Vec4f &)\n  apply(const osg::Vec2b &)\n  apply(const osg::Vec3b &)\n  apply(const osg::Vec4b &)\n  apply(const osg::Vec2s &)\n  apply(const osg::Vec3s &)\n  apply(const osg::Vec4s &)\n  apply(const osg::Vec2d &)\n  apply(const osg::Vec3d &)\n  apply(const osg::Vec4d &)\n  apply(const osg::Matrixf &)\n");
		return 0;
	}


	// Operator binds:

};

osg::ConstValueVisitor* LunaTraits< osg::ConstValueVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ConstValueVisitor::_bind_ctor(L);
}

void LunaTraits< osg::ConstValueVisitor >::_bind_dtor(osg::ConstValueVisitor* obj) {
	delete obj;
}

const char LunaTraits< osg::ConstValueVisitor >::className[] = "ConstValueVisitor";
const char LunaTraits< osg::ConstValueVisitor >::fullName[] = "osg::ConstValueVisitor";
const char LunaTraits< osg::ConstValueVisitor >::moduleName[] = "osg";
const char* LunaTraits< osg::ConstValueVisitor >::parents[] = {0};
const int LunaTraits< osg::ConstValueVisitor >::hash = 86989408;
const int LunaTraits< osg::ConstValueVisitor >::uniqueIDs[] = {86989408,0};

luna_RegType LunaTraits< osg::ConstValueVisitor >::methods[] = {
	{"apply", &luna_wrapper_osg_ConstValueVisitor::_bind_apply},
	{"dynCast", &luna_wrapper_osg_ConstValueVisitor::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ConstValueVisitor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ConstValueVisitor >::enumValues[] = {
	{0,0}
};

