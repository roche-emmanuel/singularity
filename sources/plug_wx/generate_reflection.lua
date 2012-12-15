-- When calling this script externally the caller should provide the following arguments:
-- flavor [optional, default = "win32" ] : Use to specify which flavor of the lua modules should be loaded.
-- sgt_path : the root path of the singularity repository, this is needed to retrieve the modules.
-- xml_path : the folder where the source xml files are located
-- project : the current project name.

flavor = flavor or "win32"
sgt_path = sgt_path:gsub("\\","/")
root_path = sgt_path .. "software/"
dest_path = sgt_path .. "sources/plug_" .. project .. "/"

shared_ext="dll"
if flavor=="linux32" or flavor=="linux64" then
    shared_ext="so"
end

package.cpath = package.cpath..";".. root_path .. "bin/".. flavor .."/modules/?.sgp;".. root_path .. "bin/".. flavor .."/libraries/?.".. shared_ext
package.path = package.path..";".. root_path .. "lua/modules/?.lua;".. root_path .. "lua/libraries/?.lua"

local ReflectionGenerator = require "bindings.LunaReflectionGenerator"

ReflectionGenerator.generate{
	xmlpath=xml_path,
	modName="wx",
	luaOpenName=project,
	headers={"plug_common.h"},
	destpath=dest_path,
	ignoreFunctions={
		"iterator",
		"Mac",
		"ProcessMessage",
		"CompareFunction",
		"OnAssertFailure",
		"HandleEvent",
		"EnableYearChange",
		"GetHandlers",
		"wxUSE_UNICODE_dependent",
		"wxIntPtr",
		"wxMutex",
		"wxCondition",
		"wxTmem",
		"wxStrc",
		"wxStrn",
		"wchar_t",
		"wxDataViewListModel",
		"<",
		"wxPrint",
		"wxDllType",
		"wxMBConv",
		"FILE",
		"wxGraphics",
		"FindHandler",
		"wxObjectConstructorFn",
		"wxCalendarCtrl::HitTest",
		--"unsigned char %*",
		"wxULongLong_t",
		"wxUint64",
		"wxInt64",
		"__int64",
		"wxLongLong_t",
		"time_t",
		"tm %*",
		"tm &",
		"_SYSTEMTIME",
		"istream",
		"wxDocument::SaveObject",
		"wxDocument::LoadObject",
		"wxDynamicLibraryDetails::GetAddress",
		"bool wxEncodingConverter::Convert",
		"wxObjectEventFunction",
		"wxEventTable",
		"wxExtHelpController::DisplayContents",
		"SetExtraControlCreator",
		"MessageParameters",
		"wxNativeEncodingInfo",
		"wxEnhMetaFileDC",
		"GetAllEncodingNames",
		"wxHelpController::OnQuit",
		"GetLibraryVersionInfo",
		"wxIndividualLayoutConstraint::GetOtherWindow",
		"wxFilterClassFactory::GetProtocols",
		"wxHelpControllerHelpProvider::GetHelpController",
		"wxIPaddress::BroadcastAddress",
		"ostream",
		"wxMediaCtrl::GetPlaybackrate",
		"ButtonLabel",
		"wxItemContainer::Set",
		"wxListBox::Set",
		--"wxMouseState",
		"Buffer",
		"wxNotebook::OnSelChange",
		"wxMultiChoiceDialog::GetSelection",
		"wxPathList",
		"wxPGChoices::Add",
		"wxPGPaintData",
		"SetDashes",
		"wxPropertyGrid::RegisterEditorClass",
		"wxPGPropArg",
		"SetSortFunction",
		"GetSortFunction",
		"wxPropertyGrid::SetButtonShortcut",
		"wxPropertyGrid::Create",
		"wxArrayPGProperty",
		"wxPropertyGridManager::SetStringSelection",
		"wxPropertySheetDialog::SetInnerSizer",
		"wxRegEx::Matches",
		"wxRegKey",
		"wxSashWindow::HasBorder",
		"wxSashWindow::SetSashBorder",
		"wxSockAddress::SockAddrLen",
		"wxSortedArrayString",
		"wxSound::IsPlaying",
		"wxStandardPaths::SetInstallPrefix",
		"wxStandardPaths::GetInstallPrefix",
		"wxStreamToTextRedirector",
		"wxTextInputStream::ReadString",
		"wxThread",
		"wxTipProvider::PreProcessTip",
		"wxTopLevelWindow::UseNativeDecorationsByDefault",
		"wxTopLevelWindow::UseNativeDecorations",
		"wxTopLevelWindow::SetRightMenu",
		"wxTopLevelWindow::SetLeftMenu",
		"wxTopLevelWindow::IsUsingNativeDecorations",
		"WXLPARAM",
		"WXWPARAM",
		"wxTreeCtrl::SetButtonsImageList",
		"wxTreeCtrl::GetButtonsImageList",
		"wxTreeCtrl::AssignButtonsImageList",
		"wxUniChar",
		"wxTreeListCtrl::GetSortColumn",
		"wxTreeListCtrl::GetSelections",
		"wxURI::HasUser",
		"wxUString",
		"wxVariant",
		"wxVListBox",
		"Accessible",
		"wxXmlDocument",
		"wxZip",
		"wxString::",
		"wxCStrData",
		"wxStrpb",
		"wxStricmp",
		"wxStrx",
		"wxStrt",
		"wxKill",
		"wxGetLinuxDistributionInfo",
		"wxSetDisplayName",
		"wxGetEmailAddress",
		"wxGetHostName",
		"wxGetUserId",
		"wxGetUserName",
		"wxStrs",
		"wxPostDelete",
		"wxGetDisplayName",
		"wxGetenv",
		"wxRichTextObject",
		"[%s%(]+signed char %*",
		"va_list",
		"HINSTANCE",
		"wxGetTempFileName",
		"wxGetWorkingDirectory",
		"wxGetDiskSpace",
		"wxSetAssertHandler",
		"wxFileNameFromPath",
		"wxAtomic",
		"wxJoin",
		"wxAppDerivedClass",
		"wxGenericAboutBox",
		"wxQsort",
		"wxMakeMetafilePlaceable",
		"wxConvertToIeeeExtended",
		"wxConvertFromIeeeExtended",
		"wxSplit",
		"wxRichTextAttr",
		"wxRichTextPageLocation",
		"wxRichTextListStyleDefinition::GetCombinedStyleLevel",
		"wxRichText",
		"wxToolBar::SetBitmapResource",
		"wxHtmlWinParser::GetEncodingConverter",
		"wxHtmlWinParser::GetInputEncoding",
		"wxHtmlWinParser::GetOutputEncoding",
		"wxHtmlWinParser::GetWindow",
		"wxHtmlWinParser::SetInputEncoding",
		"wxHtmlParser::AddWord",
		"wxHtmlURLType",
		"wxHtmlSelection",
		"wxHtmlWindowInterface",
		"wxBitmapComboBox::Insert",
		
		--- missing links:
		"wxApp::Initialize",
		"wxAppConsoleBase::OnAssertFailure",
		"wxAppConsoleBase::OnAssert",
		--"wxClassInfo::GetBaseClassName1",
		--"wxClassInfo::GetBaseClassName2",
		--"wxClassInfo::GetClassName",
		"wxDateTime::IsGregorianDate",
		"wxFileName::IsPathSeparator",
		"wxHyperlinkCtrl::Create",
		"wxKeyEvent::GetUnicodeKey",
		"wxNumberFormatter::GetDecimalSeparator",
		"wxNumberFormatter::GetThousandsSeparatorIfUsed",
		"wxPoint2DDouble::SetPolarCoordinates",
		"wxPoint2DDouble::op_mult",
		"wxPoint2DDouble::op_div",
		"wxPoint2DInt::SetPolarCoordinates",
		"wxPoint2DInt::op_mult",
		"wxPoint2DInt::op_div",
		"wxRichToolTip::SetTitleFont",
		"wxStringTokenizer::GetLastDelimiter",
		"wxTarEntry::GetUserName",
		"wxTextBoxAttr::IsDefault",
		"wxTextFile::GetEOL",
		"wxTextInputStream::GetChar",
		"wxTextOutputStream::PutChar",
		"Iterator",
		"wxSysErrorMsg",
		"wxRemove",
		"wxAtoi",
		"wxRound",
		"wxSetlocale",
		"wxBase64Decode",
		"wxPersistentTreeBookCtrl::Restore",
		"wxFormatString",
		"wxRename",
		"wxAtol",
		"wxStrdup",
		"wxSystem",
		"wxAtof",
		"wxStringTokenize",
		"wxGetEnvMap",
		"wxHVScrolledWindow::wxHVScrolledWindow",
		
		"wxIcon::ConvertToDisabled",
		"wxXmlResource::wxXmlResource", -- problem with the flags.
		"wxZlibOutputStream::wxZlibOutputStream", -- problem with the flags.
		
		"wxExtHelpController",
		"wxFFile",
		"wxLL",
		"wxULL",
	},
	ignoreWrappers={
		"wxBitmapComboBox::IsEmpty",
		"wxComboBox::IsEmpty",
		"wxFileCtrl::Command",
		"wxHeaderCtrl::DoGetBestSize",
		"wxHeaderCtrlSimple::DoGetBestSize",
		"wxHtmlHelpDialog::",
		"wxHtmlListBox::ScrollPages",
		"wxHtmlListBox::ScrollLines",
		"wxLogGui::DoShowSingleLogMessage",
		"wxLogGui::DoShowMultipleLogMessages",
		"wxOwnerDrawnComboBox::GetStringSelection",
		"wxOwnerDrawnComboBox::IsEmpty",
		"wxPageSetupDialog::",
		"wxPGCell::CreateRefData",
		"wxPGCell::CloneRefData",
		"wxPGChoiceEntry::CreateRefData",
		"wxPGChoiceEntry::CloneRefData",
		"wxPGEditor::CreateControls",
		"wxPrintDialog::",
		"wxRichTextStyleListBox::ScrollLines",
		"wxRichTextStyleListBox::ScrollPages",
		"wxSimpleHtmlListBox::ScrollLines",
		"wxSimpleHtmlListBox::ScrollPages",
		"wxVListBox::ScrollLines",
		"wxVListBox::ScrollPages",		
		"wxVScrolledWindow::ScrollLines",
		"wxVScrolledWindow::ScrollPages",		
		"wxSystemSettings::",
		"wxURLDataObject::",
		"WXWidget",
		"wxPGCellRenderer",
		"wxPGEditorDialogAdapter",
		"wxRibbonToolBarToolBase",
		"wxDirFilterListCtrl",
		
		"HasTransparentBackground",
		"SetBackgroundColour",
		"SetForegroundColour",	
		"wxTreeListEvent::GetClassInfo",		
	},
	ignoreDefines={"wxACC_"},
	ignoreConverters={
		"wxTrackable",
		"wxKeyboardState",
		"wxArrayString",
		"wxTextAttr",
		},
	ignoreEnumValues={"wxWEB_"},
	ignoreClasses={
        "wxPersistentTreeBook",
        "wxPersistentBookCtrl",
        "wxPersistentTLW",
        "wxRichTextParagraphBox",
        "wxAccessible",
        "wxArchive",
        "wxWebView",
        "<",
        "wxFileStream",
        "wxFFileStream",
        "wxVarHVScrollHelper",
        "Buffer",
        "wxCustomBackgroundWindow",
        "wxNavigationEnabled",
        "wxPostScript",
        "iterator",
        "Iterator",
        "ActiveX",
        "wxAutomationObject",
        "wxDDE",
        "wxDebug",
        "wxScrolled$",
		"wxScrolledWindow",
        "wxHash",
        "wxMBConv",
        "wxNotificationMessage",
        "wxRefCounter",
        "wxPixelData",
        "wxScoped",
        "wxScopeGuard",        
        "wxAny$",        
        "wxAnyV",   
    },
	ignoreHeaders={"helpers%.h","wx_events%.h","wx_defines%.h","wx_enums%.h"},
	ignoreClassDeclarations={},
	mappedBaseTypes={
		wxKeyboardState="wxObject",
		wxMouseState="wxObject",
		wxTextEntry="wxObject",
	},
	locationPrefixes={
		dest_path.."interface/",
	}
}

