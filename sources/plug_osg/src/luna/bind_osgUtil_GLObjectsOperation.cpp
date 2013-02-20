#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_GLObjectsOperation.h>

class luna_wrapper_osgUtil_GLObjectsOperation {
public:
	typedef Luna< osgUtil::GLObjectsOperation > luna_t;

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
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		osgUtil::GLObjectsOperation* self= (osgUtil::GLObjectsOperation*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::GLObjectsOperation >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osgUtil::GLObjectsOperation* ptr= dynamic_cast< osgUtil::GLObjectsOperation* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::GLObjectsOperation* ptr= luna_caster< osg::Referenced, osgUtil::GLObjectsOperation >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::GLObjectsOperation >::push(L,ptr,false);
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
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Node >(L,1)) ) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2)) ) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_release(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Constructor binds:
	// osgUtil::GLObjectsOperation::GLObjectsOperation(unsigned int mode = osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES)
	static osgUtil::GLObjectsOperation* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::GLObjectsOperation::GLObjectsOperation(unsigned int mode = osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES) function, expected prototype:\nosgUtil::GLObjectsOperation::GLObjectsOperation(unsigned int mode = osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int mode=luatop>0 ? (unsigned int)lua_tointeger(L,1) : (unsigned int)osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES;

		return new osgUtil::GLObjectsOperation(mode);
	}

	// osgUtil::GLObjectsOperation::GLObjectsOperation(osg::Node * subgraph, unsigned int mode = osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES)
	static osgUtil::GLObjectsOperation* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::GLObjectsOperation::GLObjectsOperation(osg::Node * subgraph, unsigned int mode = osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES) function, expected prototype:\nosgUtil::GLObjectsOperation::GLObjectsOperation(osg::Node * subgraph, unsigned int mode = osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::Node* subgraph=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,1));
		unsigned int mode=luatop>1 ? (unsigned int)lua_tointeger(L,2) : (unsigned int)osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES;

		return new osgUtil::GLObjectsOperation(subgraph, mode);
	}

	// osgUtil::GLObjectsOperation::GLObjectsOperation(lua_Table * data, unsigned int mode = osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES)
	static osgUtil::GLObjectsOperation* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::GLObjectsOperation::GLObjectsOperation(lua_Table * data, unsigned int mode = osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES) function, expected prototype:\nosgUtil::GLObjectsOperation::GLObjectsOperation(lua_Table * data, unsigned int mode = osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int mode=luatop>1 ? (unsigned int)lua_tointeger(L,2) : (unsigned int)osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES;

		return new wrapper_osgUtil_GLObjectsOperation(L,NULL, mode);
	}

	// osgUtil::GLObjectsOperation::GLObjectsOperation(lua_Table * data, osg::Node * subgraph, unsigned int mode = osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES)
	static osgUtil::GLObjectsOperation* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::GLObjectsOperation::GLObjectsOperation(lua_Table * data, osg::Node * subgraph, unsigned int mode = osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES) function, expected prototype:\nosgUtil::GLObjectsOperation::GLObjectsOperation(lua_Table * data, osg::Node * subgraph, unsigned int mode = osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::Node* subgraph=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		unsigned int mode=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS | osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES | osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES;

		return new wrapper_osgUtil_GLObjectsOperation(L,NULL, subgraph, mode);
	}

	// Overload binder for osgUtil::GLObjectsOperation::GLObjectsOperation
	static osgUtil::GLObjectsOperation* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function GLObjectsOperation, cannot match any of the overloads for function GLObjectsOperation:\n  GLObjectsOperation(unsigned int)\n  GLObjectsOperation(osg::Node *, unsigned int)\n  GLObjectsOperation(lua_Table *, unsigned int)\n  GLObjectsOperation(lua_Table *, osg::Node *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::GLObjectsOperation::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::GLObjectsOperation::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::GLObjectsOperation::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::GLObjectsOperation* self=Luna< osg::Referenced >::checkSubType< osgUtil::GLObjectsOperation >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::GLObjectsOperation::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->GLObjectsOperation::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgUtil::GLObjectsOperation::base_release()
	static int _bind_base_release(lua_State *L) {
		if (!_lg_typecheck_base_release(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::GLObjectsOperation::base_release() function, expected prototype:\nvoid osgUtil::GLObjectsOperation::base_release()\nClass arguments details:\n");
		}


		osgUtil::GLObjectsOperation* self=Luna< osg::Referenced >::checkSubType< osgUtil::GLObjectsOperation >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::GLObjectsOperation::base_release(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->GLObjectsOperation::release();

		return 0;
	}


	// Operator binds:
	// void osgUtil::GLObjectsOperation::operator()(osg::GraphicsContext * context)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::GLObjectsOperation::operator()(osg::GraphicsContext * context) function, expected prototype:\nvoid osgUtil::GLObjectsOperation::operator()(osg::GraphicsContext * context)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::GraphicsContext* context=(Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,2));

		osgUtil::GLObjectsOperation* self=Luna< osg::Referenced >::checkSubType< osgUtil::GLObjectsOperation >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::GLObjectsOperation::operator()(osg::GraphicsContext *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->operator()(context);

		return 0;
	}


};

osgUtil::GLObjectsOperation* LunaTraits< osgUtil::GLObjectsOperation >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_GLObjectsOperation::_bind_ctor(L);
}

void LunaTraits< osgUtil::GLObjectsOperation >::_bind_dtor(osgUtil::GLObjectsOperation* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::GLObjectsOperation >::className[] = "GLObjectsOperation";
const char LunaTraits< osgUtil::GLObjectsOperation >::fullName[] = "osgUtil::GLObjectsOperation";
const char LunaTraits< osgUtil::GLObjectsOperation >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::GLObjectsOperation >::parents[] = {"osg.GraphicsOperation", 0};
const int LunaTraits< osgUtil::GLObjectsOperation >::hash = 41072322;
const int LunaTraits< osgUtil::GLObjectsOperation >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::GLObjectsOperation >::methods[] = {
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_GLObjectsOperation::_bind_base_setThreadSafeRefUnref},
	{"base_release", &luna_wrapper_osgUtil_GLObjectsOperation::_bind_base_release},
	{"op_call", &luna_wrapper_osgUtil_GLObjectsOperation::_bind_op_call},
	{"__eq", &luna_wrapper_osgUtil_GLObjectsOperation::_bind___eq},
	{"fromVoid", &luna_wrapper_osgUtil_GLObjectsOperation::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_GLObjectsOperation::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_GLObjectsOperation::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::GLObjectsOperation >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_GLObjectsOperation::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::GLObjectsOperation >::enumValues[] = {
	{0,0}
};


