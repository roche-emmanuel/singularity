#ifndef _WRAPPERS_WRAPPER_OSG_GLBUFFEROBJECT_H_
#define _WRAPPERS_WRAPPER_OSG_GLBUFFEROBJECT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/BufferObject>

class wrapper_osg_GLBufferObject : public osg::GLBufferObject, public luna_wrapper_base {

public:
		

	~wrapper_osg_GLBufferObject() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_GLBufferObject(lua_State* L, lua_Table* dum, unsigned int contextID, osg::BufferObject * bufferObject, unsigned int glObjectID = 0) : osg::GLBufferObject(contextID, bufferObject, glObjectID), luna_wrapper_base(L) {};




// unsigned int osg::GLBufferObject::computeBufferAlignment(unsigned int pos, unsigned int bufferAlignment) const
unsigned int public_computeBufferAlignment(unsigned int pos, unsigned int bufferAlignment) const {
	return osg::GLBufferObject::computeBufferAlignment(pos, bufferAlignment);
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

