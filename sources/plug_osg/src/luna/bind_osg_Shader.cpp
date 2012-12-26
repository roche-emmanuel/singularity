#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Shader.h>

class luna_wrapper_osg_Shader {
public:
	typedef Luna< osg::Shader > luna_t;

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
		//osg::Shader* ptr= dynamic_cast< osg::Shader* >(Luna< osg::Referenced >::check(L,1));
		osg::Shader* ptr= luna_caster< osg::Referenced, osg::Shader >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Shader >::push(L,ptr,false);
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
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::ShaderBinary >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
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
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::ShaderBinary >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTypename(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFileName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFileName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setShaderSource(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getShaderSource(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setShaderBinary(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getShaderBinary_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getShaderBinary_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_loadShaderSourceFromFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addCodeInjection(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_dirtyShader(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compileShader(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_attachShader(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_detachShader(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGlShaderInfoLog(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPCS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readShaderFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_deleteGlShader(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_flushDeletedGlShaders(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_discardDeletedGlShaders(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTypeId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
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

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Shader::Shader(osg::Shader::Type type = osg::Shader::UNDEFINED)
	static osg::Shader* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Shader::Shader(osg::Shader::Type type = osg::Shader::UNDEFINED) function, expected prototype:\nosg::Shader::Shader(osg::Shader::Type type = osg::Shader::UNDEFINED)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		osg::Shader::Type type=luatop>0 ? (osg::Shader::Type)lua_tointeger(L,1) : osg::Shader::UNDEFINED;

		return new osg::Shader(type);
	}

	// osg::Shader::Shader(osg::Shader::Type type, const std::string & source)
	static osg::Shader* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Shader::Shader(osg::Shader::Type type, const std::string & source) function, expected prototype:\nosg::Shader::Shader(osg::Shader::Type type, const std::string & source)\nClass arguments details:\n");
		}

		osg::Shader::Type type=(osg::Shader::Type)lua_tointeger(L,1);
		std::string source(lua_tostring(L,2),lua_objlen(L,2));

		return new osg::Shader(type, source);
	}

	// osg::Shader::Shader(osg::Shader::Type type, osg::ShaderBinary * shaderBinary)
	static osg::Shader* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Shader::Shader(osg::Shader::Type type, osg::ShaderBinary * shaderBinary) function, expected prototype:\nosg::Shader::Shader(osg::Shader::Type type, osg::ShaderBinary * shaderBinary)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		osg::Shader::Type type=(osg::Shader::Type)lua_tointeger(L,1);
		osg::ShaderBinary* shaderBinary=(Luna< osg::Referenced >::checkSubType< osg::ShaderBinary >(L,2));

		return new osg::Shader(type, shaderBinary);
	}

	// osg::Shader::Shader(const osg::Shader & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Shader* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Shader::Shader(const osg::Shader & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Shader::Shader(const osg::Shader & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Shader* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Shader::Shader function");
		}
		const osg::Shader & rhs=*rhs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Shader::Shader function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::Shader(rhs, copyop);
	}

	// osg::Shader::Shader(lua_Table * data, osg::Shader::Type type = osg::Shader::UNDEFINED)
	static osg::Shader* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Shader::Shader(lua_Table * data, osg::Shader::Type type = osg::Shader::UNDEFINED) function, expected prototype:\nosg::Shader::Shader(lua_Table * data, osg::Shader::Type type = osg::Shader::UNDEFINED)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		osg::Shader::Type type=luatop>1 ? (osg::Shader::Type)lua_tointeger(L,2) : osg::Shader::UNDEFINED;

		return new wrapper_osg_Shader(L,NULL, type);
	}

	// osg::Shader::Shader(lua_Table * data, osg::Shader::Type type, const std::string & source)
	static osg::Shader* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Shader::Shader(lua_Table * data, osg::Shader::Type type, const std::string & source) function, expected prototype:\nosg::Shader::Shader(lua_Table * data, osg::Shader::Type type, const std::string & source)\nClass arguments details:\n");
		}

		osg::Shader::Type type=(osg::Shader::Type)lua_tointeger(L,2);
		std::string source(lua_tostring(L,3),lua_objlen(L,3));

		return new wrapper_osg_Shader(L,NULL, type, source);
	}

	// osg::Shader::Shader(lua_Table * data, osg::Shader::Type type, osg::ShaderBinary * shaderBinary)
	static osg::Shader* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Shader::Shader(lua_Table * data, osg::Shader::Type type, osg::ShaderBinary * shaderBinary) function, expected prototype:\nosg::Shader::Shader(lua_Table * data, osg::Shader::Type type, osg::ShaderBinary * shaderBinary)\nClass arguments details:\narg 3 ID = 50169651\n");
		}

		osg::Shader::Type type=(osg::Shader::Type)lua_tointeger(L,2);
		osg::ShaderBinary* shaderBinary=(Luna< osg::Referenced >::checkSubType< osg::ShaderBinary >(L,3));

		return new wrapper_osg_Shader(L,NULL, type, shaderBinary);
	}

	// osg::Shader::Shader(lua_Table * data, const osg::Shader & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Shader* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Shader::Shader(lua_Table * data, const osg::Shader & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Shader::Shader(lua_Table * data, const osg::Shader & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Shader* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Shader::Shader function");
		}
		const osg::Shader & rhs=*rhs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Shader::Shader function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_Shader(L,NULL, rhs, copyop);
	}

	// Overload binder for osg::Shader::Shader
	static osg::Shader* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);

		luaL_error(L, "error in function Shader, cannot match any of the overloads for function Shader:\n  Shader(osg::Shader::Type)\n  Shader(osg::Shader::Type, const std::string &)\n  Shader(osg::Shader::Type, osg::ShaderBinary *)\n  Shader(const osg::Shader &, const osg::CopyOp &)\n  Shader(lua_Table *, osg::Shader::Type)\n  Shader(lua_Table *, osg::Shader::Type, const std::string &)\n  Shader(lua_Table *, osg::Shader::Type, osg::ShaderBinary *)\n  Shader(lua_Table *, const osg::Shader &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Shader::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Shader::cloneType() const function, expected prototype:\nosg::Object * osg::Shader::cloneType() const\nClass arguments details:\n");
		}


		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Shader::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Shader::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Shader::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Shader::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Shader::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Shader::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Shader::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Shader::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Shader::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Shader::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Shader::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Shader::libraryName() const function, expected prototype:\nconst char * osg::Shader::libraryName() const\nClass arguments details:\n");
		}


		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Shader::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Shader::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Shader::className() const function, expected prototype:\nconst char * osg::Shader::className() const\nClass arguments details:\n");
		}


		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Shader::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// int osg::Shader::compare(const osg::Shader & rhs) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Shader::compare(const osg::Shader & rhs) const function, expected prototype:\nint osg::Shader::compare(const osg::Shader & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Shader* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Shader::compare function");
		}
		const osg::Shader & rhs=*rhs_ptr;

		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Shader::compare(const osg::Shader &) const");
		}
		int lret = self->compare(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Shader::setType(osg::Shader::Type t)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Shader::setType(osg::Shader::Type t) function, expected prototype:\nbool osg::Shader::setType(osg::Shader::Type t)\nClass arguments details:\n");
		}

		osg::Shader::Type t=(osg::Shader::Type)lua_tointeger(L,2);

		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Shader::setType(osg::Shader::Type)");
		}
		bool lret = self->setType(t);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::Shader::Type osg::Shader::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Shader::Type osg::Shader::getType() const function, expected prototype:\nosg::Shader::Type osg::Shader::getType() const\nClass arguments details:\n");
		}


		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Shader::Type osg::Shader::getType() const");
		}
		osg::Shader::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * osg::Shader::getTypename() const
	static int _bind_getTypename(lua_State *L) {
		if (!_lg_typecheck_getTypename(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Shader::getTypename() const function, expected prototype:\nconst char * osg::Shader::getTypename() const\nClass arguments details:\n");
		}


		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Shader::getTypename() const");
		}
		const char * lret = self->getTypename();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Shader::setFileName(const std::string & fileName)
	static int _bind_setFileName(lua_State *L) {
		if (!_lg_typecheck_setFileName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Shader::setFileName(const std::string & fileName) function, expected prototype:\nvoid osg::Shader::setFileName(const std::string & fileName)\nClass arguments details:\n");
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));

		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Shader::setFileName(const std::string &)");
		}
		self->setFileName(fileName);

		return 0;
	}

	// const std::string & osg::Shader::getFileName() const
	static int _bind_getFileName(lua_State *L) {
		if (!_lg_typecheck_getFileName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::string & osg::Shader::getFileName() const function, expected prototype:\nconst std::string & osg::Shader::getFileName() const\nClass arguments details:\n");
		}


		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::string & osg::Shader::getFileName() const");
		}
		const std::string & lret = self->getFileName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osg::Shader::setShaderSource(const std::string & sourceText)
	static int _bind_setShaderSource(lua_State *L) {
		if (!_lg_typecheck_setShaderSource(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Shader::setShaderSource(const std::string & sourceText) function, expected prototype:\nvoid osg::Shader::setShaderSource(const std::string & sourceText)\nClass arguments details:\n");
		}

		std::string sourceText(lua_tostring(L,2),lua_objlen(L,2));

		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Shader::setShaderSource(const std::string &)");
		}
		self->setShaderSource(sourceText);

		return 0;
	}

	// const std::string & osg::Shader::getShaderSource() const
	static int _bind_getShaderSource(lua_State *L) {
		if (!_lg_typecheck_getShaderSource(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::string & osg::Shader::getShaderSource() const function, expected prototype:\nconst std::string & osg::Shader::getShaderSource() const\nClass arguments details:\n");
		}


		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::string & osg::Shader::getShaderSource() const");
		}
		const std::string & lret = self->getShaderSource();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osg::Shader::setShaderBinary(osg::ShaderBinary * shaderBinary)
	static int _bind_setShaderBinary(lua_State *L) {
		if (!_lg_typecheck_setShaderBinary(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Shader::setShaderBinary(osg::ShaderBinary * shaderBinary) function, expected prototype:\nvoid osg::Shader::setShaderBinary(osg::ShaderBinary * shaderBinary)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ShaderBinary* shaderBinary=(Luna< osg::Referenced >::checkSubType< osg::ShaderBinary >(L,2));

		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Shader::setShaderBinary(osg::ShaderBinary *)");
		}
		self->setShaderBinary(shaderBinary);

		return 0;
	}

	// osg::ShaderBinary * osg::Shader::getShaderBinary()
	static int _bind_getShaderBinary_overload_1(lua_State *L) {
		if (!_lg_typecheck_getShaderBinary_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ShaderBinary * osg::Shader::getShaderBinary() function, expected prototype:\nosg::ShaderBinary * osg::Shader::getShaderBinary()\nClass arguments details:\n");
		}


		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ShaderBinary * osg::Shader::getShaderBinary()");
		}
		osg::ShaderBinary * lret = self->getShaderBinary();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ShaderBinary >::push(L,lret,false);

		return 1;
	}

	// const osg::ShaderBinary * osg::Shader::getShaderBinary() const
	static int _bind_getShaderBinary_overload_2(lua_State *L) {
		if (!_lg_typecheck_getShaderBinary_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::ShaderBinary * osg::Shader::getShaderBinary() const function, expected prototype:\nconst osg::ShaderBinary * osg::Shader::getShaderBinary() const\nClass arguments details:\n");
		}


		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::ShaderBinary * osg::Shader::getShaderBinary() const");
		}
		const osg::ShaderBinary * lret = self->getShaderBinary();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ShaderBinary >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Shader::getShaderBinary
	static int _bind_getShaderBinary(lua_State *L) {
		if (_lg_typecheck_getShaderBinary_overload_1(L)) return _bind_getShaderBinary_overload_1(L);
		if (_lg_typecheck_getShaderBinary_overload_2(L)) return _bind_getShaderBinary_overload_2(L);

		luaL_error(L, "error in function getShaderBinary, cannot match any of the overloads for function getShaderBinary:\n  getShaderBinary()\n  getShaderBinary()\n");
		return 0;
	}

	// bool osg::Shader::loadShaderSourceFromFile(const std::string & fileName)
	static int _bind_loadShaderSourceFromFile(lua_State *L) {
		if (!_lg_typecheck_loadShaderSourceFromFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Shader::loadShaderSourceFromFile(const std::string & fileName) function, expected prototype:\nbool osg::Shader::loadShaderSourceFromFile(const std::string & fileName)\nClass arguments details:\n");
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));

		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Shader::loadShaderSourceFromFile(const std::string &)");
		}
		bool lret = self->loadShaderSourceFromFile(fileName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Shader::addCodeInjection(float position, const std::string & code)
	static int _bind_addCodeInjection(lua_State *L) {
		if (!_lg_typecheck_addCodeInjection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Shader::addCodeInjection(float position, const std::string & code) function, expected prototype:\nvoid osg::Shader::addCodeInjection(float position, const std::string & code)\nClass arguments details:\n");
		}

		float position=(float)lua_tonumber(L,2);
		std::string code(lua_tostring(L,3),lua_objlen(L,3));

		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Shader::addCodeInjection(float, const std::string &)");
		}
		self->addCodeInjection(position, code);

		return 0;
	}

	// void osg::Shader::releaseGLObjects(osg::State * state = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Shader::releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::Shader::releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Shader::releaseGLObjects(osg::State *) const");
		}
		self->releaseGLObjects(state);

		return 0;
	}

	// void osg::Shader::dirtyShader()
	static int _bind_dirtyShader(lua_State *L) {
		if (!_lg_typecheck_dirtyShader(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Shader::dirtyShader() function, expected prototype:\nvoid osg::Shader::dirtyShader()\nClass arguments details:\n");
		}


		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Shader::dirtyShader()");
		}
		self->dirtyShader();

		return 0;
	}

	// void osg::Shader::compileShader(osg::State & state) const
	static int _bind_compileShader(lua_State *L) {
		if (!_lg_typecheck_compileShader(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Shader::compileShader(osg::State & state) const function, expected prototype:\nvoid osg::Shader::compileShader(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Shader::compileShader function");
		}
		osg::State & state=*state_ptr;

		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Shader::compileShader(osg::State &) const");
		}
		self->compileShader(state);

		return 0;
	}

	// void osg::Shader::attachShader(unsigned int contextID, unsigned int program) const
	static int _bind_attachShader(lua_State *L) {
		if (!_lg_typecheck_attachShader(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Shader::attachShader(unsigned int contextID, unsigned int program) const function, expected prototype:\nvoid osg::Shader::attachShader(unsigned int contextID, unsigned int program) const\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);
		unsigned int program=(unsigned int)lua_tointeger(L,3);

		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Shader::attachShader(unsigned int, unsigned int) const");
		}
		self->attachShader(contextID, program);

		return 0;
	}

	// void osg::Shader::detachShader(unsigned int contextID, unsigned int program) const
	static int _bind_detachShader(lua_State *L) {
		if (!_lg_typecheck_detachShader(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Shader::detachShader(unsigned int contextID, unsigned int program) const function, expected prototype:\nvoid osg::Shader::detachShader(unsigned int contextID, unsigned int program) const\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);
		unsigned int program=(unsigned int)lua_tointeger(L,3);

		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Shader::detachShader(unsigned int, unsigned int) const");
		}
		self->detachShader(contextID, program);

		return 0;
	}

	// bool osg::Shader::getGlShaderInfoLog(unsigned int contextID, std::string & log) const
	static int _bind_getGlShaderInfoLog(lua_State *L) {
		if (!_lg_typecheck_getGlShaderInfoLog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Shader::getGlShaderInfoLog(unsigned int contextID, std::string & log) const function, expected prototype:\nbool osg::Shader::getGlShaderInfoLog(unsigned int contextID, std::string & log) const\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);
		std::string log(lua_tostring(L,3),lua_objlen(L,3));

		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Shader::getGlShaderInfoLog(unsigned int, std::string &) const");
		}
		bool lret = self->getGlShaderInfoLog(contextID, log);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::Shader::PerContextShader * osg::Shader::getPCS(unsigned int contextID) const
	static int _bind_getPCS(lua_State *L) {
		if (!_lg_typecheck_getPCS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Shader::PerContextShader * osg::Shader::getPCS(unsigned int contextID) const function, expected prototype:\nosg::Shader::PerContextShader * osg::Shader::getPCS(unsigned int contextID) const\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Shader::PerContextShader * osg::Shader::getPCS(unsigned int) const");
		}
		osg::Shader::PerContextShader * lret = self->getPCS(contextID);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Shader::PerContextShader >::push(L,lret,false);

		return 1;
	}

	// static osg::Shader * osg::Shader::readShaderFile(osg::Shader::Type type, const std::string & fileName)
	static int _bind_readShaderFile(lua_State *L) {
		if (!_lg_typecheck_readShaderFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::Shader * osg::Shader::readShaderFile(osg::Shader::Type type, const std::string & fileName) function, expected prototype:\nstatic osg::Shader * osg::Shader::readShaderFile(osg::Shader::Type type, const std::string & fileName)\nClass arguments details:\n");
		}

		osg::Shader::Type type=(osg::Shader::Type)lua_tointeger(L,1);
		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));

		osg::Shader * lret = osg::Shader::readShaderFile(type, fileName);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Shader >::push(L,lret,false);

		return 1;
	}

	// static void osg::Shader::deleteGlShader(unsigned int contextID, unsigned int shader)
	static int _bind_deleteGlShader(lua_State *L) {
		if (!_lg_typecheck_deleteGlShader(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::Shader::deleteGlShader(unsigned int contextID, unsigned int shader) function, expected prototype:\nstatic void osg::Shader::deleteGlShader(unsigned int contextID, unsigned int shader)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		unsigned int shader=(unsigned int)lua_tointeger(L,2);

		osg::Shader::deleteGlShader(contextID, shader);

		return 0;
	}

	// static void osg::Shader::flushDeletedGlShaders(unsigned int contextID, double currentTime, double & availableTime)
	static int _bind_flushDeletedGlShaders(lua_State *L) {
		if (!_lg_typecheck_flushDeletedGlShaders(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::Shader::flushDeletedGlShaders(unsigned int contextID, double currentTime, double & availableTime) function, expected prototype:\nstatic void osg::Shader::flushDeletedGlShaders(unsigned int contextID, double currentTime, double & availableTime)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		double currentTime=(double)lua_tonumber(L,2);
		double availableTime=(double)lua_tonumber(L,3);

		osg::Shader::flushDeletedGlShaders(contextID, currentTime, availableTime);

		return 0;
	}

	// static void osg::Shader::discardDeletedGlShaders(unsigned int contextID)
	static int _bind_discardDeletedGlShaders(lua_State *L) {
		if (!_lg_typecheck_discardDeletedGlShaders(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::Shader::discardDeletedGlShaders(unsigned int contextID) function, expected prototype:\nstatic void osg::Shader::discardDeletedGlShaders(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::Shader::discardDeletedGlShaders(contextID);

		return 0;
	}

	// static osg::Shader::Type osg::Shader::getTypeId(const std::string & tname)
	static int _bind_getTypeId(lua_State *L) {
		if (!_lg_typecheck_getTypeId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::Shader::Type osg::Shader::getTypeId(const std::string & tname) function, expected prototype:\nstatic osg::Shader::Type osg::Shader::getTypeId(const std::string & tname)\nClass arguments details:\n");
		}

		std::string tname(lua_tostring(L,1),lua_objlen(L,1));

		osg::Shader::Type lret = osg::Shader::getTypeId(tname);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Shader::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Shader::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Shader::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Shader::base_setName(const std::string &)");
		}
		self->Shader::setName(name);

		return 0;
	}

	// void osg::Shader::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Shader::base_computeDataVariance() function, expected prototype:\nvoid osg::Shader::base_computeDataVariance()\nClass arguments details:\n");
		}


		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Shader::base_computeDataVariance()");
		}
		self->Shader::computeDataVariance();

		return 0;
	}

	// void osg::Shader::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Shader::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Shader::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Shader::base_setUserData(osg::Referenced *)");
		}
		self->Shader::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Shader::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Shader::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Shader::base_getUserData()\nClass arguments details:\n");
		}


		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Shader::base_getUserData()");
		}
		osg::Referenced * lret = self->Shader::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Shader::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Shader::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Shader::base_getUserData() const\nClass arguments details:\n");
		}


		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Shader::base_getUserData() const");
		}
		const osg::Referenced * lret = self->Shader::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Shader::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Object * osg::Shader::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Shader::base_cloneType() const function, expected prototype:\nosg::Object * osg::Shader::base_cloneType() const\nClass arguments details:\n");
		}


		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Shader::base_cloneType() const");
		}
		osg::Object * lret = self->Shader::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Shader::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Shader::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Shader::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Shader::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Shader::base_clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->Shader::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Shader::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Shader::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Shader::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Shader::base_isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->Shader::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Shader::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Shader::base_libraryName() const function, expected prototype:\nconst char * osg::Shader::base_libraryName() const\nClass arguments details:\n");
		}


		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Shader::base_libraryName() const");
		}
		const char * lret = self->Shader::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Shader::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Shader::base_className() const function, expected prototype:\nconst char * osg::Shader::base_className() const\nClass arguments details:\n");
		}


		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Shader::base_className() const");
		}
		const char * lret = self->Shader::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Shader::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Shader::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::Shader::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Shader* self=Luna< osg::Referenced >::checkSubType< osg::Shader >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Shader::base_releaseGLObjects(osg::State *) const");
		}
		self->Shader::releaseGLObjects(state);

		return 0;
	}


	// Operator binds:

};

osg::Shader* LunaTraits< osg::Shader >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Shader::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::Shader >::_bind_dtor(osg::Shader* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Shader >::className[] = "Shader";
const char LunaTraits< osg::Shader >::fullName[] = "osg::Shader";
const char LunaTraits< osg::Shader >::moduleName[] = "osg";
const char* LunaTraits< osg::Shader >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::Shader >::hash = 78269727;
const int LunaTraits< osg::Shader >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Shader >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Shader::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Shader::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Shader::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Shader::_bind_libraryName},
	{"className", &luna_wrapper_osg_Shader::_bind_className},
	{"compare", &luna_wrapper_osg_Shader::_bind_compare},
	{"setType", &luna_wrapper_osg_Shader::_bind_setType},
	{"getType", &luna_wrapper_osg_Shader::_bind_getType},
	{"getTypename", &luna_wrapper_osg_Shader::_bind_getTypename},
	{"setFileName", &luna_wrapper_osg_Shader::_bind_setFileName},
	{"getFileName", &luna_wrapper_osg_Shader::_bind_getFileName},
	{"setShaderSource", &luna_wrapper_osg_Shader::_bind_setShaderSource},
	{"getShaderSource", &luna_wrapper_osg_Shader::_bind_getShaderSource},
	{"setShaderBinary", &luna_wrapper_osg_Shader::_bind_setShaderBinary},
	{"getShaderBinary", &luna_wrapper_osg_Shader::_bind_getShaderBinary},
	{"loadShaderSourceFromFile", &luna_wrapper_osg_Shader::_bind_loadShaderSourceFromFile},
	{"addCodeInjection", &luna_wrapper_osg_Shader::_bind_addCodeInjection},
	{"releaseGLObjects", &luna_wrapper_osg_Shader::_bind_releaseGLObjects},
	{"dirtyShader", &luna_wrapper_osg_Shader::_bind_dirtyShader},
	{"compileShader", &luna_wrapper_osg_Shader::_bind_compileShader},
	{"attachShader", &luna_wrapper_osg_Shader::_bind_attachShader},
	{"detachShader", &luna_wrapper_osg_Shader::_bind_detachShader},
	{"getGlShaderInfoLog", &luna_wrapper_osg_Shader::_bind_getGlShaderInfoLog},
	{"getPCS", &luna_wrapper_osg_Shader::_bind_getPCS},
	{"readShaderFile", &luna_wrapper_osg_Shader::_bind_readShaderFile},
	{"deleteGlShader", &luna_wrapper_osg_Shader::_bind_deleteGlShader},
	{"flushDeletedGlShaders", &luna_wrapper_osg_Shader::_bind_flushDeletedGlShaders},
	{"discardDeletedGlShaders", &luna_wrapper_osg_Shader::_bind_discardDeletedGlShaders},
	{"getTypeId", &luna_wrapper_osg_Shader::_bind_getTypeId},
	{"base_setName", &luna_wrapper_osg_Shader::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Shader::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Shader::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Shader::_bind_base_getUserData},
	{"base_cloneType", &luna_wrapper_osg_Shader::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Shader::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_Shader::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_Shader::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_Shader::_bind_base_className},
	{"base_releaseGLObjects", &luna_wrapper_osg_Shader::_bind_base_releaseGLObjects},
	{"__eq", &luna_wrapper_osg_Shader::_bind___eq},
	{"getTable", &luna_wrapper_osg_Shader::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Shader >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Shader::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Shader >::enumValues[] = {
	{"VERTEX", osg::Shader::VERTEX},
	{"TESSCONTROL", osg::Shader::TESSCONTROL},
	{"TESSEVALUATION", osg::Shader::TESSEVALUATION},
	{"GEOMETRY", osg::Shader::GEOMETRY},
	{"FRAGMENT", osg::Shader::FRAGMENT},
	{"UNDEFINED", osg::Shader::UNDEFINED},
	{0,0}
};


