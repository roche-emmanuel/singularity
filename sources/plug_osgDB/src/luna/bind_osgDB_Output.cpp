#include <plug_common.h>

class luna_wrapper_osgDB_Output {
public:
	typedef Luna< osgDB::Output > luna_t;

	// Derived class converters:
	static int _cast_from_ofstream(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgDB::Output* ptr= dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::Output >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setOptions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOptions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWriteOutDefaultValues(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWriteOutDefaultValues(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_open(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_indent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_wrapString_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_wrapString_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIndentStep(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getIndentStep(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setIndent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getIndent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNumIndicesPerLine(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumIndicesPerLine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_moveIn(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_moveOut(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_writeObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeBeginObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeEndObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_writeUseID(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeUniqueID(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniqueIDForObject(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createUniqueIDForObject(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_registerUniqueIDForObject(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPathNameHint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPathNameHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFileNameForOutput(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFileName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setOutputTextureFiles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOutputTextureFiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTextureFileNameForOutput(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setOutputShaderFiles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOutputShaderFiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getShaderFileNameForOutput(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setExternalFileWritten(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getExternalFileWritten(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::Output::Output()
	static osgDB::Output* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::Output::Output() function, expected prototype:\nosgDB::Output::Output()\nClass arguments details:\n");
		}


		return new osgDB::Output();
	}

	// osgDB::Output::Output(const char * name)
	static osgDB::Output* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::Output::Output(const char * name) function, expected prototype:\nosgDB::Output::Output(const char * name)\nClass arguments details:\n");
		}

		const char * name=(const char *)lua_tostring(L,1);

		return new osgDB::Output(name);
	}

	// Overload binder for osgDB::Output::Output
	static osgDB::Output* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Output, cannot match any of the overloads for function Output:\n  Output()\n  Output(const char *)\n");
		return NULL;
	}


	// Function binds:
	// void osgDB::Output::setOptions(const osgDB::Options * options)
	static int _bind_setOptions(lua_State *L) {
		if (!_lg_typecheck_setOptions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Output::setOptions(const osgDB::Options * options) function, expected prototype:\nvoid osgDB::Output::setOptions(const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osgDB::Options* options=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,2));

		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Output::setOptions(const osgDB::Options *)");
		}
		self->setOptions(options);

		return 0;
	}

	// const osgDB::Options * osgDB::Output::getOptions() const
	static int _bind_getOptions(lua_State *L) {
		if (!_lg_typecheck_getOptions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgDB::Options * osgDB::Output::getOptions() const function, expected prototype:\nconst osgDB::Options * osgDB::Output::getOptions() const\nClass arguments details:\n");
		}


		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgDB::Options * osgDB::Output::getOptions() const");
		}
		const osgDB::Options * lret = self->getOptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::Options >::push(L,lret,false);

		return 1;
	}

	// void osgDB::Output::setWriteOutDefaultValues(bool flag)
	static int _bind_setWriteOutDefaultValues(lua_State *L) {
		if (!_lg_typecheck_setWriteOutDefaultValues(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Output::setWriteOutDefaultValues(bool flag) function, expected prototype:\nvoid osgDB::Output::setWriteOutDefaultValues(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Output::setWriteOutDefaultValues(bool)");
		}
		self->setWriteOutDefaultValues(flag);

		return 0;
	}

	// bool osgDB::Output::getWriteOutDefaultValues() const
	static int _bind_getWriteOutDefaultValues(lua_State *L) {
		if (!_lg_typecheck_getWriteOutDefaultValues(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::Output::getWriteOutDefaultValues() const function, expected prototype:\nbool osgDB::Output::getWriteOutDefaultValues() const\nClass arguments details:\n");
		}


		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::Output::getWriteOutDefaultValues() const");
		}
		bool lret = self->getWriteOutDefaultValues();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::Output::open(const char * name)
	static int _bind_open(lua_State *L) {
		if (!_lg_typecheck_open(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Output::open(const char * name) function, expected prototype:\nvoid osgDB::Output::open(const char * name)\nClass arguments details:\n");
		}

		const char * name=(const char *)lua_tostring(L,2);

		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Output::open(const char *)");
		}
		self->open(name);

		return 0;
	}

	// osgDB::Output & osgDB::Output::indent()
	static int _bind_indent(lua_State *L) {
		if (!_lg_typecheck_indent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::Output & osgDB::Output::indent() function, expected prototype:\nosgDB::Output & osgDB::Output::indent()\nClass arguments details:\n");
		}


		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::Output & osgDB::Output::indent()");
		}
		const osgDB::Output* lret = &self->indent();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::Output >::push(L,lret,false);

		return 1;
	}

	// std::string osgDB::Output::wrapString(const char * str)
	static int _bind_wrapString_overload_1(lua_State *L) {
		if (!_lg_typecheck_wrapString_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string osgDB::Output::wrapString(const char * str) function, expected prototype:\nstd::string osgDB::Output::wrapString(const char * str)\nClass arguments details:\n");
		}

		const char * str=(const char *)lua_tostring(L,2);

		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string osgDB::Output::wrapString(const char *)");
		}
		std::string lret = self->wrapString(str);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// std::string osgDB::Output::wrapString(const std::string & str)
	static int _bind_wrapString_overload_2(lua_State *L) {
		if (!_lg_typecheck_wrapString_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string osgDB::Output::wrapString(const std::string & str) function, expected prototype:\nstd::string osgDB::Output::wrapString(const std::string & str)\nClass arguments details:\n");
		}

		std::string str(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string osgDB::Output::wrapString(const std::string &)");
		}
		std::string lret = self->wrapString(str);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// Overload binder for osgDB::Output::wrapString
	static int _bind_wrapString(lua_State *L) {
		if (_lg_typecheck_wrapString_overload_1(L)) return _bind_wrapString_overload_1(L);
		if (_lg_typecheck_wrapString_overload_2(L)) return _bind_wrapString_overload_2(L);

		luaL_error(L, "error in function wrapString, cannot match any of the overloads for function wrapString:\n  wrapString(const char *)\n  wrapString(const std::string &)\n");
		return 0;
	}

	// void osgDB::Output::setIndentStep(int step)
	static int _bind_setIndentStep(lua_State *L) {
		if (!_lg_typecheck_setIndentStep(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Output::setIndentStep(int step) function, expected prototype:\nvoid osgDB::Output::setIndentStep(int step)\nClass arguments details:\n");
		}

		int step=(int)lua_tointeger(L,2);

		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Output::setIndentStep(int)");
		}
		self->setIndentStep(step);

		return 0;
	}

	// int osgDB::Output::getIndentStep() const
	static int _bind_getIndentStep(lua_State *L) {
		if (!_lg_typecheck_getIndentStep(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgDB::Output::getIndentStep() const function, expected prototype:\nint osgDB::Output::getIndentStep() const\nClass arguments details:\n");
		}


		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgDB::Output::getIndentStep() const");
		}
		int lret = self->getIndentStep();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::Output::setIndent(int indent)
	static int _bind_setIndent(lua_State *L) {
		if (!_lg_typecheck_setIndent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Output::setIndent(int indent) function, expected prototype:\nvoid osgDB::Output::setIndent(int indent)\nClass arguments details:\n");
		}

		int indent=(int)lua_tointeger(L,2);

		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Output::setIndent(int)");
		}
		self->setIndent(indent);

		return 0;
	}

	// int osgDB::Output::getIndent() const
	static int _bind_getIndent(lua_State *L) {
		if (!_lg_typecheck_getIndent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgDB::Output::getIndent() const function, expected prototype:\nint osgDB::Output::getIndent() const\nClass arguments details:\n");
		}


		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgDB::Output::getIndent() const");
		}
		int lret = self->getIndent();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::Output::setNumIndicesPerLine(int num)
	static int _bind_setNumIndicesPerLine(lua_State *L) {
		if (!_lg_typecheck_setNumIndicesPerLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Output::setNumIndicesPerLine(int num) function, expected prototype:\nvoid osgDB::Output::setNumIndicesPerLine(int num)\nClass arguments details:\n");
		}

		int num=(int)lua_tointeger(L,2);

		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Output::setNumIndicesPerLine(int)");
		}
		self->setNumIndicesPerLine(num);

		return 0;
	}

	// int osgDB::Output::getNumIndicesPerLine() const
	static int _bind_getNumIndicesPerLine(lua_State *L) {
		if (!_lg_typecheck_getNumIndicesPerLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgDB::Output::getNumIndicesPerLine() const function, expected prototype:\nint osgDB::Output::getNumIndicesPerLine() const\nClass arguments details:\n");
		}


		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgDB::Output::getNumIndicesPerLine() const");
		}
		int lret = self->getNumIndicesPerLine();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::Output::moveIn()
	static int _bind_moveIn(lua_State *L) {
		if (!_lg_typecheck_moveIn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Output::moveIn() function, expected prototype:\nvoid osgDB::Output::moveIn()\nClass arguments details:\n");
		}


		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Output::moveIn()");
		}
		self->moveIn();

		return 0;
	}

	// void osgDB::Output::moveOut()
	static int _bind_moveOut(lua_State *L) {
		if (!_lg_typecheck_moveOut(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Output::moveOut() function, expected prototype:\nvoid osgDB::Output::moveOut()\nClass arguments details:\n");
		}


		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Output::moveOut()");
		}
		self->moveOut();

		return 0;
	}

	// bool osgDB::Output::writeObject(const osg::Object & obj)
	static int _bind_writeObject(lua_State *L) {
		if (!_lg_typecheck_writeObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::Output::writeObject(const osg::Object & obj) function, expected prototype:\nbool osgDB::Output::writeObject(const osg::Object & obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj_ptr=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));
		if( !obj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg obj in osgDB::Output::writeObject function");
		}
		const osg::Object & obj=*obj_ptr;

		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::Output::writeObject(const osg::Object &)");
		}
		bool lret = self->writeObject(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::Output::writeBeginObject(const std::string & name)
	static int _bind_writeBeginObject(lua_State *L) {
		if (!_lg_typecheck_writeBeginObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Output::writeBeginObject(const std::string & name) function, expected prototype:\nvoid osgDB::Output::writeBeginObject(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Output::writeBeginObject(const std::string &)");
		}
		self->writeBeginObject(name);

		return 0;
	}

	// void osgDB::Output::writeEndObject()
	static int _bind_writeEndObject(lua_State *L) {
		if (!_lg_typecheck_writeEndObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Output::writeEndObject() function, expected prototype:\nvoid osgDB::Output::writeEndObject()\nClass arguments details:\n");
		}


		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Output::writeEndObject()");
		}
		self->writeEndObject();

		return 0;
	}

	// void osgDB::Output::writeUseID(const std::string & id)
	static int _bind_writeUseID(lua_State *L) {
		if (!_lg_typecheck_writeUseID(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Output::writeUseID(const std::string & id) function, expected prototype:\nvoid osgDB::Output::writeUseID(const std::string & id)\nClass arguments details:\n");
		}

		std::string id(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Output::writeUseID(const std::string &)");
		}
		self->writeUseID(id);

		return 0;
	}

	// void osgDB::Output::writeUniqueID(const std::string & id)
	static int _bind_writeUniqueID(lua_State *L) {
		if (!_lg_typecheck_writeUniqueID(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Output::writeUniqueID(const std::string & id) function, expected prototype:\nvoid osgDB::Output::writeUniqueID(const std::string & id)\nClass arguments details:\n");
		}

		std::string id(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Output::writeUniqueID(const std::string &)");
		}
		self->writeUniqueID(id);

		return 0;
	}

	// bool osgDB::Output::getUniqueIDForObject(const osg::Object * obj, std::string & uniqueID)
	static int _bind_getUniqueIDForObject(lua_State *L) {
		if (!_lg_typecheck_getUniqueIDForObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::Output::getUniqueIDForObject(const osg::Object * obj, std::string & uniqueID) function, expected prototype:\nbool osgDB::Output::getUniqueIDForObject(const osg::Object * obj, std::string & uniqueID)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));
		std::string uniqueID(lua_tostring(L,3),lua_objlen(L,3));

		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::Output::getUniqueIDForObject(const osg::Object *, std::string &)");
		}
		bool lret = self->getUniqueIDForObject(obj, uniqueID);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::Output::createUniqueIDForObject(const osg::Object * obj, std::string & uniqueID)
	static int _bind_createUniqueIDForObject(lua_State *L) {
		if (!_lg_typecheck_createUniqueIDForObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::Output::createUniqueIDForObject(const osg::Object * obj, std::string & uniqueID) function, expected prototype:\nbool osgDB::Output::createUniqueIDForObject(const osg::Object * obj, std::string & uniqueID)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));
		std::string uniqueID(lua_tostring(L,3),lua_objlen(L,3));

		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::Output::createUniqueIDForObject(const osg::Object *, std::string &)");
		}
		bool lret = self->createUniqueIDForObject(obj, uniqueID);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::Output::registerUniqueIDForObject(const osg::Object * obj, std::string & uniqueID)
	static int _bind_registerUniqueIDForObject(lua_State *L) {
		if (!_lg_typecheck_registerUniqueIDForObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::Output::registerUniqueIDForObject(const osg::Object * obj, std::string & uniqueID) function, expected prototype:\nbool osgDB::Output::registerUniqueIDForObject(const osg::Object * obj, std::string & uniqueID)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));
		std::string uniqueID(lua_tostring(L,3),lua_objlen(L,3));

		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::Output::registerUniqueIDForObject(const osg::Object *, std::string &)");
		}
		bool lret = self->registerUniqueIDForObject(obj, uniqueID);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::Output::setPathNameHint(const osgDB::Output::PathNameHint pnh)
	static int _bind_setPathNameHint(lua_State *L) {
		if (!_lg_typecheck_setPathNameHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Output::setPathNameHint(const osgDB::Output::PathNameHint pnh) function, expected prototype:\nvoid osgDB::Output::setPathNameHint(const osgDB::Output::PathNameHint pnh)\nClass arguments details:\n");
		}

		osgDB::Output::PathNameHint pnh=(osgDB::Output::PathNameHint)lua_tointeger(L,2);

		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Output::setPathNameHint(const osgDB::Output::PathNameHint)");
		}
		self->setPathNameHint(pnh);

		return 0;
	}

	// osgDB::Output::PathNameHint osgDB::Output::getPathNameHint() const
	static int _bind_getPathNameHint(lua_State *L) {
		if (!_lg_typecheck_getPathNameHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::Output::PathNameHint osgDB::Output::getPathNameHint() const function, expected prototype:\nosgDB::Output::PathNameHint osgDB::Output::getPathNameHint() const\nClass arguments details:\n");
		}


		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::Output::PathNameHint osgDB::Output::getPathNameHint() const");
		}
		osgDB::Output::PathNameHint lret = self->getPathNameHint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// std::string osgDB::Output::getFileNameForOutput(const std::string & filename) const
	static int _bind_getFileNameForOutput(lua_State *L) {
		if (!_lg_typecheck_getFileNameForOutput(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string osgDB::Output::getFileNameForOutput(const std::string & filename) const function, expected prototype:\nstd::string osgDB::Output::getFileNameForOutput(const std::string & filename) const\nClass arguments details:\n");
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string osgDB::Output::getFileNameForOutput(const std::string &) const");
		}
		std::string lret = self->getFileNameForOutput(filename);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const std::string & osgDB::Output::getFileName() const
	static int _bind_getFileName(lua_State *L) {
		if (!_lg_typecheck_getFileName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::string & osgDB::Output::getFileName() const function, expected prototype:\nconst std::string & osgDB::Output::getFileName() const\nClass arguments details:\n");
		}


		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::string & osgDB::Output::getFileName() const");
		}
		const std::string & lret = self->getFileName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osgDB::Output::setOutputTextureFiles(bool flag)
	static int _bind_setOutputTextureFiles(lua_State *L) {
		if (!_lg_typecheck_setOutputTextureFiles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Output::setOutputTextureFiles(bool flag) function, expected prototype:\nvoid osgDB::Output::setOutputTextureFiles(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Output::setOutputTextureFiles(bool)");
		}
		self->setOutputTextureFiles(flag);

		return 0;
	}

	// bool osgDB::Output::getOutputTextureFiles() const
	static int _bind_getOutputTextureFiles(lua_State *L) {
		if (!_lg_typecheck_getOutputTextureFiles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::Output::getOutputTextureFiles() const function, expected prototype:\nbool osgDB::Output::getOutputTextureFiles() const\nClass arguments details:\n");
		}


		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::Output::getOutputTextureFiles() const");
		}
		bool lret = self->getOutputTextureFiles();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// std::string osgDB::Output::getTextureFileNameForOutput()
	static int _bind_getTextureFileNameForOutput(lua_State *L) {
		if (!_lg_typecheck_getTextureFileNameForOutput(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string osgDB::Output::getTextureFileNameForOutput() function, expected prototype:\nstd::string osgDB::Output::getTextureFileNameForOutput()\nClass arguments details:\n");
		}


		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string osgDB::Output::getTextureFileNameForOutput()");
		}
		std::string lret = self->getTextureFileNameForOutput();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osgDB::Output::setOutputShaderFiles(bool flag)
	static int _bind_setOutputShaderFiles(lua_State *L) {
		if (!_lg_typecheck_setOutputShaderFiles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Output::setOutputShaderFiles(bool flag) function, expected prototype:\nvoid osgDB::Output::setOutputShaderFiles(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Output::setOutputShaderFiles(bool)");
		}
		self->setOutputShaderFiles(flag);

		return 0;
	}

	// bool osgDB::Output::getOutputShaderFiles() const
	static int _bind_getOutputShaderFiles(lua_State *L) {
		if (!_lg_typecheck_getOutputShaderFiles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::Output::getOutputShaderFiles() const function, expected prototype:\nbool osgDB::Output::getOutputShaderFiles() const\nClass arguments details:\n");
		}


		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::Output::getOutputShaderFiles() const");
		}
		bool lret = self->getOutputShaderFiles();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// std::string osgDB::Output::getShaderFileNameForOutput()
	static int _bind_getShaderFileNameForOutput(lua_State *L) {
		if (!_lg_typecheck_getShaderFileNameForOutput(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string osgDB::Output::getShaderFileNameForOutput() function, expected prototype:\nstd::string osgDB::Output::getShaderFileNameForOutput()\nClass arguments details:\n");
		}


		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string osgDB::Output::getShaderFileNameForOutput()");
		}
		std::string lret = self->getShaderFileNameForOutput();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osgDB::Output::setExternalFileWritten(const std::string & filename, bool hasBeenWritten = true)
	static int _bind_setExternalFileWritten(lua_State *L) {
		if (!_lg_typecheck_setExternalFileWritten(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Output::setExternalFileWritten(const std::string & filename, bool hasBeenWritten = true) function, expected prototype:\nvoid osgDB::Output::setExternalFileWritten(const std::string & filename, bool hasBeenWritten = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		bool hasBeenWritten=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Output::setExternalFileWritten(const std::string &, bool)");
		}
		self->setExternalFileWritten(filename, hasBeenWritten);

		return 0;
	}

	// bool osgDB::Output::getExternalFileWritten(const std::string & filename) const
	static int _bind_getExternalFileWritten(lua_State *L) {
		if (!_lg_typecheck_getExternalFileWritten(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::Output::getExternalFileWritten(const std::string & filename) const function, expected prototype:\nbool osgDB::Output::getExternalFileWritten(const std::string & filename) const\nClass arguments details:\n");
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Output* self=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::Output::getExternalFileWritten(const std::string &) const");
		}
		bool lret = self->getExternalFileWritten(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgDB::Output* LunaTraits< osgDB::Output >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_Output::_bind_ctor(L);
}

void LunaTraits< osgDB::Output >::_bind_dtor(osgDB::Output* obj) {
	delete obj;
}

const char LunaTraits< osgDB::Output >::className[] = "Output";
const char LunaTraits< osgDB::Output >::fullName[] = "osgDB::Output";
const char LunaTraits< osgDB::Output >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::Output >::parents[] = {"osgDB.ofstream", 0};
const int LunaTraits< osgDB::Output >::hash = 3134515;
const int LunaTraits< osgDB::Output >::uniqueIDs[] = {78216342,0};

luna_RegType LunaTraits< osgDB::Output >::methods[] = {
	{"setOptions", &luna_wrapper_osgDB_Output::_bind_setOptions},
	{"getOptions", &luna_wrapper_osgDB_Output::_bind_getOptions},
	{"setWriteOutDefaultValues", &luna_wrapper_osgDB_Output::_bind_setWriteOutDefaultValues},
	{"getWriteOutDefaultValues", &luna_wrapper_osgDB_Output::_bind_getWriteOutDefaultValues},
	{"open", &luna_wrapper_osgDB_Output::_bind_open},
	{"indent", &luna_wrapper_osgDB_Output::_bind_indent},
	{"wrapString", &luna_wrapper_osgDB_Output::_bind_wrapString},
	{"setIndentStep", &luna_wrapper_osgDB_Output::_bind_setIndentStep},
	{"getIndentStep", &luna_wrapper_osgDB_Output::_bind_getIndentStep},
	{"setIndent", &luna_wrapper_osgDB_Output::_bind_setIndent},
	{"getIndent", &luna_wrapper_osgDB_Output::_bind_getIndent},
	{"setNumIndicesPerLine", &luna_wrapper_osgDB_Output::_bind_setNumIndicesPerLine},
	{"getNumIndicesPerLine", &luna_wrapper_osgDB_Output::_bind_getNumIndicesPerLine},
	{"moveIn", &luna_wrapper_osgDB_Output::_bind_moveIn},
	{"moveOut", &luna_wrapper_osgDB_Output::_bind_moveOut},
	{"writeObject", &luna_wrapper_osgDB_Output::_bind_writeObject},
	{"writeBeginObject", &luna_wrapper_osgDB_Output::_bind_writeBeginObject},
	{"writeEndObject", &luna_wrapper_osgDB_Output::_bind_writeEndObject},
	{"writeUseID", &luna_wrapper_osgDB_Output::_bind_writeUseID},
	{"writeUniqueID", &luna_wrapper_osgDB_Output::_bind_writeUniqueID},
	{"getUniqueIDForObject", &luna_wrapper_osgDB_Output::_bind_getUniqueIDForObject},
	{"createUniqueIDForObject", &luna_wrapper_osgDB_Output::_bind_createUniqueIDForObject},
	{"registerUniqueIDForObject", &luna_wrapper_osgDB_Output::_bind_registerUniqueIDForObject},
	{"setPathNameHint", &luna_wrapper_osgDB_Output::_bind_setPathNameHint},
	{"getPathNameHint", &luna_wrapper_osgDB_Output::_bind_getPathNameHint},
	{"getFileNameForOutput", &luna_wrapper_osgDB_Output::_bind_getFileNameForOutput},
	{"getFileName", &luna_wrapper_osgDB_Output::_bind_getFileName},
	{"setOutputTextureFiles", &luna_wrapper_osgDB_Output::_bind_setOutputTextureFiles},
	{"getOutputTextureFiles", &luna_wrapper_osgDB_Output::_bind_getOutputTextureFiles},
	{"getTextureFileNameForOutput", &luna_wrapper_osgDB_Output::_bind_getTextureFileNameForOutput},
	{"setOutputShaderFiles", &luna_wrapper_osgDB_Output::_bind_setOutputShaderFiles},
	{"getOutputShaderFiles", &luna_wrapper_osgDB_Output::_bind_getOutputShaderFiles},
	{"getShaderFileNameForOutput", &luna_wrapper_osgDB_Output::_bind_getShaderFileNameForOutput},
	{"setExternalFileWritten", &luna_wrapper_osgDB_Output::_bind_setExternalFileWritten},
	{"getExternalFileWritten", &luna_wrapper_osgDB_Output::_bind_getExternalFileWritten},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::Output >::converters[] = {
	{"osgDB::ofstream", &luna_wrapper_osgDB_Output::_cast_from_ofstream},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::Output >::enumValues[] = {
	{"AS_IS", osgDB::Output::AS_IS},
	{"FULL_PATH", osgDB::Output::FULL_PATH},
	{"RELATIVE_PATH", osgDB::Output::RELATIVE_PATH},
	{"FILENAME_ONLY", osgDB::Output::FILENAME_ONLY},
	{0,0}
};

