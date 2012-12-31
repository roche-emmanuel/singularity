#include <plug_common.h>

#include <osg/Referenced>

// Function checkers:
inline static bool _lg_typecheck_doLog(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_doLogV(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_doTrace(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( lua_isstring(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_doTraceV(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( lua_isstring(L,3)==0 ) return false;
	return true;
}


// Function binds:
// void doLog(int level, const std::string & msg)
static int _bind_doLog(lua_State *L) {
	if (!_lg_typecheck_doLog(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void doLog(int level, const std::string & msg) function, expected prototype:\nvoid doLog(int level, const std::string & msg)\nClass arguments details:\n");
	}

	int level=(int)lua_tointeger(L,1);
	std::string msg(lua_tostring(L,2),lua_objlen(L,2));

	doLog(level, msg);

	return 0;
}

// void doLogV(int level, const std::string & msg)
static int _bind_doLogV(lua_State *L) {
	if (!_lg_typecheck_doLogV(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void doLogV(int level, const std::string & msg) function, expected prototype:\nvoid doLogV(int level, const std::string & msg)\nClass arguments details:\n");
	}

	int level=(int)lua_tointeger(L,1);
	std::string msg(lua_tostring(L,2),lua_objlen(L,2));

	doLogV(level, msg);

	return 0;
}

// void doTrace(int level, const std::string & trace, const std::string & msg)
static int _bind_doTrace(lua_State *L) {
	if (!_lg_typecheck_doTrace(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void doTrace(int level, const std::string & trace, const std::string & msg) function, expected prototype:\nvoid doTrace(int level, const std::string & trace, const std::string & msg)\nClass arguments details:\n");
	}

	int level=(int)lua_tointeger(L,1);
	std::string trace(lua_tostring(L,2),lua_objlen(L,2));
	std::string msg(lua_tostring(L,3),lua_objlen(L,3));

	doTrace(level, trace, msg);

	return 0;
}

// void doTraceV(int level, const std::string & trace, const std::string & msg)
static int _bind_doTraceV(lua_State *L) {
	if (!_lg_typecheck_doTraceV(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void doTraceV(int level, const std::string & trace, const std::string & msg) function, expected prototype:\nvoid doTraceV(int level, const std::string & trace, const std::string & msg)\nClass arguments details:\n");
	}

	int level=(int)lua_tointeger(L,1);
	std::string trace(lua_tostring(L,2),lua_objlen(L,2));
	std::string msg(lua_tostring(L,3),lua_objlen(L,3));

	doTraceV(level, trace, msg);

	return 0;
}


// Function checkers:
inline static bool _lg_typecheck_intrusive_ptr_add_ref(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_intrusive_ptr_release(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
	return true;
}


// Function binds:
// void osg::intrusive_ptr_add_ref(osg::Referenced * p)
static int _bind_intrusive_ptr_add_ref(lua_State *L) {
	if (!_lg_typecheck_intrusive_ptr_add_ref(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osg::intrusive_ptr_add_ref(osg::Referenced * p) function, expected prototype:\nvoid osg::intrusive_ptr_add_ref(osg::Referenced * p)\nClass arguments details:\narg 1 ID = 50169651\n");
	}

	osg::Referenced* p=(Luna< osg::Referenced >::check(L,1));

	intrusive_ptr_add_ref(p);

	return 0;
}

// void osg::intrusive_ptr_release(osg::Referenced * p)
static int _bind_intrusive_ptr_release(lua_State *L) {
	if (!_lg_typecheck_intrusive_ptr_release(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osg::intrusive_ptr_release(osg::Referenced * p) function, expected prototype:\nvoid osg::intrusive_ptr_release(osg::Referenced * p)\nClass arguments details:\narg 1 ID = 50169651\n");
	}

	osg::Referenced* p=(Luna< osg::Referenced >::check(L,1));

	intrusive_ptr_release(p);

	return 0;
}


#ifdef __cplusplus
extern "C" {
#endif

void register_global_functions(lua_State* L) {
	luna_pushModule(L,"sgt");
	lua_pushcfunction(L, _bind_doLog); lua_setfield(L,-2,"doLog");
	lua_pushcfunction(L, _bind_doLogV); lua_setfield(L,-2,"doLogV");
	lua_pushcfunction(L, _bind_doTrace); lua_setfield(L,-2,"doTrace");
	lua_pushcfunction(L, _bind_doTraceV); lua_setfield(L,-2,"doTraceV");
	luna_popModule(L);
	luna_pushModule(L,"osg");
	lua_pushcfunction(L, _bind_intrusive_ptr_add_ref); lua_setfield(L,-2,"intrusive_ptr_add_ref");
	lua_pushcfunction(L, _bind_intrusive_ptr_release); lua_setfield(L,-2,"intrusive_ptr_release");
	luna_popModule(L);
}

#ifdef __cplusplus
}
#endif

