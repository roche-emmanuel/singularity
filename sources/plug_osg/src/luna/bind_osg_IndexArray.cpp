#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_IndexArray.h>

class luna_wrapper_osg_IndexArray {
public:
	typedef Luna< osg::IndexArray > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

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
		//osg::IndexArray* ptr= dynamic_cast< osg::IndexArray* >(Luna< osg::Referenced >::check(L,1));
		osg::IndexArray* ptr= luna_caster< osg::Referenced, osg::IndexArray >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::IndexArray >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_trim(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool osg::IndexArray::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::IndexArray::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::IndexArray::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::IndexArray* self=Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::IndexArray::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::IndexArray::index(unsigned int pos) const
	static int _bind_index(lua_State *L) {
		if (!_lg_typecheck_index(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::IndexArray::index(unsigned int pos) const function, expected prototype:\nunsigned int osg::IndexArray::index(unsigned int pos) const\nClass arguments details:\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::IndexArray* self=Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::IndexArray::index(unsigned int) const");
		}
		unsigned int lret = self->index(pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::IndexArray::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::IndexArray::base_setName(const std::string & name) function, expected prototype:\nvoid osg::IndexArray::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::IndexArray* self=Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::IndexArray::base_setName(const std::string &)");
		}
		self->IndexArray::setName(name);

		return 0;
	}

	// void osg::IndexArray::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::IndexArray::base_computeDataVariance() function, expected prototype:\nvoid osg::IndexArray::base_computeDataVariance()\nClass arguments details:\n");
		}


		osg::IndexArray* self=Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::IndexArray::base_computeDataVariance()");
		}
		self->IndexArray::computeDataVariance();

		return 0;
	}

	// void osg::IndexArray::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::IndexArray::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::IndexArray::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::IndexArray* self=Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::IndexArray::base_setUserData(osg::Referenced *)");
		}
		self->IndexArray::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::IndexArray::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::IndexArray::base_getUserData() function, expected prototype:\nosg::Referenced * osg::IndexArray::base_getUserData()\nClass arguments details:\n");
		}


		osg::IndexArray* self=Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::IndexArray::base_getUserData()");
		}
		osg::Referenced * lret = self->IndexArray::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::IndexArray::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::IndexArray::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::IndexArray::base_getUserData() const\nClass arguments details:\n");
		}


		osg::IndexArray* self=Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::IndexArray::base_getUserData() const");
		}
		const osg::Referenced * lret = self->IndexArray::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::IndexArray::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::IndexArray::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::IndexArray::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::IndexArray::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::IndexArray* self=Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::IndexArray::base_releaseGLObjects(osg::State *) const");
		}
		self->IndexArray::releaseGLObjects(state);

		return 0;
	}

	// const char * osg::IndexArray::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::IndexArray::base_libraryName() const function, expected prototype:\nconst char * osg::IndexArray::base_libraryName() const\nClass arguments details:\n");
		}


		osg::IndexArray* self=Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::IndexArray::base_libraryName() const");
		}
		const char * lret = self->IndexArray::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::IndexArray::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::IndexArray::base_className() const function, expected prototype:\nconst char * osg::IndexArray::base_className() const\nClass arguments details:\n");
		}


		osg::IndexArray* self=Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::IndexArray::base_className() const");
		}
		const char * lret = self->IndexArray::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::IndexArray::base_trim()
	static int _bind_base_trim(lua_State *L) {
		if (!_lg_typecheck_base_trim(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::IndexArray::base_trim() function, expected prototype:\nvoid osg::IndexArray::base_trim()\nClass arguments details:\n");
		}


		osg::IndexArray* self=Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::IndexArray::base_trim()");
		}
		self->IndexArray::trim();

		return 0;
	}

	// bool osg::IndexArray::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::IndexArray::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::IndexArray::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::IndexArray* self=Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::IndexArray::base_isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->IndexArray::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osg::IndexArray* LunaTraits< osg::IndexArray >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// unsigned int osg::IndexArray::index(unsigned int pos) const
	// void osg::Array::accept(osg::ArrayVisitor & arg1)
	// void osg::Array::accept(osg::ConstArrayVisitor & arg1) const
	// void osg::Array::accept(unsigned int index, osg::ValueVisitor & arg2)
	// void osg::Array::accept(unsigned int index, osg::ConstValueVisitor & arg2) const
	// int osg::Array::compare(unsigned int lhs, unsigned int rhs) const
	// const void * osg::Array::getDataPointer() const
	// unsigned int osg::Array::getTotalDataSize() const
	// unsigned int osg::Array::getNumElements() const
	// const void * osg::BufferData::getDataPointer() const
	// unsigned int osg::BufferData::getTotalDataSize() const
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
}

void LunaTraits< osg::IndexArray >::_bind_dtor(osg::IndexArray* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::IndexArray >::className[] = "IndexArray";
const char LunaTraits< osg::IndexArray >::fullName[] = "osg::IndexArray";
const char LunaTraits< osg::IndexArray >::moduleName[] = "osg";
const char* LunaTraits< osg::IndexArray >::parents[] = {"osg.Array", 0};
const int LunaTraits< osg::IndexArray >::hash = 8373938;
const int LunaTraits< osg::IndexArray >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::IndexArray >::methods[] = {
	{"isSameKindAs", &luna_wrapper_osg_IndexArray::_bind_isSameKindAs},
	{"index", &luna_wrapper_osg_IndexArray::_bind_index},
	{"base_setName", &luna_wrapper_osg_IndexArray::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_IndexArray::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_IndexArray::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_IndexArray::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_IndexArray::_bind_base_releaseGLObjects},
	{"base_libraryName", &luna_wrapper_osg_IndexArray::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_IndexArray::_bind_base_className},
	{"base_trim", &luna_wrapper_osg_IndexArray::_bind_base_trim},
	{"base_isSameKindAs", &luna_wrapper_osg_IndexArray::_bind_base_isSameKindAs},
	{"__eq", &luna_wrapper_osg_IndexArray::_bind___eq},
	{"getTable", &luna_wrapper_osg_IndexArray::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::IndexArray >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_IndexArray::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::IndexArray >::enumValues[] = {
	{0,0}
};


