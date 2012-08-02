#include <plug_common.h>

class luna_wrapper_osgUtil_TangentSpaceGenerator {
public:
	typedef Luna< osgUtil::TangentSpaceGenerator > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgUtil::TangentSpaceGenerator* ptr= dynamic_cast< osgUtil::TangentSpaceGenerator* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::TangentSpaceGenerator >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_generate(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTangentArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTangentArray_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTangentArray(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,35833861)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNormalArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNormalArray_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNormalArray(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,35833861)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBinormalArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBinormalArray_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBinormalArray(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,35833861)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getIndices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::TangentSpaceGenerator::TangentSpaceGenerator()
	static osgUtil::TangentSpaceGenerator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::TangentSpaceGenerator::TangentSpaceGenerator() function, expected prototype:\nosgUtil::TangentSpaceGenerator::TangentSpaceGenerator()\nClass arguments details:\n");
		}


		return new osgUtil::TangentSpaceGenerator();
	}

	// osgUtil::TangentSpaceGenerator::TangentSpaceGenerator(const osgUtil::TangentSpaceGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgUtil::TangentSpaceGenerator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::TangentSpaceGenerator::TangentSpaceGenerator(const osgUtil::TangentSpaceGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgUtil::TangentSpaceGenerator::TangentSpaceGenerator(const osgUtil::TangentSpaceGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgUtil::TangentSpaceGenerator* copy_ptr=dynamic_cast< osgUtil::TangentSpaceGenerator* >(Luna< osg::Referenced >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgUtil::TangentSpaceGenerator::TangentSpaceGenerator function");
		}
		const osgUtil::TangentSpaceGenerator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgUtil::TangentSpaceGenerator::TangentSpaceGenerator function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgUtil::TangentSpaceGenerator(copy, copyop);
	}

	// Overload binder for osgUtil::TangentSpaceGenerator::TangentSpaceGenerator
	static osgUtil::TangentSpaceGenerator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TangentSpaceGenerator, cannot match any of the overloads for function TangentSpaceGenerator:\n  TangentSpaceGenerator()\n  TangentSpaceGenerator(const osgUtil::TangentSpaceGenerator &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::TangentSpaceGenerator::generate(osg::Geometry * geo, int normal_map_tex_unit = 0)
	static int _bind_generate(lua_State *L) {
		if (!_lg_typecheck_generate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::TangentSpaceGenerator::generate(osg::Geometry * geo, int normal_map_tex_unit = 0) function, expected prototype:\nvoid osgUtil::TangentSpaceGenerator::generate(osg::Geometry * geo, int normal_map_tex_unit = 0)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::Geometry* geo=dynamic_cast< osg::Geometry* >(Luna< osg::Referenced >::check(L,2));
		int normal_map_tex_unit=luatop>2 ? (int)lua_tointeger(L,3) : 0;

		osgUtil::TangentSpaceGenerator* self=dynamic_cast< osgUtil::TangentSpaceGenerator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::TangentSpaceGenerator::generate(osg::Geometry *, int)");
		}
		self->generate(geo, normal_map_tex_unit);

		return 0;
	}

	// osg::Vec4Array * osgUtil::TangentSpaceGenerator::getTangentArray()
	static int _bind_getTangentArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTangentArray_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec4Array * osgUtil::TangentSpaceGenerator::getTangentArray() function, expected prototype:\nosg::Vec4Array * osgUtil::TangentSpaceGenerator::getTangentArray()\nClass arguments details:\n");
		}


		osgUtil::TangentSpaceGenerator* self=dynamic_cast< osgUtil::TangentSpaceGenerator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec4Array * osgUtil::TangentSpaceGenerator::getTangentArray()");
		}
		osg::Vec4Array * lret = self->getTangentArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4Array >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec4Array * osgUtil::TangentSpaceGenerator::getTangentArray() const
	static int _bind_getTangentArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTangentArray_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec4Array * osgUtil::TangentSpaceGenerator::getTangentArray() const function, expected prototype:\nconst osg::Vec4Array * osgUtil::TangentSpaceGenerator::getTangentArray() const\nClass arguments details:\n");
		}


		osgUtil::TangentSpaceGenerator* self=dynamic_cast< osgUtil::TangentSpaceGenerator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec4Array * osgUtil::TangentSpaceGenerator::getTangentArray() const");
		}
		const osg::Vec4Array * lret = self->getTangentArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4Array >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::TangentSpaceGenerator::getTangentArray
	static int _bind_getTangentArray(lua_State *L) {
		if (_lg_typecheck_getTangentArray_overload_1(L)) return _bind_getTangentArray_overload_1(L);
		if (_lg_typecheck_getTangentArray_overload_2(L)) return _bind_getTangentArray_overload_2(L);

		luaL_error(L, "error in function getTangentArray, cannot match any of the overloads for function getTangentArray:\n  getTangentArray()\n  getTangentArray()\n");
		return 0;
	}

	// void osgUtil::TangentSpaceGenerator::setTangentArray(osg::Vec4Array * array)
	static int _bind_setTangentArray(lua_State *L) {
		if (!_lg_typecheck_setTangentArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::TangentSpaceGenerator::setTangentArray(osg::Vec4Array * array) function, expected prototype:\nvoid osgUtil::TangentSpaceGenerator::setTangentArray(osg::Vec4Array * array)\nClass arguments details:\narg 1 ID = 35833861\n");
		}

		osg::Vec4Array* array=(Luna< osg::Vec4Array >::check(L,2));

		osgUtil::TangentSpaceGenerator* self=dynamic_cast< osgUtil::TangentSpaceGenerator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::TangentSpaceGenerator::setTangentArray(osg::Vec4Array *)");
		}
		self->setTangentArray(array);

		return 0;
	}

	// osg::Vec4Array * osgUtil::TangentSpaceGenerator::getNormalArray()
	static int _bind_getNormalArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_getNormalArray_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec4Array * osgUtil::TangentSpaceGenerator::getNormalArray() function, expected prototype:\nosg::Vec4Array * osgUtil::TangentSpaceGenerator::getNormalArray()\nClass arguments details:\n");
		}


		osgUtil::TangentSpaceGenerator* self=dynamic_cast< osgUtil::TangentSpaceGenerator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec4Array * osgUtil::TangentSpaceGenerator::getNormalArray()");
		}
		osg::Vec4Array * lret = self->getNormalArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4Array >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec4Array * osgUtil::TangentSpaceGenerator::getNormalArray() const
	static int _bind_getNormalArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_getNormalArray_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec4Array * osgUtil::TangentSpaceGenerator::getNormalArray() const function, expected prototype:\nconst osg::Vec4Array * osgUtil::TangentSpaceGenerator::getNormalArray() const\nClass arguments details:\n");
		}


		osgUtil::TangentSpaceGenerator* self=dynamic_cast< osgUtil::TangentSpaceGenerator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec4Array * osgUtil::TangentSpaceGenerator::getNormalArray() const");
		}
		const osg::Vec4Array * lret = self->getNormalArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4Array >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::TangentSpaceGenerator::getNormalArray
	static int _bind_getNormalArray(lua_State *L) {
		if (_lg_typecheck_getNormalArray_overload_1(L)) return _bind_getNormalArray_overload_1(L);
		if (_lg_typecheck_getNormalArray_overload_2(L)) return _bind_getNormalArray_overload_2(L);

		luaL_error(L, "error in function getNormalArray, cannot match any of the overloads for function getNormalArray:\n  getNormalArray()\n  getNormalArray()\n");
		return 0;
	}

	// void osgUtil::TangentSpaceGenerator::setNormalArray(osg::Vec4Array * array)
	static int _bind_setNormalArray(lua_State *L) {
		if (!_lg_typecheck_setNormalArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::TangentSpaceGenerator::setNormalArray(osg::Vec4Array * array) function, expected prototype:\nvoid osgUtil::TangentSpaceGenerator::setNormalArray(osg::Vec4Array * array)\nClass arguments details:\narg 1 ID = 35833861\n");
		}

		osg::Vec4Array* array=(Luna< osg::Vec4Array >::check(L,2));

		osgUtil::TangentSpaceGenerator* self=dynamic_cast< osgUtil::TangentSpaceGenerator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::TangentSpaceGenerator::setNormalArray(osg::Vec4Array *)");
		}
		self->setNormalArray(array);

		return 0;
	}

	// osg::Vec4Array * osgUtil::TangentSpaceGenerator::getBinormalArray()
	static int _bind_getBinormalArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_getBinormalArray_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec4Array * osgUtil::TangentSpaceGenerator::getBinormalArray() function, expected prototype:\nosg::Vec4Array * osgUtil::TangentSpaceGenerator::getBinormalArray()\nClass arguments details:\n");
		}


		osgUtil::TangentSpaceGenerator* self=dynamic_cast< osgUtil::TangentSpaceGenerator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec4Array * osgUtil::TangentSpaceGenerator::getBinormalArray()");
		}
		osg::Vec4Array * lret = self->getBinormalArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4Array >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec4Array * osgUtil::TangentSpaceGenerator::getBinormalArray() const
	static int _bind_getBinormalArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_getBinormalArray_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec4Array * osgUtil::TangentSpaceGenerator::getBinormalArray() const function, expected prototype:\nconst osg::Vec4Array * osgUtil::TangentSpaceGenerator::getBinormalArray() const\nClass arguments details:\n");
		}


		osgUtil::TangentSpaceGenerator* self=dynamic_cast< osgUtil::TangentSpaceGenerator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec4Array * osgUtil::TangentSpaceGenerator::getBinormalArray() const");
		}
		const osg::Vec4Array * lret = self->getBinormalArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4Array >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::TangentSpaceGenerator::getBinormalArray
	static int _bind_getBinormalArray(lua_State *L) {
		if (_lg_typecheck_getBinormalArray_overload_1(L)) return _bind_getBinormalArray_overload_1(L);
		if (_lg_typecheck_getBinormalArray_overload_2(L)) return _bind_getBinormalArray_overload_2(L);

		luaL_error(L, "error in function getBinormalArray, cannot match any of the overloads for function getBinormalArray:\n  getBinormalArray()\n  getBinormalArray()\n");
		return 0;
	}

	// void osgUtil::TangentSpaceGenerator::setBinormalArray(osg::Vec4Array * array)
	static int _bind_setBinormalArray(lua_State *L) {
		if (!_lg_typecheck_setBinormalArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::TangentSpaceGenerator::setBinormalArray(osg::Vec4Array * array) function, expected prototype:\nvoid osgUtil::TangentSpaceGenerator::setBinormalArray(osg::Vec4Array * array)\nClass arguments details:\narg 1 ID = 35833861\n");
		}

		osg::Vec4Array* array=(Luna< osg::Vec4Array >::check(L,2));

		osgUtil::TangentSpaceGenerator* self=dynamic_cast< osgUtil::TangentSpaceGenerator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::TangentSpaceGenerator::setBinormalArray(osg::Vec4Array *)");
		}
		self->setBinormalArray(array);

		return 0;
	}

	// osg::IndexArray * osgUtil::TangentSpaceGenerator::getIndices()
	static int _bind_getIndices(lua_State *L) {
		if (!_lg_typecheck_getIndices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::IndexArray * osgUtil::TangentSpaceGenerator::getIndices() function, expected prototype:\nosg::IndexArray * osgUtil::TangentSpaceGenerator::getIndices()\nClass arguments details:\n");
		}


		osgUtil::TangentSpaceGenerator* self=dynamic_cast< osgUtil::TangentSpaceGenerator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::IndexArray * osgUtil::TangentSpaceGenerator::getIndices()");
		}
		osg::IndexArray * lret = self->getIndices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::IndexArray >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

osgUtil::TangentSpaceGenerator* LunaTraits< osgUtil::TangentSpaceGenerator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_TangentSpaceGenerator::_bind_ctor(L);
}

void LunaTraits< osgUtil::TangentSpaceGenerator >::_bind_dtor(osgUtil::TangentSpaceGenerator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::TangentSpaceGenerator >::className[] = "TangentSpaceGenerator";
const char LunaTraits< osgUtil::TangentSpaceGenerator >::fullName[] = "osgUtil::TangentSpaceGenerator";
const char LunaTraits< osgUtil::TangentSpaceGenerator >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::TangentSpaceGenerator >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::TangentSpaceGenerator >::hash = 98980636;
const int LunaTraits< osgUtil::TangentSpaceGenerator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::TangentSpaceGenerator >::methods[] = {
	{"generate", &luna_wrapper_osgUtil_TangentSpaceGenerator::_bind_generate},
	{"getTangentArray", &luna_wrapper_osgUtil_TangentSpaceGenerator::_bind_getTangentArray},
	{"setTangentArray", &luna_wrapper_osgUtil_TangentSpaceGenerator::_bind_setTangentArray},
	{"getNormalArray", &luna_wrapper_osgUtil_TangentSpaceGenerator::_bind_getNormalArray},
	{"setNormalArray", &luna_wrapper_osgUtil_TangentSpaceGenerator::_bind_setNormalArray},
	{"getBinormalArray", &luna_wrapper_osgUtil_TangentSpaceGenerator::_bind_getBinormalArray},
	{"setBinormalArray", &luna_wrapper_osgUtil_TangentSpaceGenerator::_bind_setBinormalArray},
	{"getIndices", &luna_wrapper_osgUtil_TangentSpaceGenerator::_bind_getIndices},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::TangentSpaceGenerator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_TangentSpaceGenerator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::TangentSpaceGenerator >::enumValues[] = {
	{0,0}
};


