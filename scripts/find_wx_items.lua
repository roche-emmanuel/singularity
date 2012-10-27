#!/bin/sgt

-- This script is used to find all the definitions from the wxWidgets source folders
-- as well as all the event types.
-- to do so, each header file is parsed line by line looking for the define lines.

require "luna"
 -- needed for the core module.
local log = require "logger"
log:notice "Executing init script..."

-- retrieve config:
local cfg = require "config"
local core = require "core"

core.LogManager.instance():setNotifyLevel(core.LogManager.DEBUG2)

local rpath = "W:/Cloud/Dev/Deps/win32/wxWidgets-2.9.3/include"

local efile = "W:/Cloud/Projects/singularity/sources/plug_wx/interface/wx_events.h"
local efinder = require("helpers.wxEventFinder"){rootFolder=rpath,
	destFile=efile,
	ignorePatterns={"#","%(","WEBKIT","SCROLL_ENDSCROLL","ACTIVEX","WEB_VIEW",
			"GRID_CREATE_CELL","GRID_CHANGE_LABELS","GRID_CHANGE_SEL_LABEL"}}

local dfile = "W:/Cloud/Projects/singularity/sources/plug_wx/interface/wx_defines.h"
local dfinder = require("helpers.wxDefineFinder"){rootFolder=rpath,
	destFile=dfile,
	ignoreFiles={"private%.h$","debughlp%.h","propgrid%.h","wince","os2","osx","gtk","motif","unix","x11","palmos","cocoa"},
	ignorePatterns={"#","%(","IMPLEMENT","wxBC_","wxT$","COCOA_","wxOSX_",
			"CALLBACK","FUNC","wxPROCESS","wxPASSWORD","wxEVT_SCROLL_ENDSCROLL",
			"wxHAS_HUGE_FILES","wxPATH_SEP","wxGA_PROGRESSBAR","wxGENERIC_BITMAPCOMBOBOX",
			"wxID_ADD","wxID_RED","wxID_GREEN","wxID_BLUE","wxGRID_VALUE_TEXT",
			"wxGRID_VALUE_LONG","wxSW_$","wxTAB_STYLE_DRAW_BOX","wxTAB_STYLE_COLOUR_INTERIOR",
			"wxAN_FIT_ANIMATION","wxTREE_INSERT_FIRST","wxTREE_INSERT_LAST",
			"wxIMAGE_OPTION_","wxUSE_ARRAY_MEMORY_OPERATORS","wxDEFAULT_BUTTON_MARGIN",
			"wxMOTIF_","wxUSE_SELECT_DISPATCHER","wxUSE_EPOLL_DISPATCHER","wxUSE_MOUSEEVENT_HACK",
			"wxSL_NOTIFY_DRAG","wxSP_SASH_AQUA","wxSP_FULLSASH","_MAC_","wxDIALOG_MODELESS",
			"wxDIALOG_MODAL","wxTE_LINEWRAP","wxRESIZE_BOX","wxTHICK_FRAME","wxNO_3D","wxUSER_COLOURS",
			"wxTR_AQUA_BUTTONS","wxACTION_TOOLBAR_TOGGLE","wxACTION_TOOLBAR_PRESS","wxACTION_TOOLBAR_RELEASE",
			"wxACTION_TOOLBAR_CLICK","wxUSE_TWO_WINDOWS","wx[A-Z]$","SVNPRINTF","wxHAS_NATIVE_OVERLAY",
			"wxUNKNOWN_PLATFORM","wxWINDOWS_NT","wxMSW","wxMGL","wxGTK","wxPG_ICON_WIDTH","wxPG_USE_RENDERER_NATIVE",
			"wxPG_SUPPORT_TOOLTIPS","wxPG_TEXTCTRLXADJUST","wxFNSTRINGCAST","wxCRITSECT_IS_MUTEX"}}

local nfile = "W:/Cloud/Projects/singularity/sources/plug_wx/interface/wx_enums.h"
local nfinder = require("helpers.wxEnumFinder"){rootFolder=rpath,
	destFile=nfile,
	ignoreFiles={"prntdlgg%.h","fontdlgg%.h","evtloopsrc%.h","private%.h$","debughlp%.h","propgrid%.h","wince","os2","osx","gtk","motif","unix","x11","palmos","cocoa"},
	ignorePatterns={"wxOVERWRITE_PROMPT","wxXLFD_FOUNDRY","WEBKIT","wxCRASH_","HHWIN_","HH_TAB_","IT_",
			"HHACT_","wxFONTENCODING_UNKNOWN","Size_","wxFDIO_","wxPAT_","wxTREE_EXPAND_","wxTOPLEVEL_",
			"wxHT_","wxPROP_","wxT_"}}
	
local t1 = os.clock()
--efinder:run()
--dfinder:run()
nfinder:run()

local t2 = os.clock();

log:notice "Cleaning up."
collectgarbage("collect")
	
local diff = os.difftime(t2,t1)
log:notice("Script execution done in "..diff.." seconds")
