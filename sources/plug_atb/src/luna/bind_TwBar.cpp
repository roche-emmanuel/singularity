#include <plug_common.h>

class luna_wrapper_TwBar {
public:
	typedef Luna< TwBar > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81187440) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(TwBar*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		TwBar* rhs =(Luna< TwBar >::check(L,2));
		TwBar* self=(Luna< TwBar >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		TwBar* self= (TwBar*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< TwBar >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81187440) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< TwBar >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		TwBar* self=(Luna< TwBar >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("TwBar");
		
		return luna_dynamicCast(L,converters,"TwBar",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_addVariable_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< TwBar >::check(L,1)) ) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< BoolCallback >(L,3)) ) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addVariable_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< TwBar >::check(L,1)) ) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< IntCallback >(L,3)) ) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addVariable_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< TwBar >::check(L,1)) ) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< EnumCallback >(L,3)) ) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addVariable_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< TwBar >::check(L,1)) ) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< DoubleCallback >(L,3)) ) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addVariable_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< TwBar >::check(L,1)) ) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< ColorCallback >(L,3)) ) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addVariable_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< TwBar >::check(L,1)) ) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< StringCallback >(L,3)) ) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addVariable_overload_7(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< TwBar >::check(L,1)) ) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< QuatCallback >(L,3)) ) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addVariable_overload_8(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< TwBar >::check(L,1)) ) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< DirCallback >(L,3)) ) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addButton(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIntParam(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIntParam2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303171) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIntParam3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFloatParam(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFloatParam2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303173) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFloatParam3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFloatParam4(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDoubleParam(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDoubleParam2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303171) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDoubleParam3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDoubleParam4(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303233) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStringParam(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getIntParam(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getIntParam2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getIntParam3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFloatParam(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFloatParam2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFloatParam3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFloatParam4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDoubleParam(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDoubleParam2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDoubleParam3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDoubleParam4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStringParam(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void TwBar::addVariable(TwBar * bar, const std::string & name, BoolCallback * cb, const std::string & def = "")
	static int _bind_addVariable_overload_1(lua_State *L) {
		if (!_lg_typecheck_addVariable_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void TwBar::addVariable(TwBar * bar, const std::string & name, BoolCallback * cb, const std::string & def = \"\") function, expected prototype:\nvoid TwBar::addVariable(TwBar * bar, const std::string & name, BoolCallback * cb, const std::string & def = \"\")\nClass arguments details:\narg 1 ID = 81187440\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		BoolCallback* cb=(Luna< osg::Referenced >::checkSubType< BoolCallback >(L,3));
		std::string def(lua_tostring(L,4),lua_objlen(L,4));

		addVariable(bar, name, cb, def);

		return 0;
	}

	// void TwBar::addVariable(TwBar * bar, const std::string & name, IntCallback * cb, const std::string & def = "")
	static int _bind_addVariable_overload_2(lua_State *L) {
		if (!_lg_typecheck_addVariable_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void TwBar::addVariable(TwBar * bar, const std::string & name, IntCallback * cb, const std::string & def = \"\") function, expected prototype:\nvoid TwBar::addVariable(TwBar * bar, const std::string & name, IntCallback * cb, const std::string & def = \"\")\nClass arguments details:\narg 1 ID = 81187440\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		IntCallback* cb=(Luna< osg::Referenced >::checkSubType< IntCallback >(L,3));
		std::string def(lua_tostring(L,4),lua_objlen(L,4));

		addVariable(bar, name, cb, def);

		return 0;
	}

	// void TwBar::addVariable(TwBar * bar, const std::string & name, EnumCallback * cb, const std::string & def = "")
	static int _bind_addVariable_overload_3(lua_State *L) {
		if (!_lg_typecheck_addVariable_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void TwBar::addVariable(TwBar * bar, const std::string & name, EnumCallback * cb, const std::string & def = \"\") function, expected prototype:\nvoid TwBar::addVariable(TwBar * bar, const std::string & name, EnumCallback * cb, const std::string & def = \"\")\nClass arguments details:\narg 1 ID = 81187440\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		EnumCallback* cb=(Luna< osg::Referenced >::checkSubType< EnumCallback >(L,3));
		std::string def(lua_tostring(L,4),lua_objlen(L,4));

		addVariable(bar, name, cb, def);

		return 0;
	}

	// void TwBar::addVariable(TwBar * bar, const std::string & name, DoubleCallback * cb, const std::string & def = "")
	static int _bind_addVariable_overload_4(lua_State *L) {
		if (!_lg_typecheck_addVariable_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void TwBar::addVariable(TwBar * bar, const std::string & name, DoubleCallback * cb, const std::string & def = \"\") function, expected prototype:\nvoid TwBar::addVariable(TwBar * bar, const std::string & name, DoubleCallback * cb, const std::string & def = \"\")\nClass arguments details:\narg 1 ID = 81187440\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		DoubleCallback* cb=(Luna< osg::Referenced >::checkSubType< DoubleCallback >(L,3));
		std::string def(lua_tostring(L,4),lua_objlen(L,4));

		addVariable(bar, name, cb, def);

		return 0;
	}

	// void TwBar::addVariable(TwBar * bar, const std::string & name, ColorCallback * cb, const std::string & def = "")
	static int _bind_addVariable_overload_5(lua_State *L) {
		if (!_lg_typecheck_addVariable_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void TwBar::addVariable(TwBar * bar, const std::string & name, ColorCallback * cb, const std::string & def = \"\") function, expected prototype:\nvoid TwBar::addVariable(TwBar * bar, const std::string & name, ColorCallback * cb, const std::string & def = \"\")\nClass arguments details:\narg 1 ID = 81187440\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		ColorCallback* cb=(Luna< osg::Referenced >::checkSubType< ColorCallback >(L,3));
		std::string def(lua_tostring(L,4),lua_objlen(L,4));

		addVariable(bar, name, cb, def);

		return 0;
	}

	// void TwBar::addVariable(TwBar * bar, const std::string & name, StringCallback * cb, const std::string & def = "")
	static int _bind_addVariable_overload_6(lua_State *L) {
		if (!_lg_typecheck_addVariable_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in void TwBar::addVariable(TwBar * bar, const std::string & name, StringCallback * cb, const std::string & def = \"\") function, expected prototype:\nvoid TwBar::addVariable(TwBar * bar, const std::string & name, StringCallback * cb, const std::string & def = \"\")\nClass arguments details:\narg 1 ID = 81187440\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		StringCallback* cb=(Luna< osg::Referenced >::checkSubType< StringCallback >(L,3));
		std::string def(lua_tostring(L,4),lua_objlen(L,4));

		addVariable(bar, name, cb, def);

		return 0;
	}

	// void TwBar::addVariable(TwBar * bar, const std::string & name, QuatCallback * cb, const std::string & def = "")
	static int _bind_addVariable_overload_7(lua_State *L) {
		if (!_lg_typecheck_addVariable_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in void TwBar::addVariable(TwBar * bar, const std::string & name, QuatCallback * cb, const std::string & def = \"\") function, expected prototype:\nvoid TwBar::addVariable(TwBar * bar, const std::string & name, QuatCallback * cb, const std::string & def = \"\")\nClass arguments details:\narg 1 ID = 81187440\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		QuatCallback* cb=(Luna< osg::Referenced >::checkSubType< QuatCallback >(L,3));
		std::string def(lua_tostring(L,4),lua_objlen(L,4));

		addVariable(bar, name, cb, def);

		return 0;
	}

	// void TwBar::addVariable(TwBar * bar, const std::string & name, DirCallback * cb, const std::string & def = "")
	static int _bind_addVariable_overload_8(lua_State *L) {
		if (!_lg_typecheck_addVariable_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in void TwBar::addVariable(TwBar * bar, const std::string & name, DirCallback * cb, const std::string & def = \"\") function, expected prototype:\nvoid TwBar::addVariable(TwBar * bar, const std::string & name, DirCallback * cb, const std::string & def = \"\")\nClass arguments details:\narg 1 ID = 81187440\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		DirCallback* cb=(Luna< osg::Referenced >::checkSubType< DirCallback >(L,3));
		std::string def(lua_tostring(L,4),lua_objlen(L,4));

		addVariable(bar, name, cb, def);

		return 0;
	}

	// Overload binder for TwBar::addVariable
	static int _bind_addVariable(lua_State *L) {
		if (_lg_typecheck_addVariable_overload_1(L)) return _bind_addVariable_overload_1(L);
		if (_lg_typecheck_addVariable_overload_2(L)) return _bind_addVariable_overload_2(L);
		if (_lg_typecheck_addVariable_overload_3(L)) return _bind_addVariable_overload_3(L);
		if (_lg_typecheck_addVariable_overload_4(L)) return _bind_addVariable_overload_4(L);
		if (_lg_typecheck_addVariable_overload_5(L)) return _bind_addVariable_overload_5(L);
		if (_lg_typecheck_addVariable_overload_6(L)) return _bind_addVariable_overload_6(L);
		if (_lg_typecheck_addVariable_overload_7(L)) return _bind_addVariable_overload_7(L);
		if (_lg_typecheck_addVariable_overload_8(L)) return _bind_addVariable_overload_8(L);

		luaL_error(L, "error in function addVariable, cannot match any of the overloads for function addVariable:\n  addVariable(TwBar *, const std::string &, BoolCallback *, const std::string &)\n  addVariable(TwBar *, const std::string &, IntCallback *, const std::string &)\n  addVariable(TwBar *, const std::string &, EnumCallback *, const std::string &)\n  addVariable(TwBar *, const std::string &, DoubleCallback *, const std::string &)\n  addVariable(TwBar *, const std::string &, ColorCallback *, const std::string &)\n  addVariable(TwBar *, const std::string &, StringCallback *, const std::string &)\n  addVariable(TwBar *, const std::string &, QuatCallback *, const std::string &)\n  addVariable(TwBar *, const std::string &, DirCallback *, const std::string &)\n");
		return 0;
	}

	// void TwBar::addButton(TwBar * bar, const std::string & name, ButtonCallback * cb, const std::string & def = "")
	static int _bind_addButton(lua_State *L) {
		if (!_lg_typecheck_addButton(L)) {
			luaL_error(L, "luna typecheck failed in void TwBar::addButton(TwBar * bar, const std::string & name, ButtonCallback * cb, const std::string & def = \"\") function, expected prototype:\nvoid TwBar::addButton(TwBar * bar, const std::string & name, ButtonCallback * cb, const std::string & def = \"\")\nClass arguments details:\narg 1 ID = 81187440\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		ButtonCallback* cb=(Luna< osg::Referenced >::checkSubType< ButtonCallback >(L,3));
		std::string def(lua_tostring(L,4),lua_objlen(L,4));

		addButton(bar, name, cb, def);

		return 0;
	}

	// void TwBar::setIntParam(TwBar * bar, const std::string & vname, const std::string & pname, int val)
	static int _bind_setIntParam(lua_State *L) {
		if (!_lg_typecheck_setIntParam(L)) {
			luaL_error(L, "luna typecheck failed in void TwBar::setIntParam(TwBar * bar, const std::string & vname, const std::string & pname, int val) function, expected prototype:\nvoid TwBar::setIntParam(TwBar * bar, const std::string & vname, const std::string & pname, int val)\nClass arguments details:\narg 1 ID = 81187440\n\n%s",luna_dumpStack(L).c_str());
		}

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string vname(lua_tostring(L,2),lua_objlen(L,2));
		std::string pname(lua_tostring(L,3),lua_objlen(L,3));
		int val=(int)lua_tointeger(L,4);

		setIntParam(bar, vname, pname, val);

		return 0;
	}

	// void TwBar::setIntParam2(TwBar * bar, const std::string & vname, const std::string & pname, osg::Vec2d vec)
	static int _bind_setIntParam2(lua_State *L) {
		if (!_lg_typecheck_setIntParam2(L)) {
			luaL_error(L, "luna typecheck failed in void TwBar::setIntParam2(TwBar * bar, const std::string & vname, const std::string & pname, osg::Vec2d vec) function, expected prototype:\nvoid TwBar::setIntParam2(TwBar * bar, const std::string & vname, const std::string & pname, osg::Vec2d vec)\nClass arguments details:\narg 1 ID = 81187440\n\n%s",luna_dumpStack(L).c_str());
		}

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string vname(lua_tostring(L,2),lua_objlen(L,2));
		std::string pname(lua_tostring(L,3),lua_objlen(L,3));
		osg::Vec2d* vec_ptr=(Luna< osg::Vec2d >::check(L,4));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in TwBar::setIntParam2 function");
		}
		osg::Vec2d vec=*vec_ptr;

		setIntParam2(bar, vname, pname, vec);

		return 0;
	}

	// void TwBar::setIntParam3(TwBar * bar, const std::string & vname, const std::string & pname, osg::Vec3d vec)
	static int _bind_setIntParam3(lua_State *L) {
		if (!_lg_typecheck_setIntParam3(L)) {
			luaL_error(L, "luna typecheck failed in void TwBar::setIntParam3(TwBar * bar, const std::string & vname, const std::string & pname, osg::Vec3d vec) function, expected prototype:\nvoid TwBar::setIntParam3(TwBar * bar, const std::string & vname, const std::string & pname, osg::Vec3d vec)\nClass arguments details:\narg 1 ID = 81187440\n\n%s",luna_dumpStack(L).c_str());
		}

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string vname(lua_tostring(L,2),lua_objlen(L,2));
		std::string pname(lua_tostring(L,3),lua_objlen(L,3));
		osg::Vec3d* vec_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in TwBar::setIntParam3 function");
		}
		osg::Vec3d vec=*vec_ptr;

		setIntParam3(bar, vname, pname, vec);

		return 0;
	}

	// void TwBar::setFloatParam(TwBar * bar, const std::string & vname, const std::string & pname, float val)
	static int _bind_setFloatParam(lua_State *L) {
		if (!_lg_typecheck_setFloatParam(L)) {
			luaL_error(L, "luna typecheck failed in void TwBar::setFloatParam(TwBar * bar, const std::string & vname, const std::string & pname, float val) function, expected prototype:\nvoid TwBar::setFloatParam(TwBar * bar, const std::string & vname, const std::string & pname, float val)\nClass arguments details:\narg 1 ID = 81187440\n\n%s",luna_dumpStack(L).c_str());
		}

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string vname(lua_tostring(L,2),lua_objlen(L,2));
		std::string pname(lua_tostring(L,3),lua_objlen(L,3));
		float val=(float)lua_tonumber(L,4);

		setFloatParam(bar, vname, pname, val);

		return 0;
	}

	// void TwBar::setFloatParam2(TwBar * bar, const std::string & vname, const std::string & pname, osg::Vec2f vec)
	static int _bind_setFloatParam2(lua_State *L) {
		if (!_lg_typecheck_setFloatParam2(L)) {
			luaL_error(L, "luna typecheck failed in void TwBar::setFloatParam2(TwBar * bar, const std::string & vname, const std::string & pname, osg::Vec2f vec) function, expected prototype:\nvoid TwBar::setFloatParam2(TwBar * bar, const std::string & vname, const std::string & pname, osg::Vec2f vec)\nClass arguments details:\narg 1 ID = 81187440\n\n%s",luna_dumpStack(L).c_str());
		}

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string vname(lua_tostring(L,2),lua_objlen(L,2));
		std::string pname(lua_tostring(L,3),lua_objlen(L,3));
		osg::Vec2f* vec_ptr=(Luna< osg::Vec2f >::check(L,4));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in TwBar::setFloatParam2 function");
		}
		osg::Vec2f vec=*vec_ptr;

		setFloatParam2(bar, vname, pname, vec);

		return 0;
	}

	// void TwBar::setFloatParam3(TwBar * bar, const std::string & vname, const std::string & pname, osg::Vec3f vec)
	static int _bind_setFloatParam3(lua_State *L) {
		if (!_lg_typecheck_setFloatParam3(L)) {
			luaL_error(L, "luna typecheck failed in void TwBar::setFloatParam3(TwBar * bar, const std::string & vname, const std::string & pname, osg::Vec3f vec) function, expected prototype:\nvoid TwBar::setFloatParam3(TwBar * bar, const std::string & vname, const std::string & pname, osg::Vec3f vec)\nClass arguments details:\narg 1 ID = 81187440\n\n%s",luna_dumpStack(L).c_str());
		}

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string vname(lua_tostring(L,2),lua_objlen(L,2));
		std::string pname(lua_tostring(L,3),lua_objlen(L,3));
		osg::Vec3f* vec_ptr=(Luna< osg::Vec3f >::check(L,4));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in TwBar::setFloatParam3 function");
		}
		osg::Vec3f vec=*vec_ptr;

		setFloatParam3(bar, vname, pname, vec);

		return 0;
	}

	// void TwBar::setFloatParam4(TwBar * bar, const std::string & vname, const std::string & pname, osg::Vec4f vec)
	static int _bind_setFloatParam4(lua_State *L) {
		if (!_lg_typecheck_setFloatParam4(L)) {
			luaL_error(L, "luna typecheck failed in void TwBar::setFloatParam4(TwBar * bar, const std::string & vname, const std::string & pname, osg::Vec4f vec) function, expected prototype:\nvoid TwBar::setFloatParam4(TwBar * bar, const std::string & vname, const std::string & pname, osg::Vec4f vec)\nClass arguments details:\narg 1 ID = 81187440\n\n%s",luna_dumpStack(L).c_str());
		}

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string vname(lua_tostring(L,2),lua_objlen(L,2));
		std::string pname(lua_tostring(L,3),lua_objlen(L,3));
		osg::Vec4f* vec_ptr=(Luna< osg::Vec4f >::check(L,4));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in TwBar::setFloatParam4 function");
		}
		osg::Vec4f vec=*vec_ptr;

		setFloatParam4(bar, vname, pname, vec);

		return 0;
	}

	// void TwBar::setDoubleParam(TwBar * bar, const std::string & vname, const std::string & pname, double val)
	static int _bind_setDoubleParam(lua_State *L) {
		if (!_lg_typecheck_setDoubleParam(L)) {
			luaL_error(L, "luna typecheck failed in void TwBar::setDoubleParam(TwBar * bar, const std::string & vname, const std::string & pname, double val) function, expected prototype:\nvoid TwBar::setDoubleParam(TwBar * bar, const std::string & vname, const std::string & pname, double val)\nClass arguments details:\narg 1 ID = 81187440\n\n%s",luna_dumpStack(L).c_str());
		}

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string vname(lua_tostring(L,2),lua_objlen(L,2));
		std::string pname(lua_tostring(L,3),lua_objlen(L,3));
		double val=(double)lua_tonumber(L,4);

		setDoubleParam(bar, vname, pname, val);

		return 0;
	}

	// void TwBar::setDoubleParam2(TwBar * bar, const std::string & vname, const std::string & pname, osg::Vec2d vec)
	static int _bind_setDoubleParam2(lua_State *L) {
		if (!_lg_typecheck_setDoubleParam2(L)) {
			luaL_error(L, "luna typecheck failed in void TwBar::setDoubleParam2(TwBar * bar, const std::string & vname, const std::string & pname, osg::Vec2d vec) function, expected prototype:\nvoid TwBar::setDoubleParam2(TwBar * bar, const std::string & vname, const std::string & pname, osg::Vec2d vec)\nClass arguments details:\narg 1 ID = 81187440\n\n%s",luna_dumpStack(L).c_str());
		}

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string vname(lua_tostring(L,2),lua_objlen(L,2));
		std::string pname(lua_tostring(L,3),lua_objlen(L,3));
		osg::Vec2d* vec_ptr=(Luna< osg::Vec2d >::check(L,4));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in TwBar::setDoubleParam2 function");
		}
		osg::Vec2d vec=*vec_ptr;

		setDoubleParam2(bar, vname, pname, vec);

		return 0;
	}

	// void TwBar::setDoubleParam3(TwBar * bar, const std::string & vname, const std::string & pname, osg::Vec3d vec)
	static int _bind_setDoubleParam3(lua_State *L) {
		if (!_lg_typecheck_setDoubleParam3(L)) {
			luaL_error(L, "luna typecheck failed in void TwBar::setDoubleParam3(TwBar * bar, const std::string & vname, const std::string & pname, osg::Vec3d vec) function, expected prototype:\nvoid TwBar::setDoubleParam3(TwBar * bar, const std::string & vname, const std::string & pname, osg::Vec3d vec)\nClass arguments details:\narg 1 ID = 81187440\n\n%s",luna_dumpStack(L).c_str());
		}

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string vname(lua_tostring(L,2),lua_objlen(L,2));
		std::string pname(lua_tostring(L,3),lua_objlen(L,3));
		osg::Vec3d* vec_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in TwBar::setDoubleParam3 function");
		}
		osg::Vec3d vec=*vec_ptr;

		setDoubleParam3(bar, vname, pname, vec);

		return 0;
	}

	// void TwBar::setDoubleParam4(TwBar * bar, const std::string & vname, const std::string & pname, osg::Vec4d vec)
	static int _bind_setDoubleParam4(lua_State *L) {
		if (!_lg_typecheck_setDoubleParam4(L)) {
			luaL_error(L, "luna typecheck failed in void TwBar::setDoubleParam4(TwBar * bar, const std::string & vname, const std::string & pname, osg::Vec4d vec) function, expected prototype:\nvoid TwBar::setDoubleParam4(TwBar * bar, const std::string & vname, const std::string & pname, osg::Vec4d vec)\nClass arguments details:\narg 1 ID = 81187440\n\n%s",luna_dumpStack(L).c_str());
		}

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string vname(lua_tostring(L,2),lua_objlen(L,2));
		std::string pname(lua_tostring(L,3),lua_objlen(L,3));
		osg::Vec4d* vec_ptr=(Luna< osg::Vec4d >::check(L,4));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in TwBar::setDoubleParam4 function");
		}
		osg::Vec4d vec=*vec_ptr;

		setDoubleParam4(bar, vname, pname, vec);

		return 0;
	}

	// void TwBar::setStringParam(TwBar * bar, const std::string & vname, const std::string & pname, const std::string & val)
	static int _bind_setStringParam(lua_State *L) {
		if (!_lg_typecheck_setStringParam(L)) {
			luaL_error(L, "luna typecheck failed in void TwBar::setStringParam(TwBar * bar, const std::string & vname, const std::string & pname, const std::string & val) function, expected prototype:\nvoid TwBar::setStringParam(TwBar * bar, const std::string & vname, const std::string & pname, const std::string & val)\nClass arguments details:\narg 1 ID = 81187440\n\n%s",luna_dumpStack(L).c_str());
		}

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string vname(lua_tostring(L,2),lua_objlen(L,2));
		std::string pname(lua_tostring(L,3),lua_objlen(L,3));
		std::string val(lua_tostring(L,4),lua_objlen(L,4));

		setStringParam(bar, vname, pname, val);

		return 0;
	}

	// int TwBar::getIntParam(TwBar * bar, const std::string & vname, const std::string & pname)
	static int _bind_getIntParam(lua_State *L) {
		if (!_lg_typecheck_getIntParam(L)) {
			luaL_error(L, "luna typecheck failed in int TwBar::getIntParam(TwBar * bar, const std::string & vname, const std::string & pname) function, expected prototype:\nint TwBar::getIntParam(TwBar * bar, const std::string & vname, const std::string & pname)\nClass arguments details:\narg 1 ID = 81187440\n\n%s",luna_dumpStack(L).c_str());
		}

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string vname(lua_tostring(L,2),lua_objlen(L,2));
		std::string pname(lua_tostring(L,3),lua_objlen(L,3));

		int lret = getIntParam(bar, vname, pname);
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Vec2d TwBar::getIntParam2(TwBar * bar, const std::string & vname, const std::string & pname)
	static int _bind_getIntParam2(lua_State *L) {
		if (!_lg_typecheck_getIntParam2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2d TwBar::getIntParam2(TwBar * bar, const std::string & vname, const std::string & pname) function, expected prototype:\nosg::Vec2d TwBar::getIntParam2(TwBar * bar, const std::string & vname, const std::string & pname)\nClass arguments details:\narg 1 ID = 81187440\n\n%s",luna_dumpStack(L).c_str());
		}

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string vname(lua_tostring(L,2),lua_objlen(L,2));
		std::string pname(lua_tostring(L,3),lua_objlen(L,3));

		osg::Vec2d stack_lret = getIntParam2(bar, vname, pname);
		osg::Vec2d* lret = new osg::Vec2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2d >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3d TwBar::getIntParam3(TwBar * bar, const std::string & vname, const std::string & pname)
	static int _bind_getIntParam3(lua_State *L) {
		if (!_lg_typecheck_getIntParam3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3d TwBar::getIntParam3(TwBar * bar, const std::string & vname, const std::string & pname) function, expected prototype:\nosg::Vec3d TwBar::getIntParam3(TwBar * bar, const std::string & vname, const std::string & pname)\nClass arguments details:\narg 1 ID = 81187440\n\n%s",luna_dumpStack(L).c_str());
		}

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string vname(lua_tostring(L,2),lua_objlen(L,2));
		std::string pname(lua_tostring(L,3),lua_objlen(L,3));

		osg::Vec3d stack_lret = getIntParam3(bar, vname, pname);
		osg::Vec3d* lret = new osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}

	// float TwBar::getFloatParam(TwBar * bar, const std::string & vname, const std::string & pname)
	static int _bind_getFloatParam(lua_State *L) {
		if (!_lg_typecheck_getFloatParam(L)) {
			luaL_error(L, "luna typecheck failed in float TwBar::getFloatParam(TwBar * bar, const std::string & vname, const std::string & pname) function, expected prototype:\nfloat TwBar::getFloatParam(TwBar * bar, const std::string & vname, const std::string & pname)\nClass arguments details:\narg 1 ID = 81187440\n\n%s",luna_dumpStack(L).c_str());
		}

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string vname(lua_tostring(L,2),lua_objlen(L,2));
		std::string pname(lua_tostring(L,3),lua_objlen(L,3));

		float lret = getFloatParam(bar, vname, pname);
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Vec2f TwBar::getFloatParam2(TwBar * bar, const std::string & vname, const std::string & pname)
	static int _bind_getFloatParam2(lua_State *L) {
		if (!_lg_typecheck_getFloatParam2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2f TwBar::getFloatParam2(TwBar * bar, const std::string & vname, const std::string & pname) function, expected prototype:\nosg::Vec2f TwBar::getFloatParam2(TwBar * bar, const std::string & vname, const std::string & pname)\nClass arguments details:\narg 1 ID = 81187440\n\n%s",luna_dumpStack(L).c_str());
		}

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string vname(lua_tostring(L,2),lua_objlen(L,2));
		std::string pname(lua_tostring(L,3),lua_objlen(L,3));

		osg::Vec2f stack_lret = getFloatParam2(bar, vname, pname);
		osg::Vec2f* lret = new osg::Vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f TwBar::getFloatParam3(TwBar * bar, const std::string & vname, const std::string & pname)
	static int _bind_getFloatParam3(lua_State *L) {
		if (!_lg_typecheck_getFloatParam3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f TwBar::getFloatParam3(TwBar * bar, const std::string & vname, const std::string & pname) function, expected prototype:\nosg::Vec3f TwBar::getFloatParam3(TwBar * bar, const std::string & vname, const std::string & pname)\nClass arguments details:\narg 1 ID = 81187440\n\n%s",luna_dumpStack(L).c_str());
		}

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string vname(lua_tostring(L,2),lua_objlen(L,2));
		std::string pname(lua_tostring(L,3),lua_objlen(L,3));

		osg::Vec3f stack_lret = getFloatParam3(bar, vname, pname);
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec4f TwBar::getFloatParam4(TwBar * bar, const std::string & vname, const std::string & pname)
	static int _bind_getFloatParam4(lua_State *L) {
		if (!_lg_typecheck_getFloatParam4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4f TwBar::getFloatParam4(TwBar * bar, const std::string & vname, const std::string & pname) function, expected prototype:\nosg::Vec4f TwBar::getFloatParam4(TwBar * bar, const std::string & vname, const std::string & pname)\nClass arguments details:\narg 1 ID = 81187440\n\n%s",luna_dumpStack(L).c_str());
		}

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string vname(lua_tostring(L,2),lua_objlen(L,2));
		std::string pname(lua_tostring(L,3),lua_objlen(L,3));

		osg::Vec4f stack_lret = getFloatParam4(bar, vname, pname);
		osg::Vec4f* lret = new osg::Vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,true);

		return 1;
	}

	// double TwBar::getDoubleParam(TwBar * bar, const std::string & vname, const std::string & pname)
	static int _bind_getDoubleParam(lua_State *L) {
		if (!_lg_typecheck_getDoubleParam(L)) {
			luaL_error(L, "luna typecheck failed in double TwBar::getDoubleParam(TwBar * bar, const std::string & vname, const std::string & pname) function, expected prototype:\ndouble TwBar::getDoubleParam(TwBar * bar, const std::string & vname, const std::string & pname)\nClass arguments details:\narg 1 ID = 81187440\n\n%s",luna_dumpStack(L).c_str());
		}

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string vname(lua_tostring(L,2),lua_objlen(L,2));
		std::string pname(lua_tostring(L,3),lua_objlen(L,3));

		double lret = getDoubleParam(bar, vname, pname);
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Vec2d TwBar::getDoubleParam2(TwBar * bar, const std::string & vname, const std::string & pname)
	static int _bind_getDoubleParam2(lua_State *L) {
		if (!_lg_typecheck_getDoubleParam2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2d TwBar::getDoubleParam2(TwBar * bar, const std::string & vname, const std::string & pname) function, expected prototype:\nosg::Vec2d TwBar::getDoubleParam2(TwBar * bar, const std::string & vname, const std::string & pname)\nClass arguments details:\narg 1 ID = 81187440\n\n%s",luna_dumpStack(L).c_str());
		}

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string vname(lua_tostring(L,2),lua_objlen(L,2));
		std::string pname(lua_tostring(L,3),lua_objlen(L,3));

		osg::Vec2d stack_lret = getDoubleParam2(bar, vname, pname);
		osg::Vec2d* lret = new osg::Vec2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2d >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3d TwBar::getDoubleParam3(TwBar * bar, const std::string & vname, const std::string & pname)
	static int _bind_getDoubleParam3(lua_State *L) {
		if (!_lg_typecheck_getDoubleParam3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3d TwBar::getDoubleParam3(TwBar * bar, const std::string & vname, const std::string & pname) function, expected prototype:\nosg::Vec3d TwBar::getDoubleParam3(TwBar * bar, const std::string & vname, const std::string & pname)\nClass arguments details:\narg 1 ID = 81187440\n\n%s",luna_dumpStack(L).c_str());
		}

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string vname(lua_tostring(L,2),lua_objlen(L,2));
		std::string pname(lua_tostring(L,3),lua_objlen(L,3));

		osg::Vec3d stack_lret = getDoubleParam3(bar, vname, pname);
		osg::Vec3d* lret = new osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}

	// osg::Vec4f TwBar::getDoubleParam4(TwBar * bar, const std::string & vname, const std::string & pname)
	static int _bind_getDoubleParam4(lua_State *L) {
		if (!_lg_typecheck_getDoubleParam4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4f TwBar::getDoubleParam4(TwBar * bar, const std::string & vname, const std::string & pname) function, expected prototype:\nosg::Vec4f TwBar::getDoubleParam4(TwBar * bar, const std::string & vname, const std::string & pname)\nClass arguments details:\narg 1 ID = 81187440\n\n%s",luna_dumpStack(L).c_str());
		}

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string vname(lua_tostring(L,2),lua_objlen(L,2));
		std::string pname(lua_tostring(L,3),lua_objlen(L,3));

		osg::Vec4f stack_lret = getDoubleParam4(bar, vname, pname);
		osg::Vec4f* lret = new osg::Vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,true);

		return 1;
	}

	// std::string TwBar::getStringParam(TwBar * bar, const std::string & vname, const std::string & pname, int maxsize = 128)
	static int _bind_getStringParam(lua_State *L) {
		if (!_lg_typecheck_getStringParam(L)) {
			luaL_error(L, "luna typecheck failed in std::string TwBar::getStringParam(TwBar * bar, const std::string & vname, const std::string & pname, int maxsize = 128) function, expected prototype:\nstd::string TwBar::getStringParam(TwBar * bar, const std::string & vname, const std::string & pname, int maxsize = 128)\nClass arguments details:\narg 1 ID = 81187440\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string vname(lua_tostring(L,2),lua_objlen(L,2));
		std::string pname(lua_tostring(L,3),lua_objlen(L,3));
		int maxsize=luatop>3 ? (int)lua_tointeger(L,4) : (int)128;

		std::string lret = getStringParam(bar, vname, pname, maxsize);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

TwBar* LunaTraits< TwBar >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< TwBar >::_bind_dtor(TwBar* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< TwBar >::className[] = "TwBar";
const char LunaTraits< TwBar >::fullName[] = "TwBar";
const char LunaTraits< TwBar >::moduleName[] = "atb";
const char* LunaTraits< TwBar >::parents[] = {0};
const int LunaTraits< TwBar >::hash = 81187440;
const int LunaTraits< TwBar >::uniqueIDs[] = {81187440,0};

luna_RegType LunaTraits< TwBar >::methods[] = {
	{"addVariable", &luna_wrapper_TwBar::_bind_addVariable},
	{"addButton", &luna_wrapper_TwBar::_bind_addButton},
	{"setIntParam", &luna_wrapper_TwBar::_bind_setIntParam},
	{"setIntParam2", &luna_wrapper_TwBar::_bind_setIntParam2},
	{"setIntParam3", &luna_wrapper_TwBar::_bind_setIntParam3},
	{"setFloatParam", &luna_wrapper_TwBar::_bind_setFloatParam},
	{"setFloatParam2", &luna_wrapper_TwBar::_bind_setFloatParam2},
	{"setFloatParam3", &luna_wrapper_TwBar::_bind_setFloatParam3},
	{"setFloatParam4", &luna_wrapper_TwBar::_bind_setFloatParam4},
	{"setDoubleParam", &luna_wrapper_TwBar::_bind_setDoubleParam},
	{"setDoubleParam2", &luna_wrapper_TwBar::_bind_setDoubleParam2},
	{"setDoubleParam3", &luna_wrapper_TwBar::_bind_setDoubleParam3},
	{"setDoubleParam4", &luna_wrapper_TwBar::_bind_setDoubleParam4},
	{"setStringParam", &luna_wrapper_TwBar::_bind_setStringParam},
	{"getIntParam", &luna_wrapper_TwBar::_bind_getIntParam},
	{"getIntParam2", &luna_wrapper_TwBar::_bind_getIntParam2},
	{"getIntParam3", &luna_wrapper_TwBar::_bind_getIntParam3},
	{"getFloatParam", &luna_wrapper_TwBar::_bind_getFloatParam},
	{"getFloatParam2", &luna_wrapper_TwBar::_bind_getFloatParam2},
	{"getFloatParam3", &luna_wrapper_TwBar::_bind_getFloatParam3},
	{"getFloatParam4", &luna_wrapper_TwBar::_bind_getFloatParam4},
	{"getDoubleParam", &luna_wrapper_TwBar::_bind_getDoubleParam},
	{"getDoubleParam2", &luna_wrapper_TwBar::_bind_getDoubleParam2},
	{"getDoubleParam3", &luna_wrapper_TwBar::_bind_getDoubleParam3},
	{"getDoubleParam4", &luna_wrapper_TwBar::_bind_getDoubleParam4},
	{"getStringParam", &luna_wrapper_TwBar::_bind_getStringParam},
	{"dynCast", &luna_wrapper_TwBar::_bind_dynCast},
	{"__eq", &luna_wrapper_TwBar::_bind___eq},
	{"fromVoid", &luna_wrapper_TwBar::_bind_fromVoid},
	{"asVoid", &luna_wrapper_TwBar::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< TwBar >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< TwBar >::enumValues[] = {
	{0,0}
};


