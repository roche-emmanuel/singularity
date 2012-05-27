flavor = flavor or "mingw32"
project_path="W:/Shared/Projects/singularity/"

root_path = root_path or project_path.."software/"

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

function wxStringFromLua(buf,index,type,argname)
	buf:writeSubLine("wxString ${2}(lua_tostring(L,${1}),lua_objlen(L,${1}));",index,argname)
end

function wxStringToLua(buf,type,argname)
	buf:writeSubLine("lua_pushlstring(L,${1}.data(),${1}.size());",argname)
end

function wxCharFromLua(buf,index,type,argname)
	buf:writeSubLine("wxChar* ${2} = (wxChar*)lua_tostring(L,${1});",index,argname)
	return true; -- this is a pointer.
end

function wxCharToLua(buf,type,argname)
	buf:writeSubLine("lua_pushlstring(L,${1});",argname)
end


function generateReflection(options)
    local folder = options.xmlpath

    LOG:bgen_n "Generating reflection..."
    local ReflectionGenerator = require "bindings.ReflectionGenerator"
    local ReflectionMap = require "bindings.ReflectionMap"
    local LuabindWriter = require "bindings.LuabindWriter"
    local SwigWriter = require "bindings.SwigWriter"
    local LunaWriter = require "bindings.LunaWriter"
	local tc = require "bindings.TypeConverter"
	local im = require "bindings.IgnoreManager"
	
	tc:setFromLuaConverter("wxString",wxStringFromLua)
	tc:setToLuaConverter("wxString",wxStringToLua)
	tc:setFromLuaConverter("wxChar",wxCharFromLua)
	tc:setToLuaConverter("wxChar",wxCharToLua)
	
    local datamap = ReflectionMap()
    
    datamap:setCodeAddition("module_post_register",[[if(!wxTheApp) {
		std::cout << "Starting wxApp." << std::endl;
		wxDISABLE_DEBUG_SUPPORT();
	
		int num = 0;
		wxEntryStart(num,(wxChar**)NULL);
		std::cout << "wxApp started." << std::endl;
	}]]
    )
    
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

	local writer = LunaWriter(datamap)
    writer:writeBindings(options.destpath)

    LOG:bgen_n "Luna reflection generated."
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
        xmlpath=project_path.."build/xml_wrapping/doxmlparser/xml",
        modName="doxmlparser",
        headers={"doxmlintf.h"},
        destpath=project_path.."sources/doxmlparser/src/",
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
        xmlpath=project_path.."build/xml_wrapping/wx/xml",
        modName="wx",
        headers={"plug_common.h"},
        userContent=useSwig and swig_content or {}, --{"using namespace std;\n"},
        useSwig = useSwig,
        destpath=project_path.."sources/wx/",
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
--buildDoXmlBindings()
--performTests()
--generateDocs{"-d",project_path.."docs/lua/modules","--nofiles",project_path.."software/lua/modules"}
--loadWxModule()


LOG:notice "Done executing script."
