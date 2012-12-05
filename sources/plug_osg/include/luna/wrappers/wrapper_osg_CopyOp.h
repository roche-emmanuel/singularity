#ifndef _WRAPPERS_WRAPPER_OSG_COPYOP_H_
#define _WRAPPERS_WRAPPER_OSG_COPYOP_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/CopyOp>

class wrapper_osg_CopyOp : public osg::CopyOp {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_CopyOp(lua_State* L, lua_Table* dum, unsigned int flags = osg::CopyOp::SHALLOW_COPY) : osg::CopyOp(flags), _obj(L,-1) {};

	// osg::Referenced * osg::CopyOp::operator()(const osg::Referenced * ref) const
	osg::Referenced * operator()(const osg::Referenced * ref) const {
		if(_obj.pushFunction("operator()")) {
			_obj.pushArg(ref);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return osg::CopyOp::operator()(ref);
	};

	// osg::Object * osg::CopyOp::operator()(const osg::Object * obj) const
	osg::Object * operator()(const osg::Object * obj) const {
		if(_obj.pushFunction("operator()")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::CopyOp::operator()(obj);
	};

	// osg::Node * osg::CopyOp::operator()(const osg::Node * node) const
	osg::Node * operator()(const osg::Node * node) const {
		if(_obj.pushFunction("operator()")) {
			_obj.pushArg(node);
			return (_obj.callFunction<osg::Node*>());
		}

		return osg::CopyOp::operator()(node);
	};

	// osg::Drawable * osg::CopyOp::operator()(const osg::Drawable * drawable) const
	osg::Drawable * operator()(const osg::Drawable * drawable) const {
		if(_obj.pushFunction("operator()")) {
			_obj.pushArg(drawable);
			return (_obj.callFunction<osg::Drawable*>());
		}

		return osg::CopyOp::operator()(drawable);
	};

	// osg::StateSet * osg::CopyOp::operator()(const osg::StateSet * stateset) const
	osg::StateSet * operator()(const osg::StateSet * stateset) const {
		if(_obj.pushFunction("operator()")) {
			_obj.pushArg(stateset);
			return (_obj.callFunction<osg::StateSet*>());
		}

		return osg::CopyOp::operator()(stateset);
	};

	// osg::StateAttribute * osg::CopyOp::operator()(const osg::StateAttribute * attr) const
	osg::StateAttribute * operator()(const osg::StateAttribute * attr) const {
		if(_obj.pushFunction("operator()")) {
			_obj.pushArg(attr);
			return (_obj.callFunction<osg::StateAttribute*>());
		}

		return osg::CopyOp::operator()(attr);
	};

	// osg::Texture * osg::CopyOp::operator()(const osg::Texture * text) const
	osg::Texture * operator()(const osg::Texture * text) const {
		if(_obj.pushFunction("operator()")) {
			_obj.pushArg(text);
			return (_obj.callFunction<osg::Texture*>());
		}

		return osg::CopyOp::operator()(text);
	};

	// osg::Image * osg::CopyOp::operator()(const osg::Image * image) const
	osg::Image * operator()(const osg::Image * image) const {
		if(_obj.pushFunction("operator()")) {
			_obj.pushArg(image);
			return (_obj.callFunction<osg::Image*>());
		}

		return osg::CopyOp::operator()(image);
	};

	// osg::Array * osg::CopyOp::operator()(const osg::Array * array) const
	osg::Array * operator()(const osg::Array * array) const {
		if(_obj.pushFunction("operator()")) {
			_obj.pushArg(array);
			return (_obj.callFunction<osg::Array*>());
		}

		return osg::CopyOp::operator()(array);
	};

	// osg::Shape * osg::CopyOp::operator()(const osg::Shape * shape) const
	osg::Shape * operator()(const osg::Shape * shape) const {
		if(_obj.pushFunction("operator()")) {
			_obj.pushArg(shape);
			return (_obj.callFunction<osg::Shape*>());
		}

		return osg::CopyOp::operator()(shape);
	};

	// osg::Uniform * osg::CopyOp::operator()(const osg::Uniform * shape) const
	osg::Uniform * operator()(const osg::Uniform * shape) const {
		if(_obj.pushFunction("operator()")) {
			_obj.pushArg(shape);
			return (_obj.callFunction<osg::Uniform*>());
		}

		return osg::CopyOp::operator()(shape);
	};

	// osg::NodeCallback * osg::CopyOp::operator()(const osg::NodeCallback * nodecallback) const
	osg::NodeCallback * operator()(const osg::NodeCallback * nodecallback) const {
		if(_obj.pushFunction("operator()")) {
			_obj.pushArg(nodecallback);
			return (_obj.callFunction<osg::NodeCallback*>());
		}

		return osg::CopyOp::operator()(nodecallback);
	};

	// osg::StateAttributeCallback * osg::CopyOp::operator()(const osg::StateAttributeCallback * stateattributecallback) const
	osg::StateAttributeCallback * operator()(const osg::StateAttributeCallback * stateattributecallback) const {
		if(_obj.pushFunction("operator()")) {
			_obj.pushArg(stateattributecallback);
			return (_obj.callFunction<osg::StateAttributeCallback*>());
		}

		return osg::CopyOp::operator()(stateattributecallback);
	};




};




#endif

