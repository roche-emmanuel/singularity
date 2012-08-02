#include <plug_common.h>

class luna_wrapper_osg_ConstArrayVisitor {
public:
	typedef Luna< osg::ConstArrayVisitor > luna_t;

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

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ConstArrayVisitor");
		
		return luna_dynamicCast(L,converters,"osg::ConstArrayVisitor",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59587824) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17157487) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28130065) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72202494) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,4787198) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,86600648) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,43730923) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50192637) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_10(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,78575573) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_11(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,7204710) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_12(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,35833861) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_13(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,83703711) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_14(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,35367467) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_15(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,22871013) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_16(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,10374559) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_17(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,22062959) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_18(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9566505) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_19(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,97070066) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_20(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92625769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_21(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80129315) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_22(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67632861) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_23(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,82206572) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ConstArrayVisitor::ConstArrayVisitor()
	static osg::ConstArrayVisitor* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ConstArrayVisitor::ConstArrayVisitor() function, expected prototype:\nosg::ConstArrayVisitor::ConstArrayVisitor()\nClass arguments details:\n");
		}


		return new osg::ConstArrayVisitor();
	}


	// Function binds:
	// void osg::ConstArrayVisitor::apply(const osg::Array & )
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::Array & ) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::Array & )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Array* _arg1_ptr=dynamic_cast< osg::Array* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::Array & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::Array &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::ByteArray & )
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::ByteArray & ) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::ByteArray & )\nClass arguments details:\narg 1 ID = 59587824\n");
		}

		const osg::ByteArray* _arg1_ptr=(Luna< osg::ByteArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::ByteArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::ByteArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::ShortArray & )
	static int _bind_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_apply_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::ShortArray & ) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::ShortArray & )\nClass arguments details:\narg 1 ID = 17157487\n");
		}

		const osg::ShortArray* _arg1_ptr=(Luna< osg::ShortArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::ShortArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::ShortArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::IntArray & )
	static int _bind_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_apply_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::IntArray & ) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::IntArray & )\nClass arguments details:\narg 1 ID = 28130065\n");
		}

		const osg::IntArray* _arg1_ptr=(Luna< osg::IntArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::IntArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::IntArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::UByteArray & )
	static int _bind_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_apply_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::UByteArray & ) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::UByteArray & )\nClass arguments details:\narg 1 ID = 72202494\n");
		}

		const osg::UByteArray* _arg1_ptr=(Luna< osg::UByteArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::UByteArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::UByteArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::UShortArray & )
	static int _bind_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_apply_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::UShortArray & ) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::UShortArray & )\nClass arguments details:\narg 1 ID = 4787198\n");
		}

		const osg::UShortArray* _arg1_ptr=(Luna< osg::UShortArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::UShortArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::UShortArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::UIntArray & )
	static int _bind_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_apply_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::UIntArray & ) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::UIntArray & )\nClass arguments details:\narg 1 ID = 86600648\n");
		}

		const osg::UIntArray* _arg1_ptr=(Luna< osg::UIntArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::UIntArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::UIntArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::FloatArray & )
	static int _bind_apply_overload_8(lua_State *L) {
		if (!_lg_typecheck_apply_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::FloatArray & ) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::FloatArray & )\nClass arguments details:\narg 1 ID = 43730923\n");
		}

		const osg::FloatArray* _arg1_ptr=(Luna< osg::FloatArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::FloatArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::FloatArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::DoubleArray & )
	static int _bind_apply_overload_9(lua_State *L) {
		if (!_lg_typecheck_apply_overload_9(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::DoubleArray & ) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::DoubleArray & )\nClass arguments details:\narg 1 ID = 50192637\n");
		}

		const osg::DoubleArray* _arg1_ptr=(Luna< osg::DoubleArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::DoubleArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::DoubleArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::Vec2Array & )
	static int _bind_apply_overload_10(lua_State *L) {
		if (!_lg_typecheck_apply_overload_10(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::Vec2Array & ) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::Vec2Array & )\nClass arguments details:\narg 1 ID = 78575573\n");
		}

		const osg::Vec2Array* _arg1_ptr=(Luna< osg::Vec2Array >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::Vec2Array & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::Vec2Array &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::Vec3Array & )
	static int _bind_apply_overload_11(lua_State *L) {
		if (!_lg_typecheck_apply_overload_11(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::Vec3Array & ) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::Vec3Array & )\nClass arguments details:\narg 1 ID = 7204710\n");
		}

		const osg::Vec3Array* _arg1_ptr=(Luna< osg::Vec3Array >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::Vec3Array & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::Vec3Array &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::Vec4Array & )
	static int _bind_apply_overload_12(lua_State *L) {
		if (!_lg_typecheck_apply_overload_12(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::Vec4Array & ) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::Vec4Array & )\nClass arguments details:\narg 1 ID = 35833861\n");
		}

		const osg::Vec4Array* _arg1_ptr=(Luna< osg::Vec4Array >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::Vec4Array & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::Vec4Array &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::Vec4ubArray & )
	static int _bind_apply_overload_13(lua_State *L) {
		if (!_lg_typecheck_apply_overload_13(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::Vec4ubArray & ) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::Vec4ubArray & )\nClass arguments details:\narg 1 ID = 83703711\n");
		}

		const osg::Vec4ubArray* _arg1_ptr=(Luna< osg::Vec4ubArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::Vec4ubArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::Vec4ubArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::Vec2bArray & )
	static int _bind_apply_overload_14(lua_State *L) {
		if (!_lg_typecheck_apply_overload_14(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::Vec2bArray & ) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::Vec2bArray & )\nClass arguments details:\narg 1 ID = 35367467\n");
		}

		const osg::Vec2bArray* _arg1_ptr=(Luna< osg::Vec2bArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::Vec2bArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::Vec2bArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::Vec3bArray & )
	static int _bind_apply_overload_15(lua_State *L) {
		if (!_lg_typecheck_apply_overload_15(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::Vec3bArray & ) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::Vec3bArray & )\nClass arguments details:\narg 1 ID = 22871013\n");
		}

		const osg::Vec3bArray* _arg1_ptr=(Luna< osg::Vec3bArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::Vec3bArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::Vec3bArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::Vec4bArray & )
	static int _bind_apply_overload_16(lua_State *L) {
		if (!_lg_typecheck_apply_overload_16(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::Vec4bArray & ) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::Vec4bArray & )\nClass arguments details:\narg 1 ID = 10374559\n");
		}

		const osg::Vec4bArray* _arg1_ptr=(Luna< osg::Vec4bArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::Vec4bArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::Vec4bArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::Vec2sArray & )
	static int _bind_apply_overload_17(lua_State *L) {
		if (!_lg_typecheck_apply_overload_17(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::Vec2sArray & ) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::Vec2sArray & )\nClass arguments details:\narg 1 ID = 22062959\n");
		}

		const osg::Vec2sArray* _arg1_ptr=(Luna< osg::Vec2sArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::Vec2sArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::Vec2sArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::Vec3sArray & )
	static int _bind_apply_overload_18(lua_State *L) {
		if (!_lg_typecheck_apply_overload_18(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::Vec3sArray & ) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::Vec3sArray & )\nClass arguments details:\narg 1 ID = 9566505\n");
		}

		const osg::Vec3sArray* _arg1_ptr=(Luna< osg::Vec3sArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::Vec3sArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::Vec3sArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::Vec4sArray & )
	static int _bind_apply_overload_19(lua_State *L) {
		if (!_lg_typecheck_apply_overload_19(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::Vec4sArray & ) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::Vec4sArray & )\nClass arguments details:\narg 1 ID = 97070066\n");
		}

		const osg::Vec4sArray* _arg1_ptr=(Luna< osg::Vec4sArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::Vec4sArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::Vec4sArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::Vec2dArray & )
	static int _bind_apply_overload_20(lua_State *L) {
		if (!_lg_typecheck_apply_overload_20(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::Vec2dArray & ) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::Vec2dArray & )\nClass arguments details:\narg 1 ID = 92625769\n");
		}

		const osg::Vec2dArray* _arg1_ptr=(Luna< osg::Vec2dArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::Vec2dArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::Vec2dArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::Vec3dArray & )
	static int _bind_apply_overload_21(lua_State *L) {
		if (!_lg_typecheck_apply_overload_21(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::Vec3dArray & ) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::Vec3dArray & )\nClass arguments details:\narg 1 ID = 80129315\n");
		}

		const osg::Vec3dArray* _arg1_ptr=(Luna< osg::Vec3dArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::Vec3dArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::Vec3dArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::Vec4dArray & )
	static int _bind_apply_overload_22(lua_State *L) {
		if (!_lg_typecheck_apply_overload_22(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::Vec4dArray & ) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::Vec4dArray & )\nClass arguments details:\narg 1 ID = 67632861\n");
		}

		const osg::Vec4dArray* _arg1_ptr=(Luna< osg::Vec4dArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::Vec4dArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::Vec4dArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstArrayVisitor::apply(const osg::MatrixfArray & )
	static int _bind_apply_overload_23(lua_State *L) {
		if (!_lg_typecheck_apply_overload_23(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstArrayVisitor::apply(const osg::MatrixfArray & ) function, expected prototype:\nvoid osg::ConstArrayVisitor::apply(const osg::MatrixfArray & )\nClass arguments details:\narg 1 ID = 82206572\n");
		}

		const osg::MatrixfArray* _arg1_ptr=(Luna< osg::MatrixfArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstArrayVisitor::apply function");
		}
		const osg::MatrixfArray & _arg1=*_arg1_ptr;

		osg::ConstArrayVisitor* self=(Luna< osg::ConstArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstArrayVisitor::apply(const osg::MatrixfArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// Overload binder for osg::ConstArrayVisitor::apply
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
		if (_lg_typecheck_apply_overload_23(L)) return _bind_apply_overload_23(L);

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(const osg::Array &)\n  apply(const osg::ByteArray &)\n  apply(const osg::ShortArray &)\n  apply(const osg::IntArray &)\n  apply(const osg::UByteArray &)\n  apply(const osg::UShortArray &)\n  apply(const osg::UIntArray &)\n  apply(const osg::FloatArray &)\n  apply(const osg::DoubleArray &)\n  apply(const osg::Vec2Array &)\n  apply(const osg::Vec3Array &)\n  apply(const osg::Vec4Array &)\n  apply(const osg::Vec4ubArray &)\n  apply(const osg::Vec2bArray &)\n  apply(const osg::Vec3bArray &)\n  apply(const osg::Vec4bArray &)\n  apply(const osg::Vec2sArray &)\n  apply(const osg::Vec3sArray &)\n  apply(const osg::Vec4sArray &)\n  apply(const osg::Vec2dArray &)\n  apply(const osg::Vec3dArray &)\n  apply(const osg::Vec4dArray &)\n  apply(const osg::MatrixfArray &)\n");
		return 0;
	}


	// Operator binds:

};

osg::ConstArrayVisitor* LunaTraits< osg::ConstArrayVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ConstArrayVisitor::_bind_ctor(L);
}

void LunaTraits< osg::ConstArrayVisitor >::_bind_dtor(osg::ConstArrayVisitor* obj) {
	delete obj;
}

const char LunaTraits< osg::ConstArrayVisitor >::className[] = "ConstArrayVisitor";
const char LunaTraits< osg::ConstArrayVisitor >::fullName[] = "osg::ConstArrayVisitor";
const char LunaTraits< osg::ConstArrayVisitor >::moduleName[] = "osg";
const char* LunaTraits< osg::ConstArrayVisitor >::parents[] = {0};
const int LunaTraits< osg::ConstArrayVisitor >::hash = 80735172;
const int LunaTraits< osg::ConstArrayVisitor >::uniqueIDs[] = {80735172,0};

luna_RegType LunaTraits< osg::ConstArrayVisitor >::methods[] = {
	{"apply", &luna_wrapper_osg_ConstArrayVisitor::_bind_apply},
	{"dynCast", &luna_wrapper_osg_ConstArrayVisitor::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ConstArrayVisitor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ConstArrayVisitor >::enumValues[] = {
	{0,0}
};


