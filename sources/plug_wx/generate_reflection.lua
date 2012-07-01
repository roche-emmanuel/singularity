flavor = flavor or "win32" --"mingw32"
sgt_path=sgt_path or "W:/Shared/Dev/Projects/singularity/"
root_path = sgt_path.."software/"
dest_path= dest_path or "W:/Shared/Dev/Projects/singularity/sources/plug_" .. project
src_path = src_path or dest_path

root_path = root_path:gsub("\\","/")

print("Flavor is: ".. flavor)
print("Path is: ".. root_path)
print("Dest path is: ".. dest_path)
print("Src path is: ".. src_path)
print("Project name is: ".. project)

shared_ext="dll"
if flavor=="linux32" or flavor=="linux64" then
    shared_ext="so"
end

package.cpath = package.cpath..";".. root_path .. "bin/".. flavor .."/modules/?.sgp;".. root_path .. "bin/".. flavor .."/libraries/?.".. shared_ext
package.path = package.path..";".. root_path .. "lua/modules/?.lua;".. root_path .. "lua/libraries/?.lua"

-- setup the log manager:
require "core"

local logman = core.LogManager.instance()
logman:setDefaultLevelFlags(core.LogManager.TIME_STAMP);
logman:setDefaultTraceFlags(core.LogManager.TIME_STAMP);
logman:addLevelFlags(core.LogManager.FATAL,core.LogManager.FILE_NAME+core.LogManager.LINE_NUMBER);
logman:addLevelFlags(core.LogManager.ERROR,core.LogManager.FILE_NAME+core.LogManager.LINE_NUMBER);
logman:addLevelFlags(core.LogManager.WARNING,core.LogManager.FILE_NAME+core.LogManager.LINE_NUMBER);

logman:setVerbose(true);
logman:setNotifyLevel(core.LogManager.DEBUG3);

logman:addSink(core.FileLogger:new(dest_path.."/reflection.log"));
--logman:addSink(core.StdLogger:new());

local issuesLog = core.FileLogger:new(dest_path.."/reflection_issues.log");
issuesLog:setLevelRange(core.LogManager.FATAL,core.LogManager.WARNING);
logman:addSink(issuesLog);

local log = require "logger" 

log:info "Executing init script"

function stdStringFromLua(buf,index,type,argname)
	buf:writeSubLine("std::string ${2}(lua_tostring(L,${1}),lua_objlen(L,${1}));",index,argname)
end

function stdStringToLua(buf,type,argname)
	local access = type:isPointer() and "->" or "."
	buf:writeSubLine("lua_pushlstring(L,${1}${2}data(),${1}${2}size());",argname,access)
end

function wxStringFromLua(buf,index,type,argname)
	buf:writeSubLine("wxString ${2}(lua_tostring(L,${1}),lua_objlen(L,${1}));",index,argname)
end

function wxStringToLua(buf,type,argname)
	local access = type:isPointer() and "->" or "."
	buf:writeSubLine("lua_pushlstring(L,${1}${2}data(),${1}${2}size());",argname,access)
end

function ucharFromLua(buf,index,type,argname)
	buf:writeSubLine("unsigned char ${2} = (unsigned char)(lua_tointeger(L,${1}));",index,argname)
end

function ucharToLua(buf,type,argname)
    if type:isPointer() then
        buf:writeSubLine('luaL_error(L,"Trying to convert pointer on unsigned char ${1} to lua. This usage should be clarifierd.");',argname)
    else
        buf:writeSubLine("lua_pushnumber(L,(int)${1});",argname,access)
    end
end

function wxcharFromLua(buf,index,type,argname)
    buf:writeSubLine("wxString ${2}_str(lua_tostring(L,${1}),lua_objlen(L,${1}));",index,argname)
    buf:writeSubLine("const wxChar* ${1} = ${1}_str.wc_str();",argname)
end

function wxcharToLua(buf,type,argname)
	local access = type:isPointer() and "->" or "."
	buf:writeSubLine("wxString ${1}_str(${1});",argname)
	buf:writeSubLine("lua_pushlstring(L,${1}_str.data(),${1}_str.size());",argname)
end

function ucharChecker(buf,index,type,defStr)
    buf:writeSubLine("if( ${2}(lua_isnumber(L,${1})==0 || lua_tointeger(L,${1}) != lua_tonumber(L,${1})) ) return false;",index,defStr)
end

local tc = require "bindings.TypeConverter"
	
tc:setFromLuaConverter("wxString",wxStringFromLua)
tc:setFromLuaConverter("std::string",stdStringFromLua)
tc:setFromLuaConverter("string",stdStringFromLua)
tc:setFromLuaConverter("unsigned char",ucharFromLua)
tc:setFromLuaConverter("const wxChar *",wxcharFromLua)

tc:setToLuaConverter("wxString",wxStringToLua)
tc:setToLuaConverter("std::string",stdStringToLua)
tc:setToLuaConverter("string",stdStringToLua)
tc:setToLuaConverter("unsigned char",ucharToLua)
tc:setToLuaConverter("const wxChar *",wxcharToLua)

tc:setTypeChecker("unsigned char",ucharChecker)

local im = require "bindings.IgnoreManager"

im:getIgnoreFunctionsPatterns():push_back("iterator")
im:getIgnoreFunctionsPatterns():push_back("Mac")
im:getIgnoreFunctionsPatterns():push_back("ProcessMessage")
im:getIgnoreFunctionsPatterns():push_back("CompareFunction")
im:getIgnoreFunctionsPatterns():push_back("OnAssertFailure")
im:getIgnoreFunctionsPatterns():push_back("HandleEvent")
im:getIgnoreFunctionsPatterns():push_back("EnableYearChange")
im:getIgnoreFunctionsPatterns():push_back("GetHandlers")
im:getIgnoreFunctionsPatterns():push_back("wxUSE_UNICODE_dependent")
im:getIgnoreFunctionsPatterns():push_back("wxIntPtr")
im:getIgnoreFunctionsPatterns():push_back("wxMutex")
im:getIgnoreFunctionsPatterns():push_back("wxCondition")
im:getIgnoreFunctionsPatterns():push_back("wxTmem")
im:getIgnoreFunctionsPatterns():push_back("wxStrc")
im:getIgnoreFunctionsPatterns():push_back("wxStrn")
im:getIgnoreFunctionsPatterns():push_back("wchar_t")
im:getIgnoreFunctionsPatterns():push_back("wxDataViewListModel")
im:getIgnoreFunctionsPatterns():push_back("<")
im:getIgnoreFunctionsPatterns():push_back("wxPrint")
im:getIgnoreFunctionsPatterns():push_back("wxDllType")
im:getIgnoreFunctionsPatterns():push_back("wxMBConv")
im:getIgnoreFunctionsPatterns():push_back("FILE")
im:getIgnoreFunctionsPatterns():push_back("wxGraphics")
im:getIgnoreFunctionsPatterns():push_back("FindHandler")
im:getIgnoreFunctionsPatterns():push_back("wxObjectConstructorFn")
im:getIgnoreFunctionsPatterns():push_back("wxCalendarCtrl::HitTest")
im:getIgnoreFunctionsPatterns():push_back("unsigned char %*")
im:getIgnoreFunctionsPatterns():push_back("wxULongLong_t")
im:getIgnoreFunctionsPatterns():push_back("wxUint64")
im:getIgnoreFunctionsPatterns():push_back("wxInt64")
im:getIgnoreFunctionsPatterns():push_back("__int64")
im:getIgnoreFunctionsPatterns():push_back("wxLongLong_t")
im:getIgnoreFunctionsPatterns():push_back("time_t")
im:getIgnoreFunctionsPatterns():push_back("tm %*")
im:getIgnoreFunctionsPatterns():push_back("tm &")
im:getIgnoreFunctionsPatterns():push_back("_SYSTEMTIME")
im:getIgnoreFunctionsPatterns():push_back("istream")
im:getIgnoreFunctionsPatterns():push_back("wxDocument::SaveObject")
im:getIgnoreFunctionsPatterns():push_back("wxDocument::LoadObject")
im:getIgnoreFunctionsPatterns():push_back("wxDynamicLibraryDetails::GetAddress")
im:getIgnoreFunctionsPatterns():push_back("bool wxEncodingConverter::Convert")
im:getIgnoreFunctionsPatterns():push_back("wxObjectEventFunction")
im:getIgnoreFunctionsPatterns():push_back("wxEventTable")
im:getIgnoreFunctionsPatterns():push_back("wxExtHelpController::DisplayContents")
im:getIgnoreFunctionsPatterns():push_back("SetExtraControlCreator")
im:getIgnoreFunctionsPatterns():push_back("MessageParameters")
im:getIgnoreFunctionsPatterns():push_back("wxNativeEncodingInfo")
im:getIgnoreFunctionsPatterns():push_back("wxEnhMetaFileDC")
im:getIgnoreFunctionsPatterns():push_back("GetAllEncodingNames")
im:getIgnoreFunctionsPatterns():push_back("wxHelpController::OnQuit")
im:getIgnoreFunctionsPatterns():push_back("GetLibraryVersionInfo")
im:getIgnoreFunctionsPatterns():push_back("wxIndividualLayoutConstraint::GetOtherWindow")
im:getIgnoreFunctionsPatterns():push_back("wxFilterClassFactory::GetProtocols")
im:getIgnoreFunctionsPatterns():push_back("wxHelpControllerHelpProvider::GetHelpController")
im:getIgnoreFunctionsPatterns():push_back("wxIPaddress::BroadcastAddress")
im:getIgnoreFunctionsPatterns():push_back("ostream")
im:getIgnoreFunctionsPatterns():push_back("wxMediaCtrl::GetPlaybackrate")
im:getIgnoreFunctionsPatterns():push_back("ButtonLabel")
im:getIgnoreFunctionsPatterns():push_back("wxItemContainer::Set")
im:getIgnoreFunctionsPatterns():push_back("wxListBox::Set")
im:getIgnoreFunctionsPatterns():push_back("wxMouseState")
im:getIgnoreFunctionsPatterns():push_back("Buffer")
im:getIgnoreFunctionsPatterns():push_back("wxNotebook::OnSelChange")
im:getIgnoreFunctionsPatterns():push_back("wxMultiChoiceDialog::GetSelection")
im:getIgnoreFunctionsPatterns():push_back("wxPathList")
im:getIgnoreFunctionsPatterns():push_back("wxPGChoices::Add")
im:getIgnoreFunctionsPatterns():push_back("wxPGPaintData")
im:getIgnoreFunctionsPatterns():push_back("SetDashes")
im:getIgnoreFunctionsPatterns():push_back("wxPropertyGrid::RegisterEditorClass")
im:getIgnoreFunctionsPatterns():push_back("wxPGPropArg")
im:getIgnoreFunctionsPatterns():push_back("SetSortFunction")
im:getIgnoreFunctionsPatterns():push_back("GetSortFunction")
im:getIgnoreFunctionsPatterns():push_back("wxPropertyGrid::SetButtonShortcut")
im:getIgnoreFunctionsPatterns():push_back("wxPropertyGrid::Create")
im:getIgnoreFunctionsPatterns():push_back("wxArrayPGProperty")
im:getIgnoreFunctionsPatterns():push_back("wxPropertyGridManager::SetStringSelection")
im:getIgnoreFunctionsPatterns():push_back("wxPropertySheetDialog::SetInnerSizer")
im:getIgnoreFunctionsPatterns():push_back("wxRegEx::Matches")
im:getIgnoreFunctionsPatterns():push_back("wxRegKey")
im:getIgnoreFunctionsPatterns():push_back("wxSashWindow::HasBorder")
im:getIgnoreFunctionsPatterns():push_back("wxSashWindow::SetSashBorder")
im:getIgnoreFunctionsPatterns():push_back("wxSockAddress::SockAddrLen")
im:getIgnoreFunctionsPatterns():push_back("wxSortedArrayString")
im:getIgnoreFunctionsPatterns():push_back("wxSound::IsPlaying")
im:getIgnoreFunctionsPatterns():push_back("wxStandardPaths::SetInstallPrefix")
im:getIgnoreFunctionsPatterns():push_back("wxStandardPaths::GetInstallPrefix")
im:getIgnoreFunctionsPatterns():push_back("wxStreamToTextRedirector")
im:getIgnoreFunctionsPatterns():push_back("wxTextInputStream::ReadString")
im:getIgnoreFunctionsPatterns():push_back("wxThread")
im:getIgnoreFunctionsPatterns():push_back("wxTipProvider::PreProcessTip")
im:getIgnoreFunctionsPatterns():push_back("wxTopLevelWindow::UseNativeDecorationsByDefault")
im:getIgnoreFunctionsPatterns():push_back("wxTopLevelWindow::UseNativeDecorations")
im:getIgnoreFunctionsPatterns():push_back("wxTopLevelWindow::SetRightMenu")
im:getIgnoreFunctionsPatterns():push_back("wxTopLevelWindow::SetLeftMenu")
im:getIgnoreFunctionsPatterns():push_back("wxTopLevelWindow::IsUsingNativeDecorations")
im:getIgnoreFunctionsPatterns():push_back("WXLPARAM")
im:getIgnoreFunctionsPatterns():push_back("WXWPARAM")
im:getIgnoreFunctionsPatterns():push_back("wxTreeCtrl::SetButtonsImageList")
im:getIgnoreFunctionsPatterns():push_back("wxTreeCtrl::GetButtonsImageList")
im:getIgnoreFunctionsPatterns():push_back("wxTreeCtrl::AssignButtonsImageList")
im:getIgnoreFunctionsPatterns():push_back("wxUniChar")
im:getIgnoreFunctionsPatterns():push_back("wxTreeListCtrl::GetSortColumn")
im:getIgnoreFunctionsPatterns():push_back("wxTreeListCtrl::GetSelections")
im:getIgnoreFunctionsPatterns():push_back("wxURI::HasUser")
im:getIgnoreFunctionsPatterns():push_back("wxUString")
im:getIgnoreFunctionsPatterns():push_back("wxVariant")
im:getIgnoreFunctionsPatterns():push_back("wxVListBox")
im:getIgnoreFunctionsPatterns():push_back("Accessible")
im:getIgnoreFunctionsPatterns():push_back("wxXmlDocument")
im:getIgnoreFunctionsPatterns():push_back("wxZip")
im:getIgnoreFunctionsPatterns():push_back("wxString::")
im:getIgnoreFunctionsPatterns():push_back("wxCStrData")
im:getIgnoreFunctionsPatterns():push_back("wxStrpb")
im:getIgnoreFunctionsPatterns():push_back("wxStricmp")
im:getIgnoreFunctionsPatterns():push_back("wxStrx")
im:getIgnoreFunctionsPatterns():push_back("wxStrt")
im:getIgnoreFunctionsPatterns():push_back("wxKill")
im:getIgnoreFunctionsPatterns():push_back("wxGetLinuxDistributionInfo")
im:getIgnoreFunctionsPatterns():push_back("wxSetDisplayName")
im:getIgnoreFunctionsPatterns():push_back("wxGetEmailAddress")
im:getIgnoreFunctionsPatterns():push_back("wxGetHostName")
im:getIgnoreFunctionsPatterns():push_back("wxGetUserId")
im:getIgnoreFunctionsPatterns():push_back("wxGetUserName")
im:getIgnoreFunctionsPatterns():push_back("wxStrs")
im:getIgnoreFunctionsPatterns():push_back("wxPostDelete")
im:getIgnoreFunctionsPatterns():push_back("wxGetDisplayName")
im:getIgnoreFunctionsPatterns():push_back("wxGetenv")
im:getIgnoreFunctionsPatterns():push_back("wxRichTextObject")
im:getIgnoreFunctionsPatterns():push_back("signed char *")
im:getIgnoreFunctionsPatterns():push_back("va_list")
im:getIgnoreFunctionsPatterns():push_back("HINSTANCE")
im:getIgnoreFunctionsPatterns():push_back("wxGetTempFileName")
im:getIgnoreFunctionsPatterns():push_back("wxGetWorkingDirectory")
im:getIgnoreFunctionsPatterns():push_back("wxGetDiskSpace")
im:getIgnoreFunctionsPatterns():push_back("wxSetAssertHandler")
im:getIgnoreFunctionsPatterns():push_back("wxFileNameFromPath")
im:getIgnoreFunctionsPatterns():push_back("wxAtomic")
im:getIgnoreFunctionsPatterns():push_back("wxJoin")
im:getIgnoreFunctionsPatterns():push_back("wxAppDerivedClass")
im:getIgnoreFunctionsPatterns():push_back("wxGenericAboutBox")
im:getIgnoreFunctionsPatterns():push_back("wxQsort")
im:getIgnoreFunctionsPatterns():push_back("wxMakeMetafilePlaceable")
im:getIgnoreFunctionsPatterns():push_back("wxConvertToIeeeExtended")
im:getIgnoreFunctionsPatterns():push_back("wxConvertFromIeeeExtended")
im:getIgnoreFunctionsPatterns():push_back("wxSplit")
im:getIgnoreFunctionsPatterns():push_back("wxRichTextAttr")
im:getIgnoreFunctionsPatterns():push_back("wxRichTextPageLocation")
im:getIgnoreFunctionsPatterns():push_back("wxRichTextListStyleDefinition::GetCombinedStyleLevel")
im:getIgnoreFunctionsPatterns():push_back("wxRichText")
im:getIgnoreFunctionsPatterns():push_back("wxToolBar::SetBitmapResource")
im:getIgnoreFunctionsPatterns():push_back("wxHtmlWinParser::GetEncodingConverter")
im:getIgnoreFunctionsPatterns():push_back("wxHtmlWinParser::GetInputEncoding")
im:getIgnoreFunctionsPatterns():push_back("wxHtmlWinParser::GetOutputEncoding")
im:getIgnoreFunctionsPatterns():push_back("wxHtmlWinParser::GetWindow")
im:getIgnoreFunctionsPatterns():push_back("wxHtmlWinParser::SetInputEncoding")
im:getIgnoreFunctionsPatterns():push_back("wxHtmlParser::AddWord")
im:getIgnoreFunctionsPatterns():push_back("wxHtmlURLType")
im:getIgnoreFunctionsPatterns():push_back("wxHtmlSelection")
im:getIgnoreFunctionsPatterns():push_back("wxHtmlWindowInterface")
im:getIgnoreFunctionsPatterns():push_back("wxBitmapComboBox::Insert")

-- missing links:
im:getIgnoreFunctionsPatterns():push_back("wxApp::Initialize")
im:getIgnoreFunctionsPatterns():push_back("wxAppConsoleBase::OnAssertFailure")
im:getIgnoreFunctionsPatterns():push_back("wxAppConsoleBase::OnAssert")
im:getIgnoreFunctionsPatterns():push_back("wxClassInfo::GetBaseClassName1")
im:getIgnoreFunctionsPatterns():push_back("wxClassInfo::GetBaseClassName2")
im:getIgnoreFunctionsPatterns():push_back("wxClassInfo::GetClassName")
im:getIgnoreFunctionsPatterns():push_back("wxDateTime::IsGregorianDate")
im:getIgnoreFunctionsPatterns():push_back("wxFileName::IsPathSeparator")
im:getIgnoreFunctionsPatterns():push_back("wxHyperlinkCtrl::Create")
im:getIgnoreFunctionsPatterns():push_back("wxKeyEvent::GetUnicodeKey")
im:getIgnoreFunctionsPatterns():push_back("wxNumberFormatter::GetDecimalSeparator")
im:getIgnoreFunctionsPatterns():push_back("wxNumberFormatter::GetThousandsSeparatorIfUsed")
im:getIgnoreFunctionsPatterns():push_back("wxPoint2DDouble::SetPolarCoordinates")
im:getIgnoreFunctionsPatterns():push_back("wxPoint2DDouble::op_mult")
im:getIgnoreFunctionsPatterns():push_back("wxPoint2DDouble::op_div")
im:getIgnoreFunctionsPatterns():push_back("wxPoint2DInt::SetPolarCoordinates")
im:getIgnoreFunctionsPatterns():push_back("wxPoint2DInt::op_mult")
im:getIgnoreFunctionsPatterns():push_back("wxPoint2DInt::op_div")
im:getIgnoreFunctionsPatterns():push_back("wxRichToolTip::SetTitleFont")
im:getIgnoreFunctionsPatterns():push_back("wxStringTokenizer::GetLastDelimiter")
im:getIgnoreFunctionsPatterns():push_back("wxTarEntry::GetUserName")
im:getIgnoreFunctionsPatterns():push_back("wxTextBoxAttr::IsDefault")
im:getIgnoreFunctionsPatterns():push_back("wxTextFile::GetEOL")
im:getIgnoreFunctionsPatterns():push_back("wxTextInputStream::GetChar")
im:getIgnoreFunctionsPatterns():push_back("wxTextOutputStream::PutChar")
im:getIgnoreFunctionsPatterns():push_back("Iterator")
im:getIgnoreFunctionsPatterns():push_back("wxSysErrorMsg")
im:getIgnoreFunctionsPatterns():push_back("wxRemove")
im:getIgnoreFunctionsPatterns():push_back("wxAtoi")
im:getIgnoreFunctionsPatterns():push_back("wxRound")
--im:getIgnoreFunctionsPatterns():push_back("_")
im:getIgnoreFunctionsPatterns():push_back("wxSetlocale")
im:getIgnoreFunctionsPatterns():push_back("wxBase64Decode")
im:getIgnoreFunctionsPatterns():push_back("wxPersistentTreeBookCtrl::Restore")
im:getIgnoreFunctionsPatterns():push_back("wxFormatString")
im:getIgnoreFunctionsPatterns():push_back("wxRename")
im:getIgnoreFunctionsPatterns():push_back("wxAtol")
im:getIgnoreFunctionsPatterns():push_back("wxStrdup")
im:getIgnoreFunctionsPatterns():push_back("wxSystem")
im:getIgnoreFunctionsPatterns():push_back("wxAtof")
im:getIgnoreFunctionsPatterns():push_back("wxStringTokenize")
im:getIgnoreFunctionsPatterns():push_back("wxGetEnvMap")

im:getIgnoreDefinesPatterns():push_back("wxACC_")

im:getIgnoreConvertersPatterns():push_back("wxTrackable")
im:getIgnoreConvertersPatterns():push_back("wxKeyboardState")
im:getIgnoreConvertersPatterns():push_back("wxArrayString")
im:getIgnoreConvertersPatterns():push_back("wxTextAttr")

--im:getIgnoreClassesPatterns():push_back("wxAccessible")

im:addPattern("enum_value","wxWEB_")

local injector = require "bindings.CodeInjector"
-- injector:addFragment("after_headers","#include \n")

local options = {
	xmlpath=src_path.."/xml",
	modName=project,
	headers={"plug_common.h"},
	destpath=dest_path.."/",
    ignoreClasses={
        "wxPersistentTreeBook",
        "wxPersistentBookCtrl",
        "wxPersistentTLW",
        "wxRichTextParagraphBox",
        "wxAccessible",
        "wxArchive",
        "wxWebView",
        "<",
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
	ignoreHeaders = { "helpers%.h" },
	locationPrefixes = {"W:/Shared/Dev/Projects/singularity/sources/plug_wx/interface/"}
}

function buildBindings()
    log:info "Generating reflection..."
    local ReflectionGenerator = require "bindings.LunaReflectionGenerator"
	ReflectionGenerator.generate(options)
    log:info "Luna reflection generated."
end

local t0 = os.clock()
buildBindings()
local dt = os.clock()-t0

log:notice("Done executing script in "..dt.." seconds.")

core.LogManager.destroy()
