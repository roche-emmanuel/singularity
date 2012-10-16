module("guitools.compact.entries",package.seeall)

slidingCursor = nil;
        
function checkValue(matched,ctrl,entry,str)
    --the value is valid, but we still need to check if we are in the limits:
    -- but only if we have hard limits:
    local origStr = str or (matched.."")
    local curVal = (entry.type == "color" and entry:getValue()[3]*100.0) or entry:getValue();
    
    if not entry.softRange then
        
        local range = (entry.type=="vec3d" and entry.range[ctrl:GetId()+1]) or entry.range
        if matched < range[1] then
            -- retrieve the current value
            local overrideVal = (curVal ~= range[1]) and range[1]
            if overrideVal then
                ctrl:ChangeValue(string.format(entry.numFormat,overrideVal) .. entry.unit)
                ctrl:SetSelection(-1,-1)
            end
            return overrideVal;
        end

        if matched > range[2] then
            -- retrieve the current value
            local overrideVal = (curVal ~= range[2]) and range[2]
            if overrideVal then
                ctrl:ChangeValue(string.format(entry.numFormat,overrideVal) .. entry.unit)
                ctrl:SetSelection(-1,-1)
            end
            return overrideVal;
        end
    end
    
    -- Also check the format of the value in the text area:
    local val = ctrl:GetValue();
    --val = (entry.type == "color" and val[3]*100.0) or entry:getValue();
    
    local newVal = string.format(entry.numFormat,matched) .. entry.unit
    if val ~= newVal then
        local pos = ctrl:GetInsertionPoint()
        ctrl:ChangeValue(newVal)
        ctrl:SetInsertionPoint(pos);
        -- set the insertion point just after the text already created:
        --local index1,index2 = newVal:find(origStr)
        --ctrl:SetInsertionPoint(index2);
        --ctrl:SetSelection(-1,-1)
    end
    
    -- The numerical value was retrieved:
    return matched;   
end

function parseValue(val,ctrl,entry)
    val = val:gsub("%.%.",".");
    --wx.wxLogMessage("the value is: "..val)
    
    local matched = string.match(val,entry.numPattern.. entry.punit .."$") or string.match(val,entry.numPattern .."$");
    local curVal = (entry.type == "color" and entry:getValue()[3]*100.0) or entry:getValue();
    
    if not matched then
        -- could not match the given pattern; so this is not a valid entry, restore the previous and select all the text:
        --wx.wxMessageBox("Invalid numerical entry for the value of '".. entry.name.."', restoring previous valid value.");
        local pos = ctrl:GetInsertionPoint()
        --wx.wxLogMessage("The Curval is: ".. curVal)
        ctrl:ChangeValue(string.format(entry.numFormat,curVal) .. entry.unit)
        ctrl:SetInsertionPoint(pos);
        wx.wxBell()
        return;
    end
    
    matched = (matched == "" and string.format(entry.numFormat,entry.range[1])) or (matched=="." and "0.") or matched;
    
    return checkValue(matched+0,ctrl,entry,matched)
end

function extractNumericalValue(entry,prev,id)
    return (entry.type == "color" and prev[3]*100.0) 
        or (entry.type == "vec3d" and prev[id])
        or prev
end

function computeVec3dValue(prev,val,id)
    local vec = prev
    if id==0 then
        vec = osg.Vec3d(val,vec[1],vec[2])
    elseif id == 1 then
        vec = osg.Vec3d(vec[0],val,vec[2])
    else
        vec = osg.Vec3d(vec[0],vec[1],val)
    end
    return vec
end

function computeNewValue(entry,val,id)
    local prev = entry:getValue()
    if not prev then
        return nil; -- this is not a valid entry state ?
    end
    return (entry.type == "color" and osg.Vec4f(prev[0],prev[1],prev[2],val/100.0)) 
        or (entry.type == "vec3d" and computeVec3dValue(prev,val,id))
        or val
end

function setupNumericalText(self,entry,txt,id,index)
    function textHandler(intf,event)
        -- get the initial "new value":
        local val = event:GetString();        

        --wx.wxLogMessage("The text content is: "..val);
        val = parseValue(val,txt,entry)
        
        if not val then 
            return -- do not proceed with updating anything.
        end
        
        val = computeNewValue(entry,val,id)
        
        if entry.type == "color" then
            entry.controls[index+2]:Refresh()
        end
        
        -- update the new value sending this to the provider:
        entry:setValue(val);
    end
    self:connectHandler(txt,wx.wxEVT_COMMAND_TEXT_UPDATED,textHandler)
    
    local OnMouseWheel = function(intf,event)
        local val = extractNumericalValue(entry,entry:getValue(),id)

        local delta = event:GetWheelRotation()/120.0;
        val = val + delta;
 
        val = checkValue(val,txt,entry,string.format(entry.numFormat,val));
        
        if not val then 
            return -- do not proceed with updating anything.
        end
    
        val = (entry.type == "integer" and math.floor(val+0.5)) or val
        
        -- update the slider and the text ctrl:
        entry.controls[index+3]:ChangeValue(string.format(entry.numFormat,val) .. entry.unit)
        
        val = computeNewValue(entry,val,id)
        
        if entry.type == "color" then
            entry.controls[index+2]:Refresh()
        end
        
        -- send the command:
        entry:setValue(val);        
    end
    self:connectHandler(txt,wx.wxEVT_MOUSEWHEEL,OnMouseWheel)
    
    local OnKeyDown = function(intf,event)
        local delta = nil;
        if event:GetKeyCode() == wx.WXK_UP then
            delta = 1.0;
        elseif event:GetKeyCode() == wx.WXK_DOWN then
            delta = -1.0;
        else
            event:Skip();
        end
        
        if delta then
            local val = extractNumericalValue(entry,entry:getValue(),id)
            
            val = val + delta;
     
            val = checkValue(val,txt,entry,string.format(entry.numFormat,val));
            
            if not val then 
                return -- do not proceed with updating anything.
            end
        
            val = (entry.type == "integer" and math.floor(val+0.5)) or val
            
            -- update the slider and the text ctrl:
            entry.controls[index+3]:ChangeValue(string.format(entry.numFormat,val) .. entry.unit)

            val = computeNewValue(entry,val,id)
            
            if entry.type == "color" then
                entry.controls[index+2]:Refresh()
            end
            
            -- send the command:
            entry:setValue(val);          
        end
    end
    self:connectHandler(txt,wx.wxEVT_KEY_DOWN,OnKeyDown)
    
end

function setupColorSwatch(self,entry,area,id,index)

    local color_swatch_checker = guitools.getBitmap("color_swatch_checker",-1); -- do not resize the image;
    local size = wx.wxSize(color_swatch_checker:GetWidth(),color_swatch_checker:GetHeight());
    area:SetMinSize(size)
    area:SetMaxSize(size)
    area:SetCursor(wx.wxCursor(wx.wxCURSOR_HAND))
    
    local OnEraseBg = function(intf,event)
        -- don't do anything here.
    end
    self:connectHandler(area,wx.wxEVT_ERASE_BACKGROUND,OnEraseBg)
    
    local OnPaint = function(intf,event)
        --wx.wxLogMessage("I'm in the paint handler!");
        --local bmp = wx.wxBitmap(color_swatch_checker:GetWidth(),color_swatch_checker:GetHeight());
        local val = entry:getValue();
        if not val then
            local dc = wx.wxPaintDC(area)
            local brush = wx.wxBrush(wx.wxWHITE,wx.wxFDIAGONAL_HATCH ) --wx.wxTRANSPARENT);
            dc:SetPen(wx.wxBLACK_PEN)
            dc:SetBrush(brush)
            brush:delete()

            dc:DrawRectangle(0,0,color_swatch_checker:GetWidth(),color_swatch_checker:GetHeight());
            dc:delete()
            return;
        end
        
        local whiteBase = osg.Vec4f(1.0,1.0,1.0,1.0);
        local greyBase = osg.Vec4f(204.0/255.0,204.0/255.0,204.0/255.0,1.0);
        
        local white = general.tools.vec4ToColour(whiteBase * (1.0-val[3]) + val * val[3]);
        local grey = general.tools.vec4ToColour(greyBase * (1.0-val[3]) + val * val[3]);
        
        --local memdc = wx.wxMemoryDC();
        
        local dc = wx.wxPaintDC(area)
        local brush = wx.wxBrush(white,wx.wxSOLID) --wx.wxTRANSPARENT);
        dc:SetPen(wx.wxTRANSPARENT_PEN)
        dc:SetBrush(brush)
        brush:delete()

        dc:DrawRectangle(0,0,color_swatch_checker:GetWidth(),color_swatch_checker:GetHeight());
        
        local brush = wx.wxBrush(grey,wx.wxSOLID) --wx.wxTRANSPARENT);
        
        dc:SetBrush(brush)
        brush:delete()
        
        local size = color_swatch_checker:GetHeight()/4.0;
        
        for i=0,11 do
            for j=0,3 do
                if math.mod(i+j,2)==1 then
                    -- this is a grey square:
                    dc:DrawRectangle(i*size,j*size,size,size);
                end
            end
        end
        
        dc:SetPen(wx.wxBLACK_PEN)
        dc:SetBrush(wx.wxTRANSPARENT_BRUSH);
        dc:DrawRectangle(0,0,color_swatch_checker:GetWidth(),color_swatch_checker:GetHeight());
        
        --[[
        dc:DrawBitmap(color_swatch_checker,0,0,true)
        -- draw the color 
        local val = entry:getValue();
        local col = general.tools.vec4ToColour(val);
        --dc:DrawBitmap((entry.sliderButPressed and num_slider_arrow_expanded) or num_slider_arrow,0,0,true)
        ]]
        dc:delete()
    end
    self:connectHandler(area,wx.wxEVT_PAINT,OnPaint)

    local OnMouseLeftDown = function(event)
        -- display the color dialog:
        local val = entry:getValue();
        local col = general.tools.vec4ToColour(val);
       
        col = wx.wxGetColourFromUser(area, col, "Select the color for ".. entry.caption)
        
        if col:Ok() then
            local vec = general.tools.colourToVec4(col,val[3]);
            entry:setValue(vec);
            area:Refresh()
        end
        
        event:Skip()
    end
    area:Connect(wx.wxEVT_LEFT_DOWN,OnMouseLeftDown)
    area:Connect(wx.wxEVT_LEFT_DCLICK,OnMouseLeftDown)
    area:Connect(wx.wxEVT_RIGHT_DOWN,OnMouseLeftDown)
    area:Connect(wx.wxEVT_RIGHT_DCLICK,OnMouseLeftDown)   
end

function setupPopupButton(self,entry,but,subframe,updateFunc)
    local num_slider_bg_normal = guitools.getBitmap("num_slider_bg_normal",16);
    local num_slider_bg_hover = guitools.getBitmap("num_slider_bg_hover",16);
    local num_slider_bg_pressed = guitools.getBitmap("num_slider_bg_pressed",16);
    local num_slider_arrow = guitools.getBitmap("num_slider_arrow",16);
    local num_slider_arrow_expanded = guitools.getBitmap("num_slider_arrow_expanded",16);
    
    local OnPaint = function(intf,event)
        --wx.wxLogMessage("I'm in the paint handler!");
        local dc = wx.wxPaintDC(but)
        dc:DrawBitmap((entry.sliderButPressed and num_slider_bg_pressed) or (entry.mouseOnSliderBut and num_slider_bg_hover) or num_slider_bg_normal,0,0,true)
        dc:DrawBitmap((entry.sliderButPressed and num_slider_arrow_expanded) or num_slider_arrow,0,0,true)
        dc:delete()
        
        if entry.sliderButPressed then
            local pos = but:GetScreenPosition();
            
            --wx.wxLogMessage("The mouse position is: (".. pos.x .. ",".. pos.y ..")")
            subframe:SetSize(pos.x-150+16,pos.y+17,150,24);
            subframe:Layout();
            
            updateFunc()

            subframe:Show(true)
        else
            subframe:Show(false)
        end
    end
    self:connectHandler(but,wx.wxEVT_PAINT,OnPaint)
        
    local OnMouseEnter = function(event)
        entry.mouseOnSliderBut = true;
        but:Refresh()
    end
    but:Connect(wx.wxEVT_ENTER_WINDOW,OnMouseEnter)
    
    local OnMouseLeave = function(event)
        entry.mouseOnSliderBut = false;
        but:Refresh()
    end
    but:Connect(wx.wxEVT_LEAVE_WINDOW,OnMouseLeave)

    local OnMouseLeftDown = function(event)
        entry.sliderButPressed = not entry.sliderButPressed;
        but:Refresh()
        event:Skip()
    end
    but:Connect(wx.wxEVT_LEFT_DOWN,OnMouseLeftDown)
    but:Connect(wx.wxEVT_LEFT_DCLICK,OnMouseLeftDown)
    but:Connect(wx.wxEVT_RIGHT_DOWN,OnMouseLeftDown)
    but:Connect(wx.wxEVT_RIGHT_DCLICK,OnMouseLeftDown)   
end

function setupPopupSlider(self,entry,slider,but,subframe,id,index)
    
    local updateFunc = function()
        local val = extractNumericalValue(entry,entry:getValue(),id)
        
        local range = (entry.type=="vec3d" and entry.range[id+1]) or entry.range;
        slider:SetValue((val-range[1])/(range[2]-range[1])*10000)
        slider:SetFocus();
    end
    
    setupPopupButton(self,entry,but,subframe,updateFunc)
    
    function sliderHandler(intf,event)            
        local pos = event:GetPosition()/10000.0;
        
        -- convert the value to the corresponding range:
        local range = (entry.type=="vec3d" and entry.range[id+1]) or entry.range;
        local val = range[1] + (range[2]-range[1])*pos;
       
        val = (entry.type == "integer" and math.floor(val+0.5)) or val
              
        -- update the text ctrl value:
        entry.controls[index+3]:ChangeValue(string.format(entry.numFormat,val) .. entry.unit);

        if entry.type == "color" then
            entry.controls[index+2]:Refresh()
        end
        
        val = computeNewValue(entry,val,id)
        
        -- update the new value sending this to the provider:
        entry:setValue(val);
    end
    self:connectHandler(slider,wx.wxEVT_SCROLL_THUMBTRACK,sliderHandler)
    self:connectHandler(slider,wx.wxEVT_SCROLL_CHANGED,sliderHandler)
    
    local OnFocusLost = function(intf,event)
        --wx.wxLogMessage("Slider focus lost.")
        subframe:Show(false);
        local pos = wx.wxGetMousePosition()
        local rect = but:GetScreenRect();
        
        if not rect:Contains(pos) then
            --wx.wxLogMessage("Not clicking on slider button.")
            entry.sliderButPressed = false;
        end
        but:Refresh();
    end
    self:connectHandler(slider,wx.wxEVT_KILL_FOCUS,OnFocusLost)
    
end

function setupSlidingLabel(self,entry,label,id,index)
    slidingCursor = slidingCursor or wx.wxCursor(guitools.getImage("sliding_cursor",16));

    function labelHandler(intf,event)
        if(entry.pressedLabel) then
            --wx.wxLogMessage("Label handler on entry ".. entry.name)
            --wx.wxLogMessage("Range max val ".. entry.range[2])
            local range = entry.type== "vec3d" and entry.range[id+1] or entry.range
            local length = range[2]-range[1]; -- the complete length to cover.
            
            local delta = (event:GetX() - entry.posX);
            local sign = delta > 0.0 and 1.0 or -1.0;
            
            local offset = sign * math.exp(entry.expfactor*math.abs(delta)/entry.dragcover)/math.exp(entry.expfactor)*length;
            
            -- wrap the pointer back at its origin location:
            if event:RightIsDown() then
                event:GetEventObject():DynamicCast("wxWindow"):WarpPointer(entry.posX,entry.posY)
            end
            
            -- work only on the alpha component if this is a color:
            local curVal = extractNumericalValue(entry,entry.prevValue,id) 
          
            local val = checkValue(curVal+offset,entry.controls[3],entry,string.format(entry.numFormat,curVal+offset));
            
            if not val then 
                return -- do not proceed with updating anything.
            end
        
            val = (entry.type == "integer" and math.floor(val+0.5)) or val;
            
            -- update the text ctrl:
            entry.controls[index+3]:ChangeValue(string.format(entry.numFormat,val) .. entry.unit)
            if entry.type == "color" then
                entry.controls[index+2]:Refresh()
            end
            
            val = computeNewValue(entry,val,id)

            -- send the command:
            entry:setValue(val);
        end
    end
    
    if not entry.noLabelHandler  then -- [ticket #55: restoring dragging support] -- and platform=="win32"
        -- Provider an handling system for the label drag support:    
        --txt:SetCursor(wx.wxCursor(wx.wxCURSOR_HAND));
        label:SetCursor(slidingCursor)
        label:Connect(wx.wxID_ANY,wx.wxEVT_MOUSE_CAPTURE_LOST,function(event)
            event:GetEventObject():DynamicCast("wxWindow"):ReleaseMouse();
            entry.pressedLabel = nil;
        end)
        label:Connect(wx.wxID_ANY,wx.wxEVT_LEFT_DOWN,function(event)
            entry.pressedLabel = true;
            entry.posX = event:GetX();
            entry.posY = event:GetY();
            entry.prevDelta = 0.0;
            entry.prevValue = entry:getValue()
            event:GetEventObject():DynamicCast("wxWindow"):CaptureMouse();
            event:Skip();
        end);
        label:Connect(wx.wxID_ANY,wx.wxEVT_LEFT_UP, function(event)
            entry.pressedLabel = nil;
            event:GetEventObject():DynamicCast("wxWindow"):ReleaseMouse();
            event:Skip();
        end);
        --[[label:Connect(wx.wxID_ANY,wx.wxEVT_RIGHT_DOWN, function(event)
            if entry.pressedLabel then
                event:GetEventObject():DynamicCast("wxWindow"):WarpPointer(entry.posX,entry.posY)
                entry.prevBaseValue = entry:getValue();
            end
            event:Skip();
        end);
        ]]
        label:Connect(wx.wxID_ANY,wx.wxEVT_RIGHT_DOWN, function(event)
            if entry.pressedLabel then
                event:GetEventObject():DynamicCast("wxWindow"):WarpPointer(entry.posX,entry.posY)
                local curVal = guitools.compact.entries.extractNumericalValue(entry,entry.prevValue,id)
                entry.controls[index+3]:ChangeValue(string.format(entry.numFormat,curVal) .. (entry.unit or ""))
                -- restore the previous value:
                entry:setValue(entry.prevValue)
                entry.controls[index+3]:SetSelection(-1,-1)
            end
            event:Skip();
        end);
        self:connectHandler(label,wx.wxEVT_MOTION,labelHandler)
    end        
end

function createNumericalSlot(self,entry,k,cap)
    local ctrls = entry.controls;
    local id = k and k-1 or wx.wxID_ANY
    local index = k and id*entry.comps or 0
    
    self:pushSizer{right=entry.right,orient=wx.wxHORIZONTAL,prop=entry.prop or 0,flags=wx.wxEXPAND}
    
    ctrls[index+1] = self:addStaticText{text=(cap or entry.caption)..": ",tip=entry.tip,id=id};
    setupSlidingLabel(self,entry,ctrls[index+1],id,index)
    
    -- add a spacer between the controls:
    self:addSpacer{prop=1}
    
    if entry.type == "color" then
        if self.isToolbar then
            ctrls[index+2] = wx.wxControl(self:getCurrentParent(),id,wx.wxDefaultPosition,wx.wxSize(48,16),wx.wxBORDER_NONE);
        else
            ctrls[index+2] = wx.wxPanel(self:getCurrentParent(),id,wx.wxDefaultPosition,wx.wxSize(48,16));
        end
        self:addControl(ctrls[index+2],{prop=0,flags=wx.wxALIGN_CENTER_VERTICAL})
        setupColorSwatch(self,entry,ctrls[index+2]);
        self:addStaticText{text=" "}; -- add a small space just after, use static text to work also in toolbars.
    end
    
    --local val = (entry.type == "color" and entry:getValue()[3]*100.0) or entry:getValue()
    local val = (entry.type == "color" and entry.defaultValue[3]*100.0) 
        or (entry.type == "vec3d" and entry.defaultValue[id])
        or entry.defaultValue
    
    -- compute the needed text extend:
    local maxValStr = (entry.numchar and string.rep("0",entry.numchar)) or string.format(entry.numFormat, (k and entry.range[k][2]) or entry.range[2]) .. (entry.unit or "")
    local txt = wx.wxTextCtrl(self:getCurrentParent(),wx.wxID_ANY,"",wx.wxDefaultPosition,wx.wxDefaultSize);
    
    local x, y, descent, externalLeading = txt:GetTextExtent(maxValStr)
    txt:Destroy();
    
    local txtsize = wx.wxSize(x+10,-1)
    
    --if not val then
    --    wx.wxLogWarning("Invalid default value for entry ".. entry.name .. " using 0.0");
    --    val = 0.0;
    --end
    ctrls[index+3] = self:addTextCtrl{size=txtsize,style=wx.wxTE_NOHIDESEL+wx.wxTE_RIGHT,text=string.format(entry.numFormat,val)..(entry.unit or ""),id=id}
    ctrls[index+3]:SetMinSize(txtsize);
    ctrls[index+3]:SetMaxSize(txtsize);

    setupNumericalText(self,entry,ctrls[index+3],id,index)
    
    if not entry.noSlider then
        if self.isToolbar then
            ctrls[index+4] = wx.wxControl(self:getCurrentParent(),wx.wxID_ANY,wx.wxDefaultPosition,wx.wxSize(16,16),wx.wxBORDER_NONE);
        else
            ctrls[index+4] = wx.wxPanel(self:getCurrentParent(),wx.wxID_ANY,wx.wxDefaultPosition,wx.wxSize(16,16));
        end
        self:addControl(ctrls[index+4],{prop=0,flags=wx.wxALIGN_CENTER_VERTICAL})
        
        -- Prepare the slider container:
        -- need to bypass toolbar settings:
        local wasToolbar = self.isToolbar;
        self.isToolbar = false;
        
        local subframe = wx.wxFrame(intro2wx(giDisplay.GreenIsisFrame.instance()),wx.wxID_ANY,"Slider helper",wx.wxDefaultPosition,wx.wxSize(150,20),platform~="win32" and wx.wxFRAME_NO_TASKBAR+wx.wxSTAY_ON_TOP+wx.wxBORDER_NONE or wx.wxFRAME_NO_TASKBAR+wx.wxSTAY_ON_TOP+wx.wxBORDER_SUNKEN); --
        local sizer = wx.wxBoxSizer(wx.wxVERTICAL);
        subframe:SetSizer(sizer);
        self:pushParent(subframe,sizer);
            self:pushPanel{prop=1,flags=wx.wxEXPAND+wx.wxALIGN_CENTER_VERTICAL}
            self:addSpacer{prop=1}
            ctrls[index+5] = self:addSlider{size=wx.wxSize(150,20),prop=0,flags=wx.wxEXPAND+wx.wxALIGN_CENTER_VERTICAL,id=id}
            self:addSpacer{prop=1}
            self:popParent(true)
        self:popParent(true)
        
        subframe:Layout()
        
        self.isToolbar = wasToolbar;
        
        setupPopupSlider(self,entry,ctrls[index+5],ctrls[index+4],subframe,id,index)
    end
   
    self:popSizer() 
end
 
function createNumericalEntry(self,options)
    local entry = options;
    assert(entry and entry.caption,"A valid 'caption' is needed to build a Numerical entry.");
    assert(entry and entry.name,"A valid 'name' is needed to build a Numerical entry.");
    assert(entry and entry.type,"A valid 'type' is needed to build a Numerical entry.");

    --wx.wxLogMessage("Building numerical entry for ".. entry.name )
    local ctrls = {} -- prepare a table to hold the specific controls.
    entry.range = entry.range 
        or (entry.type=="integer" and {0,100}) 
        or (entry.type=="color" and {0,100})  
        or {0.0,1.0}
    if entry.type=="vec3d" and #entry.range == 2 then
       entry.range = {{entry.range[1],entry.range[2]},{entry.range[1],entry.range[2]},{entry.range[1],entry.range[2]}}
    end
    entry.precision = (entry.type=="color" and 0) 
        or (entry.type=="integer" and 0) 
        or entry.precision 
        or 6
    entry.numFormat = (entry.type=="color" and "%.0f") 
        or (entry.type=="integer" and "%.0f") 
        or entry.numFormat 
        or (entry.precision and "%.".. entry.precision .."f") 
        or "%.6f" 
    entry.controls = ctrls;
    entry.defaultValue = entry.defaultValue 
        or (entry.type=="color" and osg.Vec4f(0.0,1.0,0.0,1.0)) 
        or (entry.type=="vec3d" and osg.Vec3d(entry.range[1][1],entry.range[2][1],entry.range[3][1])) 
        or entry.range[1] -- use the minimum value by default 
    entry.unit = entry.unit 
        or (entry.type=="color" and "%") 
        or "";
    entry.dragcover = entry.dragcover or 150; -- cover the complete range with 200 pixels of dragging.
    if not entry.expfactor then
        local v2 = (entry.type=="vec3d" and entry.range[1][2]) or entry.range[2]
        local v1 = (entry.type=="vec3d" and entry.range[1][1]) or entry.range[1]
        
        entry.expfactor = math.log(math.pow(10,-entry.precision)/(v2-v1))/(1.0/entry.dragcover - 1.0)
        --wx.wxLogMessage("The computed expfactor is ".. entry.expfactor);
    end
    
    if entry.type == "vec3d" then
        entry.offset = 3
        entry.comps = 3;
    end
    
    -- prepare the regex friendly unit
    local punit = entry.unit
    for k,v in ipairs({"%","^","$","(",")",".","[","]","*","+","-","?"}) do
        punit = punit:gsub("%"..v,"%"..v) -- replace the pattern symbols with escape "%".
    end
    entry.punit = punit;

    -- retrieve the proper parsed value:
    entry.numPattern = ((entry.type== "double" or entry.type=="color" or entry.type=="vec3d") and "^(%-?[0-9]*%.?[0-9]*)") or "^(%-?[0-9]*)";
    
    if not entry.numPattern then
        wx.wxLogError("Invalid entry type for advanced numerical text ctrl: ".. entry.type)
        return;
    end
  
    self:addEntry(entry)
    
    if entry.type == "vec3d" then
        self:pushSizer{right=entry.right,orient=wx.wxVERTICAL,text=options.caption,flags=wx.wxALL+wx.wxEXPAND} -- begin sizer
            for k,v in ipairs(options.subcaptions or {"X","Y","Z"}) do
                createNumericalSlot(self,entry,k,v)
            end
        self:popSizer() -- end sizer
    else
        createNumericalSlot(self,entry)
    end
end

function addDoubleEntry(self, options)    
    local entry = options;
    entry.type="double"
    createNumericalEntry(self,entry)
end

function addIntegerEntry(self,options)
    local entry = options;
    entry.type="integer"
    createNumericalEntry(self,entry)
end

function addColorEntry(self,options)
    local entry = options;
    entry.type="color"
    createNumericalEntry(self,entry)
end   

function addVec3Entry(self,options)
    local entry = options;
    entry.type="vec3d"
    createNumericalEntry(self,entry)
end

function addBoolEntry(self,options)    
    assert(options and options.caption,"A valid 'caption' is needed to build a Bool entry.");
    assert(options and options.name,"A valid 'name' is needed to build a Bool entry.");
    
    local entry = options;
    local ctrls = {} -- prepare a table to hold the specific controls.
    entry.type="bool"
    entry.controls = ctrls;
    entry.defaultValue = entry.defaultValue or false
    
    self:addEntry(entry)
    
    -- prepare the handlers we will need here:
    function checkHandler(intf,event)            
        local val = event:IsChecked();
        
        if entry.group and val then
            --wx.wxLogMessage("Disabling sibling entries in group "..entry.group)
            local grp = self:getGroup(entry.group)
            for k,v in ipairs(grp) do
                --wx.wxLogMessage("Disabling entry "..v)
                if v ~= entry.name then
                    local ent = self:getEntry(v);
                    ent:setValue(false);
                    ent:updateDisplay()
                    
                    -- update the children if any:
                    for k,v in pairs(ent.children or {}) do
                        v:updateDisplay()
                    end
                end
            end
            
        end
        
        -- update the new value sending this to the provider:
        entry:setValue(val);
    end
    
    ctrls[1] = self:addCheckBox{text=options.caption,handler=checkHandler,flags=options.flags or wx.wxALIGN_RIGHT+wx.wxALL,tip=options.tip,style=wx.wxALIGN_RIGHT+wx.wxCHK_2STATE};
    self:addLicensedControl(ctrls[1],options.right)
    
    if entry.group then
        -- Add this entry to the given group:
        local grp = self:getGroup(entry.group)
        table.insert(grp,entry.name)
        wx.wxLogVerbose("Adding entry "..entry.name.." to group "..entry.group)
    end
    
    -- this refs #283
    -- add a areChildrenEnabled function to this object:
    function entry:areChildrenEnabled()
        return self.controls[1]:IsChecked();
    end
    
end    

function addStringEntry(self,options)
    assert(options and options.caption,"A valid 'caption' is needed to build a String entry.");
    assert(options and options.name,"A valid 'name' is needed to build a String entry.");
    
    local entry = options;
    entry.caption = entry.caption or entry.text
    local ctrls = {} -- prepare a table to hold the specific controls.
    entry.type="string"
    entry.controls = ctrls;
    entry.defaultValue = entry.defaultValue or "" -- empty string by default
    self:addEntry(entry)
    
    -- prepare the handlers we will need here:
    function textHandler(intf,event)            
        local val = event:GetString();
                        
        -- update the new value sending this to the provider:
        entry:setValue(val);
    end
    
    local maxValStr = entry.maxVal or string.rep("a", entry.numchar or 16); --string.format(entry.numFormat,entry.range[2]) .. (entry.unit or "")
    local txt = wx.wxTextCtrl(self:getCurrentParent(),wx.wxID_ANY,"",wx.wxDefaultPosition,wx.wxDefaultSize);
    
    local x, y, descent, externalLeading = txt:GetTextExtent(maxValStr)
    txt:Destroy();
    
    local txtsize = wx.wxSize(x+5,-1)
    
    self:pushSizer{right=options.right,orient=wx.wxHORIZONTAL,prop=options.prop or 0,flags=wx.wxEXPAND}
    ctrls[1] = self:addStaticText{text=options.caption..": ",tip=options.tip};
    if not options.expanding then
        self:addSpacer{prop=1}
    end
    ctrls[2] = self:addTextCtrl{size=txtsize,prop=options.expanding and 1 or 0,handler=textHandler,flags=options.flags,text=entry.defaultValue,style=options.style}
    if options.unit then
        ctrls[3] = self:addStaticText{text=options.unit}
    end        
    self:popSizer()   
    
    return ctrls[2];
end   

