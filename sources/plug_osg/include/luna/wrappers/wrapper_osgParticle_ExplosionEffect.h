#ifndef _WRAPPERS_WRAPPER_OSGPARTICLE_EXPLOSIONEFFECT_H_
#define _WRAPPERS_WRAPPER_OSGPARTICLE_EXPLOSIONEFFECT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgParticle/ExplosionEffect>

class wrapper_osgParticle_ExplosionEffect : public osgParticle::ExplosionEffect, public luna_wrapper_base {

public:
		

	~wrapper_osgParticle_ExplosionEffect() {
		logDEBUG3("Calling delete function for wrapper osgParticle_ExplosionEffect");
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgParticle_ExplosionEffect(lua_State* L, lua_Table* dum, bool automaticSetup = true) : osgParticle::ExplosionEffect(automaticSetup), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osgParticle_ExplosionEffect(lua_State* L, lua_Table* dum, const osg::Vec3f & position, float scale = 1.0f, float intensity = 1.0f) : osgParticle::ExplosionEffect(position, scale, intensity), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osgParticle_ExplosionEffect(lua_State* L, lua_Table* dum, const osgParticle::ExplosionEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgParticle::ExplosionEffect(copy, copyop), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void osg::Group::childRemoved(unsigned int arg1, unsigned int arg2)
	void childRemoved(unsigned int arg1, unsigned int arg2) {
		if(_obj.pushFunction("childRemoved")) {
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<void>());
		}

		return ExplosionEffect::childRemoved(arg1, arg2);
	};

	// void osg::Group::childInserted(unsigned int arg1)
	void childInserted(unsigned int arg1) {
		if(_obj.pushFunction("childInserted")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ExplosionEffect::childInserted(arg1);
	};

public:
	// Public virtual methods:
	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return ExplosionEffect::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return ExplosionEffect::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return ExplosionEffect::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ExplosionEffect::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ExplosionEffect::getUserData();
	};

	// osg::Transform * osg::Node::asTransform()
	osg::Transform * asTransform() {
		if(_obj.pushFunction("asTransform")) {
			return (_obj.callFunction<osg::Transform*>());
		}

		return ExplosionEffect::asTransform();
	};

	// const osg::Transform * osg::Node::asTransform() const
	const osg::Transform * asTransform() const {
		if(_obj.pushFunction("asTransform")) {
			return (_obj.callFunction<osg::Transform*>());
		}

		return ExplosionEffect::asTransform();
	};

	// osg::Switch * osg::Node::asSwitch()
	osg::Switch * asSwitch() {
		if(_obj.pushFunction("asSwitch")) {
			return (_obj.callFunction<osg::Switch*>());
		}

		return ExplosionEffect::asSwitch();
	};

	// const osg::Switch * osg::Node::asSwitch() const
	const osg::Switch * asSwitch() const {
		if(_obj.pushFunction("asSwitch")) {
			return (_obj.callFunction<osg::Switch*>());
		}

		return ExplosionEffect::asSwitch();
	};

	// osg::Geode * osg::Node::asGeode()
	osg::Geode * asGeode() {
		if(_obj.pushFunction("asGeode")) {
			return (_obj.callFunction<osg::Geode*>());
		}

		return ExplosionEffect::asGeode();
	};

	// const osg::Geode * osg::Node::asGeode() const
	const osg::Geode * asGeode() const {
		if(_obj.pushFunction("asGeode")) {
			return (_obj.callFunction<osg::Geode*>());
		}

		return ExplosionEffect::asGeode();
	};

	// void osg::Node::ascend(osg::NodeVisitor & nv)
	void ascend(osg::NodeVisitor & nv) {
		if(_obj.pushFunction("ascend")) {
			_obj.pushArg(&nv);
			return (_obj.callFunction<void>());
		}

		return ExplosionEffect::ascend(nv);
	};

	// osg::Group * osg::Group::asGroup()
	osg::Group * asGroup() {
		if(_obj.pushFunction("asGroup")) {
			return (_obj.callFunction<osg::Group*>());
		}

		return ExplosionEffect::asGroup();
	};

	// const osg::Group * osg::Group::asGroup() const
	const osg::Group * asGroup() const {
		if(_obj.pushFunction("asGroup")) {
			return (_obj.callFunction<osg::Group*>());
		}

		return ExplosionEffect::asGroup();
	};

	// void osg::Group::traverse(osg::NodeVisitor & arg1)
	void traverse(osg::NodeVisitor & arg1) {
		if(_obj.pushFunction("traverse")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ExplosionEffect::traverse(arg1);
	};

	// bool osg::Group::addChild(osg::Node * child)
	bool addChild(osg::Node * child) {
		if(_obj.pushFunction("addChild")) {
			_obj.pushArg(child);
			return (_obj.callFunction<bool>());
		}

		return ExplosionEffect::addChild(child);
	};

	// bool osg::Group::insertChild(unsigned int index, osg::Node * child)
	bool insertChild(unsigned int index, osg::Node * child) {
		if(_obj.pushFunction("insertChild")) {
			_obj.pushArg(index);
			_obj.pushArg(child);
			return (_obj.callFunction<bool>());
		}

		return ExplosionEffect::insertChild(index, child);
	};

	// bool osg::Group::removeChildren(unsigned int pos, unsigned int numChildrenToRemove)
	bool removeChildren(unsigned int pos, unsigned int numChildrenToRemove) {
		if(_obj.pushFunction("removeChildren")) {
			_obj.pushArg(pos);
			_obj.pushArg(numChildrenToRemove);
			return (_obj.callFunction<bool>());
		}

		return ExplosionEffect::removeChildren(pos, numChildrenToRemove);
	};

	// bool osg::Group::replaceChild(osg::Node * origChild, osg::Node * newChild)
	bool replaceChild(osg::Node * origChild, osg::Node * newChild) {
		if(_obj.pushFunction("replaceChild")) {
			_obj.pushArg(origChild);
			_obj.pushArg(newChild);
			return (_obj.callFunction<bool>());
		}

		return ExplosionEffect::replaceChild(origChild, newChild);
	};

	// bool osg::Group::setChild(unsigned int i, osg::Node * node)
	bool setChild(unsigned int i, osg::Node * node) {
		if(_obj.pushFunction("setChild")) {
			_obj.pushArg(i);
			_obj.pushArg(node);
			return (_obj.callFunction<bool>());
		}

		return ExplosionEffect::setChild(i, node);
	};

	// void osg::Group::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ExplosionEffect::releaseGLObjects(arg1);
	};

	// osg::BoundingSphered osg::Group::computeBound() const
	osg::BoundingSphered computeBound() const {
		if(_obj.pushFunction("computeBound")) {
			return *(_obj.callFunction<osg::BoundingSphered*>());
		}

		return ExplosionEffect::computeBound();
	};

	// void osgParticle::ParticleEffect::buildEffect()
	void buildEffect() {
		if(_obj.pushFunction("buildEffect")) {
			return (_obj.callFunction<void>());
		}

		return ExplosionEffect::buildEffect();
	};

	// osg::Object * osgParticle::ExplosionEffect::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return ExplosionEffect::cloneType();
	};

	// osg::Object * osgParticle::ExplosionEffect::clone(const osg::CopyOp & copyop) const
	osg::Object * clone(const osg::CopyOp & copyop) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&copyop);
			return (_obj.callFunction<osg::Object*>());
		}

		return ExplosionEffect::clone(copyop);
	};

	// bool osgParticle::ExplosionEffect::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return ExplosionEffect::isSameKindAs(obj);
	};

	// const char * osgParticle::ExplosionEffect::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return ExplosionEffect::className();
	};

	// const char * osgParticle::ExplosionEffect::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return ExplosionEffect::libraryName();
	};

	// void osgParticle::ExplosionEffect::accept(osg::NodeVisitor & nv)
	void accept(osg::NodeVisitor & nv) {
		if(_obj.pushFunction("accept")) {
			_obj.pushArg(&nv);
			return (_obj.callFunction<void>());
		}

		return ExplosionEffect::accept(nv);
	};

	// void osgParticle::ExplosionEffect::setDefaults()
	void setDefaults() {
		if(_obj.pushFunction("setDefaults")) {
			return (_obj.callFunction<void>());
		}

		return ExplosionEffect::setDefaults();
	};

	// void osgParticle::ExplosionEffect::setUpEmitterAndProgram()
	void setUpEmitterAndProgram() {
		if(_obj.pushFunction("setUpEmitterAndProgram")) {
			return (_obj.callFunction<void>());
		}

		return ExplosionEffect::setUpEmitterAndProgram();
	};

	// osgParticle::Emitter * osgParticle::ExplosionEffect::getEmitter()
	osgParticle::Emitter * getEmitter() {
		if(_obj.pushFunction("getEmitter")) {
			return (_obj.callFunction<osgParticle::Emitter*>());
		}

		return ExplosionEffect::getEmitter();
	};

	// const osgParticle::Emitter * osgParticle::ExplosionEffect::getEmitter() const
	const osgParticle::Emitter * getEmitter() const {
		if(_obj.pushFunction("getEmitter")) {
			return (_obj.callFunction<osgParticle::Emitter*>());
		}

		return ExplosionEffect::getEmitter();
	};

	// osgParticle::Program * osgParticle::ExplosionEffect::getProgram()
	osgParticle::Program * getProgram() {
		if(_obj.pushFunction("getProgram")) {
			return (_obj.callFunction<osgParticle::Program*>());
		}

		return ExplosionEffect::getProgram();
	};

	// const osgParticle::Program * osgParticle::ExplosionEffect::getProgram() const
	const osgParticle::Program * getProgram() const {
		if(_obj.pushFunction("getProgram")) {
			return (_obj.callFunction<osgParticle::Program*>());
		}

		return ExplosionEffect::getProgram();
	};


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

		wrapper_osgParticle_ExplosionEffect* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_ExplosionEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Node::public_addParent(osg::Group *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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

		wrapper_osgParticle_ExplosionEffect* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_ExplosionEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Node::public_removeParent(osg::Group *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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

		wrapper_osgParticle_ExplosionEffect* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_ExplosionEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Node::public_setNumChildrenRequiringUpdateTraversal(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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

		wrapper_osgParticle_ExplosionEffect* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_ExplosionEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Node::public_setNumChildrenRequiringEventTraversal(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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

		wrapper_osgParticle_ExplosionEffect* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_ExplosionEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Node::public_setNumChildrenWithCullingDisabled(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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

		wrapper_osgParticle_ExplosionEffect* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_ExplosionEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Node::public_setNumChildrenWithOccluderNodes(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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

		wrapper_osgParticle_ExplosionEffect* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_ExplosionEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_signalObserversAndDelete(bool, bool) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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


		wrapper_osgParticle_ExplosionEffect* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_ExplosionEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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

