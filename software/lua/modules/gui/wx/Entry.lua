local Class = require("classBuilder"){name="Entry",bases="base.Object"};

local utils = require "utils"
local Set = require "std.Set"

function Class:initialize(options)
	self._provider = options.provider
	self._children = Set()
	self._type = options.type
	self._name = options.name
	self._parent = options.parent
	self._value = options.value
	self._range = options.range
	
	self._enabled = true
	self._controls = Set()
	self._classes = {} -- classes for the controls.
	if self._parent then
		self._parent:addChild(self)
	end
end
        
function Class:getName()
	return self._name
end

function Class:setProvider(prov)
	self:check(prov,"Invalid provider")
	self._provider = prov
end
        
function Class:getProvider()
	return self._provider
end

function Class:addChild(child)
    self:check(child,"Invalid child entry")
    self._children:push_back(child)
end

function Class:updateValue()
    self:info("Updating value for entry ",self:getName())
    if self._type == "void" or self._type == "dummy" then
        self._value = self._provider:getCurrentItem();
        return self._value;
    end
    
    self._value = self._provider:get(self) -- retrieve the current value for that entry.
    if self._states then
        -- if this entry is a state entry, then also update the currentState member:
        self._currentState = nil -- invalid the current state.
        for k,v in ipairs(self._states) do
            if v.id == self._value then
                self._currentState = (k-1);
                break;
            end
        end
        if not self._currentState and self._value then
            self:error("Cannot find id ", self._value," in list")
        end
    end

    return self._value
end
   
function Class:getValue()
    return self:updateValue()
end      

function Class:handle(val)
    -- if there is an handler, then call it:
    if self._handler then
        local data = {
            value=val,
            item=self._provider:getCurrentItem(),
            name=self._name,
            entry=self,
            intf=self._provider:getInterface()}
        self._handler(data)
    end        
end

function Class:updateChildrenDisplay()
    for _, child in pairs(self._children or {}) do
        child:updateDisplay()
    end 
end

function Class:setValue(val)
    self._value = val;
    if val~=nil and self._provider:set(self,val) then
        self:handle(val);
        
        -- update the children if any:
		self:updateChildrenDisplay()               
    end
end

function Class:areChildrenEnabled() -- override this function for valid parent.
    return true;
end
   
function Class:isEnabled()
    if self._parent then
        -- Assume the parent is a valid entry;
        local ce = self._parent:areChildrenEnabled();
	    return (self._invertActivation and not ce) or ce
	end
    
    return self._enabled;
end
       
function Class:enable(enabled)
    self._enabled = enabled;
end

function Class:show(visible)
    for _, ctrl in self._controls:sequence() do
        ctrl:Show(visible)
    end
end

function Class:updateDisplay()
    local val = self:updateValue()
    local activated = self:isEnabled()
 
    -- iterate on the entry controls, and update each of them:
    for _, ctrl in self._controls:sequence() do
        -- fix the TimeCtrl issue (cannot use Enable() on those objects);
        local className = self.classes[ctrl]
        local win = ctrl;
        className = className or ctrl:GetClassInfo():GetClassName()
        
        if val==nil then -- the value can still be "false"
            if className == "wxTreeCtrl" and self._type == "tree" then
                self._tree:setRoot{}
            end
            if (className=="wxAuiToolBarItem") then
                win:SetActive(false)
            else
                win:Enable(false)
            end
        else
            if (className=="wxAuiToolBarItem") then
                win:SetActive(false)
            else
                win:Enable(activated)
            end
            self:setControlValue(ctrl,self.classes[ctrl])
        end
    end
end

function Class:setControlValue(ctrl,className)
    self:check(ctrl,"Invalid parameters in setEntryControlValue()");
    local type = self._type
    local val = self._value;
    local range = self._range;
    if type == "vec3d" then
        range = self._range[ctrl:GetId()+1]
    end
    
    local class = className or ctrl:GetClassInfo():GetClassName()
    if class == "wxSlider" then
        if type == "color" then
            val = val:a() -- retrieve the alpha value of the color.
        end
        if type == "vec3d" then
            val = val[ctrl:GetId()]
        end
        ctrl:SetValue((val-range[1])/(range[2]-range[1])*10000);
    elseif class == "wxControl" or class == "wxPanel" then
        ctrl:Refresh()
    elseif class == "wxTextCtrl" then
        local unit = (self.unit or "")
        if type == "color" then
            ctrl:ChangeValue(string.format(self.numFormat,val:a()*100.0) .. unit);
        elseif type == "string" then
            ctrl:ChangeValue(val);
        elseif type == "vec3d" then
            ctrl:ChangeValue(string.format(self.numFormat,val[ctrl:GetId()]) .. unit);
        else
            --wx.wxLogMessage("Setting text value to ".. val)
            ctrl:ChangeValue(string.format(self.numFormat,val) .. unit);
        end
    elseif class == "wxDatePickerCtrl" then
        if type == "datetime" then
            -- build a datetime object from the map details:
            local date = wx.wxDateTime();
            --wx.wxLogMessage(string.format("Setting date %d/%d/%d",val.year,val.month-1,val.day))
            date:SetToCurrent()
            date:SetYear(val.year);
            date:SetMonth(val.month-1); 
            date:SetDay(val.day);
            date:ResetTime()
            if not date:IsEqualTo(ctrl:GetValue()) then
                ctrl:SetValue(date)
            end
        end
    elseif class == "TimeCtrl" then
        if type == "datetime" then
            -- build a time string
            local time = string.format("%02d:%02d:%02d",val.hour,val.min,math.floor(val.sec))
            if platform~="win32" then ctrl:ChangeValue(time) else ctrl:SetValue(time) end
        end
    elseif class == "wxTreeCtrl" then
        if type == "tree" then
            self.tree:setRoot(val,project);
        end    
    elseif class == "wxSpinCtrl" then
        if type == "integer" then
            ctrl:SetValue(string.format("%.0f",val));
        end
    elseif class == "wxFilePickerCtrl" then
        if type == "string" then
            ctrl:SetPath(val);
        end
    elseif class == "wxFontPickerCtrl" then
        if type == "font" then
            ctrl:SetSelectedFont(general.tools.mapToFont(val));
        end
    elseif class == "wxComboBox" then
        if type == "string" then
            --wx.wxLogMessage("Should set the combo text: "..val)
            --ctrl:SetValue(val)
            if platform=="linux64" then ctrl:ChangeValue(val); else ctrl:SetValue(val) end;
            --wx.wxLogMessage("Text set.")
        elseif type == "nodepath" then
            -- display the scene in the combo box:
            --ctrl:SetValue(val.scene)
            if platform=="linux64" then ctrl:ChangeValue(val.scene) else ctrl:SetValue(val.scene) end;
        elseif type == "statecb" then
            local str = "";
            for k,v in pairs(self.states) do
                if v.id == val then
                    str = v.caption
                end
            end
            -- display the scene in the combo box:
            --ctrl:SetValue(str)
            if platform=="linux64" then ctrl:ChangeValue(str) else ctrl:SetValue(str) end;
        end 
    elseif class == "wxChoicebook" then
        if type == "string" then
            -- retrieve the proper page in the choice book and select it:
            local count = ctrl:GetPageCount()
            for i=0,count-1 do
                if ctrl:GetPageText(i) == val then
                    ctrl:ChangeSelection(i)
                    return
                end
            end
            --wx.wxLogWarning("Could not find choicebook page named '"..val.."'");
            --wx.wxLogWarning(debug.traceback());
        end
    elseif class == "wxChoice" then
        if type == "string" then
            ctrl:SetStringSelection(val);
        end                  
    elseif class == "NodePathTreeCtrl" then
        if type == "nodepath" then
            -- retrieve the scene root object.
            -- select the object:
            --wx.wxLogMessage("Setting up Nodepath in nodepath control")
            
            if not val.nodepath:isValid() then
                wx.wxLogError("Invalid nodepath object in nodepath entry.");
                return;
            end
            --wx.wxLogMessage("Looking for scene ".. val.scene.." in project "..project:getName());
            local scene = project and project:getScene(val.scene)
            if not scene then
                --wx.wxLogMessage("Invalid scene in nodepath entry.");
                return
            end
            
            ctrl:setRoot(scene:getRoot(),project);
            if val.nodepath:getNumItems()~=0 then
                --wx.wxLogMessage("Assigning Nodepath in nodepath control")
                ctrl:setNodePath(val.nodepath:getNodePath())
            end
        end
    elseif class == "wxCheckListBox" then
        if type == "vector" then
            ctrl:Clear()
            self:refreshCheckList()
        end
    elseif class == "wxListBox" then
        if type == "vector" then
            ctrl:Clear()
            self:refreshList()
        end                
    elseif class == "wxListCtrl" then
        if type == "map" then
            self:refreshList()
        end
    elseif class == "wxDirPickerCtrl" then
        if type == "string" then
            ctrl:SetPath(val);
        end
    elseif class == "wxCheckBox" then
        if type == "bool" then
            ctrl:SetValue(val);
        end
    elseif class == "wxButton" then
        --wx.wxLogMessage("Updating button")
        if type == "statebutton" then
            --wx.wxLogMessage("Updated caption is:"..entry.states[entry.currentState+1].caption)
            ctrl:SetLabel(entry.states[entry.currentState+1].caption);
        end
    elseif class == "wxRadioBox" then
        --wx.wxLogMessage("Updating radiobox")
        if type == "stateradio" then
            ctrl:SetSelection(entry.currentState);
        end
    elseif class == "wxColourPickerCtrl" then
        --wx.wxLogMessage("Updating radiobox")
        if type == "color" then
            local col = wx.wxColour(math.floor(val:r()*255),math.floor(val:g()*255),math.floor(val:b()*255))
            ctrl:SetColour(col);
        end
    end
end

return Class