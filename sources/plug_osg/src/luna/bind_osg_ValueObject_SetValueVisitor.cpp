#include <plug_common.h>

class luna_wrapper_osg_ValueObject_SetValueVisitor {
public:
	typedef Luna< osg::ValueObject::SetValueVisitor > luna_t;

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

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ValueObject::SetValueVisitor");
		
		return luna_dynamicCast(L,converters,"osg::ValueObject::SetValueVisitor",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_10(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_11(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_12(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_13(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_14(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303171) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_15(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_16(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303233) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_17(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_18(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,86970521) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_19(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903840) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_20(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void osg::ValueObject::SetValueVisitor::apply(bool & value)
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(bool & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(bool & value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(bool &)");
		}
		self->apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::apply(char & value)
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(char & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(char & value)\nClass arguments details:\n");
		}

		char value=(char)lua_tointeger(L,2);

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(char &)");
		}
		self->apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::apply(unsigned char & value)
	static int _bind_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_apply_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(unsigned char & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(unsigned char & value)\nClass arguments details:\n");
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(unsigned char &)");
		}
		self->apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::apply(short & value)
	static int _bind_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_apply_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(short & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(short & value)\nClass arguments details:\n");
		}

		short value=(short)lua_tointeger(L,2);

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(short &)");
		}
		self->apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::apply(unsigned short & value)
	static int _bind_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_apply_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(unsigned short & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(unsigned short & value)\nClass arguments details:\n");
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(unsigned short &)");
		}
		self->apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::apply(int & value)
	static int _bind_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_apply_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(int & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(int & value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(int &)");
		}
		self->apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::apply(unsigned int & value)
	static int _bind_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_apply_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(unsigned int & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(unsigned int & value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(unsigned int &)");
		}
		self->apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::apply(float & value)
	static int _bind_apply_overload_8(lua_State *L) {
		if (!_lg_typecheck_apply_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(float & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(float & value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(float &)");
		}
		self->apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::apply(double & value)
	static int _bind_apply_overload_9(lua_State *L) {
		if (!_lg_typecheck_apply_overload_9(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(double & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(double & value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(double &)");
		}
		self->apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::apply(std::string & value)
	static int _bind_apply_overload_10(lua_State *L) {
		if (!_lg_typecheck_apply_overload_10(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(std::string & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(std::string & value)\nClass arguments details:\n");
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(std::string &)");
		}
		self->apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::apply(osg::Vec2f & value)
	static int _bind_apply_overload_11(lua_State *L) {
		if (!_lg_typecheck_apply_overload_11(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(osg::Vec2f & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(osg::Vec2f & value)\nClass arguments details:\narg 1 ID = 92303173\n");
		}

		osg::Vec2f* value_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::ValueObject::SetValueVisitor::apply function");
		}
		osg::Vec2f & value=*value_ptr;

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(osg::Vec2f &)");
		}
		self->apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::apply(osg::Vec3f & value)
	static int _bind_apply_overload_12(lua_State *L) {
		if (!_lg_typecheck_apply_overload_12(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(osg::Vec3f & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(osg::Vec3f & value)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		osg::Vec3f* value_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::ValueObject::SetValueVisitor::apply function");
		}
		osg::Vec3f & value=*value_ptr;

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(osg::Vec3f &)");
		}
		self->apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::apply(osg::Vec4f & value)
	static int _bind_apply_overload_13(lua_State *L) {
		if (!_lg_typecheck_apply_overload_13(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(osg::Vec4f & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(osg::Vec4f & value)\nClass arguments details:\narg 1 ID = 92303235\n");
		}

		osg::Vec4f* value_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::ValueObject::SetValueVisitor::apply function");
		}
		osg::Vec4f & value=*value_ptr;

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(osg::Vec4f &)");
		}
		self->apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::apply(osg::Vec2d & value)
	static int _bind_apply_overload_14(lua_State *L) {
		if (!_lg_typecheck_apply_overload_14(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(osg::Vec2d & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(osg::Vec2d & value)\nClass arguments details:\narg 1 ID = 92303171\n");
		}

		osg::Vec2d* value_ptr=(Luna< osg::Vec2d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::ValueObject::SetValueVisitor::apply function");
		}
		osg::Vec2d & value=*value_ptr;

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(osg::Vec2d &)");
		}
		self->apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::apply(osg::Vec3d & value)
	static int _bind_apply_overload_15(lua_State *L) {
		if (!_lg_typecheck_apply_overload_15(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(osg::Vec3d & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(osg::Vec3d & value)\nClass arguments details:\narg 1 ID = 92303202\n");
		}

		osg::Vec3d* value_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::ValueObject::SetValueVisitor::apply function");
		}
		osg::Vec3d & value=*value_ptr;

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(osg::Vec3d &)");
		}
		self->apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::apply(osg::Vec4d & value)
	static int _bind_apply_overload_16(lua_State *L) {
		if (!_lg_typecheck_apply_overload_16(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(osg::Vec4d & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(osg::Vec4d & value)\nClass arguments details:\narg 1 ID = 92303233\n");
		}

		osg::Vec4d* value_ptr=(Luna< osg::Vec4d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::ValueObject::SetValueVisitor::apply function");
		}
		osg::Vec4d & value=*value_ptr;

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(osg::Vec4d &)");
		}
		self->apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::apply(osg::Quat & value)
	static int _bind_apply_overload_17(lua_State *L) {
		if (!_lg_typecheck_apply_overload_17(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(osg::Quat & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(osg::Quat & value)\nClass arguments details:\narg 1 ID = 80263306\n");
		}

		osg::Quat* value_ptr=(Luna< osg::Quat >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::ValueObject::SetValueVisitor::apply function");
		}
		osg::Quat & value=*value_ptr;

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(osg::Quat &)");
		}
		self->apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::apply(osg::Plane & value)
	static int _bind_apply_overload_18(lua_State *L) {
		if (!_lg_typecheck_apply_overload_18(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(osg::Plane & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(osg::Plane & value)\nClass arguments details:\narg 1 ID = 86970521\n");
		}

		osg::Plane* value_ptr=(Luna< osg::Plane >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::ValueObject::SetValueVisitor::apply function");
		}
		osg::Plane & value=*value_ptr;

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(osg::Plane &)");
		}
		self->apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::apply(osg::Matrixf & value)
	static int _bind_apply_overload_19(lua_State *L) {
		if (!_lg_typecheck_apply_overload_19(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(osg::Matrixf & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(osg::Matrixf & value)\nClass arguments details:\narg 1 ID = 18903840\n");
		}

		osg::Matrixf* value_ptr=(Luna< osg::Matrixf >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::ValueObject::SetValueVisitor::apply function");
		}
		osg::Matrixf & value=*value_ptr;

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(osg::Matrixf &)");
		}
		self->apply(value);

		return 0;
	}

	// void osg::ValueObject::SetValueVisitor::apply(osg::Matrixd & value)
	static int _bind_apply_overload_20(lua_State *L) {
		if (!_lg_typecheck_apply_overload_20(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ValueObject::SetValueVisitor::apply(osg::Matrixd & value) function, expected prototype:\nvoid osg::ValueObject::SetValueVisitor::apply(osg::Matrixd & value)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		osg::Matrixd* value_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::ValueObject::SetValueVisitor::apply function");
		}
		osg::Matrixd & value=*value_ptr;

		osg::ValueObject::SetValueVisitor* self=(Luna< osg::ValueObject::SetValueVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ValueObject::SetValueVisitor::apply(osg::Matrixd &)");
		}
		self->apply(value);

		return 0;
	}

	// Overload binder for osg::ValueObject::SetValueVisitor::apply
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

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(bool &)\n  apply(char &)\n  apply(unsigned char &)\n  apply(short &)\n  apply(unsigned short &)\n  apply(int &)\n  apply(unsigned int &)\n  apply(float &)\n  apply(double &)\n  apply(std::string &)\n  apply(osg::Vec2f &)\n  apply(osg::Vec3f &)\n  apply(osg::Vec4f &)\n  apply(osg::Vec2d &)\n  apply(osg::Vec3d &)\n  apply(osg::Vec4d &)\n  apply(osg::Quat &)\n  apply(osg::Plane &)\n  apply(osg::Matrixf &)\n  apply(osg::Matrixd &)\n");
		return 0;
	}


	// Operator binds:

};

osg::ValueObject::SetValueVisitor* LunaTraits< osg::ValueObject::SetValueVisitor >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::ValueObject::SetValueVisitor >::_bind_dtor(osg::ValueObject::SetValueVisitor* obj) {
	delete obj;
}

const char LunaTraits< osg::ValueObject::SetValueVisitor >::className[] = "SetValueVisitor";
const char LunaTraits< osg::ValueObject::SetValueVisitor >::fullName[] = "osg::ValueObject::SetValueVisitor";
const char LunaTraits< osg::ValueObject::SetValueVisitor >::moduleName[] = "osg";
const char* LunaTraits< osg::ValueObject::SetValueVisitor >::parents[] = {0};
const int LunaTraits< osg::ValueObject::SetValueVisitor >::hash = 55012529;
const int LunaTraits< osg::ValueObject::SetValueVisitor >::uniqueIDs[] = {55012529,0};

luna_RegType LunaTraits< osg::ValueObject::SetValueVisitor >::methods[] = {
	{"apply", &luna_wrapper_osg_ValueObject_SetValueVisitor::_bind_apply},
	{"dynCast", &luna_wrapper_osg_ValueObject_SetValueVisitor::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ValueObject::SetValueVisitor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ValueObject::SetValueVisitor >::enumValues[] = {
	{0,0}
};

