/*
 * launcher.cpp
 *
 *  Created on: 24 janv. 2012
 *      Author: kenshin
 */

#include <iostream>
#include <string>
#include <algorithm>

#include "sgtCommon.h"
#include "log/FileLogger.h"
#include "log/StdLogger.h"

#include "osg/View"
#include "osgViewer/Viewer"

template <typename T>
class Container {
public:
	typedef struct {T* ptr;} userdata;
};

int main(int argc, char *argv[]) {
	TRY {
		// Init the log system.
		sgtLogManager::instance().setDefaultLevelFlags(sgtLogManager::TIME_STAMP);
		sgtLogManager::instance().setDefaultTraceFlags(sgtLogManager::TIME_STAMP);
		sgtLogManager::instance().addLevelFlags(sgtLogManager::FATAL,sgtLogManager::FILE_NAME|sgtLogManager::LINE_NUMBER);
		sgtLogManager::instance().addLevelFlags(sgtLogManager::ERROR,sgtLogManager::FILE_NAME|sgtLogManager::LINE_NUMBER);
		sgtLogManager::instance().addLevelFlags(sgtLogManager::WARNING,sgtLogManager::FILE_NAME|sgtLogManager::LINE_NUMBER);

		sgtLogManager::instance().setVerbose(true);
		sgtLogManager::instance().setNotifyLevel(sgtLogManager::DEBUG0); // Log until DEBUG0 level only.

		sgtLogManager::instance().addSink(new sgtFileLogger("test_virtuaal_base.log"));
		sgtLogManager::instance().addSink(new sgtStdLogger());
		
		
		logINFO("Starting test");

		// we create an osgViewer::View object:
		osgViewer::View* view = new osgViewer::View();
		view->setName("hello");

		// Test 1:
		//osg::Referenced* ref = (osg::Referenced*)view;
		//osgViewer::View* view2 = dynamic_cast<osgViewer::View*>(ref);
		
		//Container<osgViewer::View>::userdata* data = new Container<osgViewer::View>::userdata();
		//data->ptr = view;
		
		Container<osg::Referenced>::userdata* data = new Container<osg::Referenced>::userdata();
		data->ptr = (osg::Referenced*)view;
		
		void* data_tmp = (void*)data;
		Container<osg::Referenced>::userdata* data2 = (Container<osg::Referenced>::userdata*)(data_tmp);
		osgViewer::View* view2 = dynamic_cast<osgViewer::View*>(data2->ptr);
		
		if(view2){
			logINFO("The test is successful.");
		}
		else {
			logINFO("The test failed.");		
		}
		
		logINFO("Test done.");
	}
	CATCH("in main entry point.");
	return 0;
}
