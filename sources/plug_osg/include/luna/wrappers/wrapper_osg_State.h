#ifndef _WRAPPERS_WRAPPER_OSG_STATE_H_
#define _WRAPPERS_WRAPPER_OSG_STATE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/State>

class wrapper_osg_State : public osg::State, public luna_wrapper_base {

public:
		

	~wrapper_osg_State() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_State(lua_State* L, lua_Table* dum) : osg::State(), luna_wrapper_base(L) {};

	// void osg::State::objectDeleted(void * arg1)
	void objectDeleted(void * arg1) {
		if(_obj.pushFunction("objectDeleted")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return State::objectDeleted(arg1);
	};

	// void osg::State::frameCompleted()
	void frameCompleted() {
		if(_obj.pushFunction("frameCompleted")) {
			return (_obj.callFunction<void>());
		}

		return State::frameCompleted();
	};




// void osg::State::setUpVertexAttribAlias(osg::VertexAttribAlias & alias, unsigned int location, const std::string glName, const std::string osgName, const std::string & declaration)
void public_setUpVertexAttribAlias(osg::VertexAttribAlias & alias, unsigned int location, const std::string glName, const std::string osgName, const std::string & declaration) {
	return osg::State::setUpVertexAttribAlias(alias, location, glName, osgName, declaration);
};

// bool osg::State::applyMode(unsigned int mode, bool enabled, osg::State::ModeStack & ms)
bool public_applyMode(unsigned int mode, bool enabled, osg::State::ModeStack & ms) {
	return osg::State::applyMode(mode, enabled, ms);
};

// bool osg::State::applyModeOnTexUnit(unsigned int unit, unsigned int mode, bool enabled, osg::State::ModeStack & ms)
bool public_applyModeOnTexUnit(unsigned int unit, unsigned int mode, bool enabled, osg::State::ModeStack & ms) {
	return osg::State::applyModeOnTexUnit(unit, mode, enabled, ms);
};

// bool osg::State::applyAttribute(const osg::StateAttribute * attribute, osg::State::AttributeStack & as)
bool public_applyAttribute(const osg::StateAttribute * attribute, osg::State::AttributeStack & as) {
	return osg::State::applyAttribute(attribute, as);
};

// bool osg::State::applyAttributeOnTexUnit(unsigned int unit, const osg::StateAttribute * attribute, osg::State::AttributeStack & as)
bool public_applyAttributeOnTexUnit(unsigned int unit, const osg::StateAttribute * attribute, osg::State::AttributeStack & as) {
	return osg::State::applyAttributeOnTexUnit(unit, attribute, as);
};

// bool osg::State::applyGlobalDefaultAttribute(osg::State::AttributeStack & as)
bool public_applyGlobalDefaultAttribute(osg::State::AttributeStack & as) {
	return osg::State::applyGlobalDefaultAttribute(as);
};

// bool osg::State::applyGlobalDefaultAttributeOnTexUnit(unsigned int unit, osg::State::AttributeStack & as)
bool public_applyGlobalDefaultAttributeOnTexUnit(unsigned int unit, osg::State::AttributeStack & as) {
	return osg::State::applyGlobalDefaultAttributeOnTexUnit(unit, as);
};

// ModeMap & osg::State::getOrCreateTextureModeMap(unsigned int unit)
ModeMap & public_getOrCreateTextureModeMap(unsigned int unit) {
	return osg::State::getOrCreateTextureModeMap(unit);
};

// AttributeMap & osg::State::getOrCreateTextureAttributeMap(unsigned int unit)
AttributeMap & public_getOrCreateTextureAttributeMap(unsigned int unit) {
	return osg::State::getOrCreateTextureAttributeMap(unit);
};

// void osg::State::applyModeMap(ModeMap & modeMap)
void public_applyModeMap(ModeMap & modeMap) {
	return osg::State::applyModeMap(modeMap);
};

// void osg::State::applyAttributeMap(AttributeMap & attributeMap)
void public_applyAttributeMap(AttributeMap & attributeMap) {
	return osg::State::applyAttributeMap(attributeMap);
};

// void osg::State::applyUniformMap(UniformMap & uniformMap)
void public_applyUniformMap(UniformMap & uniformMap) {
	return osg::State::applyUniformMap(uniformMap);
};

// void osg::State::applyModeMapOnTexUnit(unsigned int unit, ModeMap & modeMap)
void public_applyModeMapOnTexUnit(unsigned int unit, ModeMap & modeMap) {
	return osg::State::applyModeMapOnTexUnit(unit, modeMap);
};

// void osg::State::applyAttributeMapOnTexUnit(unsigned int unit, AttributeMap & attributeMap)
void public_applyAttributeMapOnTexUnit(unsigned int unit, AttributeMap & attributeMap) {
	return osg::State::applyAttributeMapOnTexUnit(unit, attributeMap);
};

// void osg::State::haveAppliedMode(ModeMap & modeMap, unsigned int mode, unsigned int value)
void public_haveAppliedMode(ModeMap & modeMap, unsigned int mode, unsigned int value) {
	return osg::State::haveAppliedMode(modeMap, mode, value);
};

// void osg::State::haveAppliedMode(ModeMap & modeMap, unsigned int mode)
void public_haveAppliedMode(ModeMap & modeMap, unsigned int mode) {
	return osg::State::haveAppliedMode(modeMap, mode);
};

// void osg::State::haveAppliedAttribute(AttributeMap & attributeMap, const osg::StateAttribute * attribute)
void public_haveAppliedAttribute(AttributeMap & attributeMap, const osg::StateAttribute * attribute) {
	return osg::State::haveAppliedAttribute(attributeMap, attribute);
};

// void osg::State::haveAppliedAttribute(AttributeMap & attributeMap, osg::StateAttribute::Type type, unsigned int member)
void public_haveAppliedAttribute(AttributeMap & attributeMap, osg::StateAttribute::Type type, unsigned int member) {
	return osg::State::haveAppliedAttribute(attributeMap, type, member);
};

// bool osg::State::getLastAppliedMode(const ModeMap & modeMap, unsigned int mode) const
bool public_getLastAppliedMode(const ModeMap & modeMap, unsigned int mode) const {
	return osg::State::getLastAppliedMode(modeMap, mode);
};

// const osg::StateAttribute * osg::State::getLastAppliedAttribute(const AttributeMap & attributeMap, osg::StateAttribute::Type type, unsigned int member) const
const osg::StateAttribute * public_getLastAppliedAttribute(const AttributeMap & attributeMap, osg::StateAttribute::Type type, unsigned int member) const {
	return osg::State::getLastAppliedAttribute(attributeMap, type, member);
};

// void osg::State::loadModelViewMatrix()
void public_loadModelViewMatrix() {
	return osg::State::loadModelViewMatrix();
};

// bool osg::State::computeSecondaryColorSupported() const
bool public_computeSecondaryColorSupported() const {
	return osg::State::computeSecondaryColorSupported();
};

// bool osg::State::computeFogCoordSupported() const
bool public_computeFogCoordSupported() const {
	return osg::State::computeFogCoordSupported();
};

// bool osg::State::computeVertexBufferObjectSupported() const
bool public_computeVertexBufferObjectSupported() const {
	return osg::State::computeVertexBufferObjectSupported();
};

// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
	return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
};

// void osg::Referenced::deleteUsingDeleteHandler() const
void public_deleteUsingDeleteHandler() const {
	return osg::Referenced::deleteUsingDeleteHandler();
};


};




#endif

