#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_DrawElementsUByte.h>

class luna_wrapper_osg_DrawElementsUByte {
public:
	typedef Luna< osg::DrawElementsUByte > luna_t;

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
		osg::DrawElementsUByte* ptr= dynamic_cast< osg::DrawElementsUByte* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::DrawElementsUByte >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!dynamic_cast< osg::DrawElementsUByte* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::DrawElementsUByte* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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

	inline static bool _lg_typecheck_getDataPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTotalDataSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_supportsBufferObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_draw(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumIndices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_offsetIndices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::DrawElementsUByte::DrawElementsUByte(unsigned int mode = 0)
	static osg::DrawElementsUByte* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DrawElementsUByte::DrawElementsUByte(unsigned int mode = 0) function, expected prototype:\nosg::DrawElementsUByte::DrawElementsUByte(unsigned int mode = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int mode=luatop>0 ? (unsigned int)lua_tointeger(L,1) : 0;

		return new osg::DrawElementsUByte(mode);
	}

	// osg::DrawElementsUByte::DrawElementsUByte(const osg::DrawElementsUByte & array, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::DrawElementsUByte* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DrawElementsUByte::DrawElementsUByte(const osg::DrawElementsUByte & array, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::DrawElementsUByte::DrawElementsUByte(const osg::DrawElementsUByte & array, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::DrawElementsUByte* array_ptr=dynamic_cast< osg::DrawElementsUByte* >(Luna< osg::Referenced >::check(L,1));
		if( !array_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg array in osg::DrawElementsUByte::DrawElementsUByte function");
		}
		const osg::DrawElementsUByte & array=*array_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::DrawElementsUByte::DrawElementsUByte function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::DrawElementsUByte(array, copyop);
	}

	// osg::DrawElementsUByte::DrawElementsUByte(unsigned int mode, unsigned int no, const unsigned char * ptr, int numInstances = 0)
	static osg::DrawElementsUByte* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DrawElementsUByte::DrawElementsUByte(unsigned int mode, unsigned int no, const unsigned char * ptr, int numInstances = 0) function, expected prototype:\nosg::DrawElementsUByte::DrawElementsUByte(unsigned int mode, unsigned int no, const unsigned char * ptr, int numInstances = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int mode=(unsigned int)lua_tointeger(L,1);
		unsigned int no=(unsigned int)lua_tointeger(L,2);
		unsigned char ptr = (unsigned char)(lua_tointeger(L,3));
		int numInstances=luatop>3 ? (int)lua_tointeger(L,4) : 0;

		return new osg::DrawElementsUByte(mode, no, &ptr, numInstances);
	}

	// osg::DrawElementsUByte::DrawElementsUByte(unsigned int mode, unsigned int no)
	static osg::DrawElementsUByte* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DrawElementsUByte::DrawElementsUByte(unsigned int mode, unsigned int no) function, expected prototype:\nosg::DrawElementsUByte::DrawElementsUByte(unsigned int mode, unsigned int no)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,1);
		unsigned int no=(unsigned int)lua_tointeger(L,2);

		return new osg::DrawElementsUByte(mode, no);
	}

	// osg::DrawElementsUByte::DrawElementsUByte(lua_Table * data, unsigned int mode = 0)
	static osg::DrawElementsUByte* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DrawElementsUByte::DrawElementsUByte(lua_Table * data, unsigned int mode = 0) function, expected prototype:\nosg::DrawElementsUByte::DrawElementsUByte(lua_Table * data, unsigned int mode = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int mode=luatop>1 ? (unsigned int)lua_tointeger(L,2) : 0;

		return new wrapper_osg_DrawElementsUByte(L,NULL, mode);
	}

	// osg::DrawElementsUByte::DrawElementsUByte(lua_Table * data, const osg::DrawElementsUByte & array, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::DrawElementsUByte* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DrawElementsUByte::DrawElementsUByte(lua_Table * data, const osg::DrawElementsUByte & array, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::DrawElementsUByte::DrawElementsUByte(lua_Table * data, const osg::DrawElementsUByte & array, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::DrawElementsUByte* array_ptr=dynamic_cast< osg::DrawElementsUByte* >(Luna< osg::Referenced >::check(L,2));
		if( !array_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg array in osg::DrawElementsUByte::DrawElementsUByte function");
		}
		const osg::DrawElementsUByte & array=*array_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::DrawElementsUByte::DrawElementsUByte function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_DrawElementsUByte(L,NULL, array, copyop);
	}

	// osg::DrawElementsUByte::DrawElementsUByte(lua_Table * data, unsigned int mode, unsigned int no, const unsigned char * ptr, int numInstances = 0)
	static osg::DrawElementsUByte* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DrawElementsUByte::DrawElementsUByte(lua_Table * data, unsigned int mode, unsigned int no, const unsigned char * ptr, int numInstances = 0) function, expected prototype:\nosg::DrawElementsUByte::DrawElementsUByte(lua_Table * data, unsigned int mode, unsigned int no, const unsigned char * ptr, int numInstances = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		unsigned int no=(unsigned int)lua_tointeger(L,3);
		unsigned char ptr = (unsigned char)(lua_tointeger(L,4));
		int numInstances=luatop>4 ? (int)lua_tointeger(L,5) : 0;

		return new wrapper_osg_DrawElementsUByte(L,NULL, mode, no, &ptr, numInstances);
	}

	// osg::DrawElementsUByte::DrawElementsUByte(lua_Table * data, unsigned int mode, unsigned int no)
	static osg::DrawElementsUByte* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DrawElementsUByte::DrawElementsUByte(lua_Table * data, unsigned int mode, unsigned int no) function, expected prototype:\nosg::DrawElementsUByte::DrawElementsUByte(lua_Table * data, unsigned int mode, unsigned int no)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		unsigned int no=(unsigned int)lua_tointeger(L,3);

		return new wrapper_osg_DrawElementsUByte(L,NULL, mode, no);
	}

	// Overload binder for osg::DrawElementsUByte::DrawElementsUByte
	static osg::DrawElementsUByte* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);

		luaL_error(L, "error in function DrawElementsUByte, cannot match any of the overloads for function DrawElementsUByte:\n  DrawElementsUByte(unsigned int)\n  DrawElementsUByte(const osg::DrawElementsUByte &, const osg::CopyOp &)\n  DrawElementsUByte(unsigned int, unsigned int, const unsigned char *, int)\n  DrawElementsUByte(unsigned int, unsigned int)\n  DrawElementsUByte(lua_Table *, unsigned int)\n  DrawElementsUByte(lua_Table *, const osg::DrawElementsUByte &, const osg::CopyOp &)\n  DrawElementsUByte(lua_Table *, unsigned int, unsigned int, const unsigned char *, int)\n  DrawElementsUByte(lua_Table *, unsigned int, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::DrawElementsUByte::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DrawElementsUByte::cloneType() const function, expected prototype:\nosg::Object * osg::DrawElementsUByte::cloneType() const\nClass arguments details:\n");
		}


		osg::DrawElementsUByte* self=dynamic_cast< osg::DrawElementsUByte* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::DrawElementsUByte::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::DrawElementsUByte::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DrawElementsUByte::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::DrawElementsUByte::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::DrawElementsUByte::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::DrawElementsUByte* self=dynamic_cast< osg::DrawElementsUByte* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::DrawElementsUByte::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::DrawElementsUByte::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::DrawElementsUByte::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::DrawElementsUByte::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::DrawElementsUByte* self=dynamic_cast< osg::DrawElementsUByte* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::DrawElementsUByte::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::DrawElementsUByte::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::DrawElementsUByte::libraryName() const function, expected prototype:\nconst char * osg::DrawElementsUByte::libraryName() const\nClass arguments details:\n");
		}


		osg::DrawElementsUByte* self=dynamic_cast< osg::DrawElementsUByte* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::DrawElementsUByte::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::DrawElementsUByte::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::DrawElementsUByte::className() const function, expected prototype:\nconst char * osg::DrawElementsUByte::className() const\nClass arguments details:\n");
		}


		osg::DrawElementsUByte* self=dynamic_cast< osg::DrawElementsUByte* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::DrawElementsUByte::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const void * osg::DrawElementsUByte::getDataPointer() const
	static int _bind_getDataPointer(lua_State *L) {
		if (!_lg_typecheck_getDataPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const void * osg::DrawElementsUByte::getDataPointer() const function, expected prototype:\nconst void * osg::DrawElementsUByte::getDataPointer() const\nClass arguments details:\n");
		}


		osg::DrawElementsUByte* self=dynamic_cast< osg::DrawElementsUByte* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const void * osg::DrawElementsUByte::getDataPointer() const");
		}
		const void * lret = self->getDataPointer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// unsigned int osg::DrawElementsUByte::getTotalDataSize() const
	static int _bind_getTotalDataSize(lua_State *L) {
		if (!_lg_typecheck_getTotalDataSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawElementsUByte::getTotalDataSize() const function, expected prototype:\nunsigned int osg::DrawElementsUByte::getTotalDataSize() const\nClass arguments details:\n");
		}


		osg::DrawElementsUByte* self=dynamic_cast< osg::DrawElementsUByte* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawElementsUByte::getTotalDataSize() const");
		}
		unsigned int lret = self->getTotalDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::DrawElementsUByte::supportsBufferObject() const
	static int _bind_supportsBufferObject(lua_State *L) {
		if (!_lg_typecheck_supportsBufferObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::DrawElementsUByte::supportsBufferObject() const function, expected prototype:\nbool osg::DrawElementsUByte::supportsBufferObject() const\nClass arguments details:\n");
		}


		osg::DrawElementsUByte* self=dynamic_cast< osg::DrawElementsUByte* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::DrawElementsUByte::supportsBufferObject() const");
		}
		bool lret = self->supportsBufferObject();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::DrawElementsUByte::draw(osg::State & state, bool useVertexBufferObjects) const
	static int _bind_draw(lua_State *L) {
		if (!_lg_typecheck_draw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawElementsUByte::draw(osg::State & state, bool useVertexBufferObjects) const function, expected prototype:\nvoid osg::DrawElementsUByte::draw(osg::State & state, bool useVertexBufferObjects) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::DrawElementsUByte::draw function");
		}
		osg::State & state=*state_ptr;
		bool useVertexBufferObjects=(bool)(lua_toboolean(L,3)==1);

		osg::DrawElementsUByte* self=dynamic_cast< osg::DrawElementsUByte* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUByte::draw(osg::State &, bool) const");
		}
		self->draw(state, useVertexBufferObjects);

		return 0;
	}

	// unsigned int osg::DrawElementsUByte::getNumIndices() const
	static int _bind_getNumIndices(lua_State *L) {
		if (!_lg_typecheck_getNumIndices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawElementsUByte::getNumIndices() const function, expected prototype:\nunsigned int osg::DrawElementsUByte::getNumIndices() const\nClass arguments details:\n");
		}


		osg::DrawElementsUByte* self=dynamic_cast< osg::DrawElementsUByte* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawElementsUByte::getNumIndices() const");
		}
		unsigned int lret = self->getNumIndices();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::DrawElementsUByte::index(unsigned int pos) const
	static int _bind_index(lua_State *L) {
		if (!_lg_typecheck_index(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawElementsUByte::index(unsigned int pos) const function, expected prototype:\nunsigned int osg::DrawElementsUByte::index(unsigned int pos) const\nClass arguments details:\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::DrawElementsUByte* self=dynamic_cast< osg::DrawElementsUByte* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawElementsUByte::index(unsigned int) const");
		}
		unsigned int lret = self->index(pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DrawElementsUByte::offsetIndices(int offset)
	static int _bind_offsetIndices(lua_State *L) {
		if (!_lg_typecheck_offsetIndices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawElementsUByte::offsetIndices(int offset) function, expected prototype:\nvoid osg::DrawElementsUByte::offsetIndices(int offset)\nClass arguments details:\n");
		}

		int offset=(int)lua_tointeger(L,2);

		osg::DrawElementsUByte* self=dynamic_cast< osg::DrawElementsUByte* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUByte::offsetIndices(int)");
		}
		self->offsetIndices(offset);

		return 0;
	}

	// void osg::DrawElementsUByte::reserveElements(unsigned int numIndices)
	static int _bind_reserveElements(lua_State *L) {
		if (!_lg_typecheck_reserveElements(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawElementsUByte::reserveElements(unsigned int numIndices) function, expected prototype:\nvoid osg::DrawElementsUByte::reserveElements(unsigned int numIndices)\nClass arguments details:\n");
		}

		unsigned int numIndices=(unsigned int)lua_tointeger(L,2);

		osg::DrawElementsUByte* self=dynamic_cast< osg::DrawElementsUByte* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUByte::reserveElements(unsigned int)");
		}
		self->reserveElements(numIndices);

		return 0;
	}

	// void osg::DrawElementsUByte::setElement(unsigned int i, unsigned int v)
	static int _bind_setElement(lua_State *L) {
		if (!_lg_typecheck_setElement(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawElementsUByte::setElement(unsigned int i, unsigned int v) function, expected prototype:\nvoid osg::DrawElementsUByte::setElement(unsigned int i, unsigned int v)\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		unsigned int v=(unsigned int)lua_tointeger(L,3);

		osg::DrawElementsUByte* self=dynamic_cast< osg::DrawElementsUByte* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUByte::setElement(unsigned int, unsigned int)");
		}
		self->setElement(i, v);

		return 0;
	}

	// unsigned int osg::DrawElementsUByte::getElement(unsigned int i)
	static int _bind_getElement(lua_State *L) {
		if (!_lg_typecheck_getElement(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawElementsUByte::getElement(unsigned int i) function, expected prototype:\nunsigned int osg::DrawElementsUByte::getElement(unsigned int i)\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::DrawElementsUByte* self=dynamic_cast< osg::DrawElementsUByte* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawElementsUByte::getElement(unsigned int)");
		}
		unsigned int lret = self->getElement(i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DrawElementsUByte::addElement(unsigned int v)
	static int _bind_addElement(lua_State *L) {
		if (!_lg_typecheck_addElement(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawElementsUByte::addElement(unsigned int v) function, expected prototype:\nvoid osg::DrawElementsUByte::addElement(unsigned int v)\nClass arguments details:\n");
		}

		unsigned int v=(unsigned int)lua_tointeger(L,2);

		osg::DrawElementsUByte* self=dynamic_cast< osg::DrawElementsUByte* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUByte::addElement(unsigned int)");
		}
		self->addElement(v);

		return 0;
	}


	// Operator binds:

};

osg::DrawElementsUByte* LunaTraits< osg::DrawElementsUByte >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_DrawElementsUByte::_bind_ctor(L);
}

void LunaTraits< osg::DrawElementsUByte >::_bind_dtor(osg::DrawElementsUByte* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::DrawElementsUByte >::className[] = "DrawElementsUByte";
const char LunaTraits< osg::DrawElementsUByte >::fullName[] = "osg::DrawElementsUByte";
const char LunaTraits< osg::DrawElementsUByte >::moduleName[] = "osg";
const char* LunaTraits< osg::DrawElementsUByte >::parents[] = {"osg.DrawElements", 0};
const int LunaTraits< osg::DrawElementsUByte >::hash = 51292926;
const int LunaTraits< osg::DrawElementsUByte >::uniqueIDs[] = {50169651, 59037247,0};

luna_RegType LunaTraits< osg::DrawElementsUByte >::methods[] = {
	{"cloneType", &luna_wrapper_osg_DrawElementsUByte::_bind_cloneType},
	{"clone", &luna_wrapper_osg_DrawElementsUByte::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_DrawElementsUByte::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_DrawElementsUByte::_bind_libraryName},
	{"className", &luna_wrapper_osg_DrawElementsUByte::_bind_className},
	{"getDataPointer", &luna_wrapper_osg_DrawElementsUByte::_bind_getDataPointer},
	{"getTotalDataSize", &luna_wrapper_osg_DrawElementsUByte::_bind_getTotalDataSize},
	{"supportsBufferObject", &luna_wrapper_osg_DrawElementsUByte::_bind_supportsBufferObject},
	{"draw", &luna_wrapper_osg_DrawElementsUByte::_bind_draw},
	{"getNumIndices", &luna_wrapper_osg_DrawElementsUByte::_bind_getNumIndices},
	{"index", &luna_wrapper_osg_DrawElementsUByte::_bind_index},
	{"offsetIndices", &luna_wrapper_osg_DrawElementsUByte::_bind_offsetIndices},
	{"reserveElements", &luna_wrapper_osg_DrawElementsUByte::_bind_reserveElements},
	{"setElement", &luna_wrapper_osg_DrawElementsUByte::_bind_setElement},
	{"getElement", &luna_wrapper_osg_DrawElementsUByte::_bind_getElement},
	{"addElement", &luna_wrapper_osg_DrawElementsUByte::_bind_addElement},
	{"__eq", &luna_wrapper_osg_DrawElementsUByte::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::DrawElementsUByte >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_DrawElementsUByte::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::DrawElementsUByte >::enumValues[] = {
	{0,0}
};


