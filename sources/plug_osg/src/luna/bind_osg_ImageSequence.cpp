#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_ImageSequence.h>

class luna_wrapper_osg_ImageSequence {
public:
	typedef Luna< osg::ImageSequence > luna_t;

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
		//osg::ImageSequence* ptr= dynamic_cast< osg::ImageSequence* >(Luna< osg::Referenced >::check(L,1));
		osg::ImageSequence* ptr= luna_caster< osg::Referenced, osg::ImageSequence >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ImageSequence >::push(L,ptr,false);
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
		if( (!dynamic_cast< osg::ImageSequence* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
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
		if( (!dynamic_cast< osg::ImageSequence* >(Luna< osg::Referenced >::check(L,2))) ) return false;
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

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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

	inline static bool _lg_typecheck_setMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addImageFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setImageFile(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImageFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumImageFiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addImage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setImage_overload_1(lua_State *L) {
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

	inline static bool _lg_typecheck_setImage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumImages(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getImages_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getImages_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_requiresUpdateCall(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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

	inline static bool _lg_typecheck_base_getFrameRate(lua_State *L) {
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

	inline static bool _lg_typecheck_base_getLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_requiresUpdateCall(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_update(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ImageSequence::ImageSequence()
	static osg::ImageSequence* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ImageSequence::ImageSequence() function, expected prototype:\nosg::ImageSequence::ImageSequence()\nClass arguments details:\n");
		}


		return new osg::ImageSequence();
	}

	// osg::ImageSequence::ImageSequence(const osg::ImageSequence & ImageSequence, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ImageSequence* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ImageSequence::ImageSequence(const osg::ImageSequence & ImageSequence, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ImageSequence::ImageSequence(const osg::ImageSequence & ImageSequence, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::ImageSequence* ImageSequence_ptr=(Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1));
		if( !ImageSequence_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ImageSequence in osg::ImageSequence::ImageSequence function");
		}
		const osg::ImageSequence & ImageSequence=*ImageSequence_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ImageSequence::ImageSequence function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::ImageSequence(ImageSequence, copyop);
	}

	// osg::ImageSequence::ImageSequence(lua_Table * data)
	static osg::ImageSequence* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ImageSequence::ImageSequence(lua_Table * data) function, expected prototype:\nosg::ImageSequence::ImageSequence(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_ImageSequence(L,NULL);
	}

	// osg::ImageSequence::ImageSequence(lua_Table * data, const osg::ImageSequence & ImageSequence, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ImageSequence* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ImageSequence::ImageSequence(lua_Table * data, const osg::ImageSequence & ImageSequence, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ImageSequence::ImageSequence(lua_Table * data, const osg::ImageSequence & ImageSequence, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::ImageSequence* ImageSequence_ptr=(Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,2));
		if( !ImageSequence_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ImageSequence in osg::ImageSequence::ImageSequence function");
		}
		const osg::ImageSequence & ImageSequence=*ImageSequence_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ImageSequence::ImageSequence function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_ImageSequence(L,NULL, ImageSequence, copyop);
	}

	// Overload binder for osg::ImageSequence::ImageSequence
	static osg::ImageSequence* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ImageSequence, cannot match any of the overloads for function ImageSequence:\n  ImageSequence()\n  ImageSequence(const osg::ImageSequence &, const osg::CopyOp &)\n  ImageSequence(lua_Table *)\n  ImageSequence(lua_Table *, const osg::ImageSequence &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::ImageSequence::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ImageSequence::cloneType() const function, expected prototype:\nosg::Object * osg::ImageSequence::cloneType() const\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ImageSequence::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ImageSequence::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ImageSequence::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::ImageSequence::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ImageSequence::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ImageSequence::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ImageSequence::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ImageSequence::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ImageSequence::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ImageSequence::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ImageSequence::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ImageSequence::libraryName() const function, expected prototype:\nconst char * osg::ImageSequence::libraryName() const\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ImageSequence::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ImageSequence::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ImageSequence::className() const function, expected prototype:\nconst char * osg::ImageSequence::className() const\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ImageSequence::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// int osg::ImageSequence::compare(const osg::Image & rhs) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::ImageSequence::compare(const osg::Image & rhs) const function, expected prototype:\nint osg::ImageSequence::compare(const osg::Image & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Image* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::ImageSequence::compare function");
		}
		const osg::Image & rhs=*rhs_ptr;

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::ImageSequence::compare(const osg::Image &) const");
		}
		int lret = self->compare(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageSequence::setReferenceTime(double t)
	static int _bind_setReferenceTime(lua_State *L) {
		if (!_lg_typecheck_setReferenceTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::setReferenceTime(double t) function, expected prototype:\nvoid osg::ImageSequence::setReferenceTime(double t)\nClass arguments details:\n");
		}

		double t=(double)lua_tonumber(L,2);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::setReferenceTime(double)");
		}
		self->setReferenceTime(t);

		return 0;
	}

	// double osg::ImageSequence::getReferenceTime() const
	static int _bind_getReferenceTime(lua_State *L) {
		if (!_lg_typecheck_getReferenceTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::ImageSequence::getReferenceTime() const function, expected prototype:\ndouble osg::ImageSequence::getReferenceTime() const\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::ImageSequence::getReferenceTime() const");
		}
		double lret = self->getReferenceTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageSequence::setTimeMultiplier(double tm)
	static int _bind_setTimeMultiplier(lua_State *L) {
		if (!_lg_typecheck_setTimeMultiplier(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::setTimeMultiplier(double tm) function, expected prototype:\nvoid osg::ImageSequence::setTimeMultiplier(double tm)\nClass arguments details:\n");
		}

		double tm=(double)lua_tonumber(L,2);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::setTimeMultiplier(double)");
		}
		self->setTimeMultiplier(tm);

		return 0;
	}

	// double osg::ImageSequence::getTimeMultiplier() const
	static int _bind_getTimeMultiplier(lua_State *L) {
		if (!_lg_typecheck_getTimeMultiplier(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::ImageSequence::getTimeMultiplier() const function, expected prototype:\ndouble osg::ImageSequence::getTimeMultiplier() const\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::ImageSequence::getTimeMultiplier() const");
		}
		double lret = self->getTimeMultiplier();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageSequence::seek(double time)
	static int _bind_seek(lua_State *L) {
		if (!_lg_typecheck_seek(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::seek(double time) function, expected prototype:\nvoid osg::ImageSequence::seek(double time)\nClass arguments details:\n");
		}

		double time=(double)lua_tonumber(L,2);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::seek(double)");
		}
		self->seek(time);

		return 0;
	}

	// void osg::ImageSequence::play()
	static int _bind_play(lua_State *L) {
		if (!_lg_typecheck_play(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::play() function, expected prototype:\nvoid osg::ImageSequence::play()\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::play()");
		}
		self->play();

		return 0;
	}

	// void osg::ImageSequence::pause()
	static int _bind_pause(lua_State *L) {
		if (!_lg_typecheck_pause(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::pause() function, expected prototype:\nvoid osg::ImageSequence::pause()\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::pause()");
		}
		self->pause();

		return 0;
	}

	// void osg::ImageSequence::rewind()
	static int _bind_rewind(lua_State *L) {
		if (!_lg_typecheck_rewind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::rewind() function, expected prototype:\nvoid osg::ImageSequence::rewind()\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::rewind()");
		}
		self->rewind();

		return 0;
	}

	// void osg::ImageSequence::setMode(osg::ImageSequence::Mode mode)
	static int _bind_setMode(lua_State *L) {
		if (!_lg_typecheck_setMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::setMode(osg::ImageSequence::Mode mode) function, expected prototype:\nvoid osg::ImageSequence::setMode(osg::ImageSequence::Mode mode)\nClass arguments details:\n");
		}

		osg::ImageSequence::Mode mode=(osg::ImageSequence::Mode)lua_tointeger(L,2);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::setMode(osg::ImageSequence::Mode)");
		}
		self->setMode(mode);

		return 0;
	}

	// osg::ImageSequence::Mode osg::ImageSequence::getMode() const
	static int _bind_getMode(lua_State *L) {
		if (!_lg_typecheck_getMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ImageSequence::Mode osg::ImageSequence::getMode() const function, expected prototype:\nosg::ImageSequence::Mode osg::ImageSequence::getMode() const\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ImageSequence::Mode osg::ImageSequence::getMode() const");
		}
		osg::ImageSequence::Mode lret = self->getMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageSequence::setLength(double length)
	static int _bind_setLength(lua_State *L) {
		if (!_lg_typecheck_setLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::setLength(double length) function, expected prototype:\nvoid osg::ImageSequence::setLength(double length)\nClass arguments details:\n");
		}

		double length=(double)lua_tonumber(L,2);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::setLength(double)");
		}
		self->setLength(length);

		return 0;
	}

	// double osg::ImageSequence::getLength() const
	static int _bind_getLength(lua_State *L) {
		if (!_lg_typecheck_getLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::ImageSequence::getLength() const function, expected prototype:\ndouble osg::ImageSequence::getLength() const\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::ImageSequence::getLength() const");
		}
		double lret = self->getLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageSequence::addImageFile(const std::string & fileName)
	static int _bind_addImageFile(lua_State *L) {
		if (!_lg_typecheck_addImageFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::addImageFile(const std::string & fileName) function, expected prototype:\nvoid osg::ImageSequence::addImageFile(const std::string & fileName)\nClass arguments details:\n");
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::addImageFile(const std::string &)");
		}
		self->addImageFile(fileName);

		return 0;
	}

	// void osg::ImageSequence::setImageFile(unsigned int pos, const std::string & fileName)
	static int _bind_setImageFile(lua_State *L) {
		if (!_lg_typecheck_setImageFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::setImageFile(unsigned int pos, const std::string & fileName) function, expected prototype:\nvoid osg::ImageSequence::setImageFile(unsigned int pos, const std::string & fileName)\nClass arguments details:\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		std::string fileName(lua_tostring(L,3),lua_objlen(L,3));

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::setImageFile(unsigned int, const std::string &)");
		}
		self->setImageFile(pos, fileName);

		return 0;
	}

	// std::string osg::ImageSequence::getImageFile(unsigned int pos) const
	static int _bind_getImageFile(lua_State *L) {
		if (!_lg_typecheck_getImageFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string osg::ImageSequence::getImageFile(unsigned int pos) const function, expected prototype:\nstd::string osg::ImageSequence::getImageFile(unsigned int pos) const\nClass arguments details:\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string osg::ImageSequence::getImageFile(unsigned int) const");
		}
		std::string lret = self->getImageFile(pos);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// unsigned int osg::ImageSequence::getNumImageFiles() const
	static int _bind_getNumImageFiles(lua_State *L) {
		if (!_lg_typecheck_getNumImageFiles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::ImageSequence::getNumImageFiles() const function, expected prototype:\nunsigned int osg::ImageSequence::getNumImageFiles() const\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::ImageSequence::getNumImageFiles() const");
		}
		unsigned int lret = self->getNumImageFiles();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageSequence::addImage(osg::Image * image)
	static int _bind_addImage(lua_State *L) {
		if (!_lg_typecheck_addImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::addImage(osg::Image * image) function, expected prototype:\nvoid osg::ImageSequence::addImage(osg::Image * image)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::addImage(osg::Image *)");
		}
		self->addImage(image);

		return 0;
	}

	// void osg::ImageSequence::setImage(int s, int t, int r, int internalTextureformat, unsigned int pixelFormat, unsigned int type, unsigned char * data, osg::Image::AllocationMode mode, int packing = 1)
	static int _bind_setImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_setImage_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::setImage(int s, int t, int r, int internalTextureformat, unsigned int pixelFormat, unsigned int type, unsigned char * data, osg::Image::AllocationMode mode, int packing = 1) function, expected prototype:\nvoid osg::ImageSequence::setImage(int s, int t, int r, int internalTextureformat, unsigned int pixelFormat, unsigned int type, unsigned char * data, osg::Image::AllocationMode mode, int packing = 1)\nClass arguments details:\n");
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

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::setImage(int, int, int, int, unsigned int, unsigned int, unsigned char *, osg::Image::AllocationMode, int)");
		}
		self->setImage(s, t, r, internalTextureformat, pixelFormat, type, &data, mode, packing);

		return 0;
	}

	// void osg::ImageSequence::setImage(unsigned int pos, osg::Image * image)
	static int _bind_setImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_setImage_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::setImage(unsigned int pos, osg::Image * image) function, expected prototype:\nvoid osg::ImageSequence::setImage(unsigned int pos, osg::Image * image)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,3));

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::setImage(unsigned int, osg::Image *)");
		}
		self->setImage(pos, image);

		return 0;
	}

	// Overload binder for osg::ImageSequence::setImage
	static int _bind_setImage(lua_State *L) {
		if (_lg_typecheck_setImage_overload_1(L)) return _bind_setImage_overload_1(L);
		if (_lg_typecheck_setImage_overload_2(L)) return _bind_setImage_overload_2(L);

		luaL_error(L, "error in function setImage, cannot match any of the overloads for function setImage:\n  setImage(int, int, int, int, unsigned int, unsigned int, unsigned char *, osg::Image::AllocationMode, int)\n  setImage(unsigned int, osg::Image *)\n");
		return 0;
	}

	// osg::Image * osg::ImageSequence::getImage(unsigned int pos)
	static int _bind_getImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Image * osg::ImageSequence::getImage(unsigned int pos) function, expected prototype:\nosg::Image * osg::ImageSequence::getImage(unsigned int pos)\nClass arguments details:\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Image * osg::ImageSequence::getImage(unsigned int)");
		}
		osg::Image * lret = self->getImage(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osg::ImageSequence::getImage(unsigned int pos) const
	static int _bind_getImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Image * osg::ImageSequence::getImage(unsigned int pos) const function, expected prototype:\nconst osg::Image * osg::ImageSequence::getImage(unsigned int pos) const\nClass arguments details:\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Image * osg::ImageSequence::getImage(unsigned int) const");
		}
		const osg::Image * lret = self->getImage(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ImageSequence::getImage
	static int _bind_getImage(lua_State *L) {
		if (_lg_typecheck_getImage_overload_1(L)) return _bind_getImage_overload_1(L);
		if (_lg_typecheck_getImage_overload_2(L)) return _bind_getImage_overload_2(L);

		luaL_error(L, "error in function getImage, cannot match any of the overloads for function getImage:\n  getImage(unsigned int)\n  getImage(unsigned int)\n");
		return 0;
	}

	// unsigned int osg::ImageSequence::getNumImages() const
	static int _bind_getNumImages(lua_State *L) {
		if (!_lg_typecheck_getNumImages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::ImageSequence::getNumImages() const function, expected prototype:\nunsigned int osg::ImageSequence::getNumImages() const\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::ImageSequence::getNumImages() const");
		}
		unsigned int lret = self->getNumImages();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::ImageSequence::Images & osg::ImageSequence::getImages()
	static int _bind_getImages_overload_1(lua_State *L) {
		if (!_lg_typecheck_getImages_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ImageSequence::Images & osg::ImageSequence::getImages() function, expected prototype:\nosg::ImageSequence::Images & osg::ImageSequence::getImages()\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ImageSequence::Images & osg::ImageSequence::getImages()");
		}
		const osg::ImageSequence::Images* lret = &self->getImages();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ImageSequence::Images >::push(L,lret,false);

		return 1;
	}

	// const osg::ImageSequence::Images & osg::ImageSequence::getImages() const
	static int _bind_getImages_overload_2(lua_State *L) {
		if (!_lg_typecheck_getImages_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::ImageSequence::Images & osg::ImageSequence::getImages() const function, expected prototype:\nconst osg::ImageSequence::Images & osg::ImageSequence::getImages() const\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::ImageSequence::Images & osg::ImageSequence::getImages() const");
		}
		const osg::ImageSequence::Images* lret = &self->getImages();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ImageSequence::Images >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ImageSequence::getImages
	static int _bind_getImages(lua_State *L) {
		if (_lg_typecheck_getImages_overload_1(L)) return _bind_getImages_overload_1(L);
		if (_lg_typecheck_getImages_overload_2(L)) return _bind_getImages_overload_2(L);

		luaL_error(L, "error in function getImages, cannot match any of the overloads for function getImages:\n  getImages()\n  getImages()\n");
		return 0;
	}

	// bool osg::ImageSequence::requiresUpdateCall() const
	static int _bind_requiresUpdateCall(lua_State *L) {
		if (!_lg_typecheck_requiresUpdateCall(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ImageSequence::requiresUpdateCall() const function, expected prototype:\nbool osg::ImageSequence::requiresUpdateCall() const\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ImageSequence::requiresUpdateCall() const");
		}
		bool lret = self->requiresUpdateCall();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ImageSequence::update(osg::NodeVisitor * nv)
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::update(osg::NodeVisitor * nv) function, expected prototype:\nvoid osg::ImageSequence::update(osg::NodeVisitor * nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::update(osg::NodeVisitor *)");
		}
		self->update(nv);

		return 0;
	}

	// void osg::ImageSequence::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_setName(const std::string & name) function, expected prototype:\nvoid osg::ImageSequence::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_setName(const std::string &)");
		}
		self->ImageSequence::setName(name);

		return 0;
	}

	// void osg::ImageSequence::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_computeDataVariance() function, expected prototype:\nvoid osg::ImageSequence::base_computeDataVariance()\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_computeDataVariance()");
		}
		self->ImageSequence::computeDataVariance();

		return 0;
	}

	// void osg::ImageSequence::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::ImageSequence::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_setUserData(osg::Referenced *)");
		}
		self->ImageSequence::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::ImageSequence::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::ImageSequence::base_getUserData() function, expected prototype:\nosg::Referenced * osg::ImageSequence::base_getUserData()\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::ImageSequence::base_getUserData()");
		}
		osg::Referenced * lret = self->ImageSequence::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::ImageSequence::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::ImageSequence::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::ImageSequence::base_getUserData() const\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::ImageSequence::base_getUserData() const");
		}
		const osg::Referenced * lret = self->ImageSequence::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ImageSequence::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::ImageSequence::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::ImageSequence::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_releaseGLObjects(osg::State *) const");
		}
		self->ImageSequence::releaseGLObjects(state);

		return 0;
	}

	// const void * osg::ImageSequence::base_getDataPointer() const
	static int _bind_base_getDataPointer(lua_State *L) {
		if (!_lg_typecheck_base_getDataPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const void * osg::ImageSequence::base_getDataPointer() const function, expected prototype:\nconst void * osg::ImageSequence::base_getDataPointer() const\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const void * osg::ImageSequence::base_getDataPointer() const");
		}
		const void * lret = self->ImageSequence::getDataPointer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// unsigned int osg::ImageSequence::base_getTotalDataSize() const
	static int _bind_base_getTotalDataSize(lua_State *L) {
		if (!_lg_typecheck_base_getTotalDataSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::ImageSequence::base_getTotalDataSize() const function, expected prototype:\nunsigned int osg::ImageSequence::base_getTotalDataSize() const\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::ImageSequence::base_getTotalDataSize() const");
		}
		unsigned int lret = self->ImageSequence::getTotalDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageSequence::base_allocateImage(int s, int t, int r, unsigned int pixelFormat, unsigned int type, int packing = 1)
	static int _bind_base_allocateImage(lua_State *L) {
		if (!_lg_typecheck_base_allocateImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_allocateImage(int s, int t, int r, unsigned int pixelFormat, unsigned int type, int packing = 1) function, expected prototype:\nvoid osg::ImageSequence::base_allocateImage(int s, int t, int r, unsigned int pixelFormat, unsigned int type, int packing = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int s=(int)lua_tointeger(L,2);
		int t=(int)lua_tointeger(L,3);
		int r=(int)lua_tointeger(L,4);
		unsigned int pixelFormat=(unsigned int)lua_tointeger(L,5);
		unsigned int type=(unsigned int)lua_tointeger(L,6);
		int packing=luatop>6 ? (int)lua_tointeger(L,7) : 1;

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_allocateImage(int, int, int, unsigned int, unsigned int, int)");
		}
		self->ImageSequence::allocateImage(s, t, r, pixelFormat, type, packing);

		return 0;
	}

	// void osg::ImageSequence::base_readPixels(int x, int y, int width, int height, unsigned int pixelFormat, unsigned int type)
	static int _bind_base_readPixels(lua_State *L) {
		if (!_lg_typecheck_base_readPixels(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_readPixels(int x, int y, int width, int height, unsigned int pixelFormat, unsigned int type) function, expected prototype:\nvoid osg::ImageSequence::base_readPixels(int x, int y, int width, int height, unsigned int pixelFormat, unsigned int type)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);
		unsigned int pixelFormat=(unsigned int)lua_tointeger(L,6);
		unsigned int type=(unsigned int)lua_tointeger(L,7);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_readPixels(int, int, int, int, unsigned int, unsigned int)");
		}
		self->ImageSequence::readPixels(x, y, width, height, pixelFormat, type);

		return 0;
	}

	// void osg::ImageSequence::base_readImageFromCurrentTexture(unsigned int contextID, bool copyMipMapsIfAvailable, unsigned int type = GL_UNSIGNED_BYTE)
	static int _bind_base_readImageFromCurrentTexture(lua_State *L) {
		if (!_lg_typecheck_base_readImageFromCurrentTexture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_readImageFromCurrentTexture(unsigned int contextID, bool copyMipMapsIfAvailable, unsigned int type = GL_UNSIGNED_BYTE) function, expected prototype:\nvoid osg::ImageSequence::base_readImageFromCurrentTexture(unsigned int contextID, bool copyMipMapsIfAvailable, unsigned int type = GL_UNSIGNED_BYTE)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);
		bool copyMipMapsIfAvailable=(bool)(lua_toboolean(L,3)==1);
		unsigned int type=luatop>3 ? (unsigned int)lua_tointeger(L,4) : GL_UNSIGNED_BYTE;

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_readImageFromCurrentTexture(unsigned int, bool, unsigned int)");
		}
		self->ImageSequence::readImageFromCurrentTexture(contextID, copyMipMapsIfAvailable, type);

		return 0;
	}

	// void osg::ImageSequence::base_scaleImage(int s, int t, int r, unsigned int newDataType)
	static int _bind_base_scaleImage(lua_State *L) {
		if (!_lg_typecheck_base_scaleImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_scaleImage(int s, int t, int r, unsigned int newDataType) function, expected prototype:\nvoid osg::ImageSequence::base_scaleImage(int s, int t, int r, unsigned int newDataType)\nClass arguments details:\n");
		}

		int s=(int)lua_tointeger(L,2);
		int t=(int)lua_tointeger(L,3);
		int r=(int)lua_tointeger(L,4);
		unsigned int newDataType=(unsigned int)lua_tointeger(L,5);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_scaleImage(int, int, int, unsigned int)");
		}
		self->ImageSequence::scaleImage(s, t, r, newDataType);

		return 0;
	}

	// void osg::ImageSequence::base_copySubImage(int s_offset, int t_offset, int r_offset, const osg::Image * source)
	static int _bind_base_copySubImage(lua_State *L) {
		if (!_lg_typecheck_base_copySubImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_copySubImage(int s_offset, int t_offset, int r_offset, const osg::Image * source) function, expected prototype:\nvoid osg::ImageSequence::base_copySubImage(int s_offset, int t_offset, int r_offset, const osg::Image * source)\nClass arguments details:\narg 4 ID = 50169651\n");
		}

		int s_offset=(int)lua_tointeger(L,2);
		int t_offset=(int)lua_tointeger(L,3);
		int r_offset=(int)lua_tointeger(L,4);
		const osg::Image* source=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,5));

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_copySubImage(int, int, int, const osg::Image *)");
		}
		self->ImageSequence::copySubImage(s_offset, t_offset, r_offset, source);

		return 0;
	}

	// bool osg::ImageSequence::base_isImageTranslucent() const
	static int _bind_base_isImageTranslucent(lua_State *L) {
		if (!_lg_typecheck_base_isImageTranslucent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ImageSequence::base_isImageTranslucent() const function, expected prototype:\nbool osg::ImageSequence::base_isImageTranslucent() const\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ImageSequence::base_isImageTranslucent() const");
		}
		bool lret = self->ImageSequence::isImageTranslucent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ImageSequence::base_sendFocusHint(bool arg1)
	static int _bind_base_sendFocusHint(lua_State *L) {
		if (!_lg_typecheck_base_sendFocusHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ImageSequence::base_sendFocusHint(bool arg1) function, expected prototype:\nbool osg::ImageSequence::base_sendFocusHint(bool arg1)\nClass arguments details:\n");
		}

		bool _arg1=(bool)(lua_toboolean(L,2)==1);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ImageSequence::base_sendFocusHint(bool)");
		}
		bool lret = self->ImageSequence::sendFocusHint(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ImageSequence::base_sendPointerEvent(int arg1, int arg2, int arg3)
	static int _bind_base_sendPointerEvent(lua_State *L) {
		if (!_lg_typecheck_base_sendPointerEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ImageSequence::base_sendPointerEvent(int arg1, int arg2, int arg3) function, expected prototype:\nbool osg::ImageSequence::base_sendPointerEvent(int arg1, int arg2, int arg3)\nClass arguments details:\n");
		}

		int _arg1=(int)lua_tointeger(L,2);
		int _arg2=(int)lua_tointeger(L,3);
		int _arg3=(int)lua_tointeger(L,4);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ImageSequence::base_sendPointerEvent(int, int, int)");
		}
		bool lret = self->ImageSequence::sendPointerEvent(_arg1, _arg2, _arg3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ImageSequence::base_sendKeyEvent(int arg1, bool arg2)
	static int _bind_base_sendKeyEvent(lua_State *L) {
		if (!_lg_typecheck_base_sendKeyEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ImageSequence::base_sendKeyEvent(int arg1, bool arg2) function, expected prototype:\nbool osg::ImageSequence::base_sendKeyEvent(int arg1, bool arg2)\nClass arguments details:\n");
		}

		int _arg1=(int)lua_tointeger(L,2);
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ImageSequence::base_sendKeyEvent(int, bool)");
		}
		bool lret = self->ImageSequence::sendKeyEvent(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ImageSequence::base_setFrameLastRendered(const osg::FrameStamp * arg1)
	static int _bind_base_setFrameLastRendered(lua_State *L) {
		if (!_lg_typecheck_base_setFrameLastRendered(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_setFrameLastRendered(const osg::FrameStamp * arg1) function, expected prototype:\nvoid osg::ImageSequence::base_setFrameLastRendered(const osg::FrameStamp * arg1)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::FrameStamp* _arg1=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,2));

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_setFrameLastRendered(const osg::FrameStamp *)");
		}
		self->ImageSequence::setFrameLastRendered(_arg1);

		return 0;
	}

	// void osg::ImageSequence::base_quit(bool arg1 = true)
	static int _bind_base_quit(lua_State *L) {
		if (!_lg_typecheck_base_quit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_quit(bool arg1 = true) function, expected prototype:\nvoid osg::ImageSequence::base_quit(bool arg1 = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool _arg1=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_quit(bool)");
		}
		self->ImageSequence::quit(_arg1);

		return 0;
	}

	// double osg::ImageSequence::base_getCreationTime() const
	static int _bind_base_getCreationTime(lua_State *L) {
		if (!_lg_typecheck_base_getCreationTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::ImageSequence::base_getCreationTime() const function, expected prototype:\ndouble osg::ImageSequence::base_getCreationTime() const\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::ImageSequence::base_getCreationTime() const");
		}
		double lret = self->ImageSequence::getCreationTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::ImageSequence::base_getFrameRate() const
	static int _bind_base_getFrameRate(lua_State *L) {
		if (!_lg_typecheck_base_getFrameRate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::ImageSequence::base_getFrameRate() const function, expected prototype:\ndouble osg::ImageSequence::base_getFrameRate() const\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::ImageSequence::base_getFrameRate() const");
		}
		double lret = self->ImageSequence::getFrameRate();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageSequence::base_setVolume(float arg1)
	static int _bind_base_setVolume(lua_State *L) {
		if (!_lg_typecheck_base_setVolume(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_setVolume(float arg1) function, expected prototype:\nvoid osg::ImageSequence::base_setVolume(float arg1)\nClass arguments details:\n");
		}

		float _arg1=(float)lua_tonumber(L,2);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_setVolume(float)");
		}
		self->ImageSequence::setVolume(_arg1);

		return 0;
	}

	// float osg::ImageSequence::base_getVolume() const
	static int _bind_base_getVolume(lua_State *L) {
		if (!_lg_typecheck_base_getVolume(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::ImageSequence::base_getVolume() const function, expected prototype:\nfloat osg::ImageSequence::base_getVolume() const\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::ImageSequence::base_getVolume() const");
		}
		float lret = self->ImageSequence::getVolume();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Object * osg::ImageSequence::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ImageSequence::base_cloneType() const function, expected prototype:\nosg::Object * osg::ImageSequence::base_cloneType() const\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ImageSequence::base_cloneType() const");
		}
		osg::Object * lret = self->ImageSequence::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ImageSequence::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ImageSequence::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::ImageSequence::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ImageSequence::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ImageSequence::base_clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->ImageSequence::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ImageSequence::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ImageSequence::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ImageSequence::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ImageSequence::base_isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->ImageSequence::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ImageSequence::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ImageSequence::base_libraryName() const function, expected prototype:\nconst char * osg::ImageSequence::base_libraryName() const\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ImageSequence::base_libraryName() const");
		}
		const char * lret = self->ImageSequence::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ImageSequence::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ImageSequence::base_className() const function, expected prototype:\nconst char * osg::ImageSequence::base_className() const\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ImageSequence::base_className() const");
		}
		const char * lret = self->ImageSequence::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// int osg::ImageSequence::base_compare(const osg::Image & rhs) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::ImageSequence::base_compare(const osg::Image & rhs) const function, expected prototype:\nint osg::ImageSequence::base_compare(const osg::Image & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Image* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::ImageSequence::base_compare function");
		}
		const osg::Image & rhs=*rhs_ptr;

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::ImageSequence::base_compare(const osg::Image &) const");
		}
		int lret = self->ImageSequence::compare(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageSequence::base_setReferenceTime(double t)
	static int _bind_base_setReferenceTime(lua_State *L) {
		if (!_lg_typecheck_base_setReferenceTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_setReferenceTime(double t) function, expected prototype:\nvoid osg::ImageSequence::base_setReferenceTime(double t)\nClass arguments details:\n");
		}

		double t=(double)lua_tonumber(L,2);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_setReferenceTime(double)");
		}
		self->ImageSequence::setReferenceTime(t);

		return 0;
	}

	// double osg::ImageSequence::base_getReferenceTime() const
	static int _bind_base_getReferenceTime(lua_State *L) {
		if (!_lg_typecheck_base_getReferenceTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::ImageSequence::base_getReferenceTime() const function, expected prototype:\ndouble osg::ImageSequence::base_getReferenceTime() const\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::ImageSequence::base_getReferenceTime() const");
		}
		double lret = self->ImageSequence::getReferenceTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageSequence::base_setTimeMultiplier(double tm)
	static int _bind_base_setTimeMultiplier(lua_State *L) {
		if (!_lg_typecheck_base_setTimeMultiplier(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_setTimeMultiplier(double tm) function, expected prototype:\nvoid osg::ImageSequence::base_setTimeMultiplier(double tm)\nClass arguments details:\n");
		}

		double tm=(double)lua_tonumber(L,2);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_setTimeMultiplier(double)");
		}
		self->ImageSequence::setTimeMultiplier(tm);

		return 0;
	}

	// double osg::ImageSequence::base_getTimeMultiplier() const
	static int _bind_base_getTimeMultiplier(lua_State *L) {
		if (!_lg_typecheck_base_getTimeMultiplier(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::ImageSequence::base_getTimeMultiplier() const function, expected prototype:\ndouble osg::ImageSequence::base_getTimeMultiplier() const\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::ImageSequence::base_getTimeMultiplier() const");
		}
		double lret = self->ImageSequence::getTimeMultiplier();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageSequence::base_seek(double time)
	static int _bind_base_seek(lua_State *L) {
		if (!_lg_typecheck_base_seek(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_seek(double time) function, expected prototype:\nvoid osg::ImageSequence::base_seek(double time)\nClass arguments details:\n");
		}

		double time=(double)lua_tonumber(L,2);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_seek(double)");
		}
		self->ImageSequence::seek(time);

		return 0;
	}

	// void osg::ImageSequence::base_play()
	static int _bind_base_play(lua_State *L) {
		if (!_lg_typecheck_base_play(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_play() function, expected prototype:\nvoid osg::ImageSequence::base_play()\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_play()");
		}
		self->ImageSequence::play();

		return 0;
	}

	// void osg::ImageSequence::base_pause()
	static int _bind_base_pause(lua_State *L) {
		if (!_lg_typecheck_base_pause(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_pause() function, expected prototype:\nvoid osg::ImageSequence::base_pause()\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_pause()");
		}
		self->ImageSequence::pause();

		return 0;
	}

	// void osg::ImageSequence::base_rewind()
	static int _bind_base_rewind(lua_State *L) {
		if (!_lg_typecheck_base_rewind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_rewind() function, expected prototype:\nvoid osg::ImageSequence::base_rewind()\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_rewind()");
		}
		self->ImageSequence::rewind();

		return 0;
	}

	// double osg::ImageSequence::base_getLength() const
	static int _bind_base_getLength(lua_State *L) {
		if (!_lg_typecheck_base_getLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::ImageSequence::base_getLength() const function, expected prototype:\ndouble osg::ImageSequence::base_getLength() const\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::ImageSequence::base_getLength() const");
		}
		double lret = self->ImageSequence::getLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageSequence::base_setImage(int s, int t, int r, int internalTextureformat, unsigned int pixelFormat, unsigned int type, unsigned char * data, osg::Image::AllocationMode mode, int packing = 1)
	static int _bind_base_setImage(lua_State *L) {
		if (!_lg_typecheck_base_setImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_setImage(int s, int t, int r, int internalTextureformat, unsigned int pixelFormat, unsigned int type, unsigned char * data, osg::Image::AllocationMode mode, int packing = 1) function, expected prototype:\nvoid osg::ImageSequence::base_setImage(int s, int t, int r, int internalTextureformat, unsigned int pixelFormat, unsigned int type, unsigned char * data, osg::Image::AllocationMode mode, int packing = 1)\nClass arguments details:\n");
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

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_setImage(int, int, int, int, unsigned int, unsigned int, unsigned char *, osg::Image::AllocationMode, int)");
		}
		self->ImageSequence::setImage(s, t, r, internalTextureformat, pixelFormat, type, &data, mode, packing);

		return 0;
	}

	// bool osg::ImageSequence::base_requiresUpdateCall() const
	static int _bind_base_requiresUpdateCall(lua_State *L) {
		if (!_lg_typecheck_base_requiresUpdateCall(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ImageSequence::base_requiresUpdateCall() const function, expected prototype:\nbool osg::ImageSequence::base_requiresUpdateCall() const\nClass arguments details:\n");
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ImageSequence::base_requiresUpdateCall() const");
		}
		bool lret = self->ImageSequence::requiresUpdateCall();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ImageSequence::base_update(osg::NodeVisitor * nv)
	static int _bind_base_update(lua_State *L) {
		if (!_lg_typecheck_base_update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_update(osg::NodeVisitor * nv) function, expected prototype:\nvoid osg::ImageSequence::base_update(osg::NodeVisitor * nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_update(osg::NodeVisitor *)");
		}
		self->ImageSequence::update(nv);

		return 0;
	}


	// Operator binds:

};

osg::ImageSequence* LunaTraits< osg::ImageSequence >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ImageSequence::_bind_ctor(L);
}

void LunaTraits< osg::ImageSequence >::_bind_dtor(osg::ImageSequence* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ImageSequence >::className[] = "ImageSequence";
const char LunaTraits< osg::ImageSequence >::fullName[] = "osg::ImageSequence";
const char LunaTraits< osg::ImageSequence >::moduleName[] = "osg";
const char* LunaTraits< osg::ImageSequence >::parents[] = {"osg.ImageStream", 0};
const int LunaTraits< osg::ImageSequence >::hash = 25896036;
const int LunaTraits< osg::ImageSequence >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ImageSequence >::methods[] = {
	{"cloneType", &luna_wrapper_osg_ImageSequence::_bind_cloneType},
	{"clone", &luna_wrapper_osg_ImageSequence::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_ImageSequence::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_ImageSequence::_bind_libraryName},
	{"className", &luna_wrapper_osg_ImageSequence::_bind_className},
	{"compare", &luna_wrapper_osg_ImageSequence::_bind_compare},
	{"setReferenceTime", &luna_wrapper_osg_ImageSequence::_bind_setReferenceTime},
	{"getReferenceTime", &luna_wrapper_osg_ImageSequence::_bind_getReferenceTime},
	{"setTimeMultiplier", &luna_wrapper_osg_ImageSequence::_bind_setTimeMultiplier},
	{"getTimeMultiplier", &luna_wrapper_osg_ImageSequence::_bind_getTimeMultiplier},
	{"seek", &luna_wrapper_osg_ImageSequence::_bind_seek},
	{"play", &luna_wrapper_osg_ImageSequence::_bind_play},
	{"pause", &luna_wrapper_osg_ImageSequence::_bind_pause},
	{"rewind", &luna_wrapper_osg_ImageSequence::_bind_rewind},
	{"setMode", &luna_wrapper_osg_ImageSequence::_bind_setMode},
	{"getMode", &luna_wrapper_osg_ImageSequence::_bind_getMode},
	{"setLength", &luna_wrapper_osg_ImageSequence::_bind_setLength},
	{"getLength", &luna_wrapper_osg_ImageSequence::_bind_getLength},
	{"addImageFile", &luna_wrapper_osg_ImageSequence::_bind_addImageFile},
	{"setImageFile", &luna_wrapper_osg_ImageSequence::_bind_setImageFile},
	{"getImageFile", &luna_wrapper_osg_ImageSequence::_bind_getImageFile},
	{"getNumImageFiles", &luna_wrapper_osg_ImageSequence::_bind_getNumImageFiles},
	{"addImage", &luna_wrapper_osg_ImageSequence::_bind_addImage},
	{"setImage", &luna_wrapper_osg_ImageSequence::_bind_setImage},
	{"getImage", &luna_wrapper_osg_ImageSequence::_bind_getImage},
	{"getNumImages", &luna_wrapper_osg_ImageSequence::_bind_getNumImages},
	{"getImages", &luna_wrapper_osg_ImageSequence::_bind_getImages},
	{"requiresUpdateCall", &luna_wrapper_osg_ImageSequence::_bind_requiresUpdateCall},
	{"update", &luna_wrapper_osg_ImageSequence::_bind_update},
	{"base_setName", &luna_wrapper_osg_ImageSequence::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_ImageSequence::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_ImageSequence::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_ImageSequence::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_ImageSequence::_bind_base_releaseGLObjects},
	{"base_getDataPointer", &luna_wrapper_osg_ImageSequence::_bind_base_getDataPointer},
	{"base_getTotalDataSize", &luna_wrapper_osg_ImageSequence::_bind_base_getTotalDataSize},
	{"base_allocateImage", &luna_wrapper_osg_ImageSequence::_bind_base_allocateImage},
	{"base_readPixels", &luna_wrapper_osg_ImageSequence::_bind_base_readPixels},
	{"base_readImageFromCurrentTexture", &luna_wrapper_osg_ImageSequence::_bind_base_readImageFromCurrentTexture},
	{"base_scaleImage", &luna_wrapper_osg_ImageSequence::_bind_base_scaleImage},
	{"base_copySubImage", &luna_wrapper_osg_ImageSequence::_bind_base_copySubImage},
	{"base_isImageTranslucent", &luna_wrapper_osg_ImageSequence::_bind_base_isImageTranslucent},
	{"base_sendFocusHint", &luna_wrapper_osg_ImageSequence::_bind_base_sendFocusHint},
	{"base_sendPointerEvent", &luna_wrapper_osg_ImageSequence::_bind_base_sendPointerEvent},
	{"base_sendKeyEvent", &luna_wrapper_osg_ImageSequence::_bind_base_sendKeyEvent},
	{"base_setFrameLastRendered", &luna_wrapper_osg_ImageSequence::_bind_base_setFrameLastRendered},
	{"base_quit", &luna_wrapper_osg_ImageSequence::_bind_base_quit},
	{"base_getCreationTime", &luna_wrapper_osg_ImageSequence::_bind_base_getCreationTime},
	{"base_getFrameRate", &luna_wrapper_osg_ImageSequence::_bind_base_getFrameRate},
	{"base_setVolume", &luna_wrapper_osg_ImageSequence::_bind_base_setVolume},
	{"base_getVolume", &luna_wrapper_osg_ImageSequence::_bind_base_getVolume},
	{"base_cloneType", &luna_wrapper_osg_ImageSequence::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_ImageSequence::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_ImageSequence::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_ImageSequence::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_ImageSequence::_bind_base_className},
	{"base_compare", &luna_wrapper_osg_ImageSequence::_bind_base_compare},
	{"base_setReferenceTime", &luna_wrapper_osg_ImageSequence::_bind_base_setReferenceTime},
	{"base_getReferenceTime", &luna_wrapper_osg_ImageSequence::_bind_base_getReferenceTime},
	{"base_setTimeMultiplier", &luna_wrapper_osg_ImageSequence::_bind_base_setTimeMultiplier},
	{"base_getTimeMultiplier", &luna_wrapper_osg_ImageSequence::_bind_base_getTimeMultiplier},
	{"base_seek", &luna_wrapper_osg_ImageSequence::_bind_base_seek},
	{"base_play", &luna_wrapper_osg_ImageSequence::_bind_base_play},
	{"base_pause", &luna_wrapper_osg_ImageSequence::_bind_base_pause},
	{"base_rewind", &luna_wrapper_osg_ImageSequence::_bind_base_rewind},
	{"base_getLength", &luna_wrapper_osg_ImageSequence::_bind_base_getLength},
	{"base_setImage", &luna_wrapper_osg_ImageSequence::_bind_base_setImage},
	{"base_requiresUpdateCall", &luna_wrapper_osg_ImageSequence::_bind_base_requiresUpdateCall},
	{"base_update", &luna_wrapper_osg_ImageSequence::_bind_base_update},
	{"__eq", &luna_wrapper_osg_ImageSequence::_bind___eq},
	{"getTable", &luna_wrapper_osg_ImageSequence::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ImageSequence >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ImageSequence::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ImageSequence >::enumValues[] = {
	{"PRE_LOAD_ALL_IMAGES", osg::ImageSequence::PRE_LOAD_ALL_IMAGES},
	{"PAGE_AND_RETAIN_IMAGES", osg::ImageSequence::PAGE_AND_RETAIN_IMAGES},
	{"PAGE_AND_DISCARD_USED_IMAGES", osg::ImageSequence::PAGE_AND_DISCARD_USED_IMAGES},
	{0,0}
};


