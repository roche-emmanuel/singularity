#ifndef _WRAPPERS_WRAPPER_OSGPARTICLE_EMITTER_H_
#define _WRAPPERS_WRAPPER_OSGPARTICLE_EMITTER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgParticle/Emitter>

class wrapper_osgParticle_Emitter : public osgParticle::Emitter, public luna_wrapper_base {

public:
		

	~wrapper_osgParticle_Emitter() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgParticle_Emitter(lua_State* L, lua_Table* dum) : osgParticle::Emitter(), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osgParticle_Emitter(lua_State* L, lua_Table* dum, const osgParticle::Emitter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgParticle::Emitter(copy, copyop), luna_wrapper_base(L) { register_protected_methods(L); };

	// Public virtual methods:
	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return Emitter::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return Emitter::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return Emitter::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Emitter::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Emitter::getUserData();
	};

	// osg::Object * osg::Node::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return Emitter::cloneType();
	};

	// osg::Object * osg::Node::clone(const osg::CopyOp & copyop) const
	osg::Object * clone(const osg::CopyOp & copyop) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&copyop);
			return (_obj.callFunction<osg::Object*>());
		}

		return Emitter::clone(copyop);
	};

	// osg::Group * osg::Node::asGroup()
	osg::Group * asGroup() {
		if(_obj.pushFunction("asGroup")) {
			return (_obj.callFunction<osg::Group*>());
		}

		return Emitter::asGroup();
	};

	// const osg::Group * osg::Node::asGroup() const
	const osg::Group * asGroup() const {
		if(_obj.pushFunction("asGroup")) {
			return (_obj.callFunction<osg::Group*>());
		}

		return Emitter::asGroup();
	};

	// osg::Transform * osg::Node::asTransform()
	osg::Transform * asTransform() {
		if(_obj.pushFunction("asTransform")) {
			return (_obj.callFunction<osg::Transform*>());
		}

		return Emitter::asTransform();
	};

	// const osg::Transform * osg::Node::asTransform() const
	const osg::Transform * asTransform() const {
		if(_obj.pushFunction("asTransform")) {
			return (_obj.callFunction<osg::Transform*>());
		}

		return Emitter::asTransform();
	};

	// osg::Switch * osg::Node::asSwitch()
	osg::Switch * asSwitch() {
		if(_obj.pushFunction("asSwitch")) {
			return (_obj.callFunction<osg::Switch*>());
		}

		return Emitter::asSwitch();
	};

	// const osg::Switch * osg::Node::asSwitch() const
	const osg::Switch * asSwitch() const {
		if(_obj.pushFunction("asSwitch")) {
			return (_obj.callFunction<osg::Switch*>());
		}

		return Emitter::asSwitch();
	};

	// osg::Geode * osg::Node::asGeode()
	osg::Geode * asGeode() {
		if(_obj.pushFunction("asGeode")) {
			return (_obj.callFunction<osg::Geode*>());
		}

		return Emitter::asGeode();
	};

	// const osg::Geode * osg::Node::asGeode() const
	const osg::Geode * asGeode() const {
		if(_obj.pushFunction("asGeode")) {
			return (_obj.callFunction<osg::Geode*>());
		}

		return Emitter::asGeode();
	};

	// void osg::Node::ascend(osg::NodeVisitor & nv)
	void ascend(osg::NodeVisitor & nv) {
		if(_obj.pushFunction("ascend")) {
			_obj.pushArg(&nv);
			return (_obj.callFunction<void>());
		}

		return Emitter::ascend(nv);
	};

	// void osg::Node::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return Emitter::releaseGLObjects(arg1);
	};

	// void osgParticle::ParticleProcessor::traverse(osg::NodeVisitor & arg1)
	void traverse(osg::NodeVisitor & arg1) {
		if(_obj.pushFunction("traverse")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return Emitter::traverse(arg1);
	};

	// osg::BoundingSphered osgParticle::ParticleProcessor::computeBound() const
	osg::BoundingSphered computeBound() const {
		if(_obj.pushFunction("computeBound")) {
			return *(_obj.callFunction<osg::BoundingSphered*>());
		}

		return Emitter::computeBound();
	};

	// const char * osgParticle::Emitter::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return Emitter::libraryName();
	};

	// const char * osgParticle::Emitter::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return Emitter::className();
	};

	// bool osgParticle::Emitter::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return Emitter::isSameKindAs(obj);
	};

	// void osgParticle::Emitter::accept(osg::NodeVisitor & nv)
	void accept(osg::NodeVisitor & nv) {
		if(_obj.pushFunction("accept")) {
			_obj.pushArg(&nv);
			return (_obj.callFunction<void>());
		}

		return Emitter::accept(nv);
	};


protected:
	// Protected virtual methods:
	// void osgParticle::Emitter::process(double dt)
	void process(double dt) {
		if(_obj.pushFunction("process")) {
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return Emitter::process(dt);
	};

	// void osgParticle::Emitter::emitParticles(double dt)
	void emitParticles(double dt) {
		THROW_IF(!_obj.pushFunction("emitParticles"),"No implementation for abstract function osgParticle::Emitter::emitParticles");
		_obj.pushArg(dt);
		return (_obj.callFunction<void>());
	};

public:
	// Protected non-virtual methods:
	// void osg::Node::addParent(osg::Group * node)
	void public_addParent(osg::Group * node) {
		return osg::Node::addParent(node);
	};

	// void osg::Node::removeParent(osg::Group * node)
	void public_removeParent(osg::Group * node) {
		return osg::Node::removeParent(node);
	};

	// void osg::Node::setNumChildrenRequiringUpdateTraversal(unsigned int num)
	void public_setNumChildrenRequiringUpdateTraversal(unsigned int num) {
		return osg::Node::setNumChildrenRequiringUpdateTraversal(num);
	};

	// void osg::Node::setNumChildrenRequiringEventTraversal(unsigned int num)
	void public_setNumChildrenRequiringEventTraversal(unsigned int num) {
		return osg::Node::setNumChildrenRequiringEventTraversal(num);
	};

	// void osg::Node::setNumChildrenWithCullingDisabled(unsigned int num)
	void public_setNumChildrenWithCullingDisabled(unsigned int num) {
		return osg::Node::setNumChildrenWithCullingDisabled(num);
	};

	// void osg::Node::setNumChildrenWithOccluderNodes(unsigned int num)
	void public_setNumChildrenWithOccluderNodes(unsigned int num) {
		return osg::Node::setNumChildrenWithOccluderNodes(num);
	};

	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_addParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_removeParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_setNumChildrenRequiringUpdateTraversal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_setNumChildrenRequiringEventTraversal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_setNumChildrenWithCullingDisabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_setNumChildrenWithOccluderNodes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

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
	// void osg::Node::public_addParent(osg::Group * node)
	static int _bind_public_addParent(lua_State *L) {
		if (!_lg_typecheck_public_addParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Node::public_addParent(osg::Group * node) function, expected prototype:\nvoid osg::Node::public_addParent(osg::Group * node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Group* node=(Luna< osg::Referenced >::checkSubType< osg::Group >(L,2));

		wrapper_osgParticle_Emitter* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_Emitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Node::public_addParent(osg::Group *)");
		}
		self->public_addParent(node);

		return 0;
	}

	// void osg::Node::public_removeParent(osg::Group * node)
	static int _bind_public_removeParent(lua_State *L) {
		if (!_lg_typecheck_public_removeParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Node::public_removeParent(osg::Group * node) function, expected prototype:\nvoid osg::Node::public_removeParent(osg::Group * node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Group* node=(Luna< osg::Referenced >::checkSubType< osg::Group >(L,2));

		wrapper_osgParticle_Emitter* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_Emitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Node::public_removeParent(osg::Group *)");
		}
		self->public_removeParent(node);

		return 0;
	}

	// void osg::Node::public_setNumChildrenRequiringUpdateTraversal(unsigned int num)
	static int _bind_public_setNumChildrenRequiringUpdateTraversal(lua_State *L) {
		if (!_lg_typecheck_public_setNumChildrenRequiringUpdateTraversal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Node::public_setNumChildrenRequiringUpdateTraversal(unsigned int num) function, expected prototype:\nvoid osg::Node::public_setNumChildrenRequiringUpdateTraversal(unsigned int num)\nClass arguments details:\n");
		}

		unsigned int num=(unsigned int)lua_tointeger(L,2);

		wrapper_osgParticle_Emitter* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_Emitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Node::public_setNumChildrenRequiringUpdateTraversal(unsigned int)");
		}
		self->public_setNumChildrenRequiringUpdateTraversal(num);

		return 0;
	}

	// void osg::Node::public_setNumChildrenRequiringEventTraversal(unsigned int num)
	static int _bind_public_setNumChildrenRequiringEventTraversal(lua_State *L) {
		if (!_lg_typecheck_public_setNumChildrenRequiringEventTraversal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Node::public_setNumChildrenRequiringEventTraversal(unsigned int num) function, expected prototype:\nvoid osg::Node::public_setNumChildrenRequiringEventTraversal(unsigned int num)\nClass arguments details:\n");
		}

		unsigned int num=(unsigned int)lua_tointeger(L,2);

		wrapper_osgParticle_Emitter* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_Emitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Node::public_setNumChildrenRequiringEventTraversal(unsigned int)");
		}
		self->public_setNumChildrenRequiringEventTraversal(num);

		return 0;
	}

	// void osg::Node::public_setNumChildrenWithCullingDisabled(unsigned int num)
	static int _bind_public_setNumChildrenWithCullingDisabled(lua_State *L) {
		if (!_lg_typecheck_public_setNumChildrenWithCullingDisabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Node::public_setNumChildrenWithCullingDisabled(unsigned int num) function, expected prototype:\nvoid osg::Node::public_setNumChildrenWithCullingDisabled(unsigned int num)\nClass arguments details:\n");
		}

		unsigned int num=(unsigned int)lua_tointeger(L,2);

		wrapper_osgParticle_Emitter* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_Emitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Node::public_setNumChildrenWithCullingDisabled(unsigned int)");
		}
		self->public_setNumChildrenWithCullingDisabled(num);

		return 0;
	}

	// void osg::Node::public_setNumChildrenWithOccluderNodes(unsigned int num)
	static int _bind_public_setNumChildrenWithOccluderNodes(lua_State *L) {
		if (!_lg_typecheck_public_setNumChildrenWithOccluderNodes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Node::public_setNumChildrenWithOccluderNodes(unsigned int num) function, expected prototype:\nvoid osg::Node::public_setNumChildrenWithOccluderNodes(unsigned int num)\nClass arguments details:\n");
		}

		unsigned int num=(unsigned int)lua_tointeger(L,2);

		wrapper_osgParticle_Emitter* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_Emitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Node::public_setNumChildrenWithOccluderNodes(unsigned int)");
		}
		self->public_setNumChildrenWithOccluderNodes(num);

		return 0;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n");
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgParticle_Emitter* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_Emitter >(L,1);
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


		wrapper_osgParticle_Emitter* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_Emitter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const");
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_addParent",_bind_public_addParent},
		{"protected_removeParent",_bind_public_removeParent},
		{"protected_setNumChildrenRequiringUpdateTraversal",_bind_public_setNumChildrenRequiringUpdateTraversal},
		{"protected_setNumChildrenRequiringEventTraversal",_bind_public_setNumChildrenRequiringEventTraversal},
		{"protected_setNumChildrenWithCullingDisabled",_bind_public_setNumChildrenWithCullingDisabled},
		{"protected_setNumChildrenWithOccluderNodes",_bind_public_setNumChildrenWithOccluderNodes},
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

