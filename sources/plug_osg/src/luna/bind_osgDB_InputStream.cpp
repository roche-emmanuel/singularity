#include <plug_common.h>

class luna_wrapper_osgDB_InputStream {
public:
	typedef Luna< osgDB::InputStream > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::InputStream*)");
		}

		osgDB::InputStream* rhs =(Luna< osgDB::InputStream >::check(L,2));
		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
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

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::InputStream");
		
		return luna_dynamicCast(L,converters,"osgDB::InputStream",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_isBinary(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFileVersion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOptions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_matchString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_advanceToCurrentEndBracket(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readWrappedString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readCharArray(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readArray(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readPrimitiveSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readImage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readObject(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readObjectFields(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInputIterator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_start(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_decompress(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readSchema(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,77972206) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_resetSchema(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readDouble(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readInt(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readBool(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeMatrixd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeVec2d(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeVec2f(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeVec3d(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeVec3f(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeVec4d(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeVec4f(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeQuat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_useHexMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_useDecMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_beginBracket(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_endBracket(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 40 valid operators)
	inline static bool _lg_typecheck_op_read_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_10(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_11(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_12(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_13(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_14(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,32567652) ) return false;
		if( (!(Luna< osgDB::ObjectGLenum >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_15(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,23791141) ) return false;
		if( (!(Luna< osgDB::ObjectProperty >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_16(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,60066730) ) return false;
		if( (!(Luna< osgDB::ObjectMark >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_17(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303169) ) return false;
		if( (!(Luna< osg::Vec2b >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_18(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303200) ) return false;
		if( (!(Luna< osg::Vec3b >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_19(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303231) ) return false;
		if( (!(Luna< osg::Vec4b >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_20(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,61400540) ) return false;
		if( (!(Luna< osg::Vec4ub >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_21(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303186) ) return false;
		if( (!(Luna< osg::Vec2s >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_22(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303217) ) return false;
		if( (!(Luna< osg::Vec3s >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_23(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303248) ) return false;
		if( (!(Luna< osg::Vec4s >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_24(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		if( (!(Luna< osg::Vec2f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_25(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_26(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_27(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303171) ) return false;
		if( (!(Luna< osg::Vec2d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_28(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_29(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303233) ) return false;
		if( (!(Luna< osg::Vec4d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_30(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		if( (!(Luna< osg::Quat >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_31(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,86970521) ) return false;
		if( (!(Luna< osg::Plane >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_32(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903840) ) return false;
		if( (!(Luna< osg::Matrixf >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_33(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_34(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_35(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_36(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::PrimitiveSet >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_37(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_38(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,74215671) ) return false;
		if( (!(Luna< osg::ref_ptr< osg::Array > >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_39(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,15557275) ) return false;
		if( (!(Luna< osg::ref_ptr< osg::Image > >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_read_overload_40(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,88770621) ) return false;
		if( (!(Luna< osg::ref_ptr< osg::PrimitiveSet > >::check(L,2))) ) return false;
		return true;
	}


	// Constructor binds:
	// osgDB::InputStream::InputStream(const osgDB::Options * options)
	static osgDB::InputStream* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream::InputStream(const osgDB::Options * options) function, expected prototype:\nosgDB::InputStream::InputStream(const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,1));

		return new osgDB::InputStream(options);
	}


	// Function binds:
	// bool osgDB::InputStream::isBinary() const
	static int _bind_isBinary(lua_State *L) {
		if (!_lg_typecheck_isBinary(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::InputStream::isBinary() const function, expected prototype:\nbool osgDB::InputStream::isBinary() const\nClass arguments details:\n");
		}


		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::InputStream::isBinary() const. Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		bool lret = self->isBinary();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int osgDB::InputStream::getFileVersion() const
	static int _bind_getFileVersion(lua_State *L) {
		if (!_lg_typecheck_getFileVersion(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgDB::InputStream::getFileVersion() const function, expected prototype:\nint osgDB::InputStream::getFileVersion() const\nClass arguments details:\n");
		}


		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgDB::InputStream::getFileVersion() const. Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		int lret = self->getFileVersion();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const osgDB::Options * osgDB::InputStream::getOptions() const
	static int _bind_getOptions(lua_State *L) {
		if (!_lg_typecheck_getOptions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgDB::Options * osgDB::InputStream::getOptions() const function, expected prototype:\nconst osgDB::Options * osgDB::InputStream::getOptions() const\nClass arguments details:\n");
		}


		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgDB::Options * osgDB::InputStream::getOptions() const. Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::Options * lret = self->getOptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::Options >::push(L,lret,false);

		return 1;
	}

	// bool osgDB::InputStream::matchString(const std::string & str)
	static int _bind_matchString(lua_State *L) {
		if (!_lg_typecheck_matchString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::InputStream::matchString(const std::string & str) function, expected prototype:\nbool osgDB::InputStream::matchString(const std::string & str)\nClass arguments details:\n");
		}

		std::string str(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::InputStream::matchString(const std::string &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		bool lret = self->matchString(str);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::InputStream::advanceToCurrentEndBracket()
	static int _bind_advanceToCurrentEndBracket(lua_State *L) {
		if (!_lg_typecheck_advanceToCurrentEndBracket(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputStream::advanceToCurrentEndBracket() function, expected prototype:\nvoid osgDB::InputStream::advanceToCurrentEndBracket()\nClass arguments details:\n");
		}


		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputStream::advanceToCurrentEndBracket(). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		self->advanceToCurrentEndBracket();

		return 0;
	}

	// void osgDB::InputStream::readWrappedString(std::string & str)
	static int _bind_readWrappedString(lua_State *L) {
		if (!_lg_typecheck_readWrappedString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputStream::readWrappedString(std::string & str) function, expected prototype:\nvoid osgDB::InputStream::readWrappedString(std::string & str)\nClass arguments details:\n");
		}

		std::string str(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputStream::readWrappedString(std::string &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		self->readWrappedString(str);

		return 0;
	}

	// void osgDB::InputStream::readCharArray(char * s, unsigned int size)
	static int _bind_readCharArray(lua_State *L) {
		if (!_lg_typecheck_readCharArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputStream::readCharArray(char * s, unsigned int size) function, expected prototype:\nvoid osgDB::InputStream::readCharArray(char * s, unsigned int size)\nClass arguments details:\n");
		}

		char s=(char)lua_tointeger(L,2);
		unsigned int size=(unsigned int)lua_tointeger(L,3);

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputStream::readCharArray(char *, unsigned int). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		self->readCharArray(&s, size);

		return 0;
	}

	// unsigned int osgDB::InputStream::readSize()
	static int _bind_readSize(lua_State *L) {
		if (!_lg_typecheck_readSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgDB::InputStream::readSize() function, expected prototype:\nunsigned int osgDB::InputStream::readSize()\nClass arguments details:\n");
		}


		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgDB::InputStream::readSize(). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		unsigned int lret = self->readSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Array * osgDB::InputStream::readArray()
	static int _bind_readArray(lua_State *L) {
		if (!_lg_typecheck_readArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Array * osgDB::InputStream::readArray() function, expected prototype:\nosg::Array * osgDB::InputStream::readArray()\nClass arguments details:\n");
		}


		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Array * osgDB::InputStream::readArray(). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		osg::Array * lret = self->readArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// osg::PrimitiveSet * osgDB::InputStream::readPrimitiveSet()
	static int _bind_readPrimitiveSet(lua_State *L) {
		if (!_lg_typecheck_readPrimitiveSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PrimitiveSet * osgDB::InputStream::readPrimitiveSet() function, expected prototype:\nosg::PrimitiveSet * osgDB::InputStream::readPrimitiveSet()\nClass arguments details:\n");
		}


		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::PrimitiveSet * osgDB::InputStream::readPrimitiveSet(). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		osg::PrimitiveSet * lret = self->readPrimitiveSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PrimitiveSet >::push(L,lret,false);

		return 1;
	}

	// osg::Image * osgDB::InputStream::readImage(bool readFromExternal = true)
	static int _bind_readImage(lua_State *L) {
		if (!_lg_typecheck_readImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Image * osgDB::InputStream::readImage(bool readFromExternal = true) function, expected prototype:\nosg::Image * osgDB::InputStream::readImage(bool readFromExternal = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool readFromExternal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Image * osgDB::InputStream::readImage(bool). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		osg::Image * lret = self->readImage(readFromExternal);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgDB::InputStream::readObject(osg::Object * existingObj = 0)
	static int _bind_readObject(lua_State *L) {
		if (!_lg_typecheck_readObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::InputStream::readObject(osg::Object * existingObj = 0) function, expected prototype:\nosg::Object * osgDB::InputStream::readObject(osg::Object * existingObj = 0)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::Object* existingObj=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::Object >(L,2)) : (osg::Object*)0;

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::InputStream::readObject(osg::Object *). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		osg::Object * lret = self->readObject(existingObj);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgDB::InputStream::readObjectFields(const std::string & className, osg::Object * existingObj = 0)
	static int _bind_readObjectFields(lua_State *L) {
		if (!_lg_typecheck_readObjectFields(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::InputStream::readObjectFields(const std::string & className, osg::Object * existingObj = 0) function, expected prototype:\nosg::Object * osgDB::InputStream::readObjectFields(const std::string & className, osg::Object * existingObj = 0)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		std::string className(lua_tostring(L,2),lua_objlen(L,2));
		osg::Object* existingObj=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osg::Object >(L,3)) : (osg::Object*)0;

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::InputStream::readObjectFields(const std::string &, osg::Object *). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		osg::Object * lret = self->readObjectFields(className, existingObj);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// void osgDB::InputStream::setInputIterator(osgDB::InputIterator * ii)
	static int _bind_setInputIterator(lua_State *L) {
		if (!_lg_typecheck_setInputIterator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputStream::setInputIterator(osgDB::InputIterator * ii) function, expected prototype:\nvoid osgDB::InputStream::setInputIterator(osgDB::InputIterator * ii)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgDB::InputIterator* ii=(Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,2));

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputStream::setInputIterator(osgDB::InputIterator *). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		self->setInputIterator(ii);

		return 0;
	}

	// osgDB::InputStream::ReadType osgDB::InputStream::start(osgDB::InputIterator * arg1)
	static int _bind_start(lua_State *L) {
		if (!_lg_typecheck_start(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream::ReadType osgDB::InputStream::start(osgDB::InputIterator * arg1) function, expected prototype:\nosgDB::InputStream::ReadType osgDB::InputStream::start(osgDB::InputIterator * arg1)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgDB::InputIterator* _arg1=(Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,2));

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream::ReadType osgDB::InputStream::start(osgDB::InputIterator *). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		osgDB::InputStream::ReadType lret = self->start(_arg1);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::InputStream::decompress()
	static int _bind_decompress(lua_State *L) {
		if (!_lg_typecheck_decompress(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputStream::decompress() function, expected prototype:\nvoid osgDB::InputStream::decompress()\nClass arguments details:\n");
		}


		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputStream::decompress(). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		self->decompress();

		return 0;
	}

	// void osgDB::InputStream::readSchema(std::istream & fin)
	static int _bind_readSchema(lua_State *L) {
		if (!_lg_typecheck_readSchema(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputStream::readSchema(std::istream & fin) function, expected prototype:\nvoid osgDB::InputStream::readSchema(std::istream & fin)\nClass arguments details:\narg 1 ID = 77972206\n");
		}

		std::istream* fin_ptr=(Luna< std::istream >::check(L,2));
		if( !fin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fin in osgDB::InputStream::readSchema function");
		}
		std::istream & fin=*fin_ptr;

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputStream::readSchema(std::istream &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		self->readSchema(fin);

		return 0;
	}

	// void osgDB::InputStream::resetSchema()
	static int _bind_resetSchema(lua_State *L) {
		if (!_lg_typecheck_resetSchema(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputStream::resetSchema() function, expected prototype:\nvoid osgDB::InputStream::resetSchema()\nClass arguments details:\n");
		}


		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputStream::resetSchema(). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		self->resetSchema();

		return 0;
	}

	// double osgDB::InputStream::readDouble(osgDB::InputStream & is)
	static int _bind_readDouble(lua_State *L) {
		if (!_lg_typecheck_readDouble(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgDB::InputStream::readDouble(osgDB::InputStream & is) function, expected prototype:\ndouble osgDB::InputStream::readDouble(osgDB::InputStream & is)\nClass arguments details:\narg 1 ID = 47918182\n");
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,1));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::InputStream::readDouble function");
		}
		osgDB::InputStream & is=*is_ptr;

		double lret = readDouble(is);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osgDB::InputStream::readInt(osgDB::InputStream & is)
	static int _bind_readInt(lua_State *L) {
		if (!_lg_typecheck_readInt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgDB::InputStream::readInt(osgDB::InputStream & is) function, expected prototype:\nint osgDB::InputStream::readInt(osgDB::InputStream & is)\nClass arguments details:\narg 1 ID = 47918182\n");
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,1));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::InputStream::readInt function");
		}
		osgDB::InputStream & is=*is_ptr;

		int lret = readInt(is);
		lua_pushnumber(L,lret);

		return 1;
	}

	// std::string osgDB::InputStream::readString(osgDB::InputStream & is)
	static int _bind_readString(lua_State *L) {
		if (!_lg_typecheck_readString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string osgDB::InputStream::readString(osgDB::InputStream & is) function, expected prototype:\nstd::string osgDB::InputStream::readString(osgDB::InputStream & is)\nClass arguments details:\narg 1 ID = 47918182\n");
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,1));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::InputStream::readString function");
		}
		osgDB::InputStream & is=*is_ptr;

		std::string lret = readString(is);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool osgDB::InputStream::readBool(osgDB::InputStream & is)
	static int _bind_readBool(lua_State *L) {
		if (!_lg_typecheck_readBool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::InputStream::readBool(osgDB::InputStream & is) function, expected prototype:\nbool osgDB::InputStream::readBool(osgDB::InputStream & is)\nClass arguments details:\narg 1 ID = 47918182\n");
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,1));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::InputStream::readBool function");
		}
		osgDB::InputStream & is=*is_ptr;

		bool lret = readBool(is);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::Matrixd osgDB::InputStream::writeMatrixd(osgDB::InputStream & is)
	static int _bind_writeMatrixd(lua_State *L) {
		if (!_lg_typecheck_writeMatrixd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgDB::InputStream::writeMatrixd(osgDB::InputStream & is) function, expected prototype:\nosg::Matrixd osgDB::InputStream::writeMatrixd(osgDB::InputStream & is)\nClass arguments details:\narg 1 ID = 47918182\n");
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,1));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::InputStream::writeMatrixd function");
		}
		osgDB::InputStream & is=*is_ptr;

		osg::Matrixd stack_lret = writeMatrixd(is);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Vec2d osgDB::InputStream::writeVec2d(osgDB::InputStream & is)
	static int _bind_writeVec2d(lua_State *L) {
		if (!_lg_typecheck_writeVec2d(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec2d osgDB::InputStream::writeVec2d(osgDB::InputStream & is) function, expected prototype:\nosg::Vec2d osgDB::InputStream::writeVec2d(osgDB::InputStream & is)\nClass arguments details:\narg 1 ID = 47918182\n");
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,1));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::InputStream::writeVec2d function");
		}
		osgDB::InputStream & is=*is_ptr;

		osg::Vec2d stack_lret = writeVec2d(is);
		osg::Vec2d* lret = new osg::Vec2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2d >::push(L,lret,true);

		return 1;
	}

	// osg::Vec2f osgDB::InputStream::writeVec2f(osgDB::InputStream & is)
	static int _bind_writeVec2f(lua_State *L) {
		if (!_lg_typecheck_writeVec2f(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec2f osgDB::InputStream::writeVec2f(osgDB::InputStream & is) function, expected prototype:\nosg::Vec2f osgDB::InputStream::writeVec2f(osgDB::InputStream & is)\nClass arguments details:\narg 1 ID = 47918182\n");
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,1));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::InputStream::writeVec2f function");
		}
		osgDB::InputStream & is=*is_ptr;

		osg::Vec2f stack_lret = writeVec2f(is);
		osg::Vec2f* lret = new osg::Vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3d osgDB::InputStream::writeVec3d(osgDB::InputStream & is)
	static int _bind_writeVec3d(lua_State *L) {
		if (!_lg_typecheck_writeVec3d(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3d osgDB::InputStream::writeVec3d(osgDB::InputStream & is) function, expected prototype:\nosg::Vec3d osgDB::InputStream::writeVec3d(osgDB::InputStream & is)\nClass arguments details:\narg 1 ID = 47918182\n");
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,1));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::InputStream::writeVec3d function");
		}
		osgDB::InputStream & is=*is_ptr;

		osg::Vec3d stack_lret = writeVec3d(is);
		osg::Vec3d* lret = new osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osgDB::InputStream::writeVec3f(osgDB::InputStream & is)
	static int _bind_writeVec3f(lua_State *L) {
		if (!_lg_typecheck_writeVec3f(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgDB::InputStream::writeVec3f(osgDB::InputStream & is) function, expected prototype:\nosg::Vec3f osgDB::InputStream::writeVec3f(osgDB::InputStream & is)\nClass arguments details:\narg 1 ID = 47918182\n");
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,1));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::InputStream::writeVec3f function");
		}
		osgDB::InputStream & is=*is_ptr;

		osg::Vec3f stack_lret = writeVec3f(is);
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec4d osgDB::InputStream::writeVec4d(osgDB::InputStream & is)
	static int _bind_writeVec4d(lua_State *L) {
		if (!_lg_typecheck_writeVec4d(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec4d osgDB::InputStream::writeVec4d(osgDB::InputStream & is) function, expected prototype:\nosg::Vec4d osgDB::InputStream::writeVec4d(osgDB::InputStream & is)\nClass arguments details:\narg 1 ID = 47918182\n");
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,1));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::InputStream::writeVec4d function");
		}
		osgDB::InputStream & is=*is_ptr;

		osg::Vec4d stack_lret = writeVec4d(is);
		osg::Vec4d* lret = new osg::Vec4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4d >::push(L,lret,true);

		return 1;
	}

	// osg::Vec4f osgDB::InputStream::writeVec4f(osgDB::InputStream & is)
	static int _bind_writeVec4f(lua_State *L) {
		if (!_lg_typecheck_writeVec4f(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec4f osgDB::InputStream::writeVec4f(osgDB::InputStream & is) function, expected prototype:\nosg::Vec4f osgDB::InputStream::writeVec4f(osgDB::InputStream & is)\nClass arguments details:\narg 1 ID = 47918182\n");
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,1));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::InputStream::writeVec4f function");
		}
		osgDB::InputStream & is=*is_ptr;

		osg::Vec4f stack_lret = writeVec4f(is);
		osg::Vec4f* lret = new osg::Vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,true);

		return 1;
	}

	// osg::Quat osgDB::InputStream::writeQuat(osgDB::InputStream & is)
	static int _bind_writeQuat(lua_State *L) {
		if (!_lg_typecheck_writeQuat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Quat osgDB::InputStream::writeQuat(osgDB::InputStream & is) function, expected prototype:\nosg::Quat osgDB::InputStream::writeQuat(osgDB::InputStream & is)\nClass arguments details:\narg 1 ID = 47918182\n");
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,1));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::InputStream::writeQuat function");
		}
		osgDB::InputStream & is=*is_ptr;

		osg::Quat stack_lret = writeQuat(is);
		osg::Quat* lret = new osg::Quat(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,true);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::useHexMode(osgDB::InputStream & is)
	static int _bind_useHexMode(lua_State *L) {
		if (!_lg_typecheck_useHexMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::useHexMode(osgDB::InputStream & is) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::useHexMode(osgDB::InputStream & is)\nClass arguments details:\narg 1 ID = 47918182\n");
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,1));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::InputStream::useHexMode function");
		}
		osgDB::InputStream & is=*is_ptr;

		const osgDB::InputStream* lret = &useHexMode(is);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::useDecMode(osgDB::InputStream & is)
	static int _bind_useDecMode(lua_State *L) {
		if (!_lg_typecheck_useDecMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::useDecMode(osgDB::InputStream & is) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::useDecMode(osgDB::InputStream & is)\nClass arguments details:\narg 1 ID = 47918182\n");
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,1));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::InputStream::useDecMode function");
		}
		osgDB::InputStream & is=*is_ptr;

		const osgDB::InputStream* lret = &useDecMode(is);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::beginBracket(osgDB::InputStream & is)
	static int _bind_beginBracket(lua_State *L) {
		if (!_lg_typecheck_beginBracket(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::beginBracket(osgDB::InputStream & is) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::beginBracket(osgDB::InputStream & is)\nClass arguments details:\narg 1 ID = 47918182\n");
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,1));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::InputStream::beginBracket function");
		}
		osgDB::InputStream & is=*is_ptr;

		const osgDB::InputStream* lret = &beginBracket(is);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::endBracket(osgDB::InputStream & is)
	static int _bind_endBracket(lua_State *L) {
		if (!_lg_typecheck_endBracket(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::endBracket(osgDB::InputStream & is) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::endBracket(osgDB::InputStream & is)\nClass arguments details:\narg 1 ID = 47918182\n");
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,1));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::InputStream::endBracket function");
		}
		osgDB::InputStream & is=*is_ptr;

		const osgDB::InputStream* lret = &endBracket(is);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}


	// Operator binds:
	// osgDB::InputStream & osgDB::InputStream::operator>>(bool & b)
	static int _bind_op_read_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(bool & b) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(bool & b)\nClass arguments details:\n");
		}

		bool b=(bool)(lua_toboolean(L,2)==1);

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(bool &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(b);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(char & c)
	static int _bind_op_read_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(char & c) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(char & c)\nClass arguments details:\n");
		}

		char c=(char)lua_tointeger(L,2);

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(char &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(c);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(signed char & c)
	static int _bind_op_read_overload_3(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(signed char & c) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(signed char & c)\nClass arguments details:\n");
		}

		signed char c=(signed char)lua_tointeger(L,2);

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(signed char &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(c);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(unsigned char & c)
	static int _bind_op_read_overload_4(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(unsigned char & c) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(unsigned char & c)\nClass arguments details:\n");
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(unsigned char &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(c);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(short & s)
	static int _bind_op_read_overload_5(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(short & s) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(short & s)\nClass arguments details:\n");
		}

		short s=(short)lua_tointeger(L,2);

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(short &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(s);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(unsigned short & s)
	static int _bind_op_read_overload_6(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(unsigned short & s) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(unsigned short & s)\nClass arguments details:\n");
		}

		unsigned short s=(unsigned short)lua_tointeger(L,2);

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(unsigned short &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(s);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(int & i)
	static int _bind_op_read_overload_7(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(int & i) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(int & i)\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(int &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(unsigned int & i)
	static int _bind_op_read_overload_8(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(unsigned int & i) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(unsigned int & i)\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(unsigned int &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(long & l)
	static int _bind_op_read_overload_9(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_9(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(long & l) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(long & l)\nClass arguments details:\n");
		}

		long l=(long)lua_tointeger(L,2);

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(long &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(l);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(unsigned long & l)
	static int _bind_op_read_overload_10(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_10(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(unsigned long & l) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(unsigned long & l)\nClass arguments details:\n");
		}

		unsigned long l=(unsigned long)lua_tointeger(L,2);

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(unsigned long &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(l);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(float & f)
	static int _bind_op_read_overload_11(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_11(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(float & f) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(float & f)\nClass arguments details:\n");
		}

		float f=(float)lua_tonumber(L,2);

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(float &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(f);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(double & d)
	static int _bind_op_read_overload_12(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_12(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(double & d) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(double & d)\nClass arguments details:\n");
		}

		double d=(double)lua_tonumber(L,2);

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(double &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(d);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(std::string & s)
	static int _bind_op_read_overload_13(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_13(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(std::string & s) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(std::string & s)\nClass arguments details:\n");
		}

		std::string s(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(std::string &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(s);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(osgDB::ObjectGLenum & value)
	static int _bind_op_read_overload_14(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_14(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(osgDB::ObjectGLenum & value) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(osgDB::ObjectGLenum & value)\nClass arguments details:\narg 1 ID = 32567652\n");
		}

		osgDB::ObjectGLenum* value_ptr=(Luna< osgDB::ObjectGLenum >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::InputStream::operator>> function");
		}
		osgDB::ObjectGLenum & value=*value_ptr;

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(osgDB::ObjectGLenum &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(value);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(osgDB::ObjectProperty & prop)
	static int _bind_op_read_overload_15(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_15(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(osgDB::ObjectProperty & prop) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(osgDB::ObjectProperty & prop)\nClass arguments details:\narg 1 ID = 23791141\n");
		}

		osgDB::ObjectProperty* prop_ptr=(Luna< osgDB::ObjectProperty >::check(L,2));
		if( !prop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg prop in osgDB::InputStream::operator>> function");
		}
		osgDB::ObjectProperty & prop=*prop_ptr;

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(osgDB::ObjectProperty &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(prop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(osgDB::ObjectMark & mark)
	static int _bind_op_read_overload_16(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_16(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(osgDB::ObjectMark & mark) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(osgDB::ObjectMark & mark)\nClass arguments details:\narg 1 ID = 60066730\n");
		}

		osgDB::ObjectMark* mark_ptr=(Luna< osgDB::ObjectMark >::check(L,2));
		if( !mark_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mark in osgDB::InputStream::operator>> function");
		}
		osgDB::ObjectMark & mark=*mark_ptr;

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(osgDB::ObjectMark &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(mark);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec2b & v)
	static int _bind_op_read_overload_17(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_17(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec2b & v) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec2b & v)\nClass arguments details:\narg 1 ID = 92303169\n");
		}

		osg::Vec2b* v_ptr=(Luna< osg::Vec2b >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgDB::InputStream::operator>> function");
		}
		osg::Vec2b & v=*v_ptr;

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec2b &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec3b & v)
	static int _bind_op_read_overload_18(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_18(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec3b & v) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec3b & v)\nClass arguments details:\narg 1 ID = 92303200\n");
		}

		osg::Vec3b* v_ptr=(Luna< osg::Vec3b >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgDB::InputStream::operator>> function");
		}
		osg::Vec3b & v=*v_ptr;

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec3b &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec4b & v)
	static int _bind_op_read_overload_19(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_19(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec4b & v) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec4b & v)\nClass arguments details:\narg 1 ID = 92303231\n");
		}

		osg::Vec4b* v_ptr=(Luna< osg::Vec4b >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgDB::InputStream::operator>> function");
		}
		osg::Vec4b & v=*v_ptr;

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec4b &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec4ub & v)
	static int _bind_op_read_overload_20(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_20(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec4ub & v) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec4ub & v)\nClass arguments details:\narg 1 ID = 61400540\n");
		}

		osg::Vec4ub* v_ptr=(Luna< osg::Vec4ub >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgDB::InputStream::operator>> function");
		}
		osg::Vec4ub & v=*v_ptr;

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec4ub &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec2s & v)
	static int _bind_op_read_overload_21(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_21(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec2s & v) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec2s & v)\nClass arguments details:\narg 1 ID = 92303186\n");
		}

		osg::Vec2s* v_ptr=(Luna< osg::Vec2s >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgDB::InputStream::operator>> function");
		}
		osg::Vec2s & v=*v_ptr;

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec2s &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec3s & v)
	static int _bind_op_read_overload_22(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_22(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec3s & v) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec3s & v)\nClass arguments details:\narg 1 ID = 92303217\n");
		}

		osg::Vec3s* v_ptr=(Luna< osg::Vec3s >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgDB::InputStream::operator>> function");
		}
		osg::Vec3s & v=*v_ptr;

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec3s &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec4s & v)
	static int _bind_op_read_overload_23(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_23(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec4s & v) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec4s & v)\nClass arguments details:\narg 1 ID = 92303248\n");
		}

		osg::Vec4s* v_ptr=(Luna< osg::Vec4s >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgDB::InputStream::operator>> function");
		}
		osg::Vec4s & v=*v_ptr;

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec4s &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec2f & v)
	static int _bind_op_read_overload_24(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_24(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec2f & v) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec2f & v)\nClass arguments details:\narg 1 ID = 92303173\n");
		}

		osg::Vec2f* v_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgDB::InputStream::operator>> function");
		}
		osg::Vec2f & v=*v_ptr;

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec2f &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec3f & v)
	static int _bind_op_read_overload_25(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_25(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec3f & v) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec3f & v)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgDB::InputStream::operator>> function");
		}
		osg::Vec3f & v=*v_ptr;

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec3f &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec4f & v)
	static int _bind_op_read_overload_26(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_26(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec4f & v) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec4f & v)\nClass arguments details:\narg 1 ID = 92303235\n");
		}

		osg::Vec4f* v_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgDB::InputStream::operator>> function");
		}
		osg::Vec4f & v=*v_ptr;

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec4f &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec2d & v)
	static int _bind_op_read_overload_27(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_27(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec2d & v) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec2d & v)\nClass arguments details:\narg 1 ID = 92303171\n");
		}

		osg::Vec2d* v_ptr=(Luna< osg::Vec2d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgDB::InputStream::operator>> function");
		}
		osg::Vec2d & v=*v_ptr;

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec2d &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec3d & v)
	static int _bind_op_read_overload_28(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_28(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec3d & v) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec3d & v)\nClass arguments details:\narg 1 ID = 92303202\n");
		}

		osg::Vec3d* v_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgDB::InputStream::operator>> function");
		}
		osg::Vec3d & v=*v_ptr;

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec3d &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec4d & v)
	static int _bind_op_read_overload_29(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_29(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec4d & v) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec4d & v)\nClass arguments details:\narg 1 ID = 92303233\n");
		}

		osg::Vec4d* v_ptr=(Luna< osg::Vec4d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgDB::InputStream::operator>> function");
		}
		osg::Vec4d & v=*v_ptr;

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(osg::Vec4d &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(osg::Quat & q)
	static int _bind_op_read_overload_30(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_30(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(osg::Quat & q) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(osg::Quat & q)\nClass arguments details:\narg 1 ID = 80263306\n");
		}

		osg::Quat* q_ptr=(Luna< osg::Quat >::check(L,2));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in osgDB::InputStream::operator>> function");
		}
		osg::Quat & q=*q_ptr;

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(osg::Quat &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(q);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(osg::Plane & p)
	static int _bind_op_read_overload_31(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_31(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(osg::Plane & p) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(osg::Plane & p)\nClass arguments details:\narg 1 ID = 86970521\n");
		}

		osg::Plane* p_ptr=(Luna< osg::Plane >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in osgDB::InputStream::operator>> function");
		}
		osg::Plane & p=*p_ptr;

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(osg::Plane &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(p);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(osg::Matrixf & mat)
	static int _bind_op_read_overload_32(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_32(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(osg::Matrixf & mat) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(osg::Matrixf & mat)\nClass arguments details:\narg 1 ID = 18903840\n");
		}

		osg::Matrixf* mat_ptr=(Luna< osg::Matrixf >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in osgDB::InputStream::operator>> function");
		}
		osg::Matrixf & mat=*mat_ptr;

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(osg::Matrixf &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(mat);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(osg::Matrixd & mat)
	static int _bind_op_read_overload_33(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_33(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(osg::Matrixd & mat) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(osg::Matrixd & mat)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		osg::Matrixd* mat_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in osgDB::InputStream::operator>> function");
		}
		osg::Matrixd & mat=*mat_ptr;

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(osg::Matrixd &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(mat);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(osg::Array *& a)
	static int _bind_op_read_overload_34(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_34(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(osg::Array *& a) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(osg::Array *& a)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Array* a=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2));

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(osg::Array *&). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(a);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(osg::Image *& img)
	static int _bind_op_read_overload_35(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_35(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(osg::Image *& img) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(osg::Image *& img)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Image* img=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(osg::Image *&). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(img);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(osg::PrimitiveSet *& p)
	static int _bind_op_read_overload_36(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_36(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(osg::PrimitiveSet *& p) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(osg::PrimitiveSet *& p)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::PrimitiveSet* p=(Luna< osg::Referenced >::checkSubType< osg::PrimitiveSet >(L,2));

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(osg::PrimitiveSet *&). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(p);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(osg::Object *& obj)
	static int _bind_op_read_overload_37(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_37(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(osg::Object *& obj) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(osg::Object *& obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(osg::Object *&). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(obj);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(osg::ref_ptr< osg::Array > & ptr)
	static int _bind_op_read_overload_38(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_38(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(osg::ref_ptr< osg::Array > & ptr) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(osg::ref_ptr< osg::Array > & ptr)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		osg::ref_ptr< osg::Array > ptr = dynamic_cast< osg::Array* >(Luna< osg::Referenced >::check(L,2));

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(osg::ref_ptr< osg::Array > &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(ptr);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(osg::ref_ptr< osg::Image > & ptr)
	static int _bind_op_read_overload_39(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_39(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(osg::ref_ptr< osg::Image > & ptr) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(osg::ref_ptr< osg::Image > & ptr)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		osg::ref_ptr< osg::Image > ptr = dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,2));

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(osg::ref_ptr< osg::Image > &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(ptr);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::operator>>(osg::ref_ptr< osg::PrimitiveSet > & ptr)
	static int _bind_op_read_overload_40(lua_State *L) {
		if (!_lg_typecheck_op_read_overload_40(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::operator>>(osg::ref_ptr< osg::PrimitiveSet > & ptr) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::operator>>(osg::ref_ptr< osg::PrimitiveSet > & ptr)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		osg::ref_ptr< osg::PrimitiveSet > ptr = dynamic_cast< osg::PrimitiveSet* >(Luna< osg::Referenced >::check(L,2));

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream & osgDB::InputStream::operator>>(osg::ref_ptr< osg::PrimitiveSet > &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::InputStream* lret = &self->operator>>(ptr);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::InputStream::operator>>
	static int _bind_op_read(lua_State *L) {
		if (_lg_typecheck_op_read_overload_1(L)) return _bind_op_read_overload_1(L);
		if (_lg_typecheck_op_read_overload_2(L)) return _bind_op_read_overload_2(L);
		if (_lg_typecheck_op_read_overload_3(L)) return _bind_op_read_overload_3(L);
		if (_lg_typecheck_op_read_overload_4(L)) return _bind_op_read_overload_4(L);
		if (_lg_typecheck_op_read_overload_5(L)) return _bind_op_read_overload_5(L);
		if (_lg_typecheck_op_read_overload_6(L)) return _bind_op_read_overload_6(L);
		if (_lg_typecheck_op_read_overload_7(L)) return _bind_op_read_overload_7(L);
		if (_lg_typecheck_op_read_overload_8(L)) return _bind_op_read_overload_8(L);
		if (_lg_typecheck_op_read_overload_9(L)) return _bind_op_read_overload_9(L);
		if (_lg_typecheck_op_read_overload_10(L)) return _bind_op_read_overload_10(L);
		if (_lg_typecheck_op_read_overload_11(L)) return _bind_op_read_overload_11(L);
		if (_lg_typecheck_op_read_overload_12(L)) return _bind_op_read_overload_12(L);
		if (_lg_typecheck_op_read_overload_13(L)) return _bind_op_read_overload_13(L);
		if (_lg_typecheck_op_read_overload_14(L)) return _bind_op_read_overload_14(L);
		if (_lg_typecheck_op_read_overload_15(L)) return _bind_op_read_overload_15(L);
		if (_lg_typecheck_op_read_overload_16(L)) return _bind_op_read_overload_16(L);
		if (_lg_typecheck_op_read_overload_17(L)) return _bind_op_read_overload_17(L);
		if (_lg_typecheck_op_read_overload_18(L)) return _bind_op_read_overload_18(L);
		if (_lg_typecheck_op_read_overload_19(L)) return _bind_op_read_overload_19(L);
		if (_lg_typecheck_op_read_overload_20(L)) return _bind_op_read_overload_20(L);
		if (_lg_typecheck_op_read_overload_21(L)) return _bind_op_read_overload_21(L);
		if (_lg_typecheck_op_read_overload_22(L)) return _bind_op_read_overload_22(L);
		if (_lg_typecheck_op_read_overload_23(L)) return _bind_op_read_overload_23(L);
		if (_lg_typecheck_op_read_overload_24(L)) return _bind_op_read_overload_24(L);
		if (_lg_typecheck_op_read_overload_25(L)) return _bind_op_read_overload_25(L);
		if (_lg_typecheck_op_read_overload_26(L)) return _bind_op_read_overload_26(L);
		if (_lg_typecheck_op_read_overload_27(L)) return _bind_op_read_overload_27(L);
		if (_lg_typecheck_op_read_overload_28(L)) return _bind_op_read_overload_28(L);
		if (_lg_typecheck_op_read_overload_29(L)) return _bind_op_read_overload_29(L);
		if (_lg_typecheck_op_read_overload_30(L)) return _bind_op_read_overload_30(L);
		if (_lg_typecheck_op_read_overload_31(L)) return _bind_op_read_overload_31(L);
		if (_lg_typecheck_op_read_overload_32(L)) return _bind_op_read_overload_32(L);
		if (_lg_typecheck_op_read_overload_33(L)) return _bind_op_read_overload_33(L);
		if (_lg_typecheck_op_read_overload_34(L)) return _bind_op_read_overload_34(L);
		if (_lg_typecheck_op_read_overload_35(L)) return _bind_op_read_overload_35(L);
		if (_lg_typecheck_op_read_overload_36(L)) return _bind_op_read_overload_36(L);
		if (_lg_typecheck_op_read_overload_37(L)) return _bind_op_read_overload_37(L);
		if (_lg_typecheck_op_read_overload_38(L)) return _bind_op_read_overload_38(L);
		if (_lg_typecheck_op_read_overload_39(L)) return _bind_op_read_overload_39(L);
		if (_lg_typecheck_op_read_overload_40(L)) return _bind_op_read_overload_40(L);

		luaL_error(L, "error in function operator>>, cannot match any of the overloads for function operator>>:\n  operator>>(bool &)\n  operator>>(char &)\n  operator>>(signed char &)\n  operator>>(unsigned char &)\n  operator>>(short &)\n  operator>>(unsigned short &)\n  operator>>(int &)\n  operator>>(unsigned int &)\n  operator>>(long &)\n  operator>>(unsigned long &)\n  operator>>(float &)\n  operator>>(double &)\n  operator>>(std::string &)\n  operator>>(osgDB::ObjectGLenum &)\n  operator>>(osgDB::ObjectProperty &)\n  operator>>(osgDB::ObjectMark &)\n  operator>>(osg::Vec2b &)\n  operator>>(osg::Vec3b &)\n  operator>>(osg::Vec4b &)\n  operator>>(osg::Vec4ub &)\n  operator>>(osg::Vec2s &)\n  operator>>(osg::Vec3s &)\n  operator>>(osg::Vec4s &)\n  operator>>(osg::Vec2f &)\n  operator>>(osg::Vec3f &)\n  operator>>(osg::Vec4f &)\n  operator>>(osg::Vec2d &)\n  operator>>(osg::Vec3d &)\n  operator>>(osg::Vec4d &)\n  operator>>(osg::Quat &)\n  operator>>(osg::Plane &)\n  operator>>(osg::Matrixf &)\n  operator>>(osg::Matrixd &)\n  operator>>(osg::Array *&)\n  operator>>(osg::Image *&)\n  operator>>(osg::PrimitiveSet *&)\n  operator>>(osg::Object *&)\n  operator>>(osg::ref_ptr< osg::Array > &)\n  operator>>(osg::ref_ptr< osg::Image > &)\n  operator>>(osg::ref_ptr< osg::PrimitiveSet > &)\n");
		return 0;
	}


};

osgDB::InputStream* LunaTraits< osgDB::InputStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_InputStream::_bind_ctor(L);
}

void LunaTraits< osgDB::InputStream >::_bind_dtor(osgDB::InputStream* obj) {
	delete obj;
}

const char LunaTraits< osgDB::InputStream >::className[] = "InputStream";
const char LunaTraits< osgDB::InputStream >::fullName[] = "osgDB::InputStream";
const char LunaTraits< osgDB::InputStream >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::InputStream >::parents[] = {0};
const int LunaTraits< osgDB::InputStream >::hash = 47918182;
const int LunaTraits< osgDB::InputStream >::uniqueIDs[] = {47918182,0};

luna_RegType LunaTraits< osgDB::InputStream >::methods[] = {
	{"isBinary", &luna_wrapper_osgDB_InputStream::_bind_isBinary},
	{"getFileVersion", &luna_wrapper_osgDB_InputStream::_bind_getFileVersion},
	{"getOptions", &luna_wrapper_osgDB_InputStream::_bind_getOptions},
	{"matchString", &luna_wrapper_osgDB_InputStream::_bind_matchString},
	{"advanceToCurrentEndBracket", &luna_wrapper_osgDB_InputStream::_bind_advanceToCurrentEndBracket},
	{"readWrappedString", &luna_wrapper_osgDB_InputStream::_bind_readWrappedString},
	{"readCharArray", &luna_wrapper_osgDB_InputStream::_bind_readCharArray},
	{"readSize", &luna_wrapper_osgDB_InputStream::_bind_readSize},
	{"readArray", &luna_wrapper_osgDB_InputStream::_bind_readArray},
	{"readPrimitiveSet", &luna_wrapper_osgDB_InputStream::_bind_readPrimitiveSet},
	{"readImage", &luna_wrapper_osgDB_InputStream::_bind_readImage},
	{"readObject", &luna_wrapper_osgDB_InputStream::_bind_readObject},
	{"readObjectFields", &luna_wrapper_osgDB_InputStream::_bind_readObjectFields},
	{"setInputIterator", &luna_wrapper_osgDB_InputStream::_bind_setInputIterator},
	{"start", &luna_wrapper_osgDB_InputStream::_bind_start},
	{"decompress", &luna_wrapper_osgDB_InputStream::_bind_decompress},
	{"readSchema", &luna_wrapper_osgDB_InputStream::_bind_readSchema},
	{"resetSchema", &luna_wrapper_osgDB_InputStream::_bind_resetSchema},
	{"readDouble", &luna_wrapper_osgDB_InputStream::_bind_readDouble},
	{"readInt", &luna_wrapper_osgDB_InputStream::_bind_readInt},
	{"readString", &luna_wrapper_osgDB_InputStream::_bind_readString},
	{"readBool", &luna_wrapper_osgDB_InputStream::_bind_readBool},
	{"writeMatrixd", &luna_wrapper_osgDB_InputStream::_bind_writeMatrixd},
	{"writeVec2d", &luna_wrapper_osgDB_InputStream::_bind_writeVec2d},
	{"writeVec2f", &luna_wrapper_osgDB_InputStream::_bind_writeVec2f},
	{"writeVec3d", &luna_wrapper_osgDB_InputStream::_bind_writeVec3d},
	{"writeVec3f", &luna_wrapper_osgDB_InputStream::_bind_writeVec3f},
	{"writeVec4d", &luna_wrapper_osgDB_InputStream::_bind_writeVec4d},
	{"writeVec4f", &luna_wrapper_osgDB_InputStream::_bind_writeVec4f},
	{"writeQuat", &luna_wrapper_osgDB_InputStream::_bind_writeQuat},
	{"useHexMode", &luna_wrapper_osgDB_InputStream::_bind_useHexMode},
	{"useDecMode", &luna_wrapper_osgDB_InputStream::_bind_useDecMode},
	{"beginBracket", &luna_wrapper_osgDB_InputStream::_bind_beginBracket},
	{"endBracket", &luna_wrapper_osgDB_InputStream::_bind_endBracket},
	{"op_read", &luna_wrapper_osgDB_InputStream::_bind_op_read},
	{"dynCast", &luna_wrapper_osgDB_InputStream::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_InputStream::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::InputStream >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::InputStream >::enumValues[] = {
	{"READ_UNKNOWN", osgDB::InputStream::READ_UNKNOWN},
	{"READ_SCENE", osgDB::InputStream::READ_SCENE},
	{"READ_IMAGE", osgDB::InputStream::READ_IMAGE},
	{"READ_OBJECT", osgDB::InputStream::READ_OBJECT},
	{0,0}
};


