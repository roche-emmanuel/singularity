#include <plug_common.h>

class luna_wrapper_osg_ValueVisitor {
public:
	typedef Luna< osg::ValueVisitor > luna_t;

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

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ValueVisitor");
		
		return luna_dynamicCast(L,converters,"osg::ValueVisitor",name);
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

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_10(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_11(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_12(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,61400540) ) return false;
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
	// osg::ValueVisitor::ValueVisitor()
	static osg::ValueVisitor* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ValueVisitor::ValueVisitor() function, expected prototype:\nosg::ValueVisitor::ValueVisitor()\nClass arguments details:\n");
		}


		return new osg::ValueVisitor();
	}


	// Function binds:
	// void osg::ValueVisitor::apply(signed char & )
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(signed char & ) function, expected prototype:\nvoid osg::ValueVisitor::apply(signed char & )\nClass arguments details:\n");
		}

		signed char _arg1=(signed char)lua_tointeger(L,2);

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(signed char &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(short & )
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(short & ) function, expected prototype:\nvoid osg::ValueVisitor::apply(short & )\nClass arguments details:\n");
		}

		short _arg1=(short)lua_tointeger(L,2);

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(short &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(int & )
	static int _bind_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_apply_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(int & ) function, expected prototype:\nvoid osg::ValueVisitor::apply(int & )\nClass arguments details:\n");
		}

		int _arg1=(int)lua_tointeger(L,2);

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(int &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(unsigned short & )
	static int _bind_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_apply_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(unsigned short & ) function, expected prototype:\nvoid osg::ValueVisitor::apply(unsigned short & )\nClass arguments details:\n");
		}

		unsigned short _arg1=(unsigned short)lua_tointeger(L,2);

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(unsigned short &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(unsigned char & )
	static int _bind_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_apply_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(unsigned char & ) function, expected prototype:\nvoid osg::ValueVisitor::apply(unsigned char & )\nClass arguments details:\n");
		}

		unsigned char _arg1 = (unsigned char)(lua_tointeger(L,2));

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(unsigned char &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(unsigned int & )
	static int _bind_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_apply_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(unsigned int & ) function, expected prototype:\nvoid osg::ValueVisitor::apply(unsigned int & )\nClass arguments details:\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(unsigned int &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(float & )
	static int _bind_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_apply_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(float & ) function, expected prototype:\nvoid osg::ValueVisitor::apply(float & )\nClass arguments details:\n");
		}

		float _arg1=(float)lua_tonumber(L,2);

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(float &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(double & )
	static int _bind_apply_overload_8(lua_State *L) {
		if (!_lg_typecheck_apply_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(double & ) function, expected prototype:\nvoid osg::ValueVisitor::apply(double & )\nClass arguments details:\n");
		}

		double _arg1=(double)lua_tonumber(L,2);

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(double &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(osg::Vec2f & )
	static int _bind_apply_overload_9(lua_State *L) {
		if (!_lg_typecheck_apply_overload_9(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(osg::Vec2f & ) function, expected prototype:\nvoid osg::ValueVisitor::apply(osg::Vec2f & )\nClass arguments details:\narg 1 ID = 92303173\n");
		}

		osg::Vec2f* _arg1_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::apply function");
		}
		osg::Vec2f & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(osg::Vec2f &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(osg::Vec3f & )
	static int _bind_apply_overload_10(lua_State *L) {
		if (!_lg_typecheck_apply_overload_10(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(osg::Vec3f & ) function, expected prototype:\nvoid osg::ValueVisitor::apply(osg::Vec3f & )\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::apply function");
		}
		osg::Vec3f & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(osg::Vec3f &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(osg::Vec4f & )
	static int _bind_apply_overload_11(lua_State *L) {
		if (!_lg_typecheck_apply_overload_11(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(osg::Vec4f & ) function, expected prototype:\nvoid osg::ValueVisitor::apply(osg::Vec4f & )\nClass arguments details:\narg 1 ID = 92303235\n");
		}

		osg::Vec4f* _arg1_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::apply function");
		}
		osg::Vec4f & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(osg::Vec4f &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(osg::Vec4ub & )
	static int _bind_apply_overload_12(lua_State *L) {
		if (!_lg_typecheck_apply_overload_12(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(osg::Vec4ub & ) function, expected prototype:\nvoid osg::ValueVisitor::apply(osg::Vec4ub & )\nClass arguments details:\narg 1 ID = 61400540\n");
		}

		osg::Vec4ub* _arg1_ptr=(Luna< osg::Vec4ub >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::apply function");
		}
		osg::Vec4ub & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(osg::Vec4ub &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(osg::Vec2b & )
	static int _bind_apply_overload_13(lua_State *L) {
		if (!_lg_typecheck_apply_overload_13(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(osg::Vec2b & ) function, expected prototype:\nvoid osg::ValueVisitor::apply(osg::Vec2b & )\nClass arguments details:\narg 1 ID = 92303169\n");
		}

		osg::Vec2b* _arg1_ptr=(Luna< osg::Vec2b >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::apply function");
		}
		osg::Vec2b & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(osg::Vec2b &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(osg::Vec3b & )
	static int _bind_apply_overload_14(lua_State *L) {
		if (!_lg_typecheck_apply_overload_14(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(osg::Vec3b & ) function, expected prototype:\nvoid osg::ValueVisitor::apply(osg::Vec3b & )\nClass arguments details:\narg 1 ID = 92303200\n");
		}

		osg::Vec3b* _arg1_ptr=(Luna< osg::Vec3b >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::apply function");
		}
		osg::Vec3b & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(osg::Vec3b &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(osg::Vec4b & )
	static int _bind_apply_overload_15(lua_State *L) {
		if (!_lg_typecheck_apply_overload_15(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(osg::Vec4b & ) function, expected prototype:\nvoid osg::ValueVisitor::apply(osg::Vec4b & )\nClass arguments details:\narg 1 ID = 92303231\n");
		}

		osg::Vec4b* _arg1_ptr=(Luna< osg::Vec4b >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::apply function");
		}
		osg::Vec4b & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(osg::Vec4b &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(osg::Vec2s & )
	static int _bind_apply_overload_16(lua_State *L) {
		if (!_lg_typecheck_apply_overload_16(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(osg::Vec2s & ) function, expected prototype:\nvoid osg::ValueVisitor::apply(osg::Vec2s & )\nClass arguments details:\narg 1 ID = 92303186\n");
		}

		osg::Vec2s* _arg1_ptr=(Luna< osg::Vec2s >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::apply function");
		}
		osg::Vec2s & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(osg::Vec2s &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(osg::Vec3s & )
	static int _bind_apply_overload_17(lua_State *L) {
		if (!_lg_typecheck_apply_overload_17(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(osg::Vec3s & ) function, expected prototype:\nvoid osg::ValueVisitor::apply(osg::Vec3s & )\nClass arguments details:\narg 1 ID = 92303217\n");
		}

		osg::Vec3s* _arg1_ptr=(Luna< osg::Vec3s >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::apply function");
		}
		osg::Vec3s & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(osg::Vec3s &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(osg::Vec4s & )
	static int _bind_apply_overload_18(lua_State *L) {
		if (!_lg_typecheck_apply_overload_18(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(osg::Vec4s & ) function, expected prototype:\nvoid osg::ValueVisitor::apply(osg::Vec4s & )\nClass arguments details:\narg 1 ID = 92303248\n");
		}

		osg::Vec4s* _arg1_ptr=(Luna< osg::Vec4s >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::apply function");
		}
		osg::Vec4s & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(osg::Vec4s &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(osg::Vec2d & )
	static int _bind_apply_overload_19(lua_State *L) {
		if (!_lg_typecheck_apply_overload_19(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(osg::Vec2d & ) function, expected prototype:\nvoid osg::ValueVisitor::apply(osg::Vec2d & )\nClass arguments details:\narg 1 ID = 92303171\n");
		}

		osg::Vec2d* _arg1_ptr=(Luna< osg::Vec2d >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::apply function");
		}
		osg::Vec2d & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(osg::Vec2d &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(osg::Vec3d & )
	static int _bind_apply_overload_20(lua_State *L) {
		if (!_lg_typecheck_apply_overload_20(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(osg::Vec3d & ) function, expected prototype:\nvoid osg::ValueVisitor::apply(osg::Vec3d & )\nClass arguments details:\narg 1 ID = 92303202\n");
		}

		osg::Vec3d* _arg1_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::apply function");
		}
		osg::Vec3d & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(osg::Vec3d &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(osg::Vec4d & )
	static int _bind_apply_overload_21(lua_State *L) {
		if (!_lg_typecheck_apply_overload_21(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(osg::Vec4d & ) function, expected prototype:\nvoid osg::ValueVisitor::apply(osg::Vec4d & )\nClass arguments details:\narg 1 ID = 92303233\n");
		}

		osg::Vec4d* _arg1_ptr=(Luna< osg::Vec4d >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::apply function");
		}
		osg::Vec4d & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(osg::Vec4d &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ValueVisitor::apply(osg::Matrixf & )
	static int _bind_apply_overload_22(lua_State *L) {
		if (!_lg_typecheck_apply_overload_22(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueVisitor::apply(osg::Matrixf & ) function, expected prototype:\nvoid osg::ValueVisitor::apply(osg::Matrixf & )\nClass arguments details:\narg 1 ID = 18903840\n");
		}

		osg::Matrixf* _arg1_ptr=(Luna< osg::Matrixf >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ValueVisitor::apply function");
		}
		osg::Matrixf & _arg1=*_arg1_ptr;

		osg::ValueVisitor* self=(Luna< osg::ValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueVisitor::apply(osg::Matrixf &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// Overload binder for osg::ValueVisitor::apply
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

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(signed char &)\n  apply(short &)\n  apply(int &)\n  apply(unsigned short &)\n  apply(unsigned char &)\n  apply(unsigned int &)\n  apply(float &)\n  apply(double &)\n  apply(osg::Vec2f &)\n  apply(osg::Vec3f &)\n  apply(osg::Vec4f &)\n  apply(osg::Vec4ub &)\n  apply(osg::Vec2b &)\n  apply(osg::Vec3b &)\n  apply(osg::Vec4b &)\n  apply(osg::Vec2s &)\n  apply(osg::Vec3s &)\n  apply(osg::Vec4s &)\n  apply(osg::Vec2d &)\n  apply(osg::Vec3d &)\n  apply(osg::Vec4d &)\n  apply(osg::Matrixf &)\n");
		return 0;
	}


	// Operator binds:

};

osg::ValueVisitor* LunaTraits< osg::ValueVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ValueVisitor::_bind_ctor(L);
}

void LunaTraits< osg::ValueVisitor >::_bind_dtor(osg::ValueVisitor* obj) {
	delete obj;
}

const char LunaTraits< osg::ValueVisitor >::className[] = "ValueVisitor";
const char LunaTraits< osg::ValueVisitor >::fullName[] = "osg::ValueVisitor";
const char LunaTraits< osg::ValueVisitor >::moduleName[] = "osg";
const char* LunaTraits< osg::ValueVisitor >::parents[] = {0};
const int LunaTraits< osg::ValueVisitor >::hash = 87991103;
const int LunaTraits< osg::ValueVisitor >::uniqueIDs[] = {87991103,0};

luna_RegType LunaTraits< osg::ValueVisitor >::methods[] = {
	{"apply", &luna_wrapper_osg_ValueVisitor::_bind_apply},
	{"dynCast", &luna_wrapper_osg_ValueVisitor::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ValueVisitor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ValueVisitor >::enumValues[] = {
	{0,0}
};

