#include <plug_common.h>

class luna_wrapper_osg_Texture {
public:
	typedef Luna< osg::Texture > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::Texture* ptr= dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Texture >::push(L,ptr,false);
		return 1;
	};


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

	inline static bool _lg_typecheck_asTexture_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asTexture_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isTextureAttribute(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTextureTarget(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTextureWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTextureHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTextureDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWrap(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWrap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBorderColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303233) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBorderColor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBorderWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBorderWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFilter(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFilter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxAnisotropy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaxAnisotropy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUseHardwareMipMapGeneration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUseHardwareMipMapGeneration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUnRefImageDataAfterApply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUnRefImageDataAfterApply(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setClientStorageHint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getClientStorageHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setResizeNonPowerOfTwoHint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getResizeNonPowerOfTwoHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setInternalFormatMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInternalFormatMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setInternalFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInternalFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isCompressedInternalFormat_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isCompressedInternalFormat_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSourceFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSourceFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSourceType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSourceType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInternalFormatType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTextureObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextureObject(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_dirtyTextureObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_areAllTextureObjectsLoaded(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTextureParameterDirty(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_dirtyTextureParameters(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_allocateMipmapLevels(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setShadowComparison(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getShadowComparison(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setShadowCompareFunc(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getShadowCompareFunc(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setShadowTextureMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getShadowTextureMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setShadowAmbient(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getShadowAmbient(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setImage(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
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

	inline static bool _lg_typecheck_setReadPBuffer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReadPBuffer_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getReadPBuffer_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_compileGLObjects(lua_State *L) {
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

	inline static bool _lg_typecheck_applyTexImage2D_load(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_applyTexImage2D_subload(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getExtensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setExtensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCompressedSize(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTextureObjectManager(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_generateTextureObject_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_generateTextureObject_overload_2(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_deleteAllTextureObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_discardAllTextureObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_flushAllDeletedTextureObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_discardAllDeletedTextureObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_flushDeletedTextureObjects(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseTextureObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// osg::Object * osg::Texture::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Texture::cloneType() const function, expected prototype:\nosg::Object * osg::Texture::cloneType() const\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Texture::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Texture::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Texture::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::Texture::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Texture::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Texture::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Texture::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Texture::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Texture::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Texture::libraryName() const function, expected prototype:\nconst char * osg::Texture::libraryName() const\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Texture::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Texture::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Texture::className() const function, expected prototype:\nconst char * osg::Texture::className() const\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Texture::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::Texture * osg::Texture::asTexture()
	static int _bind_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_asTexture_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::Texture::asTexture() function, expected prototype:\nosg::Texture * osg::Texture::asTexture()\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Texture * osg::Texture::asTexture()");
		}
		osg::Texture * lret = self->asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::Texture::asTexture() const
	static int _bind_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_asTexture_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::Texture::asTexture() const function, expected prototype:\nconst osg::Texture * osg::Texture::asTexture() const\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::Texture::asTexture() const");
		}
		const osg::Texture * lret = self->asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Texture::asTexture
	static int _bind_asTexture(lua_State *L) {
		if (_lg_typecheck_asTexture_overload_1(L)) return _bind_asTexture_overload_1(L);
		if (_lg_typecheck_asTexture_overload_2(L)) return _bind_asTexture_overload_2(L);

		luaL_error(L, "error in function asTexture, cannot match any of the overloads for function asTexture:\n  asTexture()\n  asTexture()\n");
		return 0;
	}

	// osg::StateAttribute::Type osg::Texture::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::Texture::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::Texture::getType() const\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::Texture::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Texture::isTextureAttribute() const
	static int _bind_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_isTextureAttribute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::isTextureAttribute() const function, expected prototype:\nbool osg::Texture::isTextureAttribute() const\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::isTextureAttribute() const");
		}
		bool lret = self->isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::Texture::getTextureTarget() const
	static int _bind_getTextureTarget(lua_State *L) {
		if (!_lg_typecheck_getTextureTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture::getTextureTarget() const function, expected prototype:\nunsigned int osg::Texture::getTextureTarget() const\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture::getTextureTarget() const");
		}
		unsigned int lret = self->getTextureTarget();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Texture::getModeUsage(osg::StateAttribute::ModeUsage & ) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::getModeUsage(osg::StateAttribute::ModeUsage & ) const function, expected prototype:\nbool osg::Texture::getModeUsage(osg::StateAttribute::ModeUsage & ) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Texture::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::getModeUsage(osg::StateAttribute::ModeUsage &) const");
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int osg::Texture::getTextureWidth() const
	static int _bind_getTextureWidth(lua_State *L) {
		if (!_lg_typecheck_getTextureWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture::getTextureWidth() const function, expected prototype:\nint osg::Texture::getTextureWidth() const\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture::getTextureWidth() const");
		}
		int lret = self->getTextureWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture::getTextureHeight() const
	static int _bind_getTextureHeight(lua_State *L) {
		if (!_lg_typecheck_getTextureHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture::getTextureHeight() const function, expected prototype:\nint osg::Texture::getTextureHeight() const\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture::getTextureHeight() const");
		}
		int lret = self->getTextureHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture::getTextureDepth() const
	static int _bind_getTextureDepth(lua_State *L) {
		if (!_lg_typecheck_getTextureDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture::getTextureDepth() const function, expected prototype:\nint osg::Texture::getTextureDepth() const\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture::getTextureDepth() const");
		}
		int lret = self->getTextureDepth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture::setWrap(osg::Texture::WrapParameter which, osg::Texture::WrapMode wrap)
	static int _bind_setWrap(lua_State *L) {
		if (!_lg_typecheck_setWrap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::setWrap(osg::Texture::WrapParameter which, osg::Texture::WrapMode wrap) function, expected prototype:\nvoid osg::Texture::setWrap(osg::Texture::WrapParameter which, osg::Texture::WrapMode wrap)\nClass arguments details:\n");
		}

		osg::Texture::WrapParameter which=(osg::Texture::WrapParameter)lua_tointeger(L,2);
		osg::Texture::WrapMode wrap=(osg::Texture::WrapMode)lua_tointeger(L,3);

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::setWrap(osg::Texture::WrapParameter, osg::Texture::WrapMode)");
		}
		self->setWrap(which, wrap);

		return 0;
	}

	// osg::Texture::WrapMode osg::Texture::getWrap(osg::Texture::WrapParameter which) const
	static int _bind_getWrap(lua_State *L) {
		if (!_lg_typecheck_getWrap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture::WrapMode osg::Texture::getWrap(osg::Texture::WrapParameter which) const function, expected prototype:\nosg::Texture::WrapMode osg::Texture::getWrap(osg::Texture::WrapParameter which) const\nClass arguments details:\n");
		}

		osg::Texture::WrapParameter which=(osg::Texture::WrapParameter)lua_tointeger(L,2);

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Texture::WrapMode osg::Texture::getWrap(osg::Texture::WrapParameter) const");
		}
		osg::Texture::WrapMode lret = self->getWrap(which);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture::setBorderColor(const osg::Vec4d & color)
	static int _bind_setBorderColor(lua_State *L) {
		if (!_lg_typecheck_setBorderColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::setBorderColor(const osg::Vec4d & color) function, expected prototype:\nvoid osg::Texture::setBorderColor(const osg::Vec4d & color)\nClass arguments details:\narg 1 ID = 92303233\n");
		}

		const osg::Vec4d* color_ptr=(Luna< osg::Vec4d >::check(L,2));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osg::Texture::setBorderColor function");
		}
		const osg::Vec4d & color=*color_ptr;

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::setBorderColor(const osg::Vec4d &)");
		}
		self->setBorderColor(color);

		return 0;
	}

	// const osg::Vec4d & osg::Texture::getBorderColor() const
	static int _bind_getBorderColor(lua_State *L) {
		if (!_lg_typecheck_getBorderColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec4d & osg::Texture::getBorderColor() const function, expected prototype:\nconst osg::Vec4d & osg::Texture::getBorderColor() const\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec4d & osg::Texture::getBorderColor() const");
		}
		const osg::Vec4d* lret = &self->getBorderColor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4d >::push(L,lret,false);

		return 1;
	}

	// void osg::Texture::setBorderWidth(int width)
	static int _bind_setBorderWidth(lua_State *L) {
		if (!_lg_typecheck_setBorderWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::setBorderWidth(int width) function, expected prototype:\nvoid osg::Texture::setBorderWidth(int width)\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::setBorderWidth(int)");
		}
		self->setBorderWidth(width);

		return 0;
	}

	// int osg::Texture::getBorderWidth() const
	static int _bind_getBorderWidth(lua_State *L) {
		if (!_lg_typecheck_getBorderWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture::getBorderWidth() const function, expected prototype:\nint osg::Texture::getBorderWidth() const\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture::getBorderWidth() const");
		}
		int lret = self->getBorderWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture::setFilter(osg::Texture::FilterParameter which, osg::Texture::FilterMode filter)
	static int _bind_setFilter(lua_State *L) {
		if (!_lg_typecheck_setFilter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::setFilter(osg::Texture::FilterParameter which, osg::Texture::FilterMode filter) function, expected prototype:\nvoid osg::Texture::setFilter(osg::Texture::FilterParameter which, osg::Texture::FilterMode filter)\nClass arguments details:\n");
		}

		osg::Texture::FilterParameter which=(osg::Texture::FilterParameter)lua_tointeger(L,2);
		osg::Texture::FilterMode filter=(osg::Texture::FilterMode)lua_tointeger(L,3);

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::setFilter(osg::Texture::FilterParameter, osg::Texture::FilterMode)");
		}
		self->setFilter(which, filter);

		return 0;
	}

	// osg::Texture::FilterMode osg::Texture::getFilter(osg::Texture::FilterParameter which) const
	static int _bind_getFilter(lua_State *L) {
		if (!_lg_typecheck_getFilter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture::FilterMode osg::Texture::getFilter(osg::Texture::FilterParameter which) const function, expected prototype:\nosg::Texture::FilterMode osg::Texture::getFilter(osg::Texture::FilterParameter which) const\nClass arguments details:\n");
		}

		osg::Texture::FilterParameter which=(osg::Texture::FilterParameter)lua_tointeger(L,2);

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Texture::FilterMode osg::Texture::getFilter(osg::Texture::FilterParameter) const");
		}
		osg::Texture::FilterMode lret = self->getFilter(which);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture::setMaxAnisotropy(float anis)
	static int _bind_setMaxAnisotropy(lua_State *L) {
		if (!_lg_typecheck_setMaxAnisotropy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::setMaxAnisotropy(float anis) function, expected prototype:\nvoid osg::Texture::setMaxAnisotropy(float anis)\nClass arguments details:\n");
		}

		float anis=(float)lua_tonumber(L,2);

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::setMaxAnisotropy(float)");
		}
		self->setMaxAnisotropy(anis);

		return 0;
	}

	// float osg::Texture::getMaxAnisotropy() const
	static int _bind_getMaxAnisotropy(lua_State *L) {
		if (!_lg_typecheck_getMaxAnisotropy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::Texture::getMaxAnisotropy() const function, expected prototype:\nfloat osg::Texture::getMaxAnisotropy() const\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::Texture::getMaxAnisotropy() const");
		}
		float lret = self->getMaxAnisotropy();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture::setUseHardwareMipMapGeneration(bool useHardwareMipMapGeneration)
	static int _bind_setUseHardwareMipMapGeneration(lua_State *L) {
		if (!_lg_typecheck_setUseHardwareMipMapGeneration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::setUseHardwareMipMapGeneration(bool useHardwareMipMapGeneration) function, expected prototype:\nvoid osg::Texture::setUseHardwareMipMapGeneration(bool useHardwareMipMapGeneration)\nClass arguments details:\n");
		}

		bool useHardwareMipMapGeneration=(bool)(lua_toboolean(L,2)==1);

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::setUseHardwareMipMapGeneration(bool)");
		}
		self->setUseHardwareMipMapGeneration(useHardwareMipMapGeneration);

		return 0;
	}

	// bool osg::Texture::getUseHardwareMipMapGeneration() const
	static int _bind_getUseHardwareMipMapGeneration(lua_State *L) {
		if (!_lg_typecheck_getUseHardwareMipMapGeneration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::getUseHardwareMipMapGeneration() const function, expected prototype:\nbool osg::Texture::getUseHardwareMipMapGeneration() const\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::getUseHardwareMipMapGeneration() const");
		}
		bool lret = self->getUseHardwareMipMapGeneration();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture::setUnRefImageDataAfterApply(bool flag)
	static int _bind_setUnRefImageDataAfterApply(lua_State *L) {
		if (!_lg_typecheck_setUnRefImageDataAfterApply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::setUnRefImageDataAfterApply(bool flag) function, expected prototype:\nvoid osg::Texture::setUnRefImageDataAfterApply(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::setUnRefImageDataAfterApply(bool)");
		}
		self->setUnRefImageDataAfterApply(flag);

		return 0;
	}

	// bool osg::Texture::getUnRefImageDataAfterApply() const
	static int _bind_getUnRefImageDataAfterApply(lua_State *L) {
		if (!_lg_typecheck_getUnRefImageDataAfterApply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::getUnRefImageDataAfterApply() const function, expected prototype:\nbool osg::Texture::getUnRefImageDataAfterApply() const\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::getUnRefImageDataAfterApply() const");
		}
		bool lret = self->getUnRefImageDataAfterApply();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture::setClientStorageHint(bool flag)
	static int _bind_setClientStorageHint(lua_State *L) {
		if (!_lg_typecheck_setClientStorageHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::setClientStorageHint(bool flag) function, expected prototype:\nvoid osg::Texture::setClientStorageHint(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::setClientStorageHint(bool)");
		}
		self->setClientStorageHint(flag);

		return 0;
	}

	// bool osg::Texture::getClientStorageHint() const
	static int _bind_getClientStorageHint(lua_State *L) {
		if (!_lg_typecheck_getClientStorageHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::getClientStorageHint() const function, expected prototype:\nbool osg::Texture::getClientStorageHint() const\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::getClientStorageHint() const");
		}
		bool lret = self->getClientStorageHint();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture::setResizeNonPowerOfTwoHint(bool flag)
	static int _bind_setResizeNonPowerOfTwoHint(lua_State *L) {
		if (!_lg_typecheck_setResizeNonPowerOfTwoHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::setResizeNonPowerOfTwoHint(bool flag) function, expected prototype:\nvoid osg::Texture::setResizeNonPowerOfTwoHint(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::setResizeNonPowerOfTwoHint(bool)");
		}
		self->setResizeNonPowerOfTwoHint(flag);

		return 0;
	}

	// bool osg::Texture::getResizeNonPowerOfTwoHint() const
	static int _bind_getResizeNonPowerOfTwoHint(lua_State *L) {
		if (!_lg_typecheck_getResizeNonPowerOfTwoHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::getResizeNonPowerOfTwoHint() const function, expected prototype:\nbool osg::Texture::getResizeNonPowerOfTwoHint() const\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::getResizeNonPowerOfTwoHint() const");
		}
		bool lret = self->getResizeNonPowerOfTwoHint();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture::setInternalFormatMode(osg::Texture::InternalFormatMode mode)
	static int _bind_setInternalFormatMode(lua_State *L) {
		if (!_lg_typecheck_setInternalFormatMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::setInternalFormatMode(osg::Texture::InternalFormatMode mode) function, expected prototype:\nvoid osg::Texture::setInternalFormatMode(osg::Texture::InternalFormatMode mode)\nClass arguments details:\n");
		}

		osg::Texture::InternalFormatMode mode=(osg::Texture::InternalFormatMode)lua_tointeger(L,2);

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::setInternalFormatMode(osg::Texture::InternalFormatMode)");
		}
		self->setInternalFormatMode(mode);

		return 0;
	}

	// osg::Texture::InternalFormatMode osg::Texture::getInternalFormatMode() const
	static int _bind_getInternalFormatMode(lua_State *L) {
		if (!_lg_typecheck_getInternalFormatMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture::InternalFormatMode osg::Texture::getInternalFormatMode() const function, expected prototype:\nosg::Texture::InternalFormatMode osg::Texture::getInternalFormatMode() const\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Texture::InternalFormatMode osg::Texture::getInternalFormatMode() const");
		}
		osg::Texture::InternalFormatMode lret = self->getInternalFormatMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture::setInternalFormat(int internalFormat)
	static int _bind_setInternalFormat(lua_State *L) {
		if (!_lg_typecheck_setInternalFormat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::setInternalFormat(int internalFormat) function, expected prototype:\nvoid osg::Texture::setInternalFormat(int internalFormat)\nClass arguments details:\n");
		}

		int internalFormat=(int)lua_tointeger(L,2);

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::setInternalFormat(int)");
		}
		self->setInternalFormat(internalFormat);

		return 0;
	}

	// int osg::Texture::getInternalFormat() const
	static int _bind_getInternalFormat(lua_State *L) {
		if (!_lg_typecheck_getInternalFormat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture::getInternalFormat() const function, expected prototype:\nint osg::Texture::getInternalFormat() const\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture::getInternalFormat() const");
		}
		int lret = self->getInternalFormat();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Texture::isCompressedInternalFormat() const
	static int _bind_isCompressedInternalFormat_overload_1(lua_State *L) {
		if (!_lg_typecheck_isCompressedInternalFormat_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::isCompressedInternalFormat() const function, expected prototype:\nbool osg::Texture::isCompressedInternalFormat() const\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::isCompressedInternalFormat() const");
		}
		bool lret = self->isCompressedInternalFormat();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool osg::Texture::isCompressedInternalFormat(int internalFormat)
	static int _bind_isCompressedInternalFormat_overload_2(lua_State *L) {
		if (!_lg_typecheck_isCompressedInternalFormat_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool osg::Texture::isCompressedInternalFormat(int internalFormat) function, expected prototype:\nstatic bool osg::Texture::isCompressedInternalFormat(int internalFormat)\nClass arguments details:\n");
		}

		int internalFormat=(int)lua_tointeger(L,1);

		bool lret = osg::Texture::isCompressedInternalFormat(internalFormat);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::Texture::isCompressedInternalFormat
	static int _bind_isCompressedInternalFormat(lua_State *L) {
		if (_lg_typecheck_isCompressedInternalFormat_overload_1(L)) return _bind_isCompressedInternalFormat_overload_1(L);
		if (_lg_typecheck_isCompressedInternalFormat_overload_2(L)) return _bind_isCompressedInternalFormat_overload_2(L);

		luaL_error(L, "error in function isCompressedInternalFormat, cannot match any of the overloads for function isCompressedInternalFormat:\n  isCompressedInternalFormat()\n  isCompressedInternalFormat(int)\n");
		return 0;
	}

	// void osg::Texture::setSourceFormat(unsigned int sourceFormat)
	static int _bind_setSourceFormat(lua_State *L) {
		if (!_lg_typecheck_setSourceFormat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::setSourceFormat(unsigned int sourceFormat) function, expected prototype:\nvoid osg::Texture::setSourceFormat(unsigned int sourceFormat)\nClass arguments details:\n");
		}

		unsigned int sourceFormat=(unsigned int)lua_tointeger(L,2);

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::setSourceFormat(unsigned int)");
		}
		self->setSourceFormat(sourceFormat);

		return 0;
	}

	// unsigned int osg::Texture::getSourceFormat() const
	static int _bind_getSourceFormat(lua_State *L) {
		if (!_lg_typecheck_getSourceFormat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture::getSourceFormat() const function, expected prototype:\nunsigned int osg::Texture::getSourceFormat() const\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture::getSourceFormat() const");
		}
		unsigned int lret = self->getSourceFormat();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture::setSourceType(unsigned int sourceType)
	static int _bind_setSourceType(lua_State *L) {
		if (!_lg_typecheck_setSourceType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::setSourceType(unsigned int sourceType) function, expected prototype:\nvoid osg::Texture::setSourceType(unsigned int sourceType)\nClass arguments details:\n");
		}

		unsigned int sourceType=(unsigned int)lua_tointeger(L,2);

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::setSourceType(unsigned int)");
		}
		self->setSourceType(sourceType);

		return 0;
	}

	// unsigned int osg::Texture::getSourceType() const
	static int _bind_getSourceType(lua_State *L) {
		if (!_lg_typecheck_getSourceType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture::getSourceType() const function, expected prototype:\nunsigned int osg::Texture::getSourceType() const\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture::getSourceType() const");
		}
		unsigned int lret = self->getSourceType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Texture::InternalFormatType osg::Texture::getInternalFormatType() const
	static int _bind_getInternalFormatType(lua_State *L) {
		if (!_lg_typecheck_getInternalFormatType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture::InternalFormatType osg::Texture::getInternalFormatType() const function, expected prototype:\nosg::Texture::InternalFormatType osg::Texture::getInternalFormatType() const\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Texture::InternalFormatType osg::Texture::getInternalFormatType() const");
		}
		osg::Texture::InternalFormatType lret = self->getInternalFormatType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Texture::TextureObject * osg::Texture::getTextureObject(unsigned int contextID) const
	static int _bind_getTextureObject(lua_State *L) {
		if (!_lg_typecheck_getTextureObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture::TextureObject * osg::Texture::getTextureObject(unsigned int contextID) const function, expected prototype:\nosg::Texture::TextureObject * osg::Texture::getTextureObject(unsigned int contextID) const\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Texture::TextureObject * osg::Texture::getTextureObject(unsigned int) const");
		}
		osg::Texture::TextureObject * lret = self->getTextureObject(contextID);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture::TextureObject >::push(L,lret,false);

		return 1;
	}

	// void osg::Texture::setTextureObject(unsigned int contextID, osg::Texture::TextureObject * to)
	static int _bind_setTextureObject(lua_State *L) {
		if (!_lg_typecheck_setTextureObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::setTextureObject(unsigned int contextID, osg::Texture::TextureObject * to) function, expected prototype:\nvoid osg::Texture::setTextureObject(unsigned int contextID, osg::Texture::TextureObject * to)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);
		osg::Texture::TextureObject* to=dynamic_cast< osg::Texture::TextureObject* >(Luna< osg::Referenced >::check(L,3));

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::setTextureObject(unsigned int, osg::Texture::TextureObject *)");
		}
		self->setTextureObject(contextID, to);

		return 0;
	}

	// void osg::Texture::dirtyTextureObject()
	static int _bind_dirtyTextureObject(lua_State *L) {
		if (!_lg_typecheck_dirtyTextureObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::dirtyTextureObject() function, expected prototype:\nvoid osg::Texture::dirtyTextureObject()\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::dirtyTextureObject()");
		}
		self->dirtyTextureObject();

		return 0;
	}

	// bool osg::Texture::areAllTextureObjectsLoaded() const
	static int _bind_areAllTextureObjectsLoaded(lua_State *L) {
		if (!_lg_typecheck_areAllTextureObjectsLoaded(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::areAllTextureObjectsLoaded() const function, expected prototype:\nbool osg::Texture::areAllTextureObjectsLoaded() const\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::areAllTextureObjectsLoaded() const");
		}
		bool lret = self->areAllTextureObjectsLoaded();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int & osg::Texture::getTextureParameterDirty(unsigned int contextID) const
	static int _bind_getTextureParameterDirty(lua_State *L) {
		if (!_lg_typecheck_getTextureParameterDirty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int & osg::Texture::getTextureParameterDirty(unsigned int contextID) const function, expected prototype:\nunsigned int & osg::Texture::getTextureParameterDirty(unsigned int contextID) const\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int & osg::Texture::getTextureParameterDirty(unsigned int) const");
		}
		unsigned int & lret = self->getTextureParameterDirty(contextID);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture::dirtyTextureParameters()
	static int _bind_dirtyTextureParameters(lua_State *L) {
		if (!_lg_typecheck_dirtyTextureParameters(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::dirtyTextureParameters() function, expected prototype:\nvoid osg::Texture::dirtyTextureParameters()\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::dirtyTextureParameters()");
		}
		self->dirtyTextureParameters();

		return 0;
	}

	// void osg::Texture::allocateMipmapLevels()
	static int _bind_allocateMipmapLevels(lua_State *L) {
		if (!_lg_typecheck_allocateMipmapLevels(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::allocateMipmapLevels() function, expected prototype:\nvoid osg::Texture::allocateMipmapLevels()\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::allocateMipmapLevels()");
		}
		self->allocateMipmapLevels();

		return 0;
	}

	// void osg::Texture::setShadowComparison(bool flag)
	static int _bind_setShadowComparison(lua_State *L) {
		if (!_lg_typecheck_setShadowComparison(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::setShadowComparison(bool flag) function, expected prototype:\nvoid osg::Texture::setShadowComparison(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::setShadowComparison(bool)");
		}
		self->setShadowComparison(flag);

		return 0;
	}

	// bool osg::Texture::getShadowComparison() const
	static int _bind_getShadowComparison(lua_State *L) {
		if (!_lg_typecheck_getShadowComparison(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::getShadowComparison() const function, expected prototype:\nbool osg::Texture::getShadowComparison() const\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::getShadowComparison() const");
		}
		bool lret = self->getShadowComparison();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture::setShadowCompareFunc(osg::Texture::ShadowCompareFunc func)
	static int _bind_setShadowCompareFunc(lua_State *L) {
		if (!_lg_typecheck_setShadowCompareFunc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::setShadowCompareFunc(osg::Texture::ShadowCompareFunc func) function, expected prototype:\nvoid osg::Texture::setShadowCompareFunc(osg::Texture::ShadowCompareFunc func)\nClass arguments details:\n");
		}

		osg::Texture::ShadowCompareFunc func=(osg::Texture::ShadowCompareFunc)lua_tointeger(L,2);

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::setShadowCompareFunc(osg::Texture::ShadowCompareFunc)");
		}
		self->setShadowCompareFunc(func);

		return 0;
	}

	// osg::Texture::ShadowCompareFunc osg::Texture::getShadowCompareFunc() const
	static int _bind_getShadowCompareFunc(lua_State *L) {
		if (!_lg_typecheck_getShadowCompareFunc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture::ShadowCompareFunc osg::Texture::getShadowCompareFunc() const function, expected prototype:\nosg::Texture::ShadowCompareFunc osg::Texture::getShadowCompareFunc() const\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Texture::ShadowCompareFunc osg::Texture::getShadowCompareFunc() const");
		}
		osg::Texture::ShadowCompareFunc lret = self->getShadowCompareFunc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture::setShadowTextureMode(osg::Texture::ShadowTextureMode mode)
	static int _bind_setShadowTextureMode(lua_State *L) {
		if (!_lg_typecheck_setShadowTextureMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::setShadowTextureMode(osg::Texture::ShadowTextureMode mode) function, expected prototype:\nvoid osg::Texture::setShadowTextureMode(osg::Texture::ShadowTextureMode mode)\nClass arguments details:\n");
		}

		osg::Texture::ShadowTextureMode mode=(osg::Texture::ShadowTextureMode)lua_tointeger(L,2);

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::setShadowTextureMode(osg::Texture::ShadowTextureMode)");
		}
		self->setShadowTextureMode(mode);

		return 0;
	}

	// osg::Texture::ShadowTextureMode osg::Texture::getShadowTextureMode() const
	static int _bind_getShadowTextureMode(lua_State *L) {
		if (!_lg_typecheck_getShadowTextureMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture::ShadowTextureMode osg::Texture::getShadowTextureMode() const function, expected prototype:\nosg::Texture::ShadowTextureMode osg::Texture::getShadowTextureMode() const\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Texture::ShadowTextureMode osg::Texture::getShadowTextureMode() const");
		}
		osg::Texture::ShadowTextureMode lret = self->getShadowTextureMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture::setShadowAmbient(float shadow_ambient)
	static int _bind_setShadowAmbient(lua_State *L) {
		if (!_lg_typecheck_setShadowAmbient(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::setShadowAmbient(float shadow_ambient) function, expected prototype:\nvoid osg::Texture::setShadowAmbient(float shadow_ambient)\nClass arguments details:\n");
		}

		float shadow_ambient=(float)lua_tonumber(L,2);

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::setShadowAmbient(float)");
		}
		self->setShadowAmbient(shadow_ambient);

		return 0;
	}

	// float osg::Texture::getShadowAmbient() const
	static int _bind_getShadowAmbient(lua_State *L) {
		if (!_lg_typecheck_getShadowAmbient(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::Texture::getShadowAmbient() const function, expected prototype:\nfloat osg::Texture::getShadowAmbient() const\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::Texture::getShadowAmbient() const");
		}
		float lret = self->getShadowAmbient();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture::setImage(unsigned int face, osg::Image * image)
	static int _bind_setImage(lua_State *L) {
		if (!_lg_typecheck_setImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::setImage(unsigned int face, osg::Image * image) function, expected prototype:\nvoid osg::Texture::setImage(unsigned int face, osg::Image * image)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int face=(unsigned int)lua_tointeger(L,2);
		osg::Image* image=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,3));

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::setImage(unsigned int, osg::Image *)");
		}
		self->setImage(face, image);

		return 0;
	}

	// osg::Image * osg::Texture::getImage(unsigned int face)
	static int _bind_getImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Image * osg::Texture::getImage(unsigned int face) function, expected prototype:\nosg::Image * osg::Texture::getImage(unsigned int face)\nClass arguments details:\n");
		}

		unsigned int face=(unsigned int)lua_tointeger(L,2);

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Image * osg::Texture::getImage(unsigned int)");
		}
		osg::Image * lret = self->getImage(face);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osg::Texture::getImage(unsigned int face) const
	static int _bind_getImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Image * osg::Texture::getImage(unsigned int face) const function, expected prototype:\nconst osg::Image * osg::Texture::getImage(unsigned int face) const\nClass arguments details:\n");
		}

		unsigned int face=(unsigned int)lua_tointeger(L,2);

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Image * osg::Texture::getImage(unsigned int) const");
		}
		const osg::Image * lret = self->getImage(face);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Texture::getImage
	static int _bind_getImage(lua_State *L) {
		if (_lg_typecheck_getImage_overload_1(L)) return _bind_getImage_overload_1(L);
		if (_lg_typecheck_getImage_overload_2(L)) return _bind_getImage_overload_2(L);

		luaL_error(L, "error in function getImage, cannot match any of the overloads for function getImage:\n  getImage(unsigned int)\n  getImage(unsigned int)\n");
		return 0;
	}

	// unsigned int osg::Texture::getNumImages() const
	static int _bind_getNumImages(lua_State *L) {
		if (!_lg_typecheck_getNumImages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture::getNumImages() const function, expected prototype:\nunsigned int osg::Texture::getNumImages() const\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture::getNumImages() const");
		}
		unsigned int lret = self->getNumImages();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture::setReadPBuffer(osg::GraphicsContext * context)
	static int _bind_setReadPBuffer(lua_State *L) {
		if (!_lg_typecheck_setReadPBuffer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::setReadPBuffer(osg::GraphicsContext * context) function, expected prototype:\nvoid osg::Texture::setReadPBuffer(osg::GraphicsContext * context)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::GraphicsContext* context=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,2));

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::setReadPBuffer(osg::GraphicsContext *)");
		}
		self->setReadPBuffer(context);

		return 0;
	}

	// osg::GraphicsContext * osg::Texture::getReadPBuffer()
	static int _bind_getReadPBuffer_overload_1(lua_State *L) {
		if (!_lg_typecheck_getReadPBuffer_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GraphicsContext * osg::Texture::getReadPBuffer() function, expected prototype:\nosg::GraphicsContext * osg::Texture::getReadPBuffer()\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::GraphicsContext * osg::Texture::getReadPBuffer()");
		}
		osg::GraphicsContext * lret = self->getReadPBuffer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext >::push(L,lret,false);

		return 1;
	}

	// const osg::GraphicsContext * osg::Texture::getReadPBuffer() const
	static int _bind_getReadPBuffer_overload_2(lua_State *L) {
		if (!_lg_typecheck_getReadPBuffer_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::GraphicsContext * osg::Texture::getReadPBuffer() const function, expected prototype:\nconst osg::GraphicsContext * osg::Texture::getReadPBuffer() const\nClass arguments details:\n");
		}


		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::GraphicsContext * osg::Texture::getReadPBuffer() const");
		}
		const osg::GraphicsContext * lret = self->getReadPBuffer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Texture::getReadPBuffer
	static int _bind_getReadPBuffer(lua_State *L) {
		if (_lg_typecheck_getReadPBuffer_overload_1(L)) return _bind_getReadPBuffer_overload_1(L);
		if (_lg_typecheck_getReadPBuffer_overload_2(L)) return _bind_getReadPBuffer_overload_2(L);

		luaL_error(L, "error in function getReadPBuffer, cannot match any of the overloads for function getReadPBuffer:\n  getReadPBuffer()\n  getReadPBuffer()\n");
		return 0;
	}

	// void osg::Texture::apply(osg::State & state) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::apply(osg::State & state) const function, expected prototype:\nvoid osg::Texture::apply(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture::apply function");
		}
		osg::State & state=*state_ptr;

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::apply(osg::State &) const");
		}
		self->apply(state);

		return 0;
	}

	// void osg::Texture::compileGLObjects(osg::State & state) const
	static int _bind_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_compileGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::compileGLObjects(osg::State & state) const function, expected prototype:\nvoid osg::Texture::compileGLObjects(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture::compileGLObjects function");
		}
		osg::State & state=*state_ptr;

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::compileGLObjects(osg::State &) const");
		}
		self->compileGLObjects(state);

		return 0;
	}

	// void osg::Texture::releaseGLObjects(osg::State * state = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::Texture::releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2)) : (osg::State*)0;

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::releaseGLObjects(osg::State *) const");
		}
		self->releaseGLObjects(state);

		return 0;
	}

	// void osg::Texture::applyTexImage2D_load(osg::State & state, unsigned int target, const osg::Image * image, int width, int height, int numMipmapLevels) const
	static int _bind_applyTexImage2D_load(lua_State *L) {
		if (!_lg_typecheck_applyTexImage2D_load(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::applyTexImage2D_load(osg::State & state, unsigned int target, const osg::Image * image, int width, int height, int numMipmapLevels) const function, expected prototype:\nvoid osg::Texture::applyTexImage2D_load(osg::State & state, unsigned int target, const osg::Image * image, int width, int height, int numMipmapLevels) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n");
		}

		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture::applyTexImage2D_load function");
		}
		osg::State & state=*state_ptr;
		unsigned int target=(unsigned int)lua_tointeger(L,3);
		const osg::Image* image=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,4));
		int width=(int)lua_tointeger(L,5);
		int height=(int)lua_tointeger(L,6);
		int numMipmapLevels=(int)lua_tointeger(L,7);

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::applyTexImage2D_load(osg::State &, unsigned int, const osg::Image *, int, int, int) const");
		}
		self->applyTexImage2D_load(state, target, image, width, height, numMipmapLevels);

		return 0;
	}

	// void osg::Texture::applyTexImage2D_subload(osg::State & state, unsigned int target, const osg::Image * image, int width, int height, int inInternalFormat, int numMipmapLevels) const
	static int _bind_applyTexImage2D_subload(lua_State *L) {
		if (!_lg_typecheck_applyTexImage2D_subload(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::applyTexImage2D_subload(osg::State & state, unsigned int target, const osg::Image * image, int width, int height, int inInternalFormat, int numMipmapLevels) const function, expected prototype:\nvoid osg::Texture::applyTexImage2D_subload(osg::State & state, unsigned int target, const osg::Image * image, int width, int height, int inInternalFormat, int numMipmapLevels) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n");
		}

		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture::applyTexImage2D_subload function");
		}
		osg::State & state=*state_ptr;
		unsigned int target=(unsigned int)lua_tointeger(L,3);
		const osg::Image* image=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,4));
		int width=(int)lua_tointeger(L,5);
		int height=(int)lua_tointeger(L,6);
		int inInternalFormat=(int)lua_tointeger(L,7);
		int numMipmapLevels=(int)lua_tointeger(L,8);

		osg::Texture* self=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::applyTexImage2D_subload(osg::State &, unsigned int, const osg::Image *, int, int, int, int) const");
		}
		self->applyTexImage2D_subload(state, target, image, width, height, inInternalFormat, numMipmapLevels);

		return 0;
	}

	// static osg::Texture::Extensions * osg::Texture::getExtensions(unsigned int contextID, bool createIfNotInitalized)
	static int _bind_getExtensions(lua_State *L) {
		if (!_lg_typecheck_getExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::Texture::Extensions * osg::Texture::getExtensions(unsigned int contextID, bool createIfNotInitalized) function, expected prototype:\nstatic osg::Texture::Extensions * osg::Texture::getExtensions(unsigned int contextID, bool createIfNotInitalized)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		bool createIfNotInitalized=(bool)(lua_toboolean(L,2)==1);

		osg::Texture::Extensions * lret = osg::Texture::getExtensions(contextID, createIfNotInitalized);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture::Extensions >::push(L,lret,false);

		return 1;
	}

	// static void osg::Texture::setExtensions(unsigned int contextID, osg::Texture::Extensions * extensions)
	static int _bind_setExtensions(lua_State *L) {
		if (!_lg_typecheck_setExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::Texture::setExtensions(unsigned int contextID, osg::Texture::Extensions * extensions) function, expected prototype:\nstatic void osg::Texture::setExtensions(unsigned int contextID, osg::Texture::Extensions * extensions)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		osg::Texture::Extensions* extensions=dynamic_cast< osg::Texture::Extensions* >(Luna< osg::Referenced >::check(L,2));

		osg::Texture::setExtensions(contextID, extensions);

		return 0;
	}

	// static void osg::Texture::getCompressedSize(unsigned int internalFormat, int width, int height, int depth, int & blockSize, int & size)
	static int _bind_getCompressedSize(lua_State *L) {
		if (!_lg_typecheck_getCompressedSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::Texture::getCompressedSize(unsigned int internalFormat, int width, int height, int depth, int & blockSize, int & size) function, expected prototype:\nstatic void osg::Texture::getCompressedSize(unsigned int internalFormat, int width, int height, int depth, int & blockSize, int & size)\nClass arguments details:\n");
		}

		unsigned int internalFormat=(unsigned int)lua_tointeger(L,1);
		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		int depth=(int)lua_tointeger(L,4);
		int blockSize=(int)lua_tointeger(L,5);
		int size=(int)lua_tointeger(L,6);

		osg::Texture::getCompressedSize(internalFormat, width, height, depth, blockSize, size);

		return 0;
	}

	// static osg::ref_ptr< osg::Texture::TextureObjectManager > & osg::Texture::getTextureObjectManager(unsigned int contextID)
	static int _bind_getTextureObjectManager(lua_State *L) {
		if (!_lg_typecheck_getTextureObjectManager(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::ref_ptr< osg::Texture::TextureObjectManager > & osg::Texture::getTextureObjectManager(unsigned int contextID) function, expected prototype:\nstatic osg::ref_ptr< osg::Texture::TextureObjectManager > & osg::Texture::getTextureObjectManager(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::ref_ptr< osg::Texture::TextureObjectManager > & lret = osg::Texture::getTextureObjectManager(contextID);
		Luna< osg::Texture::TextureObjectManager >::push(L,lret.get(),false);

		return 1;
	}

	// static osg::Texture::TextureObject * osg::Texture::generateTextureObject(const osg::Texture * texture, unsigned int contextID, unsigned int target)
	static int _bind_generateTextureObject_overload_1(lua_State *L) {
		if (!_lg_typecheck_generateTextureObject_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::Texture::TextureObject * osg::Texture::generateTextureObject(const osg::Texture * texture, unsigned int contextID, unsigned int target) function, expected prototype:\nstatic osg::Texture::TextureObject * osg::Texture::generateTextureObject(const osg::Texture * texture, unsigned int contextID, unsigned int target)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Texture* texture=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		unsigned int contextID=(unsigned int)lua_tointeger(L,2);
		unsigned int target=(unsigned int)lua_tointeger(L,3);

		osg::Texture::TextureObject * lret = osg::Texture::generateTextureObject(texture, contextID, target);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture::TextureObject >::push(L,lret,false);

		return 1;
	}

	// static osg::Texture::TextureObject * osg::Texture::generateTextureObject(const osg::Texture * texture, unsigned int contextID, unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border)
	static int _bind_generateTextureObject_overload_2(lua_State *L) {
		if (!_lg_typecheck_generateTextureObject_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::Texture::TextureObject * osg::Texture::generateTextureObject(const osg::Texture * texture, unsigned int contextID, unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border) function, expected prototype:\nstatic osg::Texture::TextureObject * osg::Texture::generateTextureObject(const osg::Texture * texture, unsigned int contextID, unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Texture* texture=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1));
		unsigned int contextID=(unsigned int)lua_tointeger(L,2);
		unsigned int target=(unsigned int)lua_tointeger(L,3);
		int numMipmapLevels=(int)lua_tointeger(L,4);
		unsigned int internalFormat=(unsigned int)lua_tointeger(L,5);
		int width=(int)lua_tointeger(L,6);
		int height=(int)lua_tointeger(L,7);
		int depth=(int)lua_tointeger(L,8);
		int border=(int)lua_tointeger(L,9);

		osg::Texture::TextureObject * lret = osg::Texture::generateTextureObject(texture, contextID, target, numMipmapLevels, internalFormat, width, height, depth, border);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture::TextureObject >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Texture::generateTextureObject
	static int _bind_generateTextureObject(lua_State *L) {
		if (_lg_typecheck_generateTextureObject_overload_1(L)) return _bind_generateTextureObject_overload_1(L);
		if (_lg_typecheck_generateTextureObject_overload_2(L)) return _bind_generateTextureObject_overload_2(L);

		luaL_error(L, "error in function generateTextureObject, cannot match any of the overloads for function generateTextureObject:\n  generateTextureObject(const osg::Texture *, unsigned int, unsigned int)\n  generateTextureObject(const osg::Texture *, unsigned int, unsigned int, int, unsigned int, int, int, int, int)\n");
		return 0;
	}

	// static void osg::Texture::deleteAllTextureObjects(unsigned int contextID)
	static int _bind_deleteAllTextureObjects(lua_State *L) {
		if (!_lg_typecheck_deleteAllTextureObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::Texture::deleteAllTextureObjects(unsigned int contextID) function, expected prototype:\nstatic void osg::Texture::deleteAllTextureObjects(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::Texture::deleteAllTextureObjects(contextID);

		return 0;
	}

	// static void osg::Texture::discardAllTextureObjects(unsigned int contextID)
	static int _bind_discardAllTextureObjects(lua_State *L) {
		if (!_lg_typecheck_discardAllTextureObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::Texture::discardAllTextureObjects(unsigned int contextID) function, expected prototype:\nstatic void osg::Texture::discardAllTextureObjects(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::Texture::discardAllTextureObjects(contextID);

		return 0;
	}

	// static void osg::Texture::flushAllDeletedTextureObjects(unsigned int contextID)
	static int _bind_flushAllDeletedTextureObjects(lua_State *L) {
		if (!_lg_typecheck_flushAllDeletedTextureObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::Texture::flushAllDeletedTextureObjects(unsigned int contextID) function, expected prototype:\nstatic void osg::Texture::flushAllDeletedTextureObjects(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::Texture::flushAllDeletedTextureObjects(contextID);

		return 0;
	}

	// static void osg::Texture::discardAllDeletedTextureObjects(unsigned int contextID)
	static int _bind_discardAllDeletedTextureObjects(lua_State *L) {
		if (!_lg_typecheck_discardAllDeletedTextureObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::Texture::discardAllDeletedTextureObjects(unsigned int contextID) function, expected prototype:\nstatic void osg::Texture::discardAllDeletedTextureObjects(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::Texture::discardAllDeletedTextureObjects(contextID);

		return 0;
	}

	// static void osg::Texture::flushDeletedTextureObjects(unsigned int contextID, double currentTime, double & availableTime)
	static int _bind_flushDeletedTextureObjects(lua_State *L) {
		if (!_lg_typecheck_flushDeletedTextureObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::Texture::flushDeletedTextureObjects(unsigned int contextID, double currentTime, double & availableTime) function, expected prototype:\nstatic void osg::Texture::flushDeletedTextureObjects(unsigned int contextID, double currentTime, double & availableTime)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		double currentTime=(double)lua_tonumber(L,2);
		double availableTime=(double)lua_tonumber(L,3);

		osg::Texture::flushDeletedTextureObjects(contextID, currentTime, availableTime);

		return 0;
	}

	// static void osg::Texture::releaseTextureObject(unsigned int contextID, osg::Texture::TextureObject * to)
	static int _bind_releaseTextureObject(lua_State *L) {
		if (!_lg_typecheck_releaseTextureObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::Texture::releaseTextureObject(unsigned int contextID, osg::Texture::TextureObject * to) function, expected prototype:\nstatic void osg::Texture::releaseTextureObject(unsigned int contextID, osg::Texture::TextureObject * to)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		osg::Texture::TextureObject* to=dynamic_cast< osg::Texture::TextureObject* >(Luna< osg::Referenced >::check(L,2));

		osg::Texture::releaseTextureObject(contextID, to);

		return 0;
	}


	// Operator binds:

};

osg::Texture* LunaTraits< osg::Texture >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// osg::Object * osg::Texture::cloneType() const
	// osg::Object * osg::Texture::clone(const osg::CopyOp & ) const
	// unsigned int osg::Texture::getTextureTarget() const
	// void osg::Texture::setImage(unsigned int face, osg::Image * image)
	// osg::Image * osg::Texture::getImage(unsigned int face)
	// const osg::Image * osg::Texture::getImage(unsigned int face) const
	// unsigned int osg::Texture::getNumImages() const
	// void osg::Texture::apply(osg::State & state) const
	// void osg::Texture::computeInternalFormat() const
	// void osg::Texture::allocateMipmap(osg::State & state) const
	// osg::Object * osg::StateAttribute::cloneType() const
	// osg::Object * osg::StateAttribute::clone(const osg::CopyOp & ) const
	// int osg::StateAttribute::compare(const osg::StateAttribute & sa) const
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & ) const

	// Abstract operators:
}

void LunaTraits< osg::Texture >::_bind_dtor(osg::Texture* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Texture >::className[] = "Texture";
const char LunaTraits< osg::Texture >::fullName[] = "osg::Texture";
const char LunaTraits< osg::Texture >::moduleName[] = "osg";
const char* LunaTraits< osg::Texture >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::Texture >::hash = 49710528;
const int LunaTraits< osg::Texture >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Texture >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Texture::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Texture::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Texture::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Texture::_bind_libraryName},
	{"className", &luna_wrapper_osg_Texture::_bind_className},
	{"asTexture", &luna_wrapper_osg_Texture::_bind_asTexture},
	{"getType", &luna_wrapper_osg_Texture::_bind_getType},
	{"isTextureAttribute", &luna_wrapper_osg_Texture::_bind_isTextureAttribute},
	{"getTextureTarget", &luna_wrapper_osg_Texture::_bind_getTextureTarget},
	{"getModeUsage", &luna_wrapper_osg_Texture::_bind_getModeUsage},
	{"getTextureWidth", &luna_wrapper_osg_Texture::_bind_getTextureWidth},
	{"getTextureHeight", &luna_wrapper_osg_Texture::_bind_getTextureHeight},
	{"getTextureDepth", &luna_wrapper_osg_Texture::_bind_getTextureDepth},
	{"setWrap", &luna_wrapper_osg_Texture::_bind_setWrap},
	{"getWrap", &luna_wrapper_osg_Texture::_bind_getWrap},
	{"setBorderColor", &luna_wrapper_osg_Texture::_bind_setBorderColor},
	{"getBorderColor", &luna_wrapper_osg_Texture::_bind_getBorderColor},
	{"setBorderWidth", &luna_wrapper_osg_Texture::_bind_setBorderWidth},
	{"getBorderWidth", &luna_wrapper_osg_Texture::_bind_getBorderWidth},
	{"setFilter", &luna_wrapper_osg_Texture::_bind_setFilter},
	{"getFilter", &luna_wrapper_osg_Texture::_bind_getFilter},
	{"setMaxAnisotropy", &luna_wrapper_osg_Texture::_bind_setMaxAnisotropy},
	{"getMaxAnisotropy", &luna_wrapper_osg_Texture::_bind_getMaxAnisotropy},
	{"setUseHardwareMipMapGeneration", &luna_wrapper_osg_Texture::_bind_setUseHardwareMipMapGeneration},
	{"getUseHardwareMipMapGeneration", &luna_wrapper_osg_Texture::_bind_getUseHardwareMipMapGeneration},
	{"setUnRefImageDataAfterApply", &luna_wrapper_osg_Texture::_bind_setUnRefImageDataAfterApply},
	{"getUnRefImageDataAfterApply", &luna_wrapper_osg_Texture::_bind_getUnRefImageDataAfterApply},
	{"setClientStorageHint", &luna_wrapper_osg_Texture::_bind_setClientStorageHint},
	{"getClientStorageHint", &luna_wrapper_osg_Texture::_bind_getClientStorageHint},
	{"setResizeNonPowerOfTwoHint", &luna_wrapper_osg_Texture::_bind_setResizeNonPowerOfTwoHint},
	{"getResizeNonPowerOfTwoHint", &luna_wrapper_osg_Texture::_bind_getResizeNonPowerOfTwoHint},
	{"setInternalFormatMode", &luna_wrapper_osg_Texture::_bind_setInternalFormatMode},
	{"getInternalFormatMode", &luna_wrapper_osg_Texture::_bind_getInternalFormatMode},
	{"setInternalFormat", &luna_wrapper_osg_Texture::_bind_setInternalFormat},
	{"getInternalFormat", &luna_wrapper_osg_Texture::_bind_getInternalFormat},
	{"isCompressedInternalFormat", &luna_wrapper_osg_Texture::_bind_isCompressedInternalFormat},
	{"setSourceFormat", &luna_wrapper_osg_Texture::_bind_setSourceFormat},
	{"getSourceFormat", &luna_wrapper_osg_Texture::_bind_getSourceFormat},
	{"setSourceType", &luna_wrapper_osg_Texture::_bind_setSourceType},
	{"getSourceType", &luna_wrapper_osg_Texture::_bind_getSourceType},
	{"getInternalFormatType", &luna_wrapper_osg_Texture::_bind_getInternalFormatType},
	{"getTextureObject", &luna_wrapper_osg_Texture::_bind_getTextureObject},
	{"setTextureObject", &luna_wrapper_osg_Texture::_bind_setTextureObject},
	{"dirtyTextureObject", &luna_wrapper_osg_Texture::_bind_dirtyTextureObject},
	{"areAllTextureObjectsLoaded", &luna_wrapper_osg_Texture::_bind_areAllTextureObjectsLoaded},
	{"getTextureParameterDirty", &luna_wrapper_osg_Texture::_bind_getTextureParameterDirty},
	{"dirtyTextureParameters", &luna_wrapper_osg_Texture::_bind_dirtyTextureParameters},
	{"allocateMipmapLevels", &luna_wrapper_osg_Texture::_bind_allocateMipmapLevels},
	{"setShadowComparison", &luna_wrapper_osg_Texture::_bind_setShadowComparison},
	{"getShadowComparison", &luna_wrapper_osg_Texture::_bind_getShadowComparison},
	{"setShadowCompareFunc", &luna_wrapper_osg_Texture::_bind_setShadowCompareFunc},
	{"getShadowCompareFunc", &luna_wrapper_osg_Texture::_bind_getShadowCompareFunc},
	{"setShadowTextureMode", &luna_wrapper_osg_Texture::_bind_setShadowTextureMode},
	{"getShadowTextureMode", &luna_wrapper_osg_Texture::_bind_getShadowTextureMode},
	{"setShadowAmbient", &luna_wrapper_osg_Texture::_bind_setShadowAmbient},
	{"getShadowAmbient", &luna_wrapper_osg_Texture::_bind_getShadowAmbient},
	{"setImage", &luna_wrapper_osg_Texture::_bind_setImage},
	{"getImage", &luna_wrapper_osg_Texture::_bind_getImage},
	{"getNumImages", &luna_wrapper_osg_Texture::_bind_getNumImages},
	{"setReadPBuffer", &luna_wrapper_osg_Texture::_bind_setReadPBuffer},
	{"getReadPBuffer", &luna_wrapper_osg_Texture::_bind_getReadPBuffer},
	{"apply", &luna_wrapper_osg_Texture::_bind_apply},
	{"compileGLObjects", &luna_wrapper_osg_Texture::_bind_compileGLObjects},
	{"releaseGLObjects", &luna_wrapper_osg_Texture::_bind_releaseGLObjects},
	{"applyTexImage2D_load", &luna_wrapper_osg_Texture::_bind_applyTexImage2D_load},
	{"applyTexImage2D_subload", &luna_wrapper_osg_Texture::_bind_applyTexImage2D_subload},
	{"getExtensions", &luna_wrapper_osg_Texture::_bind_getExtensions},
	{"setExtensions", &luna_wrapper_osg_Texture::_bind_setExtensions},
	{"getCompressedSize", &luna_wrapper_osg_Texture::_bind_getCompressedSize},
	{"getTextureObjectManager", &luna_wrapper_osg_Texture::_bind_getTextureObjectManager},
	{"generateTextureObject", &luna_wrapper_osg_Texture::_bind_generateTextureObject},
	{"deleteAllTextureObjects", &luna_wrapper_osg_Texture::_bind_deleteAllTextureObjects},
	{"discardAllTextureObjects", &luna_wrapper_osg_Texture::_bind_discardAllTextureObjects},
	{"flushAllDeletedTextureObjects", &luna_wrapper_osg_Texture::_bind_flushAllDeletedTextureObjects},
	{"discardAllDeletedTextureObjects", &luna_wrapper_osg_Texture::_bind_discardAllDeletedTextureObjects},
	{"flushDeletedTextureObjects", &luna_wrapper_osg_Texture::_bind_flushDeletedTextureObjects},
	{"releaseTextureObject", &luna_wrapper_osg_Texture::_bind_releaseTextureObject},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Texture >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Texture::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Texture >::enumValues[] = {
	{"WRAP_S", osg::Texture::WRAP_S},
	{"WRAP_T", osg::Texture::WRAP_T},
	{"WRAP_R", osg::Texture::WRAP_R},
	{"CLAMP", osg::Texture::CLAMP},
	{"CLAMP_TO_EDGE", osg::Texture::CLAMP_TO_EDGE},
	{"CLAMP_TO_BORDER", osg::Texture::CLAMP_TO_BORDER},
	{"REPEAT", osg::Texture::REPEAT},
	{"MIRROR", osg::Texture::MIRROR},
	{"MIN_FILTER", osg::Texture::MIN_FILTER},
	{"MAG_FILTER", osg::Texture::MAG_FILTER},
	{"LINEAR", osg::Texture::LINEAR},
	{"LINEAR_MIPMAP_LINEAR", osg::Texture::LINEAR_MIPMAP_LINEAR},
	{"LINEAR_MIPMAP_NEAREST", osg::Texture::LINEAR_MIPMAP_NEAREST},
	{"NEAREST", osg::Texture::NEAREST},
	{"NEAREST_MIPMAP_LINEAR", osg::Texture::NEAREST_MIPMAP_LINEAR},
	{"NEAREST_MIPMAP_NEAREST", osg::Texture::NEAREST_MIPMAP_NEAREST},
	{"USE_IMAGE_DATA_FORMAT", osg::Texture::USE_IMAGE_DATA_FORMAT},
	{"USE_USER_DEFINED_FORMAT", osg::Texture::USE_USER_DEFINED_FORMAT},
	{"USE_ARB_COMPRESSION", osg::Texture::USE_ARB_COMPRESSION},
	{"USE_S3TC_DXT1_COMPRESSION", osg::Texture::USE_S3TC_DXT1_COMPRESSION},
	{"USE_S3TC_DXT3_COMPRESSION", osg::Texture::USE_S3TC_DXT3_COMPRESSION},
	{"USE_S3TC_DXT5_COMPRESSION", osg::Texture::USE_S3TC_DXT5_COMPRESSION},
	{"USE_PVRTC_2BPP_COMPRESSION", osg::Texture::USE_PVRTC_2BPP_COMPRESSION},
	{"USE_PVRTC_4BPP_COMPRESSION", osg::Texture::USE_PVRTC_4BPP_COMPRESSION},
	{"USE_ETC_COMPRESSION", osg::Texture::USE_ETC_COMPRESSION},
	{"USE_RGTC1_COMPRESSION", osg::Texture::USE_RGTC1_COMPRESSION},
	{"USE_RGTC2_COMPRESSION", osg::Texture::USE_RGTC2_COMPRESSION},
	{"USE_S3TC_DXT1c_COMPRESSION", osg::Texture::USE_S3TC_DXT1c_COMPRESSION},
	{"USE_S3TC_DXT1a_COMPRESSION", osg::Texture::USE_S3TC_DXT1a_COMPRESSION},
	{"NORMALIZED", osg::Texture::NORMALIZED},
	{"FLOAT", osg::Texture::FLOAT},
	{"SIGNED_INTEGER", osg::Texture::SIGNED_INTEGER},
	{"UNSIGNED_INTEGER", osg::Texture::UNSIGNED_INTEGER},
	{"NEVER", osg::Texture::NEVER},
	{"LESS", osg::Texture::LESS},
	{"EQUAL", osg::Texture::EQUAL},
	{"LEQUAL", osg::Texture::LEQUAL},
	{"GREATER", osg::Texture::GREATER},
	{"NOTEQUAL", osg::Texture::NOTEQUAL},
	{"GEQUAL", osg::Texture::GEQUAL},
	{"ALWAYS", osg::Texture::ALWAYS},
	{"LUMINANCE", osg::Texture::LUMINANCE},
	{"INTENSITY", osg::Texture::INTENSITY},
	{"ALPHA", osg::Texture::ALPHA},
	{"GENERATE_MIPMAP_NONE", osg::Texture::GENERATE_MIPMAP_NONE},
	{"GENERATE_MIPMAP", osg::Texture::GENERATE_MIPMAP},
	{"GENERATE_MIPMAP_TEX_PARAMETER", osg::Texture::GENERATE_MIPMAP_TEX_PARAMETER},
	{0,0}
};

