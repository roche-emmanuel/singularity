#ifndef _WRAPPERS_WRAPPER_OSGUTIL_TESSELLATOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_TESSELLATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/Tessellator>

class wrapper_osgUtil_Tessellator : public osgUtil::Tessellator, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_Tessellator() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_Tessellator(lua_State* L, lua_Table* dum) : osgUtil::Tessellator(), luna_wrapper_base(L) {};




// void osgUtil::Tessellator::reduceArray(osg::Array * cold, const unsigned int nnu)
void public_reduceArray(osg::Array * cold, const unsigned int nnu) {
	return osgUtil::Tessellator::reduceArray(cold, nnu);
};

// void osgUtil::Tessellator::collectTessellation(osg::Geometry & cxgeom, unsigned int originalIndex)
void public_collectTessellation(osg::Geometry & cxgeom, unsigned int originalIndex) {
	return osgUtil::Tessellator::collectTessellation(cxgeom, originalIndex);
};

// void osgUtil::Tessellator::addContour(unsigned int mode, unsigned int first, unsigned int last, osg::Vec3Array * vertices)
void public_addContour(unsigned int mode, unsigned int first, unsigned int last, osg::Vec3Array * vertices) {
	return osgUtil::Tessellator::addContour(mode, first, last, vertices);
};

// void osgUtil::Tessellator::addContour(osg::PrimitiveSet * primitive, osg::Vec3Array * vertices)
void public_addContour(osg::PrimitiveSet * primitive, osg::Vec3Array * vertices) {
	return osgUtil::Tessellator::addContour(primitive, vertices);
};

// void osgUtil::Tessellator::handleNewVertices(osg::Geometry & geom, VertexPtrToIndexMap & vertexPtrToIndexMap)
void public_handleNewVertices(osg::Geometry & geom, VertexPtrToIndexMap & vertexPtrToIndexMap) {
	return osgUtil::Tessellator::handleNewVertices(geom, vertexPtrToIndexMap);
};

// void osgUtil::Tessellator::begin(unsigned int mode)
void public_begin(unsigned int mode) {
	return osgUtil::Tessellator::begin(mode);
};

// void osgUtil::Tessellator::vertex(osg::Vec3f * vertex)
void public_vertex(osg::Vec3f * vertex) {
	return osgUtil::Tessellator::vertex(vertex);
};

// void osgUtil::Tessellator::end()
void public_end() {
	return osgUtil::Tessellator::end();
};

// void osgUtil::Tessellator::error(unsigned int errorCode)
void public_error(unsigned int errorCode) {
	return osgUtil::Tessellator::error(errorCode);
};

// static void osgUtil::Tessellator::beginCallback(unsigned int which, void * userData)
static void public_beginCallback(unsigned int which, void * userData) {
	return osgUtil::Tessellator::beginCallback(which, userData);
};

// static void osgUtil::Tessellator::vertexCallback(void * data, void * userData)
static void public_vertexCallback(void * data, void * userData) {
	return osgUtil::Tessellator::vertexCallback(data, userData);
};

// static void osgUtil::Tessellator::endCallback(void * userData)
static void public_endCallback(void * userData) {
	return osgUtil::Tessellator::endCallback(userData);
};

// static void osgUtil::Tessellator::errorCallback(unsigned int errorCode, void * userData)
static void public_errorCallback(unsigned int errorCode, void * userData) {
	return osgUtil::Tessellator::errorCallback(errorCode, userData);
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

