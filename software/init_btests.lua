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

function test1()
	local N = 10
	local ave = 0
	local times = 1000000
	for i = 0, N do
	        local obj = btests.GetSetTester:new()
	
	        local t0 = os.clock()
	        for i=1,times do
	                obj:set(i)
	                if(obj:get() ~= i)then
	                        error("failed")
	                end
	        end
	        local dt = os.clock()-t0
	        if i~=0 then
	         ave = ave + dt
	        end
	end
	
	print('sgtLuna access (average elapsed time):',ave/N)
end

function test2()
	local N = 10
	local ave = 0
	local times = 1000000
	
	for i = 0, N do
	        local obj = btests.ProfileDerived:new()
	        local increment_me = btests.ProfileDerived:new()
	
	        local t0 = os.clock()
	        for i=1,times do
	                obj:increment_a_base(increment_me)
	        end
	        local dt = os.clock()-t0
	        if i~=0 then
	         ave = ave + dt
	        end
	end
	
	print('sgtLuna passing derived to a function that wants a base  (average elapsed time):',ave/N)
end

function test3()
	local N = 10
	local ave = 0
	local times = 1000000
	for i = 0, N do
	        local obj = btests.ProfileDerived:new()
	        local increment_me = btests.ProfileMultiBases:new()
	
	        local t0 = os.clock()
	        for i=1,times do
	                obj:increment_a_base(increment_me)
	        end
	        local dt = os.clock()-t0
	        if i~=0 then
	         ave = ave + dt
	        end
	end
	
	print('sgtLuna passing derived with multiple bases to a function that wants a base  (average elapsed time):',ave/N)
end

function test4()
	local N = 10
	local ave = 0
	local times = 1000000
	for i = 0, N do
	        local obj = btests.ProfileMultiBases:new()
	
	        local t0 = os.clock()
	        for i=1,times do
	                obj:virtual_func()
	        end
	        local dt = os.clock()-t0
	        if i~=0 then
	         ave = ave + dt
	        end
	end
	
	print('sgtLuna virtual function  (average elapsed time):',ave/N)
end

function test5()
	local N = 10
	local ave = 0
	local times = 1000000
	for i = 0, N do
	        local obj = btests.ProfileMultiBases:new()
	        --local obj = btests.ProfileDerived:new()
	
	        local t0 = os.clock()
	        for i=1,times do
	                obj:pure_virtual_func()
	        end
	        local dt = os.clock()-t0
	        if i~=0 then
	         ave = ave + dt
	        end
	end
	
	print('sgtLuna pure virtual function  (average elapsed time):',ave/N)
end

function performTests()
    LOG:notice "Loading test module..."
    require "btests"    
    LOG:notice "Test module loaded."
    
   -- LOG:notice("module content is:",btests)
    
    --test1()
    --test2()
    --test3()
    --test4()
    --test5()
end

performTests()

LOG:notice "Done executing script."
