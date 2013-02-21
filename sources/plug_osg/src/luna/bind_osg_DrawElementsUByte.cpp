#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_DrawElementsUByte.h>

class luna_wrapper_osg_DrawElementsUByte {
public:
	typedef Luna< osg::DrawElementsUByte > luna_t;

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

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		osg::DrawElementsUByte* self= (osg::DrawElementsUByte*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::DrawElementsUByte >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osg::DrawElementsUByte* ptr= dynamic_cast< osg::DrawElementsUByte* >(Luna< osg::Referenced >::check(L,1));
		osg::DrawElementsUByte* ptr= luna_caster< osg::Referenced, osg::DrawElementsUByte >::cast(Luna< osg::Referenced >::check(L,1));
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
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

	inline static bool _lg_typecheck_base_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
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

	inline static bool _lg_typecheck_base_draw(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getNumIndices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_offsetIndices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_reserveElements(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setElement(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getElement(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addElement(lua_State *L) {
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

		unsigned int mode=luatop>0 ? (unsigned int)lua_tointeger(L,1) : (unsigned int)0;

		return new osg::DrawElementsUByte(mode);
	}

	// osg::DrawElementsUByte::DrawElementsUByte(const osg::DrawElementsUByte & array, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::DrawElementsUByte* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DrawElementsUByte::DrawElementsUByte(const osg::DrawElementsUByte & array, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::DrawElementsUByte::DrawElementsUByte(const osg::DrawElementsUByte & array, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::DrawElementsUByte* array_ptr=(Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1));
		if( !array_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg array in osg::DrawElementsUByte::DrawElementsUByte function");
		}
		const osg::DrawElementsUByte & array=*array_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::DrawElementsUByte::DrawElementsUByte function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp)osg::CopyOp::SHALLOW_COPY;

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
		int numInstances=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;

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

		unsigned int mode=luatop>1 ? (unsigned int)lua_tointeger(L,2) : (unsigned int)0;

		return new wrapper_osg_DrawElementsUByte(L,NULL, mode);
	}

	// osg::DrawElementsUByte::DrawElementsUByte(lua_Table * data, const osg::DrawElementsUByte & array, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::DrawElementsUByte* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DrawElementsUByte::DrawElementsUByte(lua_Table * data, const osg::DrawElementsUByte & array, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::DrawElementsUByte::DrawElementsUByte(lua_Table * data, const osg::DrawElementsUByte & array, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::DrawElementsUByte* array_ptr=(Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,2));
		if( !array_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg array in osg::DrawElementsUByte::DrawElementsUByte function");
		}
		const osg::DrawElementsUByte & array=*array_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::DrawElementsUByte::DrawElementsUByte function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp)osg::CopyOp::SHALLOW_COPY;

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
		int numInstances=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

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


		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::DrawElementsUByte::cloneType() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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

		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::DrawElementsUByte::clone(const osg::CopyOp &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::DrawElementsUByte::isSameKindAs(const osg::Object *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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


		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::DrawElementsUByte::libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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


		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::DrawElementsUByte::className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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


		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const void * osg::DrawElementsUByte::getDataPointer() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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


		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawElementsUByte::getTotalDataSize() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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


		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::DrawElementsUByte::supportsBufferObject() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::DrawElementsUByte::draw function");
		}
		osg::State & state=*state_ptr;
		bool useVertexBufferObjects=(bool)(lua_toboolean(L,3)==1);

		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUByte::draw(osg::State &, bool) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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


		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawElementsUByte::getNumIndices() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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

		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawElementsUByte::index(unsigned int) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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

		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUByte::offsetIndices(int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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

		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUByte::reserveElements(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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

		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUByte::setElement(unsigned int, unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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

		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawElementsUByte::getElement(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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

		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUByte::addElement(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->addElement(v);

		return 0;
	}

	// void osg::DrawElementsUByte::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawElementsUByte::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::DrawElementsUByte::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUByte::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->DrawElementsUByte::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::DrawElementsUByte::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawElementsUByte::base_setName(const std::string & name) function, expected prototype:\nvoid osg::DrawElementsUByte::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUByte::base_setName(const std::string &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->DrawElementsUByte::setName(name);

		return 0;
	}

	// void osg::DrawElementsUByte::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawElementsUByte::base_computeDataVariance() function, expected prototype:\nvoid osg::DrawElementsUByte::base_computeDataVariance()\nClass arguments details:\n");
		}


		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUByte::base_computeDataVariance(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->DrawElementsUByte::computeDataVariance();

		return 0;
	}

	// void osg::DrawElementsUByte::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawElementsUByte::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::DrawElementsUByte::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUByte::base_setUserData(osg::Referenced *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->DrawElementsUByte::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::DrawElementsUByte::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::DrawElementsUByte::base_getUserData() function, expected prototype:\nosg::Referenced * osg::DrawElementsUByte::base_getUserData()\nClass arguments details:\n");
		}


		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::DrawElementsUByte::base_getUserData(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Referenced * lret = self->DrawElementsUByte::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::DrawElementsUByte::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::DrawElementsUByte::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::DrawElementsUByte::base_getUserData() const\nClass arguments details:\n");
		}


		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::DrawElementsUByte::base_getUserData() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::Referenced * lret = self->DrawElementsUByte::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DrawElementsUByte::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::DrawElementsUByte::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawElementsUByte::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::DrawElementsUByte::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUByte::base_releaseGLObjects(osg::State *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->DrawElementsUByte::releaseGLObjects(state);

		return 0;
	}

	// unsigned int osg::DrawElementsUByte::base_getNumPrimitives() const
	static int _bind_base_getNumPrimitives(lua_State *L) {
		if (!_lg_typecheck_base_getNumPrimitives(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawElementsUByte::base_getNumPrimitives() const function, expected prototype:\nunsigned int osg::DrawElementsUByte::base_getNumPrimitives() const\nClass arguments details:\n");
		}


		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawElementsUByte::base_getNumPrimitives() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->DrawElementsUByte::getNumPrimitives();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DrawElementsUByte::base_computeRange() const
	static int _bind_base_computeRange(lua_State *L) {
		if (!_lg_typecheck_base_computeRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawElementsUByte::base_computeRange() const function, expected prototype:\nvoid osg::DrawElementsUByte::base_computeRange() const\nClass arguments details:\n");
		}


		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUByte::base_computeRange() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->DrawElementsUByte::computeRange();

		return 0;
	}

	// osg::DrawElements * osg::DrawElementsUByte::base_getDrawElements()
	static int _bind_base_getDrawElements_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getDrawElements_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DrawElements * osg::DrawElementsUByte::base_getDrawElements() function, expected prototype:\nosg::DrawElements * osg::DrawElementsUByte::base_getDrawElements()\nClass arguments details:\n");
		}


		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::DrawElements * osg::DrawElementsUByte::base_getDrawElements(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::DrawElements * lret = self->DrawElementsUByte::getDrawElements();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DrawElements >::push(L,lret,false);

		return 1;
	}

	// const osg::DrawElements * osg::DrawElementsUByte::base_getDrawElements() const
	static int _bind_base_getDrawElements_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getDrawElements_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::DrawElements * osg::DrawElementsUByte::base_getDrawElements() const function, expected prototype:\nconst osg::DrawElements * osg::DrawElementsUByte::base_getDrawElements() const\nClass arguments details:\n");
		}


		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::DrawElements * osg::DrawElementsUByte::base_getDrawElements() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::DrawElements * lret = self->DrawElementsUByte::getDrawElements();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DrawElements >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DrawElementsUByte::base_getDrawElements
	static int _bind_base_getDrawElements(lua_State *L) {
		if (_lg_typecheck_base_getDrawElements_overload_1(L)) return _bind_base_getDrawElements_overload_1(L);
		if (_lg_typecheck_base_getDrawElements_overload_2(L)) return _bind_base_getDrawElements_overload_2(L);

		luaL_error(L, "error in function base_getDrawElements, cannot match any of the overloads for function base_getDrawElements:\n  base_getDrawElements()\n  base_getDrawElements()\n");
		return 0;
	}

	// osg::Object * osg::DrawElementsUByte::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DrawElementsUByte::base_cloneType() const function, expected prototype:\nosg::Object * osg::DrawElementsUByte::base_cloneType() const\nClass arguments details:\n");
		}


		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::DrawElementsUByte::base_cloneType() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->DrawElementsUByte::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::DrawElementsUByte::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DrawElementsUByte::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::DrawElementsUByte::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::DrawElementsUByte::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::DrawElementsUByte::base_clone(const osg::CopyOp &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->DrawElementsUByte::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::DrawElementsUByte::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::DrawElementsUByte::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::DrawElementsUByte::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::DrawElementsUByte::base_isSameKindAs(const osg::Object *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->DrawElementsUByte::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::DrawElementsUByte::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::DrawElementsUByte::base_libraryName() const function, expected prototype:\nconst char * osg::DrawElementsUByte::base_libraryName() const\nClass arguments details:\n");
		}


		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::DrawElementsUByte::base_libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->DrawElementsUByte::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::DrawElementsUByte::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::DrawElementsUByte::base_className() const function, expected prototype:\nconst char * osg::DrawElementsUByte::base_className() const\nClass arguments details:\n");
		}


		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::DrawElementsUByte::base_className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->DrawElementsUByte::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const void * osg::DrawElementsUByte::base_getDataPointer() const
	static int _bind_base_getDataPointer(lua_State *L) {
		if (!_lg_typecheck_base_getDataPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const void * osg::DrawElementsUByte::base_getDataPointer() const function, expected prototype:\nconst void * osg::DrawElementsUByte::base_getDataPointer() const\nClass arguments details:\n");
		}


		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const void * osg::DrawElementsUByte::base_getDataPointer() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const void * lret = self->DrawElementsUByte::getDataPointer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// unsigned int osg::DrawElementsUByte::base_getTotalDataSize() const
	static int _bind_base_getTotalDataSize(lua_State *L) {
		if (!_lg_typecheck_base_getTotalDataSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawElementsUByte::base_getTotalDataSize() const function, expected prototype:\nunsigned int osg::DrawElementsUByte::base_getTotalDataSize() const\nClass arguments details:\n");
		}


		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawElementsUByte::base_getTotalDataSize() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->DrawElementsUByte::getTotalDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::DrawElementsUByte::base_supportsBufferObject() const
	static int _bind_base_supportsBufferObject(lua_State *L) {
		if (!_lg_typecheck_base_supportsBufferObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::DrawElementsUByte::base_supportsBufferObject() const function, expected prototype:\nbool osg::DrawElementsUByte::base_supportsBufferObject() const\nClass arguments details:\n");
		}


		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::DrawElementsUByte::base_supportsBufferObject() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->DrawElementsUByte::supportsBufferObject();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::DrawElementsUByte::base_draw(osg::State & state, bool useVertexBufferObjects) const
	static int _bind_base_draw(lua_State *L) {
		if (!_lg_typecheck_base_draw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawElementsUByte::base_draw(osg::State & state, bool useVertexBufferObjects) const function, expected prototype:\nvoid osg::DrawElementsUByte::base_draw(osg::State & state, bool useVertexBufferObjects) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::DrawElementsUByte::base_draw function");
		}
		osg::State & state=*state_ptr;
		bool useVertexBufferObjects=(bool)(lua_toboolean(L,3)==1);

		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUByte::base_draw(osg::State &, bool) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->DrawElementsUByte::draw(state, useVertexBufferObjects);

		return 0;
	}

	// unsigned int osg::DrawElementsUByte::base_getNumIndices() const
	static int _bind_base_getNumIndices(lua_State *L) {
		if (!_lg_typecheck_base_getNumIndices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawElementsUByte::base_getNumIndices() const function, expected prototype:\nunsigned int osg::DrawElementsUByte::base_getNumIndices() const\nClass arguments details:\n");
		}


		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawElementsUByte::base_getNumIndices() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->DrawElementsUByte::getNumIndices();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::DrawElementsUByte::base_index(unsigned int pos) const
	static int _bind_base_index(lua_State *L) {
		if (!_lg_typecheck_base_index(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawElementsUByte::base_index(unsigned int pos) const function, expected prototype:\nunsigned int osg::DrawElementsUByte::base_index(unsigned int pos) const\nClass arguments details:\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawElementsUByte::base_index(unsigned int) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->DrawElementsUByte::index(pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DrawElementsUByte::base_offsetIndices(int offset)
	static int _bind_base_offsetIndices(lua_State *L) {
		if (!_lg_typecheck_base_offsetIndices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawElementsUByte::base_offsetIndices(int offset) function, expected prototype:\nvoid osg::DrawElementsUByte::base_offsetIndices(int offset)\nClass arguments details:\n");
		}

		int offset=(int)lua_tointeger(L,2);

		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUByte::base_offsetIndices(int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->DrawElementsUByte::offsetIndices(offset);

		return 0;
	}

	// void osg::DrawElementsUByte::base_reserveElements(unsigned int numIndices)
	static int _bind_base_reserveElements(lua_State *L) {
		if (!_lg_typecheck_base_reserveElements(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawElementsUByte::base_reserveElements(unsigned int numIndices) function, expected prototype:\nvoid osg::DrawElementsUByte::base_reserveElements(unsigned int numIndices)\nClass arguments details:\n");
		}

		unsigned int numIndices=(unsigned int)lua_tointeger(L,2);

		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUByte::base_reserveElements(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->DrawElementsUByte::reserveElements(numIndices);

		return 0;
	}

	// void osg::DrawElementsUByte::base_setElement(unsigned int i, unsigned int v)
	static int _bind_base_setElement(lua_State *L) {
		if (!_lg_typecheck_base_setElement(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawElementsUByte::base_setElement(unsigned int i, unsigned int v) function, expected prototype:\nvoid osg::DrawElementsUByte::base_setElement(unsigned int i, unsigned int v)\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		unsigned int v=(unsigned int)lua_tointeger(L,3);

		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUByte::base_setElement(unsigned int, unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->DrawElementsUByte::setElement(i, v);

		return 0;
	}

	// unsigned int osg::DrawElementsUByte::base_getElement(unsigned int i)
	static int _bind_base_getElement(lua_State *L) {
		if (!_lg_typecheck_base_getElement(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawElementsUByte::base_getElement(unsigned int i) function, expected prototype:\nunsigned int osg::DrawElementsUByte::base_getElement(unsigned int i)\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawElementsUByte::base_getElement(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->DrawElementsUByte::getElement(i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DrawElementsUByte::base_addElement(unsigned int v)
	static int _bind_base_addElement(lua_State *L) {
		if (!_lg_typecheck_base_addElement(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawElementsUByte::base_addElement(unsigned int v) function, expected prototype:\nvoid osg::DrawElementsUByte::base_addElement(unsigned int v)\nClass arguments details:\n");
		}

		unsigned int v=(unsigned int)lua_tointeger(L,2);

		osg::DrawElementsUByte* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUByte >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUByte::base_addElement(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->DrawElementsUByte::addElement(v);

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
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_DrawElementsUByte::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_DrawElementsUByte::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_DrawElementsUByte::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_DrawElementsUByte::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_DrawElementsUByte::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_DrawElementsUByte::_bind_base_releaseGLObjects},
	{"base_getNumPrimitives", &luna_wrapper_osg_DrawElementsUByte::_bind_base_getNumPrimitives},
	{"base_computeRange", &luna_wrapper_osg_DrawElementsUByte::_bind_base_computeRange},
	{"base_getDrawElements", &luna_wrapper_osg_DrawElementsUByte::_bind_base_getDrawElements},
	{"base_cloneType", &luna_wrapper_osg_DrawElementsUByte::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_DrawElementsUByte::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_DrawElementsUByte::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_DrawElementsUByte::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_DrawElementsUByte::_bind_base_className},
	{"base_getDataPointer", &luna_wrapper_osg_DrawElementsUByte::_bind_base_getDataPointer},
	{"base_getTotalDataSize", &luna_wrapper_osg_DrawElementsUByte::_bind_base_getTotalDataSize},
	{"base_supportsBufferObject", &luna_wrapper_osg_DrawElementsUByte::_bind_base_supportsBufferObject},
	{"base_draw", &luna_wrapper_osg_DrawElementsUByte::_bind_base_draw},
	{"base_getNumIndices", &luna_wrapper_osg_DrawElementsUByte::_bind_base_getNumIndices},
	{"base_index", &luna_wrapper_osg_DrawElementsUByte::_bind_base_index},
	{"base_offsetIndices", &luna_wrapper_osg_DrawElementsUByte::_bind_base_offsetIndices},
	{"base_reserveElements", &luna_wrapper_osg_DrawElementsUByte::_bind_base_reserveElements},
	{"base_setElement", &luna_wrapper_osg_DrawElementsUByte::_bind_base_setElement},
	{"base_getElement", &luna_wrapper_osg_DrawElementsUByte::_bind_base_getElement},
	{"base_addElement", &luna_wrapper_osg_DrawElementsUByte::_bind_base_addElement},
	{"__eq", &luna_wrapper_osg_DrawElementsUByte::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_DrawElementsUByte::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_DrawElementsUByte::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_DrawElementsUByte::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::DrawElementsUByte >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_DrawElementsUByte::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::DrawElementsUByte >::enumValues[] = {
	{0,0}
};


