#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_ClipPlane.h>

class luna_wrapper_osg_ClipPlane {
public:
	typedef Luna< osg::ClipPlane > luna_t;

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
		//osg::ClipPlane* ptr= dynamic_cast< osg::ClipPlane* >(Luna< osg::Referenced >::check(L,1));
		osg::ClipPlane* ptr= luna_caster< osg::Referenced, osg::ClipPlane >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ClipPlane >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303233) ) return false;
		if( (!dynamic_cast< osg::Vec4d* >(Luna< osg::Vec4d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,86970521) ) return false;
		if( (!dynamic_cast< osg::Plane* >(Luna< osg::Plane >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!dynamic_cast< osg::ClipPlane* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_9(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303233) ) return false;
		if( (!dynamic_cast< osg::Vec4d* >(Luna< osg::Vec4d >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_10(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,86970521) ) return false;
		if( (!dynamic_cast< osg::Plane* >(Luna< osg::Plane >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_11(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_12(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::ClipPlane* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,3))) ) return false;
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

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMember(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setClipPlane_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,86970521) ) return false;
		if( (!dynamic_cast< osg::Plane* >(Luna< osg::Plane >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setClipPlane_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setClipPlane_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303233) ) return false;
		if( (!dynamic_cast< osg::Vec4d* >(Luna< osg::Vec4d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getClipPlane(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setClipPlaneNum(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getClipPlaneNum(lua_State *L) {
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

	inline static bool _lg_typecheck_base_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getMember(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ClipPlane::ClipPlane()
	static osg::ClipPlane* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClipPlane::ClipPlane() function, expected prototype:\nosg::ClipPlane::ClipPlane()\nClass arguments details:\n");
		}


		return new osg::ClipPlane();
	}

	// osg::ClipPlane::ClipPlane(unsigned int no)
	static osg::ClipPlane* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClipPlane::ClipPlane(unsigned int no) function, expected prototype:\nosg::ClipPlane::ClipPlane(unsigned int no)\nClass arguments details:\n");
		}

		unsigned int no=(unsigned int)lua_tointeger(L,1);

		return new osg::ClipPlane(no);
	}

	// osg::ClipPlane::ClipPlane(unsigned int no, const osg::Vec4d & plane)
	static osg::ClipPlane* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClipPlane::ClipPlane(unsigned int no, const osg::Vec4d & plane) function, expected prototype:\nosg::ClipPlane::ClipPlane(unsigned int no, const osg::Vec4d & plane)\nClass arguments details:\narg 2 ID = 92303233\n");
		}

		unsigned int no=(unsigned int)lua_tointeger(L,1);
		const osg::Vec4d* plane_ptr=(Luna< osg::Vec4d >::check(L,2));
		if( !plane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg plane in osg::ClipPlane::ClipPlane function");
		}
		const osg::Vec4d & plane=*plane_ptr;

		return new osg::ClipPlane(no, plane);
	}

	// osg::ClipPlane::ClipPlane(unsigned int no, const osg::Plane & plane)
	static osg::ClipPlane* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClipPlane::ClipPlane(unsigned int no, const osg::Plane & plane) function, expected prototype:\nosg::ClipPlane::ClipPlane(unsigned int no, const osg::Plane & plane)\nClass arguments details:\narg 2 ID = 86970521\n");
		}

		unsigned int no=(unsigned int)lua_tointeger(L,1);
		const osg::Plane* plane_ptr=(Luna< osg::Plane >::check(L,2));
		if( !plane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg plane in osg::ClipPlane::ClipPlane function");
		}
		const osg::Plane & plane=*plane_ptr;

		return new osg::ClipPlane(no, plane);
	}

	// osg::ClipPlane::ClipPlane(unsigned int no, double a, double b, double c, double d)
	static osg::ClipPlane* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClipPlane::ClipPlane(unsigned int no, double a, double b, double c, double d) function, expected prototype:\nosg::ClipPlane::ClipPlane(unsigned int no, double a, double b, double c, double d)\nClass arguments details:\n");
		}

		unsigned int no=(unsigned int)lua_tointeger(L,1);
		double a=(double)lua_tonumber(L,2);
		double b=(double)lua_tonumber(L,3);
		double c=(double)lua_tonumber(L,4);
		double d=(double)lua_tonumber(L,5);

		return new osg::ClipPlane(no, a, b, c, d);
	}

	// osg::ClipPlane::ClipPlane(const osg::ClipPlane & cp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ClipPlane* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClipPlane::ClipPlane(const osg::ClipPlane & cp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ClipPlane::ClipPlane(const osg::ClipPlane & cp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::ClipPlane* cp_ptr=(Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1));
		if( !cp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cp in osg::ClipPlane::ClipPlane function");
		}
		const osg::ClipPlane & cp=*cp_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ClipPlane::ClipPlane function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::ClipPlane(cp, copyop);
	}

	// osg::ClipPlane::ClipPlane(lua_Table * data)
	static osg::ClipPlane* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClipPlane::ClipPlane(lua_Table * data) function, expected prototype:\nosg::ClipPlane::ClipPlane(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_ClipPlane(L,NULL);
	}

	// osg::ClipPlane::ClipPlane(lua_Table * data, unsigned int no)
	static osg::ClipPlane* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClipPlane::ClipPlane(lua_Table * data, unsigned int no) function, expected prototype:\nosg::ClipPlane::ClipPlane(lua_Table * data, unsigned int no)\nClass arguments details:\n");
		}

		unsigned int no=(unsigned int)lua_tointeger(L,2);

		return new wrapper_osg_ClipPlane(L,NULL, no);
	}

	// osg::ClipPlane::ClipPlane(lua_Table * data, unsigned int no, const osg::Vec4d & plane)
	static osg::ClipPlane* _bind_ctor_overload_9(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_9(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClipPlane::ClipPlane(lua_Table * data, unsigned int no, const osg::Vec4d & plane) function, expected prototype:\nosg::ClipPlane::ClipPlane(lua_Table * data, unsigned int no, const osg::Vec4d & plane)\nClass arguments details:\narg 3 ID = 92303233\n");
		}

		unsigned int no=(unsigned int)lua_tointeger(L,2);
		const osg::Vec4d* plane_ptr=(Luna< osg::Vec4d >::check(L,3));
		if( !plane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg plane in osg::ClipPlane::ClipPlane function");
		}
		const osg::Vec4d & plane=*plane_ptr;

		return new wrapper_osg_ClipPlane(L,NULL, no, plane);
	}

	// osg::ClipPlane::ClipPlane(lua_Table * data, unsigned int no, const osg::Plane & plane)
	static osg::ClipPlane* _bind_ctor_overload_10(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_10(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClipPlane::ClipPlane(lua_Table * data, unsigned int no, const osg::Plane & plane) function, expected prototype:\nosg::ClipPlane::ClipPlane(lua_Table * data, unsigned int no, const osg::Plane & plane)\nClass arguments details:\narg 3 ID = 86970521\n");
		}

		unsigned int no=(unsigned int)lua_tointeger(L,2);
		const osg::Plane* plane_ptr=(Luna< osg::Plane >::check(L,3));
		if( !plane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg plane in osg::ClipPlane::ClipPlane function");
		}
		const osg::Plane & plane=*plane_ptr;

		return new wrapper_osg_ClipPlane(L,NULL, no, plane);
	}

	// osg::ClipPlane::ClipPlane(lua_Table * data, unsigned int no, double a, double b, double c, double d)
	static osg::ClipPlane* _bind_ctor_overload_11(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_11(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClipPlane::ClipPlane(lua_Table * data, unsigned int no, double a, double b, double c, double d) function, expected prototype:\nosg::ClipPlane::ClipPlane(lua_Table * data, unsigned int no, double a, double b, double c, double d)\nClass arguments details:\n");
		}

		unsigned int no=(unsigned int)lua_tointeger(L,2);
		double a=(double)lua_tonumber(L,3);
		double b=(double)lua_tonumber(L,4);
		double c=(double)lua_tonumber(L,5);
		double d=(double)lua_tonumber(L,6);

		return new wrapper_osg_ClipPlane(L,NULL, no, a, b, c, d);
	}

	// osg::ClipPlane::ClipPlane(lua_Table * data, const osg::ClipPlane & cp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ClipPlane* _bind_ctor_overload_12(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_12(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClipPlane::ClipPlane(lua_Table * data, const osg::ClipPlane & cp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ClipPlane::ClipPlane(lua_Table * data, const osg::ClipPlane & cp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::ClipPlane* cp_ptr=(Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,2));
		if( !cp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cp in osg::ClipPlane::ClipPlane function");
		}
		const osg::ClipPlane & cp=*cp_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ClipPlane::ClipPlane function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_ClipPlane(L,NULL, cp, copyop);
	}

	// Overload binder for osg::ClipPlane::ClipPlane
	static osg::ClipPlane* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);
		if (_lg_typecheck_ctor_overload_9(L)) return _bind_ctor_overload_9(L);
		if (_lg_typecheck_ctor_overload_10(L)) return _bind_ctor_overload_10(L);
		if (_lg_typecheck_ctor_overload_11(L)) return _bind_ctor_overload_11(L);
		if (_lg_typecheck_ctor_overload_12(L)) return _bind_ctor_overload_12(L);

		luaL_error(L, "error in function ClipPlane, cannot match any of the overloads for function ClipPlane:\n  ClipPlane()\n  ClipPlane(unsigned int)\n  ClipPlane(unsigned int, const osg::Vec4d &)\n  ClipPlane(unsigned int, const osg::Plane &)\n  ClipPlane(unsigned int, double, double, double, double)\n  ClipPlane(const osg::ClipPlane &, const osg::CopyOp &)\n  ClipPlane(lua_Table *)\n  ClipPlane(lua_Table *, unsigned int)\n  ClipPlane(lua_Table *, unsigned int, const osg::Vec4d &)\n  ClipPlane(lua_Table *, unsigned int, const osg::Plane &)\n  ClipPlane(lua_Table *, unsigned int, double, double, double, double)\n  ClipPlane(lua_Table *, const osg::ClipPlane &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::ClipPlane::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ClipPlane::cloneType() const function, expected prototype:\nosg::Object * osg::ClipPlane::cloneType() const\nClass arguments details:\n");
		}


		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ClipPlane::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ClipPlane::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ClipPlane::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::ClipPlane::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ClipPlane::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ClipPlane::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ClipPlane::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ClipPlane::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ClipPlane::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ClipPlane::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ClipPlane::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ClipPlane::libraryName() const function, expected prototype:\nconst char * osg::ClipPlane::libraryName() const\nClass arguments details:\n");
		}


		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ClipPlane::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ClipPlane::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ClipPlane::className() const function, expected prototype:\nconst char * osg::ClipPlane::className() const\nClass arguments details:\n");
		}


		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ClipPlane::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::ClipPlane::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::ClipPlane::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::ClipPlane::getType() const\nClass arguments details:\n");
		}


		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::ClipPlane::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::ClipPlane::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::ClipPlane::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::ClipPlane::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::ClipPlane::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::ClipPlane::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::ClipPlane::getMember() const
	static int _bind_getMember(lua_State *L) {
		if (!_lg_typecheck_getMember(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::ClipPlane::getMember() const function, expected prototype:\nunsigned int osg::ClipPlane::getMember() const\nClass arguments details:\n");
		}


		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::ClipPlane::getMember() const");
		}
		unsigned int lret = self->getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::ClipPlane::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ClipPlane::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::ClipPlane::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ClipPlane::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ClipPlane::getModeUsage(osg::StateAttribute::ModeUsage &) const");
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ClipPlane::setClipPlane(const osg::Plane & plane)
	static int _bind_setClipPlane_overload_1(lua_State *L) {
		if (!_lg_typecheck_setClipPlane_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClipPlane::setClipPlane(const osg::Plane & plane) function, expected prototype:\nvoid osg::ClipPlane::setClipPlane(const osg::Plane & plane)\nClass arguments details:\narg 1 ID = 86970521\n");
		}

		const osg::Plane* plane_ptr=(Luna< osg::Plane >::check(L,2));
		if( !plane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg plane in osg::ClipPlane::setClipPlane function");
		}
		const osg::Plane & plane=*plane_ptr;

		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClipPlane::setClipPlane(const osg::Plane &)");
		}
		self->setClipPlane(plane);

		return 0;
	}

	// void osg::ClipPlane::setClipPlane(double a, double b, double c, double d)
	static int _bind_setClipPlane_overload_2(lua_State *L) {
		if (!_lg_typecheck_setClipPlane_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClipPlane::setClipPlane(double a, double b, double c, double d) function, expected prototype:\nvoid osg::ClipPlane::setClipPlane(double a, double b, double c, double d)\nClass arguments details:\n");
		}

		double a=(double)lua_tonumber(L,2);
		double b=(double)lua_tonumber(L,3);
		double c=(double)lua_tonumber(L,4);
		double d=(double)lua_tonumber(L,5);

		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClipPlane::setClipPlane(double, double, double, double)");
		}
		self->setClipPlane(a, b, c, d);

		return 0;
	}

	// void osg::ClipPlane::setClipPlane(const osg::Vec4d & plane)
	static int _bind_setClipPlane_overload_3(lua_State *L) {
		if (!_lg_typecheck_setClipPlane_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClipPlane::setClipPlane(const osg::Vec4d & plane) function, expected prototype:\nvoid osg::ClipPlane::setClipPlane(const osg::Vec4d & plane)\nClass arguments details:\narg 1 ID = 92303233\n");
		}

		const osg::Vec4d* plane_ptr=(Luna< osg::Vec4d >::check(L,2));
		if( !plane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg plane in osg::ClipPlane::setClipPlane function");
		}
		const osg::Vec4d & plane=*plane_ptr;

		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClipPlane::setClipPlane(const osg::Vec4d &)");
		}
		self->setClipPlane(plane);

		return 0;
	}

	// Overload binder for osg::ClipPlane::setClipPlane
	static int _bind_setClipPlane(lua_State *L) {
		if (_lg_typecheck_setClipPlane_overload_1(L)) return _bind_setClipPlane_overload_1(L);
		if (_lg_typecheck_setClipPlane_overload_2(L)) return _bind_setClipPlane_overload_2(L);
		if (_lg_typecheck_setClipPlane_overload_3(L)) return _bind_setClipPlane_overload_3(L);

		luaL_error(L, "error in function setClipPlane, cannot match any of the overloads for function setClipPlane:\n  setClipPlane(const osg::Plane &)\n  setClipPlane(double, double, double, double)\n  setClipPlane(const osg::Vec4d &)\n");
		return 0;
	}

	// const osg::Vec4d & osg::ClipPlane::getClipPlane() const
	static int _bind_getClipPlane(lua_State *L) {
		if (!_lg_typecheck_getClipPlane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec4d & osg::ClipPlane::getClipPlane() const function, expected prototype:\nconst osg::Vec4d & osg::ClipPlane::getClipPlane() const\nClass arguments details:\n");
		}


		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec4d & osg::ClipPlane::getClipPlane() const");
		}
		const osg::Vec4d* lret = &self->getClipPlane();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4d >::push(L,lret,false);

		return 1;
	}

	// void osg::ClipPlane::setClipPlaneNum(unsigned int num)
	static int _bind_setClipPlaneNum(lua_State *L) {
		if (!_lg_typecheck_setClipPlaneNum(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClipPlane::setClipPlaneNum(unsigned int num) function, expected prototype:\nvoid osg::ClipPlane::setClipPlaneNum(unsigned int num)\nClass arguments details:\n");
		}

		unsigned int num=(unsigned int)lua_tointeger(L,2);

		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClipPlane::setClipPlaneNum(unsigned int)");
		}
		self->setClipPlaneNum(num);

		return 0;
	}

	// unsigned int osg::ClipPlane::getClipPlaneNum() const
	static int _bind_getClipPlaneNum(lua_State *L) {
		if (!_lg_typecheck_getClipPlaneNum(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::ClipPlane::getClipPlaneNum() const function, expected prototype:\nunsigned int osg::ClipPlane::getClipPlaneNum() const\nClass arguments details:\n");
		}


		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::ClipPlane::getClipPlaneNum() const");
		}
		unsigned int lret = self->getClipPlaneNum();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ClipPlane::apply(osg::State & state) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClipPlane::apply(osg::State & state) const function, expected prototype:\nvoid osg::ClipPlane::apply(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::ClipPlane::apply function");
		}
		osg::State & state=*state_ptr;

		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClipPlane::apply(osg::State &) const");
		}
		self->apply(state);

		return 0;
	}

	// void osg::ClipPlane::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClipPlane::base_setName(const std::string & name) function, expected prototype:\nvoid osg::ClipPlane::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClipPlane::base_setName(const std::string &)");
		}
		self->ClipPlane::setName(name);

		return 0;
	}

	// void osg::ClipPlane::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClipPlane::base_computeDataVariance() function, expected prototype:\nvoid osg::ClipPlane::base_computeDataVariance()\nClass arguments details:\n");
		}


		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClipPlane::base_computeDataVariance()");
		}
		self->ClipPlane::computeDataVariance();

		return 0;
	}

	// void osg::ClipPlane::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClipPlane::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::ClipPlane::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClipPlane::base_setUserData(osg::Referenced *)");
		}
		self->ClipPlane::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::ClipPlane::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::ClipPlane::base_getUserData() function, expected prototype:\nosg::Referenced * osg::ClipPlane::base_getUserData()\nClass arguments details:\n");
		}


		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::ClipPlane::base_getUserData()");
		}
		osg::Referenced * lret = self->ClipPlane::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::ClipPlane::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::ClipPlane::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::ClipPlane::base_getUserData() const\nClass arguments details:\n");
		}


		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::ClipPlane::base_getUserData() const");
		}
		const osg::Referenced * lret = self->ClipPlane::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ClipPlane::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Texture * osg::ClipPlane::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::ClipPlane::base_asTexture() function, expected prototype:\nosg::Texture * osg::ClipPlane::base_asTexture()\nClass arguments details:\n");
		}


		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Texture * osg::ClipPlane::base_asTexture()");
		}
		osg::Texture * lret = self->ClipPlane::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::ClipPlane::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::ClipPlane::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::ClipPlane::base_asTexture() const\nClass arguments details:\n");
		}


		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::ClipPlane::base_asTexture() const");
		}
		const osg::Texture * lret = self->ClipPlane::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ClipPlane::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// bool osg::ClipPlane::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ClipPlane::base_isTextureAttribute() const function, expected prototype:\nbool osg::ClipPlane::base_isTextureAttribute() const\nClass arguments details:\n");
		}


		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ClipPlane::base_isTextureAttribute() const");
		}
		bool lret = self->ClipPlane::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ClipPlane::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ClipPlane::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::ClipPlane::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ClipPlane::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ClipPlane::base_checkValidityOfAssociatedModes(osg::State &) const");
		}
		bool lret = self->ClipPlane::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ClipPlane::base_compileGLObjects(osg::State & arg1) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClipPlane::base_compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::ClipPlane::base_compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ClipPlane::base_compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClipPlane::base_compileGLObjects(osg::State &) const");
		}
		self->ClipPlane::compileGLObjects(_arg1);

		return 0;
	}

	// void osg::ClipPlane::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClipPlane::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::ClipPlane::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClipPlane::base_releaseGLObjects(osg::State *) const");
		}
		self->ClipPlane::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::ClipPlane::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ClipPlane::base_cloneType() const function, expected prototype:\nosg::Object * osg::ClipPlane::base_cloneType() const\nClass arguments details:\n");
		}


		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ClipPlane::base_cloneType() const");
		}
		osg::Object * lret = self->ClipPlane::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ClipPlane::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ClipPlane::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::ClipPlane::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ClipPlane::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ClipPlane::base_clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->ClipPlane::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ClipPlane::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ClipPlane::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ClipPlane::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ClipPlane::base_isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->ClipPlane::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ClipPlane::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ClipPlane::base_libraryName() const function, expected prototype:\nconst char * osg::ClipPlane::base_libraryName() const\nClass arguments details:\n");
		}


		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ClipPlane::base_libraryName() const");
		}
		const char * lret = self->ClipPlane::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ClipPlane::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ClipPlane::base_className() const function, expected prototype:\nconst char * osg::ClipPlane::base_className() const\nClass arguments details:\n");
		}


		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ClipPlane::base_className() const");
		}
		const char * lret = self->ClipPlane::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::ClipPlane::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::ClipPlane::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osg::ClipPlane::base_getType() const\nClass arguments details:\n");
		}


		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::ClipPlane::base_getType() const");
		}
		osg::StateAttribute::Type lret = self->ClipPlane::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::ClipPlane::base_compare(const osg::StateAttribute & sa) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::ClipPlane::base_compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::ClipPlane::base_compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::ClipPlane::base_compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::ClipPlane::base_compare(const osg::StateAttribute &) const");
		}
		int lret = self->ClipPlane::compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::ClipPlane::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::ClipPlane::base_getMember() const function, expected prototype:\nunsigned int osg::ClipPlane::base_getMember() const\nClass arguments details:\n");
		}


		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::ClipPlane::base_getMember() const");
		}
		unsigned int lret = self->ClipPlane::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::ClipPlane::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ClipPlane::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::ClipPlane::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ClipPlane::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ClipPlane::base_getModeUsage(osg::StateAttribute::ModeUsage &) const");
		}
		bool lret = self->ClipPlane::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ClipPlane::base_apply(osg::State & state) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClipPlane::base_apply(osg::State & state) const function, expected prototype:\nvoid osg::ClipPlane::base_apply(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::ClipPlane::base_apply function");
		}
		osg::State & state=*state_ptr;

		osg::ClipPlane* self=Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClipPlane::base_apply(osg::State &) const");
		}
		self->ClipPlane::apply(state);

		return 0;
	}


	// Operator binds:

};

osg::ClipPlane* LunaTraits< osg::ClipPlane >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ClipPlane::_bind_ctor(L);
}

void LunaTraits< osg::ClipPlane >::_bind_dtor(osg::ClipPlane* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ClipPlane >::className[] = "ClipPlane";
const char LunaTraits< osg::ClipPlane >::fullName[] = "osg::ClipPlane";
const char LunaTraits< osg::ClipPlane >::moduleName[] = "osg";
const char* LunaTraits< osg::ClipPlane >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::ClipPlane >::hash = 52621767;
const int LunaTraits< osg::ClipPlane >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ClipPlane >::methods[] = {
	{"cloneType", &luna_wrapper_osg_ClipPlane::_bind_cloneType},
	{"clone", &luna_wrapper_osg_ClipPlane::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_ClipPlane::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_ClipPlane::_bind_libraryName},
	{"className", &luna_wrapper_osg_ClipPlane::_bind_className},
	{"getType", &luna_wrapper_osg_ClipPlane::_bind_getType},
	{"compare", &luna_wrapper_osg_ClipPlane::_bind_compare},
	{"getMember", &luna_wrapper_osg_ClipPlane::_bind_getMember},
	{"getModeUsage", &luna_wrapper_osg_ClipPlane::_bind_getModeUsage},
	{"setClipPlane", &luna_wrapper_osg_ClipPlane::_bind_setClipPlane},
	{"getClipPlane", &luna_wrapper_osg_ClipPlane::_bind_getClipPlane},
	{"setClipPlaneNum", &luna_wrapper_osg_ClipPlane::_bind_setClipPlaneNum},
	{"getClipPlaneNum", &luna_wrapper_osg_ClipPlane::_bind_getClipPlaneNum},
	{"apply", &luna_wrapper_osg_ClipPlane::_bind_apply},
	{"base_setName", &luna_wrapper_osg_ClipPlane::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_ClipPlane::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_ClipPlane::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_ClipPlane::_bind_base_getUserData},
	{"base_asTexture", &luna_wrapper_osg_ClipPlane::_bind_base_asTexture},
	{"base_isTextureAttribute", &luna_wrapper_osg_ClipPlane::_bind_base_isTextureAttribute},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_ClipPlane::_bind_base_checkValidityOfAssociatedModes},
	{"base_compileGLObjects", &luna_wrapper_osg_ClipPlane::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_ClipPlane::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_ClipPlane::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_ClipPlane::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_ClipPlane::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_ClipPlane::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_ClipPlane::_bind_base_className},
	{"base_getType", &luna_wrapper_osg_ClipPlane::_bind_base_getType},
	{"base_compare", &luna_wrapper_osg_ClipPlane::_bind_base_compare},
	{"base_getMember", &luna_wrapper_osg_ClipPlane::_bind_base_getMember},
	{"base_getModeUsage", &luna_wrapper_osg_ClipPlane::_bind_base_getModeUsage},
	{"base_apply", &luna_wrapper_osg_ClipPlane::_bind_base_apply},
	{"__eq", &luna_wrapper_osg_ClipPlane::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ClipPlane >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ClipPlane::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ClipPlane >::enumValues[] = {
	{0,0}
};


