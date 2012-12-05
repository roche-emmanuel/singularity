#include <plug_common.h>

#include <luna/wrappers/wrapper_osgGA_GUIEventAdapter_TouchData.h>

class luna_wrapper_osgGA_GUIEventAdapter_TouchData {
public:
	typedef Luna< osgGA::GUIEventAdapter::TouchData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Referenced*)");
		}

		osg::Referenced* rhs =(Luna< osg::Referenced >::check(L,2));
		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgGA::GUIEventAdapter::TouchData* ptr= dynamic_cast< osgGA::GUIEventAdapter::TouchData* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::GUIEventAdapter::TouchData >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getNumTouchPoints(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgGA::GUIEventAdapter::TouchData::TouchData()
	static osgGA::GUIEventAdapter::TouchData* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventAdapter::TouchData::TouchData() function, expected prototype:\nosgGA::GUIEventAdapter::TouchData::TouchData()\nClass arguments details:\n");
		}


		return new osgGA::GUIEventAdapter::TouchData();
	}

	// osgGA::GUIEventAdapter::TouchData::TouchData(lua_Table * data)
	static osgGA::GUIEventAdapter::TouchData* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventAdapter::TouchData::TouchData(lua_Table * data) function, expected prototype:\nosgGA::GUIEventAdapter::TouchData::TouchData(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgGA_GUIEventAdapter_TouchData(L,NULL);
	}

	// Overload binder for osgGA::GUIEventAdapter::TouchData::TouchData
	static osgGA::GUIEventAdapter::TouchData* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TouchData, cannot match any of the overloads for function TouchData:\n  TouchData()\n  TouchData(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// unsigned int osgGA::GUIEventAdapter::TouchData::getNumTouchPoints() const
	static int _bind_getNumTouchPoints(lua_State *L) {
		if (!_lg_typecheck_getNumTouchPoints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgGA::GUIEventAdapter::TouchData::getNumTouchPoints() const function, expected prototype:\nunsigned int osgGA::GUIEventAdapter::TouchData::getNumTouchPoints() const\nClass arguments details:\n");
		}


		osgGA::GUIEventAdapter::TouchData* self=dynamic_cast< osgGA::GUIEventAdapter::TouchData* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgGA::GUIEventAdapter::TouchData::getNumTouchPoints() const");
		}
		unsigned int lret = self->getNumTouchPoints();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const osgGA::GUIEventAdapter::TouchData::TouchPoint osgGA::GUIEventAdapter::TouchData::get(unsigned int i) const
	static int _bind_get(lua_State *L) {
		if (!_lg_typecheck_get(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgGA::GUIEventAdapter::TouchData::TouchPoint osgGA::GUIEventAdapter::TouchData::get(unsigned int i) const function, expected prototype:\nconst osgGA::GUIEventAdapter::TouchData::TouchPoint osgGA::GUIEventAdapter::TouchData::get(unsigned int i) const\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osgGA::GUIEventAdapter::TouchData* self=dynamic_cast< osgGA::GUIEventAdapter::TouchData* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgGA::GUIEventAdapter::TouchData::TouchPoint osgGA::GUIEventAdapter::TouchData::get(unsigned int) const");
		}
		const osgGA::GUIEventAdapter::TouchData::TouchPoint stack_lret = self->get(i);
		const osgGA::GUIEventAdapter::TouchData::TouchPoint* lret = new const osgGA::GUIEventAdapter::TouchData::TouchPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::GUIEventAdapter::TouchData::TouchPoint >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osgGA::GUIEventAdapter::TouchData* LunaTraits< osgGA::GUIEventAdapter::TouchData >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgGA_GUIEventAdapter_TouchData::_bind_ctor(L);
}

void LunaTraits< osgGA::GUIEventAdapter::TouchData >::_bind_dtor(osgGA::GUIEventAdapter::TouchData* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::GUIEventAdapter::TouchData >::className[] = "TouchData";
const char LunaTraits< osgGA::GUIEventAdapter::TouchData >::fullName[] = "osgGA::GUIEventAdapter::TouchData";
const char LunaTraits< osgGA::GUIEventAdapter::TouchData >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::GUIEventAdapter::TouchData >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgGA::GUIEventAdapter::TouchData >::hash = 51484548;
const int LunaTraits< osgGA::GUIEventAdapter::TouchData >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::GUIEventAdapter::TouchData >::methods[] = {
	{"getNumTouchPoints", &luna_wrapper_osgGA_GUIEventAdapter_TouchData::_bind_getNumTouchPoints},
	{"get", &luna_wrapper_osgGA_GUIEventAdapter_TouchData::_bind_get},
	{"__eq", &luna_wrapper_osgGA_GUIEventAdapter_TouchData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::GUIEventAdapter::TouchData >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_GUIEventAdapter_TouchData::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::GUIEventAdapter::TouchData >::enumValues[] = {
	{0,0}
};


