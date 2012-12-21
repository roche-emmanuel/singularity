#ifndef _WRAPPERS_WRAPPER_OSG_VERTEXPROGRAM_EXTENSIONS_H_
#define _WRAPPERS_WRAPPER_OSG_VERTEXPROGRAM_EXTENSIONS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/VertexProgram>

class wrapper_osg_VertexProgram_Extensions : public osg::VertexProgram::Extensions, public luna_wrapper_base {

public:
		

	~wrapper_osg_VertexProgram_Extensions() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_VertexProgram_Extensions(lua_State* L, lua_Table* dum, unsigned int contextID) : osg::VertexProgram::Extensions(contextID), luna_wrapper_base(L) {};




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

