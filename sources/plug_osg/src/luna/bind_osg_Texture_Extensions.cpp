#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Texture_Extensions.h>

class luna_wrapper_osg_Texture_Extensions {
public:
	typedef Luna< osg::Texture::Extensions > luna_t;

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

		osg::Texture::Extensions* self= (osg::Texture::Extensions*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Texture::Extensions >::push(L,self,false);
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
		//osg::Texture::Extensions* ptr= dynamic_cast< osg::Texture::Extensions* >(Luna< osg::Referenced >::check(L,1));
		osg::Texture::Extensions* ptr= luna_caster< osg::Referenced, osg::Texture::Extensions >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Texture::Extensions >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setMultiTexturingSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isMultiTexturingSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTextureFilterAnisotropicSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isTextureFilterAnisotropicSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTextureCompressionARBSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isTextureCompressionARBSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTextureCompressionS3TCSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isTextureCompressionS3TCSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTextureCompressionPVRTC2BPPSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isTextureCompressionPVRTC2BPPSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTextureCompressionPVRTC4BPPSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isTextureCompressionPVRTC4BPPSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTextureCompressionETCSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isTextureCompressionETCSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTextureCompressionRGTCSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isTextureCompressionRGTCSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTextureCompressionPVRTCSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isTextureCompressionPVRTCSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTextureMirroredRepeatSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isTextureMirroredRepeatSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTextureEdgeClampSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isTextureEdgeClampSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTextureBorderClampSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isTextureBorderClampSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGenerateMipMapSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isGenerateMipMapSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPreferGenerateMipmapSGISForPowerOfTwo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPreferGenerateMipmapSGISForPowerOfTwo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTextureMultisampledSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isTextureMultisampledSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setShadowSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isShadowSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setShadowAmbientSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isShadowAmbientSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTextureMaxLevelSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isTextureMaxLevelSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMaxTextureSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_maxTextureSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNumTextureUnits(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_numTextureUnits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isCompressedTexImage2DSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isCompressedTexSubImage2DSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isClientStorageSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isNonPowerOfTwoTextureSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextureIntegerSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isTextureIntegerSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isBindImageTextureSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_glCompressedTexImage2D(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_isnil(L,9)==0 && !Luna<void>::has_uniqueid(L,9,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glCompressedTexSubImage2D(lua_State *L) {
		if( lua_gettop(L)!=10 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( (lua_isnil(L,10)==0 && !Luna<void>::has_uniqueid(L,10,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetCompressedTexImage(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glTexImage2DMultisample(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glTexParameterIiv(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glTexParameterIuiv(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glBindImageTexture(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Texture::Extensions::Extensions(unsigned int contextID)
	static osg::Texture::Extensions* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture::Extensions::Extensions(unsigned int contextID) function, expected prototype:\nosg::Texture::Extensions::Extensions(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		return new osg::Texture::Extensions(contextID);
	}

	// osg::Texture::Extensions::Extensions(lua_Table * data, unsigned int contextID)
	static osg::Texture::Extensions* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture::Extensions::Extensions(lua_Table * data, unsigned int contextID) function, expected prototype:\nosg::Texture::Extensions::Extensions(lua_Table * data, unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		return new wrapper_osg_Texture_Extensions(L,NULL, contextID);
	}

	// Overload binder for osg::Texture::Extensions::Extensions
	static osg::Texture::Extensions* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Extensions, cannot match any of the overloads for function Extensions:\n  Extensions(unsigned int)\n  Extensions(lua_Table *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// void osg::Texture::Extensions::setMultiTexturingSupported(bool flag)
	static int _bind_setMultiTexturingSupported(lua_State *L) {
		if (!_lg_typecheck_setMultiTexturingSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::Extensions::setMultiTexturingSupported(bool flag) function, expected prototype:\nvoid osg::Texture::Extensions::setMultiTexturingSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::Extensions::setMultiTexturingSupported(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setMultiTexturingSupported(flag);

		return 0;
	}

	// bool osg::Texture::Extensions::isMultiTexturingSupported() const
	static int _bind_isMultiTexturingSupported(lua_State *L) {
		if (!_lg_typecheck_isMultiTexturingSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::Extensions::isMultiTexturingSupported() const function, expected prototype:\nbool osg::Texture::Extensions::isMultiTexturingSupported() const\nClass arguments details:\n");
		}


		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::Extensions::isMultiTexturingSupported() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isMultiTexturingSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture::Extensions::setTextureFilterAnisotropicSupported(bool flag)
	static int _bind_setTextureFilterAnisotropicSupported(lua_State *L) {
		if (!_lg_typecheck_setTextureFilterAnisotropicSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::Extensions::setTextureFilterAnisotropicSupported(bool flag) function, expected prototype:\nvoid osg::Texture::Extensions::setTextureFilterAnisotropicSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::Extensions::setTextureFilterAnisotropicSupported(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setTextureFilterAnisotropicSupported(flag);

		return 0;
	}

	// bool osg::Texture::Extensions::isTextureFilterAnisotropicSupported() const
	static int _bind_isTextureFilterAnisotropicSupported(lua_State *L) {
		if (!_lg_typecheck_isTextureFilterAnisotropicSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::Extensions::isTextureFilterAnisotropicSupported() const function, expected prototype:\nbool osg::Texture::Extensions::isTextureFilterAnisotropicSupported() const\nClass arguments details:\n");
		}


		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::Extensions::isTextureFilterAnisotropicSupported() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isTextureFilterAnisotropicSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture::Extensions::setTextureCompressionARBSupported(bool flag)
	static int _bind_setTextureCompressionARBSupported(lua_State *L) {
		if (!_lg_typecheck_setTextureCompressionARBSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::Extensions::setTextureCompressionARBSupported(bool flag) function, expected prototype:\nvoid osg::Texture::Extensions::setTextureCompressionARBSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::Extensions::setTextureCompressionARBSupported(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setTextureCompressionARBSupported(flag);

		return 0;
	}

	// bool osg::Texture::Extensions::isTextureCompressionARBSupported() const
	static int _bind_isTextureCompressionARBSupported(lua_State *L) {
		if (!_lg_typecheck_isTextureCompressionARBSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::Extensions::isTextureCompressionARBSupported() const function, expected prototype:\nbool osg::Texture::Extensions::isTextureCompressionARBSupported() const\nClass arguments details:\n");
		}


		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::Extensions::isTextureCompressionARBSupported() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isTextureCompressionARBSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture::Extensions::setTextureCompressionS3TCSupported(bool flag)
	static int _bind_setTextureCompressionS3TCSupported(lua_State *L) {
		if (!_lg_typecheck_setTextureCompressionS3TCSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::Extensions::setTextureCompressionS3TCSupported(bool flag) function, expected prototype:\nvoid osg::Texture::Extensions::setTextureCompressionS3TCSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::Extensions::setTextureCompressionS3TCSupported(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setTextureCompressionS3TCSupported(flag);

		return 0;
	}

	// bool osg::Texture::Extensions::isTextureCompressionS3TCSupported() const
	static int _bind_isTextureCompressionS3TCSupported(lua_State *L) {
		if (!_lg_typecheck_isTextureCompressionS3TCSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::Extensions::isTextureCompressionS3TCSupported() const function, expected prototype:\nbool osg::Texture::Extensions::isTextureCompressionS3TCSupported() const\nClass arguments details:\n");
		}


		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::Extensions::isTextureCompressionS3TCSupported() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isTextureCompressionS3TCSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture::Extensions::setTextureCompressionPVRTC2BPPSupported(bool flag)
	static int _bind_setTextureCompressionPVRTC2BPPSupported(lua_State *L) {
		if (!_lg_typecheck_setTextureCompressionPVRTC2BPPSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::Extensions::setTextureCompressionPVRTC2BPPSupported(bool flag) function, expected prototype:\nvoid osg::Texture::Extensions::setTextureCompressionPVRTC2BPPSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::Extensions::setTextureCompressionPVRTC2BPPSupported(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setTextureCompressionPVRTC2BPPSupported(flag);

		return 0;
	}

	// bool osg::Texture::Extensions::isTextureCompressionPVRTC2BPPSupported() const
	static int _bind_isTextureCompressionPVRTC2BPPSupported(lua_State *L) {
		if (!_lg_typecheck_isTextureCompressionPVRTC2BPPSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::Extensions::isTextureCompressionPVRTC2BPPSupported() const function, expected prototype:\nbool osg::Texture::Extensions::isTextureCompressionPVRTC2BPPSupported() const\nClass arguments details:\n");
		}


		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::Extensions::isTextureCompressionPVRTC2BPPSupported() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isTextureCompressionPVRTC2BPPSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture::Extensions::setTextureCompressionPVRTC4BPPSupported(bool flag)
	static int _bind_setTextureCompressionPVRTC4BPPSupported(lua_State *L) {
		if (!_lg_typecheck_setTextureCompressionPVRTC4BPPSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::Extensions::setTextureCompressionPVRTC4BPPSupported(bool flag) function, expected prototype:\nvoid osg::Texture::Extensions::setTextureCompressionPVRTC4BPPSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::Extensions::setTextureCompressionPVRTC4BPPSupported(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setTextureCompressionPVRTC4BPPSupported(flag);

		return 0;
	}

	// bool osg::Texture::Extensions::isTextureCompressionPVRTC4BPPSupported() const
	static int _bind_isTextureCompressionPVRTC4BPPSupported(lua_State *L) {
		if (!_lg_typecheck_isTextureCompressionPVRTC4BPPSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::Extensions::isTextureCompressionPVRTC4BPPSupported() const function, expected prototype:\nbool osg::Texture::Extensions::isTextureCompressionPVRTC4BPPSupported() const\nClass arguments details:\n");
		}


		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::Extensions::isTextureCompressionPVRTC4BPPSupported() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isTextureCompressionPVRTC4BPPSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture::Extensions::setTextureCompressionETCSupported(bool flag)
	static int _bind_setTextureCompressionETCSupported(lua_State *L) {
		if (!_lg_typecheck_setTextureCompressionETCSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::Extensions::setTextureCompressionETCSupported(bool flag) function, expected prototype:\nvoid osg::Texture::Extensions::setTextureCompressionETCSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::Extensions::setTextureCompressionETCSupported(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setTextureCompressionETCSupported(flag);

		return 0;
	}

	// bool osg::Texture::Extensions::isTextureCompressionETCSupported() const
	static int _bind_isTextureCompressionETCSupported(lua_State *L) {
		if (!_lg_typecheck_isTextureCompressionETCSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::Extensions::isTextureCompressionETCSupported() const function, expected prototype:\nbool osg::Texture::Extensions::isTextureCompressionETCSupported() const\nClass arguments details:\n");
		}


		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::Extensions::isTextureCompressionETCSupported() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isTextureCompressionETCSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture::Extensions::setTextureCompressionRGTCSupported(bool flag)
	static int _bind_setTextureCompressionRGTCSupported(lua_State *L) {
		if (!_lg_typecheck_setTextureCompressionRGTCSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::Extensions::setTextureCompressionRGTCSupported(bool flag) function, expected prototype:\nvoid osg::Texture::Extensions::setTextureCompressionRGTCSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::Extensions::setTextureCompressionRGTCSupported(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setTextureCompressionRGTCSupported(flag);

		return 0;
	}

	// bool osg::Texture::Extensions::isTextureCompressionRGTCSupported() const
	static int _bind_isTextureCompressionRGTCSupported(lua_State *L) {
		if (!_lg_typecheck_isTextureCompressionRGTCSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::Extensions::isTextureCompressionRGTCSupported() const function, expected prototype:\nbool osg::Texture::Extensions::isTextureCompressionRGTCSupported() const\nClass arguments details:\n");
		}


		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::Extensions::isTextureCompressionRGTCSupported() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isTextureCompressionRGTCSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture::Extensions::setTextureCompressionPVRTCSupported(bool flag)
	static int _bind_setTextureCompressionPVRTCSupported(lua_State *L) {
		if (!_lg_typecheck_setTextureCompressionPVRTCSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::Extensions::setTextureCompressionPVRTCSupported(bool flag) function, expected prototype:\nvoid osg::Texture::Extensions::setTextureCompressionPVRTCSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::Extensions::setTextureCompressionPVRTCSupported(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setTextureCompressionPVRTCSupported(flag);

		return 0;
	}

	// bool osg::Texture::Extensions::isTextureCompressionPVRTCSupported() const
	static int _bind_isTextureCompressionPVRTCSupported(lua_State *L) {
		if (!_lg_typecheck_isTextureCompressionPVRTCSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::Extensions::isTextureCompressionPVRTCSupported() const function, expected prototype:\nbool osg::Texture::Extensions::isTextureCompressionPVRTCSupported() const\nClass arguments details:\n");
		}


		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::Extensions::isTextureCompressionPVRTCSupported() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isTextureCompressionPVRTCSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture::Extensions::setTextureMirroredRepeatSupported(bool flag)
	static int _bind_setTextureMirroredRepeatSupported(lua_State *L) {
		if (!_lg_typecheck_setTextureMirroredRepeatSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::Extensions::setTextureMirroredRepeatSupported(bool flag) function, expected prototype:\nvoid osg::Texture::Extensions::setTextureMirroredRepeatSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::Extensions::setTextureMirroredRepeatSupported(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setTextureMirroredRepeatSupported(flag);

		return 0;
	}

	// bool osg::Texture::Extensions::isTextureMirroredRepeatSupported() const
	static int _bind_isTextureMirroredRepeatSupported(lua_State *L) {
		if (!_lg_typecheck_isTextureMirroredRepeatSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::Extensions::isTextureMirroredRepeatSupported() const function, expected prototype:\nbool osg::Texture::Extensions::isTextureMirroredRepeatSupported() const\nClass arguments details:\n");
		}


		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::Extensions::isTextureMirroredRepeatSupported() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isTextureMirroredRepeatSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture::Extensions::setTextureEdgeClampSupported(bool flag)
	static int _bind_setTextureEdgeClampSupported(lua_State *L) {
		if (!_lg_typecheck_setTextureEdgeClampSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::Extensions::setTextureEdgeClampSupported(bool flag) function, expected prototype:\nvoid osg::Texture::Extensions::setTextureEdgeClampSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::Extensions::setTextureEdgeClampSupported(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setTextureEdgeClampSupported(flag);

		return 0;
	}

	// bool osg::Texture::Extensions::isTextureEdgeClampSupported() const
	static int _bind_isTextureEdgeClampSupported(lua_State *L) {
		if (!_lg_typecheck_isTextureEdgeClampSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::Extensions::isTextureEdgeClampSupported() const function, expected prototype:\nbool osg::Texture::Extensions::isTextureEdgeClampSupported() const\nClass arguments details:\n");
		}


		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::Extensions::isTextureEdgeClampSupported() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isTextureEdgeClampSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture::Extensions::setTextureBorderClampSupported(bool flag)
	static int _bind_setTextureBorderClampSupported(lua_State *L) {
		if (!_lg_typecheck_setTextureBorderClampSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::Extensions::setTextureBorderClampSupported(bool flag) function, expected prototype:\nvoid osg::Texture::Extensions::setTextureBorderClampSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::Extensions::setTextureBorderClampSupported(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setTextureBorderClampSupported(flag);

		return 0;
	}

	// bool osg::Texture::Extensions::isTextureBorderClampSupported() const
	static int _bind_isTextureBorderClampSupported(lua_State *L) {
		if (!_lg_typecheck_isTextureBorderClampSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::Extensions::isTextureBorderClampSupported() const function, expected prototype:\nbool osg::Texture::Extensions::isTextureBorderClampSupported() const\nClass arguments details:\n");
		}


		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::Extensions::isTextureBorderClampSupported() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isTextureBorderClampSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture::Extensions::setGenerateMipMapSupported(bool flag)
	static int _bind_setGenerateMipMapSupported(lua_State *L) {
		if (!_lg_typecheck_setGenerateMipMapSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::Extensions::setGenerateMipMapSupported(bool flag) function, expected prototype:\nvoid osg::Texture::Extensions::setGenerateMipMapSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::Extensions::setGenerateMipMapSupported(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setGenerateMipMapSupported(flag);

		return 0;
	}

	// bool osg::Texture::Extensions::isGenerateMipMapSupported() const
	static int _bind_isGenerateMipMapSupported(lua_State *L) {
		if (!_lg_typecheck_isGenerateMipMapSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::Extensions::isGenerateMipMapSupported() const function, expected prototype:\nbool osg::Texture::Extensions::isGenerateMipMapSupported() const\nClass arguments details:\n");
		}


		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::Extensions::isGenerateMipMapSupported() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isGenerateMipMapSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture::Extensions::setPreferGenerateMipmapSGISForPowerOfTwo(bool flag)
	static int _bind_setPreferGenerateMipmapSGISForPowerOfTwo(lua_State *L) {
		if (!_lg_typecheck_setPreferGenerateMipmapSGISForPowerOfTwo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::Extensions::setPreferGenerateMipmapSGISForPowerOfTwo(bool flag) function, expected prototype:\nvoid osg::Texture::Extensions::setPreferGenerateMipmapSGISForPowerOfTwo(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::Extensions::setPreferGenerateMipmapSGISForPowerOfTwo(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setPreferGenerateMipmapSGISForPowerOfTwo(flag);

		return 0;
	}

	// bool osg::Texture::Extensions::getPreferGenerateMipmapSGISForPowerOfTwo() const
	static int _bind_getPreferGenerateMipmapSGISForPowerOfTwo(lua_State *L) {
		if (!_lg_typecheck_getPreferGenerateMipmapSGISForPowerOfTwo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::Extensions::getPreferGenerateMipmapSGISForPowerOfTwo() const function, expected prototype:\nbool osg::Texture::Extensions::getPreferGenerateMipmapSGISForPowerOfTwo() const\nClass arguments details:\n");
		}


		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::Extensions::getPreferGenerateMipmapSGISForPowerOfTwo() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->getPreferGenerateMipmapSGISForPowerOfTwo();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture::Extensions::setTextureMultisampledSupported(bool flag)
	static int _bind_setTextureMultisampledSupported(lua_State *L) {
		if (!_lg_typecheck_setTextureMultisampledSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::Extensions::setTextureMultisampledSupported(bool flag) function, expected prototype:\nvoid osg::Texture::Extensions::setTextureMultisampledSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::Extensions::setTextureMultisampledSupported(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setTextureMultisampledSupported(flag);

		return 0;
	}

	// bool osg::Texture::Extensions::isTextureMultisampledSupported() const
	static int _bind_isTextureMultisampledSupported(lua_State *L) {
		if (!_lg_typecheck_isTextureMultisampledSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::Extensions::isTextureMultisampledSupported() const function, expected prototype:\nbool osg::Texture::Extensions::isTextureMultisampledSupported() const\nClass arguments details:\n");
		}


		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::Extensions::isTextureMultisampledSupported() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isTextureMultisampledSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture::Extensions::setShadowSupported(bool flag)
	static int _bind_setShadowSupported(lua_State *L) {
		if (!_lg_typecheck_setShadowSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::Extensions::setShadowSupported(bool flag) function, expected prototype:\nvoid osg::Texture::Extensions::setShadowSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::Extensions::setShadowSupported(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setShadowSupported(flag);

		return 0;
	}

	// bool osg::Texture::Extensions::isShadowSupported() const
	static int _bind_isShadowSupported(lua_State *L) {
		if (!_lg_typecheck_isShadowSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::Extensions::isShadowSupported() const function, expected prototype:\nbool osg::Texture::Extensions::isShadowSupported() const\nClass arguments details:\n");
		}


		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::Extensions::isShadowSupported() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isShadowSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture::Extensions::setShadowAmbientSupported(bool flag)
	static int _bind_setShadowAmbientSupported(lua_State *L) {
		if (!_lg_typecheck_setShadowAmbientSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::Extensions::setShadowAmbientSupported(bool flag) function, expected prototype:\nvoid osg::Texture::Extensions::setShadowAmbientSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::Extensions::setShadowAmbientSupported(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setShadowAmbientSupported(flag);

		return 0;
	}

	// bool osg::Texture::Extensions::isShadowAmbientSupported() const
	static int _bind_isShadowAmbientSupported(lua_State *L) {
		if (!_lg_typecheck_isShadowAmbientSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::Extensions::isShadowAmbientSupported() const function, expected prototype:\nbool osg::Texture::Extensions::isShadowAmbientSupported() const\nClass arguments details:\n");
		}


		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::Extensions::isShadowAmbientSupported() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isShadowAmbientSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture::Extensions::setTextureMaxLevelSupported(bool flag)
	static int _bind_setTextureMaxLevelSupported(lua_State *L) {
		if (!_lg_typecheck_setTextureMaxLevelSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::Extensions::setTextureMaxLevelSupported(bool flag) function, expected prototype:\nvoid osg::Texture::Extensions::setTextureMaxLevelSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::Extensions::setTextureMaxLevelSupported(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setTextureMaxLevelSupported(flag);

		return 0;
	}

	// bool osg::Texture::Extensions::isTextureMaxLevelSupported() const
	static int _bind_isTextureMaxLevelSupported(lua_State *L) {
		if (!_lg_typecheck_isTextureMaxLevelSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::Extensions::isTextureMaxLevelSupported() const function, expected prototype:\nbool osg::Texture::Extensions::isTextureMaxLevelSupported() const\nClass arguments details:\n");
		}


		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::Extensions::isTextureMaxLevelSupported() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isTextureMaxLevelSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture::Extensions::setMaxTextureSize(int maxsize)
	static int _bind_setMaxTextureSize(lua_State *L) {
		if (!_lg_typecheck_setMaxTextureSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::Extensions::setMaxTextureSize(int maxsize) function, expected prototype:\nvoid osg::Texture::Extensions::setMaxTextureSize(int maxsize)\nClass arguments details:\n");
		}

		int maxsize=(int)lua_tointeger(L,2);

		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::Extensions::setMaxTextureSize(int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setMaxTextureSize(maxsize);

		return 0;
	}

	// int osg::Texture::Extensions::maxTextureSize() const
	static int _bind_maxTextureSize(lua_State *L) {
		if (!_lg_typecheck_maxTextureSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture::Extensions::maxTextureSize() const function, expected prototype:\nint osg::Texture::Extensions::maxTextureSize() const\nClass arguments details:\n");
		}


		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture::Extensions::maxTextureSize() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		int lret = self->maxTextureSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture::Extensions::setNumTextureUnits(int nunits)
	static int _bind_setNumTextureUnits(lua_State *L) {
		if (!_lg_typecheck_setNumTextureUnits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::Extensions::setNumTextureUnits(int nunits) function, expected prototype:\nvoid osg::Texture::Extensions::setNumTextureUnits(int nunits)\nClass arguments details:\n");
		}

		int nunits=(int)lua_tointeger(L,2);

		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::Extensions::setNumTextureUnits(int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setNumTextureUnits(nunits);

		return 0;
	}

	// int osg::Texture::Extensions::numTextureUnits() const
	static int _bind_numTextureUnits(lua_State *L) {
		if (!_lg_typecheck_numTextureUnits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture::Extensions::numTextureUnits() const function, expected prototype:\nint osg::Texture::Extensions::numTextureUnits() const\nClass arguments details:\n");
		}


		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture::Extensions::numTextureUnits() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		int lret = self->numTextureUnits();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Texture::Extensions::isCompressedTexImage2DSupported() const
	static int _bind_isCompressedTexImage2DSupported(lua_State *L) {
		if (!_lg_typecheck_isCompressedTexImage2DSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::Extensions::isCompressedTexImage2DSupported() const function, expected prototype:\nbool osg::Texture::Extensions::isCompressedTexImage2DSupported() const\nClass arguments details:\n");
		}


		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::Extensions::isCompressedTexImage2DSupported() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isCompressedTexImage2DSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Texture::Extensions::isCompressedTexSubImage2DSupported() const
	static int _bind_isCompressedTexSubImage2DSupported(lua_State *L) {
		if (!_lg_typecheck_isCompressedTexSubImage2DSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::Extensions::isCompressedTexSubImage2DSupported() const function, expected prototype:\nbool osg::Texture::Extensions::isCompressedTexSubImage2DSupported() const\nClass arguments details:\n");
		}


		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::Extensions::isCompressedTexSubImage2DSupported() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isCompressedTexSubImage2DSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Texture::Extensions::isClientStorageSupported() const
	static int _bind_isClientStorageSupported(lua_State *L) {
		if (!_lg_typecheck_isClientStorageSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::Extensions::isClientStorageSupported() const function, expected prototype:\nbool osg::Texture::Extensions::isClientStorageSupported() const\nClass arguments details:\n");
		}


		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::Extensions::isClientStorageSupported() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isClientStorageSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Texture::Extensions::isNonPowerOfTwoTextureSupported(unsigned int filter) const
	static int _bind_isNonPowerOfTwoTextureSupported(lua_State *L) {
		if (!_lg_typecheck_isNonPowerOfTwoTextureSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::Extensions::isNonPowerOfTwoTextureSupported(unsigned int filter) const function, expected prototype:\nbool osg::Texture::Extensions::isNonPowerOfTwoTextureSupported(unsigned int filter) const\nClass arguments details:\n");
		}

		unsigned int filter=(unsigned int)lua_tointeger(L,2);

		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::Extensions::isNonPowerOfTwoTextureSupported(unsigned int) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isNonPowerOfTwoTextureSupported(filter);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture::Extensions::setTextureIntegerSupported(bool flag)
	static int _bind_setTextureIntegerSupported(lua_State *L) {
		if (!_lg_typecheck_setTextureIntegerSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::Extensions::setTextureIntegerSupported(bool flag) function, expected prototype:\nvoid osg::Texture::Extensions::setTextureIntegerSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::Extensions::setTextureIntegerSupported(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setTextureIntegerSupported(flag);

		return 0;
	}

	// bool osg::Texture::Extensions::isTextureIntegerSupported() const
	static int _bind_isTextureIntegerSupported(lua_State *L) {
		if (!_lg_typecheck_isTextureIntegerSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::Extensions::isTextureIntegerSupported() const function, expected prototype:\nbool osg::Texture::Extensions::isTextureIntegerSupported() const\nClass arguments details:\n");
		}


		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::Extensions::isTextureIntegerSupported() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isTextureIntegerSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Texture::Extensions::isBindImageTextureSupported() const
	static int _bind_isBindImageTextureSupported(lua_State *L) {
		if (!_lg_typecheck_isBindImageTextureSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::Extensions::isBindImageTextureSupported() const function, expected prototype:\nbool osg::Texture::Extensions::isBindImageTextureSupported() const\nClass arguments details:\n");
		}


		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::Extensions::isBindImageTextureSupported() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isBindImageTextureSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture::Extensions::glCompressedTexImage2D(unsigned int target, int level, unsigned int internalformat, int width, int height, int border, int imageSize, const void * data) const
	static int _bind_glCompressedTexImage2D(lua_State *L) {
		if (!_lg_typecheck_glCompressedTexImage2D(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::Extensions::glCompressedTexImage2D(unsigned int target, int level, unsigned int internalformat, int width, int height, int border, int imageSize, const void * data) const function, expected prototype:\nvoid osg::Texture::Extensions::glCompressedTexImage2D(unsigned int target, int level, unsigned int internalformat, int width, int height, int border, int imageSize, const void * data) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		int level=(int)lua_tointeger(L,3);
		unsigned int internalformat=(unsigned int)lua_tointeger(L,4);
		int width=(int)lua_tointeger(L,5);
		int height=(int)lua_tointeger(L,6);
		int border=(int)lua_tointeger(L,7);
		int imageSize=(int)lua_tointeger(L,8);
		void* data=(Luna< void >::check(L,9));

		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::Extensions::glCompressedTexImage2D(unsigned int, int, unsigned int, int, int, int, int, const void *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);

		return 0;
	}

	// void osg::Texture::Extensions::glCompressedTexSubImage2D(unsigned int target, int level, int xoffset, int yoffset, int width, int height, unsigned int format, int imageSize, const void * data) const
	static int _bind_glCompressedTexSubImage2D(lua_State *L) {
		if (!_lg_typecheck_glCompressedTexSubImage2D(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::Extensions::glCompressedTexSubImage2D(unsigned int target, int level, int xoffset, int yoffset, int width, int height, unsigned int format, int imageSize, const void * data) const function, expected prototype:\nvoid osg::Texture::Extensions::glCompressedTexSubImage2D(unsigned int target, int level, int xoffset, int yoffset, int width, int height, unsigned int format, int imageSize, const void * data) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		int level=(int)lua_tointeger(L,3);
		int xoffset=(int)lua_tointeger(L,4);
		int yoffset=(int)lua_tointeger(L,5);
		int width=(int)lua_tointeger(L,6);
		int height=(int)lua_tointeger(L,7);
		unsigned int format=(unsigned int)lua_tointeger(L,8);
		int imageSize=(int)lua_tointeger(L,9);
		void* data=(Luna< void >::check(L,10));

		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::Extensions::glCompressedTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, int, const void *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);

		return 0;
	}

	// void osg::Texture::Extensions::glGetCompressedTexImage(unsigned int target, int level, void * data) const
	static int _bind_glGetCompressedTexImage(lua_State *L) {
		if (!_lg_typecheck_glGetCompressedTexImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::Extensions::glGetCompressedTexImage(unsigned int target, int level, void * data) const function, expected prototype:\nvoid osg::Texture::Extensions::glGetCompressedTexImage(unsigned int target, int level, void * data) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		int level=(int)lua_tointeger(L,3);
		void* data=(Luna< void >::check(L,4));

		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::Extensions::glGetCompressedTexImage(unsigned int, int, void *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->glGetCompressedTexImage(target, level, data);

		return 0;
	}

	// void osg::Texture::Extensions::glTexImage2DMultisample(unsigned int target, int samples, int internalformat, int width, int height, unsigned char fixedsamplelocations) const
	static int _bind_glTexImage2DMultisample(lua_State *L) {
		if (!_lg_typecheck_glTexImage2DMultisample(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::Extensions::glTexImage2DMultisample(unsigned int target, int samples, int internalformat, int width, int height, unsigned char fixedsamplelocations) const function, expected prototype:\nvoid osg::Texture::Extensions::glTexImage2DMultisample(unsigned int target, int samples, int internalformat, int width, int height, unsigned char fixedsamplelocations) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		int samples=(int)lua_tointeger(L,3);
		int internalformat=(int)lua_tointeger(L,4);
		int width=(int)lua_tointeger(L,5);
		int height=(int)lua_tointeger(L,6);
		unsigned char fixedsamplelocations = (unsigned char)(lua_tointeger(L,7));

		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::Extensions::glTexImage2DMultisample(unsigned int, int, int, int, int, unsigned char) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->glTexImage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);

		return 0;
	}

	// void osg::Texture::Extensions::glTexParameterIiv(unsigned int target, unsigned int pname, const int * data) const
	static int _bind_glTexParameterIiv(lua_State *L) {
		if (!_lg_typecheck_glTexParameterIiv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::Extensions::glTexParameterIiv(unsigned int target, unsigned int pname, const int * data) const function, expected prototype:\nvoid osg::Texture::Extensions::glTexParameterIiv(unsigned int target, unsigned int pname, const int * data) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		unsigned int pname=(unsigned int)lua_tointeger(L,3);
		int* data=(int*)Luna< void >::check(L,4);

		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::Extensions::glTexParameterIiv(unsigned int, unsigned int, const int *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->glTexParameterIiv(target, pname, data);

		return 0;
	}

	// void osg::Texture::Extensions::glTexParameterIuiv(unsigned int target, unsigned int pname, const unsigned int * data) const
	static int _bind_glTexParameterIuiv(lua_State *L) {
		if (!_lg_typecheck_glTexParameterIuiv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::Extensions::glTexParameterIuiv(unsigned int target, unsigned int pname, const unsigned int * data) const function, expected prototype:\nvoid osg::Texture::Extensions::glTexParameterIuiv(unsigned int target, unsigned int pname, const unsigned int * data) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		unsigned int pname=(unsigned int)lua_tointeger(L,3);
		unsigned int* data=(unsigned int*)Luna< void >::check(L,4);

		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::Extensions::glTexParameterIuiv(unsigned int, unsigned int, const unsigned int *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->glTexParameterIuiv(target, pname, data);

		return 0;
	}

	// void osg::Texture::Extensions::glBindImageTexture(unsigned int unit, unsigned int texture, int level, unsigned char layered, int layer, unsigned int access, unsigned int format) const
	static int _bind_glBindImageTexture(lua_State *L) {
		if (!_lg_typecheck_glBindImageTexture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::Extensions::glBindImageTexture(unsigned int unit, unsigned int texture, int level, unsigned char layered, int layer, unsigned int access, unsigned int format) const function, expected prototype:\nvoid osg::Texture::Extensions::glBindImageTexture(unsigned int unit, unsigned int texture, int level, unsigned char layered, int layer, unsigned int access, unsigned int format) const\nClass arguments details:\n");
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		unsigned int texture=(unsigned int)lua_tointeger(L,3);
		int level=(int)lua_tointeger(L,4);
		unsigned char layered = (unsigned char)(lua_tointeger(L,5));
		int layer=(int)lua_tointeger(L,6);
		unsigned int access=(unsigned int)lua_tointeger(L,7);
		unsigned int format=(unsigned int)lua_tointeger(L,8);

		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::Extensions::glBindImageTexture(unsigned int, unsigned int, int, unsigned char, int, unsigned int, unsigned int) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->glBindImageTexture(unit, texture, level, layered, layer, access, format);

		return 0;
	}

	// void osg::Texture::Extensions::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::Extensions::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Texture::Extensions::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Texture::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::Extensions::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Extensions::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::Texture::Extensions* LunaTraits< osg::Texture::Extensions >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Texture_Extensions::_bind_ctor(L);
}

void LunaTraits< osg::Texture::Extensions >::_bind_dtor(osg::Texture::Extensions* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Texture::Extensions >::className[] = "Texture_Extensions";
const char LunaTraits< osg::Texture::Extensions >::fullName[] = "osg::Texture::Extensions";
const char LunaTraits< osg::Texture::Extensions >::moduleName[] = "osg";
const char* LunaTraits< osg::Texture::Extensions >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::Texture::Extensions >::hash = 95354808;
const int LunaTraits< osg::Texture::Extensions >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Texture::Extensions >::methods[] = {
	{"setMultiTexturingSupported", &luna_wrapper_osg_Texture_Extensions::_bind_setMultiTexturingSupported},
	{"isMultiTexturingSupported", &luna_wrapper_osg_Texture_Extensions::_bind_isMultiTexturingSupported},
	{"setTextureFilterAnisotropicSupported", &luna_wrapper_osg_Texture_Extensions::_bind_setTextureFilterAnisotropicSupported},
	{"isTextureFilterAnisotropicSupported", &luna_wrapper_osg_Texture_Extensions::_bind_isTextureFilterAnisotropicSupported},
	{"setTextureCompressionARBSupported", &luna_wrapper_osg_Texture_Extensions::_bind_setTextureCompressionARBSupported},
	{"isTextureCompressionARBSupported", &luna_wrapper_osg_Texture_Extensions::_bind_isTextureCompressionARBSupported},
	{"setTextureCompressionS3TCSupported", &luna_wrapper_osg_Texture_Extensions::_bind_setTextureCompressionS3TCSupported},
	{"isTextureCompressionS3TCSupported", &luna_wrapper_osg_Texture_Extensions::_bind_isTextureCompressionS3TCSupported},
	{"setTextureCompressionPVRTC2BPPSupported", &luna_wrapper_osg_Texture_Extensions::_bind_setTextureCompressionPVRTC2BPPSupported},
	{"isTextureCompressionPVRTC2BPPSupported", &luna_wrapper_osg_Texture_Extensions::_bind_isTextureCompressionPVRTC2BPPSupported},
	{"setTextureCompressionPVRTC4BPPSupported", &luna_wrapper_osg_Texture_Extensions::_bind_setTextureCompressionPVRTC4BPPSupported},
	{"isTextureCompressionPVRTC4BPPSupported", &luna_wrapper_osg_Texture_Extensions::_bind_isTextureCompressionPVRTC4BPPSupported},
	{"setTextureCompressionETCSupported", &luna_wrapper_osg_Texture_Extensions::_bind_setTextureCompressionETCSupported},
	{"isTextureCompressionETCSupported", &luna_wrapper_osg_Texture_Extensions::_bind_isTextureCompressionETCSupported},
	{"setTextureCompressionRGTCSupported", &luna_wrapper_osg_Texture_Extensions::_bind_setTextureCompressionRGTCSupported},
	{"isTextureCompressionRGTCSupported", &luna_wrapper_osg_Texture_Extensions::_bind_isTextureCompressionRGTCSupported},
	{"setTextureCompressionPVRTCSupported", &luna_wrapper_osg_Texture_Extensions::_bind_setTextureCompressionPVRTCSupported},
	{"isTextureCompressionPVRTCSupported", &luna_wrapper_osg_Texture_Extensions::_bind_isTextureCompressionPVRTCSupported},
	{"setTextureMirroredRepeatSupported", &luna_wrapper_osg_Texture_Extensions::_bind_setTextureMirroredRepeatSupported},
	{"isTextureMirroredRepeatSupported", &luna_wrapper_osg_Texture_Extensions::_bind_isTextureMirroredRepeatSupported},
	{"setTextureEdgeClampSupported", &luna_wrapper_osg_Texture_Extensions::_bind_setTextureEdgeClampSupported},
	{"isTextureEdgeClampSupported", &luna_wrapper_osg_Texture_Extensions::_bind_isTextureEdgeClampSupported},
	{"setTextureBorderClampSupported", &luna_wrapper_osg_Texture_Extensions::_bind_setTextureBorderClampSupported},
	{"isTextureBorderClampSupported", &luna_wrapper_osg_Texture_Extensions::_bind_isTextureBorderClampSupported},
	{"setGenerateMipMapSupported", &luna_wrapper_osg_Texture_Extensions::_bind_setGenerateMipMapSupported},
	{"isGenerateMipMapSupported", &luna_wrapper_osg_Texture_Extensions::_bind_isGenerateMipMapSupported},
	{"setPreferGenerateMipmapSGISForPowerOfTwo", &luna_wrapper_osg_Texture_Extensions::_bind_setPreferGenerateMipmapSGISForPowerOfTwo},
	{"getPreferGenerateMipmapSGISForPowerOfTwo", &luna_wrapper_osg_Texture_Extensions::_bind_getPreferGenerateMipmapSGISForPowerOfTwo},
	{"setTextureMultisampledSupported", &luna_wrapper_osg_Texture_Extensions::_bind_setTextureMultisampledSupported},
	{"isTextureMultisampledSupported", &luna_wrapper_osg_Texture_Extensions::_bind_isTextureMultisampledSupported},
	{"setShadowSupported", &luna_wrapper_osg_Texture_Extensions::_bind_setShadowSupported},
	{"isShadowSupported", &luna_wrapper_osg_Texture_Extensions::_bind_isShadowSupported},
	{"setShadowAmbientSupported", &luna_wrapper_osg_Texture_Extensions::_bind_setShadowAmbientSupported},
	{"isShadowAmbientSupported", &luna_wrapper_osg_Texture_Extensions::_bind_isShadowAmbientSupported},
	{"setTextureMaxLevelSupported", &luna_wrapper_osg_Texture_Extensions::_bind_setTextureMaxLevelSupported},
	{"isTextureMaxLevelSupported", &luna_wrapper_osg_Texture_Extensions::_bind_isTextureMaxLevelSupported},
	{"setMaxTextureSize", &luna_wrapper_osg_Texture_Extensions::_bind_setMaxTextureSize},
	{"maxTextureSize", &luna_wrapper_osg_Texture_Extensions::_bind_maxTextureSize},
	{"setNumTextureUnits", &luna_wrapper_osg_Texture_Extensions::_bind_setNumTextureUnits},
	{"numTextureUnits", &luna_wrapper_osg_Texture_Extensions::_bind_numTextureUnits},
	{"isCompressedTexImage2DSupported", &luna_wrapper_osg_Texture_Extensions::_bind_isCompressedTexImage2DSupported},
	{"isCompressedTexSubImage2DSupported", &luna_wrapper_osg_Texture_Extensions::_bind_isCompressedTexSubImage2DSupported},
	{"isClientStorageSupported", &luna_wrapper_osg_Texture_Extensions::_bind_isClientStorageSupported},
	{"isNonPowerOfTwoTextureSupported", &luna_wrapper_osg_Texture_Extensions::_bind_isNonPowerOfTwoTextureSupported},
	{"setTextureIntegerSupported", &luna_wrapper_osg_Texture_Extensions::_bind_setTextureIntegerSupported},
	{"isTextureIntegerSupported", &luna_wrapper_osg_Texture_Extensions::_bind_isTextureIntegerSupported},
	{"isBindImageTextureSupported", &luna_wrapper_osg_Texture_Extensions::_bind_isBindImageTextureSupported},
	{"glCompressedTexImage2D", &luna_wrapper_osg_Texture_Extensions::_bind_glCompressedTexImage2D},
	{"glCompressedTexSubImage2D", &luna_wrapper_osg_Texture_Extensions::_bind_glCompressedTexSubImage2D},
	{"glGetCompressedTexImage", &luna_wrapper_osg_Texture_Extensions::_bind_glGetCompressedTexImage},
	{"glTexImage2DMultisample", &luna_wrapper_osg_Texture_Extensions::_bind_glTexImage2DMultisample},
	{"glTexParameterIiv", &luna_wrapper_osg_Texture_Extensions::_bind_glTexParameterIiv},
	{"glTexParameterIuiv", &luna_wrapper_osg_Texture_Extensions::_bind_glTexParameterIuiv},
	{"glBindImageTexture", &luna_wrapper_osg_Texture_Extensions::_bind_glBindImageTexture},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Texture_Extensions::_bind_base_setThreadSafeRefUnref},
	{"__eq", &luna_wrapper_osg_Texture_Extensions::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_Texture_Extensions::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Texture_Extensions::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Texture_Extensions::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Texture::Extensions >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Texture_Extensions::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Texture::Extensions >::enumValues[] = {
	{0,0}
};


