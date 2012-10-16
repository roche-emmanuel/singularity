local Class = require("classBuilder"){name="ControlHolder",bases="gui.wx.BasicInterface"};


local utils = require "utils"

-- This class provides functions to add wx controls.
function Class:initialize(options)
	 
end

function Class:addControl(ctrl,options)
    if self:isToolbar() then
        local obj = ctrl:dynCast("wxControl");
        if obj then
            self:getRootWindow():AddControl(obj);
        else
            self:warn("Ignoring non-wxControl object for ToolBar interface. Object type is: ",utils.typeEx(obj));
        end
    else
        self:getCurrentSizer():Add(ctrl,options.prop or 0,options.flags or wx.wxALL,options.border or 2);
        self:addLicensedItem(ctrl,options.right)
    end
    
    if options.tip then
        ctrl:SetToolTip(options.tip)
    end
    
    if options.name then
        self.controls[options.name] = ctrl
    end
    
    if options.minsize then
        ctrl:SetMinSize(options.minsize)
    end
    
    return ctrl;    
end

        
return Class
