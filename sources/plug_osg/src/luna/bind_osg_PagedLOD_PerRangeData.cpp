#include <plug_common.h>

class luna_wrapper_osg_PagedLOD_PerRangeData {
public:
	typedef Luna< osg::PagedLOD::PerRangeData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,17496146) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::PagedLOD::PerRangeData*)");
		}

		osg::PagedLOD::PerRangeData* rhs =(Luna< osg::PagedLOD::PerRangeData >::check(L,2));
		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
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

		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::PagedLOD::PerRangeData");
		
		return luna_dynamicCast(L,converters,"osg::PagedLOD::PerRangeData",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,17496146) ) return false;
		if( (!(Luna< osg::PagedLOD::PerRangeData >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_get_filename(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_priorityOffset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_priorityScale(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_timeStamp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_frameNumber(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_frameNumberOfLastReleaseGLObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_databaseRequest(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_filename(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_priorityOffset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_priorityScale(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_timeStamp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_frameNumber(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_frameNumberOfLastReleaseGLObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_databaseRequest(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,84922662) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17496146) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::PagedLOD::PerRangeData::PerRangeData()
	static osg::PagedLOD::PerRangeData* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PagedLOD::PerRangeData::PerRangeData() function, expected prototype:\nosg::PagedLOD::PerRangeData::PerRangeData()\nClass arguments details:\n");
		}


		return new osg::PagedLOD::PerRangeData();
	}

	// osg::PagedLOD::PerRangeData::PerRangeData(const osg::PagedLOD::PerRangeData & prd)
	static osg::PagedLOD::PerRangeData* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PagedLOD::PerRangeData::PerRangeData(const osg::PagedLOD::PerRangeData & prd) function, expected prototype:\nosg::PagedLOD::PerRangeData::PerRangeData(const osg::PagedLOD::PerRangeData & prd)\nClass arguments details:\narg 1 ID = 17496146\n");
		}

		const osg::PagedLOD::PerRangeData* prd_ptr=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if( !prd_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg prd in osg::PagedLOD::PerRangeData::PerRangeData function");
		}
		const osg::PagedLOD::PerRangeData & prd=*prd_ptr;

		return new osg::PagedLOD::PerRangeData(prd);
	}

	// Overload binder for osg::PagedLOD::PerRangeData::PerRangeData
	static osg::PagedLOD::PerRangeData* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function PerRangeData, cannot match any of the overloads for function PerRangeData:\n  PerRangeData()\n  PerRangeData(const osg::PagedLOD::PerRangeData &)\n");
		return NULL;
	}


	// Function binds:
	// std::string osg::PagedLOD::PerRangeData::_filename()
	static int _bind_get_filename(lua_State *L) {
		if (!_lg_typecheck_get_filename(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string osg::PagedLOD::PerRangeData::_filename() function, expected prototype:\nstd::string osg::PagedLOD::PerRangeData::_filename()\nClass arguments details:\n");
		}


		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string osg::PagedLOD::PerRangeData::_filename(). Got : '%s'",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name());
		}
		std::string lret = self->_filename;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// float osg::PagedLOD::PerRangeData::_priorityOffset()
	static int _bind_get_priorityOffset(lua_State *L) {
		if (!_lg_typecheck_get_priorityOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::PagedLOD::PerRangeData::_priorityOffset() function, expected prototype:\nfloat osg::PagedLOD::PerRangeData::_priorityOffset()\nClass arguments details:\n");
		}


		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::PagedLOD::PerRangeData::_priorityOffset(). Got : '%s'",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name());
		}
		float lret = self->_priorityOffset;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::PagedLOD::PerRangeData::_priorityScale()
	static int _bind_get_priorityScale(lua_State *L) {
		if (!_lg_typecheck_get_priorityScale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::PagedLOD::PerRangeData::_priorityScale() function, expected prototype:\nfloat osg::PagedLOD::PerRangeData::_priorityScale()\nClass arguments details:\n");
		}


		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::PagedLOD::PerRangeData::_priorityScale(). Got : '%s'",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name());
		}
		float lret = self->_priorityScale;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::PagedLOD::PerRangeData::_timeStamp()
	static int _bind_get_timeStamp(lua_State *L) {
		if (!_lg_typecheck_get_timeStamp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::PagedLOD::PerRangeData::_timeStamp() function, expected prototype:\ndouble osg::PagedLOD::PerRangeData::_timeStamp()\nClass arguments details:\n");
		}


		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::PagedLOD::PerRangeData::_timeStamp(). Got : '%s'",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name());
		}
		double lret = self->_timeStamp;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::PagedLOD::PerRangeData::_frameNumber()
	static int _bind_get_frameNumber(lua_State *L) {
		if (!_lg_typecheck_get_frameNumber(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::PagedLOD::PerRangeData::_frameNumber() function, expected prototype:\nunsigned int osg::PagedLOD::PerRangeData::_frameNumber()\nClass arguments details:\n");
		}


		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::PagedLOD::PerRangeData::_frameNumber(). Got : '%s'",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name());
		}
		unsigned int lret = self->_frameNumber;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::PagedLOD::PerRangeData::_frameNumberOfLastReleaseGLObjects()
	static int _bind_get_frameNumberOfLastReleaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_get_frameNumberOfLastReleaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::PagedLOD::PerRangeData::_frameNumberOfLastReleaseGLObjects() function, expected prototype:\nunsigned int osg::PagedLOD::PerRangeData::_frameNumberOfLastReleaseGLObjects()\nClass arguments details:\n");
		}


		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::PagedLOD::PerRangeData::_frameNumberOfLastReleaseGLObjects(). Got : '%s'",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name());
		}
		unsigned int lret = self->_frameNumberOfLastReleaseGLObjects;
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::ref_ptr< osg::Referenced > osg::PagedLOD::PerRangeData::_databaseRequest()
	static int _bind_get_databaseRequest(lua_State *L) {
		if (!_lg_typecheck_get_databaseRequest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Referenced > osg::PagedLOD::PerRangeData::_databaseRequest() function, expected prototype:\nosg::ref_ptr< osg::Referenced > osg::PagedLOD::PerRangeData::_databaseRequest()\nClass arguments details:\n");
		}


		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Referenced > osg::PagedLOD::PerRangeData::_databaseRequest(). Got : '%s'",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name());
		}
		osg::ref_ptr< osg::Referenced > lret = self->_databaseRequest;
		Luna< osg::Referenced >::push(L,lret.get(),false);

		return 1;
	}

	// void osg::PagedLOD::PerRangeData::_filename(std::string value)
	static int _bind_set_filename(lua_State *L) {
		if (!_lg_typecheck_set_filename(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::PerRangeData::_filename(std::string value) function, expected prototype:\nvoid osg::PagedLOD::PerRangeData::_filename(std::string value)\nClass arguments details:\n");
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::PerRangeData::_filename(std::string). Got : '%s'",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name());
		}
		self->_filename = value;

		return 0;
	}

	// void osg::PagedLOD::PerRangeData::_priorityOffset(float value)
	static int _bind_set_priorityOffset(lua_State *L) {
		if (!_lg_typecheck_set_priorityOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::PerRangeData::_priorityOffset(float value) function, expected prototype:\nvoid osg::PagedLOD::PerRangeData::_priorityOffset(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::PerRangeData::_priorityOffset(float). Got : '%s'",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name());
		}
		self->_priorityOffset = value;

		return 0;
	}

	// void osg::PagedLOD::PerRangeData::_priorityScale(float value)
	static int _bind_set_priorityScale(lua_State *L) {
		if (!_lg_typecheck_set_priorityScale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::PerRangeData::_priorityScale(float value) function, expected prototype:\nvoid osg::PagedLOD::PerRangeData::_priorityScale(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::PerRangeData::_priorityScale(float). Got : '%s'",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name());
		}
		self->_priorityScale = value;

		return 0;
	}

	// void osg::PagedLOD::PerRangeData::_timeStamp(double value)
	static int _bind_set_timeStamp(lua_State *L) {
		if (!_lg_typecheck_set_timeStamp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::PerRangeData::_timeStamp(double value) function, expected prototype:\nvoid osg::PagedLOD::PerRangeData::_timeStamp(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::PerRangeData::_timeStamp(double). Got : '%s'",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name());
		}
		self->_timeStamp = value;

		return 0;
	}

	// void osg::PagedLOD::PerRangeData::_frameNumber(unsigned int value)
	static int _bind_set_frameNumber(lua_State *L) {
		if (!_lg_typecheck_set_frameNumber(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::PerRangeData::_frameNumber(unsigned int value) function, expected prototype:\nvoid osg::PagedLOD::PerRangeData::_frameNumber(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::PerRangeData::_frameNumber(unsigned int). Got : '%s'",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name());
		}
		self->_frameNumber = value;

		return 0;
	}

	// void osg::PagedLOD::PerRangeData::_frameNumberOfLastReleaseGLObjects(unsigned int value)
	static int _bind_set_frameNumberOfLastReleaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_set_frameNumberOfLastReleaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::PerRangeData::_frameNumberOfLastReleaseGLObjects(unsigned int value) function, expected prototype:\nvoid osg::PagedLOD::PerRangeData::_frameNumberOfLastReleaseGLObjects(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::PerRangeData::_frameNumberOfLastReleaseGLObjects(unsigned int). Got : '%s'",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name());
		}
		self->_frameNumberOfLastReleaseGLObjects = value;

		return 0;
	}

	// void osg::PagedLOD::PerRangeData::_databaseRequest(osg::ref_ptr< osg::Referenced > value)
	static int _bind_set_databaseRequest(lua_State *L) {
		if (!_lg_typecheck_set_databaseRequest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::PerRangeData::_databaseRequest(osg::ref_ptr< osg::Referenced > value) function, expected prototype:\nvoid osg::PagedLOD::PerRangeData::_databaseRequest(osg::ref_ptr< osg::Referenced > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		osg::ref_ptr< osg::Referenced > value = dynamic_cast< osg::Referenced* >(Luna< osg::Referenced >::check(L,2));

		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::PerRangeData::_databaseRequest(osg::ref_ptr< osg::Referenced >). Got : '%s'",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name());
		}
		self->_databaseRequest = value;

		return 0;
	}


	// Operator binds:
	// osg::PagedLOD::PerRangeData & osg::PagedLOD::PerRangeData::operator=(const osg::PagedLOD::PerRangeData & prd)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PagedLOD::PerRangeData & osg::PagedLOD::PerRangeData::operator=(const osg::PagedLOD::PerRangeData & prd) function, expected prototype:\nosg::PagedLOD::PerRangeData & osg::PagedLOD::PerRangeData::operator=(const osg::PagedLOD::PerRangeData & prd)\nClass arguments details:\narg 1 ID = 17496146\n");
		}

		const osg::PagedLOD::PerRangeData* prd_ptr=(Luna< osg::PagedLOD::PerRangeData >::check(L,2));
		if( !prd_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg prd in osg::PagedLOD::PerRangeData::operator= function");
		}
		const osg::PagedLOD::PerRangeData & prd=*prd_ptr;

		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::PagedLOD::PerRangeData & osg::PagedLOD::PerRangeData::operator=(const osg::PagedLOD::PerRangeData &). Got : '%s'",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name());
		}
		const osg::PagedLOD::PerRangeData* lret = &self->operator=(prd);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PagedLOD::PerRangeData >::push(L,lret,false);

		return 1;
	}


};

osg::PagedLOD::PerRangeData* LunaTraits< osg::PagedLOD::PerRangeData >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_PagedLOD_PerRangeData::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::PagedLOD::PerRangeData >::_bind_dtor(osg::PagedLOD::PerRangeData* obj) {
	delete obj;
}

const char LunaTraits< osg::PagedLOD::PerRangeData >::className[] = "PagedLOD_PerRangeData";
const char LunaTraits< osg::PagedLOD::PerRangeData >::fullName[] = "osg::PagedLOD::PerRangeData";
const char LunaTraits< osg::PagedLOD::PerRangeData >::moduleName[] = "osg";
const char* LunaTraits< osg::PagedLOD::PerRangeData >::parents[] = {0};
const int LunaTraits< osg::PagedLOD::PerRangeData >::hash = 17496146;
const int LunaTraits< osg::PagedLOD::PerRangeData >::uniqueIDs[] = {17496146,0};

luna_RegType LunaTraits< osg::PagedLOD::PerRangeData >::methods[] = {
	{"get_filename", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_get_filename},
	{"get_priorityOffset", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_get_priorityOffset},
	{"get_priorityScale", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_get_priorityScale},
	{"get_timeStamp", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_get_timeStamp},
	{"get_frameNumber", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_get_frameNumber},
	{"get_frameNumberOfLastReleaseGLObjects", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_get_frameNumberOfLastReleaseGLObjects},
	{"get_databaseRequest", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_get_databaseRequest},
	{"set_filename", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_set_filename},
	{"set_priorityOffset", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_set_priorityOffset},
	{"set_priorityScale", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_set_priorityScale},
	{"set_timeStamp", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_set_timeStamp},
	{"set_frameNumber", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_set_frameNumber},
	{"set_frameNumberOfLastReleaseGLObjects", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_set_frameNumberOfLastReleaseGLObjects},
	{"set_databaseRequest", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_set_databaseRequest},
	{"op_assign", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_op_assign},
	{"dynCast", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::PagedLOD::PerRangeData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::PagedLOD::PerRangeData >::enumValues[] = {
	{0,0}
};


