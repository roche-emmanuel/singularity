#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_ImageStream.h>

class luna_wrapper_osg_ImageStream {
public:
	typedef Luna< osg::ImageStream > luna_t;

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
		//osg::ImageStream* ptr= dynamic_cast< osg::ImageStream* >(Luna< osg::Referenced >::check(L,1));
		osg::ImageStream* ptr= luna_caster< osg::Referenced, osg::ImageStream >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ImageStream >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
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

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_seek(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_play(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_pause(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_rewind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_quit(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStatus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLoopingMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLoopingMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCreationTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFrameRate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setReferenceTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReferenceTime(lua_State *L) {
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

	inline static bool _lg_typecheck_setVolume(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVolume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAudioStreams(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,83757031) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAudioStreams_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAudioStreams_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_getDataPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getTotalDataSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_allocateImage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>7 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setImage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<9 || luatop>10 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( luatop>9 && (lua_isnumber(L,10)==0 || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_readPixels(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_readImageFromCurrentTexture(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_scaleImage(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_copySubImage(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_isImageTranslucent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_requiresUpdateCall(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_update(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_sendFocusHint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_sendPointerEvent(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_sendKeyEvent(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setFrameLastRendered(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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

	inline static bool _lg_typecheck_base_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_seek(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_play(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_pause(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_rewind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_quit(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getCreationTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getFrameRate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setReferenceTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getReferenceTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setTimeMultiplier(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getTimeMultiplier(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setVolume(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getVolume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ImageStream::ImageStream()
	static osg::ImageStream* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ImageStream::ImageStream() function, expected prototype:\nosg::ImageStream::ImageStream()\nClass arguments details:\n");
		}


		return new osg::ImageStream();
	}

	// osg::ImageStream::ImageStream(const osg::ImageStream & image, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ImageStream* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ImageStream::ImageStream(const osg::ImageStream & image, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ImageStream::ImageStream(const osg::ImageStream & image, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::ImageStream* image_ptr=(Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1));
		if( !image_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg image in osg::ImageStream::ImageStream function");
		}
		const osg::ImageStream & image=*image_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ImageStream::ImageStream function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::ImageStream(image, copyop);
	}

	// osg::ImageStream::ImageStream(lua_Table * data)
	static osg::ImageStream* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ImageStream::ImageStream(lua_Table * data) function, expected prototype:\nosg::ImageStream::ImageStream(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_ImageStream(L,NULL);
	}

	// osg::ImageStream::ImageStream(lua_Table * data, const osg::ImageStream & image, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ImageStream* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ImageStream::ImageStream(lua_Table * data, const osg::ImageStream & image, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ImageStream::ImageStream(lua_Table * data, const osg::ImageStream & image, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::ImageStream* image_ptr=(Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,2));
		if( !image_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg image in osg::ImageStream::ImageStream function");
		}
		const osg::ImageStream & image=*image_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ImageStream::ImageStream function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_ImageStream(L,NULL, image, copyop);
	}

	// Overload binder for osg::ImageStream::ImageStream
	static osg::ImageStream* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ImageStream, cannot match any of the overloads for function ImageStream:\n  ImageStream()\n  ImageStream(const osg::ImageStream &, const osg::CopyOp &)\n  ImageStream(lua_Table *)\n  ImageStream(lua_Table *, const osg::ImageStream &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::ImageStream::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ImageStream::cloneType() const function, expected prototype:\nosg::Object * osg::ImageStream::cloneType() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ImageStream::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ImageStream::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ImageStream::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::ImageStream::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ImageStream::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ImageStream::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ImageStream::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ImageStream::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ImageStream::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ImageStream::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ImageStream::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ImageStream::libraryName() const function, expected prototype:\nconst char * osg::ImageStream::libraryName() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ImageStream::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ImageStream::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ImageStream::className() const function, expected prototype:\nconst char * osg::ImageStream::className() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ImageStream::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// int osg::ImageStream::compare(const osg::Image & rhs) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::ImageStream::compare(const osg::Image & rhs) const function, expected prototype:\nint osg::ImageStream::compare(const osg::Image & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Image* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::ImageStream::compare function");
		}
		const osg::Image & rhs=*rhs_ptr;

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::ImageStream::compare(const osg::Image &) const");
		}
		int lret = self->compare(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageStream::seek(double arg1)
	static int _bind_seek(lua_State *L) {
		if (!_lg_typecheck_seek(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::seek(double arg1) function, expected prototype:\nvoid osg::ImageStream::seek(double arg1)\nClass arguments details:\n");
		}

		double _arg1=(double)lua_tonumber(L,2);

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::seek(double)");
		}
		self->seek(_arg1);

		return 0;
	}

	// void osg::ImageStream::play()
	static int _bind_play(lua_State *L) {
		if (!_lg_typecheck_play(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::play() function, expected prototype:\nvoid osg::ImageStream::play()\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::play()");
		}
		self->play();

		return 0;
	}

	// void osg::ImageStream::pause()
	static int _bind_pause(lua_State *L) {
		if (!_lg_typecheck_pause(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::pause() function, expected prototype:\nvoid osg::ImageStream::pause()\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::pause()");
		}
		self->pause();

		return 0;
	}

	// void osg::ImageStream::rewind()
	static int _bind_rewind(lua_State *L) {
		if (!_lg_typecheck_rewind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::rewind() function, expected prototype:\nvoid osg::ImageStream::rewind()\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::rewind()");
		}
		self->rewind();

		return 0;
	}

	// void osg::ImageStream::quit(bool arg1 = true)
	static int _bind_quit(lua_State *L) {
		if (!_lg_typecheck_quit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::quit(bool arg1 = true) function, expected prototype:\nvoid osg::ImageStream::quit(bool arg1 = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool _arg1=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::quit(bool)");
		}
		self->quit(_arg1);

		return 0;
	}

	// osg::ImageStream::StreamStatus osg::ImageStream::getStatus()
	static int _bind_getStatus(lua_State *L) {
		if (!_lg_typecheck_getStatus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ImageStream::StreamStatus osg::ImageStream::getStatus() function, expected prototype:\nosg::ImageStream::StreamStatus osg::ImageStream::getStatus()\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ImageStream::StreamStatus osg::ImageStream::getStatus()");
		}
		osg::ImageStream::StreamStatus lret = self->getStatus();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageStream::setLoopingMode(osg::ImageStream::LoopingMode mode)
	static int _bind_setLoopingMode(lua_State *L) {
		if (!_lg_typecheck_setLoopingMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::setLoopingMode(osg::ImageStream::LoopingMode mode) function, expected prototype:\nvoid osg::ImageStream::setLoopingMode(osg::ImageStream::LoopingMode mode)\nClass arguments details:\n");
		}

		osg::ImageStream::LoopingMode mode=(osg::ImageStream::LoopingMode)lua_tointeger(L,2);

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::setLoopingMode(osg::ImageStream::LoopingMode)");
		}
		self->setLoopingMode(mode);

		return 0;
	}

	// osg::ImageStream::LoopingMode osg::ImageStream::getLoopingMode() const
	static int _bind_getLoopingMode(lua_State *L) {
		if (!_lg_typecheck_getLoopingMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ImageStream::LoopingMode osg::ImageStream::getLoopingMode() const function, expected prototype:\nosg::ImageStream::LoopingMode osg::ImageStream::getLoopingMode() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ImageStream::LoopingMode osg::ImageStream::getLoopingMode() const");
		}
		osg::ImageStream::LoopingMode lret = self->getLoopingMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::ImageStream::getCreationTime() const
	static int _bind_getCreationTime(lua_State *L) {
		if (!_lg_typecheck_getCreationTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::ImageStream::getCreationTime() const function, expected prototype:\ndouble osg::ImageStream::getCreationTime() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::ImageStream::getCreationTime() const");
		}
		double lret = self->getCreationTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::ImageStream::getLength() const
	static int _bind_getLength(lua_State *L) {
		if (!_lg_typecheck_getLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::ImageStream::getLength() const function, expected prototype:\ndouble osg::ImageStream::getLength() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::ImageStream::getLength() const");
		}
		double lret = self->getLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::ImageStream::getFrameRate() const
	static int _bind_getFrameRate(lua_State *L) {
		if (!_lg_typecheck_getFrameRate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::ImageStream::getFrameRate() const function, expected prototype:\ndouble osg::ImageStream::getFrameRate() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::ImageStream::getFrameRate() const");
		}
		double lret = self->getFrameRate();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageStream::setReferenceTime(double arg1)
	static int _bind_setReferenceTime(lua_State *L) {
		if (!_lg_typecheck_setReferenceTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::setReferenceTime(double arg1) function, expected prototype:\nvoid osg::ImageStream::setReferenceTime(double arg1)\nClass arguments details:\n");
		}

		double _arg1=(double)lua_tonumber(L,2);

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::setReferenceTime(double)");
		}
		self->setReferenceTime(_arg1);

		return 0;
	}

	// double osg::ImageStream::getReferenceTime() const
	static int _bind_getReferenceTime(lua_State *L) {
		if (!_lg_typecheck_getReferenceTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::ImageStream::getReferenceTime() const function, expected prototype:\ndouble osg::ImageStream::getReferenceTime() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::ImageStream::getReferenceTime() const");
		}
		double lret = self->getReferenceTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageStream::setTimeMultiplier(double arg1)
	static int _bind_setTimeMultiplier(lua_State *L) {
		if (!_lg_typecheck_setTimeMultiplier(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::setTimeMultiplier(double arg1) function, expected prototype:\nvoid osg::ImageStream::setTimeMultiplier(double arg1)\nClass arguments details:\n");
		}

		double _arg1=(double)lua_tonumber(L,2);

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::setTimeMultiplier(double)");
		}
		self->setTimeMultiplier(_arg1);

		return 0;
	}

	// double osg::ImageStream::getTimeMultiplier() const
	static int _bind_getTimeMultiplier(lua_State *L) {
		if (!_lg_typecheck_getTimeMultiplier(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::ImageStream::getTimeMultiplier() const function, expected prototype:\ndouble osg::ImageStream::getTimeMultiplier() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::ImageStream::getTimeMultiplier() const");
		}
		double lret = self->getTimeMultiplier();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageStream::setVolume(float arg1)
	static int _bind_setVolume(lua_State *L) {
		if (!_lg_typecheck_setVolume(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::setVolume(float arg1) function, expected prototype:\nvoid osg::ImageStream::setVolume(float arg1)\nClass arguments details:\n");
		}

		float _arg1=(float)lua_tonumber(L,2);

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::setVolume(float)");
		}
		self->setVolume(_arg1);

		return 0;
	}

	// float osg::ImageStream::getVolume() const
	static int _bind_getVolume(lua_State *L) {
		if (!_lg_typecheck_getVolume(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::ImageStream::getVolume() const function, expected prototype:\nfloat osg::ImageStream::getVolume() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::ImageStream::getVolume() const");
		}
		float lret = self->getVolume();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageStream::setAudioStreams(const osg::ImageStream::AudioStreams & asl)
	static int _bind_setAudioStreams(lua_State *L) {
		if (!_lg_typecheck_setAudioStreams(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::setAudioStreams(const osg::ImageStream::AudioStreams & asl) function, expected prototype:\nvoid osg::ImageStream::setAudioStreams(const osg::ImageStream::AudioStreams & asl)\nClass arguments details:\narg 1 ID = 83757031\n");
		}

		const osg::ImageStream::AudioStreams* asl_ptr=(Luna< osg::ImageStream::AudioStreams >::check(L,2));
		if( !asl_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg asl in osg::ImageStream::setAudioStreams function");
		}
		const osg::ImageStream::AudioStreams & asl=*asl_ptr;

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::setAudioStreams(const osg::ImageStream::AudioStreams &)");
		}
		self->setAudioStreams(asl);

		return 0;
	}

	// osg::ImageStream::AudioStreams & osg::ImageStream::getAudioStreams()
	static int _bind_getAudioStreams_overload_1(lua_State *L) {
		if (!_lg_typecheck_getAudioStreams_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ImageStream::AudioStreams & osg::ImageStream::getAudioStreams() function, expected prototype:\nosg::ImageStream::AudioStreams & osg::ImageStream::getAudioStreams()\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ImageStream::AudioStreams & osg::ImageStream::getAudioStreams()");
		}
		const osg::ImageStream::AudioStreams* lret = &self->getAudioStreams();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ImageStream::AudioStreams >::push(L,lret,false);

		return 1;
	}

	// const osg::ImageStream::AudioStreams & osg::ImageStream::getAudioStreams() const
	static int _bind_getAudioStreams_overload_2(lua_State *L) {
		if (!_lg_typecheck_getAudioStreams_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::ImageStream::AudioStreams & osg::ImageStream::getAudioStreams() const function, expected prototype:\nconst osg::ImageStream::AudioStreams & osg::ImageStream::getAudioStreams() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::ImageStream::AudioStreams & osg::ImageStream::getAudioStreams() const");
		}
		const osg::ImageStream::AudioStreams* lret = &self->getAudioStreams();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ImageStream::AudioStreams >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ImageStream::getAudioStreams
	static int _bind_getAudioStreams(lua_State *L) {
		if (_lg_typecheck_getAudioStreams_overload_1(L)) return _bind_getAudioStreams_overload_1(L);
		if (_lg_typecheck_getAudioStreams_overload_2(L)) return _bind_getAudioStreams_overload_2(L);

		luaL_error(L, "error in function getAudioStreams, cannot match any of the overloads for function getAudioStreams:\n  getAudioStreams()\n  getAudioStreams()\n");
		return 0;
	}

	// void osg::ImageStream::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_setName(const std::string & name) function, expected prototype:\nvoid osg::ImageStream::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_setName(const std::string &)");
		}
		self->ImageStream::setName(name);

		return 0;
	}

	// void osg::ImageStream::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_computeDataVariance() function, expected prototype:\nvoid osg::ImageStream::base_computeDataVariance()\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_computeDataVariance()");
		}
		self->ImageStream::computeDataVariance();

		return 0;
	}

	// void osg::ImageStream::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::ImageStream::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_setUserData(osg::Referenced *)");
		}
		self->ImageStream::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::ImageStream::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::ImageStream::base_getUserData() function, expected prototype:\nosg::Referenced * osg::ImageStream::base_getUserData()\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::ImageStream::base_getUserData()");
		}
		osg::Referenced * lret = self->ImageStream::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::ImageStream::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::ImageStream::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::ImageStream::base_getUserData() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::ImageStream::base_getUserData() const");
		}
		const osg::Referenced * lret = self->ImageStream::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ImageStream::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::ImageStream::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::ImageStream::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_releaseGLObjects(osg::State *) const");
		}
		self->ImageStream::releaseGLObjects(state);

		return 0;
	}

	// const void * osg::ImageStream::base_getDataPointer() const
	static int _bind_base_getDataPointer(lua_State *L) {
		if (!_lg_typecheck_base_getDataPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const void * osg::ImageStream::base_getDataPointer() const function, expected prototype:\nconst void * osg::ImageStream::base_getDataPointer() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const void * osg::ImageStream::base_getDataPointer() const");
		}
		const void * lret = self->ImageStream::getDataPointer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// unsigned int osg::ImageStream::base_getTotalDataSize() const
	static int _bind_base_getTotalDataSize(lua_State *L) {
		if (!_lg_typecheck_base_getTotalDataSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::ImageStream::base_getTotalDataSize() const function, expected prototype:\nunsigned int osg::ImageStream::base_getTotalDataSize() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::ImageStream::base_getTotalDataSize() const");
		}
		unsigned int lret = self->ImageStream::getTotalDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageStream::base_allocateImage(int s, int t, int r, unsigned int pixelFormat, unsigned int type, int packing = 1)
	static int _bind_base_allocateImage(lua_State *L) {
		if (!_lg_typecheck_base_allocateImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_allocateImage(int s, int t, int r, unsigned int pixelFormat, unsigned int type, int packing = 1) function, expected prototype:\nvoid osg::ImageStream::base_allocateImage(int s, int t, int r, unsigned int pixelFormat, unsigned int type, int packing = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int s=(int)lua_tointeger(L,2);
		int t=(int)lua_tointeger(L,3);
		int r=(int)lua_tointeger(L,4);
		unsigned int pixelFormat=(unsigned int)lua_tointeger(L,5);
		unsigned int type=(unsigned int)lua_tointeger(L,6);
		int packing=luatop>6 ? (int)lua_tointeger(L,7) : 1;

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_allocateImage(int, int, int, unsigned int, unsigned int, int)");
		}
		self->ImageStream::allocateImage(s, t, r, pixelFormat, type, packing);

		return 0;
	}

	// void osg::ImageStream::base_setImage(int s, int t, int r, int internalTextureformat, unsigned int pixelFormat, unsigned int type, unsigned char * data, osg::Image::AllocationMode mode, int packing = 1)
	static int _bind_base_setImage(lua_State *L) {
		if (!_lg_typecheck_base_setImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_setImage(int s, int t, int r, int internalTextureformat, unsigned int pixelFormat, unsigned int type, unsigned char * data, osg::Image::AllocationMode mode, int packing = 1) function, expected prototype:\nvoid osg::ImageStream::base_setImage(int s, int t, int r, int internalTextureformat, unsigned int pixelFormat, unsigned int type, unsigned char * data, osg::Image::AllocationMode mode, int packing = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int s=(int)lua_tointeger(L,2);
		int t=(int)lua_tointeger(L,3);
		int r=(int)lua_tointeger(L,4);
		int internalTextureformat=(int)lua_tointeger(L,5);
		unsigned int pixelFormat=(unsigned int)lua_tointeger(L,6);
		unsigned int type=(unsigned int)lua_tointeger(L,7);
		unsigned char data = (unsigned char)(lua_tointeger(L,8));
		osg::Image::AllocationMode mode=(osg::Image::AllocationMode)lua_tointeger(L,9);
		int packing=luatop>9 ? (int)lua_tointeger(L,10) : 1;

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_setImage(int, int, int, int, unsigned int, unsigned int, unsigned char *, osg::Image::AllocationMode, int)");
		}
		self->ImageStream::setImage(s, t, r, internalTextureformat, pixelFormat, type, &data, mode, packing);

		return 0;
	}

	// void osg::ImageStream::base_readPixels(int x, int y, int width, int height, unsigned int pixelFormat, unsigned int type)
	static int _bind_base_readPixels(lua_State *L) {
		if (!_lg_typecheck_base_readPixels(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_readPixels(int x, int y, int width, int height, unsigned int pixelFormat, unsigned int type) function, expected prototype:\nvoid osg::ImageStream::base_readPixels(int x, int y, int width, int height, unsigned int pixelFormat, unsigned int type)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);
		unsigned int pixelFormat=(unsigned int)lua_tointeger(L,6);
		unsigned int type=(unsigned int)lua_tointeger(L,7);

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_readPixels(int, int, int, int, unsigned int, unsigned int)");
		}
		self->ImageStream::readPixels(x, y, width, height, pixelFormat, type);

		return 0;
	}

	// void osg::ImageStream::base_readImageFromCurrentTexture(unsigned int contextID, bool copyMipMapsIfAvailable, unsigned int type = GL_UNSIGNED_BYTE)
	static int _bind_base_readImageFromCurrentTexture(lua_State *L) {
		if (!_lg_typecheck_base_readImageFromCurrentTexture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_readImageFromCurrentTexture(unsigned int contextID, bool copyMipMapsIfAvailable, unsigned int type = GL_UNSIGNED_BYTE) function, expected prototype:\nvoid osg::ImageStream::base_readImageFromCurrentTexture(unsigned int contextID, bool copyMipMapsIfAvailable, unsigned int type = GL_UNSIGNED_BYTE)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);
		bool copyMipMapsIfAvailable=(bool)(lua_toboolean(L,3)==1);
		unsigned int type=luatop>3 ? (unsigned int)lua_tointeger(L,4) : GL_UNSIGNED_BYTE;

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_readImageFromCurrentTexture(unsigned int, bool, unsigned int)");
		}
		self->ImageStream::readImageFromCurrentTexture(contextID, copyMipMapsIfAvailable, type);

		return 0;
	}

	// void osg::ImageStream::base_scaleImage(int s, int t, int r, unsigned int newDataType)
	static int _bind_base_scaleImage(lua_State *L) {
		if (!_lg_typecheck_base_scaleImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_scaleImage(int s, int t, int r, unsigned int newDataType) function, expected prototype:\nvoid osg::ImageStream::base_scaleImage(int s, int t, int r, unsigned int newDataType)\nClass arguments details:\n");
		}

		int s=(int)lua_tointeger(L,2);
		int t=(int)lua_tointeger(L,3);
		int r=(int)lua_tointeger(L,4);
		unsigned int newDataType=(unsigned int)lua_tointeger(L,5);

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_scaleImage(int, int, int, unsigned int)");
		}
		self->ImageStream::scaleImage(s, t, r, newDataType);

		return 0;
	}

	// void osg::ImageStream::base_copySubImage(int s_offset, int t_offset, int r_offset, const osg::Image * source)
	static int _bind_base_copySubImage(lua_State *L) {
		if (!_lg_typecheck_base_copySubImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_copySubImage(int s_offset, int t_offset, int r_offset, const osg::Image * source) function, expected prototype:\nvoid osg::ImageStream::base_copySubImage(int s_offset, int t_offset, int r_offset, const osg::Image * source)\nClass arguments details:\narg 4 ID = 50169651\n");
		}

		int s_offset=(int)lua_tointeger(L,2);
		int t_offset=(int)lua_tointeger(L,3);
		int r_offset=(int)lua_tointeger(L,4);
		const osg::Image* source=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,5));

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_copySubImage(int, int, int, const osg::Image *)");
		}
		self->ImageStream::copySubImage(s_offset, t_offset, r_offset, source);

		return 0;
	}

	// bool osg::ImageStream::base_isImageTranslucent() const
	static int _bind_base_isImageTranslucent(lua_State *L) {
		if (!_lg_typecheck_base_isImageTranslucent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ImageStream::base_isImageTranslucent() const function, expected prototype:\nbool osg::ImageStream::base_isImageTranslucent() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ImageStream::base_isImageTranslucent() const");
		}
		bool lret = self->ImageStream::isImageTranslucent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ImageStream::base_requiresUpdateCall() const
	static int _bind_base_requiresUpdateCall(lua_State *L) {
		if (!_lg_typecheck_base_requiresUpdateCall(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ImageStream::base_requiresUpdateCall() const function, expected prototype:\nbool osg::ImageStream::base_requiresUpdateCall() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ImageStream::base_requiresUpdateCall() const");
		}
		bool lret = self->ImageStream::requiresUpdateCall();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ImageStream::base_update(osg::NodeVisitor * arg1)
	static int _bind_base_update(lua_State *L) {
		if (!_lg_typecheck_base_update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_update(osg::NodeVisitor * arg1) function, expected prototype:\nvoid osg::ImageStream::base_update(osg::NodeVisitor * arg1)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* _arg1=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_update(osg::NodeVisitor *)");
		}
		self->ImageStream::update(_arg1);

		return 0;
	}

	// bool osg::ImageStream::base_sendFocusHint(bool arg1)
	static int _bind_base_sendFocusHint(lua_State *L) {
		if (!_lg_typecheck_base_sendFocusHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ImageStream::base_sendFocusHint(bool arg1) function, expected prototype:\nbool osg::ImageStream::base_sendFocusHint(bool arg1)\nClass arguments details:\n");
		}

		bool _arg1=(bool)(lua_toboolean(L,2)==1);

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ImageStream::base_sendFocusHint(bool)");
		}
		bool lret = self->ImageStream::sendFocusHint(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ImageStream::base_sendPointerEvent(int arg1, int arg2, int arg3)
	static int _bind_base_sendPointerEvent(lua_State *L) {
		if (!_lg_typecheck_base_sendPointerEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ImageStream::base_sendPointerEvent(int arg1, int arg2, int arg3) function, expected prototype:\nbool osg::ImageStream::base_sendPointerEvent(int arg1, int arg2, int arg3)\nClass arguments details:\n");
		}

		int _arg1=(int)lua_tointeger(L,2);
		int _arg2=(int)lua_tointeger(L,3);
		int _arg3=(int)lua_tointeger(L,4);

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ImageStream::base_sendPointerEvent(int, int, int)");
		}
		bool lret = self->ImageStream::sendPointerEvent(_arg1, _arg2, _arg3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ImageStream::base_sendKeyEvent(int arg1, bool arg2)
	static int _bind_base_sendKeyEvent(lua_State *L) {
		if (!_lg_typecheck_base_sendKeyEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ImageStream::base_sendKeyEvent(int arg1, bool arg2) function, expected prototype:\nbool osg::ImageStream::base_sendKeyEvent(int arg1, bool arg2)\nClass arguments details:\n");
		}

		int _arg1=(int)lua_tointeger(L,2);
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ImageStream::base_sendKeyEvent(int, bool)");
		}
		bool lret = self->ImageStream::sendKeyEvent(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ImageStream::base_setFrameLastRendered(const osg::FrameStamp * arg1)
	static int _bind_base_setFrameLastRendered(lua_State *L) {
		if (!_lg_typecheck_base_setFrameLastRendered(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_setFrameLastRendered(const osg::FrameStamp * arg1) function, expected prototype:\nvoid osg::ImageStream::base_setFrameLastRendered(const osg::FrameStamp * arg1)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::FrameStamp* _arg1=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,2));

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_setFrameLastRendered(const osg::FrameStamp *)");
		}
		self->ImageStream::setFrameLastRendered(_arg1);

		return 0;
	}

	// osg::Object * osg::ImageStream::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ImageStream::base_cloneType() const function, expected prototype:\nosg::Object * osg::ImageStream::base_cloneType() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ImageStream::base_cloneType() const");
		}
		osg::Object * lret = self->ImageStream::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ImageStream::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ImageStream::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::ImageStream::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ImageStream::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ImageStream::base_clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->ImageStream::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ImageStream::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ImageStream::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ImageStream::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ImageStream::base_isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->ImageStream::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ImageStream::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ImageStream::base_libraryName() const function, expected prototype:\nconst char * osg::ImageStream::base_libraryName() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ImageStream::base_libraryName() const");
		}
		const char * lret = self->ImageStream::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ImageStream::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ImageStream::base_className() const function, expected prototype:\nconst char * osg::ImageStream::base_className() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ImageStream::base_className() const");
		}
		const char * lret = self->ImageStream::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// int osg::ImageStream::base_compare(const osg::Image & rhs) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::ImageStream::base_compare(const osg::Image & rhs) const function, expected prototype:\nint osg::ImageStream::base_compare(const osg::Image & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Image* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::ImageStream::base_compare function");
		}
		const osg::Image & rhs=*rhs_ptr;

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::ImageStream::base_compare(const osg::Image &) const");
		}
		int lret = self->ImageStream::compare(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageStream::base_seek(double arg1)
	static int _bind_base_seek(lua_State *L) {
		if (!_lg_typecheck_base_seek(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_seek(double arg1) function, expected prototype:\nvoid osg::ImageStream::base_seek(double arg1)\nClass arguments details:\n");
		}

		double _arg1=(double)lua_tonumber(L,2);

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_seek(double)");
		}
		self->ImageStream::seek(_arg1);

		return 0;
	}

	// void osg::ImageStream::base_play()
	static int _bind_base_play(lua_State *L) {
		if (!_lg_typecheck_base_play(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_play() function, expected prototype:\nvoid osg::ImageStream::base_play()\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_play()");
		}
		self->ImageStream::play();

		return 0;
	}

	// void osg::ImageStream::base_pause()
	static int _bind_base_pause(lua_State *L) {
		if (!_lg_typecheck_base_pause(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_pause() function, expected prototype:\nvoid osg::ImageStream::base_pause()\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_pause()");
		}
		self->ImageStream::pause();

		return 0;
	}

	// void osg::ImageStream::base_rewind()
	static int _bind_base_rewind(lua_State *L) {
		if (!_lg_typecheck_base_rewind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_rewind() function, expected prototype:\nvoid osg::ImageStream::base_rewind()\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_rewind()");
		}
		self->ImageStream::rewind();

		return 0;
	}

	// void osg::ImageStream::base_quit(bool arg1 = true)
	static int _bind_base_quit(lua_State *L) {
		if (!_lg_typecheck_base_quit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_quit(bool arg1 = true) function, expected prototype:\nvoid osg::ImageStream::base_quit(bool arg1 = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool _arg1=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_quit(bool)");
		}
		self->ImageStream::quit(_arg1);

		return 0;
	}

	// double osg::ImageStream::base_getCreationTime() const
	static int _bind_base_getCreationTime(lua_State *L) {
		if (!_lg_typecheck_base_getCreationTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::ImageStream::base_getCreationTime() const function, expected prototype:\ndouble osg::ImageStream::base_getCreationTime() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::ImageStream::base_getCreationTime() const");
		}
		double lret = self->ImageStream::getCreationTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::ImageStream::base_getLength() const
	static int _bind_base_getLength(lua_State *L) {
		if (!_lg_typecheck_base_getLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::ImageStream::base_getLength() const function, expected prototype:\ndouble osg::ImageStream::base_getLength() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::ImageStream::base_getLength() const");
		}
		double lret = self->ImageStream::getLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::ImageStream::base_getFrameRate() const
	static int _bind_base_getFrameRate(lua_State *L) {
		if (!_lg_typecheck_base_getFrameRate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::ImageStream::base_getFrameRate() const function, expected prototype:\ndouble osg::ImageStream::base_getFrameRate() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::ImageStream::base_getFrameRate() const");
		}
		double lret = self->ImageStream::getFrameRate();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageStream::base_setReferenceTime(double arg1)
	static int _bind_base_setReferenceTime(lua_State *L) {
		if (!_lg_typecheck_base_setReferenceTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_setReferenceTime(double arg1) function, expected prototype:\nvoid osg::ImageStream::base_setReferenceTime(double arg1)\nClass arguments details:\n");
		}

		double _arg1=(double)lua_tonumber(L,2);

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_setReferenceTime(double)");
		}
		self->ImageStream::setReferenceTime(_arg1);

		return 0;
	}

	// double osg::ImageStream::base_getReferenceTime() const
	static int _bind_base_getReferenceTime(lua_State *L) {
		if (!_lg_typecheck_base_getReferenceTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::ImageStream::base_getReferenceTime() const function, expected prototype:\ndouble osg::ImageStream::base_getReferenceTime() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::ImageStream::base_getReferenceTime() const");
		}
		double lret = self->ImageStream::getReferenceTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageStream::base_setTimeMultiplier(double arg1)
	static int _bind_base_setTimeMultiplier(lua_State *L) {
		if (!_lg_typecheck_base_setTimeMultiplier(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_setTimeMultiplier(double arg1) function, expected prototype:\nvoid osg::ImageStream::base_setTimeMultiplier(double arg1)\nClass arguments details:\n");
		}

		double _arg1=(double)lua_tonumber(L,2);

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_setTimeMultiplier(double)");
		}
		self->ImageStream::setTimeMultiplier(_arg1);

		return 0;
	}

	// double osg::ImageStream::base_getTimeMultiplier() const
	static int _bind_base_getTimeMultiplier(lua_State *L) {
		if (!_lg_typecheck_base_getTimeMultiplier(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::ImageStream::base_getTimeMultiplier() const function, expected prototype:\ndouble osg::ImageStream::base_getTimeMultiplier() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::ImageStream::base_getTimeMultiplier() const");
		}
		double lret = self->ImageStream::getTimeMultiplier();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageStream::base_setVolume(float arg1)
	static int _bind_base_setVolume(lua_State *L) {
		if (!_lg_typecheck_base_setVolume(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_setVolume(float arg1) function, expected prototype:\nvoid osg::ImageStream::base_setVolume(float arg1)\nClass arguments details:\n");
		}

		float _arg1=(float)lua_tonumber(L,2);

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_setVolume(float)");
		}
		self->ImageStream::setVolume(_arg1);

		return 0;
	}

	// float osg::ImageStream::base_getVolume() const
	static int _bind_base_getVolume(lua_State *L) {
		if (!_lg_typecheck_base_getVolume(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::ImageStream::base_getVolume() const function, expected prototype:\nfloat osg::ImageStream::base_getVolume() const\nClass arguments details:\n");
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::ImageStream::base_getVolume() const");
		}
		float lret = self->ImageStream::getVolume();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::ImageStream* LunaTraits< osg::ImageStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ImageStream::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::ImageStream >::_bind_dtor(osg::ImageStream* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ImageStream >::className[] = "ImageStream";
const char LunaTraits< osg::ImageStream >::fullName[] = "osg::ImageStream";
const char LunaTraits< osg::ImageStream >::moduleName[] = "osg";
const char* LunaTraits< osg::ImageStream >::parents[] = {"osg.Image", 0};
const int LunaTraits< osg::ImageStream >::hash = 46984585;
const int LunaTraits< osg::ImageStream >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ImageStream >::methods[] = {
	{"cloneType", &luna_wrapper_osg_ImageStream::_bind_cloneType},
	{"clone", &luna_wrapper_osg_ImageStream::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_ImageStream::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_ImageStream::_bind_libraryName},
	{"className", &luna_wrapper_osg_ImageStream::_bind_className},
	{"compare", &luna_wrapper_osg_ImageStream::_bind_compare},
	{"seek", &luna_wrapper_osg_ImageStream::_bind_seek},
	{"play", &luna_wrapper_osg_ImageStream::_bind_play},
	{"pause", &luna_wrapper_osg_ImageStream::_bind_pause},
	{"rewind", &luna_wrapper_osg_ImageStream::_bind_rewind},
	{"quit", &luna_wrapper_osg_ImageStream::_bind_quit},
	{"getStatus", &luna_wrapper_osg_ImageStream::_bind_getStatus},
	{"setLoopingMode", &luna_wrapper_osg_ImageStream::_bind_setLoopingMode},
	{"getLoopingMode", &luna_wrapper_osg_ImageStream::_bind_getLoopingMode},
	{"getCreationTime", &luna_wrapper_osg_ImageStream::_bind_getCreationTime},
	{"getLength", &luna_wrapper_osg_ImageStream::_bind_getLength},
	{"getFrameRate", &luna_wrapper_osg_ImageStream::_bind_getFrameRate},
	{"setReferenceTime", &luna_wrapper_osg_ImageStream::_bind_setReferenceTime},
	{"getReferenceTime", &luna_wrapper_osg_ImageStream::_bind_getReferenceTime},
	{"setTimeMultiplier", &luna_wrapper_osg_ImageStream::_bind_setTimeMultiplier},
	{"getTimeMultiplier", &luna_wrapper_osg_ImageStream::_bind_getTimeMultiplier},
	{"setVolume", &luna_wrapper_osg_ImageStream::_bind_setVolume},
	{"getVolume", &luna_wrapper_osg_ImageStream::_bind_getVolume},
	{"setAudioStreams", &luna_wrapper_osg_ImageStream::_bind_setAudioStreams},
	{"getAudioStreams", &luna_wrapper_osg_ImageStream::_bind_getAudioStreams},
	{"base_setName", &luna_wrapper_osg_ImageStream::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_ImageStream::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_ImageStream::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_ImageStream::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_ImageStream::_bind_base_releaseGLObjects},
	{"base_getDataPointer", &luna_wrapper_osg_ImageStream::_bind_base_getDataPointer},
	{"base_getTotalDataSize", &luna_wrapper_osg_ImageStream::_bind_base_getTotalDataSize},
	{"base_allocateImage", &luna_wrapper_osg_ImageStream::_bind_base_allocateImage},
	{"base_setImage", &luna_wrapper_osg_ImageStream::_bind_base_setImage},
	{"base_readPixels", &luna_wrapper_osg_ImageStream::_bind_base_readPixels},
	{"base_readImageFromCurrentTexture", &luna_wrapper_osg_ImageStream::_bind_base_readImageFromCurrentTexture},
	{"base_scaleImage", &luna_wrapper_osg_ImageStream::_bind_base_scaleImage},
	{"base_copySubImage", &luna_wrapper_osg_ImageStream::_bind_base_copySubImage},
	{"base_isImageTranslucent", &luna_wrapper_osg_ImageStream::_bind_base_isImageTranslucent},
	{"base_requiresUpdateCall", &luna_wrapper_osg_ImageStream::_bind_base_requiresUpdateCall},
	{"base_update", &luna_wrapper_osg_ImageStream::_bind_base_update},
	{"base_sendFocusHint", &luna_wrapper_osg_ImageStream::_bind_base_sendFocusHint},
	{"base_sendPointerEvent", &luna_wrapper_osg_ImageStream::_bind_base_sendPointerEvent},
	{"base_sendKeyEvent", &luna_wrapper_osg_ImageStream::_bind_base_sendKeyEvent},
	{"base_setFrameLastRendered", &luna_wrapper_osg_ImageStream::_bind_base_setFrameLastRendered},
	{"base_cloneType", &luna_wrapper_osg_ImageStream::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_ImageStream::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_ImageStream::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_ImageStream::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_ImageStream::_bind_base_className},
	{"base_compare", &luna_wrapper_osg_ImageStream::_bind_base_compare},
	{"base_seek", &luna_wrapper_osg_ImageStream::_bind_base_seek},
	{"base_play", &luna_wrapper_osg_ImageStream::_bind_base_play},
	{"base_pause", &luna_wrapper_osg_ImageStream::_bind_base_pause},
	{"base_rewind", &luna_wrapper_osg_ImageStream::_bind_base_rewind},
	{"base_quit", &luna_wrapper_osg_ImageStream::_bind_base_quit},
	{"base_getCreationTime", &luna_wrapper_osg_ImageStream::_bind_base_getCreationTime},
	{"base_getLength", &luna_wrapper_osg_ImageStream::_bind_base_getLength},
	{"base_getFrameRate", &luna_wrapper_osg_ImageStream::_bind_base_getFrameRate},
	{"base_setReferenceTime", &luna_wrapper_osg_ImageStream::_bind_base_setReferenceTime},
	{"base_getReferenceTime", &luna_wrapper_osg_ImageStream::_bind_base_getReferenceTime},
	{"base_setTimeMultiplier", &luna_wrapper_osg_ImageStream::_bind_base_setTimeMultiplier},
	{"base_getTimeMultiplier", &luna_wrapper_osg_ImageStream::_bind_base_getTimeMultiplier},
	{"base_setVolume", &luna_wrapper_osg_ImageStream::_bind_base_setVolume},
	{"base_getVolume", &luna_wrapper_osg_ImageStream::_bind_base_getVolume},
	{"__eq", &luna_wrapper_osg_ImageStream::_bind___eq},
	{"getTable", &luna_wrapper_osg_ImageStream::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ImageStream >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ImageStream::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ImageStream >::enumValues[] = {
	{"INVALID", osg::ImageStream::INVALID},
	{"PLAYING", osg::ImageStream::PLAYING},
	{"PAUSED", osg::ImageStream::PAUSED},
	{"REWINDING", osg::ImageStream::REWINDING},
	{"NO_LOOPING", osg::ImageStream::NO_LOOPING},
	{"LOOPING", osg::ImageStream::LOOPING},
	{0,0}
};


