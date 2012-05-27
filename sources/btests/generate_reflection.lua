--flavor = flavor or "mingw32"
--root_path=root_path or "W:/Shared/Projects/singularity/"
--project="binding_tests"
root_path = sgt_path.."software/"

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
    local LunaWriter = require "bindings.LunaWriter"
	local tc = require "bindings.TypeConverter"
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

	local writer = LunaWriter(datamap)
    writer:writeBindings(options.destpath)

    LOG:bgen_n "Luna reflection generated."
end

function buildBindings()
    local suffix = ""
    generateReflection{
        xmlpath=sgt_path.."build/xml_wrapping/".. project .."/xml",
        modName=project,
        headers={"plug_common.h"},
        userContent={}, 
        destpath=sgt_path.."sources/"..project.."/",
        ignoreClasses={},
        ignoreClassFuncs={},
        ignoreGlobalFuncs={},
        ignoreConverters={},
        forceFuncSignature=true
        }
end

buildBindings()

LOG:notice "Done executing script."
