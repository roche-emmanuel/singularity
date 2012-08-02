#include <plug_common.h>

class luna_wrapper_osgGA_KeySwitchMatrixManipulator {
public:
	typedef Luna< osgGA::KeySwitchMatrixManipulator > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgGA::KeySwitchMatrixManipulator* ptr= dynamic_cast< osgGA::KeySwitchMatrixManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::KeySwitchMatrixManipulator >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addMatrixManipulator(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addNumberedMatrixManipulator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumMatrixManipulators(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_selectMatrixManipulator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyManipMap_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getKeyManipMap_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrentMatrixManipulator_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrentMatrixManipulator_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMatrixManipulatorWithIndex_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMatrixManipulatorWithIndex_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMatrixManipulatorWithKey_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMatrixManipulatorWithKey_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCoordinateFrameCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setByMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setByInverseMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInverseMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFusionDistanceMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFusionDistanceValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNode_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNode_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setHomePosition(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAutoComputeHomePosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeHomePosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_home(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_init(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_handle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// const char * osgGA::KeySwitchMatrixManipulator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::KeySwitchMatrixManipulator::className() const function, expected prototype:\nconst char * osgGA::KeySwitchMatrixManipulator::className() const\nClass arguments details:\n");
		}


		osgGA::KeySwitchMatrixManipulator* self=dynamic_cast< osgGA::KeySwitchMatrixManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::KeySwitchMatrixManipulator::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::KeySwitchMatrixManipulator::addMatrixManipulator(int key, std::string name, osgGA::CameraManipulator * cm)
	static int _bind_addMatrixManipulator(lua_State *L) {
		if (!_lg_typecheck_addMatrixManipulator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::addMatrixManipulator(int key, std::string name, osgGA::CameraManipulator * cm) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::addMatrixManipulator(int key, std::string name, osgGA::CameraManipulator * cm)\nClass arguments details:\narg 3 ID = 50169651\n");
		}

		int key=(int)lua_tointeger(L,2);
		std::string name(lua_tostring(L,3),lua_objlen(L,3));
		osgGA::CameraManipulator* cm=dynamic_cast< osgGA::CameraManipulator* >(Luna< osg::Referenced >::check(L,4));

		osgGA::KeySwitchMatrixManipulator* self=dynamic_cast< osgGA::KeySwitchMatrixManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::addMatrixManipulator(int, std::string, osgGA::CameraManipulator *)");
		}
		self->addMatrixManipulator(key, name, cm);

		return 0;
	}

	// void osgGA::KeySwitchMatrixManipulator::addNumberedMatrixManipulator(osgGA::CameraManipulator * cm)
	static int _bind_addNumberedMatrixManipulator(lua_State *L) {
		if (!_lg_typecheck_addNumberedMatrixManipulator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::addNumberedMatrixManipulator(osgGA::CameraManipulator * cm) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::addNumberedMatrixManipulator(osgGA::CameraManipulator * cm)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgGA::CameraManipulator* cm=dynamic_cast< osgGA::CameraManipulator* >(Luna< osg::Referenced >::check(L,2));

		osgGA::KeySwitchMatrixManipulator* self=dynamic_cast< osgGA::KeySwitchMatrixManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::addNumberedMatrixManipulator(osgGA::CameraManipulator *)");
		}
		self->addNumberedMatrixManipulator(cm);

		return 0;
	}

	// unsigned int osgGA::KeySwitchMatrixManipulator::getNumMatrixManipulators() const
	static int _bind_getNumMatrixManipulators(lua_State *L) {
		if (!_lg_typecheck_getNumMatrixManipulators(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgGA::KeySwitchMatrixManipulator::getNumMatrixManipulators() const function, expected prototype:\nunsigned int osgGA::KeySwitchMatrixManipulator::getNumMatrixManipulators() const\nClass arguments details:\n");
		}


		osgGA::KeySwitchMatrixManipulator* self=dynamic_cast< osgGA::KeySwitchMatrixManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgGA::KeySwitchMatrixManipulator::getNumMatrixManipulators() const");
		}
		unsigned int lret = self->getNumMatrixManipulators();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::KeySwitchMatrixManipulator::selectMatrixManipulator(unsigned int num)
	static int _bind_selectMatrixManipulator(lua_State *L) {
		if (!_lg_typecheck_selectMatrixManipulator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::selectMatrixManipulator(unsigned int num) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::selectMatrixManipulator(unsigned int num)\nClass arguments details:\n");
		}

		unsigned int num=(unsigned int)lua_tointeger(L,2);

		osgGA::KeySwitchMatrixManipulator* self=dynamic_cast< osgGA::KeySwitchMatrixManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::selectMatrixManipulator(unsigned int)");
		}
		self->selectMatrixManipulator(num);

		return 0;
	}

	// osgGA::KeySwitchMatrixManipulator::KeyManipMap & osgGA::KeySwitchMatrixManipulator::getKeyManipMap()
	static int _bind_getKeyManipMap_overload_1(lua_State *L) {
		if (!_lg_typecheck_getKeyManipMap_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::KeySwitchMatrixManipulator::KeyManipMap & osgGA::KeySwitchMatrixManipulator::getKeyManipMap() function, expected prototype:\nosgGA::KeySwitchMatrixManipulator::KeyManipMap & osgGA::KeySwitchMatrixManipulator::getKeyManipMap()\nClass arguments details:\n");
		}


		osgGA::KeySwitchMatrixManipulator* self=dynamic_cast< osgGA::KeySwitchMatrixManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgGA::KeySwitchMatrixManipulator::KeyManipMap & osgGA::KeySwitchMatrixManipulator::getKeyManipMap()");
		}
		const osgGA::KeySwitchMatrixManipulator::KeyManipMap* lret = &self->getKeyManipMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::KeySwitchMatrixManipulator::KeyManipMap >::push(L,lret,false);

		return 1;
	}

	// const osgGA::KeySwitchMatrixManipulator::KeyManipMap & osgGA::KeySwitchMatrixManipulator::getKeyManipMap() const
	static int _bind_getKeyManipMap_overload_2(lua_State *L) {
		if (!_lg_typecheck_getKeyManipMap_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgGA::KeySwitchMatrixManipulator::KeyManipMap & osgGA::KeySwitchMatrixManipulator::getKeyManipMap() const function, expected prototype:\nconst osgGA::KeySwitchMatrixManipulator::KeyManipMap & osgGA::KeySwitchMatrixManipulator::getKeyManipMap() const\nClass arguments details:\n");
		}


		osgGA::KeySwitchMatrixManipulator* self=dynamic_cast< osgGA::KeySwitchMatrixManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgGA::KeySwitchMatrixManipulator::KeyManipMap & osgGA::KeySwitchMatrixManipulator::getKeyManipMap() const");
		}
		const osgGA::KeySwitchMatrixManipulator::KeyManipMap* lret = &self->getKeyManipMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::KeySwitchMatrixManipulator::KeyManipMap >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::KeySwitchMatrixManipulator::getKeyManipMap
	static int _bind_getKeyManipMap(lua_State *L) {
		if (_lg_typecheck_getKeyManipMap_overload_1(L)) return _bind_getKeyManipMap_overload_1(L);
		if (_lg_typecheck_getKeyManipMap_overload_2(L)) return _bind_getKeyManipMap_overload_2(L);

		luaL_error(L, "error in function getKeyManipMap, cannot match any of the overloads for function getKeyManipMap:\n  getKeyManipMap()\n  getKeyManipMap()\n");
		return 0;
	}

	// osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getCurrentMatrixManipulator()
	static int _bind_getCurrentMatrixManipulator_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCurrentMatrixManipulator_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getCurrentMatrixManipulator() function, expected prototype:\nosgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getCurrentMatrixManipulator()\nClass arguments details:\n");
		}


		osgGA::KeySwitchMatrixManipulator* self=dynamic_cast< osgGA::KeySwitchMatrixManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getCurrentMatrixManipulator()");
		}
		osgGA::CameraManipulator * lret = self->getCurrentMatrixManipulator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::CameraManipulator >::push(L,lret,false);

		return 1;
	}

	// const osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getCurrentMatrixManipulator() const
	static int _bind_getCurrentMatrixManipulator_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCurrentMatrixManipulator_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getCurrentMatrixManipulator() const function, expected prototype:\nconst osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getCurrentMatrixManipulator() const\nClass arguments details:\n");
		}


		osgGA::KeySwitchMatrixManipulator* self=dynamic_cast< osgGA::KeySwitchMatrixManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getCurrentMatrixManipulator() const");
		}
		const osgGA::CameraManipulator * lret = self->getCurrentMatrixManipulator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::CameraManipulator >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::KeySwitchMatrixManipulator::getCurrentMatrixManipulator
	static int _bind_getCurrentMatrixManipulator(lua_State *L) {
		if (_lg_typecheck_getCurrentMatrixManipulator_overload_1(L)) return _bind_getCurrentMatrixManipulator_overload_1(L);
		if (_lg_typecheck_getCurrentMatrixManipulator_overload_2(L)) return _bind_getCurrentMatrixManipulator_overload_2(L);

		luaL_error(L, "error in function getCurrentMatrixManipulator, cannot match any of the overloads for function getCurrentMatrixManipulator:\n  getCurrentMatrixManipulator()\n  getCurrentMatrixManipulator()\n");
		return 0;
	}

	// osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithIndex(unsigned int key)
	static int _bind_getMatrixManipulatorWithIndex_overload_1(lua_State *L) {
		if (!_lg_typecheck_getMatrixManipulatorWithIndex_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithIndex(unsigned int key) function, expected prototype:\nosgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithIndex(unsigned int key)\nClass arguments details:\n");
		}

		unsigned int key=(unsigned int)lua_tointeger(L,2);

		osgGA::KeySwitchMatrixManipulator* self=dynamic_cast< osgGA::KeySwitchMatrixManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithIndex(unsigned int)");
		}
		osgGA::CameraManipulator * lret = self->getMatrixManipulatorWithIndex(key);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::CameraManipulator >::push(L,lret,false);

		return 1;
	}

	// const osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithIndex(unsigned int key) const
	static int _bind_getMatrixManipulatorWithIndex_overload_2(lua_State *L) {
		if (!_lg_typecheck_getMatrixManipulatorWithIndex_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithIndex(unsigned int key) const function, expected prototype:\nconst osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithIndex(unsigned int key) const\nClass arguments details:\n");
		}

		unsigned int key=(unsigned int)lua_tointeger(L,2);

		osgGA::KeySwitchMatrixManipulator* self=dynamic_cast< osgGA::KeySwitchMatrixManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithIndex(unsigned int) const");
		}
		const osgGA::CameraManipulator * lret = self->getMatrixManipulatorWithIndex(key);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::CameraManipulator >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithIndex
	static int _bind_getMatrixManipulatorWithIndex(lua_State *L) {
		if (_lg_typecheck_getMatrixManipulatorWithIndex_overload_1(L)) return _bind_getMatrixManipulatorWithIndex_overload_1(L);
		if (_lg_typecheck_getMatrixManipulatorWithIndex_overload_2(L)) return _bind_getMatrixManipulatorWithIndex_overload_2(L);

		luaL_error(L, "error in function getMatrixManipulatorWithIndex, cannot match any of the overloads for function getMatrixManipulatorWithIndex:\n  getMatrixManipulatorWithIndex(unsigned int)\n  getMatrixManipulatorWithIndex(unsigned int)\n");
		return 0;
	}

	// osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithKey(unsigned int key)
	static int _bind_getMatrixManipulatorWithKey_overload_1(lua_State *L) {
		if (!_lg_typecheck_getMatrixManipulatorWithKey_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithKey(unsigned int key) function, expected prototype:\nosgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithKey(unsigned int key)\nClass arguments details:\n");
		}

		unsigned int key=(unsigned int)lua_tointeger(L,2);

		osgGA::KeySwitchMatrixManipulator* self=dynamic_cast< osgGA::KeySwitchMatrixManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithKey(unsigned int)");
		}
		osgGA::CameraManipulator * lret = self->getMatrixManipulatorWithKey(key);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::CameraManipulator >::push(L,lret,false);

		return 1;
	}

	// const osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithKey(unsigned int key) const
	static int _bind_getMatrixManipulatorWithKey_overload_2(lua_State *L) {
		if (!_lg_typecheck_getMatrixManipulatorWithKey_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithKey(unsigned int key) const function, expected prototype:\nconst osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithKey(unsigned int key) const\nClass arguments details:\n");
		}

		unsigned int key=(unsigned int)lua_tointeger(L,2);

		osgGA::KeySwitchMatrixManipulator* self=dynamic_cast< osgGA::KeySwitchMatrixManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithKey(unsigned int) const");
		}
		const osgGA::CameraManipulator * lret = self->getMatrixManipulatorWithKey(key);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::CameraManipulator >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithKey
	static int _bind_getMatrixManipulatorWithKey(lua_State *L) {
		if (_lg_typecheck_getMatrixManipulatorWithKey_overload_1(L)) return _bind_getMatrixManipulatorWithKey_overload_1(L);
		if (_lg_typecheck_getMatrixManipulatorWithKey_overload_2(L)) return _bind_getMatrixManipulatorWithKey_overload_2(L);

		luaL_error(L, "error in function getMatrixManipulatorWithKey, cannot match any of the overloads for function getMatrixManipulatorWithKey:\n  getMatrixManipulatorWithKey(unsigned int)\n  getMatrixManipulatorWithKey(unsigned int)\n");
		return 0;
	}

	// void osgGA::KeySwitchMatrixManipulator::setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb)
	static int _bind_setCoordinateFrameCallback(lua_State *L) {
		if (!_lg_typecheck_setCoordinateFrameCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgGA::CameraManipulator::CoordinateFrameCallback* cb=dynamic_cast< osgGA::CameraManipulator::CoordinateFrameCallback* >(Luna< osg::Referenced >::check(L,2));

		osgGA::KeySwitchMatrixManipulator* self=dynamic_cast< osgGA::KeySwitchMatrixManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback *)");
		}
		self->setCoordinateFrameCallback(cb);

		return 0;
	}

	// void osgGA::KeySwitchMatrixManipulator::setByMatrix(const osg::Matrixd & matrix)
	static int _bind_setByMatrix(lua_State *L) {
		if (!_lg_typecheck_setByMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::setByMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::setByMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::KeySwitchMatrixManipulator::setByMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::KeySwitchMatrixManipulator* self=dynamic_cast< osgGA::KeySwitchMatrixManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::setByMatrix(const osg::Matrixd &)");
		}
		self->setByMatrix(matrix);

		return 0;
	}

	// void osgGA::KeySwitchMatrixManipulator::setByInverseMatrix(const osg::Matrixd & matrix)
	static int _bind_setByInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_setByInverseMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::setByInverseMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::setByInverseMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::KeySwitchMatrixManipulator::setByInverseMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::KeySwitchMatrixManipulator* self=dynamic_cast< osgGA::KeySwitchMatrixManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::setByInverseMatrix(const osg::Matrixd &)");
		}
		self->setByInverseMatrix(matrix);

		return 0;
	}

	// osg::Matrixd osgGA::KeySwitchMatrixManipulator::getMatrix() const
	static int _bind_getMatrix(lua_State *L) {
		if (!_lg_typecheck_getMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::KeySwitchMatrixManipulator::getMatrix() const function, expected prototype:\nosg::Matrixd osgGA::KeySwitchMatrixManipulator::getMatrix() const\nClass arguments details:\n");
		}


		osgGA::KeySwitchMatrixManipulator* self=dynamic_cast< osgGA::KeySwitchMatrixManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::KeySwitchMatrixManipulator::getMatrix() const");
		}
		osg::Matrixd stack_lret = self->getMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgGA::KeySwitchMatrixManipulator::getInverseMatrix() const
	static int _bind_getInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_getInverseMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::KeySwitchMatrixManipulator::getInverseMatrix() const function, expected prototype:\nosg::Matrixd osgGA::KeySwitchMatrixManipulator::getInverseMatrix() const\nClass arguments details:\n");
		}


		osgGA::KeySwitchMatrixManipulator* self=dynamic_cast< osgGA::KeySwitchMatrixManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::KeySwitchMatrixManipulator::getInverseMatrix() const");
		}
		osg::Matrixd stack_lret = self->getInverseMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osgUtil::SceneView::FusionDistanceMode osgGA::KeySwitchMatrixManipulator::getFusionDistanceMode() const
	static int _bind_getFusionDistanceMode(lua_State *L) {
		if (!_lg_typecheck_getFusionDistanceMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::SceneView::FusionDistanceMode osgGA::KeySwitchMatrixManipulator::getFusionDistanceMode() const function, expected prototype:\nosgUtil::SceneView::FusionDistanceMode osgGA::KeySwitchMatrixManipulator::getFusionDistanceMode() const\nClass arguments details:\n");
		}


		osgGA::KeySwitchMatrixManipulator* self=dynamic_cast< osgGA::KeySwitchMatrixManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::SceneView::FusionDistanceMode osgGA::KeySwitchMatrixManipulator::getFusionDistanceMode() const");
		}
		osgUtil::SceneView::FusionDistanceMode lret = self->getFusionDistanceMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgGA::KeySwitchMatrixManipulator::getFusionDistanceValue() const
	static int _bind_getFusionDistanceValue(lua_State *L) {
		if (!_lg_typecheck_getFusionDistanceValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgGA::KeySwitchMatrixManipulator::getFusionDistanceValue() const function, expected prototype:\nfloat osgGA::KeySwitchMatrixManipulator::getFusionDistanceValue() const\nClass arguments details:\n");
		}


		osgGA::KeySwitchMatrixManipulator* self=dynamic_cast< osgGA::KeySwitchMatrixManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgGA::KeySwitchMatrixManipulator::getFusionDistanceValue() const");
		}
		float lret = self->getFusionDistanceValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::KeySwitchMatrixManipulator::setNode(osg::Node * )
	static int _bind_setNode(lua_State *L) {
		if (!_lg_typecheck_setNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::setNode(osg::Node * ) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::setNode(osg::Node * )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* _arg1=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));

		osgGA::KeySwitchMatrixManipulator* self=dynamic_cast< osgGA::KeySwitchMatrixManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::setNode(osg::Node *)");
		}
		self->setNode(_arg1);

		return 0;
	}

	// const osg::Node * osgGA::KeySwitchMatrixManipulator::getNode() const
	static int _bind_getNode_overload_1(lua_State *L) {
		if (!_lg_typecheck_getNode_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Node * osgGA::KeySwitchMatrixManipulator::getNode() const function, expected prototype:\nconst osg::Node * osgGA::KeySwitchMatrixManipulator::getNode() const\nClass arguments details:\n");
		}


		osgGA::KeySwitchMatrixManipulator* self=dynamic_cast< osgGA::KeySwitchMatrixManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Node * osgGA::KeySwitchMatrixManipulator::getNode() const");
		}
		const osg::Node * lret = self->getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// osg::Node * osgGA::KeySwitchMatrixManipulator::getNode()
	static int _bind_getNode_overload_2(lua_State *L) {
		if (!_lg_typecheck_getNode_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Node * osgGA::KeySwitchMatrixManipulator::getNode() function, expected prototype:\nosg::Node * osgGA::KeySwitchMatrixManipulator::getNode()\nClass arguments details:\n");
		}


		osgGA::KeySwitchMatrixManipulator* self=dynamic_cast< osgGA::KeySwitchMatrixManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Node * osgGA::KeySwitchMatrixManipulator::getNode()");
		}
		osg::Node * lret = self->getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::KeySwitchMatrixManipulator::getNode
	static int _bind_getNode(lua_State *L) {
		if (_lg_typecheck_getNode_overload_1(L)) return _bind_getNode_overload_1(L);
		if (_lg_typecheck_getNode_overload_2(L)) return _bind_getNode_overload_2(L);

		luaL_error(L, "error in function getNode, cannot match any of the overloads for function getNode:\n  getNode()\n  getNode()\n");
		return 0;
	}

	// void osgGA::KeySwitchMatrixManipulator::setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false)
	static int _bind_setHomePosition(lua_State *L) {
		if (!_lg_typecheck_setHomePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n");
		}

		int luatop = lua_gettop(L);

		const osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::KeySwitchMatrixManipulator::setHomePosition function");
		}
		const osg::Vec3d & eye=*eye_ptr;
		const osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::KeySwitchMatrixManipulator::setHomePosition function");
		}
		const osg::Vec3d & center=*center_ptr;
		const osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgGA::KeySwitchMatrixManipulator::setHomePosition function");
		}
		const osg::Vec3d & up=*up_ptr;
		bool autoComputeHomePosition=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : false;

		osgGA::KeySwitchMatrixManipulator* self=dynamic_cast< osgGA::KeySwitchMatrixManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::setHomePosition(const osg::Vec3d &, const osg::Vec3d &, const osg::Vec3d &, bool)");
		}
		self->setHomePosition(eye, center, up, autoComputeHomePosition);

		return 0;
	}

	// void osgGA::KeySwitchMatrixManipulator::setAutoComputeHomePosition(bool flag)
	static int _bind_setAutoComputeHomePosition(lua_State *L) {
		if (!_lg_typecheck_setAutoComputeHomePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::setAutoComputeHomePosition(bool flag) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::setAutoComputeHomePosition(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgGA::KeySwitchMatrixManipulator* self=dynamic_cast< osgGA::KeySwitchMatrixManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::setAutoComputeHomePosition(bool)");
		}
		self->setAutoComputeHomePosition(flag);

		return 0;
	}

	// void osgGA::KeySwitchMatrixManipulator::computeHomePosition()
	static int _bind_computeHomePosition(lua_State *L) {
		if (!_lg_typecheck_computeHomePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::computeHomePosition() function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::computeHomePosition()\nClass arguments details:\n");
		}


		osgGA::KeySwitchMatrixManipulator* self=dynamic_cast< osgGA::KeySwitchMatrixManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::computeHomePosition()");
		}
		self->computeHomePosition();

		return 0;
	}

	// void osgGA::KeySwitchMatrixManipulator::home(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )
	static int _bind_home(lua_State *L) {
		if (!_lg_typecheck_home(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::home(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & ) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::home(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::KeySwitchMatrixManipulator::home function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::KeySwitchMatrixManipulator::home function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::KeySwitchMatrixManipulator* self=dynamic_cast< osgGA::KeySwitchMatrixManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		self->home(_arg1, _arg2);

		return 0;
	}

	// void osgGA::KeySwitchMatrixManipulator::init(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )
	static int _bind_init(lua_State *L) {
		if (!_lg_typecheck_init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::init(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & ) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::init(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::KeySwitchMatrixManipulator::init function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::KeySwitchMatrixManipulator::init function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::KeySwitchMatrixManipulator* self=dynamic_cast< osgGA::KeySwitchMatrixManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::init(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		self->init(_arg1, _arg2);

		return 0;
	}

	// bool osgGA::KeySwitchMatrixManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::KeySwitchMatrixManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) function, expected prototype:\nbool osgGA::KeySwitchMatrixManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* ea_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::KeySwitchMatrixManipulator::handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* us_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !us_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg us in osgGA::KeySwitchMatrixManipulator::handle function");
		}
		osgGA::GUIActionAdapter & us=*us_ptr;

		osgGA::KeySwitchMatrixManipulator* self=dynamic_cast< osgGA::KeySwitchMatrixManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::KeySwitchMatrixManipulator::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		bool lret = self->handle(ea, us);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::KeySwitchMatrixManipulator::getUsage(osg::ApplicationUsage & usage) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ApplicationUsage* usage_ptr=dynamic_cast< osg::ApplicationUsage* >(Luna< osg::Referenced >::check(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgGA::KeySwitchMatrixManipulator::getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgGA::KeySwitchMatrixManipulator* self=dynamic_cast< osgGA::KeySwitchMatrixManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::getUsage(osg::ApplicationUsage &) const");
		}
		self->getUsage(usage);

		return 0;
	}


	// Operator binds:

};

osgGA::KeySwitchMatrixManipulator* LunaTraits< osgGA::KeySwitchMatrixManipulator >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgGA::KeySwitchMatrixManipulator >::_bind_dtor(osgGA::KeySwitchMatrixManipulator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::KeySwitchMatrixManipulator >::className[] = "KeySwitchMatrixManipulator";
const char LunaTraits< osgGA::KeySwitchMatrixManipulator >::fullName[] = "osgGA::KeySwitchMatrixManipulator";
const char LunaTraits< osgGA::KeySwitchMatrixManipulator >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::KeySwitchMatrixManipulator >::parents[] = {"osgGA.CameraManipulator", 0};
const int LunaTraits< osgGA::KeySwitchMatrixManipulator >::hash = 67207082;
const int LunaTraits< osgGA::KeySwitchMatrixManipulator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::KeySwitchMatrixManipulator >::methods[] = {
	{"className", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_className},
	{"addMatrixManipulator", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_addMatrixManipulator},
	{"addNumberedMatrixManipulator", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_addNumberedMatrixManipulator},
	{"getNumMatrixManipulators", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_getNumMatrixManipulators},
	{"selectMatrixManipulator", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_selectMatrixManipulator},
	{"getKeyManipMap", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_getKeyManipMap},
	{"getCurrentMatrixManipulator", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_getCurrentMatrixManipulator},
	{"getMatrixManipulatorWithIndex", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_getMatrixManipulatorWithIndex},
	{"getMatrixManipulatorWithKey", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_getMatrixManipulatorWithKey},
	{"setCoordinateFrameCallback", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_setCoordinateFrameCallback},
	{"setByMatrix", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_setByMatrix},
	{"setByInverseMatrix", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_setByInverseMatrix},
	{"getMatrix", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_getMatrix},
	{"getInverseMatrix", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_getInverseMatrix},
	{"getFusionDistanceMode", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_getFusionDistanceMode},
	{"getFusionDistanceValue", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_getFusionDistanceValue},
	{"setNode", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_setNode},
	{"getNode", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_getNode},
	{"setHomePosition", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_setHomePosition},
	{"setAutoComputeHomePosition", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_setAutoComputeHomePosition},
	{"computeHomePosition", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_computeHomePosition},
	{"home", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_home},
	{"init", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_init},
	{"handle", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_handle},
	{"getUsage", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_getUsage},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::KeySwitchMatrixManipulator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::KeySwitchMatrixManipulator >::enumValues[] = {
	{0,0}
};


