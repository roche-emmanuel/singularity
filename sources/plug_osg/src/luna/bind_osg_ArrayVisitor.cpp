#include <plug_common.h>

class luna_wrapper_osg_ArrayVisitor {
public:
	typedef Luna< osg::ArrayVisitor > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,35264102) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ArrayVisitor*)");
		}

		osg::ArrayVisitor* rhs =(Luna< osg::ArrayVisitor >::check(L,2));
		osg::ArrayVisitor* self=(Luna< osg::ArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

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

		osg::ArrayVisitor* self=(Luna< osg::ArrayVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ArrayVisitor");
		
		return luna_dynamicCast(L,converters,"osg::ArrayVisitor",name);
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
	// osg::ArrayVisitor::ArrayVisitor()
	static osg::ArrayVisitor* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ArrayVisitor::ArrayVisitor() function, expected prototype:\nosg::ArrayVisitor::ArrayVisitor()\nClass arguments details:\n");
		}


		return new osg::ArrayVisitor();
	}


	// Function binds:
	// void osg::ArrayVisitor::apply(osg::Array & )
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ArrayVisitor::apply(osg::Array & ) function, expected prototype:\nvoid osg::ArrayVisitor::apply(osg::Array & )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Array* _arg1_ptr=dynamic_cast< osg::Array* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ArrayVisitor::apply function");
		}
		osg::Array & _arg1=*_arg1_ptr;

		osg::ArrayVisitor* self=(Luna< osg::ArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ArrayVisitor::apply(osg::Array &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ArrayVisitor::apply(osg::ByteArray & )
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ArrayVisitor::apply(osg::ByteArray & ) function, expected prototype:\nvoid osg::ArrayVisitor::apply(osg::ByteArray & )\nClass arguments details:\narg 1 ID = 59587824\n");
		}

		osg::ByteArray* _arg1_ptr=(Luna< osg::ByteArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ArrayVisitor::apply function");
		}
		osg::ByteArray & _arg1=*_arg1_ptr;

		osg::ArrayVisitor* self=(Luna< osg::ArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ArrayVisitor::apply(osg::ByteArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ArrayVisitor::apply(osg::ShortArray & )
	static int _bind_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_apply_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ArrayVisitor::apply(osg::ShortArray & ) function, expected prototype:\nvoid osg::ArrayVisitor::apply(osg::ShortArray & )\nClass arguments details:\narg 1 ID = 17157487\n");
		}

		osg::ShortArray* _arg1_ptr=(Luna< osg::ShortArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ArrayVisitor::apply function");
		}
		osg::ShortArray & _arg1=*_arg1_ptr;

		osg::ArrayVisitor* self=(Luna< osg::ArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ArrayVisitor::apply(osg::ShortArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ArrayVisitor::apply(osg::IntArray & )
	static int _bind_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_apply_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ArrayVisitor::apply(osg::IntArray & ) function, expected prototype:\nvoid osg::ArrayVisitor::apply(osg::IntArray & )\nClass arguments details:\narg 1 ID = 28130065\n");
		}

		osg::IntArray* _arg1_ptr=(Luna< osg::IntArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ArrayVisitor::apply function");
		}
		osg::IntArray & _arg1=*_arg1_ptr;

		osg::ArrayVisitor* self=(Luna< osg::ArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ArrayVisitor::apply(osg::IntArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ArrayVisitor::apply(osg::UByteArray & )
	static int _bind_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_apply_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ArrayVisitor::apply(osg::UByteArray & ) function, expected prototype:\nvoid osg::ArrayVisitor::apply(osg::UByteArray & )\nClass arguments details:\narg 1 ID = 72202494\n");
		}

		osg::UByteArray* _arg1_ptr=(Luna< osg::UByteArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ArrayVisitor::apply function");
		}
		osg::UByteArray & _arg1=*_arg1_ptr;

		osg::ArrayVisitor* self=(Luna< osg::ArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ArrayVisitor::apply(osg::UByteArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ArrayVisitor::apply(osg::UShortArray & )
	static int _bind_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_apply_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ArrayVisitor::apply(osg::UShortArray & ) function, expected prototype:\nvoid osg::ArrayVisitor::apply(osg::UShortArray & )\nClass arguments details:\narg 1 ID = 4787198\n");
		}

		osg::UShortArray* _arg1_ptr=(Luna< osg::UShortArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ArrayVisitor::apply function");
		}
		osg::UShortArray & _arg1=*_arg1_ptr;

		osg::ArrayVisitor* self=(Luna< osg::ArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ArrayVisitor::apply(osg::UShortArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ArrayVisitor::apply(osg::UIntArray & )
	static int _bind_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_apply_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ArrayVisitor::apply(osg::UIntArray & ) function, expected prototype:\nvoid osg::ArrayVisitor::apply(osg::UIntArray & )\nClass arguments details:\narg 1 ID = 86600648\n");
		}

		osg::UIntArray* _arg1_ptr=(Luna< osg::UIntArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ArrayVisitor::apply function");
		}
		osg::UIntArray & _arg1=*_arg1_ptr;

		osg::ArrayVisitor* self=(Luna< osg::ArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ArrayVisitor::apply(osg::UIntArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ArrayVisitor::apply(osg::FloatArray & )
	static int _bind_apply_overload_8(lua_State *L) {
		if (!_lg_typecheck_apply_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ArrayVisitor::apply(osg::FloatArray & ) function, expected prototype:\nvoid osg::ArrayVisitor::apply(osg::FloatArray & )\nClass arguments details:\narg 1 ID = 43730923\n");
		}

		osg::FloatArray* _arg1_ptr=(Luna< osg::FloatArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ArrayVisitor::apply function");
		}
		osg::FloatArray & _arg1=*_arg1_ptr;

		osg::ArrayVisitor* self=(Luna< osg::ArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ArrayVisitor::apply(osg::FloatArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ArrayVisitor::apply(osg::DoubleArray & )
	static int _bind_apply_overload_9(lua_State *L) {
		if (!_lg_typecheck_apply_overload_9(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ArrayVisitor::apply(osg::DoubleArray & ) function, expected prototype:\nvoid osg::ArrayVisitor::apply(osg::DoubleArray & )\nClass arguments details:\narg 1 ID = 50192637\n");
		}

		osg::DoubleArray* _arg1_ptr=(Luna< osg::DoubleArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ArrayVisitor::apply function");
		}
		osg::DoubleArray & _arg1=*_arg1_ptr;

		osg::ArrayVisitor* self=(Luna< osg::ArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ArrayVisitor::apply(osg::DoubleArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ArrayVisitor::apply(osg::Vec2Array & )
	static int _bind_apply_overload_10(lua_State *L) {
		if (!_lg_typecheck_apply_overload_10(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ArrayVisitor::apply(osg::Vec2Array & ) function, expected prototype:\nvoid osg::ArrayVisitor::apply(osg::Vec2Array & )\nClass arguments details:\narg 1 ID = 78575573\n");
		}

		osg::Vec2Array* _arg1_ptr=(Luna< osg::Vec2Array >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ArrayVisitor::apply function");
		}
		osg::Vec2Array & _arg1=*_arg1_ptr;

		osg::ArrayVisitor* self=(Luna< osg::ArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ArrayVisitor::apply(osg::Vec2Array &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ArrayVisitor::apply(osg::Vec3Array & )
	static int _bind_apply_overload_11(lua_State *L) {
		if (!_lg_typecheck_apply_overload_11(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ArrayVisitor::apply(osg::Vec3Array & ) function, expected prototype:\nvoid osg::ArrayVisitor::apply(osg::Vec3Array & )\nClass arguments details:\narg 1 ID = 7204710\n");
		}

		osg::Vec3Array* _arg1_ptr=(Luna< osg::Vec3Array >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ArrayVisitor::apply function");
		}
		osg::Vec3Array & _arg1=*_arg1_ptr;

		osg::ArrayVisitor* self=(Luna< osg::ArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ArrayVisitor::apply(osg::Vec3Array &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ArrayVisitor::apply(osg::Vec4Array & )
	static int _bind_apply_overload_12(lua_State *L) {
		if (!_lg_typecheck_apply_overload_12(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ArrayVisitor::apply(osg::Vec4Array & ) function, expected prototype:\nvoid osg::ArrayVisitor::apply(osg::Vec4Array & )\nClass arguments details:\narg 1 ID = 35833861\n");
		}

		osg::Vec4Array* _arg1_ptr=(Luna< osg::Vec4Array >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ArrayVisitor::apply function");
		}
		osg::Vec4Array & _arg1=*_arg1_ptr;

		osg::ArrayVisitor* self=(Luna< osg::ArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ArrayVisitor::apply(osg::Vec4Array &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ArrayVisitor::apply(osg::Vec4ubArray & )
	static int _bind_apply_overload_13(lua_State *L) {
		if (!_lg_typecheck_apply_overload_13(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ArrayVisitor::apply(osg::Vec4ubArray & ) function, expected prototype:\nvoid osg::ArrayVisitor::apply(osg::Vec4ubArray & )\nClass arguments details:\narg 1 ID = 83703711\n");
		}

		osg::Vec4ubArray* _arg1_ptr=(Luna< osg::Vec4ubArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ArrayVisitor::apply function");
		}
		osg::Vec4ubArray & _arg1=*_arg1_ptr;

		osg::ArrayVisitor* self=(Luna< osg::ArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ArrayVisitor::apply(osg::Vec4ubArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ArrayVisitor::apply(osg::Vec2bArray & )
	static int _bind_apply_overload_14(lua_State *L) {
		if (!_lg_typecheck_apply_overload_14(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ArrayVisitor::apply(osg::Vec2bArray & ) function, expected prototype:\nvoid osg::ArrayVisitor::apply(osg::Vec2bArray & )\nClass arguments details:\narg 1 ID = 35367467\n");
		}

		osg::Vec2bArray* _arg1_ptr=(Luna< osg::Vec2bArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ArrayVisitor::apply function");
		}
		osg::Vec2bArray & _arg1=*_arg1_ptr;

		osg::ArrayVisitor* self=(Luna< osg::ArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ArrayVisitor::apply(osg::Vec2bArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ArrayVisitor::apply(osg::Vec3bArray & )
	static int _bind_apply_overload_15(lua_State *L) {
		if (!_lg_typecheck_apply_overload_15(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ArrayVisitor::apply(osg::Vec3bArray & ) function, expected prototype:\nvoid osg::ArrayVisitor::apply(osg::Vec3bArray & )\nClass arguments details:\narg 1 ID = 22871013\n");
		}

		osg::Vec3bArray* _arg1_ptr=(Luna< osg::Vec3bArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ArrayVisitor::apply function");
		}
		osg::Vec3bArray & _arg1=*_arg1_ptr;

		osg::ArrayVisitor* self=(Luna< osg::ArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ArrayVisitor::apply(osg::Vec3bArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ArrayVisitor::apply(osg::Vec4bArray & )
	static int _bind_apply_overload_16(lua_State *L) {
		if (!_lg_typecheck_apply_overload_16(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ArrayVisitor::apply(osg::Vec4bArray & ) function, expected prototype:\nvoid osg::ArrayVisitor::apply(osg::Vec4bArray & )\nClass arguments details:\narg 1 ID = 10374559\n");
		}

		osg::Vec4bArray* _arg1_ptr=(Luna< osg::Vec4bArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ArrayVisitor::apply function");
		}
		osg::Vec4bArray & _arg1=*_arg1_ptr;

		osg::ArrayVisitor* self=(Luna< osg::ArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ArrayVisitor::apply(osg::Vec4bArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ArrayVisitor::apply(osg::Vec2sArray & )
	static int _bind_apply_overload_17(lua_State *L) {
		if (!_lg_typecheck_apply_overload_17(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ArrayVisitor::apply(osg::Vec2sArray & ) function, expected prototype:\nvoid osg::ArrayVisitor::apply(osg::Vec2sArray & )\nClass arguments details:\narg 1 ID = 22062959\n");
		}

		osg::Vec2sArray* _arg1_ptr=(Luna< osg::Vec2sArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ArrayVisitor::apply function");
		}
		osg::Vec2sArray & _arg1=*_arg1_ptr;

		osg::ArrayVisitor* self=(Luna< osg::ArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ArrayVisitor::apply(osg::Vec2sArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ArrayVisitor::apply(osg::Vec3sArray & )
	static int _bind_apply_overload_18(lua_State *L) {
		if (!_lg_typecheck_apply_overload_18(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ArrayVisitor::apply(osg::Vec3sArray & ) function, expected prototype:\nvoid osg::ArrayVisitor::apply(osg::Vec3sArray & )\nClass arguments details:\narg 1 ID = 9566505\n");
		}

		osg::Vec3sArray* _arg1_ptr=(Luna< osg::Vec3sArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ArrayVisitor::apply function");
		}
		osg::Vec3sArray & _arg1=*_arg1_ptr;

		osg::ArrayVisitor* self=(Luna< osg::ArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ArrayVisitor::apply(osg::Vec3sArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ArrayVisitor::apply(osg::Vec4sArray & )
	static int _bind_apply_overload_19(lua_State *L) {
		if (!_lg_typecheck_apply_overload_19(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ArrayVisitor::apply(osg::Vec4sArray & ) function, expected prototype:\nvoid osg::ArrayVisitor::apply(osg::Vec4sArray & )\nClass arguments details:\narg 1 ID = 97070066\n");
		}

		osg::Vec4sArray* _arg1_ptr=(Luna< osg::Vec4sArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ArrayVisitor::apply function");
		}
		osg::Vec4sArray & _arg1=*_arg1_ptr;

		osg::ArrayVisitor* self=(Luna< osg::ArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ArrayVisitor::apply(osg::Vec4sArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ArrayVisitor::apply(osg::Vec2dArray & )
	static int _bind_apply_overload_20(lua_State *L) {
		if (!_lg_typecheck_apply_overload_20(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ArrayVisitor::apply(osg::Vec2dArray & ) function, expected prototype:\nvoid osg::ArrayVisitor::apply(osg::Vec2dArray & )\nClass arguments details:\narg 1 ID = 92625769\n");
		}

		osg::Vec2dArray* _arg1_ptr=(Luna< osg::Vec2dArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ArrayVisitor::apply function");
		}
		osg::Vec2dArray & _arg1=*_arg1_ptr;

		osg::ArrayVisitor* self=(Luna< osg::ArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ArrayVisitor::apply(osg::Vec2dArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ArrayVisitor::apply(osg::Vec3dArray & )
	static int _bind_apply_overload_21(lua_State *L) {
		if (!_lg_typecheck_apply_overload_21(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ArrayVisitor::apply(osg::Vec3dArray & ) function, expected prototype:\nvoid osg::ArrayVisitor::apply(osg::Vec3dArray & )\nClass arguments details:\narg 1 ID = 80129315\n");
		}

		osg::Vec3dArray* _arg1_ptr=(Luna< osg::Vec3dArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ArrayVisitor::apply function");
		}
		osg::Vec3dArray & _arg1=*_arg1_ptr;

		osg::ArrayVisitor* self=(Luna< osg::ArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ArrayVisitor::apply(osg::Vec3dArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ArrayVisitor::apply(osg::Vec4dArray & )
	static int _bind_apply_overload_22(lua_State *L) {
		if (!_lg_typecheck_apply_overload_22(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ArrayVisitor::apply(osg::Vec4dArray & ) function, expected prototype:\nvoid osg::ArrayVisitor::apply(osg::Vec4dArray & )\nClass arguments details:\narg 1 ID = 67632861\n");
		}

		osg::Vec4dArray* _arg1_ptr=(Luna< osg::Vec4dArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ArrayVisitor::apply function");
		}
		osg::Vec4dArray & _arg1=*_arg1_ptr;

		osg::ArrayVisitor* self=(Luna< osg::ArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ArrayVisitor::apply(osg::Vec4dArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ArrayVisitor::apply(osg::MatrixfArray & )
	static int _bind_apply_overload_23(lua_State *L) {
		if (!_lg_typecheck_apply_overload_23(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ArrayVisitor::apply(osg::MatrixfArray & ) function, expected prototype:\nvoid osg::ArrayVisitor::apply(osg::MatrixfArray & )\nClass arguments details:\narg 1 ID = 82206572\n");
		}

		osg::MatrixfArray* _arg1_ptr=(Luna< osg::MatrixfArray >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ArrayVisitor::apply function");
		}
		osg::MatrixfArray & _arg1=*_arg1_ptr;

		osg::ArrayVisitor* self=(Luna< osg::ArrayVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ArrayVisitor::apply(osg::MatrixfArray &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// Overload binder for osg::ArrayVisitor::apply
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

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(osg::Array &)\n  apply(osg::ByteArray &)\n  apply(osg::ShortArray &)\n  apply(osg::IntArray &)\n  apply(osg::UByteArray &)\n  apply(osg::UShortArray &)\n  apply(osg::UIntArray &)\n  apply(osg::FloatArray &)\n  apply(osg::DoubleArray &)\n  apply(osg::Vec2Array &)\n  apply(osg::Vec3Array &)\n  apply(osg::Vec4Array &)\n  apply(osg::Vec4ubArray &)\n  apply(osg::Vec2bArray &)\n  apply(osg::Vec3bArray &)\n  apply(osg::Vec4bArray &)\n  apply(osg::Vec2sArray &)\n  apply(osg::Vec3sArray &)\n  apply(osg::Vec4sArray &)\n  apply(osg::Vec2dArray &)\n  apply(osg::Vec3dArray &)\n  apply(osg::Vec4dArray &)\n  apply(osg::MatrixfArray &)\n");
		return 0;
	}


	// Operator binds:

};

osg::ArrayVisitor* LunaTraits< osg::ArrayVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ArrayVisitor::_bind_ctor(L);
}

void LunaTraits< osg::ArrayVisitor >::_bind_dtor(osg::ArrayVisitor* obj) {
	delete obj;
}

const char LunaTraits< osg::ArrayVisitor >::className[] = "ArrayVisitor";
const char LunaTraits< osg::ArrayVisitor >::fullName[] = "osg::ArrayVisitor";
const char LunaTraits< osg::ArrayVisitor >::moduleName[] = "osg";
const char* LunaTraits< osg::ArrayVisitor >::parents[] = {0};
const int LunaTraits< osg::ArrayVisitor >::hash = 35264102;
const int LunaTraits< osg::ArrayVisitor >::uniqueIDs[] = {35264102,0};

luna_RegType LunaTraits< osg::ArrayVisitor >::methods[] = {
	{"apply", &luna_wrapper_osg_ArrayVisitor::_bind_apply},
	{"dynCast", &luna_wrapper_osg_ArrayVisitor::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ArrayVisitor::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ArrayVisitor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ArrayVisitor >::enumValues[] = {
	{0,0}
};


