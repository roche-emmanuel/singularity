#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_AnimationPathCallback.h>

class luna_wrapper_osg_AnimationPathCallback {
public:
	typedef Luna< osg::AnimationPathCallback > luna_t;

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

		osg::AnimationPathCallback* self= (osg::AnimationPathCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::AnimationPathCallback >::push(L,self,false);
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
		//osg::AnimationPathCallback* ptr= dynamic_cast< osg::AnimationPathCallback* >(Luna< osg::Referenced >::check(L,1));
		osg::AnimationPathCallback* ptr= luna_caster< osg::Referenced, osg::AnimationPathCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::AnimationPathCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1)) ) ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,2)) ) ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,3))) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
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

	inline static bool _lg_typecheck_setAnimationPath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAnimationPath_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAnimationPath_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPivotPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPivotPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUseInverseMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUseInverseMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTimeOffset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTimeOffset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTimeMultiplier(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTimeMultiplier(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPause(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPause(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAnimationTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFirstTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLatestTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPauseTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFirstTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLatestTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPauseTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getAnimationTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::AnimationPathCallback::AnimationPathCallback()
	static osg::AnimationPathCallback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::AnimationPathCallback::AnimationPathCallback() function, expected prototype:\nosg::AnimationPathCallback::AnimationPathCallback()\nClass arguments details:\n");
		}


		return new osg::AnimationPathCallback();
	}

	// osg::AnimationPathCallback::AnimationPathCallback(const osg::AnimationPathCallback & apc, const osg::CopyOp & copyop)
	static osg::AnimationPathCallback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::AnimationPathCallback::AnimationPathCallback(const osg::AnimationPathCallback & apc, const osg::CopyOp & copyop) function, expected prototype:\nosg::AnimationPathCallback::AnimationPathCallback(const osg::AnimationPathCallback & apc, const osg::CopyOp & copyop)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		const osg::AnimationPathCallback* apc_ptr=(Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1));
		if( !apc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg apc in osg::AnimationPathCallback::AnimationPathCallback function");
		}
		const osg::AnimationPathCallback & apc=*apc_ptr;
		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::AnimationPathCallback::AnimationPathCallback function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		return new osg::AnimationPathCallback(apc, copyop);
	}

	// osg::AnimationPathCallback::AnimationPathCallback(osg::AnimationPath * ap, double timeOffset = 0.0, double timeMultiplier = 1.0)
	static osg::AnimationPathCallback* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::AnimationPathCallback::AnimationPathCallback(osg::AnimationPath * ap, double timeOffset = 0.0, double timeMultiplier = 1.0) function, expected prototype:\nosg::AnimationPathCallback::AnimationPathCallback(osg::AnimationPath * ap, double timeOffset = 0.0, double timeMultiplier = 1.0)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::AnimationPath* ap=(Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1));
		double timeOffset=luatop>1 ? (double)lua_tonumber(L,2) : (double)0.0;
		double timeMultiplier=luatop>2 ? (double)lua_tonumber(L,3) : (double)1.0;

		return new osg::AnimationPathCallback(ap, timeOffset, timeMultiplier);
	}

	// osg::AnimationPathCallback::AnimationPathCallback(const osg::Vec3d & pivot, const osg::Vec3d & axis, float angularVelocity)
	static osg::AnimationPathCallback* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::AnimationPathCallback::AnimationPathCallback(const osg::Vec3d & pivot, const osg::Vec3d & axis, float angularVelocity) function, expected prototype:\nosg::AnimationPathCallback::AnimationPathCallback(const osg::Vec3d & pivot, const osg::Vec3d & axis, float angularVelocity)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\n");
		}

		const osg::Vec3d* pivot_ptr=(Luna< osg::Vec3d >::check(L,1));
		if( !pivot_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pivot in osg::AnimationPathCallback::AnimationPathCallback function");
		}
		const osg::Vec3d & pivot=*pivot_ptr;
		const osg::Vec3d* axis_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in osg::AnimationPathCallback::AnimationPathCallback function");
		}
		const osg::Vec3d & axis=*axis_ptr;
		float angularVelocity=(float)lua_tonumber(L,3);

		return new osg::AnimationPathCallback(pivot, axis, angularVelocity);
	}

	// osg::AnimationPathCallback::AnimationPathCallback(lua_Table * data)
	static osg::AnimationPathCallback* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::AnimationPathCallback::AnimationPathCallback(lua_Table * data) function, expected prototype:\nosg::AnimationPathCallback::AnimationPathCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_AnimationPathCallback(L,NULL);
	}

	// osg::AnimationPathCallback::AnimationPathCallback(lua_Table * data, const osg::AnimationPathCallback & apc, const osg::CopyOp & copyop)
	static osg::AnimationPathCallback* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::AnimationPathCallback::AnimationPathCallback(lua_Table * data, const osg::AnimationPathCallback & apc, const osg::CopyOp & copyop) function, expected prototype:\nosg::AnimationPathCallback::AnimationPathCallback(lua_Table * data, const osg::AnimationPathCallback & apc, const osg::CopyOp & copyop)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		const osg::AnimationPathCallback* apc_ptr=(Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,2));
		if( !apc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg apc in osg::AnimationPathCallback::AnimationPathCallback function");
		}
		const osg::AnimationPathCallback & apc=*apc_ptr;
		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,3));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::AnimationPathCallback::AnimationPathCallback function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		return new wrapper_osg_AnimationPathCallback(L,NULL, apc, copyop);
	}

	// osg::AnimationPathCallback::AnimationPathCallback(lua_Table * data, osg::AnimationPath * ap, double timeOffset = 0.0, double timeMultiplier = 1.0)
	static osg::AnimationPathCallback* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::AnimationPathCallback::AnimationPathCallback(lua_Table * data, osg::AnimationPath * ap, double timeOffset = 0.0, double timeMultiplier = 1.0) function, expected prototype:\nosg::AnimationPathCallback::AnimationPathCallback(lua_Table * data, osg::AnimationPath * ap, double timeOffset = 0.0, double timeMultiplier = 1.0)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::AnimationPath* ap=(Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,2));
		double timeOffset=luatop>2 ? (double)lua_tonumber(L,3) : (double)0.0;
		double timeMultiplier=luatop>3 ? (double)lua_tonumber(L,4) : (double)1.0;

		return new wrapper_osg_AnimationPathCallback(L,NULL, ap, timeOffset, timeMultiplier);
	}

	// osg::AnimationPathCallback::AnimationPathCallback(lua_Table * data, const osg::Vec3d & pivot, const osg::Vec3d & axis, float angularVelocity)
	static osg::AnimationPathCallback* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::AnimationPathCallback::AnimationPathCallback(lua_Table * data, const osg::Vec3d & pivot, const osg::Vec3d & axis, float angularVelocity) function, expected prototype:\nosg::AnimationPathCallback::AnimationPathCallback(lua_Table * data, const osg::Vec3d & pivot, const osg::Vec3d & axis, float angularVelocity)\nClass arguments details:\narg 2 ID = 92303202\narg 3 ID = 92303202\n");
		}

		const osg::Vec3d* pivot_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !pivot_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pivot in osg::AnimationPathCallback::AnimationPathCallback function");
		}
		const osg::Vec3d & pivot=*pivot_ptr;
		const osg::Vec3d* axis_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in osg::AnimationPathCallback::AnimationPathCallback function");
		}
		const osg::Vec3d & axis=*axis_ptr;
		float angularVelocity=(float)lua_tonumber(L,4);

		return new wrapper_osg_AnimationPathCallback(L,NULL, pivot, axis, angularVelocity);
	}

	// Overload binder for osg::AnimationPathCallback::AnimationPathCallback
	static osg::AnimationPathCallback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);

		luaL_error(L, "error in function AnimationPathCallback, cannot match any of the overloads for function AnimationPathCallback:\n  AnimationPathCallback()\n  AnimationPathCallback(const osg::AnimationPathCallback &, const osg::CopyOp &)\n  AnimationPathCallback(osg::AnimationPath *, double, double)\n  AnimationPathCallback(const osg::Vec3d &, const osg::Vec3d &, float)\n  AnimationPathCallback(lua_Table *)\n  AnimationPathCallback(lua_Table *, const osg::AnimationPathCallback &, const osg::CopyOp &)\n  AnimationPathCallback(lua_Table *, osg::AnimationPath *, double, double)\n  AnimationPathCallback(lua_Table *, const osg::Vec3d &, const osg::Vec3d &, float)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::AnimationPathCallback::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::AnimationPathCallback::cloneType() const function, expected prototype:\nosg::Object * osg::AnimationPathCallback::cloneType() const\nClass arguments details:\n");
		}


		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::AnimationPathCallback::cloneType() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::AnimationPathCallback::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::AnimationPathCallback::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::AnimationPathCallback::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::AnimationPathCallback::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::AnimationPathCallback::clone(const osg::CopyOp &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::AnimationPathCallback::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::AnimationPathCallback::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::AnimationPathCallback::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::AnimationPathCallback::isSameKindAs(const osg::Object *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::AnimationPathCallback::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::AnimationPathCallback::libraryName() const function, expected prototype:\nconst char * osg::AnimationPathCallback::libraryName() const\nClass arguments details:\n");
		}


		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::AnimationPathCallback::libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::AnimationPathCallback::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::AnimationPathCallback::className() const function, expected prototype:\nconst char * osg::AnimationPathCallback::className() const\nClass arguments details:\n");
		}


		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::AnimationPathCallback::className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::AnimationPathCallback::setAnimationPath(osg::AnimationPath * path)
	static int _bind_setAnimationPath(lua_State *L) {
		if (!_lg_typecheck_setAnimationPath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AnimationPathCallback::setAnimationPath(osg::AnimationPath * path) function, expected prototype:\nvoid osg::AnimationPathCallback::setAnimationPath(osg::AnimationPath * path)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::AnimationPath* path=(Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,2));

		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AnimationPathCallback::setAnimationPath(osg::AnimationPath *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setAnimationPath(path);

		return 0;
	}

	// osg::AnimationPath * osg::AnimationPathCallback::getAnimationPath()
	static int _bind_getAnimationPath_overload_1(lua_State *L) {
		if (!_lg_typecheck_getAnimationPath_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::AnimationPath * osg::AnimationPathCallback::getAnimationPath() function, expected prototype:\nosg::AnimationPath * osg::AnimationPathCallback::getAnimationPath()\nClass arguments details:\n");
		}


		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::AnimationPath * osg::AnimationPathCallback::getAnimationPath(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::AnimationPath * lret = self->getAnimationPath();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::AnimationPath >::push(L,lret,false);

		return 1;
	}

	// const osg::AnimationPath * osg::AnimationPathCallback::getAnimationPath() const
	static int _bind_getAnimationPath_overload_2(lua_State *L) {
		if (!_lg_typecheck_getAnimationPath_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::AnimationPath * osg::AnimationPathCallback::getAnimationPath() const function, expected prototype:\nconst osg::AnimationPath * osg::AnimationPathCallback::getAnimationPath() const\nClass arguments details:\n");
		}


		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::AnimationPath * osg::AnimationPathCallback::getAnimationPath() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::AnimationPath * lret = self->getAnimationPath();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::AnimationPath >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::AnimationPathCallback::getAnimationPath
	static int _bind_getAnimationPath(lua_State *L) {
		if (_lg_typecheck_getAnimationPath_overload_1(L)) return _bind_getAnimationPath_overload_1(L);
		if (_lg_typecheck_getAnimationPath_overload_2(L)) return _bind_getAnimationPath_overload_2(L);

		luaL_error(L, "error in function getAnimationPath, cannot match any of the overloads for function getAnimationPath:\n  getAnimationPath()\n  getAnimationPath()\n");
		return 0;
	}

	// void osg::AnimationPathCallback::setPivotPoint(const osg::Vec3d & pivot)
	static int _bind_setPivotPoint(lua_State *L) {
		if (!_lg_typecheck_setPivotPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AnimationPathCallback::setPivotPoint(const osg::Vec3d & pivot) function, expected prototype:\nvoid osg::AnimationPathCallback::setPivotPoint(const osg::Vec3d & pivot)\nClass arguments details:\narg 1 ID = 92303202\n");
		}

		const osg::Vec3d* pivot_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !pivot_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pivot in osg::AnimationPathCallback::setPivotPoint function");
		}
		const osg::Vec3d & pivot=*pivot_ptr;

		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AnimationPathCallback::setPivotPoint(const osg::Vec3d &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setPivotPoint(pivot);

		return 0;
	}

	// const osg::Vec3d & osg::AnimationPathCallback::getPivotPoint() const
	static int _bind_getPivotPoint(lua_State *L) {
		if (!_lg_typecheck_getPivotPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3d & osg::AnimationPathCallback::getPivotPoint() const function, expected prototype:\nconst osg::Vec3d & osg::AnimationPathCallback::getPivotPoint() const\nClass arguments details:\n");
		}


		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3d & osg::AnimationPathCallback::getPivotPoint() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::Vec3d* lret = &self->getPivotPoint();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// void osg::AnimationPathCallback::setUseInverseMatrix(bool useInverseMatrix)
	static int _bind_setUseInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_setUseInverseMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AnimationPathCallback::setUseInverseMatrix(bool useInverseMatrix) function, expected prototype:\nvoid osg::AnimationPathCallback::setUseInverseMatrix(bool useInverseMatrix)\nClass arguments details:\n");
		}

		bool useInverseMatrix=(bool)(lua_toboolean(L,2)==1);

		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AnimationPathCallback::setUseInverseMatrix(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setUseInverseMatrix(useInverseMatrix);

		return 0;
	}

	// bool osg::AnimationPathCallback::getUseInverseMatrix() const
	static int _bind_getUseInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_getUseInverseMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::AnimationPathCallback::getUseInverseMatrix() const function, expected prototype:\nbool osg::AnimationPathCallback::getUseInverseMatrix() const\nClass arguments details:\n");
		}


		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::AnimationPathCallback::getUseInverseMatrix() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->getUseInverseMatrix();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::AnimationPathCallback::setTimeOffset(double offset)
	static int _bind_setTimeOffset(lua_State *L) {
		if (!_lg_typecheck_setTimeOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AnimationPathCallback::setTimeOffset(double offset) function, expected prototype:\nvoid osg::AnimationPathCallback::setTimeOffset(double offset)\nClass arguments details:\n");
		}

		double offset=(double)lua_tonumber(L,2);

		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AnimationPathCallback::setTimeOffset(double). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setTimeOffset(offset);

		return 0;
	}

	// double osg::AnimationPathCallback::getTimeOffset() const
	static int _bind_getTimeOffset(lua_State *L) {
		if (!_lg_typecheck_getTimeOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::AnimationPathCallback::getTimeOffset() const function, expected prototype:\ndouble osg::AnimationPathCallback::getTimeOffset() const\nClass arguments details:\n");
		}


		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::AnimationPathCallback::getTimeOffset() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		double lret = self->getTimeOffset();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::AnimationPathCallback::setTimeMultiplier(double multiplier)
	static int _bind_setTimeMultiplier(lua_State *L) {
		if (!_lg_typecheck_setTimeMultiplier(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AnimationPathCallback::setTimeMultiplier(double multiplier) function, expected prototype:\nvoid osg::AnimationPathCallback::setTimeMultiplier(double multiplier)\nClass arguments details:\n");
		}

		double multiplier=(double)lua_tonumber(L,2);

		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AnimationPathCallback::setTimeMultiplier(double). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setTimeMultiplier(multiplier);

		return 0;
	}

	// double osg::AnimationPathCallback::getTimeMultiplier() const
	static int _bind_getTimeMultiplier(lua_State *L) {
		if (!_lg_typecheck_getTimeMultiplier(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::AnimationPathCallback::getTimeMultiplier() const function, expected prototype:\ndouble osg::AnimationPathCallback::getTimeMultiplier() const\nClass arguments details:\n");
		}


		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::AnimationPathCallback::getTimeMultiplier() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		double lret = self->getTimeMultiplier();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::AnimationPathCallback::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AnimationPathCallback::reset() function, expected prototype:\nvoid osg::AnimationPathCallback::reset()\nClass arguments details:\n");
		}


		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AnimationPathCallback::reset(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->reset();

		return 0;
	}

	// void osg::AnimationPathCallback::setPause(bool pause)
	static int _bind_setPause(lua_State *L) {
		if (!_lg_typecheck_setPause(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AnimationPathCallback::setPause(bool pause) function, expected prototype:\nvoid osg::AnimationPathCallback::setPause(bool pause)\nClass arguments details:\n");
		}

		bool pause=(bool)(lua_toboolean(L,2)==1);

		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AnimationPathCallback::setPause(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setPause(pause);

		return 0;
	}

	// bool osg::AnimationPathCallback::getPause() const
	static int _bind_getPause(lua_State *L) {
		if (!_lg_typecheck_getPause(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::AnimationPathCallback::getPause() const function, expected prototype:\nbool osg::AnimationPathCallback::getPause() const\nClass arguments details:\n");
		}


		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::AnimationPathCallback::getPause() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->getPause();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// double osg::AnimationPathCallback::getAnimationTime() const
	static int _bind_getAnimationTime(lua_State *L) {
		if (!_lg_typecheck_getAnimationTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::AnimationPathCallback::getAnimationTime() const function, expected prototype:\ndouble osg::AnimationPathCallback::getAnimationTime() const\nClass arguments details:\n");
		}


		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::AnimationPathCallback::getAnimationTime() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		double lret = self->getAnimationTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::AnimationPathCallback::update(osg::Node & node)
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AnimationPathCallback::update(osg::Node & node) function, expected prototype:\nvoid osg::AnimationPathCallback::update(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::AnimationPathCallback::update function");
		}
		osg::Node & node=*node_ptr;

		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AnimationPathCallback::update(osg::Node &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->update(node);

		return 0;
	}

	// double osg::AnimationPathCallback::_firstTime()
	static int _bind_getFirstTime(lua_State *L) {
		if (!_lg_typecheck_getFirstTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::AnimationPathCallback::_firstTime() function, expected prototype:\ndouble osg::AnimationPathCallback::_firstTime()\nClass arguments details:\n");
		}


		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::AnimationPathCallback::_firstTime(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		double lret = self->_firstTime;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::AnimationPathCallback::_latestTime()
	static int _bind_getLatestTime(lua_State *L) {
		if (!_lg_typecheck_getLatestTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::AnimationPathCallback::_latestTime() function, expected prototype:\ndouble osg::AnimationPathCallback::_latestTime()\nClass arguments details:\n");
		}


		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::AnimationPathCallback::_latestTime(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		double lret = self->_latestTime;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::AnimationPathCallback::_pauseTime()
	static int _bind_getPauseTime(lua_State *L) {
		if (!_lg_typecheck_getPauseTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::AnimationPathCallback::_pauseTime() function, expected prototype:\ndouble osg::AnimationPathCallback::_pauseTime()\nClass arguments details:\n");
		}


		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::AnimationPathCallback::_pauseTime(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		double lret = self->_pauseTime;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::AnimationPathCallback::_firstTime(double value)
	static int _bind_setFirstTime(lua_State *L) {
		if (!_lg_typecheck_setFirstTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AnimationPathCallback::_firstTime(double value) function, expected prototype:\nvoid osg::AnimationPathCallback::_firstTime(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AnimationPathCallback::_firstTime(double). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_firstTime = value;

		return 0;
	}

	// void osg::AnimationPathCallback::_latestTime(double value)
	static int _bind_setLatestTime(lua_State *L) {
		if (!_lg_typecheck_setLatestTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AnimationPathCallback::_latestTime(double value) function, expected prototype:\nvoid osg::AnimationPathCallback::_latestTime(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AnimationPathCallback::_latestTime(double). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_latestTime = value;

		return 0;
	}

	// void osg::AnimationPathCallback::_pauseTime(double value)
	static int _bind_setPauseTime(lua_State *L) {
		if (!_lg_typecheck_setPauseTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AnimationPathCallback::_pauseTime(double value) function, expected prototype:\nvoid osg::AnimationPathCallback::_pauseTime(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AnimationPathCallback::_pauseTime(double). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->_pauseTime = value;

		return 0;
	}

	// void osg::AnimationPathCallback::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AnimationPathCallback::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::AnimationPathCallback::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AnimationPathCallback::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->AnimationPathCallback::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::AnimationPathCallback::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AnimationPathCallback::base_setName(const std::string & name) function, expected prototype:\nvoid osg::AnimationPathCallback::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AnimationPathCallback::base_setName(const std::string &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->AnimationPathCallback::setName(name);

		return 0;
	}

	// void osg::AnimationPathCallback::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AnimationPathCallback::base_computeDataVariance() function, expected prototype:\nvoid osg::AnimationPathCallback::base_computeDataVariance()\nClass arguments details:\n");
		}


		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AnimationPathCallback::base_computeDataVariance(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->AnimationPathCallback::computeDataVariance();

		return 0;
	}

	// void osg::AnimationPathCallback::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AnimationPathCallback::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::AnimationPathCallback::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AnimationPathCallback::base_setUserData(osg::Referenced *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->AnimationPathCallback::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::AnimationPathCallback::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::AnimationPathCallback::base_getUserData() function, expected prototype:\nosg::Referenced * osg::AnimationPathCallback::base_getUserData()\nClass arguments details:\n");
		}


		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::AnimationPathCallback::base_getUserData(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Referenced * lret = self->AnimationPathCallback::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::AnimationPathCallback::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::AnimationPathCallback::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::AnimationPathCallback::base_getUserData() const\nClass arguments details:\n");
		}


		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::AnimationPathCallback::base_getUserData() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::Referenced * lret = self->AnimationPathCallback::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::AnimationPathCallback::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::AnimationPathCallback::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AnimationPathCallback::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::AnimationPathCallback::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AnimationPathCallback::base_releaseGLObjects(osg::State *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->AnimationPathCallback::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::AnimationPathCallback::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::AnimationPathCallback::base_cloneType() const function, expected prototype:\nosg::Object * osg::AnimationPathCallback::base_cloneType() const\nClass arguments details:\n");
		}


		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::AnimationPathCallback::base_cloneType() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->AnimationPathCallback::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::AnimationPathCallback::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::AnimationPathCallback::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::AnimationPathCallback::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::AnimationPathCallback::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::AnimationPathCallback::base_clone(const osg::CopyOp &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->AnimationPathCallback::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::AnimationPathCallback::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::AnimationPathCallback::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::AnimationPathCallback::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::AnimationPathCallback::base_isSameKindAs(const osg::Object *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->AnimationPathCallback::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::AnimationPathCallback::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::AnimationPathCallback::base_libraryName() const function, expected prototype:\nconst char * osg::AnimationPathCallback::base_libraryName() const\nClass arguments details:\n");
		}


		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::AnimationPathCallback::base_libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->AnimationPathCallback::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::AnimationPathCallback::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::AnimationPathCallback::base_className() const function, expected prototype:\nconst char * osg::AnimationPathCallback::base_className() const\nClass arguments details:\n");
		}


		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::AnimationPathCallback::base_className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->AnimationPathCallback::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::AnimationPathCallback::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AnimationPathCallback::base_reset() function, expected prototype:\nvoid osg::AnimationPathCallback::base_reset()\nClass arguments details:\n");
		}


		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AnimationPathCallback::base_reset(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->AnimationPathCallback::reset();

		return 0;
	}

	// double osg::AnimationPathCallback::base_getAnimationTime() const
	static int _bind_base_getAnimationTime(lua_State *L) {
		if (!_lg_typecheck_base_getAnimationTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::AnimationPathCallback::base_getAnimationTime() const function, expected prototype:\ndouble osg::AnimationPathCallback::base_getAnimationTime() const\nClass arguments details:\n");
		}


		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::AnimationPathCallback::base_getAnimationTime() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		double lret = self->AnimationPathCallback::getAnimationTime();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:
	// void osg::AnimationPathCallback::operator()(osg::Node * node, osg::NodeVisitor * nv)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AnimationPathCallback::operator()(osg::Node * node, osg::NodeVisitor * nv) function, expected prototype:\nvoid osg::AnimationPathCallback::operator()(osg::Node * node, osg::NodeVisitor * nv)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osg::AnimationPathCallback* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPathCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AnimationPathCallback::operator()(osg::Node *, osg::NodeVisitor *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->operator()(node, nv);

		return 0;
	}


};

osg::AnimationPathCallback* LunaTraits< osg::AnimationPathCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_AnimationPathCallback::_bind_ctor(L);
}

void LunaTraits< osg::AnimationPathCallback >::_bind_dtor(osg::AnimationPathCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::AnimationPathCallback >::className[] = "AnimationPathCallback";
const char LunaTraits< osg::AnimationPathCallback >::fullName[] = "osg::AnimationPathCallback";
const char LunaTraits< osg::AnimationPathCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::AnimationPathCallback >::parents[] = {"osg.NodeCallback", 0};
const int LunaTraits< osg::AnimationPathCallback >::hash = 29559358;
const int LunaTraits< osg::AnimationPathCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::AnimationPathCallback >::methods[] = {
	{"cloneType", &luna_wrapper_osg_AnimationPathCallback::_bind_cloneType},
	{"clone", &luna_wrapper_osg_AnimationPathCallback::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_AnimationPathCallback::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_AnimationPathCallback::_bind_libraryName},
	{"className", &luna_wrapper_osg_AnimationPathCallback::_bind_className},
	{"setAnimationPath", &luna_wrapper_osg_AnimationPathCallback::_bind_setAnimationPath},
	{"getAnimationPath", &luna_wrapper_osg_AnimationPathCallback::_bind_getAnimationPath},
	{"setPivotPoint", &luna_wrapper_osg_AnimationPathCallback::_bind_setPivotPoint},
	{"getPivotPoint", &luna_wrapper_osg_AnimationPathCallback::_bind_getPivotPoint},
	{"setUseInverseMatrix", &luna_wrapper_osg_AnimationPathCallback::_bind_setUseInverseMatrix},
	{"getUseInverseMatrix", &luna_wrapper_osg_AnimationPathCallback::_bind_getUseInverseMatrix},
	{"setTimeOffset", &luna_wrapper_osg_AnimationPathCallback::_bind_setTimeOffset},
	{"getTimeOffset", &luna_wrapper_osg_AnimationPathCallback::_bind_getTimeOffset},
	{"setTimeMultiplier", &luna_wrapper_osg_AnimationPathCallback::_bind_setTimeMultiplier},
	{"getTimeMultiplier", &luna_wrapper_osg_AnimationPathCallback::_bind_getTimeMultiplier},
	{"reset", &luna_wrapper_osg_AnimationPathCallback::_bind_reset},
	{"setPause", &luna_wrapper_osg_AnimationPathCallback::_bind_setPause},
	{"getPause", &luna_wrapper_osg_AnimationPathCallback::_bind_getPause},
	{"getAnimationTime", &luna_wrapper_osg_AnimationPathCallback::_bind_getAnimationTime},
	{"update", &luna_wrapper_osg_AnimationPathCallback::_bind_update},
	{"getFirstTime", &luna_wrapper_osg_AnimationPathCallback::_bind_getFirstTime},
	{"getLatestTime", &luna_wrapper_osg_AnimationPathCallback::_bind_getLatestTime},
	{"getPauseTime", &luna_wrapper_osg_AnimationPathCallback::_bind_getPauseTime},
	{"setFirstTime", &luna_wrapper_osg_AnimationPathCallback::_bind_setFirstTime},
	{"setLatestTime", &luna_wrapper_osg_AnimationPathCallback::_bind_setLatestTime},
	{"setPauseTime", &luna_wrapper_osg_AnimationPathCallback::_bind_setPauseTime},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_AnimationPathCallback::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_AnimationPathCallback::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_AnimationPathCallback::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_AnimationPathCallback::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_AnimationPathCallback::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_AnimationPathCallback::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_AnimationPathCallback::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_AnimationPathCallback::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_AnimationPathCallback::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_AnimationPathCallback::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_AnimationPathCallback::_bind_base_className},
	{"base_reset", &luna_wrapper_osg_AnimationPathCallback::_bind_base_reset},
	{"base_getAnimationTime", &luna_wrapper_osg_AnimationPathCallback::_bind_base_getAnimationTime},
	{"op_call", &luna_wrapper_osg_AnimationPathCallback::_bind_op_call},
	{"__eq", &luna_wrapper_osg_AnimationPathCallback::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_AnimationPathCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_AnimationPathCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_AnimationPathCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::AnimationPathCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_AnimationPathCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::AnimationPathCallback >::enumValues[] = {
	{0,0}
};


