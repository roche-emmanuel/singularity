#ifndef _WRAPPERS_WRAPPER_OSGDB_IMAGEOPTIONS_TEXCOORDRANGE_H_
#define _WRAPPERS_WRAPPER_OSGDB_IMAGEOPTIONS_TEXCOORDRANGE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/ImageOptions>

class wrapper_osgDB_ImageOptions_TexCoordRange : public osgDB::ImageOptions::TexCoordRange {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgDB_ImageOptions_TexCoordRange(lua_State* L, lua_Table* dum) : osgDB::ImageOptions::TexCoordRange(), _obj(L,-1) {};




};




#endif

