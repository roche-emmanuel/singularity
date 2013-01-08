#include <plug_common.h>

class luna_wrapper_osg_Geometry_ArrayData {
public:
	typedef Luna< osg::Geometry::ArrayData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,26680564) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Geometry::ArrayData*)");
		}

		osg::Geometry::ArrayData* rhs =(Luna< osg::Geometry::ArrayData >::check(L,2));
		osg::Geometry::ArrayData* self=(Luna< osg::Geometry::ArrayData >::check(L,1));
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

		osg::Geometry::ArrayData* self=(Luna< osg::Geometry::ArrayData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Geometry::ArrayData");
		
		return luna_dynamicCast(L,converters,"osg::Geometry::ArrayData",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,26680564) ) return false;
		if( (!(Luna< osg::Geometry::ArrayData >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Array >(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Array >(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_empty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,26680564) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::Geometry::ArrayData::ArrayData()
	static osg::Geometry::ArrayData* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Geometry::ArrayData::ArrayData() function, expected prototype:\nosg::Geometry::ArrayData::ArrayData()\nClass arguments details:\n");
		}


		return new osg::Geometry::ArrayData();
	}

	// osg::Geometry::ArrayData::ArrayData(const osg::Geometry::ArrayData & data, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Geometry::ArrayData* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Geometry::ArrayData::ArrayData(const osg::Geometry::ArrayData & data, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Geometry::ArrayData::ArrayData(const osg::Geometry::ArrayData & data, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 26680564\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Geometry::ArrayData* data_ptr=(Luna< osg::Geometry::ArrayData >::check(L,1));
		if( !data_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg data in osg::Geometry::ArrayData::ArrayData function");
		}
		const osg::Geometry::ArrayData & data=*data_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Geometry::ArrayData::ArrayData function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::Geometry::ArrayData(data, copyop);
	}

	// osg::Geometry::ArrayData::ArrayData(osg::Array * a, osg::Geometry::AttributeBinding b, unsigned char n = GL_FALSE)
	static osg::Geometry::ArrayData* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Geometry::ArrayData::ArrayData(osg::Array * a, osg::Geometry::AttributeBinding b, unsigned char n = GL_FALSE) function, expected prototype:\nosg::Geometry::ArrayData::ArrayData(osg::Array * a, osg::Geometry::AttributeBinding b, unsigned char n = GL_FALSE)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::Array* a=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,1));
		osg::Geometry::AttributeBinding b=(osg::Geometry::AttributeBinding)lua_tointeger(L,2);
		unsigned char n = (unsigned char)(lua_tointeger(L,3));

		return new osg::Geometry::ArrayData(a, b, n);
	}

	// osg::Geometry::ArrayData::ArrayData(osg::Array * a, osg::IndexArray * i, osg::Geometry::AttributeBinding b, unsigned char n = GL_FALSE)
	static osg::Geometry::ArrayData* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Geometry::ArrayData::ArrayData(osg::Array * a, osg::IndexArray * i, osg::Geometry::AttributeBinding b, unsigned char n = GL_FALSE) function, expected prototype:\nosg::Geometry::ArrayData::ArrayData(osg::Array * a, osg::IndexArray * i, osg::Geometry::AttributeBinding b, unsigned char n = GL_FALSE)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::Array* a=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,1));
		osg::IndexArray* i=(Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,2));
		osg::Geometry::AttributeBinding b=(osg::Geometry::AttributeBinding)lua_tointeger(L,3);
		unsigned char n = (unsigned char)(lua_tointeger(L,4));

		return new osg::Geometry::ArrayData(a, i, b, n);
	}

	// Overload binder for osg::Geometry::ArrayData::ArrayData
	static osg::Geometry::ArrayData* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ArrayData, cannot match any of the overloads for function ArrayData:\n  ArrayData()\n  ArrayData(const osg::Geometry::ArrayData &, const osg::CopyOp &)\n  ArrayData(osg::Array *, osg::Geometry::AttributeBinding, unsigned char)\n  ArrayData(osg::Array *, osg::IndexArray *, osg::Geometry::AttributeBinding, unsigned char)\n");
		return NULL;
	}


	// Function binds:
	// bool osg::Geometry::ArrayData::empty() const
	static int _bind_empty(lua_State *L) {
		if (!_lg_typecheck_empty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Geometry::ArrayData::empty() const function, expected prototype:\nbool osg::Geometry::ArrayData::empty() const\nClass arguments details:\n");
		}


		osg::Geometry::ArrayData* self=(Luna< osg::Geometry::ArrayData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Geometry::ArrayData::empty() const. Got : '%s'",typeid(Luna< osg::Geometry::ArrayData >::check(L,1)).name());
		}
		bool lret = self->empty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:
	// osg::Geometry::ArrayData & osg::Geometry::ArrayData::operator=(const osg::Geometry::ArrayData & rhs)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Geometry::ArrayData & osg::Geometry::ArrayData::operator=(const osg::Geometry::ArrayData & rhs) function, expected prototype:\nosg::Geometry::ArrayData & osg::Geometry::ArrayData::operator=(const osg::Geometry::ArrayData & rhs)\nClass arguments details:\narg 1 ID = 26680564\n");
		}

		const osg::Geometry::ArrayData* rhs_ptr=(Luna< osg::Geometry::ArrayData >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Geometry::ArrayData::operator= function");
		}
		const osg::Geometry::ArrayData & rhs=*rhs_ptr;

		osg::Geometry::ArrayData* self=(Luna< osg::Geometry::ArrayData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Geometry::ArrayData & osg::Geometry::ArrayData::operator=(const osg::Geometry::ArrayData &). Got : '%s'",typeid(Luna< osg::Geometry::ArrayData >::check(L,1)).name());
		}
		const osg::Geometry::ArrayData* lret = &self->operator=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry::ArrayData >::push(L,lret,false);

		return 1;
	}


};

osg::Geometry::ArrayData* LunaTraits< osg::Geometry::ArrayData >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Geometry_ArrayData::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::Geometry::ArrayData >::_bind_dtor(osg::Geometry::ArrayData* obj) {
	delete obj;
}

const char LunaTraits< osg::Geometry::ArrayData >::className[] = "Geometry_ArrayData";
const char LunaTraits< osg::Geometry::ArrayData >::fullName[] = "osg::Geometry::ArrayData";
const char LunaTraits< osg::Geometry::ArrayData >::moduleName[] = "osg";
const char* LunaTraits< osg::Geometry::ArrayData >::parents[] = {0};
const int LunaTraits< osg::Geometry::ArrayData >::hash = 26680564;
const int LunaTraits< osg::Geometry::ArrayData >::uniqueIDs[] = {26680564,0};

luna_RegType LunaTraits< osg::Geometry::ArrayData >::methods[] = {
	{"empty", &luna_wrapper_osg_Geometry_ArrayData::_bind_empty},
	{"op_assign", &luna_wrapper_osg_Geometry_ArrayData::_bind_op_assign},
	{"dynCast", &luna_wrapper_osg_Geometry_ArrayData::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Geometry_ArrayData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Geometry::ArrayData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Geometry::ArrayData >::enumValues[] = {
	{0,0}
};


