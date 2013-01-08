#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_DisplaySettings.h>

class luna_wrapper_osg_DisplaySettings {
public:
	typedef Luna< osg::DisplaySettings > luna_t;

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
		//osg::DisplaySettings* ptr= dynamic_cast< osg::DisplaySettings* >(Luna< osg::Referenced >::check(L,1));
		osg::DisplaySettings* ptr= luna_caster< osg::Referenced, osg::DisplaySettings >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::DisplaySettings >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,99527028) ) return false;
		if( (!(Luna< osg::ArgumentParser >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,99527028) ) return false;
		if( (!(Luna< osg::ArgumentParser >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_instance(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDisplaySettings(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_merge(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDefaults(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readEnvironmentalVariables(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readCommandLine(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,99527028) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDisplayType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDisplayType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStereo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStereo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStereoMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStereoMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEyeSeparation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEyeSeparation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSplitStereoHorizontalEyeMapping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSplitStereoHorizontalEyeMapping(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSplitStereoHorizontalSeparation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSplitStereoHorizontalSeparation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSplitStereoVerticalEyeMapping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSplitStereoVerticalEyeMapping(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSplitStereoVerticalSeparation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSplitStereoVerticalSeparation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSplitStereoAutoAdjustAspectRatio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSplitStereoAutoAdjustAspectRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setScreenWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScreenWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setScreenHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScreenHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setScreenDistance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScreenDistance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDoubleBuffer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDoubleBuffer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRGB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRGB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDepthBuffer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDepthBuffer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMinimumNumAlphaBits(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMinimumNumAlphaBits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAlphaBuffer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMinimumNumStencilBits(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMinimumNumStencilBits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStencilBuffer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMinimumNumAccumBits(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMinimumNumAccumRedBits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMinimumNumAccumGreenBits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMinimumNumAccumBlueBits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMinimumNumAccumAlphaBits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAccumBuffer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMaxNumberOfGraphicsContexts(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaxNumberOfGraphicsContexts(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNumMultiSamples(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumMultiSamples(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMultiSamples(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCompileContextsHint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCompileContextsHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSerializeDrawDispatch(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSerializeDrawDispatch(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setApplication(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getApplication(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMaxTexturePoolSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaxTexturePoolSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMaxBufferObjectPoolSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaxBufferObjectPoolSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setImplicitBufferAttachmentMask(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setImplicitBufferAttachmentRenderMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setImplicitBufferAttachmentResolveMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImplicitBufferAttachmentRenderMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getImplicitBufferAttachmentResolveMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSwapMethod(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSwapMethod(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGLContextVersion(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGLContextVersion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGLContextFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGLContextFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGLContextProfileMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGLContextProfileMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::DisplaySettings::DisplaySettings()
	static osg::DisplaySettings* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DisplaySettings::DisplaySettings() function, expected prototype:\nosg::DisplaySettings::DisplaySettings()\nClass arguments details:\n");
		}


		return new osg::DisplaySettings();
	}

	// osg::DisplaySettings::DisplaySettings(osg::ArgumentParser & arguments)
	static osg::DisplaySettings* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DisplaySettings::DisplaySettings(osg::ArgumentParser & arguments) function, expected prototype:\nosg::DisplaySettings::DisplaySettings(osg::ArgumentParser & arguments)\nClass arguments details:\narg 1 ID = 99527028\n");
		}

		osg::ArgumentParser* arguments_ptr=(Luna< osg::ArgumentParser >::check(L,1));
		if( !arguments_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arguments in osg::DisplaySettings::DisplaySettings function");
		}
		osg::ArgumentParser & arguments=*arguments_ptr;

		return new osg::DisplaySettings(arguments);
	}

	// osg::DisplaySettings::DisplaySettings(const osg::DisplaySettings & vs)
	static osg::DisplaySettings* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DisplaySettings::DisplaySettings(const osg::DisplaySettings & vs) function, expected prototype:\nosg::DisplaySettings::DisplaySettings(const osg::DisplaySettings & vs)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::DisplaySettings* vs_ptr=(Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1));
		if( !vs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vs in osg::DisplaySettings::DisplaySettings function");
		}
		const osg::DisplaySettings & vs=*vs_ptr;

		return new osg::DisplaySettings(vs);
	}

	// osg::DisplaySettings::DisplaySettings(lua_Table * data)
	static osg::DisplaySettings* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DisplaySettings::DisplaySettings(lua_Table * data) function, expected prototype:\nosg::DisplaySettings::DisplaySettings(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_DisplaySettings(L,NULL);
	}

	// osg::DisplaySettings::DisplaySettings(lua_Table * data, osg::ArgumentParser & arguments)
	static osg::DisplaySettings* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DisplaySettings::DisplaySettings(lua_Table * data, osg::ArgumentParser & arguments) function, expected prototype:\nosg::DisplaySettings::DisplaySettings(lua_Table * data, osg::ArgumentParser & arguments)\nClass arguments details:\narg 2 ID = 99527028\n");
		}

		osg::ArgumentParser* arguments_ptr=(Luna< osg::ArgumentParser >::check(L,2));
		if( !arguments_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arguments in osg::DisplaySettings::DisplaySettings function");
		}
		osg::ArgumentParser & arguments=*arguments_ptr;

		return new wrapper_osg_DisplaySettings(L,NULL, arguments);
	}

	// osg::DisplaySettings::DisplaySettings(lua_Table * data, const osg::DisplaySettings & vs)
	static osg::DisplaySettings* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DisplaySettings::DisplaySettings(lua_Table * data, const osg::DisplaySettings & vs) function, expected prototype:\nosg::DisplaySettings::DisplaySettings(lua_Table * data, const osg::DisplaySettings & vs)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		const osg::DisplaySettings* vs_ptr=(Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,2));
		if( !vs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vs in osg::DisplaySettings::DisplaySettings function");
		}
		const osg::DisplaySettings & vs=*vs_ptr;

		return new wrapper_osg_DisplaySettings(L,NULL, vs);
	}

	// Overload binder for osg::DisplaySettings::DisplaySettings
	static osg::DisplaySettings* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function DisplaySettings, cannot match any of the overloads for function DisplaySettings:\n  DisplaySettings()\n  DisplaySettings(osg::ArgumentParser &)\n  DisplaySettings(const osg::DisplaySettings &)\n  DisplaySettings(lua_Table *)\n  DisplaySettings(lua_Table *, osg::ArgumentParser &)\n  DisplaySettings(lua_Table *, const osg::DisplaySettings &)\n");
		return NULL;
	}


	// Function binds:
	// static osg::ref_ptr< osg::DisplaySettings > & osg::DisplaySettings::instance()
	static int _bind_instance(lua_State *L) {
		if (!_lg_typecheck_instance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::ref_ptr< osg::DisplaySettings > & osg::DisplaySettings::instance() function, expected prototype:\nstatic osg::ref_ptr< osg::DisplaySettings > & osg::DisplaySettings::instance()\nClass arguments details:\n");
		}


		osg::ref_ptr< osg::DisplaySettings > & lret = osg::DisplaySettings::instance();
		Luna< osg::DisplaySettings >::push(L,lret.get(),false);

		return 1;
	}

	// void osg::DisplaySettings::setDisplaySettings(const osg::DisplaySettings & vs)
	static int _bind_setDisplaySettings(lua_State *L) {
		if (!_lg_typecheck_setDisplaySettings(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setDisplaySettings(const osg::DisplaySettings & vs) function, expected prototype:\nvoid osg::DisplaySettings::setDisplaySettings(const osg::DisplaySettings & vs)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::DisplaySettings* vs_ptr=(Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,2));
		if( !vs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vs in osg::DisplaySettings::setDisplaySettings function");
		}
		const osg::DisplaySettings & vs=*vs_ptr;

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setDisplaySettings(const osg::DisplaySettings &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setDisplaySettings(vs);

		return 0;
	}

	// void osg::DisplaySettings::merge(const osg::DisplaySettings & vs)
	static int _bind_merge(lua_State *L) {
		if (!_lg_typecheck_merge(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::merge(const osg::DisplaySettings & vs) function, expected prototype:\nvoid osg::DisplaySettings::merge(const osg::DisplaySettings & vs)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::DisplaySettings* vs_ptr=(Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,2));
		if( !vs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vs in osg::DisplaySettings::merge function");
		}
		const osg::DisplaySettings & vs=*vs_ptr;

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::merge(const osg::DisplaySettings &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->merge(vs);

		return 0;
	}

	// void osg::DisplaySettings::setDefaults()
	static int _bind_setDefaults(lua_State *L) {
		if (!_lg_typecheck_setDefaults(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setDefaults() function, expected prototype:\nvoid osg::DisplaySettings::setDefaults()\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setDefaults(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setDefaults();

		return 0;
	}

	// void osg::DisplaySettings::readEnvironmentalVariables()
	static int _bind_readEnvironmentalVariables(lua_State *L) {
		if (!_lg_typecheck_readEnvironmentalVariables(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::readEnvironmentalVariables() function, expected prototype:\nvoid osg::DisplaySettings::readEnvironmentalVariables()\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::readEnvironmentalVariables(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->readEnvironmentalVariables();

		return 0;
	}

	// void osg::DisplaySettings::readCommandLine(osg::ArgumentParser & arguments)
	static int _bind_readCommandLine(lua_State *L) {
		if (!_lg_typecheck_readCommandLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::readCommandLine(osg::ArgumentParser & arguments) function, expected prototype:\nvoid osg::DisplaySettings::readCommandLine(osg::ArgumentParser & arguments)\nClass arguments details:\narg 1 ID = 99527028\n");
		}

		osg::ArgumentParser* arguments_ptr=(Luna< osg::ArgumentParser >::check(L,2));
		if( !arguments_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arguments in osg::DisplaySettings::readCommandLine function");
		}
		osg::ArgumentParser & arguments=*arguments_ptr;

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::readCommandLine(osg::ArgumentParser &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->readCommandLine(arguments);

		return 0;
	}

	// void osg::DisplaySettings::setDisplayType(osg::DisplaySettings::DisplayType type)
	static int _bind_setDisplayType(lua_State *L) {
		if (!_lg_typecheck_setDisplayType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setDisplayType(osg::DisplaySettings::DisplayType type) function, expected prototype:\nvoid osg::DisplaySettings::setDisplayType(osg::DisplaySettings::DisplayType type)\nClass arguments details:\n");
		}

		osg::DisplaySettings::DisplayType type=(osg::DisplaySettings::DisplayType)lua_tointeger(L,2);

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setDisplayType(osg::DisplaySettings::DisplayType). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setDisplayType(type);

		return 0;
	}

	// osg::DisplaySettings::DisplayType osg::DisplaySettings::getDisplayType() const
	static int _bind_getDisplayType(lua_State *L) {
		if (!_lg_typecheck_getDisplayType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DisplaySettings::DisplayType osg::DisplaySettings::getDisplayType() const function, expected prototype:\nosg::DisplaySettings::DisplayType osg::DisplaySettings::getDisplayType() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::DisplaySettings::DisplayType osg::DisplaySettings::getDisplayType() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::DisplaySettings::DisplayType lret = self->getDisplayType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DisplaySettings::setStereo(bool on)
	static int _bind_setStereo(lua_State *L) {
		if (!_lg_typecheck_setStereo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setStereo(bool on) function, expected prototype:\nvoid osg::DisplaySettings::setStereo(bool on)\nClass arguments details:\n");
		}

		bool on=(bool)(lua_toboolean(L,2)==1);

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setStereo(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setStereo(on);

		return 0;
	}

	// bool osg::DisplaySettings::getStereo() const
	static int _bind_getStereo(lua_State *L) {
		if (!_lg_typecheck_getStereo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::DisplaySettings::getStereo() const function, expected prototype:\nbool osg::DisplaySettings::getStereo() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::DisplaySettings::getStereo() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->getStereo();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::DisplaySettings::setStereoMode(osg::DisplaySettings::StereoMode mode)
	static int _bind_setStereoMode(lua_State *L) {
		if (!_lg_typecheck_setStereoMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setStereoMode(osg::DisplaySettings::StereoMode mode) function, expected prototype:\nvoid osg::DisplaySettings::setStereoMode(osg::DisplaySettings::StereoMode mode)\nClass arguments details:\n");
		}

		osg::DisplaySettings::StereoMode mode=(osg::DisplaySettings::StereoMode)lua_tointeger(L,2);

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setStereoMode(osg::DisplaySettings::StereoMode). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setStereoMode(mode);

		return 0;
	}

	// osg::DisplaySettings::StereoMode osg::DisplaySettings::getStereoMode() const
	static int _bind_getStereoMode(lua_State *L) {
		if (!_lg_typecheck_getStereoMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DisplaySettings::StereoMode osg::DisplaySettings::getStereoMode() const function, expected prototype:\nosg::DisplaySettings::StereoMode osg::DisplaySettings::getStereoMode() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::DisplaySettings::StereoMode osg::DisplaySettings::getStereoMode() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::DisplaySettings::StereoMode lret = self->getStereoMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DisplaySettings::setEyeSeparation(float eyeSeparation)
	static int _bind_setEyeSeparation(lua_State *L) {
		if (!_lg_typecheck_setEyeSeparation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setEyeSeparation(float eyeSeparation) function, expected prototype:\nvoid osg::DisplaySettings::setEyeSeparation(float eyeSeparation)\nClass arguments details:\n");
		}

		float eyeSeparation=(float)lua_tonumber(L,2);

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setEyeSeparation(float). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setEyeSeparation(eyeSeparation);

		return 0;
	}

	// float osg::DisplaySettings::getEyeSeparation() const
	static int _bind_getEyeSeparation(lua_State *L) {
		if (!_lg_typecheck_getEyeSeparation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::DisplaySettings::getEyeSeparation() const function, expected prototype:\nfloat osg::DisplaySettings::getEyeSeparation() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::DisplaySettings::getEyeSeparation() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		float lret = self->getEyeSeparation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DisplaySettings::setSplitStereoHorizontalEyeMapping(osg::DisplaySettings::SplitStereoHorizontalEyeMapping m)
	static int _bind_setSplitStereoHorizontalEyeMapping(lua_State *L) {
		if (!_lg_typecheck_setSplitStereoHorizontalEyeMapping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setSplitStereoHorizontalEyeMapping(osg::DisplaySettings::SplitStereoHorizontalEyeMapping m) function, expected prototype:\nvoid osg::DisplaySettings::setSplitStereoHorizontalEyeMapping(osg::DisplaySettings::SplitStereoHorizontalEyeMapping m)\nClass arguments details:\n");
		}

		osg::DisplaySettings::SplitStereoHorizontalEyeMapping m=(osg::DisplaySettings::SplitStereoHorizontalEyeMapping)lua_tointeger(L,2);

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setSplitStereoHorizontalEyeMapping(osg::DisplaySettings::SplitStereoHorizontalEyeMapping). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setSplitStereoHorizontalEyeMapping(m);

		return 0;
	}

	// osg::DisplaySettings::SplitStereoHorizontalEyeMapping osg::DisplaySettings::getSplitStereoHorizontalEyeMapping() const
	static int _bind_getSplitStereoHorizontalEyeMapping(lua_State *L) {
		if (!_lg_typecheck_getSplitStereoHorizontalEyeMapping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DisplaySettings::SplitStereoHorizontalEyeMapping osg::DisplaySettings::getSplitStereoHorizontalEyeMapping() const function, expected prototype:\nosg::DisplaySettings::SplitStereoHorizontalEyeMapping osg::DisplaySettings::getSplitStereoHorizontalEyeMapping() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::DisplaySettings::SplitStereoHorizontalEyeMapping osg::DisplaySettings::getSplitStereoHorizontalEyeMapping() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::DisplaySettings::SplitStereoHorizontalEyeMapping lret = self->getSplitStereoHorizontalEyeMapping();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DisplaySettings::setSplitStereoHorizontalSeparation(int s)
	static int _bind_setSplitStereoHorizontalSeparation(lua_State *L) {
		if (!_lg_typecheck_setSplitStereoHorizontalSeparation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setSplitStereoHorizontalSeparation(int s) function, expected prototype:\nvoid osg::DisplaySettings::setSplitStereoHorizontalSeparation(int s)\nClass arguments details:\n");
		}

		int s=(int)lua_tointeger(L,2);

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setSplitStereoHorizontalSeparation(int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setSplitStereoHorizontalSeparation(s);

		return 0;
	}

	// int osg::DisplaySettings::getSplitStereoHorizontalSeparation() const
	static int _bind_getSplitStereoHorizontalSeparation(lua_State *L) {
		if (!_lg_typecheck_getSplitStereoHorizontalSeparation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::DisplaySettings::getSplitStereoHorizontalSeparation() const function, expected prototype:\nint osg::DisplaySettings::getSplitStereoHorizontalSeparation() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::DisplaySettings::getSplitStereoHorizontalSeparation() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		int lret = self->getSplitStereoHorizontalSeparation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DisplaySettings::setSplitStereoVerticalEyeMapping(osg::DisplaySettings::SplitStereoVerticalEyeMapping m)
	static int _bind_setSplitStereoVerticalEyeMapping(lua_State *L) {
		if (!_lg_typecheck_setSplitStereoVerticalEyeMapping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setSplitStereoVerticalEyeMapping(osg::DisplaySettings::SplitStereoVerticalEyeMapping m) function, expected prototype:\nvoid osg::DisplaySettings::setSplitStereoVerticalEyeMapping(osg::DisplaySettings::SplitStereoVerticalEyeMapping m)\nClass arguments details:\n");
		}

		osg::DisplaySettings::SplitStereoVerticalEyeMapping m=(osg::DisplaySettings::SplitStereoVerticalEyeMapping)lua_tointeger(L,2);

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setSplitStereoVerticalEyeMapping(osg::DisplaySettings::SplitStereoVerticalEyeMapping). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setSplitStereoVerticalEyeMapping(m);

		return 0;
	}

	// osg::DisplaySettings::SplitStereoVerticalEyeMapping osg::DisplaySettings::getSplitStereoVerticalEyeMapping() const
	static int _bind_getSplitStereoVerticalEyeMapping(lua_State *L) {
		if (!_lg_typecheck_getSplitStereoVerticalEyeMapping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DisplaySettings::SplitStereoVerticalEyeMapping osg::DisplaySettings::getSplitStereoVerticalEyeMapping() const function, expected prototype:\nosg::DisplaySettings::SplitStereoVerticalEyeMapping osg::DisplaySettings::getSplitStereoVerticalEyeMapping() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::DisplaySettings::SplitStereoVerticalEyeMapping osg::DisplaySettings::getSplitStereoVerticalEyeMapping() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::DisplaySettings::SplitStereoVerticalEyeMapping lret = self->getSplitStereoVerticalEyeMapping();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DisplaySettings::setSplitStereoVerticalSeparation(int s)
	static int _bind_setSplitStereoVerticalSeparation(lua_State *L) {
		if (!_lg_typecheck_setSplitStereoVerticalSeparation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setSplitStereoVerticalSeparation(int s) function, expected prototype:\nvoid osg::DisplaySettings::setSplitStereoVerticalSeparation(int s)\nClass arguments details:\n");
		}

		int s=(int)lua_tointeger(L,2);

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setSplitStereoVerticalSeparation(int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setSplitStereoVerticalSeparation(s);

		return 0;
	}

	// int osg::DisplaySettings::getSplitStereoVerticalSeparation() const
	static int _bind_getSplitStereoVerticalSeparation(lua_State *L) {
		if (!_lg_typecheck_getSplitStereoVerticalSeparation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::DisplaySettings::getSplitStereoVerticalSeparation() const function, expected prototype:\nint osg::DisplaySettings::getSplitStereoVerticalSeparation() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::DisplaySettings::getSplitStereoVerticalSeparation() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		int lret = self->getSplitStereoVerticalSeparation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DisplaySettings::setSplitStereoAutoAdjustAspectRatio(bool flag)
	static int _bind_setSplitStereoAutoAdjustAspectRatio(lua_State *L) {
		if (!_lg_typecheck_setSplitStereoAutoAdjustAspectRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setSplitStereoAutoAdjustAspectRatio(bool flag) function, expected prototype:\nvoid osg::DisplaySettings::setSplitStereoAutoAdjustAspectRatio(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setSplitStereoAutoAdjustAspectRatio(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setSplitStereoAutoAdjustAspectRatio(flag);

		return 0;
	}

	// bool osg::DisplaySettings::getSplitStereoAutoAdjustAspectRatio() const
	static int _bind_getSplitStereoAutoAdjustAspectRatio(lua_State *L) {
		if (!_lg_typecheck_getSplitStereoAutoAdjustAspectRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::DisplaySettings::getSplitStereoAutoAdjustAspectRatio() const function, expected prototype:\nbool osg::DisplaySettings::getSplitStereoAutoAdjustAspectRatio() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::DisplaySettings::getSplitStereoAutoAdjustAspectRatio() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->getSplitStereoAutoAdjustAspectRatio();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::DisplaySettings::setScreenWidth(float width)
	static int _bind_setScreenWidth(lua_State *L) {
		if (!_lg_typecheck_setScreenWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setScreenWidth(float width) function, expected prototype:\nvoid osg::DisplaySettings::setScreenWidth(float width)\nClass arguments details:\n");
		}

		float width=(float)lua_tonumber(L,2);

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setScreenWidth(float). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setScreenWidth(width);

		return 0;
	}

	// float osg::DisplaySettings::getScreenWidth() const
	static int _bind_getScreenWidth(lua_State *L) {
		if (!_lg_typecheck_getScreenWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::DisplaySettings::getScreenWidth() const function, expected prototype:\nfloat osg::DisplaySettings::getScreenWidth() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::DisplaySettings::getScreenWidth() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		float lret = self->getScreenWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DisplaySettings::setScreenHeight(float height)
	static int _bind_setScreenHeight(lua_State *L) {
		if (!_lg_typecheck_setScreenHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setScreenHeight(float height) function, expected prototype:\nvoid osg::DisplaySettings::setScreenHeight(float height)\nClass arguments details:\n");
		}

		float height=(float)lua_tonumber(L,2);

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setScreenHeight(float). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setScreenHeight(height);

		return 0;
	}

	// float osg::DisplaySettings::getScreenHeight() const
	static int _bind_getScreenHeight(lua_State *L) {
		if (!_lg_typecheck_getScreenHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::DisplaySettings::getScreenHeight() const function, expected prototype:\nfloat osg::DisplaySettings::getScreenHeight() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::DisplaySettings::getScreenHeight() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		float lret = self->getScreenHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DisplaySettings::setScreenDistance(float distance)
	static int _bind_setScreenDistance(lua_State *L) {
		if (!_lg_typecheck_setScreenDistance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setScreenDistance(float distance) function, expected prototype:\nvoid osg::DisplaySettings::setScreenDistance(float distance)\nClass arguments details:\n");
		}

		float distance=(float)lua_tonumber(L,2);

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setScreenDistance(float). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setScreenDistance(distance);

		return 0;
	}

	// float osg::DisplaySettings::getScreenDistance() const
	static int _bind_getScreenDistance(lua_State *L) {
		if (!_lg_typecheck_getScreenDistance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::DisplaySettings::getScreenDistance() const function, expected prototype:\nfloat osg::DisplaySettings::getScreenDistance() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::DisplaySettings::getScreenDistance() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		float lret = self->getScreenDistance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DisplaySettings::setDoubleBuffer(bool flag)
	static int _bind_setDoubleBuffer(lua_State *L) {
		if (!_lg_typecheck_setDoubleBuffer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setDoubleBuffer(bool flag) function, expected prototype:\nvoid osg::DisplaySettings::setDoubleBuffer(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setDoubleBuffer(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setDoubleBuffer(flag);

		return 0;
	}

	// bool osg::DisplaySettings::getDoubleBuffer() const
	static int _bind_getDoubleBuffer(lua_State *L) {
		if (!_lg_typecheck_getDoubleBuffer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::DisplaySettings::getDoubleBuffer() const function, expected prototype:\nbool osg::DisplaySettings::getDoubleBuffer() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::DisplaySettings::getDoubleBuffer() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->getDoubleBuffer();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::DisplaySettings::setRGB(bool flag)
	static int _bind_setRGB(lua_State *L) {
		if (!_lg_typecheck_setRGB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setRGB(bool flag) function, expected prototype:\nvoid osg::DisplaySettings::setRGB(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setRGB(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setRGB(flag);

		return 0;
	}

	// bool osg::DisplaySettings::getRGB() const
	static int _bind_getRGB(lua_State *L) {
		if (!_lg_typecheck_getRGB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::DisplaySettings::getRGB() const function, expected prototype:\nbool osg::DisplaySettings::getRGB() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::DisplaySettings::getRGB() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->getRGB();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::DisplaySettings::setDepthBuffer(bool flag)
	static int _bind_setDepthBuffer(lua_State *L) {
		if (!_lg_typecheck_setDepthBuffer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setDepthBuffer(bool flag) function, expected prototype:\nvoid osg::DisplaySettings::setDepthBuffer(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setDepthBuffer(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setDepthBuffer(flag);

		return 0;
	}

	// bool osg::DisplaySettings::getDepthBuffer() const
	static int _bind_getDepthBuffer(lua_State *L) {
		if (!_lg_typecheck_getDepthBuffer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::DisplaySettings::getDepthBuffer() const function, expected prototype:\nbool osg::DisplaySettings::getDepthBuffer() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::DisplaySettings::getDepthBuffer() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->getDepthBuffer();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::DisplaySettings::setMinimumNumAlphaBits(unsigned int bits)
	static int _bind_setMinimumNumAlphaBits(lua_State *L) {
		if (!_lg_typecheck_setMinimumNumAlphaBits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setMinimumNumAlphaBits(unsigned int bits) function, expected prototype:\nvoid osg::DisplaySettings::setMinimumNumAlphaBits(unsigned int bits)\nClass arguments details:\n");
		}

		unsigned int bits=(unsigned int)lua_tointeger(L,2);

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setMinimumNumAlphaBits(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setMinimumNumAlphaBits(bits);

		return 0;
	}

	// unsigned int osg::DisplaySettings::getMinimumNumAlphaBits() const
	static int _bind_getMinimumNumAlphaBits(lua_State *L) {
		if (!_lg_typecheck_getMinimumNumAlphaBits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DisplaySettings::getMinimumNumAlphaBits() const function, expected prototype:\nunsigned int osg::DisplaySettings::getMinimumNumAlphaBits() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DisplaySettings::getMinimumNumAlphaBits() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->getMinimumNumAlphaBits();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::DisplaySettings::getAlphaBuffer() const
	static int _bind_getAlphaBuffer(lua_State *L) {
		if (!_lg_typecheck_getAlphaBuffer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::DisplaySettings::getAlphaBuffer() const function, expected prototype:\nbool osg::DisplaySettings::getAlphaBuffer() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::DisplaySettings::getAlphaBuffer() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->getAlphaBuffer();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::DisplaySettings::setMinimumNumStencilBits(unsigned int bits)
	static int _bind_setMinimumNumStencilBits(lua_State *L) {
		if (!_lg_typecheck_setMinimumNumStencilBits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setMinimumNumStencilBits(unsigned int bits) function, expected prototype:\nvoid osg::DisplaySettings::setMinimumNumStencilBits(unsigned int bits)\nClass arguments details:\n");
		}

		unsigned int bits=(unsigned int)lua_tointeger(L,2);

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setMinimumNumStencilBits(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setMinimumNumStencilBits(bits);

		return 0;
	}

	// unsigned int osg::DisplaySettings::getMinimumNumStencilBits() const
	static int _bind_getMinimumNumStencilBits(lua_State *L) {
		if (!_lg_typecheck_getMinimumNumStencilBits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DisplaySettings::getMinimumNumStencilBits() const function, expected prototype:\nunsigned int osg::DisplaySettings::getMinimumNumStencilBits() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DisplaySettings::getMinimumNumStencilBits() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->getMinimumNumStencilBits();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::DisplaySettings::getStencilBuffer() const
	static int _bind_getStencilBuffer(lua_State *L) {
		if (!_lg_typecheck_getStencilBuffer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::DisplaySettings::getStencilBuffer() const function, expected prototype:\nbool osg::DisplaySettings::getStencilBuffer() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::DisplaySettings::getStencilBuffer() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->getStencilBuffer();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::DisplaySettings::setMinimumNumAccumBits(unsigned int red, unsigned int green, unsigned int blue, unsigned int alpha)
	static int _bind_setMinimumNumAccumBits(lua_State *L) {
		if (!_lg_typecheck_setMinimumNumAccumBits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setMinimumNumAccumBits(unsigned int red, unsigned int green, unsigned int blue, unsigned int alpha) function, expected prototype:\nvoid osg::DisplaySettings::setMinimumNumAccumBits(unsigned int red, unsigned int green, unsigned int blue, unsigned int alpha)\nClass arguments details:\n");
		}

		unsigned int red=(unsigned int)lua_tointeger(L,2);
		unsigned int green=(unsigned int)lua_tointeger(L,3);
		unsigned int blue=(unsigned int)lua_tointeger(L,4);
		unsigned int alpha=(unsigned int)lua_tointeger(L,5);

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setMinimumNumAccumBits(unsigned int, unsigned int, unsigned int, unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setMinimumNumAccumBits(red, green, blue, alpha);

		return 0;
	}

	// unsigned int osg::DisplaySettings::getMinimumNumAccumRedBits() const
	static int _bind_getMinimumNumAccumRedBits(lua_State *L) {
		if (!_lg_typecheck_getMinimumNumAccumRedBits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DisplaySettings::getMinimumNumAccumRedBits() const function, expected prototype:\nunsigned int osg::DisplaySettings::getMinimumNumAccumRedBits() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DisplaySettings::getMinimumNumAccumRedBits() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->getMinimumNumAccumRedBits();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::DisplaySettings::getMinimumNumAccumGreenBits() const
	static int _bind_getMinimumNumAccumGreenBits(lua_State *L) {
		if (!_lg_typecheck_getMinimumNumAccumGreenBits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DisplaySettings::getMinimumNumAccumGreenBits() const function, expected prototype:\nunsigned int osg::DisplaySettings::getMinimumNumAccumGreenBits() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DisplaySettings::getMinimumNumAccumGreenBits() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->getMinimumNumAccumGreenBits();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::DisplaySettings::getMinimumNumAccumBlueBits() const
	static int _bind_getMinimumNumAccumBlueBits(lua_State *L) {
		if (!_lg_typecheck_getMinimumNumAccumBlueBits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DisplaySettings::getMinimumNumAccumBlueBits() const function, expected prototype:\nunsigned int osg::DisplaySettings::getMinimumNumAccumBlueBits() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DisplaySettings::getMinimumNumAccumBlueBits() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->getMinimumNumAccumBlueBits();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::DisplaySettings::getMinimumNumAccumAlphaBits() const
	static int _bind_getMinimumNumAccumAlphaBits(lua_State *L) {
		if (!_lg_typecheck_getMinimumNumAccumAlphaBits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DisplaySettings::getMinimumNumAccumAlphaBits() const function, expected prototype:\nunsigned int osg::DisplaySettings::getMinimumNumAccumAlphaBits() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DisplaySettings::getMinimumNumAccumAlphaBits() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->getMinimumNumAccumAlphaBits();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::DisplaySettings::getAccumBuffer() const
	static int _bind_getAccumBuffer(lua_State *L) {
		if (!_lg_typecheck_getAccumBuffer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::DisplaySettings::getAccumBuffer() const function, expected prototype:\nbool osg::DisplaySettings::getAccumBuffer() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::DisplaySettings::getAccumBuffer() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->getAccumBuffer();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::DisplaySettings::setMaxNumberOfGraphicsContexts(unsigned int num)
	static int _bind_setMaxNumberOfGraphicsContexts(lua_State *L) {
		if (!_lg_typecheck_setMaxNumberOfGraphicsContexts(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setMaxNumberOfGraphicsContexts(unsigned int num) function, expected prototype:\nvoid osg::DisplaySettings::setMaxNumberOfGraphicsContexts(unsigned int num)\nClass arguments details:\n");
		}

		unsigned int num=(unsigned int)lua_tointeger(L,2);

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setMaxNumberOfGraphicsContexts(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setMaxNumberOfGraphicsContexts(num);

		return 0;
	}

	// unsigned int osg::DisplaySettings::getMaxNumberOfGraphicsContexts() const
	static int _bind_getMaxNumberOfGraphicsContexts(lua_State *L) {
		if (!_lg_typecheck_getMaxNumberOfGraphicsContexts(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DisplaySettings::getMaxNumberOfGraphicsContexts() const function, expected prototype:\nunsigned int osg::DisplaySettings::getMaxNumberOfGraphicsContexts() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DisplaySettings::getMaxNumberOfGraphicsContexts() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->getMaxNumberOfGraphicsContexts();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DisplaySettings::setNumMultiSamples(unsigned int samples)
	static int _bind_setNumMultiSamples(lua_State *L) {
		if (!_lg_typecheck_setNumMultiSamples(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setNumMultiSamples(unsigned int samples) function, expected prototype:\nvoid osg::DisplaySettings::setNumMultiSamples(unsigned int samples)\nClass arguments details:\n");
		}

		unsigned int samples=(unsigned int)lua_tointeger(L,2);

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setNumMultiSamples(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setNumMultiSamples(samples);

		return 0;
	}

	// unsigned int osg::DisplaySettings::getNumMultiSamples() const
	static int _bind_getNumMultiSamples(lua_State *L) {
		if (!_lg_typecheck_getNumMultiSamples(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DisplaySettings::getNumMultiSamples() const function, expected prototype:\nunsigned int osg::DisplaySettings::getNumMultiSamples() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DisplaySettings::getNumMultiSamples() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->getNumMultiSamples();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::DisplaySettings::getMultiSamples() const
	static int _bind_getMultiSamples(lua_State *L) {
		if (!_lg_typecheck_getMultiSamples(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::DisplaySettings::getMultiSamples() const function, expected prototype:\nbool osg::DisplaySettings::getMultiSamples() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::DisplaySettings::getMultiSamples() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->getMultiSamples();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::DisplaySettings::setCompileContextsHint(bool useCompileContexts)
	static int _bind_setCompileContextsHint(lua_State *L) {
		if (!_lg_typecheck_setCompileContextsHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setCompileContextsHint(bool useCompileContexts) function, expected prototype:\nvoid osg::DisplaySettings::setCompileContextsHint(bool useCompileContexts)\nClass arguments details:\n");
		}

		bool useCompileContexts=(bool)(lua_toboolean(L,2)==1);

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setCompileContextsHint(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setCompileContextsHint(useCompileContexts);

		return 0;
	}

	// bool osg::DisplaySettings::getCompileContextsHint() const
	static int _bind_getCompileContextsHint(lua_State *L) {
		if (!_lg_typecheck_getCompileContextsHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::DisplaySettings::getCompileContextsHint() const function, expected prototype:\nbool osg::DisplaySettings::getCompileContextsHint() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::DisplaySettings::getCompileContextsHint() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->getCompileContextsHint();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::DisplaySettings::setSerializeDrawDispatch(bool serializeDrawDispatch)
	static int _bind_setSerializeDrawDispatch(lua_State *L) {
		if (!_lg_typecheck_setSerializeDrawDispatch(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setSerializeDrawDispatch(bool serializeDrawDispatch) function, expected prototype:\nvoid osg::DisplaySettings::setSerializeDrawDispatch(bool serializeDrawDispatch)\nClass arguments details:\n");
		}

		bool serializeDrawDispatch=(bool)(lua_toboolean(L,2)==1);

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setSerializeDrawDispatch(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setSerializeDrawDispatch(serializeDrawDispatch);

		return 0;
	}

	// bool osg::DisplaySettings::getSerializeDrawDispatch() const
	static int _bind_getSerializeDrawDispatch(lua_State *L) {
		if (!_lg_typecheck_getSerializeDrawDispatch(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::DisplaySettings::getSerializeDrawDispatch() const function, expected prototype:\nbool osg::DisplaySettings::getSerializeDrawDispatch() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::DisplaySettings::getSerializeDrawDispatch() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->getSerializeDrawDispatch();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::DisplaySettings::setApplication(const std::string & application)
	static int _bind_setApplication(lua_State *L) {
		if (!_lg_typecheck_setApplication(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setApplication(const std::string & application) function, expected prototype:\nvoid osg::DisplaySettings::setApplication(const std::string & application)\nClass arguments details:\n");
		}

		std::string application(lua_tostring(L,2),lua_objlen(L,2));

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setApplication(const std::string &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setApplication(application);

		return 0;
	}

	// const std::string & osg::DisplaySettings::getApplication()
	static int _bind_getApplication(lua_State *L) {
		if (!_lg_typecheck_getApplication(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::string & osg::DisplaySettings::getApplication() function, expected prototype:\nconst std::string & osg::DisplaySettings::getApplication()\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::string & osg::DisplaySettings::getApplication(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const std::string & lret = self->getApplication();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osg::DisplaySettings::setMaxTexturePoolSize(unsigned int size)
	static int _bind_setMaxTexturePoolSize(lua_State *L) {
		if (!_lg_typecheck_setMaxTexturePoolSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setMaxTexturePoolSize(unsigned int size) function, expected prototype:\nvoid osg::DisplaySettings::setMaxTexturePoolSize(unsigned int size)\nClass arguments details:\n");
		}

		unsigned int size=(unsigned int)lua_tointeger(L,2);

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setMaxTexturePoolSize(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setMaxTexturePoolSize(size);

		return 0;
	}

	// unsigned int osg::DisplaySettings::getMaxTexturePoolSize() const
	static int _bind_getMaxTexturePoolSize(lua_State *L) {
		if (!_lg_typecheck_getMaxTexturePoolSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DisplaySettings::getMaxTexturePoolSize() const function, expected prototype:\nunsigned int osg::DisplaySettings::getMaxTexturePoolSize() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DisplaySettings::getMaxTexturePoolSize() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->getMaxTexturePoolSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DisplaySettings::setMaxBufferObjectPoolSize(unsigned int size)
	static int _bind_setMaxBufferObjectPoolSize(lua_State *L) {
		if (!_lg_typecheck_setMaxBufferObjectPoolSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setMaxBufferObjectPoolSize(unsigned int size) function, expected prototype:\nvoid osg::DisplaySettings::setMaxBufferObjectPoolSize(unsigned int size)\nClass arguments details:\n");
		}

		unsigned int size=(unsigned int)lua_tointeger(L,2);

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setMaxBufferObjectPoolSize(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setMaxBufferObjectPoolSize(size);

		return 0;
	}

	// unsigned int osg::DisplaySettings::getMaxBufferObjectPoolSize() const
	static int _bind_getMaxBufferObjectPoolSize(lua_State *L) {
		if (!_lg_typecheck_getMaxBufferObjectPoolSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DisplaySettings::getMaxBufferObjectPoolSize() const function, expected prototype:\nunsigned int osg::DisplaySettings::getMaxBufferObjectPoolSize() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DisplaySettings::getMaxBufferObjectPoolSize() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->getMaxBufferObjectPoolSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DisplaySettings::setImplicitBufferAttachmentMask(int renderMask = osg::DisplaySettings::DEFAULT_IMPLICIT_BUFFER_ATTACHMENT, int resolveMask = osg::DisplaySettings::DEFAULT_IMPLICIT_BUFFER_ATTACHMENT)
	static int _bind_setImplicitBufferAttachmentMask(lua_State *L) {
		if (!_lg_typecheck_setImplicitBufferAttachmentMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setImplicitBufferAttachmentMask(int renderMask = osg::DisplaySettings::DEFAULT_IMPLICIT_BUFFER_ATTACHMENT, int resolveMask = osg::DisplaySettings::DEFAULT_IMPLICIT_BUFFER_ATTACHMENT) function, expected prototype:\nvoid osg::DisplaySettings::setImplicitBufferAttachmentMask(int renderMask = osg::DisplaySettings::DEFAULT_IMPLICIT_BUFFER_ATTACHMENT, int resolveMask = osg::DisplaySettings::DEFAULT_IMPLICIT_BUFFER_ATTACHMENT)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int renderMask=luatop>1 ? (int)lua_tointeger(L,2) : osg::DisplaySettings::DEFAULT_IMPLICIT_BUFFER_ATTACHMENT;
		int resolveMask=luatop>2 ? (int)lua_tointeger(L,3) : osg::DisplaySettings::DEFAULT_IMPLICIT_BUFFER_ATTACHMENT;

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setImplicitBufferAttachmentMask(int, int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setImplicitBufferAttachmentMask(renderMask, resolveMask);

		return 0;
	}

	// void osg::DisplaySettings::setImplicitBufferAttachmentRenderMask(int implicitBufferAttachmentRenderMask)
	static int _bind_setImplicitBufferAttachmentRenderMask(lua_State *L) {
		if (!_lg_typecheck_setImplicitBufferAttachmentRenderMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setImplicitBufferAttachmentRenderMask(int implicitBufferAttachmentRenderMask) function, expected prototype:\nvoid osg::DisplaySettings::setImplicitBufferAttachmentRenderMask(int implicitBufferAttachmentRenderMask)\nClass arguments details:\n");
		}

		int implicitBufferAttachmentRenderMask=(int)lua_tointeger(L,2);

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setImplicitBufferAttachmentRenderMask(int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setImplicitBufferAttachmentRenderMask(implicitBufferAttachmentRenderMask);

		return 0;
	}

	// void osg::DisplaySettings::setImplicitBufferAttachmentResolveMask(int implicitBufferAttachmentResolveMask)
	static int _bind_setImplicitBufferAttachmentResolveMask(lua_State *L) {
		if (!_lg_typecheck_setImplicitBufferAttachmentResolveMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setImplicitBufferAttachmentResolveMask(int implicitBufferAttachmentResolveMask) function, expected prototype:\nvoid osg::DisplaySettings::setImplicitBufferAttachmentResolveMask(int implicitBufferAttachmentResolveMask)\nClass arguments details:\n");
		}

		int implicitBufferAttachmentResolveMask=(int)lua_tointeger(L,2);

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setImplicitBufferAttachmentResolveMask(int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setImplicitBufferAttachmentResolveMask(implicitBufferAttachmentResolveMask);

		return 0;
	}

	// int osg::DisplaySettings::getImplicitBufferAttachmentRenderMask() const
	static int _bind_getImplicitBufferAttachmentRenderMask(lua_State *L) {
		if (!_lg_typecheck_getImplicitBufferAttachmentRenderMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::DisplaySettings::getImplicitBufferAttachmentRenderMask() const function, expected prototype:\nint osg::DisplaySettings::getImplicitBufferAttachmentRenderMask() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::DisplaySettings::getImplicitBufferAttachmentRenderMask() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		int lret = self->getImplicitBufferAttachmentRenderMask();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::DisplaySettings::getImplicitBufferAttachmentResolveMask() const
	static int _bind_getImplicitBufferAttachmentResolveMask(lua_State *L) {
		if (!_lg_typecheck_getImplicitBufferAttachmentResolveMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::DisplaySettings::getImplicitBufferAttachmentResolveMask() const function, expected prototype:\nint osg::DisplaySettings::getImplicitBufferAttachmentResolveMask() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::DisplaySettings::getImplicitBufferAttachmentResolveMask() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		int lret = self->getImplicitBufferAttachmentResolveMask();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DisplaySettings::setSwapMethod(osg::DisplaySettings::SwapMethod swapMethod)
	static int _bind_setSwapMethod(lua_State *L) {
		if (!_lg_typecheck_setSwapMethod(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setSwapMethod(osg::DisplaySettings::SwapMethod swapMethod) function, expected prototype:\nvoid osg::DisplaySettings::setSwapMethod(osg::DisplaySettings::SwapMethod swapMethod)\nClass arguments details:\n");
		}

		osg::DisplaySettings::SwapMethod swapMethod=(osg::DisplaySettings::SwapMethod)lua_tointeger(L,2);

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setSwapMethod(osg::DisplaySettings::SwapMethod). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setSwapMethod(swapMethod);

		return 0;
	}

	// osg::DisplaySettings::SwapMethod osg::DisplaySettings::getSwapMethod()
	static int _bind_getSwapMethod(lua_State *L) {
		if (!_lg_typecheck_getSwapMethod(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DisplaySettings::SwapMethod osg::DisplaySettings::getSwapMethod() function, expected prototype:\nosg::DisplaySettings::SwapMethod osg::DisplaySettings::getSwapMethod()\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::DisplaySettings::SwapMethod osg::DisplaySettings::getSwapMethod(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::DisplaySettings::SwapMethod lret = self->getSwapMethod();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DisplaySettings::setGLContextVersion(const std::string & version)
	static int _bind_setGLContextVersion(lua_State *L) {
		if (!_lg_typecheck_setGLContextVersion(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setGLContextVersion(const std::string & version) function, expected prototype:\nvoid osg::DisplaySettings::setGLContextVersion(const std::string & version)\nClass arguments details:\n");
		}

		std::string version(lua_tostring(L,2),lua_objlen(L,2));

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setGLContextVersion(const std::string &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setGLContextVersion(version);

		return 0;
	}

	// const std::string osg::DisplaySettings::getGLContextVersion() const
	static int _bind_getGLContextVersion(lua_State *L) {
		if (!_lg_typecheck_getGLContextVersion(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::string osg::DisplaySettings::getGLContextVersion() const function, expected prototype:\nconst std::string osg::DisplaySettings::getGLContextVersion() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::string osg::DisplaySettings::getGLContextVersion() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const std::string lret = self->getGLContextVersion();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osg::DisplaySettings::setGLContextFlags(unsigned int flags)
	static int _bind_setGLContextFlags(lua_State *L) {
		if (!_lg_typecheck_setGLContextFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setGLContextFlags(unsigned int flags) function, expected prototype:\nvoid osg::DisplaySettings::setGLContextFlags(unsigned int flags)\nClass arguments details:\n");
		}

		unsigned int flags=(unsigned int)lua_tointeger(L,2);

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setGLContextFlags(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setGLContextFlags(flags);

		return 0;
	}

	// unsigned int osg::DisplaySettings::getGLContextFlags() const
	static int _bind_getGLContextFlags(lua_State *L) {
		if (!_lg_typecheck_getGLContextFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DisplaySettings::getGLContextFlags() const function, expected prototype:\nunsigned int osg::DisplaySettings::getGLContextFlags() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DisplaySettings::getGLContextFlags() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->getGLContextFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DisplaySettings::setGLContextProfileMask(unsigned int mask)
	static int _bind_setGLContextProfileMask(lua_State *L) {
		if (!_lg_typecheck_setGLContextProfileMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::setGLContextProfileMask(unsigned int mask) function, expected prototype:\nvoid osg::DisplaySettings::setGLContextProfileMask(unsigned int mask)\nClass arguments details:\n");
		}

		unsigned int mask=(unsigned int)lua_tointeger(L,2);

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::setGLContextProfileMask(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setGLContextProfileMask(mask);

		return 0;
	}

	// unsigned int osg::DisplaySettings::getGLContextProfileMask() const
	static int _bind_getGLContextProfileMask(lua_State *L) {
		if (!_lg_typecheck_getGLContextProfileMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DisplaySettings::getGLContextProfileMask() const function, expected prototype:\nunsigned int osg::DisplaySettings::getGLContextProfileMask() const\nClass arguments details:\n");
		}


		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DisplaySettings::getGLContextProfileMask() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->getGLContextProfileMask();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DisplaySettings::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DisplaySettings::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::DisplaySettings::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DisplaySettings::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->DisplaySettings::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:
	// osg::DisplaySettings & osg::DisplaySettings::operator=(const osg::DisplaySettings & vs)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DisplaySettings & osg::DisplaySettings::operator=(const osg::DisplaySettings & vs) function, expected prototype:\nosg::DisplaySettings & osg::DisplaySettings::operator=(const osg::DisplaySettings & vs)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::DisplaySettings* vs_ptr=(Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,2));
		if( !vs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vs in osg::DisplaySettings::operator= function");
		}
		const osg::DisplaySettings & vs=*vs_ptr;

		osg::DisplaySettings* self=Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::DisplaySettings & osg::DisplaySettings::operator=(const osg::DisplaySettings &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::DisplaySettings* lret = &self->operator=(vs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DisplaySettings >::push(L,lret,false);

		return 1;
	}


};

osg::DisplaySettings* LunaTraits< osg::DisplaySettings >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_DisplaySettings::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::DisplaySettings >::_bind_dtor(osg::DisplaySettings* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::DisplaySettings >::className[] = "DisplaySettings";
const char LunaTraits< osg::DisplaySettings >::fullName[] = "osg::DisplaySettings";
const char LunaTraits< osg::DisplaySettings >::moduleName[] = "osg";
const char* LunaTraits< osg::DisplaySettings >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::DisplaySettings >::hash = 26625211;
const int LunaTraits< osg::DisplaySettings >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::DisplaySettings >::methods[] = {
	{"instance", &luna_wrapper_osg_DisplaySettings::_bind_instance},
	{"setDisplaySettings", &luna_wrapper_osg_DisplaySettings::_bind_setDisplaySettings},
	{"merge", &luna_wrapper_osg_DisplaySettings::_bind_merge},
	{"setDefaults", &luna_wrapper_osg_DisplaySettings::_bind_setDefaults},
	{"readEnvironmentalVariables", &luna_wrapper_osg_DisplaySettings::_bind_readEnvironmentalVariables},
	{"readCommandLine", &luna_wrapper_osg_DisplaySettings::_bind_readCommandLine},
	{"setDisplayType", &luna_wrapper_osg_DisplaySettings::_bind_setDisplayType},
	{"getDisplayType", &luna_wrapper_osg_DisplaySettings::_bind_getDisplayType},
	{"setStereo", &luna_wrapper_osg_DisplaySettings::_bind_setStereo},
	{"getStereo", &luna_wrapper_osg_DisplaySettings::_bind_getStereo},
	{"setStereoMode", &luna_wrapper_osg_DisplaySettings::_bind_setStereoMode},
	{"getStereoMode", &luna_wrapper_osg_DisplaySettings::_bind_getStereoMode},
	{"setEyeSeparation", &luna_wrapper_osg_DisplaySettings::_bind_setEyeSeparation},
	{"getEyeSeparation", &luna_wrapper_osg_DisplaySettings::_bind_getEyeSeparation},
	{"setSplitStereoHorizontalEyeMapping", &luna_wrapper_osg_DisplaySettings::_bind_setSplitStereoHorizontalEyeMapping},
	{"getSplitStereoHorizontalEyeMapping", &luna_wrapper_osg_DisplaySettings::_bind_getSplitStereoHorizontalEyeMapping},
	{"setSplitStereoHorizontalSeparation", &luna_wrapper_osg_DisplaySettings::_bind_setSplitStereoHorizontalSeparation},
	{"getSplitStereoHorizontalSeparation", &luna_wrapper_osg_DisplaySettings::_bind_getSplitStereoHorizontalSeparation},
	{"setSplitStereoVerticalEyeMapping", &luna_wrapper_osg_DisplaySettings::_bind_setSplitStereoVerticalEyeMapping},
	{"getSplitStereoVerticalEyeMapping", &luna_wrapper_osg_DisplaySettings::_bind_getSplitStereoVerticalEyeMapping},
	{"setSplitStereoVerticalSeparation", &luna_wrapper_osg_DisplaySettings::_bind_setSplitStereoVerticalSeparation},
	{"getSplitStereoVerticalSeparation", &luna_wrapper_osg_DisplaySettings::_bind_getSplitStereoVerticalSeparation},
	{"setSplitStereoAutoAdjustAspectRatio", &luna_wrapper_osg_DisplaySettings::_bind_setSplitStereoAutoAdjustAspectRatio},
	{"getSplitStereoAutoAdjustAspectRatio", &luna_wrapper_osg_DisplaySettings::_bind_getSplitStereoAutoAdjustAspectRatio},
	{"setScreenWidth", &luna_wrapper_osg_DisplaySettings::_bind_setScreenWidth},
	{"getScreenWidth", &luna_wrapper_osg_DisplaySettings::_bind_getScreenWidth},
	{"setScreenHeight", &luna_wrapper_osg_DisplaySettings::_bind_setScreenHeight},
	{"getScreenHeight", &luna_wrapper_osg_DisplaySettings::_bind_getScreenHeight},
	{"setScreenDistance", &luna_wrapper_osg_DisplaySettings::_bind_setScreenDistance},
	{"getScreenDistance", &luna_wrapper_osg_DisplaySettings::_bind_getScreenDistance},
	{"setDoubleBuffer", &luna_wrapper_osg_DisplaySettings::_bind_setDoubleBuffer},
	{"getDoubleBuffer", &luna_wrapper_osg_DisplaySettings::_bind_getDoubleBuffer},
	{"setRGB", &luna_wrapper_osg_DisplaySettings::_bind_setRGB},
	{"getRGB", &luna_wrapper_osg_DisplaySettings::_bind_getRGB},
	{"setDepthBuffer", &luna_wrapper_osg_DisplaySettings::_bind_setDepthBuffer},
	{"getDepthBuffer", &luna_wrapper_osg_DisplaySettings::_bind_getDepthBuffer},
	{"setMinimumNumAlphaBits", &luna_wrapper_osg_DisplaySettings::_bind_setMinimumNumAlphaBits},
	{"getMinimumNumAlphaBits", &luna_wrapper_osg_DisplaySettings::_bind_getMinimumNumAlphaBits},
	{"getAlphaBuffer", &luna_wrapper_osg_DisplaySettings::_bind_getAlphaBuffer},
	{"setMinimumNumStencilBits", &luna_wrapper_osg_DisplaySettings::_bind_setMinimumNumStencilBits},
	{"getMinimumNumStencilBits", &luna_wrapper_osg_DisplaySettings::_bind_getMinimumNumStencilBits},
	{"getStencilBuffer", &luna_wrapper_osg_DisplaySettings::_bind_getStencilBuffer},
	{"setMinimumNumAccumBits", &luna_wrapper_osg_DisplaySettings::_bind_setMinimumNumAccumBits},
	{"getMinimumNumAccumRedBits", &luna_wrapper_osg_DisplaySettings::_bind_getMinimumNumAccumRedBits},
	{"getMinimumNumAccumGreenBits", &luna_wrapper_osg_DisplaySettings::_bind_getMinimumNumAccumGreenBits},
	{"getMinimumNumAccumBlueBits", &luna_wrapper_osg_DisplaySettings::_bind_getMinimumNumAccumBlueBits},
	{"getMinimumNumAccumAlphaBits", &luna_wrapper_osg_DisplaySettings::_bind_getMinimumNumAccumAlphaBits},
	{"getAccumBuffer", &luna_wrapper_osg_DisplaySettings::_bind_getAccumBuffer},
	{"setMaxNumberOfGraphicsContexts", &luna_wrapper_osg_DisplaySettings::_bind_setMaxNumberOfGraphicsContexts},
	{"getMaxNumberOfGraphicsContexts", &luna_wrapper_osg_DisplaySettings::_bind_getMaxNumberOfGraphicsContexts},
	{"setNumMultiSamples", &luna_wrapper_osg_DisplaySettings::_bind_setNumMultiSamples},
	{"getNumMultiSamples", &luna_wrapper_osg_DisplaySettings::_bind_getNumMultiSamples},
	{"getMultiSamples", &luna_wrapper_osg_DisplaySettings::_bind_getMultiSamples},
	{"setCompileContextsHint", &luna_wrapper_osg_DisplaySettings::_bind_setCompileContextsHint},
	{"getCompileContextsHint", &luna_wrapper_osg_DisplaySettings::_bind_getCompileContextsHint},
	{"setSerializeDrawDispatch", &luna_wrapper_osg_DisplaySettings::_bind_setSerializeDrawDispatch},
	{"getSerializeDrawDispatch", &luna_wrapper_osg_DisplaySettings::_bind_getSerializeDrawDispatch},
	{"setApplication", &luna_wrapper_osg_DisplaySettings::_bind_setApplication},
	{"getApplication", &luna_wrapper_osg_DisplaySettings::_bind_getApplication},
	{"setMaxTexturePoolSize", &luna_wrapper_osg_DisplaySettings::_bind_setMaxTexturePoolSize},
	{"getMaxTexturePoolSize", &luna_wrapper_osg_DisplaySettings::_bind_getMaxTexturePoolSize},
	{"setMaxBufferObjectPoolSize", &luna_wrapper_osg_DisplaySettings::_bind_setMaxBufferObjectPoolSize},
	{"getMaxBufferObjectPoolSize", &luna_wrapper_osg_DisplaySettings::_bind_getMaxBufferObjectPoolSize},
	{"setImplicitBufferAttachmentMask", &luna_wrapper_osg_DisplaySettings::_bind_setImplicitBufferAttachmentMask},
	{"setImplicitBufferAttachmentRenderMask", &luna_wrapper_osg_DisplaySettings::_bind_setImplicitBufferAttachmentRenderMask},
	{"setImplicitBufferAttachmentResolveMask", &luna_wrapper_osg_DisplaySettings::_bind_setImplicitBufferAttachmentResolveMask},
	{"getImplicitBufferAttachmentRenderMask", &luna_wrapper_osg_DisplaySettings::_bind_getImplicitBufferAttachmentRenderMask},
	{"getImplicitBufferAttachmentResolveMask", &luna_wrapper_osg_DisplaySettings::_bind_getImplicitBufferAttachmentResolveMask},
	{"setSwapMethod", &luna_wrapper_osg_DisplaySettings::_bind_setSwapMethod},
	{"getSwapMethod", &luna_wrapper_osg_DisplaySettings::_bind_getSwapMethod},
	{"setGLContextVersion", &luna_wrapper_osg_DisplaySettings::_bind_setGLContextVersion},
	{"getGLContextVersion", &luna_wrapper_osg_DisplaySettings::_bind_getGLContextVersion},
	{"setGLContextFlags", &luna_wrapper_osg_DisplaySettings::_bind_setGLContextFlags},
	{"getGLContextFlags", &luna_wrapper_osg_DisplaySettings::_bind_getGLContextFlags},
	{"setGLContextProfileMask", &luna_wrapper_osg_DisplaySettings::_bind_setGLContextProfileMask},
	{"getGLContextProfileMask", &luna_wrapper_osg_DisplaySettings::_bind_getGLContextProfileMask},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_DisplaySettings::_bind_base_setThreadSafeRefUnref},
	{"op_assign", &luna_wrapper_osg_DisplaySettings::_bind_op_assign},
	{"__eq", &luna_wrapper_osg_DisplaySettings::_bind___eq},
	{"getTable", &luna_wrapper_osg_DisplaySettings::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::DisplaySettings >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_DisplaySettings::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::DisplaySettings >::enumValues[] = {
	{"MONITOR", osg::DisplaySettings::MONITOR},
	{"POWERWALL", osg::DisplaySettings::POWERWALL},
	{"REALITY_CENTER", osg::DisplaySettings::REALITY_CENTER},
	{"HEAD_MOUNTED_DISPLAY", osg::DisplaySettings::HEAD_MOUNTED_DISPLAY},
	{"QUAD_BUFFER", osg::DisplaySettings::QUAD_BUFFER},
	{"ANAGLYPHIC", osg::DisplaySettings::ANAGLYPHIC},
	{"HORIZONTAL_SPLIT", osg::DisplaySettings::HORIZONTAL_SPLIT},
	{"VERTICAL_SPLIT", osg::DisplaySettings::VERTICAL_SPLIT},
	{"LEFT_EYE", osg::DisplaySettings::LEFT_EYE},
	{"RIGHT_EYE", osg::DisplaySettings::RIGHT_EYE},
	{"HORIZONTAL_INTERLACE", osg::DisplaySettings::HORIZONTAL_INTERLACE},
	{"VERTICAL_INTERLACE", osg::DisplaySettings::VERTICAL_INTERLACE},
	{"CHECKERBOARD", osg::DisplaySettings::CHECKERBOARD},
	{"LEFT_EYE_LEFT_VIEWPORT", osg::DisplaySettings::LEFT_EYE_LEFT_VIEWPORT},
	{"LEFT_EYE_RIGHT_VIEWPORT", osg::DisplaySettings::LEFT_EYE_RIGHT_VIEWPORT},
	{"LEFT_EYE_TOP_VIEWPORT", osg::DisplaySettings::LEFT_EYE_TOP_VIEWPORT},
	{"LEFT_EYE_BOTTOM_VIEWPORT", osg::DisplaySettings::LEFT_EYE_BOTTOM_VIEWPORT},
	{"IMPLICIT_DEPTH_BUFFER_ATTACHMENT", osg::DisplaySettings::IMPLICIT_DEPTH_BUFFER_ATTACHMENT},
	{"IMPLICIT_STENCIL_BUFFER_ATTACHMENT", osg::DisplaySettings::IMPLICIT_STENCIL_BUFFER_ATTACHMENT},
	{"IMPLICIT_COLOR_BUFFER_ATTACHMENT", osg::DisplaySettings::IMPLICIT_COLOR_BUFFER_ATTACHMENT},
	{"DEFAULT_IMPLICIT_BUFFER_ATTACHMENT", osg::DisplaySettings::DEFAULT_IMPLICIT_BUFFER_ATTACHMENT},
	{"SWAP_DEFAULT", osg::DisplaySettings::SWAP_DEFAULT},
	{"SWAP_EXCHANGE", osg::DisplaySettings::SWAP_EXCHANGE},
	{"SWAP_COPY", osg::DisplaySettings::SWAP_COPY},
	{"SWAP_UNDEFINED", osg::DisplaySettings::SWAP_UNDEFINED},
	{0,0}
};


