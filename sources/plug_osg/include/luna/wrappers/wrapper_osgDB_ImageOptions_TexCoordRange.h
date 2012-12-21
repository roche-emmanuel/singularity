#ifndef _WRAPPERS_WRAPPER_OSGDB_IMAGEOPTIONS_TEXCOORDRANGE_H_
#define _WRAPPERS_WRAPPER_OSGDB_IMAGEOPTIONS_TEXCOORDRANGE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/ImageOptions>

class wrapper_osgDB_ImageOptions_TexCoordRange : public osgDB::ImageOptions::TexCoordRange, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_ImageOptions_TexCoordRange() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_ImageOptions_TexCoordRange(lua_State* L, lua_Table* dum) : osgDB::ImageOptions::TexCoordRange(), luna_wrapper_base(L) {};




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

