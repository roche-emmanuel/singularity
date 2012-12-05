#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_WriteFileCallback.h>

class luna_wrapper_osgDB_WriteFileCallback {
public:
	typedef Luna< osgDB::WriteFileCallback > luna_t;

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
		osgDB::WriteFileCallback* ptr= dynamic_cast< osgDB::WriteFileCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::WriteFileCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_writeObject(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeImage(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeHeightField(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeNode(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeShader(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeObject(const osg::Object & obj, const std::string & fileName, const osgDB::Options * options)
	static int _bind_writeObject(lua_State *L) {
		if (!_lg_typecheck_writeObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeObject(const osg::Object & obj, const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeObject(const osg::Object & obj, const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n");
		}

		const osg::Object* obj_ptr=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));
		if( !obj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg obj in osgDB::WriteFileCallback::writeObject function");
		}
		const osg::Object & obj=*obj_ptr;
		std::string fileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,4));

		osgDB::WriteFileCallback* self=dynamic_cast< osgDB::WriteFileCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeObject(const osg::Object &, const std::string &, const osgDB::Options *)");
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeObject(obj, fileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeImage(const osg::Image & obj, const std::string & fileName, const osgDB::Options * options)
	static int _bind_writeImage(lua_State *L) {
		if (!_lg_typecheck_writeImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeImage(const osg::Image & obj, const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeImage(const osg::Image & obj, const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n");
		}

		const osg::Image* obj_ptr=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,2));
		if( !obj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg obj in osgDB::WriteFileCallback::writeImage function");
		}
		const osg::Image & obj=*obj_ptr;
		std::string fileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,4));

		osgDB::WriteFileCallback* self=dynamic_cast< osgDB::WriteFileCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeImage(const osg::Image &, const std::string &, const osgDB::Options *)");
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeImage(obj, fileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeHeightField(const osg::HeightField & obj, const std::string & fileName, const osgDB::Options * options)
	static int _bind_writeHeightField(lua_State *L) {
		if (!_lg_typecheck_writeHeightField(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeHeightField(const osg::HeightField & obj, const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeHeightField(const osg::HeightField & obj, const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n");
		}

		const osg::HeightField* obj_ptr=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,2));
		if( !obj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg obj in osgDB::WriteFileCallback::writeHeightField function");
		}
		const osg::HeightField & obj=*obj_ptr;
		std::string fileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,4));

		osgDB::WriteFileCallback* self=dynamic_cast< osgDB::WriteFileCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeHeightField(const osg::HeightField &, const std::string &, const osgDB::Options *)");
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeHeightField(obj, fileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeNode(const osg::Node & obj, const std::string & fileName, const osgDB::Options * options)
	static int _bind_writeNode(lua_State *L) {
		if (!_lg_typecheck_writeNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeNode(const osg::Node & obj, const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeNode(const osg::Node & obj, const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n");
		}

		const osg::Node* obj_ptr=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		if( !obj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg obj in osgDB::WriteFileCallback::writeNode function");
		}
		const osg::Node & obj=*obj_ptr;
		std::string fileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,4));

		osgDB::WriteFileCallback* self=dynamic_cast< osgDB::WriteFileCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeNode(const osg::Node &, const std::string &, const osgDB::Options *)");
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeNode(obj, fileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeShader(const osg::Shader & obj, const std::string & fileName, const osgDB::Options * options)
	static int _bind_writeShader(lua_State *L) {
		if (!_lg_typecheck_writeShader(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeShader(const osg::Shader & obj, const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeShader(const osg::Shader & obj, const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n");
		}

		const osg::Shader* obj_ptr=dynamic_cast< osg::Shader* >(Luna< osg::Referenced >::check(L,2));
		if( !obj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg obj in osgDB::WriteFileCallback::writeShader function");
		}
		const osg::Shader & obj=*obj_ptr;
		std::string fileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,4));

		osgDB::WriteFileCallback* self=dynamic_cast< osgDB::WriteFileCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeShader(const osg::Shader &, const std::string &, const osgDB::Options *)");
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeShader(obj, fileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osgDB::WriteFileCallback* LunaTraits< osgDB::WriteFileCallback >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgDB::WriteFileCallback >::_bind_dtor(osgDB::WriteFileCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::WriteFileCallback >::className[] = "WriteFileCallback";
const char LunaTraits< osgDB::WriteFileCallback >::fullName[] = "osgDB::WriteFileCallback";
const char LunaTraits< osgDB::WriteFileCallback >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::WriteFileCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::WriteFileCallback >::hash = 34993429;
const int LunaTraits< osgDB::WriteFileCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::WriteFileCallback >::methods[] = {
	{"writeObject", &luna_wrapper_osgDB_WriteFileCallback::_bind_writeObject},
	{"writeImage", &luna_wrapper_osgDB_WriteFileCallback::_bind_writeImage},
	{"writeHeightField", &luna_wrapper_osgDB_WriteFileCallback::_bind_writeHeightField},
	{"writeNode", &luna_wrapper_osgDB_WriteFileCallback::_bind_writeNode},
	{"writeShader", &luna_wrapper_osgDB_WriteFileCallback::_bind_writeShader},
	{"__eq", &luna_wrapper_osgDB_WriteFileCallback::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::WriteFileCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_WriteFileCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::WriteFileCallback >::enumValues[] = {
	{0,0}
};


