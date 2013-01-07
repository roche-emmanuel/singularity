#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_DrawElements.h>

class luna_wrapper_osg_DrawElements {
public:
	typedef Luna< osg::DrawElements > luna_t;

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
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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
		//osg::DrawElements* ptr= dynamic_cast< osg::DrawElements* >(Luna< osg::Referenced >::check(L,1));
		osg::DrawElements* ptr= luna_caster< osg::Referenced, osg::DrawElements >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::DrawElements >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::DrawElements >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getDrawElements_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDrawElements_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setElementBufferObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElementBufferObject_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getElementBufferObject_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reserveElements(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addElement(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_base_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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

	inline static bool _lg_typecheck_base_getDataPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getTotalDataSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_supportsBufferObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getNumPrimitives(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_computeRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getDrawElements_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getDrawElements_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::DrawElements::DrawElements(lua_Table * data, osg::PrimitiveSet::Type primType = osg::PrimitiveSet::PrimitiveType, unsigned int mode = 0, int numInstances = 0)
	static osg::DrawElements* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DrawElements::DrawElements(lua_Table * data, osg::PrimitiveSet::Type primType = osg::PrimitiveSet::PrimitiveType, unsigned int mode = 0, int numInstances = 0) function, expected prototype:\nosg::DrawElements::DrawElements(lua_Table * data, osg::PrimitiveSet::Type primType = osg::PrimitiveSet::PrimitiveType, unsigned int mode = 0, int numInstances = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		osg::PrimitiveSet::Type primType=luatop>1 ? (osg::PrimitiveSet::Type)lua_tointeger(L,2) : osg::PrimitiveSet::PrimitiveType;
		unsigned int mode=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 0;
		int numInstances=luatop>3 ? (int)lua_tointeger(L,4) : 0;

		return new wrapper_osg_DrawElements(L,NULL, primType, mode, numInstances);
	}

	// osg::DrawElements::DrawElements(lua_Table * data, const osg::DrawElements & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::DrawElements* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DrawElements::DrawElements(lua_Table * data, const osg::DrawElements & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::DrawElements::DrawElements(lua_Table * data, const osg::DrawElements & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::DrawElements* copy_ptr=(Luna< osg::Referenced >::checkSubType< osg::DrawElements >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osg::DrawElements::DrawElements function");
		}
		const osg::DrawElements & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::DrawElements::DrawElements function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_DrawElements(L,NULL, copy, copyop);
	}

	// Overload binder for osg::DrawElements::DrawElements
	static osg::DrawElements* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function DrawElements, cannot match any of the overloads for function DrawElements:\n  DrawElements(lua_Table *, osg::PrimitiveSet::Type, unsigned int, int)\n  DrawElements(lua_Table *, const osg::DrawElements &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::DrawElements * osg::DrawElements::getDrawElements()
	static int _bind_getDrawElements_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDrawElements_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DrawElements * osg::DrawElements::getDrawElements() function, expected prototype:\nosg::DrawElements * osg::DrawElements::getDrawElements()\nClass arguments details:\n");
		}


		osg::DrawElements* self=Luna< osg::Referenced >::checkSubType< osg::DrawElements >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::DrawElements * osg::DrawElements::getDrawElements(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::DrawElements * lret = self->getDrawElements();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DrawElements >::push(L,lret,false);

		return 1;
	}

	// const osg::DrawElements * osg::DrawElements::getDrawElements() const
	static int _bind_getDrawElements_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDrawElements_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::DrawElements * osg::DrawElements::getDrawElements() const function, expected prototype:\nconst osg::DrawElements * osg::DrawElements::getDrawElements() const\nClass arguments details:\n");
		}


		osg::DrawElements* self=Luna< osg::Referenced >::checkSubType< osg::DrawElements >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::DrawElements * osg::DrawElements::getDrawElements() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::DrawElements * lret = self->getDrawElements();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DrawElements >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DrawElements::getDrawElements
	static int _bind_getDrawElements(lua_State *L) {
		if (_lg_typecheck_getDrawElements_overload_1(L)) return _bind_getDrawElements_overload_1(L);
		if (_lg_typecheck_getDrawElements_overload_2(L)) return _bind_getDrawElements_overload_2(L);

		luaL_error(L, "error in function getDrawElements, cannot match any of the overloads for function getDrawElements:\n  getDrawElements()\n  getDrawElements()\n");
		return 0;
	}

	// void osg::DrawElements::setElementBufferObject(osg::ElementBufferObject * ebo)
	static int _bind_setElementBufferObject(lua_State *L) {
		if (!_lg_typecheck_setElementBufferObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawElements::setElementBufferObject(osg::ElementBufferObject * ebo) function, expected prototype:\nvoid osg::DrawElements::setElementBufferObject(osg::ElementBufferObject * ebo)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ElementBufferObject* ebo=(Luna< osg::Referenced >::checkSubType< osg::ElementBufferObject >(L,2));

		osg::DrawElements* self=Luna< osg::Referenced >::checkSubType< osg::DrawElements >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElements::setElementBufferObject(osg::ElementBufferObject *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setElementBufferObject(ebo);

		return 0;
	}

	// osg::ElementBufferObject * osg::DrawElements::getElementBufferObject()
	static int _bind_getElementBufferObject_overload_1(lua_State *L) {
		if (!_lg_typecheck_getElementBufferObject_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ElementBufferObject * osg::DrawElements::getElementBufferObject() function, expected prototype:\nosg::ElementBufferObject * osg::DrawElements::getElementBufferObject()\nClass arguments details:\n");
		}


		osg::DrawElements* self=Luna< osg::Referenced >::checkSubType< osg::DrawElements >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ElementBufferObject * osg::DrawElements::getElementBufferObject(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::ElementBufferObject * lret = self->getElementBufferObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ElementBufferObject >::push(L,lret,false);

		return 1;
	}

	// const osg::ElementBufferObject * osg::DrawElements::getElementBufferObject() const
	static int _bind_getElementBufferObject_overload_2(lua_State *L) {
		if (!_lg_typecheck_getElementBufferObject_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::ElementBufferObject * osg::DrawElements::getElementBufferObject() const function, expected prototype:\nconst osg::ElementBufferObject * osg::DrawElements::getElementBufferObject() const\nClass arguments details:\n");
		}


		osg::DrawElements* self=Luna< osg::Referenced >::checkSubType< osg::DrawElements >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::ElementBufferObject * osg::DrawElements::getElementBufferObject() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::ElementBufferObject * lret = self->getElementBufferObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ElementBufferObject >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DrawElements::getElementBufferObject
	static int _bind_getElementBufferObject(lua_State *L) {
		if (_lg_typecheck_getElementBufferObject_overload_1(L)) return _bind_getElementBufferObject_overload_1(L);
		if (_lg_typecheck_getElementBufferObject_overload_2(L)) return _bind_getElementBufferObject_overload_2(L);

		luaL_error(L, "error in function getElementBufferObject, cannot match any of the overloads for function getElementBufferObject:\n  getElementBufferObject()\n  getElementBufferObject()\n");
		return 0;
	}

	// void osg::DrawElements::reserveElements(unsigned int numIndices)
	static int _bind_reserveElements(lua_State *L) {
		if (!_lg_typecheck_reserveElements(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawElements::reserveElements(unsigned int numIndices) function, expected prototype:\nvoid osg::DrawElements::reserveElements(unsigned int numIndices)\nClass arguments details:\n");
		}

		unsigned int numIndices=(unsigned int)lua_tointeger(L,2);

		osg::DrawElements* self=Luna< osg::Referenced >::checkSubType< osg::DrawElements >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElements::reserveElements(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->reserveElements(numIndices);

		return 0;
	}

	// void osg::DrawElements::setElement(unsigned int arg1, unsigned int arg2)
	static int _bind_setElement(lua_State *L) {
		if (!_lg_typecheck_setElement(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawElements::setElement(unsigned int arg1, unsigned int arg2) function, expected prototype:\nvoid osg::DrawElements::setElement(unsigned int arg1, unsigned int arg2)\nClass arguments details:\n");
		}

		unsigned _arg1=(unsigned)lua_tointeger(L,2);
		unsigned _arg2=(unsigned)lua_tointeger(L,3);

		osg::DrawElements* self=Luna< osg::Referenced >::checkSubType< osg::DrawElements >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElements::setElement(unsigned int, unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setElement(_arg1, _arg2);

		return 0;
	}

	// unsigned int osg::DrawElements::getElement(unsigned int arg1)
	static int _bind_getElement(lua_State *L) {
		if (!_lg_typecheck_getElement(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawElements::getElement(unsigned int arg1) function, expected prototype:\nunsigned int osg::DrawElements::getElement(unsigned int arg1)\nClass arguments details:\n");
		}

		unsigned _arg1=(unsigned)lua_tointeger(L,2);

		osg::DrawElements* self=Luna< osg::Referenced >::checkSubType< osg::DrawElements >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawElements::getElement(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->getElement(_arg1);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DrawElements::addElement(unsigned int arg1)
	static int _bind_addElement(lua_State *L) {
		if (!_lg_typecheck_addElement(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawElements::addElement(unsigned int arg1) function, expected prototype:\nvoid osg::DrawElements::addElement(unsigned int arg1)\nClass arguments details:\n");
		}

		unsigned _arg1=(unsigned)lua_tointeger(L,2);

		osg::DrawElements* self=Luna< osg::Referenced >::checkSubType< osg::DrawElements >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElements::addElement(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->addElement(_arg1);

		return 0;
	}

	// void osg::DrawElements::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawElements::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::DrawElements::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::DrawElements* self=Luna< osg::Referenced >::checkSubType< osg::DrawElements >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElements::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->DrawElements::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::DrawElements::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawElements::base_setName(const std::string & name) function, expected prototype:\nvoid osg::DrawElements::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::DrawElements* self=Luna< osg::Referenced >::checkSubType< osg::DrawElements >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElements::base_setName(const std::string &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->DrawElements::setName(name);

		return 0;
	}

	// void osg::DrawElements::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawElements::base_computeDataVariance() function, expected prototype:\nvoid osg::DrawElements::base_computeDataVariance()\nClass arguments details:\n");
		}


		osg::DrawElements* self=Luna< osg::Referenced >::checkSubType< osg::DrawElements >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElements::base_computeDataVariance(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->DrawElements::computeDataVariance();

		return 0;
	}

	// void osg::DrawElements::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawElements::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::DrawElements::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::DrawElements* self=Luna< osg::Referenced >::checkSubType< osg::DrawElements >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElements::base_setUserData(osg::Referenced *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->DrawElements::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::DrawElements::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::DrawElements::base_getUserData() function, expected prototype:\nosg::Referenced * osg::DrawElements::base_getUserData()\nClass arguments details:\n");
		}


		osg::DrawElements* self=Luna< osg::Referenced >::checkSubType< osg::DrawElements >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::DrawElements::base_getUserData(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Referenced * lret = self->DrawElements::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::DrawElements::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::DrawElements::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::DrawElements::base_getUserData() const\nClass arguments details:\n");
		}


		osg::DrawElements* self=Luna< osg::Referenced >::checkSubType< osg::DrawElements >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::DrawElements::base_getUserData() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::Referenced * lret = self->DrawElements::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DrawElements::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::DrawElements::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawElements::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::DrawElements::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::DrawElements* self=Luna< osg::Referenced >::checkSubType< osg::DrawElements >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElements::base_releaseGLObjects(osg::State *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->DrawElements::releaseGLObjects(state);

		return 0;
	}

	// bool osg::DrawElements::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::DrawElements::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::DrawElements::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::DrawElements* self=Luna< osg::Referenced >::checkSubType< osg::DrawElements >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::DrawElements::base_isSameKindAs(const osg::Object *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->DrawElements::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::DrawElements::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::DrawElements::base_libraryName() const function, expected prototype:\nconst char * osg::DrawElements::base_libraryName() const\nClass arguments details:\n");
		}


		osg::DrawElements* self=Luna< osg::Referenced >::checkSubType< osg::DrawElements >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::DrawElements::base_libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->DrawElements::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::DrawElements::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::DrawElements::base_className() const function, expected prototype:\nconst char * osg::DrawElements::base_className() const\nClass arguments details:\n");
		}


		osg::DrawElements* self=Luna< osg::Referenced >::checkSubType< osg::DrawElements >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::DrawElements::base_className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->DrawElements::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const void * osg::DrawElements::base_getDataPointer() const
	static int _bind_base_getDataPointer(lua_State *L) {
		if (!_lg_typecheck_base_getDataPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const void * osg::DrawElements::base_getDataPointer() const function, expected prototype:\nconst void * osg::DrawElements::base_getDataPointer() const\nClass arguments details:\n");
		}


		osg::DrawElements* self=Luna< osg::Referenced >::checkSubType< osg::DrawElements >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const void * osg::DrawElements::base_getDataPointer() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const void * lret = self->DrawElements::getDataPointer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// unsigned int osg::DrawElements::base_getTotalDataSize() const
	static int _bind_base_getTotalDataSize(lua_State *L) {
		if (!_lg_typecheck_base_getTotalDataSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawElements::base_getTotalDataSize() const function, expected prototype:\nunsigned int osg::DrawElements::base_getTotalDataSize() const\nClass arguments details:\n");
		}


		osg::DrawElements* self=Luna< osg::Referenced >::checkSubType< osg::DrawElements >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawElements::base_getTotalDataSize() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->DrawElements::getTotalDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::DrawElements::base_supportsBufferObject() const
	static int _bind_base_supportsBufferObject(lua_State *L) {
		if (!_lg_typecheck_base_supportsBufferObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::DrawElements::base_supportsBufferObject() const function, expected prototype:\nbool osg::DrawElements::base_supportsBufferObject() const\nClass arguments details:\n");
		}


		osg::DrawElements* self=Luna< osg::Referenced >::checkSubType< osg::DrawElements >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::DrawElements::base_supportsBufferObject() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->DrawElements::supportsBufferObject();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::DrawElements::base_getNumPrimitives() const
	static int _bind_base_getNumPrimitives(lua_State *L) {
		if (!_lg_typecheck_base_getNumPrimitives(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawElements::base_getNumPrimitives() const function, expected prototype:\nunsigned int osg::DrawElements::base_getNumPrimitives() const\nClass arguments details:\n");
		}


		osg::DrawElements* self=Luna< osg::Referenced >::checkSubType< osg::DrawElements >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawElements::base_getNumPrimitives() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->DrawElements::getNumPrimitives();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DrawElements::base_computeRange() const
	static int _bind_base_computeRange(lua_State *L) {
		if (!_lg_typecheck_base_computeRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawElements::base_computeRange() const function, expected prototype:\nvoid osg::DrawElements::base_computeRange() const\nClass arguments details:\n");
		}


		osg::DrawElements* self=Luna< osg::Referenced >::checkSubType< osg::DrawElements >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElements::base_computeRange() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->DrawElements::computeRange();

		return 0;
	}

	// osg::DrawElements * osg::DrawElements::base_getDrawElements()
	static int _bind_base_getDrawElements_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getDrawElements_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DrawElements * osg::DrawElements::base_getDrawElements() function, expected prototype:\nosg::DrawElements * osg::DrawElements::base_getDrawElements()\nClass arguments details:\n");
		}


		osg::DrawElements* self=Luna< osg::Referenced >::checkSubType< osg::DrawElements >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::DrawElements * osg::DrawElements::base_getDrawElements(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::DrawElements * lret = self->DrawElements::getDrawElements();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DrawElements >::push(L,lret,false);

		return 1;
	}

	// const osg::DrawElements * osg::DrawElements::base_getDrawElements() const
	static int _bind_base_getDrawElements_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getDrawElements_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::DrawElements * osg::DrawElements::base_getDrawElements() const function, expected prototype:\nconst osg::DrawElements * osg::DrawElements::base_getDrawElements() const\nClass arguments details:\n");
		}


		osg::DrawElements* self=Luna< osg::Referenced >::checkSubType< osg::DrawElements >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::DrawElements * osg::DrawElements::base_getDrawElements() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::DrawElements * lret = self->DrawElements::getDrawElements();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DrawElements >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DrawElements::base_getDrawElements
	static int _bind_base_getDrawElements(lua_State *L) {
		if (_lg_typecheck_base_getDrawElements_overload_1(L)) return _bind_base_getDrawElements_overload_1(L);
		if (_lg_typecheck_base_getDrawElements_overload_2(L)) return _bind_base_getDrawElements_overload_2(L);

		luaL_error(L, "error in function base_getDrawElements, cannot match any of the overloads for function base_getDrawElements:\n  base_getDrawElements()\n  base_getDrawElements()\n");
		return 0;
	}


	// Operator binds:

};

osg::DrawElements* LunaTraits< osg::DrawElements >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_DrawElements::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osg::DrawElements::reserveElements(unsigned int numIndices)
	// void osg::DrawElements::setElement(unsigned int arg1, unsigned int arg2)
	// unsigned int osg::DrawElements::getElement(unsigned int arg1)
	// void osg::DrawElements::addElement(unsigned int arg1)
	// void osg::PrimitiveSet::draw(osg::State & state, bool useVertexBufferObjects) const
	// void osg::PrimitiveSet::accept(PrimitiveFunctor & functor) const
	// void osg::PrimitiveSet::accept(PrimitiveIndexFunctor & functor) const
	// unsigned int osg::PrimitiveSet::index(unsigned int pos) const
	// unsigned int osg::PrimitiveSet::getNumIndices() const
	// void osg::PrimitiveSet::offsetIndices(int offset)
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
}

void LunaTraits< osg::DrawElements >::_bind_dtor(osg::DrawElements* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::DrawElements >::className[] = "DrawElements";
const char LunaTraits< osg::DrawElements >::fullName[] = "osg::DrawElements";
const char LunaTraits< osg::DrawElements >::moduleName[] = "osg";
const char* LunaTraits< osg::DrawElements >::parents[] = {"osg.PrimitiveSet", 0};
const int LunaTraits< osg::DrawElements >::hash = 7184520;
const int LunaTraits< osg::DrawElements >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::DrawElements >::methods[] = {
	{"getDrawElements", &luna_wrapper_osg_DrawElements::_bind_getDrawElements},
	{"setElementBufferObject", &luna_wrapper_osg_DrawElements::_bind_setElementBufferObject},
	{"getElementBufferObject", &luna_wrapper_osg_DrawElements::_bind_getElementBufferObject},
	{"reserveElements", &luna_wrapper_osg_DrawElements::_bind_reserveElements},
	{"setElement", &luna_wrapper_osg_DrawElements::_bind_setElement},
	{"getElement", &luna_wrapper_osg_DrawElements::_bind_getElement},
	{"addElement", &luna_wrapper_osg_DrawElements::_bind_addElement},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_DrawElements::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_DrawElements::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_DrawElements::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_DrawElements::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_DrawElements::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_DrawElements::_bind_base_releaseGLObjects},
	{"base_isSameKindAs", &luna_wrapper_osg_DrawElements::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_DrawElements::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_DrawElements::_bind_base_className},
	{"base_getDataPointer", &luna_wrapper_osg_DrawElements::_bind_base_getDataPointer},
	{"base_getTotalDataSize", &luna_wrapper_osg_DrawElements::_bind_base_getTotalDataSize},
	{"base_supportsBufferObject", &luna_wrapper_osg_DrawElements::_bind_base_supportsBufferObject},
	{"base_getNumPrimitives", &luna_wrapper_osg_DrawElements::_bind_base_getNumPrimitives},
	{"base_computeRange", &luna_wrapper_osg_DrawElements::_bind_base_computeRange},
	{"base_getDrawElements", &luna_wrapper_osg_DrawElements::_bind_base_getDrawElements},
	{"__eq", &luna_wrapper_osg_DrawElements::_bind___eq},
	{"getTable", &luna_wrapper_osg_DrawElements::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::DrawElements >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_DrawElements::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::DrawElements >::enumValues[] = {
	{0,0}
};


