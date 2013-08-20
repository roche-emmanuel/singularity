local Class = require("classBuilder"){name="BoolEntry",bases="gui.wx.Entry"};

function Class:initialize(options)
    self:check(options and options.caption,"A valid 'caption' is needed to build a Bool entry.");
    self:check(options and options.name,"A valid 'name' is needed to build a Bool entry.");

    -- overrride some values:
    self._type = "bool"
    self._defaultValue = self._defaultValue or false
        
    self:create()
end

function Class:areChildrenEnabled()
    return self._controls[1]:IsChecked();
end

function Class:create()    
    -- prepare the handlers we will need here:
    local intf = self._intf
    
    function checkHandler(intf,event)            
        local val = event:IsChecked();
        
        local grpname = self:getGroupName()
        if grpname and val then
            --wx.wxLogMessage("Disabling sibling entries in group "..entry.group)
            local grp = intf:getEntryGroup(grpname)
            self:check(grp,"Invalid entry group for group named: ",self._group)
            for _, ent in grp:sequence() do
                --wx.wxLogMessage("Disabling entry "..v)
                if ent ~= self then
                    ent:setValue(false);
                    ent:updateDisplay()
                    ent:updateChildrenDisplay()                    
                end
            end
        end
        
        -- update the new value sending this to the provider:
        self:setValue(val);
    end
    
    self._controls[1] = intf:addCheckBox{text=self._caption,
										 handler=checkHandler,
										 flags=self._flags or wx.wxALIGN_RIGHT+wx.wxALL,
										 tip=self._tip,
										 style=self._style or wx.wxALIGN_RIGHT+wx.wxCHK_2STATE};
    intf:addLicensedItem(self._controls[1],self._right)
end

return Class
