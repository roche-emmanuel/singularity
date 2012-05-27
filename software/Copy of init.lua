flavor = flavor or "mingw32"
root_path = root_path or "W:/Projects/singularity/software/"

print("Flavor is: ".. flavor)
print("Path is: ".. root_path)

shared_ext="dll"
if flavor=="linux32" or flavor=="linux64" then
    shared_ext="so"
end

package.cpath = package.cpath..";".. root_path .. "bin/".. flavor .."/modules/?.sgp;".. root_path .. "bin/".. flavor .."/libraries/?.".. shared_ext
package.path = package.path..";".. root_path .. "lua/modules/?.lua;".. root_path .. "lua/libraries/?.lua"

LOG = require "logger" 

LOG:info "Executing init script"

local Set = require "std.Set"

function generateReflection(options)
    local folder = options.xmlpath

    LOG:bgen_n "Generating reflection..."
    local ReflectionGenerator = require "bindings.ReflectionGenerator"
    local ReflectionMap = require "bindings.ReflectionMap"
    local LuabindWriter = require "bindings.LuabindWriter"
    local SwigWriter = require "bindings.SwigWriter"

    local datamap = ReflectionMap()
    local rg = ReflectionGenerator(datamap)
    rg:getIgnoreClassesPatterns():fromTable(options.ignoreClasses or {})
    rg:getIgnoreGlobalFunctionsPatterns():fromTable(options.ignoreGlobalFuncs or {})

    local map = rg:getIgnoreClassFunctionsPatterns()

    for k,v in pairs(options.ignoreClassFuncs or {}) do
        local set = Set(v)
        map:set(k,set)
    end

    rg:generateReflection(folder)


    datamap:setModuleName(options.modName)

    datamap:getUserHeaders():fromTable(options.headers or {})
    datamap:getUserContents():fromTable(options.userContent or {})

    local lbwriter = options.useSwig and SwigWriter(datamap) or LuabindWriter(datamap)
    lbwriter:setForceSignature(options.forceFuncSignature)
    lbwriter:getIgnoreConvertersPatterns():fromTable(options.ignoreConverters or {})
    lbwriter:writeBindings(options.destpath)
    LOG:bgen_n "Reflection generated."
end

function performTests()
    require "lunatest"

    lunatest.suite("tests.std")
    lunatest.suite("tests.bindings")
    lunatest.suite("tests.debugging")
    lunatest.run()

    LOG:notice "Tests done."
end

function generateDocs(options)
    LOG:info "Starting doc generation"
    require "luadoc"
    luadoc.generate(options)
    LOG:notice "Doc generation done."
end

function buildDoXmlBindings()
    generateReflection{
        xmlpath="W:/Projects/singularity/build/xml_wrapping/doxmlparser/xml",
        modName="doxmlparser",
        headers={"doxmlintf.h"},
        destpath="W:/Projects/singularity/sources/doxmlparser/src/",
        forceFuncSignature=true}

end

function buildWxBindings(useSwig)
    local suffix = useSwig and "_swig" or ""
    generateReflection{
        xmlpath="W:/Projects/singularity/build/xml_wrapping/wx/xml",
        modName="wx",
        headers={"wx_common.h"},
        userContent={}, --{"using namespace std;\n"},
        useSwig = useSwig,
        destpath="W:/Projects/singularity/sources/wx"..suffix.."/",
        ignoreClasses={
            "iterator",
            "Gtk",
            "gtk",
            "wxString::","wxMBConv","Buffer","wxPrivate::","Iterator","ActiveX","wxAccessible","wxRichText","wxScoped","wxGraphics","wxPersistent",
            "wxAutomationObject", -- only for MSW OLE
            --"wxFloatingPointValidator", -- this is a template class
            "wxGCDC", -- needs wxGraphicsContext
            --"wxIntegerValidator", -- template class.
            "wxNotificationMessage", -- why ???
            --"wxNumValidator", -- template class.
            --"wxAnimationCtrl", -- Why ???
            --"wxTrackable", -- polymorphic convertion not supported for that one.
            --"wxScroll", -- template class.
            --"wxKeyboardState", -- non polymorphic base class, should remove converters.
            --"wxArrayString", -- non polymorphic class, should remove converters.
            "HSVValue","RGBValue", -- problem with the constructors used as method.
            "wxDateTime::Tm", -- subclass.
            --"wxAny", -- contains some methods with templates.
            --"wxArray<", -- template class
            --"wxList<", -- template class
            --"wxNode<", -- template class
            --"wxObjectDataPtr<", -- template class
            --"wxSharedPtr<", -- template class
            --"< T >", -- template class
            --"wxMessageQueue<", -- template class
            "wxCustomBackgroundWindow", -- template class
            "wxDebugContext", -- only in debug mode
            "wxFSVolume", -- Not found
            "wxHashMap", -- some problems
            "wxHashTable", -- some problems
            "wxHashSet", -- some problems
            "wxHtmlWinParser", -- some problems
            "wxNavigationEnabled", -- some problems
            "wxPixelData", -- some problems
            "wxScopeGuard", -- some problems
            "wxStackFrame", -- not available ?
            "wxStackWalker", -- not available ?
            "Stream", -- no need for stream support and some problems.
            "wxThreadEvent", -- some problems.
            "wxThreadHelper", -- some problems.
            "wxUniChar", -- some problems.
            "wxAppDerivedClass", -- some problems.
            "wxHtmlParser", -- some problems.

            --- Swig part:
            "wxRefCounter",
            "RendererNative",
            "HtmlTag",
            "wxHelpController",
            "wxDataViewListModel",
            "wxConvAuto",
            "wxDataViewListCtrl",
            "wxDDEConnection",
            "wxDebugReport",
            "wxFontMapper",
            "wxFTP",
            "wxGrid",
            "wxLocale",
            "wxMemoryFSHandler",
            "wxMessageDialog",
            "wxPGChoices",
            "wxPGProperty",
            "Connection",
            "wxThread",
            "wxVariantData",
            "wxXmlDocument",
            "wxZipEntry",
            "wxEncodingConverter",
            "wxGDIObject",
            "wxDataView",
            "wxDragImage",
            "wxDropSource",
            "wxDropTarget",
            "wxDynamicLibraryDetails",
            "wxGenericFileCtrl",
        },
        ignoreClassFuncs={
            wxApp={"Mac","ProcessMessage"}, -- Mac specific functions ?
            wxEvtHandler={"Connect","Disconnect","Bind","Unbind"}, -- event handling functions.
            wxComboBox={"IsEmpty"}, -- ambiguous func call because of multiple parents.
            wxTopLevelWindow={"SetLeftMenu","SetRightMenu","NativeDecorations"}, -- specific to universal port
            wxDialog={"DoOK","GetToolBar"}, -- Pocket PC only
            wxDataViewListModel={"RowAppended","RowPrepended"}, -- Methods not found ?
            wxDebugReport={"AddCurrentContext","AddCurrentDump","AddExceptionContext","AddExceptionDump"}, -- Methods not found ?
            wxDocTemplate={"GetPageSetupDialogData"}, -- Methods not found ?
            wxFileName={"Mac"}, -- Mac specific methods
            wxHtmlListBox={"GetFileSystem"}, -- Constness declaration issue
            wxImageHandler={"GetLibraryVersionInfo"},
            wxSockAddress={"SockAddrLen"},
            wxIPaddress={"BroadcastAddress"},
            wxMenuBar={"Mac"},
            wxMultiChoiceDialog={"GetSelection"}, -- not found ?
            wxMediaCtrl={"GetPlaybackrate"}, -- not found ?
            wxMenu={"GetMenuItems"}, -- constness declaration issue
            wxPGProperty={"Empty","GetFlags"}, -- function is protected, invalid scope
            wxRegKey={"HasSubKeys"}, -- function is protected, invalid scope
            wxSound={"IsPlaying"}, -- function not found
            wxStandardPaths={"GetInstallPrefix","SetInstallPrefix"}, -- function not found
            wxTreeCtrl={"GetButtonsImageList","AssignButtonsImageList","SetButtonsImageList"}, -- function not found
            wxURI={"HasUser"}, -- function not found
            wxXmlDocument={"GetEncoding"}, -- function not found
            wxTextBoxAttr={"IsDefault"}, -- function not found
            wxPersistenceManager={"DisableSaving","DisableRestoring"}, -- function not found
            wxPGProperty={"wxDEPRECATED"}, -- MACRO definition
            wxArrayString={"Sort"}, -- MACRO definition
            wxBitmap={"FindHandler"}, -- MACRO definition
            wxDocChildFrame={"OnActivate","OnCloseWindow"}, -- MACRO definition
            wxDocMDIParentFrame={"OnActivate","OnCloseWindow"}, -- MACRO definition
            wxDocMDIChildFrame={"OnActivate","OnCloseWindow"}, -- MACRO definition
            wxDocParentFrame={"OnCloseWindow"}, -- MACRO definition
            wxDocManager={"CreatePreviewFrame"},
            wxDocument={"LoadObject","SaveObject"},
            wxDragImage={"DoDrawImage","GetImageRect","UpdateBackingFromWindow"},
            wxFileDialog={"SetExtraControlCreator"},
            wxFileType={"Command"},
            wxIcon={"ConvertToDisabled"},
            wxNotebook={"OnSelChange"},
            wxPrintDialogData={"SetSetupDialog"},
            wxPropertyGridManager={"SetStringSelection"},
            wxPropertySheetDialog={"SetInnerSizer"},
            wxRibbonArtProvider={"Draw"},
            wxSashWindow={"HasBorder","SetSashBorder"},
            wxSortedArrayString={"Sort","Insert"},
            wxTipProvider={"PreProcessTip"},
            wxToolBar={"SetBitmapResource"},
            wxTranslations={"AddCatalog"},
            wxArtProvider={"Insert"},
            wxMenuItemBase={"GetLabelFromText"},
            wxListCtrl={"SortItems"},
            wxStyledTextCtrl={"SetStyleBytes"},
            wxNonOwnedWindow={"SetShape"},
            --wxMessageDialog={"ConvertToDisabled"},
            --wxGrid={"CreateGrid"},

            -- Swig part:
            wxDataFormat={"GetType"}, -- function not found
            wxRichToolTip={"SetTitleFont"}, -- function not found
            wxPoint2DInt={"SetPolarCoordinates"}, -- function not found
            wxPoint2DDouble={"SetPolarCoordinates"}, -- function not found
            wxBitmapComboBox={"Insert"}, -- function not found
        },

        ignoreGlobalFuncs={
            "wxGetDisplayName",
            "wxGetApp", -- the function doesnt exist yet.
            "wxGetLinuxDistributionInfo",
            "wxRichTextModuleInit", -- comes with weird attribute.
            "wxGetSingleChoice", -- improper argument parsing
            "wxDELETE", -- improper argument parsing
            "WX_DECLARE", -- improper argument parsing
            "WX_DEFINE", -- improper argument parsing
            "wxTextAttr", -- improper argument parsing
            "wxRichText", -- improper argument parsing
            "< T >", -- improper argument parsing
            "wxStr", -- improper template parsing
            "wxVLog", -- improper template parsing
            "wxGenericAboutBox",
            "wxGetWorkingDirectory",
            "wxFileNameFromPath",
            "wxGetTempFileName",
            "wxGetSelectedChoices",
            "wxFromString",
            "wxToString",
            "wxLL",
            "wxULL",
            "wxHandleFatalExceptions",
            "wxCreatePersistentObject",
            "wxTransferFileToStream",
            "wxTransferStreamToFile",
            "wxFinite",
            "wxIsNaN",
            "_",
            "wxMakeMetafilePlaceable",
            "wxGetenv",
            "wxLoadUserResource",
            "wxPostDelete",
            "wxSetDisplayName",
            "wxGetEmailAddress",
            "wxGetEmailAddress",
            "wxGetHostName",
            "wxGetUserId",
            "wxGetUserName",
            "wxIsEmpty",
            "wxSetlocale",
            "wxIsctrl",
            "wxUsleep",
            "wxQsort",
            "wxTmem",
            "wxVaCopy",
            "wxSetAssertHandler",
            "wxBase64Encode",
        },
        ignoreConverters={
            "wxKeyboardState",
            "wxTrackable",
            "wxArrayString"
        },
        forceFuncSignature=true
        }
end

function loadWxModule()
    LOG:info "Loading wx module..."
    require "wx"
	local msg = wx.wxString("Hello world!")
	local caption = wx.wxString("Test")
	
    wx.wxMessageBox(msg,caption,0,nil,50,50);
    
    LOG:notice "Wx module loaded."
end

buildWxBindings(false)
--buildDoXmlBindings()
--performTests()
--generateDocs{"-d","W:/Projects/singularity/docs/lua/modules","--nofiles","W:/Projects/singularity/software/lua/modules"}
--loadWxModule()


LOG:notice "Done executing script."
