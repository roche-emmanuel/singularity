#include <plug_common.h>

class luna_wrapper_osgDB_ReaderWriter_WriteResult {
public:
	typedef Luna< osgDB::ReaderWriter::WriteResult > luna_t;

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::ReaderWriter::WriteResult* self=(Luna< osgDB::ReaderWriter::WriteResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::ReaderWriter::WriteResult");
		
		return luna_dynamicCast(L,converters,"osgDB::ReaderWriter::WriteResult",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,54653644) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_message_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_message_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_status(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_success(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_error(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_notHandled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::ReaderWriter::WriteResult::WriteResult(const std::string & m)
	static osgDB::ReaderWriter::WriteResult* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult::WriteResult(const std::string & m) function, expected prototype:\nosgDB::ReaderWriter::WriteResult::WriteResult(const std::string & m)\nClass arguments details:\n");
		}

		std::string m(lua_tostring(L,1),lua_objlen(L,1));

		return new osgDB::ReaderWriter::WriteResult(m);
	}

	// osgDB::ReaderWriter::WriteResult::WriteResult(const osgDB::ReaderWriter::WriteResult & rr)
	static osgDB::ReaderWriter::WriteResult* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult::WriteResult(const osgDB::ReaderWriter::WriteResult & rr) function, expected prototype:\nosgDB::ReaderWriter::WriteResult::WriteResult(const osgDB::ReaderWriter::WriteResult & rr)\nClass arguments details:\narg 1 ID = 54653644\n");
		}

		const osgDB::ReaderWriter::WriteResult* rr_ptr=(Luna< osgDB::ReaderWriter::WriteResult >::check(L,1));
		if( !rr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rr in osgDB::ReaderWriter::WriteResult::WriteResult function");
		}
		const osgDB::ReaderWriter::WriteResult & rr=*rr_ptr;

		return new osgDB::ReaderWriter::WriteResult(rr);
	}

	// Overload binder for osgDB::ReaderWriter::WriteResult::WriteResult
	static osgDB::ReaderWriter::WriteResult* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function WriteResult, cannot match any of the overloads for function WriteResult:\n  WriteResult(const std::string &)\n  WriteResult(const osgDB::ReaderWriter::WriteResult &)\n");
		return NULL;
	}


	// Function binds:
	// std::string & osgDB::ReaderWriter::WriteResult::message()
	static int _bind_message_overload_1(lua_State *L) {
		if (!_lg_typecheck_message_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string & osgDB::ReaderWriter::WriteResult::message() function, expected prototype:\nstd::string & osgDB::ReaderWriter::WriteResult::message()\nClass arguments details:\n");
		}


		osgDB::ReaderWriter::WriteResult* self=(Luna< osgDB::ReaderWriter::WriteResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string & osgDB::ReaderWriter::WriteResult::message()");
		}
		std::string & lret = self->message();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const std::string & osgDB::ReaderWriter::WriteResult::message() const
	static int _bind_message_overload_2(lua_State *L) {
		if (!_lg_typecheck_message_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::string & osgDB::ReaderWriter::WriteResult::message() const function, expected prototype:\nconst std::string & osgDB::ReaderWriter::WriteResult::message() const\nClass arguments details:\n");
		}


		osgDB::ReaderWriter::WriteResult* self=(Luna< osgDB::ReaderWriter::WriteResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::string & osgDB::ReaderWriter::WriteResult::message() const");
		}
		const std::string & lret = self->message();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// Overload binder for osgDB::ReaderWriter::WriteResult::message
	static int _bind_message(lua_State *L) {
		if (_lg_typecheck_message_overload_1(L)) return _bind_message_overload_1(L);
		if (_lg_typecheck_message_overload_2(L)) return _bind_message_overload_2(L);

		luaL_error(L, "error in function message, cannot match any of the overloads for function message:\n  message()\n  message()\n");
		return 0;
	}

	// osgDB::ReaderWriter::WriteResult::WriteStatus osgDB::ReaderWriter::WriteResult::status() const
	static int _bind_status(lua_State *L) {
		if (!_lg_typecheck_status(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult::WriteStatus osgDB::ReaderWriter::WriteResult::status() const function, expected prototype:\nosgDB::ReaderWriter::WriteResult::WriteStatus osgDB::ReaderWriter::WriteResult::status() const\nClass arguments details:\n");
		}


		osgDB::ReaderWriter::WriteResult* self=(Luna< osgDB::ReaderWriter::WriteResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult::WriteStatus osgDB::ReaderWriter::WriteResult::status() const");
		}
		osgDB::ReaderWriter::WriteResult::WriteStatus lret = self->status();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgDB::ReaderWriter::WriteResult::success() const
	static int _bind_success(lua_State *L) {
		if (!_lg_typecheck_success(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::ReaderWriter::WriteResult::success() const function, expected prototype:\nbool osgDB::ReaderWriter::WriteResult::success() const\nClass arguments details:\n");
		}


		osgDB::ReaderWriter::WriteResult* self=(Luna< osgDB::ReaderWriter::WriteResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::ReaderWriter::WriteResult::success() const");
		}
		bool lret = self->success();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::ReaderWriter::WriteResult::error() const
	static int _bind_error(lua_State *L) {
		if (!_lg_typecheck_error(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::ReaderWriter::WriteResult::error() const function, expected prototype:\nbool osgDB::ReaderWriter::WriteResult::error() const\nClass arguments details:\n");
		}


		osgDB::ReaderWriter::WriteResult* self=(Luna< osgDB::ReaderWriter::WriteResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::ReaderWriter::WriteResult::error() const");
		}
		bool lret = self->error();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::ReaderWriter::WriteResult::notHandled() const
	static int _bind_notHandled(lua_State *L) {
		if (!_lg_typecheck_notHandled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::ReaderWriter::WriteResult::notHandled() const function, expected prototype:\nbool osgDB::ReaderWriter::WriteResult::notHandled() const\nClass arguments details:\n");
		}


		osgDB::ReaderWriter::WriteResult* self=(Luna< osgDB::ReaderWriter::WriteResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::ReaderWriter::WriteResult::notHandled() const");
		}
		bool lret = self->notHandled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgDB::ReaderWriter::WriteResult* LunaTraits< osgDB::ReaderWriter::WriteResult >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_ReaderWriter_WriteResult::_bind_ctor(L);
}

void LunaTraits< osgDB::ReaderWriter::WriteResult >::_bind_dtor(osgDB::ReaderWriter::WriteResult* obj) {
	delete obj;
}

const char LunaTraits< osgDB::ReaderWriter::WriteResult >::className[] = "WriteResult";
const char LunaTraits< osgDB::ReaderWriter::WriteResult >::fullName[] = "osgDB::ReaderWriter::WriteResult";
const char LunaTraits< osgDB::ReaderWriter::WriteResult >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ReaderWriter::WriteResult >::parents[] = {0};
const int LunaTraits< osgDB::ReaderWriter::WriteResult >::hash = 54653644;
const int LunaTraits< osgDB::ReaderWriter::WriteResult >::uniqueIDs[] = {54653644,0};

luna_RegType LunaTraits< osgDB::ReaderWriter::WriteResult >::methods[] = {
	{"message", &luna_wrapper_osgDB_ReaderWriter_WriteResult::_bind_message},
	{"status", &luna_wrapper_osgDB_ReaderWriter_WriteResult::_bind_status},
	{"success", &luna_wrapper_osgDB_ReaderWriter_WriteResult::_bind_success},
	{"error", &luna_wrapper_osgDB_ReaderWriter_WriteResult::_bind_error},
	{"notHandled", &luna_wrapper_osgDB_ReaderWriter_WriteResult::_bind_notHandled},
	{"dynCast", &luna_wrapper_osgDB_ReaderWriter_WriteResult::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ReaderWriter::WriteResult >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ReaderWriter::WriteResult >::enumValues[] = {
	{"NOT_IMPLEMENTED", osgDB::ReaderWriter::WriteResult::NOT_IMPLEMENTED},
	{"FILE_NOT_HANDLED", osgDB::ReaderWriter::WriteResult::FILE_NOT_HANDLED},
	{"FILE_SAVED", osgDB::ReaderWriter::WriteResult::FILE_SAVED},
	{"ERROR_IN_WRITING_FILE", osgDB::ReaderWriter::WriteResult::ERROR_IN_WRITING_FILE},
	{0,0}
};

