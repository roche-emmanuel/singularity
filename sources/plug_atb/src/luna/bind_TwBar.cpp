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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(TwBar*)");
		}

		TwBar* rhs =(Luna< TwBar >::check(L,2));
		TwBar* self=(Luna< TwBar >::check(L,1));
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
		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< BoolCallback >(L,3)) ) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addVariable_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< TwBar >::check(L,1)) ) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< IntCallback >(L,3)) ) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addVariable_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< TwBar >::check(L,1)) ) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< EnumCallback >(L,3)) ) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addVariable_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< TwBar >::check(L,1)) ) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< DoubleCallback >(L,3)) ) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addVariable_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< TwBar >::check(L,1)) ) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< ColorCallback >(L,3)) ) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addVariable_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< TwBar >::check(L,1)) ) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< StringCallback >(L,3)) ) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addVariable_overload_7(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< TwBar >::check(L,1)) ) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< QuatCallback >(L,3)) ) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addVariable_overload_8(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< TwBar >::check(L,1)) ) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< DirCallback >(L,3)) ) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addButton(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81187440)) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void TwBar::addVariable(TwBar * bar, const std::string & name, BoolCallback * cb, const std::string & def = "")
	static int _bind_addVariable_overload_1(lua_State *L) {
		if (!_lg_typecheck_addVariable_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void TwBar::addVariable(TwBar * bar, const std::string & name, BoolCallback * cb, const std::string & def = \"\") function, expected prototype:\nvoid TwBar::addVariable(TwBar * bar, const std::string & name, BoolCallback * cb, const std::string & def = \"\")\nClass arguments details:\narg 1 ID = 81187440\narg 3 ID = 50169651\n");
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void TwBar::addVariable(TwBar * bar, const std::string & name, IntCallback * cb, const std::string & def = \"\") function, expected prototype:\nvoid TwBar::addVariable(TwBar * bar, const std::string & name, IntCallback * cb, const std::string & def = \"\")\nClass arguments details:\narg 1 ID = 81187440\narg 3 ID = 50169651\n");
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void TwBar::addVariable(TwBar * bar, const std::string & name, EnumCallback * cb, const std::string & def = \"\") function, expected prototype:\nvoid TwBar::addVariable(TwBar * bar, const std::string & name, EnumCallback * cb, const std::string & def = \"\")\nClass arguments details:\narg 1 ID = 81187440\narg 3 ID = 50169651\n");
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void TwBar::addVariable(TwBar * bar, const std::string & name, DoubleCallback * cb, const std::string & def = \"\") function, expected prototype:\nvoid TwBar::addVariable(TwBar * bar, const std::string & name, DoubleCallback * cb, const std::string & def = \"\")\nClass arguments details:\narg 1 ID = 81187440\narg 3 ID = 50169651\n");
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void TwBar::addVariable(TwBar * bar, const std::string & name, ColorCallback * cb, const std::string & def = \"\") function, expected prototype:\nvoid TwBar::addVariable(TwBar * bar, const std::string & name, ColorCallback * cb, const std::string & def = \"\")\nClass arguments details:\narg 1 ID = 81187440\narg 3 ID = 50169651\n");
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void TwBar::addVariable(TwBar * bar, const std::string & name, StringCallback * cb, const std::string & def = \"\") function, expected prototype:\nvoid TwBar::addVariable(TwBar * bar, const std::string & name, StringCallback * cb, const std::string & def = \"\")\nClass arguments details:\narg 1 ID = 81187440\narg 3 ID = 50169651\n");
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void TwBar::addVariable(TwBar * bar, const std::string & name, QuatCallback * cb, const std::string & def = \"\") function, expected prototype:\nvoid TwBar::addVariable(TwBar * bar, const std::string & name, QuatCallback * cb, const std::string & def = \"\")\nClass arguments details:\narg 1 ID = 81187440\narg 3 ID = 50169651\n");
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void TwBar::addVariable(TwBar * bar, const std::string & name, DirCallback * cb, const std::string & def = \"\") function, expected prototype:\nvoid TwBar::addVariable(TwBar * bar, const std::string & name, DirCallback * cb, const std::string & def = \"\")\nClass arguments details:\narg 1 ID = 81187440\narg 3 ID = 50169651\n");
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void TwBar::addButton(TwBar * bar, const std::string & name, ButtonCallback * cb, const std::string & def = \"\") function, expected prototype:\nvoid TwBar::addButton(TwBar * bar, const std::string & name, ButtonCallback * cb, const std::string & def = \"\")\nClass arguments details:\narg 1 ID = 81187440\narg 3 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		TwBar* bar=(Luna< TwBar >::check(L,1));
		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		ButtonCallback* cb=(Luna< osg::Referenced >::checkSubType< ButtonCallback >(L,3));
		std::string def(lua_tostring(L,4),lua_objlen(L,4));

		addButton(bar, name, cb, def);

		return 0;
	}


	// Operator binds:

};

TwBar* LunaTraits< TwBar >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
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
	{"dynCast", &luna_wrapper_TwBar::_bind_dynCast},
	{"__eq", &luna_wrapper_TwBar::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< TwBar >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< TwBar >::enumValues[] = {
	{0,0}
};


