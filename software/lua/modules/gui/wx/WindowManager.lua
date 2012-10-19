local Class = require("classBuilder"){name="WindowManager",bases="base.Object"};

local wx = require "wx"
os.setlocale("C","numeric") -- need to restore the locale after loading wx.

local Set = require "std.Set"

-- Main class to manager all the windows/interfaces.
function Class:initialize(options)
	self._interfaces = Set();
end

function Class:getMainFrame()
	self:no_impl()
end

function Class:getAUIManager()
	return nil -- no AUI manager by default.
end

function Class:togglePane(intf,doShow)
	local mgr = self:getAUIManager()
	if not mgr then
		return -- nothing to do.
	end
	
	local pinfo = intf:getPaneInfo()
	if not pinfo then
		return
	end
	    
    local pane = mgr:GetPane(pinfo.name)
    if not pane:IsOk() then
        self:warn("Invalid AUI pane with name ", pinfo.name)
    else
        if doShow==nil then
            pane:Show(not pane:IsShown())
        else
            pane:Show(doShow)
        end
        mgr:Update()
    end    
end

return Class()
