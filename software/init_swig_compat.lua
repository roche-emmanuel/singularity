print("Flavor is: ".. flavor)
print("Path is: ".. root_path)


package.cpath = package.cpath..";".. root_path .. "/bin/".. flavor .."/modules/?.sgp" 

require("doxmlparser")
dxp = doxmlparser

classes = {}
global = {}
global.functions = {}
global.vars = {}

function processSection(holder, sec)
    print(" - ".. sec:kindString():latin1() .. " section found.")

    local mli = sec:members();
    mli:toFirst()
    local mem = mli:current();
    
    while(mem) do
    
        if (mem:kind()==dxp.IMember_Function or
                mem:kind()==dxp.IMember_Prototype or
                mem:kind()==dxp.IMember_Signal or
                mem:kind()==dxp.IMember_Slot or
                mem:kind()==dxp.IMember_DCOP) then -- is a "method"
            print("   - public method ".. mem:name():latin1())
            table.insert(holder.functions,mem:name():latin1())
        elseif(mem:kind()==dxp.IMember_Variable or mem:kind()==dxp.IMember_Property) then
            -- is an attirbute
            print("   - public attribute ".. mem:name():latin1())
            table.insert(holder.vars,mem:name():latin1())
        end
        
        mli:toNext()
        mem = mli:current()
    end    
end

function processClass(comp)
    local name = comp:name():latin1()
    classes[name]= classes[name] or {};
    class = classes[name]
    class.name = name
    class.functions = class.functions or {}
    class.vars = class.vars or {}
    class.bases = class.bases or {};
    
    -- we need to retrieve the parent classes for this class:
    local bli = comp:baseCompounds();
    bli:toFirst();
    local bcomp = bli:current()
    while(bcomp) do
        local bname = bcomp:name():latin1();
        table.insert(class.bases,bname);
        
        cli:toNext();
        bcomp:current();
    end
    
    bcomp:release();
    bli:release();
    
    processHolder(class,comp)
end

function processNamespace(comp)
    global.functions = global.functions or {}
    global.vars = global.vars or {}
    
    processHolder(global,comp)
end

function processHolder(holder,comp)
    local sli = comp:sections();
    sli:toFirst();
    local sec = sli:current();
    while(sec) do
        if(sec:isPublic()) then
            processSection(holder, sec)
        end
        
        sli:toNext();
        sec = sli:current();
    end
    
    sli:release();       
end

function getMetrics(folder)
    local dox = dxp.createObjectModel();

    dox:setDebugLevel(0);

    if not dox:readXMLDir(folder) then
        print("Error reading file ".. folder .."/index.xml")
        return
    end
 
    local cli = dox:compounds();
    cli:toFirst();
    local comp = cli:current();
    while(comp) do
        
        print("Processing compounds " .. comp:name():latin1())

        local class = nil;
        if (comp:kind()==dxp.ICompound_Class or comp:kind()==dxp.ICompound_Struct or comp:kind()==dxp.ICompound_Interface) then
            
            processClass(comp)
        elseif(comp:kind()==dxp.ICompound_File or comp:kind()==dxp.ICompound_Namespace) then
            processNamespace(comp)
        end
 
        comp:release();
        cli:toNext();
        comp = cli:current();
    end
    
    cli:release();

    dox:release();
end

getMetrics("W:/Projects/singularity/build/xml_wrapping/doxmlparser/xml")


-- now write the luabind bindings:
local intro = [[
#include <lua.hpp>
#include <luabind/luabind.hpp>
#include <luabind/operator.hpp>
#include <luabind/adopt_policy.hpp>
#include <luabind/dependency_policy.hpp>

#include "doxmlintf.h"

#ifdef __cplusplus
extern "C" {
#endif

struct dummy {
	int a;
};

int luaopen_doxmlparser(lua_State* L)
{

	// Open the luabind support:
	using namespace luabind;
	luabind::open(L);

    luabind::module(L, "doxmlparser")
    [
]]

local final=[[
    ];

	return 0;
}

#ifdef __cplusplus
}
#endif
]]

local intent = 2
local tab="\t"

local str = ""
for k,v in pairs(classes) do
    if #(v.functions) > 0 then
        -- add the class bindings:
        local bases = v.bases
        if #bases>0 then
            -- add advanced class déclaration:
            
        else
            -- add simple class déclaration:
            str = str .. string.rep(tab,intent) .. 'class_< ' ..v.name .. ' >("' .. v.name .. '")'
        end
        for k2,v2 in pairs(v.functions) do
            str = str .. "\n"
            str = str .. string.rep(tab,intent+1) .. '.def("' .. v2 .. '",&' .. v.name .. '::' .. v2 .. ')'
        end
        str = str .. ",\n"
    end    
end

if #str > 2 then
    str = str:sub(1,-3) -- remove two last characters
end

for i=1,#global.functions do
    local func = global.functions[i]
    str = str .. ",\n"
    str = str .. string.rep(tab,intent) .. 'def("' .. func .. '",&' .. func .. ')'
end

str = str .. "\n"

-- now write the file:
local f = io.open("W:/Projects/singularity/sources/doxmlparser/src/bindings.cxx","w")

f:write(intro..str..final)
f:close()

print("Done generating bindings");
