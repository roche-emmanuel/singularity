#ifndef _WRAPPERS_WRAPPER_OSG_FLUSHDELETEDGLOBJECTSOPERATION_H_
#define _WRAPPERS_WRAPPER_OSG_FLUSHDELETEDGLOBJECTSOPERATION_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/GraphicsThread>

class wrapper_osg_FlushDeletedGLObjectsOperation : public osg::FlushDeletedGLObjectsOperation, public luna_wrapper_base {

public:
		

	~wrapper_osg_FlushDeletedGLObjectsOperation() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_FlushDeletedGLObjectsOperation(lua_State* L, lua_Table* dum, double availableTime, bool keep = false) : osg::FlushDeletedGLObjectsOperation(availableTime, keep), luna_wrapper_base(L) { register_protected_methods(L); };

	// Public virtual methods:
	// void osg::Operation::release()
	void release() {
		if(_obj.pushFunction("release")) {
			return (_obj.callFunction<void>());
		}

		return FlushDeletedGLObjectsOperation::release();
	};

	// void osg::FlushDeletedGLObjectsOperation::operator()(osg::GraphicsContext * arg1)
	void operator()(osg::GraphicsContext * arg1) {
		if(_obj.pushFunction("op_call")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return FlushDeletedGLObjectsOperation::operator()(arg1);
	};



	// Protected virtual methods:

	// Protected non-virtual methods:
	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_signalObserversAndDelete(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_deleteUsingDeleteHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n");
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osg_FlushDeletedGLObjectsOperation* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_FlushDeletedGLObjectsOperation >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_signalObserversAndDelete(bool, bool) const");
		}
		self->public_signalObserversAndDelete(signalDelete, doDelete);

		return 0;
	}

	// void osg::Referenced::public_deleteUsingDeleteHandler() const
	static int _bind_public_deleteUsingDeleteHandler(lua_State *L) {
		if (!_lg_typecheck_public_deleteUsingDeleteHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_deleteUsingDeleteHandler() const function, expected prototype:\nvoid osg::Referenced::public_deleteUsingDeleteHandler() const\nClass arguments details:\n");
		}


		wrapper_osg_FlushDeletedGLObjectsOperation* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_FlushDeletedGLObjectsOperation >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const");
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_signalObserversAndDelete",_bind_public_signalObserversAndDelete},
		{"protected_deleteUsingDeleteHandler",_bind_public_deleteUsingDeleteHandler},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

