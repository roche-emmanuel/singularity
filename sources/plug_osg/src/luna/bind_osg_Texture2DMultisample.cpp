#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Texture2DMultisample.h>

class luna_wrapper_osg_Texture2DMultisample {
public:
	typedef Luna< osg::Texture2DMultisample > luna_t;

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
		//osg::Texture2DMultisample* ptr= dynamic_cast< osg::Texture2DMultisample* >(Luna< osg::Referenced >::check(L,1));
		osg::Texture2DMultisample* ptr= luna_caster< osg::Referenced, osg::Texture2DMultisample >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Texture2DMultisample >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTextureTarget(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTextureSize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumSamples(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

	inline static bool _lg_typecheck_allocateMipmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextureWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextureHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

	inline static bool _lg_typecheck_base_getMember(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_checkValidityOfAssociatedModes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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

	inline static bool _lg_typecheck_base_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
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

	inline static bool _lg_typecheck_base_getTextureTarget(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setImage(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getImage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getImage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getNumImages(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_allocateMipmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getTextureWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getTextureHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getTextureDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// osg::Texture2DMultisample::Texture2DMultisample()
	static osg::Texture2DMultisample* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture2DMultisample::Texture2DMultisample() function, expected prototype:\nosg::Texture2DMultisample::Texture2DMultisample()\nClass arguments details:\n");
		}


		return new osg::Texture2DMultisample();
	}

	// osg::Texture2DMultisample::Texture2DMultisample(int numSamples, unsigned char fixedsamplelocations)
	static osg::Texture2DMultisample* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture2DMultisample::Texture2DMultisample(int numSamples, unsigned char fixedsamplelocations) function, expected prototype:\nosg::Texture2DMultisample::Texture2DMultisample(int numSamples, unsigned char fixedsamplelocations)\nClass arguments details:\n");
		}

		int numSamples=(int)lua_tointeger(L,1);
		unsigned char fixedsamplelocations = (unsigned char)(lua_tointeger(L,2));

		return new osg::Texture2DMultisample(numSamples, fixedsamplelocations);
	}

	// osg::Texture2DMultisample::Texture2DMultisample(const osg::Texture2DMultisample & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Texture2DMultisample* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture2DMultisample::Texture2DMultisample(const osg::Texture2DMultisample & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Texture2DMultisample::Texture2DMultisample(const osg::Texture2DMultisample & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Texture2DMultisample* text_ptr=(Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1));
		if( !text_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg text in osg::Texture2DMultisample::Texture2DMultisample function");
		}
		const osg::Texture2DMultisample & text=*text_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Texture2DMultisample::Texture2DMultisample function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::Texture2DMultisample(text, copyop);
	}

	// osg::Texture2DMultisample::Texture2DMultisample(lua_Table * data)
	static osg::Texture2DMultisample* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture2DMultisample::Texture2DMultisample(lua_Table * data) function, expected prototype:\nosg::Texture2DMultisample::Texture2DMultisample(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_Texture2DMultisample(L,NULL);
	}

	// osg::Texture2DMultisample::Texture2DMultisample(lua_Table * data, int numSamples, unsigned char fixedsamplelocations)
	static osg::Texture2DMultisample* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture2DMultisample::Texture2DMultisample(lua_Table * data, int numSamples, unsigned char fixedsamplelocations) function, expected prototype:\nosg::Texture2DMultisample::Texture2DMultisample(lua_Table * data, int numSamples, unsigned char fixedsamplelocations)\nClass arguments details:\n");
		}

		int numSamples=(int)lua_tointeger(L,2);
		unsigned char fixedsamplelocations = (unsigned char)(lua_tointeger(L,3));

		return new wrapper_osg_Texture2DMultisample(L,NULL, numSamples, fixedsamplelocations);
	}

	// osg::Texture2DMultisample::Texture2DMultisample(lua_Table * data, const osg::Texture2DMultisample & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Texture2DMultisample* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture2DMultisample::Texture2DMultisample(lua_Table * data, const osg::Texture2DMultisample & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Texture2DMultisample::Texture2DMultisample(lua_Table * data, const osg::Texture2DMultisample & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Texture2DMultisample* text_ptr=(Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,2));
		if( !text_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg text in osg::Texture2DMultisample::Texture2DMultisample function");
		}
		const osg::Texture2DMultisample & text=*text_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Texture2DMultisample::Texture2DMultisample function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_Texture2DMultisample(L,NULL, text, copyop);
	}

	// Overload binder for osg::Texture2DMultisample::Texture2DMultisample
	static osg::Texture2DMultisample* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function Texture2DMultisample, cannot match any of the overloads for function Texture2DMultisample:\n  Texture2DMultisample()\n  Texture2DMultisample(int, unsigned char)\n  Texture2DMultisample(const osg::Texture2DMultisample &, const osg::CopyOp &)\n  Texture2DMultisample(lua_Table *)\n  Texture2DMultisample(lua_Table *, int, unsigned char)\n  Texture2DMultisample(lua_Table *, const osg::Texture2DMultisample &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Texture2DMultisample::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Texture2DMultisample::cloneType() const function, expected prototype:\nosg::Object * osg::Texture2DMultisample::cloneType() const\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Texture2DMultisample::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Texture2DMultisample::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Texture2DMultisample::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Texture2DMultisample::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Texture2DMultisample::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Texture2DMultisample::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Texture2DMultisample::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture2DMultisample::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Texture2DMultisample::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture2DMultisample::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Texture2DMultisample::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Texture2DMultisample::libraryName() const function, expected prototype:\nconst char * osg::Texture2DMultisample::libraryName() const\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Texture2DMultisample::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Texture2DMultisample::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Texture2DMultisample::className() const function, expected prototype:\nconst char * osg::Texture2DMultisample::className() const\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Texture2DMultisample::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::Texture2DMultisample::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::Texture2DMultisample::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::Texture2DMultisample::getType() const\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::Texture2DMultisample::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture2DMultisample::compare(const osg::StateAttribute & rhs) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture2DMultisample::compare(const osg::StateAttribute & rhs) const function, expected prototype:\nint osg::Texture2DMultisample::compare(const osg::StateAttribute & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Texture2DMultisample::compare function");
		}
		const osg::StateAttribute & rhs=*rhs_ptr;

		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture2DMultisample::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Texture2DMultisample::getTextureTarget() const
	static int _bind_getTextureTarget(lua_State *L) {
		if (!_lg_typecheck_getTextureTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture2DMultisample::getTextureTarget() const function, expected prototype:\nunsigned int osg::Texture2DMultisample::getTextureTarget() const\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture2DMultisample::getTextureTarget() const");
		}
		unsigned int lret = self->getTextureTarget();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture2DMultisample::setTextureSize(int width, int height) const
	static int _bind_setTextureSize(lua_State *L) {
		if (!_lg_typecheck_setTextureSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DMultisample::setTextureSize(int width, int height) const function, expected prototype:\nvoid osg::Texture2DMultisample::setTextureSize(int width, int height) const\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DMultisample::setTextureSize(int, int) const");
		}
		self->setTextureSize(width, height);

		return 0;
	}

	// void osg::Texture2DMultisample::setNumSamples(int samples)
	static int _bind_setNumSamples(lua_State *L) {
		if (!_lg_typecheck_setNumSamples(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DMultisample::setNumSamples(int samples) function, expected prototype:\nvoid osg::Texture2DMultisample::setNumSamples(int samples)\nClass arguments details:\n");
		}

		int samples=(int)lua_tointeger(L,2);

		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DMultisample::setNumSamples(int)");
		}
		self->setNumSamples(samples);

		return 0;
	}

	// void osg::Texture2DMultisample::setImage(unsigned int face, osg::Image * image)
	static int _bind_setImage(lua_State *L) {
		if (!_lg_typecheck_setImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DMultisample::setImage(unsigned int face, osg::Image * image) function, expected prototype:\nvoid osg::Texture2DMultisample::setImage(unsigned int face, osg::Image * image)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned face=(unsigned)lua_tointeger(L,2);
		osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,3));

		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DMultisample::setImage(unsigned int, osg::Image *)");
		}
		self->setImage(face, image);

		return 0;
	}

	// osg::Image * osg::Texture2DMultisample::getImage(unsigned int face)
	static int _bind_getImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Image * osg::Texture2DMultisample::getImage(unsigned int face) function, expected prototype:\nosg::Image * osg::Texture2DMultisample::getImage(unsigned int face)\nClass arguments details:\n");
		}

		unsigned face=(unsigned)lua_tointeger(L,2);

		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Image * osg::Texture2DMultisample::getImage(unsigned int)");
		}
		osg::Image * lret = self->getImage(face);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osg::Texture2DMultisample::getImage(unsigned int face) const
	static int _bind_getImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Image * osg::Texture2DMultisample::getImage(unsigned int face) const function, expected prototype:\nconst osg::Image * osg::Texture2DMultisample::getImage(unsigned int face) const\nClass arguments details:\n");
		}

		unsigned face=(unsigned)lua_tointeger(L,2);

		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Image * osg::Texture2DMultisample::getImage(unsigned int) const");
		}
		const osg::Image * lret = self->getImage(face);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Texture2DMultisample::getImage
	static int _bind_getImage(lua_State *L) {
		if (_lg_typecheck_getImage_overload_1(L)) return _bind_getImage_overload_1(L);
		if (_lg_typecheck_getImage_overload_2(L)) return _bind_getImage_overload_2(L);

		luaL_error(L, "error in function getImage, cannot match any of the overloads for function getImage:\n  getImage(unsigned int)\n  getImage(unsigned int)\n");
		return 0;
	}

	// unsigned int osg::Texture2DMultisample::getNumImages() const
	static int _bind_getNumImages(lua_State *L) {
		if (!_lg_typecheck_getNumImages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture2DMultisample::getNumImages() const function, expected prototype:\nunsigned int osg::Texture2DMultisample::getNumImages() const\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture2DMultisample::getNumImages() const");
		}
		unsigned int lret = self->getNumImages();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture2DMultisample::allocateMipmap(osg::State & state) const
	static int _bind_allocateMipmap(lua_State *L) {
		if (!_lg_typecheck_allocateMipmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DMultisample::allocateMipmap(osg::State & state) const function, expected prototype:\nvoid osg::Texture2DMultisample::allocateMipmap(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture2DMultisample::allocateMipmap function");
		}
		osg::State & state=*state_ptr;

		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DMultisample::allocateMipmap(osg::State &) const");
		}
		self->allocateMipmap(state);

		return 0;
	}

	// void osg::Texture2DMultisample::setTextureWidth(int width)
	static int _bind_setTextureWidth(lua_State *L) {
		if (!_lg_typecheck_setTextureWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DMultisample::setTextureWidth(int width) function, expected prototype:\nvoid osg::Texture2DMultisample::setTextureWidth(int width)\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);

		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DMultisample::setTextureWidth(int)");
		}
		self->setTextureWidth(width);

		return 0;
	}

	// void osg::Texture2DMultisample::setTextureHeight(int height)
	static int _bind_setTextureHeight(lua_State *L) {
		if (!_lg_typecheck_setTextureHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DMultisample::setTextureHeight(int height) function, expected prototype:\nvoid osg::Texture2DMultisample::setTextureHeight(int height)\nClass arguments details:\n");
		}

		int height=(int)lua_tointeger(L,2);

		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DMultisample::setTextureHeight(int)");
		}
		self->setTextureHeight(height);

		return 0;
	}

	// int osg::Texture2DMultisample::getTextureWidth() const
	static int _bind_getTextureWidth(lua_State *L) {
		if (!_lg_typecheck_getTextureWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture2DMultisample::getTextureWidth() const function, expected prototype:\nint osg::Texture2DMultisample::getTextureWidth() const\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture2DMultisample::getTextureWidth() const");
		}
		int lret = self->getTextureWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture2DMultisample::getTextureHeight() const
	static int _bind_getTextureHeight(lua_State *L) {
		if (!_lg_typecheck_getTextureHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture2DMultisample::getTextureHeight() const function, expected prototype:\nint osg::Texture2DMultisample::getTextureHeight() const\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture2DMultisample::getTextureHeight() const");
		}
		int lret = self->getTextureHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture2DMultisample::getTextureDepth() const
	static int _bind_getTextureDepth(lua_State *L) {
		if (!_lg_typecheck_getTextureDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture2DMultisample::getTextureDepth() const function, expected prototype:\nint osg::Texture2DMultisample::getTextureDepth() const\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture2DMultisample::getTextureDepth() const");
		}
		int lret = self->getTextureDepth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture2DMultisample::apply(osg::State & state) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DMultisample::apply(osg::State & state) const function, expected prototype:\nvoid osg::Texture2DMultisample::apply(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture2DMultisample::apply function");
		}
		osg::State & state=*state_ptr;

		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DMultisample::apply(osg::State &) const");
		}
		self->apply(state);

		return 0;
	}

	// void osg::Texture2DMultisample::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DMultisample::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Texture2DMultisample::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DMultisample::base_setName(const std::string &)");
		}
		self->Texture2DMultisample::setName(name);

		return 0;
	}

	// void osg::Texture2DMultisample::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DMultisample::base_computeDataVariance() function, expected prototype:\nvoid osg::Texture2DMultisample::base_computeDataVariance()\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DMultisample::base_computeDataVariance()");
		}
		self->Texture2DMultisample::computeDataVariance();

		return 0;
	}

	// void osg::Texture2DMultisample::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DMultisample::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Texture2DMultisample::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DMultisample::base_setUserData(osg::Referenced *)");
		}
		self->Texture2DMultisample::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Texture2DMultisample::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Texture2DMultisample::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Texture2DMultisample::base_getUserData()\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Texture2DMultisample::base_getUserData()");
		}
		osg::Referenced * lret = self->Texture2DMultisample::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Texture2DMultisample::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Texture2DMultisample::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Texture2DMultisample::base_getUserData() const\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Texture2DMultisample::base_getUserData() const");
		}
		const osg::Referenced * lret = self->Texture2DMultisample::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Texture2DMultisample::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// unsigned int osg::Texture2DMultisample::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture2DMultisample::base_getMember() const function, expected prototype:\nunsigned int osg::Texture2DMultisample::base_getMember() const\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture2DMultisample::base_getMember() const");
		}
		unsigned int lret = self->Texture2DMultisample::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Texture2DMultisample::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture2DMultisample::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::Texture2DMultisample::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Texture2DMultisample::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture2DMultisample::base_checkValidityOfAssociatedModes(osg::State &) const");
		}
		bool lret = self->Texture2DMultisample::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::Texture * osg::Texture2DMultisample::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::Texture2DMultisample::base_asTexture() function, expected prototype:\nosg::Texture * osg::Texture2DMultisample::base_asTexture()\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Texture * osg::Texture2DMultisample::base_asTexture()");
		}
		osg::Texture * lret = self->Texture2DMultisample::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::Texture2DMultisample::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::Texture2DMultisample::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::Texture2DMultisample::base_asTexture() const\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::Texture2DMultisample::base_asTexture() const");
		}
		const osg::Texture * lret = self->Texture2DMultisample::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Texture2DMultisample::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// bool osg::Texture2DMultisample::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture2DMultisample::base_isTextureAttribute() const function, expected prototype:\nbool osg::Texture2DMultisample::base_isTextureAttribute() const\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture2DMultisample::base_isTextureAttribute() const");
		}
		bool lret = self->Texture2DMultisample::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Texture2DMultisample::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture2DMultisample::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::Texture2DMultisample::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Texture2DMultisample::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture2DMultisample::base_getModeUsage(osg::StateAttribute::ModeUsage &) const");
		}
		bool lret = self->Texture2DMultisample::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture2DMultisample::base_compileGLObjects(osg::State & state) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DMultisample::base_compileGLObjects(osg::State & state) const function, expected prototype:\nvoid osg::Texture2DMultisample::base_compileGLObjects(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture2DMultisample::base_compileGLObjects function");
		}
		osg::State & state=*state_ptr;

		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DMultisample::base_compileGLObjects(osg::State &) const");
		}
		self->Texture2DMultisample::compileGLObjects(state);

		return 0;
	}

	// void osg::Texture2DMultisample::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DMultisample::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::Texture2DMultisample::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DMultisample::base_releaseGLObjects(osg::State *) const");
		}
		self->Texture2DMultisample::releaseGLObjects(state);

		return 0;
	}

	// osg::Object * osg::Texture2DMultisample::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Texture2DMultisample::base_cloneType() const function, expected prototype:\nosg::Object * osg::Texture2DMultisample::base_cloneType() const\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Texture2DMultisample::base_cloneType() const");
		}
		osg::Object * lret = self->Texture2DMultisample::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Texture2DMultisample::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Texture2DMultisample::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Texture2DMultisample::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Texture2DMultisample::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Texture2DMultisample::base_clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->Texture2DMultisample::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Texture2DMultisample::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture2DMultisample::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Texture2DMultisample::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture2DMultisample::base_isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->Texture2DMultisample::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Texture2DMultisample::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Texture2DMultisample::base_libraryName() const function, expected prototype:\nconst char * osg::Texture2DMultisample::base_libraryName() const\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Texture2DMultisample::base_libraryName() const");
		}
		const char * lret = self->Texture2DMultisample::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Texture2DMultisample::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Texture2DMultisample::base_className() const function, expected prototype:\nconst char * osg::Texture2DMultisample::base_className() const\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Texture2DMultisample::base_className() const");
		}
		const char * lret = self->Texture2DMultisample::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::Texture2DMultisample::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::Texture2DMultisample::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osg::Texture2DMultisample::base_getType() const\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::Texture2DMultisample::base_getType() const");
		}
		osg::StateAttribute::Type lret = self->Texture2DMultisample::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture2DMultisample::base_compare(const osg::StateAttribute & rhs) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture2DMultisample::base_compare(const osg::StateAttribute & rhs) const function, expected prototype:\nint osg::Texture2DMultisample::base_compare(const osg::StateAttribute & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Texture2DMultisample::base_compare function");
		}
		const osg::StateAttribute & rhs=*rhs_ptr;

		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture2DMultisample::base_compare(const osg::StateAttribute &) const");
		}
		int lret = self->Texture2DMultisample::compare(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Texture2DMultisample::base_getTextureTarget() const
	static int _bind_base_getTextureTarget(lua_State *L) {
		if (!_lg_typecheck_base_getTextureTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture2DMultisample::base_getTextureTarget() const function, expected prototype:\nunsigned int osg::Texture2DMultisample::base_getTextureTarget() const\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture2DMultisample::base_getTextureTarget() const");
		}
		unsigned int lret = self->Texture2DMultisample::getTextureTarget();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture2DMultisample::base_setImage(unsigned int face, osg::Image * image)
	static int _bind_base_setImage(lua_State *L) {
		if (!_lg_typecheck_base_setImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DMultisample::base_setImage(unsigned int face, osg::Image * image) function, expected prototype:\nvoid osg::Texture2DMultisample::base_setImage(unsigned int face, osg::Image * image)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned face=(unsigned)lua_tointeger(L,2);
		osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,3));

		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DMultisample::base_setImage(unsigned int, osg::Image *)");
		}
		self->Texture2DMultisample::setImage(face, image);

		return 0;
	}

	// osg::Image * osg::Texture2DMultisample::base_getImage(unsigned int face)
	static int _bind_base_getImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getImage_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Image * osg::Texture2DMultisample::base_getImage(unsigned int face) function, expected prototype:\nosg::Image * osg::Texture2DMultisample::base_getImage(unsigned int face)\nClass arguments details:\n");
		}

		unsigned face=(unsigned)lua_tointeger(L,2);

		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Image * osg::Texture2DMultisample::base_getImage(unsigned int)");
		}
		osg::Image * lret = self->Texture2DMultisample::getImage(face);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osg::Texture2DMultisample::base_getImage(unsigned int face) const
	static int _bind_base_getImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getImage_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Image * osg::Texture2DMultisample::base_getImage(unsigned int face) const function, expected prototype:\nconst osg::Image * osg::Texture2DMultisample::base_getImage(unsigned int face) const\nClass arguments details:\n");
		}

		unsigned face=(unsigned)lua_tointeger(L,2);

		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Image * osg::Texture2DMultisample::base_getImage(unsigned int) const");
		}
		const osg::Image * lret = self->Texture2DMultisample::getImage(face);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Texture2DMultisample::base_getImage
	static int _bind_base_getImage(lua_State *L) {
		if (_lg_typecheck_base_getImage_overload_1(L)) return _bind_base_getImage_overload_1(L);
		if (_lg_typecheck_base_getImage_overload_2(L)) return _bind_base_getImage_overload_2(L);

		luaL_error(L, "error in function base_getImage, cannot match any of the overloads for function base_getImage:\n  base_getImage(unsigned int)\n  base_getImage(unsigned int)\n");
		return 0;
	}

	// unsigned int osg::Texture2DMultisample::base_getNumImages() const
	static int _bind_base_getNumImages(lua_State *L) {
		if (!_lg_typecheck_base_getNumImages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture2DMultisample::base_getNumImages() const function, expected prototype:\nunsigned int osg::Texture2DMultisample::base_getNumImages() const\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture2DMultisample::base_getNumImages() const");
		}
		unsigned int lret = self->Texture2DMultisample::getNumImages();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture2DMultisample::base_allocateMipmap(osg::State & state) const
	static int _bind_base_allocateMipmap(lua_State *L) {
		if (!_lg_typecheck_base_allocateMipmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DMultisample::base_allocateMipmap(osg::State & state) const function, expected prototype:\nvoid osg::Texture2DMultisample::base_allocateMipmap(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture2DMultisample::base_allocateMipmap function");
		}
		osg::State & state=*state_ptr;

		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DMultisample::base_allocateMipmap(osg::State &) const");
		}
		self->Texture2DMultisample::allocateMipmap(state);

		return 0;
	}

	// int osg::Texture2DMultisample::base_getTextureWidth() const
	static int _bind_base_getTextureWidth(lua_State *L) {
		if (!_lg_typecheck_base_getTextureWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture2DMultisample::base_getTextureWidth() const function, expected prototype:\nint osg::Texture2DMultisample::base_getTextureWidth() const\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture2DMultisample::base_getTextureWidth() const");
		}
		int lret = self->Texture2DMultisample::getTextureWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture2DMultisample::base_getTextureHeight() const
	static int _bind_base_getTextureHeight(lua_State *L) {
		if (!_lg_typecheck_base_getTextureHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture2DMultisample::base_getTextureHeight() const function, expected prototype:\nint osg::Texture2DMultisample::base_getTextureHeight() const\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture2DMultisample::base_getTextureHeight() const");
		}
		int lret = self->Texture2DMultisample::getTextureHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture2DMultisample::base_getTextureDepth() const
	static int _bind_base_getTextureDepth(lua_State *L) {
		if (!_lg_typecheck_base_getTextureDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture2DMultisample::base_getTextureDepth() const function, expected prototype:\nint osg::Texture2DMultisample::base_getTextureDepth() const\nClass arguments details:\n");
		}


		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture2DMultisample::base_getTextureDepth() const");
		}
		int lret = self->Texture2DMultisample::getTextureDepth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture2DMultisample::base_apply(osg::State & state) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DMultisample::base_apply(osg::State & state) const function, expected prototype:\nvoid osg::Texture2DMultisample::base_apply(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture2DMultisample::base_apply function");
		}
		osg::State & state=*state_ptr;

		osg::Texture2DMultisample* self=Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DMultisample::base_apply(osg::State &) const");
		}
		self->Texture2DMultisample::apply(state);

		return 0;
	}


	// Operator binds:

};

osg::Texture2DMultisample* LunaTraits< osg::Texture2DMultisample >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Texture2DMultisample::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::Texture2DMultisample >::_bind_dtor(osg::Texture2DMultisample* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Texture2DMultisample >::className[] = "Texture2DMultisample";
const char LunaTraits< osg::Texture2DMultisample >::fullName[] = "osg::Texture2DMultisample";
const char LunaTraits< osg::Texture2DMultisample >::moduleName[] = "osg";
const char* LunaTraits< osg::Texture2DMultisample >::parents[] = {"osg.Texture", 0};
const int LunaTraits< osg::Texture2DMultisample >::hash = 30392864;
const int LunaTraits< osg::Texture2DMultisample >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Texture2DMultisample >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Texture2DMultisample::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Texture2DMultisample::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Texture2DMultisample::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Texture2DMultisample::_bind_libraryName},
	{"className", &luna_wrapper_osg_Texture2DMultisample::_bind_className},
	{"getType", &luna_wrapper_osg_Texture2DMultisample::_bind_getType},
	{"compare", &luna_wrapper_osg_Texture2DMultisample::_bind_compare},
	{"getTextureTarget", &luna_wrapper_osg_Texture2DMultisample::_bind_getTextureTarget},
	{"setTextureSize", &luna_wrapper_osg_Texture2DMultisample::_bind_setTextureSize},
	{"setNumSamples", &luna_wrapper_osg_Texture2DMultisample::_bind_setNumSamples},
	{"setImage", &luna_wrapper_osg_Texture2DMultisample::_bind_setImage},
	{"getImage", &luna_wrapper_osg_Texture2DMultisample::_bind_getImage},
	{"getNumImages", &luna_wrapper_osg_Texture2DMultisample::_bind_getNumImages},
	{"allocateMipmap", &luna_wrapper_osg_Texture2DMultisample::_bind_allocateMipmap},
	{"setTextureWidth", &luna_wrapper_osg_Texture2DMultisample::_bind_setTextureWidth},
	{"setTextureHeight", &luna_wrapper_osg_Texture2DMultisample::_bind_setTextureHeight},
	{"getTextureWidth", &luna_wrapper_osg_Texture2DMultisample::_bind_getTextureWidth},
	{"getTextureHeight", &luna_wrapper_osg_Texture2DMultisample::_bind_getTextureHeight},
	{"getTextureDepth", &luna_wrapper_osg_Texture2DMultisample::_bind_getTextureDepth},
	{"apply", &luna_wrapper_osg_Texture2DMultisample::_bind_apply},
	{"base_setName", &luna_wrapper_osg_Texture2DMultisample::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Texture2DMultisample::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Texture2DMultisample::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Texture2DMultisample::_bind_base_getUserData},
	{"base_getMember", &luna_wrapper_osg_Texture2DMultisample::_bind_base_getMember},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_Texture2DMultisample::_bind_base_checkValidityOfAssociatedModes},
	{"base_asTexture", &luna_wrapper_osg_Texture2DMultisample::_bind_base_asTexture},
	{"base_isTextureAttribute", &luna_wrapper_osg_Texture2DMultisample::_bind_base_isTextureAttribute},
	{"base_getModeUsage", &luna_wrapper_osg_Texture2DMultisample::_bind_base_getModeUsage},
	{"base_compileGLObjects", &luna_wrapper_osg_Texture2DMultisample::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_Texture2DMultisample::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_Texture2DMultisample::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Texture2DMultisample::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_Texture2DMultisample::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_Texture2DMultisample::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_Texture2DMultisample::_bind_base_className},
	{"base_getType", &luna_wrapper_osg_Texture2DMultisample::_bind_base_getType},
	{"base_compare", &luna_wrapper_osg_Texture2DMultisample::_bind_base_compare},
	{"base_getTextureTarget", &luna_wrapper_osg_Texture2DMultisample::_bind_base_getTextureTarget},
	{"base_setImage", &luna_wrapper_osg_Texture2DMultisample::_bind_base_setImage},
	{"base_getImage", &luna_wrapper_osg_Texture2DMultisample::_bind_base_getImage},
	{"base_getNumImages", &luna_wrapper_osg_Texture2DMultisample::_bind_base_getNumImages},
	{"base_allocateMipmap", &luna_wrapper_osg_Texture2DMultisample::_bind_base_allocateMipmap},
	{"base_getTextureWidth", &luna_wrapper_osg_Texture2DMultisample::_bind_base_getTextureWidth},
	{"base_getTextureHeight", &luna_wrapper_osg_Texture2DMultisample::_bind_base_getTextureHeight},
	{"base_getTextureDepth", &luna_wrapper_osg_Texture2DMultisample::_bind_base_getTextureDepth},
	{"base_apply", &luna_wrapper_osg_Texture2DMultisample::_bind_base_apply},
	{"__eq", &luna_wrapper_osg_Texture2DMultisample::_bind___eq},
	{"getTable", &luna_wrapper_osg_Texture2DMultisample::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Texture2DMultisample >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Texture2DMultisample::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Texture2DMultisample >::enumValues[] = {
	{0,0}
};


