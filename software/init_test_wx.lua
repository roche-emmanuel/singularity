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

function loadWxModule()
    LOG:notice "Loading wx module..."
    require "wx"
    
    LOG:notice("wx module content is:",wx)
    
    LOG:notice("Creating new object.")
    local obj = wx.wxObject:new()
    LOG:notice("Done creating object.")
    
	local msg = "Hello world!"
	local caption = "Test"
	
    wx.wxMessageBox(msg,caption,wx.wxOK,nil,50,50);
    --wx.wxMessageBox(msg,caption);
    
    LOG:notice "Wx module loaded."
end

--buildWxBindings(false)
--buildWxBindings(true)
--buildDoXmlBindings()
--performTests()
--generateDocs{"-d","W:/Projects/singularity/docs/lua/modules","--nofiles","W:/Projects/singularity/software/lua/modules"}
loadWxModule()


LOG:notice "Done executing script."
