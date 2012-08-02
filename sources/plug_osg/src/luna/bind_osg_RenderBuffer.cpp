#include <plug_common.h>

class luna_wrapper_osg_RenderBuffer {
public:
	typedef Luna< osg::RenderBuffer > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::RenderBuffer* ptr= dynamic_cast< osg::RenderBuffer* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::RenderBuffer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInternalFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setInternalFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSamples(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getColorSamples(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSamples(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setColorSamples(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getObjectID(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_deleteRenderBuffer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_flushDeletedRenderBuffers(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_discardDeletedRenderBuffers(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaxSamples(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::RenderBuffer::RenderBuffer()
	static osg::RenderBuffer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RenderBuffer::RenderBuffer() function, expected prototype:\nosg::RenderBuffer::RenderBuffer()\nClass arguments details:\n");
		}


		return new osg::RenderBuffer();
	}

	// osg::RenderBuffer::RenderBuffer(int width, int height, unsigned int internalFormat, int samples = 0, int colorSamples = 0)
	static osg::RenderBuffer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RenderBuffer::RenderBuffer(int width, int height, unsigned int internalFormat, int samples = 0, int colorSamples = 0) function, expected prototype:\nosg::RenderBuffer::RenderBuffer(int width, int height, unsigned int internalFormat, int samples = 0, int colorSamples = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,1);
		int height=(int)lua_tointeger(L,2);
		unsigned int internalFormat=(unsigned int)lua_tointeger(L,3);
		int samples=luatop>3 ? (int)lua_tointeger(L,4) : 0;
		int colorSamples=luatop>4 ? (int)lua_tointeger(L,5) : 0;

		return new osg::RenderBuffer(width, height, internalFormat, samples, colorSamples);
	}

	// osg::RenderBuffer::RenderBuffer(const osg::RenderBuffer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::RenderBuffer* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RenderBuffer::RenderBuffer(const osg::RenderBuffer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::RenderBuffer::RenderBuffer(const osg::RenderBuffer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::RenderBuffer* copy_ptr=dynamic_cast< osg::RenderBuffer* >(Luna< osg::Referenced >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osg::RenderBuffer::RenderBuffer function");
		}
		const osg::RenderBuffer & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::RenderBuffer::RenderBuffer function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::RenderBuffer(copy, copyop);
	}

	// Overload binder for osg::RenderBuffer::RenderBuffer
	static osg::RenderBuffer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function RenderBuffer, cannot match any of the overloads for function RenderBuffer:\n  RenderBuffer()\n  RenderBuffer(int, int, unsigned int, int, int)\n  RenderBuffer(const osg::RenderBuffer &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::RenderBuffer::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::RenderBuffer::cloneType() const function, expected prototype:\nosg::Object * osg::RenderBuffer::cloneType() const\nClass arguments details:\n");
		}


		osg::RenderBuffer* self=dynamic_cast< osg::RenderBuffer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::RenderBuffer::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::RenderBuffer::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::RenderBuffer::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::RenderBuffer::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::RenderBuffer::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::RenderBuffer* self=dynamic_cast< osg::RenderBuffer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::RenderBuffer::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::RenderBuffer::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::RenderBuffer::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::RenderBuffer::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::RenderBuffer* self=dynamic_cast< osg::RenderBuffer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::RenderBuffer::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::RenderBuffer::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::RenderBuffer::libraryName() const function, expected prototype:\nconst char * osg::RenderBuffer::libraryName() const\nClass arguments details:\n");
		}


		osg::RenderBuffer* self=dynamic_cast< osg::RenderBuffer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::RenderBuffer::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::RenderBuffer::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::RenderBuffer::className() const function, expected prototype:\nconst char * osg::RenderBuffer::className() const\nClass arguments details:\n");
		}


		osg::RenderBuffer* self=dynamic_cast< osg::RenderBuffer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::RenderBuffer::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// int osg::RenderBuffer::getWidth() const
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::RenderBuffer::getWidth() const function, expected prototype:\nint osg::RenderBuffer::getWidth() const\nClass arguments details:\n");
		}


		osg::RenderBuffer* self=dynamic_cast< osg::RenderBuffer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::RenderBuffer::getWidth() const");
		}
		int lret = self->getWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::RenderBuffer::getHeight() const
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::RenderBuffer::getHeight() const function, expected prototype:\nint osg::RenderBuffer::getHeight() const\nClass arguments details:\n");
		}


		osg::RenderBuffer* self=dynamic_cast< osg::RenderBuffer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::RenderBuffer::getHeight() const");
		}
		int lret = self->getHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::RenderBuffer::setWidth(int w)
	static int _bind_setWidth(lua_State *L) {
		if (!_lg_typecheck_setWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::RenderBuffer::setWidth(int w) function, expected prototype:\nvoid osg::RenderBuffer::setWidth(int w)\nClass arguments details:\n");
		}

		int w=(int)lua_tointeger(L,2);

		osg::RenderBuffer* self=dynamic_cast< osg::RenderBuffer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::RenderBuffer::setWidth(int)");
		}
		self->setWidth(w);

		return 0;
	}

	// void osg::RenderBuffer::setHeight(int h)
	static int _bind_setHeight(lua_State *L) {
		if (!_lg_typecheck_setHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::RenderBuffer::setHeight(int h) function, expected prototype:\nvoid osg::RenderBuffer::setHeight(int h)\nClass arguments details:\n");
		}

		int h=(int)lua_tointeger(L,2);

		osg::RenderBuffer* self=dynamic_cast< osg::RenderBuffer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::RenderBuffer::setHeight(int)");
		}
		self->setHeight(h);

		return 0;
	}

	// void osg::RenderBuffer::setSize(int w, int h)
	static int _bind_setSize(lua_State *L) {
		if (!_lg_typecheck_setSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::RenderBuffer::setSize(int w, int h) function, expected prototype:\nvoid osg::RenderBuffer::setSize(int w, int h)\nClass arguments details:\n");
		}

		int w=(int)lua_tointeger(L,2);
		int h=(int)lua_tointeger(L,3);

		osg::RenderBuffer* self=dynamic_cast< osg::RenderBuffer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::RenderBuffer::setSize(int, int)");
		}
		self->setSize(w, h);

		return 0;
	}

	// unsigned int osg::RenderBuffer::getInternalFormat() const
	static int _bind_getInternalFormat(lua_State *L) {
		if (!_lg_typecheck_getInternalFormat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::RenderBuffer::getInternalFormat() const function, expected prototype:\nunsigned int osg::RenderBuffer::getInternalFormat() const\nClass arguments details:\n");
		}


		osg::RenderBuffer* self=dynamic_cast< osg::RenderBuffer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::RenderBuffer::getInternalFormat() const");
		}
		unsigned int lret = self->getInternalFormat();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::RenderBuffer::setInternalFormat(unsigned int format)
	static int _bind_setInternalFormat(lua_State *L) {
		if (!_lg_typecheck_setInternalFormat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::RenderBuffer::setInternalFormat(unsigned int format) function, expected prototype:\nvoid osg::RenderBuffer::setInternalFormat(unsigned int format)\nClass arguments details:\n");
		}

		unsigned int format=(unsigned int)lua_tointeger(L,2);

		osg::RenderBuffer* self=dynamic_cast< osg::RenderBuffer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::RenderBuffer::setInternalFormat(unsigned int)");
		}
		self->setInternalFormat(format);

		return 0;
	}

	// int osg::RenderBuffer::getSamples() const
	static int _bind_getSamples(lua_State *L) {
		if (!_lg_typecheck_getSamples(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::RenderBuffer::getSamples() const function, expected prototype:\nint osg::RenderBuffer::getSamples() const\nClass arguments details:\n");
		}


		osg::RenderBuffer* self=dynamic_cast< osg::RenderBuffer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::RenderBuffer::getSamples() const");
		}
		int lret = self->getSamples();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::RenderBuffer::getColorSamples() const
	static int _bind_getColorSamples(lua_State *L) {
		if (!_lg_typecheck_getColorSamples(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::RenderBuffer::getColorSamples() const function, expected prototype:\nint osg::RenderBuffer::getColorSamples() const\nClass arguments details:\n");
		}


		osg::RenderBuffer* self=dynamic_cast< osg::RenderBuffer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::RenderBuffer::getColorSamples() const");
		}
		int lret = self->getColorSamples();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::RenderBuffer::setSamples(int samples)
	static int _bind_setSamples(lua_State *L) {
		if (!_lg_typecheck_setSamples(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::RenderBuffer::setSamples(int samples) function, expected prototype:\nvoid osg::RenderBuffer::setSamples(int samples)\nClass arguments details:\n");
		}

		int samples=(int)lua_tointeger(L,2);

		osg::RenderBuffer* self=dynamic_cast< osg::RenderBuffer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::RenderBuffer::setSamples(int)");
		}
		self->setSamples(samples);

		return 0;
	}

	// void osg::RenderBuffer::setColorSamples(int colorSamples)
	static int _bind_setColorSamples(lua_State *L) {
		if (!_lg_typecheck_setColorSamples(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::RenderBuffer::setColorSamples(int colorSamples) function, expected prototype:\nvoid osg::RenderBuffer::setColorSamples(int colorSamples)\nClass arguments details:\n");
		}

		int colorSamples=(int)lua_tointeger(L,2);

		osg::RenderBuffer* self=dynamic_cast< osg::RenderBuffer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::RenderBuffer::setColorSamples(int)");
		}
		self->setColorSamples(colorSamples);

		return 0;
	}

	// unsigned int osg::RenderBuffer::getObjectID(unsigned int contextID, const osg::FBOExtensions * ext) const
	static int _bind_getObjectID(lua_State *L) {
		if (!_lg_typecheck_getObjectID(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::RenderBuffer::getObjectID(unsigned int contextID, const osg::FBOExtensions * ext) const function, expected prototype:\nunsigned int osg::RenderBuffer::getObjectID(unsigned int contextID, const osg::FBOExtensions * ext) const\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);
		const osg::FBOExtensions* ext=dynamic_cast< osg::FBOExtensions* >(Luna< osg::Referenced >::check(L,3));

		osg::RenderBuffer* self=dynamic_cast< osg::RenderBuffer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::RenderBuffer::getObjectID(unsigned int, const osg::FBOExtensions *) const");
		}
		unsigned int lret = self->getObjectID(contextID, ext);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::RenderBuffer::compare(const osg::RenderBuffer & rb) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::RenderBuffer::compare(const osg::RenderBuffer & rb) const function, expected prototype:\nint osg::RenderBuffer::compare(const osg::RenderBuffer & rb) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::RenderBuffer* rb_ptr=dynamic_cast< osg::RenderBuffer* >(Luna< osg::Referenced >::check(L,2));
		if( !rb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rb in osg::RenderBuffer::compare function");
		}
		const osg::RenderBuffer & rb=*rb_ptr;

		osg::RenderBuffer* self=dynamic_cast< osg::RenderBuffer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::RenderBuffer::compare(const osg::RenderBuffer &) const");
		}
		int lret = self->compare(rb);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::RenderBuffer::releaseGLObjects(osg::State *  = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::RenderBuffer::releaseGLObjects(osg::State *  = 0) const function, expected prototype:\nvoid osg::RenderBuffer::releaseGLObjects(osg::State *  = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2)) : (osg::State*)0;

		osg::RenderBuffer* self=dynamic_cast< osg::RenderBuffer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::RenderBuffer::releaseGLObjects(osg::State *) const");
		}
		self->releaseGLObjects(_arg1);

		return 0;
	}

	// static void osg::RenderBuffer::deleteRenderBuffer(unsigned int contextID, unsigned int rb)
	static int _bind_deleteRenderBuffer(lua_State *L) {
		if (!_lg_typecheck_deleteRenderBuffer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::RenderBuffer::deleteRenderBuffer(unsigned int contextID, unsigned int rb) function, expected prototype:\nstatic void osg::RenderBuffer::deleteRenderBuffer(unsigned int contextID, unsigned int rb)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		unsigned int rb=(unsigned int)lua_tointeger(L,2);

		osg::RenderBuffer::deleteRenderBuffer(contextID, rb);

		return 0;
	}

	// static void osg::RenderBuffer::flushDeletedRenderBuffers(unsigned int contextID, double currentTime, double & availableTime)
	static int _bind_flushDeletedRenderBuffers(lua_State *L) {
		if (!_lg_typecheck_flushDeletedRenderBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::RenderBuffer::flushDeletedRenderBuffers(unsigned int contextID, double currentTime, double & availableTime) function, expected prototype:\nstatic void osg::RenderBuffer::flushDeletedRenderBuffers(unsigned int contextID, double currentTime, double & availableTime)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		double currentTime=(double)lua_tonumber(L,2);
		double availableTime=(double)lua_tonumber(L,3);

		osg::RenderBuffer::flushDeletedRenderBuffers(contextID, currentTime, availableTime);

		return 0;
	}

	// static void osg::RenderBuffer::discardDeletedRenderBuffers(unsigned int contextID)
	static int _bind_discardDeletedRenderBuffers(lua_State *L) {
		if (!_lg_typecheck_discardDeletedRenderBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::RenderBuffer::discardDeletedRenderBuffers(unsigned int contextID) function, expected prototype:\nstatic void osg::RenderBuffer::discardDeletedRenderBuffers(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::RenderBuffer::discardDeletedRenderBuffers(contextID);

		return 0;
	}

	// static int osg::RenderBuffer::getMaxSamples(unsigned int contextID, const osg::FBOExtensions * ext)
	static int _bind_getMaxSamples(lua_State *L) {
		if (!_lg_typecheck_getMaxSamples(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static int osg::RenderBuffer::getMaxSamples(unsigned int contextID, const osg::FBOExtensions * ext) function, expected prototype:\nstatic int osg::RenderBuffer::getMaxSamples(unsigned int contextID, const osg::FBOExtensions * ext)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		const osg::FBOExtensions* ext=dynamic_cast< osg::FBOExtensions* >(Luna< osg::Referenced >::check(L,2));

		int lret = osg::RenderBuffer::getMaxSamples(contextID, ext);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::RenderBuffer* LunaTraits< osg::RenderBuffer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_RenderBuffer::_bind_ctor(L);
}

void LunaTraits< osg::RenderBuffer >::_bind_dtor(osg::RenderBuffer* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::RenderBuffer >::className[] = "RenderBuffer";
const char LunaTraits< osg::RenderBuffer >::fullName[] = "osg::RenderBuffer";
const char LunaTraits< osg::RenderBuffer >::moduleName[] = "osg";
const char* LunaTraits< osg::RenderBuffer >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::RenderBuffer >::hash = 3153589;
const int LunaTraits< osg::RenderBuffer >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::RenderBuffer >::methods[] = {
	{"cloneType", &luna_wrapper_osg_RenderBuffer::_bind_cloneType},
	{"clone", &luna_wrapper_osg_RenderBuffer::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_RenderBuffer::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_RenderBuffer::_bind_libraryName},
	{"className", &luna_wrapper_osg_RenderBuffer::_bind_className},
	{"getWidth", &luna_wrapper_osg_RenderBuffer::_bind_getWidth},
	{"getHeight", &luna_wrapper_osg_RenderBuffer::_bind_getHeight},
	{"setWidth", &luna_wrapper_osg_RenderBuffer::_bind_setWidth},
	{"setHeight", &luna_wrapper_osg_RenderBuffer::_bind_setHeight},
	{"setSize", &luna_wrapper_osg_RenderBuffer::_bind_setSize},
	{"getInternalFormat", &luna_wrapper_osg_RenderBuffer::_bind_getInternalFormat},
	{"setInternalFormat", &luna_wrapper_osg_RenderBuffer::_bind_setInternalFormat},
	{"getSamples", &luna_wrapper_osg_RenderBuffer::_bind_getSamples},
	{"getColorSamples", &luna_wrapper_osg_RenderBuffer::_bind_getColorSamples},
	{"setSamples", &luna_wrapper_osg_RenderBuffer::_bind_setSamples},
	{"setColorSamples", &luna_wrapper_osg_RenderBuffer::_bind_setColorSamples},
	{"getObjectID", &luna_wrapper_osg_RenderBuffer::_bind_getObjectID},
	{"compare", &luna_wrapper_osg_RenderBuffer::_bind_compare},
	{"releaseGLObjects", &luna_wrapper_osg_RenderBuffer::_bind_releaseGLObjects},
	{"deleteRenderBuffer", &luna_wrapper_osg_RenderBuffer::_bind_deleteRenderBuffer},
	{"flushDeletedRenderBuffers", &luna_wrapper_osg_RenderBuffer::_bind_flushDeletedRenderBuffers},
	{"discardDeletedRenderBuffers", &luna_wrapper_osg_RenderBuffer::_bind_discardDeletedRenderBuffers},
	{"getMaxSamples", &luna_wrapper_osg_RenderBuffer::_bind_getMaxSamples},
	{0,0}
};

luna_ConverterType LunaTraits< osg::RenderBuffer >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_RenderBuffer::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::RenderBuffer >::enumValues[] = {
	{0,0}
};


