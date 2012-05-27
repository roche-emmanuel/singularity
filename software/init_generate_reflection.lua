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

    LOG:bgen_n "Reflection generated."
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
%naturalvar wxString;

%typemap(in,checkfn="lua_isstring") wxString
%{$1.assign(lua_tostring(L,$input),lua_strlen(L,$input));%}

%typemap(in,checkfn="lua_isstring") wxString const &
%{$1.assign(lua_tostring(L,$input),lua_strlen(L,$input));%}

%typemap(out) wxString
%{ lua_pushlstring(L,$1.ToStdString().data(),$1.ToStdString().size()); SWIG_arg++;%}
]]
}

--[[
%typemap(in) wxString {
	$1 = wxString(lua_tostring(L,$input));
	printf("Received a string : %s\n",($1).ToStdString().c_str());
}

]]

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
    LOG:info "Loading wx module..."
    require "wx"
	local msg = wx.wxString("Hello world!")
	local caption = wx.wxString("Test")
	
    wx.wxMessageBox(msg,caption,0,nil,50,50);
    
    LOG:notice "Wx module loaded."
end

buildWxBindings(false)
buildWxBindings(true)
--buildDoXmlBindings()
--performTests()
--generateDocs{"-d","W:/Projects/singularity/docs/lua/modules","--nofiles","W:/Projects/singularity/software/lua/modules"}
--loadWxModule()


LOG:notice "Done executing script."
