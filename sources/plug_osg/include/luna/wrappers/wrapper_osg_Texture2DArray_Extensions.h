#ifndef _WRAPPERS_WRAPPER_OSG_TEXTURE_DARRAY_EXTENSIONS_H_
#define _WRAPPERS_WRAPPER_OSG_TEXTURE_DARRAY_EXTENSIONS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Texture2DArray>

class wrapper_osg_Texture2DArray_Extensions : public osg::Texture2DArray::Extensions, public luna_wrapper_base {

public:
		

	~wrapper_osg_Texture2DArray_Extensions() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_Texture2DArray_Extensions(lua_State* L, lua_Table* dum, unsigned int contextID) : osg::Texture2DArray::Extensions(contextID), luna_wrapper_base(L) {};




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

