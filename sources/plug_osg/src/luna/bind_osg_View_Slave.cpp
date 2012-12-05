#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_View_Slave.h>

class luna_wrapper_osg_View_Slave {
public:
	typedef Luna< osg::View::Slave > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,94812983) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::View::Slave*)");
		}

		osg::View::Slave* rhs =(Luna< osg::View::Slave >::check(L,2));
		osg::View::Slave* self=(Luna< osg::View::Slave >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

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

		osg::View::Slave* self=(Luna< osg::View::Slave >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::View::Slave");
		
		return luna_dynamicCast(L,converters,"osg::View::Slave",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && lua_isboolean(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< osg::Camera* >(Luna< osg::Referenced >::check(L,1)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!dynamic_cast< osg::Matrixd* >(Luna< osg::Matrixd >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903838) ) return false;
		if( (!dynamic_cast< osg::Matrixd* >(Luna< osg::Matrixd >::check(L,3))) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,94812983) ) return false;
		if( (!dynamic_cast< osg::View::Slave* >(Luna< osg::View::Slave >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osg::Camera* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903838) ) return false;
		if( (!dynamic_cast< osg::Matrixd* >(Luna< osg::Matrixd >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,18903838) ) return false;
		if( (!dynamic_cast< osg::Matrixd* >(Luna< osg::Matrixd >::check(L,4))) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,94812983) ) return false;
		if( (!dynamic_cast< osg::View::Slave* >(Luna< osg::View::Slave >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_updateSlave(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_updateSlaveImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::View::Slave::Slave(bool useMastersSceneData = true)
	static osg::View::Slave* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::View::Slave::Slave(bool useMastersSceneData = true) function, expected prototype:\nosg::View::Slave::Slave(bool useMastersSceneData = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool useMastersSceneData=luatop>0 ? (bool)(lua_toboolean(L,1)==1) : true;

		return new osg::View::Slave(useMastersSceneData);
	}

	// osg::View::Slave::Slave(osg::Camera * camera, const osg::Matrixd & projectionOffset, const osg::Matrixd & viewOffset, bool useMastersSceneData = true)
	static osg::View::Slave* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::View::Slave::Slave(osg::Camera * camera, const osg::Matrixd & projectionOffset, const osg::Matrixd & viewOffset, bool useMastersSceneData = true) function, expected prototype:\nosg::View::Slave::Slave(osg::Camera * camera, const osg::Matrixd & projectionOffset, const osg::Matrixd & viewOffset, bool useMastersSceneData = true)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 18903838\narg 3 ID = 18903838\n");
		}

		int luatop = lua_gettop(L);

		osg::Camera* camera=dynamic_cast< osg::Camera* >(Luna< osg::Referenced >::check(L,1));
		const osg::Matrixd* projectionOffset_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !projectionOffset_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projectionOffset in osg::View::Slave::Slave function");
		}
		const osg::Matrixd & projectionOffset=*projectionOffset_ptr;
		const osg::Matrixd* viewOffset_ptr=(Luna< osg::Matrixd >::check(L,3));
		if( !viewOffset_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg viewOffset in osg::View::Slave::Slave function");
		}
		const osg::Matrixd & viewOffset=*viewOffset_ptr;
		bool useMastersSceneData=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : true;

		return new osg::View::Slave(camera, projectionOffset, viewOffset, useMastersSceneData);
	}

	// osg::View::Slave::Slave(const osg::View::Slave & rhs)
	static osg::View::Slave* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::View::Slave::Slave(const osg::View::Slave & rhs) function, expected prototype:\nosg::View::Slave::Slave(const osg::View::Slave & rhs)\nClass arguments details:\narg 1 ID = 94812983\n");
		}

		const osg::View::Slave* rhs_ptr=(Luna< osg::View::Slave >::check(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::View::Slave::Slave function");
		}
		const osg::View::Slave & rhs=*rhs_ptr;

		return new osg::View::Slave(rhs);
	}

	// osg::View::Slave::Slave(lua_Table * data, bool useMastersSceneData = true)
	static osg::View::Slave* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::View::Slave::Slave(lua_Table * data, bool useMastersSceneData = true) function, expected prototype:\nosg::View::Slave::Slave(lua_Table * data, bool useMastersSceneData = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool useMastersSceneData=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		return new wrapper_osg_View_Slave(L,NULL, useMastersSceneData);
	}

	// osg::View::Slave::Slave(lua_Table * data, osg::Camera * camera, const osg::Matrixd & projectionOffset, const osg::Matrixd & viewOffset, bool useMastersSceneData = true)
	static osg::View::Slave* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::View::Slave::Slave(lua_Table * data, osg::Camera * camera, const osg::Matrixd & projectionOffset, const osg::Matrixd & viewOffset, bool useMastersSceneData = true) function, expected prototype:\nosg::View::Slave::Slave(lua_Table * data, osg::Camera * camera, const osg::Matrixd & projectionOffset, const osg::Matrixd & viewOffset, bool useMastersSceneData = true)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 18903838\narg 4 ID = 18903838\n");
		}

		int luatop = lua_gettop(L);

		osg::Camera* camera=dynamic_cast< osg::Camera* >(Luna< osg::Referenced >::check(L,2));
		const osg::Matrixd* projectionOffset_ptr=(Luna< osg::Matrixd >::check(L,3));
		if( !projectionOffset_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projectionOffset in osg::View::Slave::Slave function");
		}
		const osg::Matrixd & projectionOffset=*projectionOffset_ptr;
		const osg::Matrixd* viewOffset_ptr=(Luna< osg::Matrixd >::check(L,4));
		if( !viewOffset_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg viewOffset in osg::View::Slave::Slave function");
		}
		const osg::Matrixd & viewOffset=*viewOffset_ptr;
		bool useMastersSceneData=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : true;

		return new wrapper_osg_View_Slave(L,NULL, camera, projectionOffset, viewOffset, useMastersSceneData);
	}

	// osg::View::Slave::Slave(lua_Table * data, const osg::View::Slave & rhs)
	static osg::View::Slave* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::View::Slave::Slave(lua_Table * data, const osg::View::Slave & rhs) function, expected prototype:\nosg::View::Slave::Slave(lua_Table * data, const osg::View::Slave & rhs)\nClass arguments details:\narg 2 ID = 94812983\n");
		}

		const osg::View::Slave* rhs_ptr=(Luna< osg::View::Slave >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::View::Slave::Slave function");
		}
		const osg::View::Slave & rhs=*rhs_ptr;

		return new wrapper_osg_View_Slave(L,NULL, rhs);
	}

	// Overload binder for osg::View::Slave::Slave
	static osg::View::Slave* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function Slave, cannot match any of the overloads for function Slave:\n  Slave(bool)\n  Slave(osg::Camera *, const osg::Matrixd &, const osg::Matrixd &, bool)\n  Slave(const osg::View::Slave &)\n  Slave(lua_Table *, bool)\n  Slave(lua_Table *, osg::Camera *, const osg::Matrixd &, const osg::Matrixd &, bool)\n  Slave(lua_Table *, const osg::View::Slave &)\n");
		return NULL;
	}


	// Function binds:
	// void osg::View::Slave::updateSlave(osg::View & view)
	static int _bind_updateSlave(lua_State *L) {
		if (!_lg_typecheck_updateSlave(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::View::Slave::updateSlave(osg::View & view) function, expected prototype:\nvoid osg::View::Slave::updateSlave(osg::View & view)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::View* view_ptr=dynamic_cast< osg::View* >(Luna< osg::Referenced >::check(L,2));
		if( !view_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg view in osg::View::Slave::updateSlave function");
		}
		osg::View & view=*view_ptr;

		osg::View::Slave* self=(Luna< osg::View::Slave >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::View::Slave::updateSlave(osg::View &)");
		}
		self->updateSlave(view);

		return 0;
	}

	// void osg::View::Slave::updateSlaveImplementation(osg::View & view)
	static int _bind_updateSlaveImplementation(lua_State *L) {
		if (!_lg_typecheck_updateSlaveImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::View::Slave::updateSlaveImplementation(osg::View & view) function, expected prototype:\nvoid osg::View::Slave::updateSlaveImplementation(osg::View & view)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::View* view_ptr=dynamic_cast< osg::View* >(Luna< osg::Referenced >::check(L,2));
		if( !view_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg view in osg::View::Slave::updateSlaveImplementation function");
		}
		osg::View & view=*view_ptr;

		osg::View::Slave* self=(Luna< osg::View::Slave >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::View::Slave::updateSlaveImplementation(osg::View &)");
		}
		self->updateSlaveImplementation(view);

		return 0;
	}


	// Operator binds:

};

osg::View::Slave* LunaTraits< osg::View::Slave >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_View_Slave::_bind_ctor(L);
}

void LunaTraits< osg::View::Slave >::_bind_dtor(osg::View::Slave* obj) {
	delete obj;
}

const char LunaTraits< osg::View::Slave >::className[] = "Slave";
const char LunaTraits< osg::View::Slave >::fullName[] = "osg::View::Slave";
const char LunaTraits< osg::View::Slave >::moduleName[] = "osg";
const char* LunaTraits< osg::View::Slave >::parents[] = {0};
const int LunaTraits< osg::View::Slave >::hash = 94812983;
const int LunaTraits< osg::View::Slave >::uniqueIDs[] = {94812983,0};

luna_RegType LunaTraits< osg::View::Slave >::methods[] = {
	{"updateSlave", &luna_wrapper_osg_View_Slave::_bind_updateSlave},
	{"updateSlaveImplementation", &luna_wrapper_osg_View_Slave::_bind_updateSlaveImplementation},
	{"dynCast", &luna_wrapper_osg_View_Slave::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_View_Slave::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::View::Slave >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::View::Slave >::enumValues[] = {
	{0,0}
};


