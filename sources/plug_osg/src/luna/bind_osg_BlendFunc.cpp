#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_BlendFunc.h>

class luna_wrapper_osg_BlendFunc {
public:
	typedef Luna< osg::BlendFunc > luna_t;

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
		//osg::BlendFunc* ptr= dynamic_cast< osg::BlendFunc* >(Luna< osg::Referenced >::check(L,1));
		osg::BlendFunc* ptr= luna_caster< osg::Referenced, osg::BlendFunc >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::BlendFunc >::push(L,ptr,false);
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
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!dynamic_cast< osg::BlendFunc* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
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
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::BlendFunc* >(Luna< osg::Referenced >::check(L,2))) ) return false;
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

	inline static bool _lg_typecheck_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFunction_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFunction_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSource(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSource(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSourceRGB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSourceRGB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSourceAlpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSourceAlpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDestination(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDestination(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDestinationRGB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDestinationRGB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDestinationAlpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDestinationAlpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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

	inline static bool _lg_typecheck_base_getMember(lua_State *L) {
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
	// osg::BlendFunc::BlendFunc()
	static osg::BlendFunc* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BlendFunc::BlendFunc() function, expected prototype:\nosg::BlendFunc::BlendFunc()\nClass arguments details:\n");
		}


		return new osg::BlendFunc();
	}

	// osg::BlendFunc::BlendFunc(unsigned int source, unsigned int destination)
	static osg::BlendFunc* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BlendFunc::BlendFunc(unsigned int source, unsigned int destination) function, expected prototype:\nosg::BlendFunc::BlendFunc(unsigned int source, unsigned int destination)\nClass arguments details:\n");
		}

		unsigned int source=(unsigned int)lua_tointeger(L,1);
		unsigned int destination=(unsigned int)lua_tointeger(L,2);

		return new osg::BlendFunc(source, destination);
	}

	// osg::BlendFunc::BlendFunc(unsigned int source, unsigned int destination, unsigned int source_alpha, unsigned int destination_alpha)
	static osg::BlendFunc* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BlendFunc::BlendFunc(unsigned int source, unsigned int destination, unsigned int source_alpha, unsigned int destination_alpha) function, expected prototype:\nosg::BlendFunc::BlendFunc(unsigned int source, unsigned int destination, unsigned int source_alpha, unsigned int destination_alpha)\nClass arguments details:\n");
		}

		unsigned int source=(unsigned int)lua_tointeger(L,1);
		unsigned int destination=(unsigned int)lua_tointeger(L,2);
		unsigned int source_alpha=(unsigned int)lua_tointeger(L,3);
		unsigned int destination_alpha=(unsigned int)lua_tointeger(L,4);

		return new osg::BlendFunc(source, destination, source_alpha, destination_alpha);
	}

	// osg::BlendFunc::BlendFunc(const osg::BlendFunc & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::BlendFunc* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BlendFunc::BlendFunc(const osg::BlendFunc & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::BlendFunc::BlendFunc(const osg::BlendFunc & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::BlendFunc* trans_ptr=(Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in osg::BlendFunc::BlendFunc function");
		}
		const osg::BlendFunc & trans=*trans_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::BlendFunc::BlendFunc function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::BlendFunc(trans, copyop);
	}

	// osg::BlendFunc::BlendFunc(lua_Table * data)
	static osg::BlendFunc* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BlendFunc::BlendFunc(lua_Table * data) function, expected prototype:\nosg::BlendFunc::BlendFunc(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_BlendFunc(L,NULL);
	}

	// osg::BlendFunc::BlendFunc(lua_Table * data, unsigned int source, unsigned int destination)
	static osg::BlendFunc* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BlendFunc::BlendFunc(lua_Table * data, unsigned int source, unsigned int destination) function, expected prototype:\nosg::BlendFunc::BlendFunc(lua_Table * data, unsigned int source, unsigned int destination)\nClass arguments details:\n");
		}

		unsigned int source=(unsigned int)lua_tointeger(L,2);
		unsigned int destination=(unsigned int)lua_tointeger(L,3);

		return new wrapper_osg_BlendFunc(L,NULL, source, destination);
	}

	// osg::BlendFunc::BlendFunc(lua_Table * data, unsigned int source, unsigned int destination, unsigned int source_alpha, unsigned int destination_alpha)
	static osg::BlendFunc* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BlendFunc::BlendFunc(lua_Table * data, unsigned int source, unsigned int destination, unsigned int source_alpha, unsigned int destination_alpha) function, expected prototype:\nosg::BlendFunc::BlendFunc(lua_Table * data, unsigned int source, unsigned int destination, unsigned int source_alpha, unsigned int destination_alpha)\nClass arguments details:\n");
		}

		unsigned int source=(unsigned int)lua_tointeger(L,2);
		unsigned int destination=(unsigned int)lua_tointeger(L,3);
		unsigned int source_alpha=(unsigned int)lua_tointeger(L,4);
		unsigned int destination_alpha=(unsigned int)lua_tointeger(L,5);

		return new wrapper_osg_BlendFunc(L,NULL, source, destination, source_alpha, destination_alpha);
	}

	// osg::BlendFunc::BlendFunc(lua_Table * data, const osg::BlendFunc & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::BlendFunc* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BlendFunc::BlendFunc(lua_Table * data, const osg::BlendFunc & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::BlendFunc::BlendFunc(lua_Table * data, const osg::BlendFunc & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::BlendFunc* trans_ptr=(Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,2));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in osg::BlendFunc::BlendFunc function");
		}
		const osg::BlendFunc & trans=*trans_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::BlendFunc::BlendFunc function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_BlendFunc(L,NULL, trans, copyop);
	}

	// Overload binder for osg::BlendFunc::BlendFunc
	static osg::BlendFunc* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);

		luaL_error(L, "error in function BlendFunc, cannot match any of the overloads for function BlendFunc:\n  BlendFunc()\n  BlendFunc(unsigned int, unsigned int)\n  BlendFunc(unsigned int, unsigned int, unsigned int, unsigned int)\n  BlendFunc(const osg::BlendFunc &, const osg::CopyOp &)\n  BlendFunc(lua_Table *)\n  BlendFunc(lua_Table *, unsigned int, unsigned int)\n  BlendFunc(lua_Table *, unsigned int, unsigned int, unsigned int, unsigned int)\n  BlendFunc(lua_Table *, const osg::BlendFunc &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::BlendFunc::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::BlendFunc::cloneType() const function, expected prototype:\nosg::Object * osg::BlendFunc::cloneType() const\nClass arguments details:\n");
		}


		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::BlendFunc::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::BlendFunc::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::BlendFunc::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::BlendFunc::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BlendFunc::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::BlendFunc::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::BlendFunc::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::BlendFunc::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::BlendFunc::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::BlendFunc::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::BlendFunc::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::BlendFunc::libraryName() const function, expected prototype:\nconst char * osg::BlendFunc::libraryName() const\nClass arguments details:\n");
		}


		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::BlendFunc::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::BlendFunc::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::BlendFunc::className() const function, expected prototype:\nconst char * osg::BlendFunc::className() const\nClass arguments details:\n");
		}


		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::BlendFunc::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::BlendFunc::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::BlendFunc::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::BlendFunc::getType() const\nClass arguments details:\n");
		}


		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::BlendFunc::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::BlendFunc::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::BlendFunc::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::BlendFunc::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::BlendFunc::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::BlendFunc::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::BlendFunc::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::BlendFunc::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::BlendFunc::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BlendFunc::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::BlendFunc::getModeUsage(osg::StateAttribute::ModeUsage &) const");
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::BlendFunc::setFunction(unsigned int source, unsigned int destination)
	static int _bind_setFunction_overload_1(lua_State *L) {
		if (!_lg_typecheck_setFunction_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlendFunc::setFunction(unsigned int source, unsigned int destination) function, expected prototype:\nvoid osg::BlendFunc::setFunction(unsigned int source, unsigned int destination)\nClass arguments details:\n");
		}

		unsigned int source=(unsigned int)lua_tointeger(L,2);
		unsigned int destination=(unsigned int)lua_tointeger(L,3);

		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlendFunc::setFunction(unsigned int, unsigned int)");
		}
		self->setFunction(source, destination);

		return 0;
	}

	// void osg::BlendFunc::setFunction(unsigned int source_rgb, unsigned int destination_rgb, unsigned int source_alpha, unsigned int destination_alpha)
	static int _bind_setFunction_overload_2(lua_State *L) {
		if (!_lg_typecheck_setFunction_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlendFunc::setFunction(unsigned int source_rgb, unsigned int destination_rgb, unsigned int source_alpha, unsigned int destination_alpha) function, expected prototype:\nvoid osg::BlendFunc::setFunction(unsigned int source_rgb, unsigned int destination_rgb, unsigned int source_alpha, unsigned int destination_alpha)\nClass arguments details:\n");
		}

		unsigned int source_rgb=(unsigned int)lua_tointeger(L,2);
		unsigned int destination_rgb=(unsigned int)lua_tointeger(L,3);
		unsigned int source_alpha=(unsigned int)lua_tointeger(L,4);
		unsigned int destination_alpha=(unsigned int)lua_tointeger(L,5);

		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlendFunc::setFunction(unsigned int, unsigned int, unsigned int, unsigned int)");
		}
		self->setFunction(source_rgb, destination_rgb, source_alpha, destination_alpha);

		return 0;
	}

	// Overload binder for osg::BlendFunc::setFunction
	static int _bind_setFunction(lua_State *L) {
		if (_lg_typecheck_setFunction_overload_1(L)) return _bind_setFunction_overload_1(L);
		if (_lg_typecheck_setFunction_overload_2(L)) return _bind_setFunction_overload_2(L);

		luaL_error(L, "error in function setFunction, cannot match any of the overloads for function setFunction:\n  setFunction(unsigned int, unsigned int)\n  setFunction(unsigned int, unsigned int, unsigned int, unsigned int)\n");
		return 0;
	}

	// void osg::BlendFunc::setSource(unsigned int source)
	static int _bind_setSource(lua_State *L) {
		if (!_lg_typecheck_setSource(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlendFunc::setSource(unsigned int source) function, expected prototype:\nvoid osg::BlendFunc::setSource(unsigned int source)\nClass arguments details:\n");
		}

		unsigned int source=(unsigned int)lua_tointeger(L,2);

		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlendFunc::setSource(unsigned int)");
		}
		self->setSource(source);

		return 0;
	}

	// unsigned int osg::BlendFunc::getSource() const
	static int _bind_getSource(lua_State *L) {
		if (!_lg_typecheck_getSource(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::BlendFunc::getSource() const function, expected prototype:\nunsigned int osg::BlendFunc::getSource() const\nClass arguments details:\n");
		}


		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::BlendFunc::getSource() const");
		}
		unsigned int lret = self->getSource();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::BlendFunc::setSourceRGB(unsigned int source)
	static int _bind_setSourceRGB(lua_State *L) {
		if (!_lg_typecheck_setSourceRGB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlendFunc::setSourceRGB(unsigned int source) function, expected prototype:\nvoid osg::BlendFunc::setSourceRGB(unsigned int source)\nClass arguments details:\n");
		}

		unsigned int source=(unsigned int)lua_tointeger(L,2);

		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlendFunc::setSourceRGB(unsigned int)");
		}
		self->setSourceRGB(source);

		return 0;
	}

	// unsigned int osg::BlendFunc::getSourceRGB() const
	static int _bind_getSourceRGB(lua_State *L) {
		if (!_lg_typecheck_getSourceRGB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::BlendFunc::getSourceRGB() const function, expected prototype:\nunsigned int osg::BlendFunc::getSourceRGB() const\nClass arguments details:\n");
		}


		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::BlendFunc::getSourceRGB() const");
		}
		unsigned int lret = self->getSourceRGB();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::BlendFunc::setSourceAlpha(unsigned int source)
	static int _bind_setSourceAlpha(lua_State *L) {
		if (!_lg_typecheck_setSourceAlpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlendFunc::setSourceAlpha(unsigned int source) function, expected prototype:\nvoid osg::BlendFunc::setSourceAlpha(unsigned int source)\nClass arguments details:\n");
		}

		unsigned int source=(unsigned int)lua_tointeger(L,2);

		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlendFunc::setSourceAlpha(unsigned int)");
		}
		self->setSourceAlpha(source);

		return 0;
	}

	// unsigned int osg::BlendFunc::getSourceAlpha() const
	static int _bind_getSourceAlpha(lua_State *L) {
		if (!_lg_typecheck_getSourceAlpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::BlendFunc::getSourceAlpha() const function, expected prototype:\nunsigned int osg::BlendFunc::getSourceAlpha() const\nClass arguments details:\n");
		}


		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::BlendFunc::getSourceAlpha() const");
		}
		unsigned int lret = self->getSourceAlpha();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::BlendFunc::setDestination(unsigned int destination)
	static int _bind_setDestination(lua_State *L) {
		if (!_lg_typecheck_setDestination(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlendFunc::setDestination(unsigned int destination) function, expected prototype:\nvoid osg::BlendFunc::setDestination(unsigned int destination)\nClass arguments details:\n");
		}

		unsigned int destination=(unsigned int)lua_tointeger(L,2);

		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlendFunc::setDestination(unsigned int)");
		}
		self->setDestination(destination);

		return 0;
	}

	// unsigned int osg::BlendFunc::getDestination() const
	static int _bind_getDestination(lua_State *L) {
		if (!_lg_typecheck_getDestination(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::BlendFunc::getDestination() const function, expected prototype:\nunsigned int osg::BlendFunc::getDestination() const\nClass arguments details:\n");
		}


		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::BlendFunc::getDestination() const");
		}
		unsigned int lret = self->getDestination();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::BlendFunc::setDestinationRGB(unsigned int destination)
	static int _bind_setDestinationRGB(lua_State *L) {
		if (!_lg_typecheck_setDestinationRGB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlendFunc::setDestinationRGB(unsigned int destination) function, expected prototype:\nvoid osg::BlendFunc::setDestinationRGB(unsigned int destination)\nClass arguments details:\n");
		}

		unsigned int destination=(unsigned int)lua_tointeger(L,2);

		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlendFunc::setDestinationRGB(unsigned int)");
		}
		self->setDestinationRGB(destination);

		return 0;
	}

	// unsigned int osg::BlendFunc::getDestinationRGB() const
	static int _bind_getDestinationRGB(lua_State *L) {
		if (!_lg_typecheck_getDestinationRGB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::BlendFunc::getDestinationRGB() const function, expected prototype:\nunsigned int osg::BlendFunc::getDestinationRGB() const\nClass arguments details:\n");
		}


		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::BlendFunc::getDestinationRGB() const");
		}
		unsigned int lret = self->getDestinationRGB();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::BlendFunc::setDestinationAlpha(unsigned int destination)
	static int _bind_setDestinationAlpha(lua_State *L) {
		if (!_lg_typecheck_setDestinationAlpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlendFunc::setDestinationAlpha(unsigned int destination) function, expected prototype:\nvoid osg::BlendFunc::setDestinationAlpha(unsigned int destination)\nClass arguments details:\n");
		}

		unsigned int destination=(unsigned int)lua_tointeger(L,2);

		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlendFunc::setDestinationAlpha(unsigned int)");
		}
		self->setDestinationAlpha(destination);

		return 0;
	}

	// unsigned int osg::BlendFunc::getDestinationAlpha() const
	static int _bind_getDestinationAlpha(lua_State *L) {
		if (!_lg_typecheck_getDestinationAlpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::BlendFunc::getDestinationAlpha() const function, expected prototype:\nunsigned int osg::BlendFunc::getDestinationAlpha() const\nClass arguments details:\n");
		}


		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::BlendFunc::getDestinationAlpha() const");
		}
		unsigned int lret = self->getDestinationAlpha();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::BlendFunc::apply(osg::State & arg1) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlendFunc::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::BlendFunc::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BlendFunc::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlendFunc::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}

	// static osg::BlendFunc::Extensions * osg::BlendFunc::getExtensions(unsigned int contextID, bool createIfNotInitalized)
	static int _bind_getExtensions(lua_State *L) {
		if (!_lg_typecheck_getExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::BlendFunc::Extensions * osg::BlendFunc::getExtensions(unsigned int contextID, bool createIfNotInitalized) function, expected prototype:\nstatic osg::BlendFunc::Extensions * osg::BlendFunc::getExtensions(unsigned int contextID, bool createIfNotInitalized)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		bool createIfNotInitalized=(bool)(lua_toboolean(L,2)==1);

		osg::BlendFunc::Extensions * lret = osg::BlendFunc::getExtensions(contextID, createIfNotInitalized);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BlendFunc::Extensions >::push(L,lret,false);

		return 1;
	}

	// static void osg::BlendFunc::setExtensions(unsigned int contextID, osg::BlendFunc::Extensions * extensions)
	static int _bind_setExtensions(lua_State *L) {
		if (!_lg_typecheck_setExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::BlendFunc::setExtensions(unsigned int contextID, osg::BlendFunc::Extensions * extensions) function, expected prototype:\nstatic void osg::BlendFunc::setExtensions(unsigned int contextID, osg::BlendFunc::Extensions * extensions)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		osg::BlendFunc::Extensions* extensions=(Luna< osg::Referenced >::checkSubType< osg::BlendFunc::Extensions >(L,2));

		osg::BlendFunc::setExtensions(contextID, extensions);

		return 0;
	}

	// void osg::BlendFunc::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlendFunc::base_setName(const std::string & name) function, expected prototype:\nvoid osg::BlendFunc::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlendFunc::base_setName(const std::string &)");
		}
		self->BlendFunc::setName(name);

		return 0;
	}

	// void osg::BlendFunc::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlendFunc::base_computeDataVariance() function, expected prototype:\nvoid osg::BlendFunc::base_computeDataVariance()\nClass arguments details:\n");
		}


		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlendFunc::base_computeDataVariance()");
		}
		self->BlendFunc::computeDataVariance();

		return 0;
	}

	// void osg::BlendFunc::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlendFunc::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::BlendFunc::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlendFunc::base_setUserData(osg::Referenced *)");
		}
		self->BlendFunc::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::BlendFunc::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::BlendFunc::base_getUserData() function, expected prototype:\nosg::Referenced * osg::BlendFunc::base_getUserData()\nClass arguments details:\n");
		}


		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::BlendFunc::base_getUserData()");
		}
		osg::Referenced * lret = self->BlendFunc::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::BlendFunc::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::BlendFunc::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::BlendFunc::base_getUserData() const\nClass arguments details:\n");
		}


		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::BlendFunc::base_getUserData() const");
		}
		const osg::Referenced * lret = self->BlendFunc::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::BlendFunc::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Texture * osg::BlendFunc::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::BlendFunc::base_asTexture() function, expected prototype:\nosg::Texture * osg::BlendFunc::base_asTexture()\nClass arguments details:\n");
		}


		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Texture * osg::BlendFunc::base_asTexture()");
		}
		osg::Texture * lret = self->BlendFunc::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::BlendFunc::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::BlendFunc::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::BlendFunc::base_asTexture() const\nClass arguments details:\n");
		}


		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::BlendFunc::base_asTexture() const");
		}
		const osg::Texture * lret = self->BlendFunc::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::BlendFunc::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// unsigned int osg::BlendFunc::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::BlendFunc::base_getMember() const function, expected prototype:\nunsigned int osg::BlendFunc::base_getMember() const\nClass arguments details:\n");
		}


		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::BlendFunc::base_getMember() const");
		}
		unsigned int lret = self->BlendFunc::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::BlendFunc::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::BlendFunc::base_isTextureAttribute() const function, expected prototype:\nbool osg::BlendFunc::base_isTextureAttribute() const\nClass arguments details:\n");
		}


		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::BlendFunc::base_isTextureAttribute() const");
		}
		bool lret = self->BlendFunc::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::BlendFunc::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::BlendFunc::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::BlendFunc::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BlendFunc::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::BlendFunc::base_checkValidityOfAssociatedModes(osg::State &) const");
		}
		bool lret = self->BlendFunc::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::BlendFunc::base_compileGLObjects(osg::State & arg1) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlendFunc::base_compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::BlendFunc::base_compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BlendFunc::base_compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlendFunc::base_compileGLObjects(osg::State &) const");
		}
		self->BlendFunc::compileGLObjects(_arg1);

		return 0;
	}

	// void osg::BlendFunc::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlendFunc::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::BlendFunc::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlendFunc::base_releaseGLObjects(osg::State *) const");
		}
		self->BlendFunc::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::BlendFunc::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::BlendFunc::base_cloneType() const function, expected prototype:\nosg::Object * osg::BlendFunc::base_cloneType() const\nClass arguments details:\n");
		}


		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::BlendFunc::base_cloneType() const");
		}
		osg::Object * lret = self->BlendFunc::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::BlendFunc::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::BlendFunc::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::BlendFunc::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BlendFunc::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::BlendFunc::base_clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->BlendFunc::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::BlendFunc::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::BlendFunc::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::BlendFunc::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::BlendFunc::base_isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->BlendFunc::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::BlendFunc::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::BlendFunc::base_libraryName() const function, expected prototype:\nconst char * osg::BlendFunc::base_libraryName() const\nClass arguments details:\n");
		}


		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::BlendFunc::base_libraryName() const");
		}
		const char * lret = self->BlendFunc::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::BlendFunc::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::BlendFunc::base_className() const function, expected prototype:\nconst char * osg::BlendFunc::base_className() const\nClass arguments details:\n");
		}


		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::BlendFunc::base_className() const");
		}
		const char * lret = self->BlendFunc::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::BlendFunc::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::BlendFunc::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osg::BlendFunc::base_getType() const\nClass arguments details:\n");
		}


		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::BlendFunc::base_getType() const");
		}
		osg::StateAttribute::Type lret = self->BlendFunc::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::BlendFunc::base_compare(const osg::StateAttribute & sa) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::BlendFunc::base_compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::BlendFunc::base_compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::BlendFunc::base_compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::BlendFunc::base_compare(const osg::StateAttribute &) const");
		}
		int lret = self->BlendFunc::compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::BlendFunc::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::BlendFunc::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::BlendFunc::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BlendFunc::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::BlendFunc::base_getModeUsage(osg::StateAttribute::ModeUsage &) const");
		}
		bool lret = self->BlendFunc::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::BlendFunc::base_apply(osg::State & arg1) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlendFunc::base_apply(osg::State & arg1) const function, expected prototype:\nvoid osg::BlendFunc::base_apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BlendFunc::base_apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::BlendFunc* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlendFunc::base_apply(osg::State &) const");
		}
		self->BlendFunc::apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::BlendFunc* LunaTraits< osg::BlendFunc >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_BlendFunc::_bind_ctor(L);
}

void LunaTraits< osg::BlendFunc >::_bind_dtor(osg::BlendFunc* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::BlendFunc >::className[] = "BlendFunc";
const char LunaTraits< osg::BlendFunc >::fullName[] = "osg::BlendFunc";
const char LunaTraits< osg::BlendFunc >::moduleName[] = "osg";
const char* LunaTraits< osg::BlendFunc >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::BlendFunc >::hash = 71741763;
const int LunaTraits< osg::BlendFunc >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::BlendFunc >::methods[] = {
	{"cloneType", &luna_wrapper_osg_BlendFunc::_bind_cloneType},
	{"clone", &luna_wrapper_osg_BlendFunc::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_BlendFunc::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_BlendFunc::_bind_libraryName},
	{"className", &luna_wrapper_osg_BlendFunc::_bind_className},
	{"getType", &luna_wrapper_osg_BlendFunc::_bind_getType},
	{"compare", &luna_wrapper_osg_BlendFunc::_bind_compare},
	{"getModeUsage", &luna_wrapper_osg_BlendFunc::_bind_getModeUsage},
	{"setFunction", &luna_wrapper_osg_BlendFunc::_bind_setFunction},
	{"setSource", &luna_wrapper_osg_BlendFunc::_bind_setSource},
	{"getSource", &luna_wrapper_osg_BlendFunc::_bind_getSource},
	{"setSourceRGB", &luna_wrapper_osg_BlendFunc::_bind_setSourceRGB},
	{"getSourceRGB", &luna_wrapper_osg_BlendFunc::_bind_getSourceRGB},
	{"setSourceAlpha", &luna_wrapper_osg_BlendFunc::_bind_setSourceAlpha},
	{"getSourceAlpha", &luna_wrapper_osg_BlendFunc::_bind_getSourceAlpha},
	{"setDestination", &luna_wrapper_osg_BlendFunc::_bind_setDestination},
	{"getDestination", &luna_wrapper_osg_BlendFunc::_bind_getDestination},
	{"setDestinationRGB", &luna_wrapper_osg_BlendFunc::_bind_setDestinationRGB},
	{"getDestinationRGB", &luna_wrapper_osg_BlendFunc::_bind_getDestinationRGB},
	{"setDestinationAlpha", &luna_wrapper_osg_BlendFunc::_bind_setDestinationAlpha},
	{"getDestinationAlpha", &luna_wrapper_osg_BlendFunc::_bind_getDestinationAlpha},
	{"apply", &luna_wrapper_osg_BlendFunc::_bind_apply},
	{"getExtensions", &luna_wrapper_osg_BlendFunc::_bind_getExtensions},
	{"setExtensions", &luna_wrapper_osg_BlendFunc::_bind_setExtensions},
	{"base_setName", &luna_wrapper_osg_BlendFunc::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_BlendFunc::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_BlendFunc::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_BlendFunc::_bind_base_getUserData},
	{"base_asTexture", &luna_wrapper_osg_BlendFunc::_bind_base_asTexture},
	{"base_getMember", &luna_wrapper_osg_BlendFunc::_bind_base_getMember},
	{"base_isTextureAttribute", &luna_wrapper_osg_BlendFunc::_bind_base_isTextureAttribute},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_BlendFunc::_bind_base_checkValidityOfAssociatedModes},
	{"base_compileGLObjects", &luna_wrapper_osg_BlendFunc::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_BlendFunc::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_BlendFunc::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_BlendFunc::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_BlendFunc::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_BlendFunc::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_BlendFunc::_bind_base_className},
	{"base_getType", &luna_wrapper_osg_BlendFunc::_bind_base_getType},
	{"base_compare", &luna_wrapper_osg_BlendFunc::_bind_base_compare},
	{"base_getModeUsage", &luna_wrapper_osg_BlendFunc::_bind_base_getModeUsage},
	{"base_apply", &luna_wrapper_osg_BlendFunc::_bind_base_apply},
	{"__eq", &luna_wrapper_osg_BlendFunc::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::BlendFunc >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_BlendFunc::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::BlendFunc >::enumValues[] = {
	{"DST_ALPHA", osg::BlendFunc::DST_ALPHA},
	{"DST_COLOR", osg::BlendFunc::DST_COLOR},
	{"ONE", osg::BlendFunc::ONE},
	{"ONE_MINUS_DST_ALPHA", osg::BlendFunc::ONE_MINUS_DST_ALPHA},
	{"ONE_MINUS_DST_COLOR", osg::BlendFunc::ONE_MINUS_DST_COLOR},
	{"ONE_MINUS_SRC_ALPHA", osg::BlendFunc::ONE_MINUS_SRC_ALPHA},
	{"ONE_MINUS_SRC_COLOR", osg::BlendFunc::ONE_MINUS_SRC_COLOR},
	{"SRC_ALPHA", osg::BlendFunc::SRC_ALPHA},
	{"SRC_ALPHA_SATURATE", osg::BlendFunc::SRC_ALPHA_SATURATE},
	{"SRC_COLOR", osg::BlendFunc::SRC_COLOR},
	{"CONSTANT_COLOR", osg::BlendFunc::CONSTANT_COLOR},
	{"ONE_MINUS_CONSTANT_COLOR", osg::BlendFunc::ONE_MINUS_CONSTANT_COLOR},
	{"CONSTANT_ALPHA", osg::BlendFunc::CONSTANT_ALPHA},
	{"ONE_MINUS_CONSTANT_ALPHA", osg::BlendFunc::ONE_MINUS_CONSTANT_ALPHA},
	{"ZERO", osg::BlendFunc::ZERO},
	{0,0}
};


