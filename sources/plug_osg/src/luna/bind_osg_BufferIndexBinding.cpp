#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_BufferIndexBinding.h>

class luna_wrapper_osg_BufferIndexBinding {
public:
	typedef Luna< osg::BufferIndexBinding > luna_t;

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
		//osg::BufferIndexBinding* ptr= dynamic_cast< osg::BufferIndexBinding* >(Luna< osg::Referenced >::check(L,1));
		osg::BufferIndexBinding* ptr= luna_caster< osg::Referenced, osg::BufferIndexBinding >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::BufferIndexBinding >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_getMember(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTarget(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBufferObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBufferObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setOffset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOffset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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

	inline static bool _lg_typecheck_base_asTexture_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asTexture_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_isTextureAttribute(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_checkValidityOfAssociatedModes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_compileGLObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getMember(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// unsigned int osg::BufferIndexBinding::getMember() const
	static int _bind_getMember(lua_State *L) {
		if (!_lg_typecheck_getMember(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::BufferIndexBinding::getMember() const function, expected prototype:\nunsigned int osg::BufferIndexBinding::getMember() const\nClass arguments details:\n");
		}


		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::BufferIndexBinding::getMember() const");
		}
		unsigned int lret = self->getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::BufferIndexBinding::getTarget() const
	static int _bind_getTarget(lua_State *L) {
		if (!_lg_typecheck_getTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::BufferIndexBinding::getTarget() const function, expected prototype:\nunsigned int osg::BufferIndexBinding::getTarget() const\nClass arguments details:\n");
		}


		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::BufferIndexBinding::getTarget() const");
		}
		unsigned int lret = self->getTarget();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::BufferIndexBinding::getIndex() const
	static int _bind_getIndex(lua_State *L) {
		if (!_lg_typecheck_getIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::BufferIndexBinding::getIndex() const function, expected prototype:\nunsigned int osg::BufferIndexBinding::getIndex() const\nClass arguments details:\n");
		}


		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::BufferIndexBinding::getIndex() const");
		}
		unsigned int lret = self->getIndex();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::BufferIndexBinding::setBufferObject(osg::BufferObject * bo)
	static int _bind_setBufferObject(lua_State *L) {
		if (!_lg_typecheck_setBufferObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferIndexBinding::setBufferObject(osg::BufferObject * bo) function, expected prototype:\nvoid osg::BufferIndexBinding::setBufferObject(osg::BufferObject * bo)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::BufferObject* bo=(Luna< osg::Referenced >::checkSubType< osg::BufferObject >(L,2));

		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferIndexBinding::setBufferObject(osg::BufferObject *)");
		}
		self->setBufferObject(bo);

		return 0;
	}

	// osg::BufferObject * osg::BufferIndexBinding::getBufferObject() const
	static int _bind_getBufferObject(lua_State *L) {
		if (!_lg_typecheck_getBufferObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BufferObject * osg::BufferIndexBinding::getBufferObject() const function, expected prototype:\nosg::BufferObject * osg::BufferIndexBinding::getBufferObject() const\nClass arguments details:\n");
		}


		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BufferObject * osg::BufferIndexBinding::getBufferObject() const");
		}
		osg::BufferObject * lret = self->getBufferObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BufferObject >::push(L,lret,false);

		return 1;
	}

	// void osg::BufferIndexBinding::setOffset(int offset)
	static int _bind_setOffset(lua_State *L) {
		if (!_lg_typecheck_setOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferIndexBinding::setOffset(int offset) function, expected prototype:\nvoid osg::BufferIndexBinding::setOffset(int offset)\nClass arguments details:\n");
		}

		int offset=(int)lua_tointeger(L,2);

		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferIndexBinding::setOffset(int)");
		}
		self->setOffset(offset);

		return 0;
	}

	// int osg::BufferIndexBinding::getOffset() const
	static int _bind_getOffset(lua_State *L) {
		if (!_lg_typecheck_getOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::BufferIndexBinding::getOffset() const function, expected prototype:\nint osg::BufferIndexBinding::getOffset() const\nClass arguments details:\n");
		}


		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::BufferIndexBinding::getOffset() const");
		}
		int lret = self->getOffset();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::BufferIndexBinding::setSize(int size)
	static int _bind_setSize(lua_State *L) {
		if (!_lg_typecheck_setSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferIndexBinding::setSize(int size) function, expected prototype:\nvoid osg::BufferIndexBinding::setSize(int size)\nClass arguments details:\n");
		}

		int size=(int)lua_tointeger(L,2);

		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferIndexBinding::setSize(int)");
		}
		self->setSize(size);

		return 0;
	}

	// int osg::BufferIndexBinding::getSize() const
	static int _bind_getSize(lua_State *L) {
		if (!_lg_typecheck_getSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::BufferIndexBinding::getSize() const function, expected prototype:\nint osg::BufferIndexBinding::getSize() const\nClass arguments details:\n");
		}


		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::BufferIndexBinding::getSize() const");
		}
		int lret = self->getSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::BufferIndexBinding::apply(osg::State & arg1) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferIndexBinding::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::BufferIndexBinding::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BufferIndexBinding::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferIndexBinding::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::BufferIndexBinding::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferIndexBinding::base_setName(const std::string & name) function, expected prototype:\nvoid osg::BufferIndexBinding::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferIndexBinding::base_setName(const std::string &)");
		}
		self->BufferIndexBinding::setName(name);

		return 0;
	}

	// void osg::BufferIndexBinding::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferIndexBinding::base_computeDataVariance() function, expected prototype:\nvoid osg::BufferIndexBinding::base_computeDataVariance()\nClass arguments details:\n");
		}


		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferIndexBinding::base_computeDataVariance()");
		}
		self->BufferIndexBinding::computeDataVariance();

		return 0;
	}

	// void osg::BufferIndexBinding::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferIndexBinding::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::BufferIndexBinding::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferIndexBinding::base_setUserData(osg::Referenced *)");
		}
		self->BufferIndexBinding::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::BufferIndexBinding::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::BufferIndexBinding::base_getUserData() function, expected prototype:\nosg::Referenced * osg::BufferIndexBinding::base_getUserData()\nClass arguments details:\n");
		}


		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::BufferIndexBinding::base_getUserData()");
		}
		osg::Referenced * lret = self->BufferIndexBinding::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::BufferIndexBinding::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::BufferIndexBinding::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::BufferIndexBinding::base_getUserData() const\nClass arguments details:\n");
		}


		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::BufferIndexBinding::base_getUserData() const");
		}
		const osg::Referenced * lret = self->BufferIndexBinding::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::BufferIndexBinding::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// bool osg::BufferIndexBinding::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::BufferIndexBinding::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::BufferIndexBinding::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::BufferIndexBinding::base_isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->BufferIndexBinding::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::BufferIndexBinding::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::BufferIndexBinding::base_libraryName() const function, expected prototype:\nconst char * osg::BufferIndexBinding::base_libraryName() const\nClass arguments details:\n");
		}


		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::BufferIndexBinding::base_libraryName() const");
		}
		const char * lret = self->BufferIndexBinding::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::BufferIndexBinding::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::BufferIndexBinding::base_className() const function, expected prototype:\nconst char * osg::BufferIndexBinding::base_className() const\nClass arguments details:\n");
		}


		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::BufferIndexBinding::base_className() const");
		}
		const char * lret = self->BufferIndexBinding::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::Texture * osg::BufferIndexBinding::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::BufferIndexBinding::base_asTexture() function, expected prototype:\nosg::Texture * osg::BufferIndexBinding::base_asTexture()\nClass arguments details:\n");
		}


		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Texture * osg::BufferIndexBinding::base_asTexture()");
		}
		osg::Texture * lret = self->BufferIndexBinding::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::BufferIndexBinding::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::BufferIndexBinding::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::BufferIndexBinding::base_asTexture() const\nClass arguments details:\n");
		}


		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::BufferIndexBinding::base_asTexture() const");
		}
		const osg::Texture * lret = self->BufferIndexBinding::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::BufferIndexBinding::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// bool osg::BufferIndexBinding::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::BufferIndexBinding::base_isTextureAttribute() const function, expected prototype:\nbool osg::BufferIndexBinding::base_isTextureAttribute() const\nClass arguments details:\n");
		}


		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::BufferIndexBinding::base_isTextureAttribute() const");
		}
		bool lret = self->BufferIndexBinding::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::BufferIndexBinding::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::BufferIndexBinding::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::BufferIndexBinding::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BufferIndexBinding::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::BufferIndexBinding::base_getModeUsage(osg::StateAttribute::ModeUsage &) const");
		}
		bool lret = self->BufferIndexBinding::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::BufferIndexBinding::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::BufferIndexBinding::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::BufferIndexBinding::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BufferIndexBinding::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::BufferIndexBinding::base_checkValidityOfAssociatedModes(osg::State &) const");
		}
		bool lret = self->BufferIndexBinding::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::BufferIndexBinding::base_compileGLObjects(osg::State & arg1) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferIndexBinding::base_compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::BufferIndexBinding::base_compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BufferIndexBinding::base_compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferIndexBinding::base_compileGLObjects(osg::State &) const");
		}
		self->BufferIndexBinding::compileGLObjects(_arg1);

		return 0;
	}

	// void osg::BufferIndexBinding::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferIndexBinding::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::BufferIndexBinding::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferIndexBinding::base_releaseGLObjects(osg::State *) const");
		}
		self->BufferIndexBinding::releaseGLObjects(_arg1);

		return 0;
	}

	// unsigned int osg::BufferIndexBinding::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::BufferIndexBinding::base_getMember() const function, expected prototype:\nunsigned int osg::BufferIndexBinding::base_getMember() const\nClass arguments details:\n");
		}


		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::BufferIndexBinding::base_getMember() const");
		}
		unsigned int lret = self->BufferIndexBinding::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::BufferIndexBinding::base_apply(osg::State & arg1) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferIndexBinding::base_apply(osg::State & arg1) const function, expected prototype:\nvoid osg::BufferIndexBinding::base_apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BufferIndexBinding::base_apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferIndexBinding::base_apply(osg::State &) const");
		}
		self->BufferIndexBinding::apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::BufferIndexBinding* LunaTraits< osg::BufferIndexBinding >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// osg::Object * osg::StateAttribute::cloneType() const
	// osg::Object * osg::StateAttribute::clone(const osg::CopyOp & arg1) const
	// osg::StateAttribute::Type osg::StateAttribute::getType() const
	// int osg::StateAttribute::compare(const osg::StateAttribute & sa) const
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
}

void LunaTraits< osg::BufferIndexBinding >::_bind_dtor(osg::BufferIndexBinding* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::BufferIndexBinding >::className[] = "BufferIndexBinding";
const char LunaTraits< osg::BufferIndexBinding >::fullName[] = "osg::BufferIndexBinding";
const char LunaTraits< osg::BufferIndexBinding >::moduleName[] = "osg";
const char* LunaTraits< osg::BufferIndexBinding >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::BufferIndexBinding >::hash = 73994525;
const int LunaTraits< osg::BufferIndexBinding >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::BufferIndexBinding >::methods[] = {
	{"getMember", &luna_wrapper_osg_BufferIndexBinding::_bind_getMember},
	{"getTarget", &luna_wrapper_osg_BufferIndexBinding::_bind_getTarget},
	{"getIndex", &luna_wrapper_osg_BufferIndexBinding::_bind_getIndex},
	{"setBufferObject", &luna_wrapper_osg_BufferIndexBinding::_bind_setBufferObject},
	{"getBufferObject", &luna_wrapper_osg_BufferIndexBinding::_bind_getBufferObject},
	{"setOffset", &luna_wrapper_osg_BufferIndexBinding::_bind_setOffset},
	{"getOffset", &luna_wrapper_osg_BufferIndexBinding::_bind_getOffset},
	{"setSize", &luna_wrapper_osg_BufferIndexBinding::_bind_setSize},
	{"getSize", &luna_wrapper_osg_BufferIndexBinding::_bind_getSize},
	{"apply", &luna_wrapper_osg_BufferIndexBinding::_bind_apply},
	{"base_setName", &luna_wrapper_osg_BufferIndexBinding::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_BufferIndexBinding::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_BufferIndexBinding::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_BufferIndexBinding::_bind_base_getUserData},
	{"base_isSameKindAs", &luna_wrapper_osg_BufferIndexBinding::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_BufferIndexBinding::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_BufferIndexBinding::_bind_base_className},
	{"base_asTexture", &luna_wrapper_osg_BufferIndexBinding::_bind_base_asTexture},
	{"base_isTextureAttribute", &luna_wrapper_osg_BufferIndexBinding::_bind_base_isTextureAttribute},
	{"base_getModeUsage", &luna_wrapper_osg_BufferIndexBinding::_bind_base_getModeUsage},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_BufferIndexBinding::_bind_base_checkValidityOfAssociatedModes},
	{"base_compileGLObjects", &luna_wrapper_osg_BufferIndexBinding::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_BufferIndexBinding::_bind_base_releaseGLObjects},
	{"base_getMember", &luna_wrapper_osg_BufferIndexBinding::_bind_base_getMember},
	{"base_apply", &luna_wrapper_osg_BufferIndexBinding::_bind_base_apply},
	{"__eq", &luna_wrapper_osg_BufferIndexBinding::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::BufferIndexBinding >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_BufferIndexBinding::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::BufferIndexBinding >::enumValues[] = {
	{0,0}
};


