module("guitools.controls",package.seeall)

local checkFont = general.tools.mapToFont(giCommon.Config.readAny("config.gui.check.font",giScript.AnyMap()))

function loadControls(interface)


    function interface:addNodePathTreeCtrl(options)
        local ctrl = giDisplay.NodePathTreeComboBox(wx2intro(self:getCurrentParent()),wx.wxID_ANY);
        local wxctrl = intro2wx(ctrl)
        options.flags = options.flags or wx.wxALL+wx.wxALIGN_CENTER_VERTICAL
        if options.handler then
            self:connectHandler(wxctrl,options.eventType or wx.wxEVT_COMMAND_TEXT_UPDATED,options.handler)
        end  
        self:addControl(wxctrl,options)
        return ctrl
    end
    
    function interface:addPlotCtrl(options)
        local graphFont = wx.wxFont (11, wx.wxFONTFAMILY_DEFAULT, wx.wxFONTSTYLE_NORMAL, wx.wxFONTWEIGHT_NORMAL);
        local ctrl = mp.mpWindow( self:getCurrentParent(), wx.wxID_ANY, wx.wxPoint(0,0), wx.wxSize(100,100), wx.wxSUNKEN_BORDER );
        local x_axis = mp.mpScaleX(options.x_label or "X", mp.mpALIGN_BOTTOM, true, mp.mpX_NORMAL);
        local y_axis = mp.mpScaleY(options.y_label or "Y", mp.mpALIGN_LEFT, true);
        x_axis:SetFont(graphFont);
        y_axis:SetFont(graphFont);
        x_axis:SetDrawOutsideMargins(false);
        y_axis:SetDrawOutsideMargins(false);
        -- Fake axes formatting to test arbitrary format string
        -- xaxis->SetLabelFormat(wxT("%.2f €"));
        -- yaxis->SetLabelFormat(wxT("%p"));
        ctrl:SetMargins(30, 30, 45, 60);
        --     m_plot->SetMargins(50, 50, 200, 150);
        ctrl:AddLayer( x_axis );
        ctrl:AddLayer( y_axis );
        nfo = mp.mpInfoCoords(wx.wxRect(80,20,10,10), wx.wxTRANSPARENT_BRUSH); 
        ctrl:AddLayer( nfo )
        nfo:SetVisible(true);

        local leg = mp.mpInfoLegend(wx.wxRect(200,20,40,40), wx.wxTRANSPARENT_BRUSH); 
        ctrl:AddLayer( leg )
        leg:SetVisible(true);

        ctrl:EnableDoubleBuffer(true);
        ctrl:SetMPScrollbars(false);
        ctrl:Fit();    

        return self:addControl(ctrl,options)        
    end
    
    function interface:addWebCtrl(options)
        local ctrl = wxweb.wxWebControl(self:getCurrentParent(),wx.wxID_ANY);
        options.flags = options.flags or wx.wxALL+wx.wxALIGN_CENTER_VERTICAL

        function tryConnectHandler(doc,elem)
            if not elem:IsOk() or not elem:HasAttributes() then
                wx.wxLogWarning("Invalid element in tryConnectHandler().");
                return;
            end
            
            -- retrieve the attributes:
            local attrTarget = elem:GetAttributes():GetNamedItem("target")
            local attrType = elem:GetAttributes():GetNamedItem("event")
            local attrHandler = elem:GetAttributes():GetNamedItem("handler")
            local attrId = elem:GetAttributes():GetNamedItem("winid")
            local attrCapture = elem:GetAttributes():GetNamedItem("capture")
            
            local capture = attrCapture:IsOk() and attrCapture:GetNodeValue()=="true"
            
            if not attrTarget:IsOk() or not attrType:IsOk() or not attrHandler:IsOk() or not attrId:IsOk() then
                wx.wxLogWarning("Missing target or type or handler attribute in lua_handler tag.")
                return
            end
            
            -- retrieve the target:
            local target = doc:GetElementById(attrTarget:GetNodeValue());
            
            if not target:IsOk() then
                wx.wxLogWarning("Cannot find lua handler target "..attrTarget:GetNodeValue());
                return;
            end
            
            local thetype = attrType:GetNodeValue()
            local handler = attrHandler:GetNodeValue()
            local func = _G[handler];
            
            -- assume the handler is a function name available in this environment.
            if type(func) ~= "function" then
                wx.wxLogWarning("The handler "..handler.." is not a valid function.");
                return;
            end
            
            -- add the event handler:
            local winid = tonumber(attrId:GetNodeValue());
            if not winid then
                wx.wxLogWarning("invalid non numerical winid "..attrId:GetNodeValue());
                return;
            end
            
            wx.wxLogMessage("Connecting DOM handler, event="..thetype..", winid="..winid..", handler="..handler);
            
            target:AddEventListener(thetype,ctrl,winid,capture);
            local data = { web = ctrl, document=doc};
            self:connectHandler(ctrl,wxweb.wxEVT_WEB_DOMEVENT,func,winid,data)
        end
        
        function tryLuaScriptTag(doc,elem)
            if not elem:IsOk() then
                wx.wxLogWarning("Found invalid lua_script element in DOM.");
                return
            end
            
            local txt = wxweb.wxDOMText(elem:GetFirstChild());                        
            -- retrieve the first text node and ensure it is a Text:
            
            if not txt:IsOk() then
                wx.wxLogWarning("Found invalid lua_script text content.");
                return;
            end
            
            -- retrieve the content of the node and execute it in this environment:
            local str = txt:GetData()
            -- remove the commenting tags:
            --str = string.gsub(str,"<!%-%-","")
            --str = string.gsub(str,"%-%->","");
            --wx.wxLogMessage("Executing script: "..str);
            if not this_env:execute(str) then
                wx.wxLogError("Error while executing DOM script "..str);
            end        
        end
        
        function tryScriptTag(doc,elem)
            if not elem:IsOk() or not elem:HasAttributes() then
                return;
            end
            
            local attr = elem:GetAttributes():GetNamedItem("language")
            if  not attr:IsOk() or  (attr:GetNodeValue() ~= "lua") then
                return;
            end
            
            -- retrieve the first text node and ensure it is a Comment:
            local txt = elem:GetFirstChild();            
            if not txt:IsOk() then
                return
            end
            
            -- retrieve the content of the node and execute it in this environment:
            local str = txt:GetNodeValue()
            -- remove the commenting tags:
            str = string.gsub(str,"<!%-%-","")
            str = string.gsub(str,"%-%->","");
            --wx.wxLogMessage("Executing script: "..str);
            if not this_env:execute(str) then
                wx.wxLogError("Error while executing DOM script "..str);
            end
        end
        
        -- prepare an event handler to connect the lua event handlers when the dom is ready:
        function onDOMLoaded(intf,event)
            --wx.wxMessageBox("Hello world!!!")
            
            -- execute all the lua script nodes:
            local doc = ctrl:GetDOMDocument()
            if not doc:IsOk() then
                wx.wxLogError("DOM Document is not OK.");
                return;
            end

            -- execute all the scripts in lua_script tags:
            local slots = doc:GetElementsByTagName("LUA_SCRIPT")
            
            -- iterate onthe slots, and execute the scripts in this environment:
            if slots:IsOk() then
                for i=0,slots:GetLength()-1 do
                    local elem = wxweb.wxDOMElement(slots:Item(i))
                    tryLuaScriptTag(doc,elem)
                end
            end

            -- execute the scripts in the scripts tags
            local slots = doc:GetElementsByTagName("SCRIPT")
            
            -- iterate onthe slots, and execute the scripts in this environment:
            if slots:IsOk() then
                for i=0,slots:GetLength()-1 do
                    local elem = wxweb.wxDOMElement(slots:Item(i))
                    tryScriptTag(doc,elem)
                end
            end
            
            -- register the event handlers:
            local slots = doc:GetElementsByTagName("LUA_HANDLER")
            
            -- iterate onthe slots, and execute the scripts in this environment:
            if slots:IsOk() then
                for i=0,slots:GetLength()-1 do
                    local elem = wxweb.wxDOMElement(slots:Item(i))
                    tryConnectHandler(doc,elem)
                end
            end


            if options.handler then
                options.handler(intf,event);
            end
            
            wx.wxLogMessage("Done loading DOM.");
        end
        
        --if options.handler then
        --    self:connectHandler(wxctrl,options.eventType or wxweb.wxEVT_WEB_DOMEVENT,options.handler)
        --end
        self:connectHandler(ctrl,wxweb.wxEVT_WEB_DOMCONTENTLOADED,onDOMLoaded)
        
        self:addControl(ctrl,options)
        return ctrl
    end
    

 
    function interface:addSTCCtrl(options)
        local ctrl = wxstc.wxStyledTextCtrl(self:getCurrentParent(),wx.wxID_ANY,wx.wxDefaultPosition, wx.wxDefaultSize, options.style or 0);
        return self:addControl(ctrl,options)
    end
    
    function interface:addBitmapButton(options)
        assert(options and options.src,"A valid 'src' entry is needed to build a wxBitmapButton.")
        -- prepare the bitmap first:
        local butSize = options.size or self.butSize;
        --local img = wx.wxImage(giCommon.Engine.getRootDir().."data/icons/"..options.src..".png",wx.wxBITMAP_TYPE_PNG);
        --img:Rescale(butSize,butSize,wx.wxIMAGE_QUALITY_HIGH);
        local img = guitools.getImage(options.src,butSize)
        
        if self.isToolbar then
            --assert(options and options.caption,"A valid 'caption' entry is needed to build a wxBitmapButton in a toolbar.")
            --assert(options and options.name,"A valid name' entry is needed to build a wxBitmapButton in a toolbar.")
            
            -- if this is a toolbar then register a regular tool button instead of a bitmapbutton:
            local id = giDisplay.ViewManager.getNewID() 
            if options.name then
                self.tool_ids[options.name] = id
            end
            local bmp = wx.wxBitmap(img,-1);
            local tool = self.toolbar:AddTool(id, options.caption or "", bmp, options.tip or options.caption or "",options.kind or wx.wxITEM_NORMAL);
            if options.handler then
                self:connectHandler(self.toolbar,options.eventType or wx.wxEVT_COMMAND_MENU_SELECTED,options.handler,id,options.name or options.src)
            end
            return tool, true -- return true to notify that this is a tool object and not a regular control.
        else
            local ctrl = wx.wxBitmapButton(self:getCurrentParent(),options.id or wx.wxID_ANY,wx.wxBitmap(img),wx.wxDefaultPosition,wx.wxSize(butSize+8,butSize+8),options.style or wx.wxBU_AUTODRAW);
            --ctrl:SetMinSize(wx.wxSize(butSize+8,butSize+8))
            
            if options.handler then
                self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_BUTTON_CLICKED,options.handler,nil,options.name)
            end
            -- this refs ticket #316: force a default tip value if non is available:
            options.tip = options.tip or options.caption or options.name or options.src
            return self:addControl(ctrl,options)
        end        
    end    
end
