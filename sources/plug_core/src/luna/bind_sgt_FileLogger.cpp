#include <plug_common.h>

class luna_wrapper_sgt_FileLogger {
public:
	typedef Luna< sgt::FileLogger > luna_t;

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
		sgt::FileLogger* ptr= dynamic_cast< sgt::FileLogger* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::FileLogger >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_output(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_init(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFilename(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAppending(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::FileLogger::FileLogger()
	static sgt::FileLogger* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::FileLogger::FileLogger() function, expected prototype:\nsgt::FileLogger::FileLogger()\nClass arguments details:\n");
		}


		return new sgt::FileLogger();
	}

	// sgt::FileLogger::FileLogger(const std::string & filename, bool append = false, const std::string & name = "")
	static sgt::FileLogger* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::FileLogger::FileLogger(const std::string & filename, bool append = false, const std::string & name = \"\") function, expected prototype:\nsgt::FileLogger::FileLogger(const std::string & filename, bool append = false, const std::string & name = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		std::string filename(lua_tostring(L,1),lua_objlen(L,1));
		bool append=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : false;
		std::string name(lua_tostring(L,3),lua_objlen(L,3));

		return new sgt::FileLogger(filename, append, name);
	}

	// Overload binder for sgt::FileLogger::FileLogger
	static sgt::FileLogger* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function FileLogger, cannot match any of the overloads for function FileLogger:\n  FileLogger()\n  FileLogger(const std::string &, bool, const std::string &)\n");
		return NULL;
	}


	// Function binds:
	// void sgt::FileLogger::output(int level, std::string trace, std::string msg)
	static int _bind_output(lua_State *L) {
		if (!_lg_typecheck_output(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::FileLogger::output(int level, std::string trace, std::string msg) function, expected prototype:\nvoid sgt::FileLogger::output(int level, std::string trace, std::string msg)\nClass arguments details:\n");
		}

		int level=(int)lua_tointeger(L,2);
		std::string trace(lua_tostring(L,3),lua_objlen(L,3));
		std::string msg(lua_tostring(L,4),lua_objlen(L,4));

		sgt::FileLogger* self=dynamic_cast< sgt::FileLogger* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::FileLogger::output(int, std::string, std::string)");
		}
		self->output(level, trace, msg);

		return 0;
	}

	// bool sgt::FileLogger::init(const std::string & filename, bool append = false)
	static int _bind_init(lua_State *L) {
		if (!_lg_typecheck_init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::FileLogger::init(const std::string & filename, bool append = false) function, expected prototype:\nbool sgt::FileLogger::init(const std::string & filename, bool append = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		bool append=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		sgt::FileLogger* self=dynamic_cast< sgt::FileLogger* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::FileLogger::init(const std::string &, bool)");
		}
		bool lret = self->init(filename, append);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// std::string sgt::FileLogger::getFilename()
	static int _bind_getFilename(lua_State *L) {
		if (!_lg_typecheck_getFilename(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string sgt::FileLogger::getFilename() function, expected prototype:\nstd::string sgt::FileLogger::getFilename()\nClass arguments details:\n");
		}


		sgt::FileLogger* self=dynamic_cast< sgt::FileLogger* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string sgt::FileLogger::getFilename()");
		}
		std::string lret = self->getFilename();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool sgt::FileLogger::getAppending()
	static int _bind_getAppending(lua_State *L) {
		if (!_lg_typecheck_getAppending(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::FileLogger::getAppending() function, expected prototype:\nbool sgt::FileLogger::getAppending()\nClass arguments details:\n");
		}


		sgt::FileLogger* self=dynamic_cast< sgt::FileLogger* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::FileLogger::getAppending()");
		}
		bool lret = self->getAppending();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

sgt::FileLogger* LunaTraits< sgt::FileLogger >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_FileLogger::_bind_ctor(L);
}

void LunaTraits< sgt::FileLogger >::_bind_dtor(sgt::FileLogger* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< sgt::FileLogger >::className[] = "FileLogger";
const char LunaTraits< sgt::FileLogger >::fullName[] = "sgt::FileLogger";
const char LunaTraits< sgt::FileLogger >::moduleName[] = "sgt";
const char* LunaTraits< sgt::FileLogger >::parents[] = {"sgt.LogSink", 0};
const int LunaTraits< sgt::FileLogger >::hash = 37776665;
const int LunaTraits< sgt::FileLogger >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< sgt::FileLogger >::methods[] = {
	{"output", &luna_wrapper_sgt_FileLogger::_bind_output},
	{"init", &luna_wrapper_sgt_FileLogger::_bind_init},
	{"getFilename", &luna_wrapper_sgt_FileLogger::_bind_getFilename},
	{"getAppending", &luna_wrapper_sgt_FileLogger::_bind_getAppending},
	{"__eq", &luna_wrapper_sgt_FileLogger::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::FileLogger >::converters[] = {
	{"osg::Referenced", &luna_wrapper_sgt_FileLogger::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::FileLogger >::enumValues[] = {
	{0,0}
};


