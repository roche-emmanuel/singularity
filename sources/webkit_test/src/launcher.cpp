/*
 * launcher.cpp
 *
 *  Created on: 24 janv. 2012
 *      Author: kenshin
 */

#include <iostream>
#include <string>
#include <algorithm>

#include "WebView.h"
#include "wx/app.h"
#include "wx/frame.h"

#include "sgtCommon.h"
#include "log/FileLogger.h"
#include "log/StdLogger.h"


class MyApp : public wxApp
{
public:

    virtual bool OnInit();
};


IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{
	TRY {
		// Init the log system.
		sgtLogManager::instance().setDefaultLevelFlags(sgtLogManager::TIME_STAMP);
		sgtLogManager::instance().setDefaultTraceFlags(sgtLogManager::TIME_STAMP);
		sgtLogManager::instance().addLevelFlags(sgtLogManager::FATAL,sgtLogManager::FILE_NAME|sgtLogManager::LINE_NUMBER);
		sgtLogManager::instance().addLevelFlags(sgtLogManager::ERROR,sgtLogManager::FILE_NAME|sgtLogManager::LINE_NUMBER);
		sgtLogManager::instance().addLevelFlags(sgtLogManager::WARNING,sgtLogManager::FILE_NAME|sgtLogManager::LINE_NUMBER);

		sgtLogManager::instance().setVerbose(true);
		sgtLogManager::instance().setNotifyLevel(sgtLogManager::DEBUG0); // Log until DEBUG0 level only.

		sgtLogManager::instance().addSink(new sgtFileLogger("webkit_test.log"));
		sgtLogManager::instance().addSink(new sgtStdLogger());
		
		
		logINFO("In init.");

		wxInitAllImageHandlers();
		
		wxFrame* frame = new wxFrame();
		
		wxSizer* sizer = new wxBoxSizer(wxVERTICAL);
		frame->SetSizer(sizer);
		
		wxString url = "http://www.google.com";

		wxWebView* webview = new wxWebView((wxWindow*)frame, url, wxID_ANY, wxDefaultPosition, wxSize(200, 200));
		webview->SetBackgroundColour(*wxWHITE);

		sizer->Add(webview,1,wxEXPAND|wxALL,2);
		
		
		frame->CentreOnScreen();
		frame->Show(true);

		logINFO("Leaving init.");
	}
	CATCH("in main entry point.");
	return true;
}

