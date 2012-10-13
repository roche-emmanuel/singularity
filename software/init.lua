flavor = flavor or "mingw32"
root_path = root_path or "W:/Projects/singularity/software/"

shared_ext="dll"
if flavor=="linux32" or flavor=="linux64" then
    shared_ext="so"
end

package.cpath = package.cpath..";".. root_path .. "bin/".. flavor .."/modules/?.sgp;".. root_path .. "bin/".. flavor .."/libraries/?.".. shared_ext
package.path = package.path..";".. root_path .. "lua/modules/?.lua;".. root_path .. "lua/libraries/?.lua"

local log = require "logger"
local tr = require "tracer"

print("Flavor is: ".. flavor)
print("Path is: ".. root_path)


tr:info("Init","Executing init script")

local Set = require "std.Set"

function generateReflection(options)
    local folder = options.xmlpath

    log:info "Generating reflection..."
    local ReflectionGenerator = require "bindings.ReflectionGenerator"
    local ReflectionMap = require "bindings.ReflectionMap"
    local LuabindWriter = require "bindings.LuabindWriter"
    local SwigWriter = require "bindings.SwigWriter"

	local im = require "bindings.IgnoreManager"
	
    local datamap = ReflectionMap()
    local rg = ReflectionGenerator(datamap)
    rg:getIgnoreGlobalFunctionsPatterns():fromTable(options.ignoreGlobalFuncs or {})

    im:getIgnoreClassesPatterns():fromTable(options.ignoreClasses or {})
    im:getIgnoreConvertersPatterns():fromTable(options.ignoreConverters or {})

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
    if not options.useSwig then
    	lbwriter:setForceSignature(options.forceFuncSignature)
    end
    lbwriter:writeBindings(options.destpath)

    log:info "Reflection generated."
end

function performTests()
    require "lunatest"

    lunatest.suite("tests.std")
    lunatest.suite("tests.reflection")
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

swig_content = {
[[
%typemap(in) wxString {
	$1 = wxString(lua_tostring(L,$input));
	printf("Received a string : %s\n",($1).ToStdString().c_str());
}

]]}

function buildWxBindings(useSwig)
    local suffix = useSwig and "_swig" or ""
    generateReflection{
        xmlpath="W:/Projects/singularity/build/xml_wrapping/wx/xml",
        modName="wx",
        headers={"plug_common.h"},
        userContent=useSwig and swig_content or {}, --{"using namespace std;\n"},
        useSwig = useSwig,
        destpath="W:/Projects/singularity/sources/wx/",
        ignoreClasses={},
        ignoreClassFuncs={},
        ignoreGlobalFuncs={},
        ignoreConverters={},
        forceFuncSignature=true
        }
end

function loadWxModule()
    log:info "Loading wx module..."
    require "wx"
	local msg = "Hello world!"
	local caption = "Test"
	
    --wx.wxMessageBox(msg,caption,0x00000004,nil,50,50);
    --wx.wxMessageBox(msg,caption);
    
    local frame = wx.wxFrame:new( nil,            -- no parent for toplevel windows
                    wx.wxStandardID.wxID_ANY,          -- don't need a wxWindow ID
                    "wxLua Minimal Demo",-- caption on the frame
                    wx.wxPoint(-1,-1), -- let system place the frame
                    wx.wxSize(450, 450),  -- set the size of the frame
                    wx.wxDEFAULT_FRAME_STYLE ) -- use default frame styles
    frame:Show(true)
    --frame:SetTransparent(128)
    
	frame:connect(wx.wxStandardID.wxID_ANY,wx.wxEVT_CLOSE_WINDOW,function(event) 
		log:info("I'm in the event handler!"); 
		local closeEvent = event:dynCast("wxCloseEvent")
		if closeEvent then
			log:info("closeEvent dynamic cast test SUCCESS.")
		else
			log:error("closeEvent dynamic cast test FAILED.")
		end
		
		local event2 = event:dynCast("wxCommandEvent")
		if not event2 then
			log:info("commandEvent dynamic cast test SUCCESS.")
		else
			log:error("commandEvent dynamic cast test FAILED.")
		end
		
		log:info("I'm destroying the windows."); 
		
		frame:Destroy(); 
		end)
	
    wx.wxGetApp():SetTopWindow(frame)
    wx.wxGetApp():SetExitOnFrameDelete(true)
    
    wx.wxGetApp():MainLoop();
    
    log:notice "Wx module loaded."
end

--buildWxBindings(false)
--buildWxBindings(true)
--buildDoXmlBindings()
--performTests()
--generateDocs{"-d","W:/Projects/singularity/docs/lua/modules","--nofiles","W:/Projects/singularity/software/lua/modules"}
loadWxModule()


log:notice "Done executing script."
