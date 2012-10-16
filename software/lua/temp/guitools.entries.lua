module("guitools.entries",package.seeall)

function loadEntries(interface)
    function interface:addListEntry(options)
        assert(options and options.name,"A valid 'name' is needed to build a list entry.");
        assert(options and options.caption,"A valid 'caption' is needed to build a list entry.");
        
        local entry = options;
        local ctrls = {} -- prepare a table to hold the specific controls.
        entry.type="vector"
        entry.key = options.key or "name"
        --entry.statusKey = options.statusKey or "enabled"
        entry.defaultValue = entry.defaultValue or giScript.AnyVector()
        entry.controls = ctrls;
        self:addEntry(entry)
        
        local actions = options.actions or {}
        
        -- prepare the handlers we will need here:
        function refreshList()
            local list = entry.controls[2];
            local val = entry:getValue(); -- val is a vector
            --local body = entry.provider:getCurrentItem()
            --wx.wxLogMessage("The current body is "..body.name)
            --wx.wxLogMessage("body contains "..#(body.layers).." layers.")
            list:Clear();
            
            local arr = wx.wxArrayString();
            --wx.wxLogMessage("Refreshing check list with ".. #val.." items")
            
            for i=0,#val-1 do
                arr:Add(val[i][entry.key]);
            end
            
            -- add the values:
            list:Append(arr);
        end
        
        entry.refreshList = refreshList;
        
        function butHandler(intf,event,actionName)
            local val = entry:getValue()
            local list = entry.controls[2];
            
            local num,sels = list:GetSelections()
            
            local data = {
                ids=sels,
                value=val,
                item=entry.provider:getCurrentItem(),
                name=entry.name,
                entry=entry,
                action=actionName,
                intf=self
            }
            
            if num > 0 then
                data.id = sels[1];
            end
            
            if entry.actionHandler then
                entry.actionHandler(data) 
            end       
        end
        
        function myAddHandler(intf,event)            
            -- this handler will be called when the used click on the add button to add a new item in the list:
            -- in that case call the provider addHandler
            local val = entry:getValue()
            
            local data = {
                value=val,
                item=entry.provider:getCurrentItem(),
                name=entry.name,
                entry=entry,
                intf=self
            }
            
            if entry.addHandler(data) then
                -- the add event was properly handled, so now update the item list and there status:
                entry.refreshCheckList()
            end            
        end

        function myRemoveHandler(intf,event)            
            -- this handler will be called when the used click on the add button to add a new item in the list:
            -- in that case call the provider addHandler
            local val = entry:getValue()
            local list = entry.controls[2];
            
            local num,sels = list:GetSelections()
            if num <= 0 then
                wx.wxLogWarning("Invalid selection in "..entry.name.." list box");
                return -- no item selected.
            end
            
            local selId = sels[1];
            
            -- if the selection is invalid, just cancel:
            if selId == -1 then
                wx.wxLogWarning("Invalid selection in "..entry.name.." check list box");
                return;
            end
            
            local data = {
                id=selId, -- here we provide an additional id field to specify the item to be removed.
                items=sels,
                value=val,
                item=entry.provider:getCurrentItem(),
                name=entry.name,
                entry=entry,
                intf=self
            }
            
            if entry.removeHandler(data) then
                -- the remove event was properly handled, so now update the item list and there status:
                --wx.wxLogMessage("Calling refresh after remove handler.");
                entry.refreshCheckList()
            end            
        end
        
        function myActivateHandler(intf,event)            
            -- this handler will be called when the used click on the add button to add a new item in the list:
            -- in that case call the provider addHandler
            local val = entry:getValue()
            local list = entry.controls[2];
            
            local num,sels = list:GetSelections()
            
            -- if the selection is invalid, just cancel:
            if num <= 0 then
                wx.wxLogWarning("Invalid selection in "..entry.name.." check list box");
                return;
            end
            
            local data = {
                id=sels[1], -- here we provide an additional id field to specify the item to be removed.
                ids=sels,
                value=val,
                item=entry.provider:getCurrentItem(),
                name=entry.name,
                entry=entry,
                intf=self
            }
            
            if entry.activateHandler then
                entry.activateHandler(data)
            end            
        end
        
        function mySelectionHandler(intf,event)            
            -- this handler will be called when the used click on the add button to add a new item in the list:
            -- in that case call the provider addHandler
            local val = entry:getValue()
            local list = entry.controls[2];
            
            local num,sels = list:GetSelections()
            
            -- if the selection is invalid, just cancel:
            --if num <= 0 then
            --    wx.wxLogWarning("Invalid selection in "..entry.name.." check list box");
            --    return;
            --end
            
            local data = {
                --id=sels[1], -- here we provide an additional id field to specify the item to be removed.
                ids=sels,
                value=val,
                item=entry.provider:getCurrentItem(),
                name=entry.name,
                entry=entry,
                intf=self
            }
            
            if num > 0 then
                data.id=sels[1]
            end
            
            if entry.selectionHandler then
                entry.selectionHandler(data)
            end            
        end
        
        self:pushSizer{orient=wx.wxVERTICAL,prop=1,flags=wx.wxEXPAND}
            ctrls[1] = self:addStaticText{text=options.caption..": "};
            ctrls[2] = self:addListBox{prop=1,handler=myActivateHandler,style=options.style,flags=options.flags}
            if entry.selectionHandler then
                self:connectHandler(ctrls[2],wx.wxEVT_COMMAND_LISTBOX_SELECTED,mySelectionHandler);
            end            
            self:pushSizer{orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxEXPAND}
                self:addSpacer{prop=1};
                if options.removeHandler then
                ctrls[3] = self:addBitmapButton{src="remove",handler=myRemoveHandler}
                end
                if options.addHandler then
                ctrls[4] = self:addBitmapButton{src="add",handler=myAddHandler}
                end
                -- the bitmap buttons for the available actions:
                if entry.actionHandler then
                    for k,act in ipairs(actions) do
                        ctrls[k+4] = self:addBitmapButton{name=act.name, src=act.src or act.name,size=options.size,handler=butHandler,flags=wx.wxALIGN_CENTER_VERTICAL};
                    end
                end
            self:popSizer()         
        self:popSizer()  
        
        return ctrls[2];
    end
    
    function interface:addDummyEntry(options)        
        local entry = options;
        local ctrls = {} -- prepare a table to hold the specific controls.
        entry.type="dummy"
        entry.controls = ctrls;
        entry.defaultValue = entry.defaultValue -- use the minimum value by default 
        self:addEntry(entry)      
        
        -- add an handler called when updating the selector:
        local onUpdate = function()
            entry:handle(entry.provider:getCurrentItem());
        end
        
        self:addCustomUpdate("entries",onUpdate);
    end
    
    function interface:addDatetimeEntry(options)
        assert(options and options.caption,"A valid 'caption' is needed to build a Datetime entry.");
        assert(options and options.name,"A valid 'name' is needed to build a Datetme entry.");
        
        local entry = options;
        local ctrls = {} -- prepare a table to hold the specific controls.
        entry.type="datetime"
        entry.controls = ctrls;
        if not entry.defaultValue then
            -- retrieve the current date as default value:
            local val = giScript.AnyMap()
            local dt = wx.wxDateTime();
            dt:SetToCurrent()
            local str = dt:FormatISODate()
            val:set("year",str:sub(1,4)+0);
            val:set("month",str:sub(6,7)+0);
            val:set("day",str:sub(9,10)+0);
            str = dt:FormatISOTime()
            val:set("hour",str:sub(1,2)+0)
            val:set("min",str:sub(4,5)+0)
            val:set("sec",str:sub(7,8)+0)
            entry.defaultValue = val;
        elseif type(entry.defaultValue) == "table" then
            -- convert the table to an AnyMap:
            local val = giScript.AnyMap()
            val:set("year",entry.defaultValue.year or 1970)
            val:set("month",entry.defaultValue.month or 1)
            val:set("day",entry.defaultValue.day or 1);
            val:set("hour",entry.defaultValue.hour or 0)
            val:set("min",entry.defaultValue.min or 0)
            val:set("sec",entry.defaultValue.sec or 0);
            entry.defaultValue = val;
        end
        self:addEntry(entry)

        function dateHandler(intf,event)
            local date = event:GetDate() --entry.controls[2]:GetValue();
            
            -- convert the wxDateTime to an AnyMap.
            local val = entry:getValue() or giScript.AnyMap() -- retrieve the existing map if possible to avoid overriding the time.
            local str = date:FormatISODate()
            val:set("year",str:sub(1,4)+0);
            val:set("month",str:sub(6,7)+0);
            val:set("day",str:sub(9,10)+0);
            --[[str = dt:FormatISOTime()
            val:set("hour",str:sub(1,2)+0)
            val:set("min",str:sub(4,5)+0)
            val:set("sec",str:sub(7,8)+0)
            ]]
            
            -- update the new value sending this to the provider:
            entry:setValue(val);
        end
        
        function timeHandler(intf,event)
            local str = event:GetString() 
            
            -- convert the wxDateTime to an AnyMap.
            local val = entry:getValue() or giScript.AnyMap()
            val:set("hour",str:sub(1,2)+0)
            val:set("min",str:sub(4,5)+0)
            val:set("sec",str:sub(7,8)+0)
            
            -- update the new value sending this to the provider:
            entry:setValue(val);
        end
    
        self:pushSizer{orient=wx.wxHORIZONTAL,prop=options.prop or 0,flags=wx.wxEXPAND}
        ctrls[1] = self:addStaticText{text=options.caption..": "};
        ctrls[2] = self:addDatePickerCtrl{prop=1,handler=dateHandler}
        if not options.notime then
            ctrls[3] = self:addStaticText{text=(options.timeCaption or " Time")..": "};
            ctrls[4] = self:addTimeCtrl{prop=1,handler=timeHandler}
            entry.class[ctrls[4]] = "TimeCtrl"
        end
        
        self:popSizer() 
    end
    
    function interface:addNodePathTreeEntry(options)
        assert(options and options.caption,"A valid 'caption' is needed to build a Color entry.");
        assert(options and options.name,"A valid 'name' is needed to build a Color entry.");
        
        local entry = options;
        local ctrls = {} -- prepare a table to hold the specific controls.
        entry.type="nodepath"
        entry.controls = ctrls;
--[=[  
        if not entry.defaultValue then
            local val = giScript.AnyMap()
            val:set("scene","");
            val:set("nodepath",giScene.ObsNodePath());
            entry.defaultValue = val;
        end
        ]=]
        self:addEntry(entry)

        function sceneHandler(intf,event)
            local sceneName = event:GetString();
            
            -- update the current value of the nodepath scene with the new scene name:
            local val = entry:getValue() or giScript.AnyMap();
            val = ((not val or val==0) and giScript.AnyMap()) or val;
            
            local oldname = val:get("scene","")
            val:set("nodepath",giScene.ObsNodePath());
            
            --if oldname ~= sceneName then
                val:set("scene",sceneName);
                local proj = intf.project;
                local scene = proj:getScene(val.scene)

                ctrls[4]:setRoot(scene:getRoot(),proj)
                
                -- Set the scene root on the nodepathtree 
                -- update the new value sending this to the provider:
                entry:setValue(val);
                wx.wxLogMessage("Scene refreshed.");
            --end
        end
        
        function pathHandler(intf,event)
            local path = event:GetString();
            
            local val = entry:getValue() or giScript.AnyMap();
            val = ((not val or val==0) and giScript.AnyMap()) or val;
            
            -- retrieve the scene in the project:
            local proj = intf.project;
            local scene = proj:getScene(val.scene)
            
            val:set("nodepath",giScene.ObsNodePath(ctrls[4]:getNodePath()));
            
            -- update the new value sending this to the provider:
            entry:setValue(val);
            
            wx.wxLogMessage("Nodepath updated.");
        end

        if self.isToolbar then
                ctrls[1] = self:addStaticText{text=options.caption..": "};        
        else        
            self:pushSizer{orient=wx.wxHORIZONTAL,prop=options.prop or 0,flags=wx.wxEXPAND} -- ensure everything is in a vertical sizer.
                ctrls[1] = self:addStaticText{text=options.caption..": "};
                ctrls[4] = self:addNodePathTreeCtrl{prop=1,handler=pathHandler};
                ctrls[3] = self:addStaticText{text="in scene: "};
                ctrls[2] = self:addComboBox{handler=sceneHandler}
                entry.class[ctrls[4]] = "NodePathTreeCtrl";
            self:popSizer() -- end of vertical sizer.
        end
        -- Add custom refreshProject method for the scene list:
        
        function updateSceneList()
            --wx.wxLogMessage("I'm in updateSceneList()")
            -- clear the scene list:
            local cb = ctrls[2]
            local ncb = ctrls[4]
            
            cb:Clear()
            ncb:setRoot(nil,nil)
            
            -- retrieve the scenes available in the current project:
            local proj = self.project
            if not proj then
                return;
            end
            
            
            local num = proj:getNumScenes()
            for i=0,num-1 do
                cb:Append(proj:getSceneById(i):getName())
                --wx.wxLogMessage("Appended scene: "..proj:getSceneById(i):getName())
            end
            --wx.wxLogMessage("Found "..num.." scenes in project "..proj:getName())
            
            
            local val = entry:getValue()
            val = ((not val or val==0) and giScript.AnyMap()) or val;

            local curScene = val:get("scene","")

            if num ~= 0 then
                cb:SetSelection(0)
                if curScene == "" then
                    val:set("scene",proj:getSceneById(0):getName())
                end
                local root = proj:getSceneById(0):getRoot()
                ncb:setRoot(root,proj)
                --wx.wxLogMessage("NodepathTreeEntry refreshed.");
            end
            
            if curScene == "" then
                val:set("nodepath",giScene.ObsNodePath());
         
                entry:setValue(val);
            end
            
            --wx.wxLogMessage("I'm out of updateSceneList()")
        end
        
        self:addCustomUpdate("pre-entries",updateSceneList)
    end
    
    function interface:addTreeEntry(options)
        assert(options and (options.treetype or options.itemProvider),"A valid 'treetype' or 'itemProvider' is needed to build a Tree entry.");
        assert(options and options.name,"A valid 'name' is needed to build a tree entry.");
        
        local entry = options;
        options.dragHint = options.dragHint or "default";
        
        local ctrls = {} -- prepare a table to hold the specific controls.
        entry.type="tree"
        entry.controls = ctrls;
        entry.defaultValue = entry.defaultValue or giScript.AnyMap()
        self:addEntry(entry)
        
        self:pushSizer{orient=wx.wxVERTICAL,prop=options.prop or 1,flags=wx.wxEXPAND}
        if options.caption then
            ctrls[1] = self:addStaticText{text=options.caption};
        end
        -- we use the entry provider to retrieve the current object

        -- prepare an activation handler if needed:
        local myActivateHandler = nil
        if options.activateHandler then
            myActivateHandler = function(treedata)
                -- the treedata parameter will hold data retrieved from the wxTreeCtrl control, the available fields are:
                -- treedata.tree : the tree table itself.
                -- treeadata.item: the tree item to be activated.
                
                -- prepare the value field:
                local itemdata = wx2intro(treedata.tree.ctrl:GetItemData(treedata.treeItem));
                local val = itemdata:getData();
                local valHint = itemdata:getHint();
                
                -- prepare another data table to pass to the reall handler:
                local data = {
                    value=val,
                    valueHint=valHint,
                    tree = treedata.tree,
                    treeitem = treedata.treeItem,
                    item=entry.provider:getCurrentItem(),
                    name=entry.name,
                    entry=entry,
                    intf=interface}
                
                options.activateHandler(data);
            end
        end
        
        local myContextHandler = nil
        local myMenuHandler = nil;
        
        if options.contextHandler and options.menuHandler then
            wx.wxLogVerbose("Setting up context handler in guitools.entries.interface:addTreeEntry for entry ".. options.name .. "...")
            myContextHandler = function(treedata)
                -- the treedata parameter will hold data retrieved from the wxTreeCtrl control, the available fields are:
                -- treedata.tree : the tree table itself.
                -- treeadata.item: the tree item on which the right click happened.
                -- treedata.action: the action to perform
                -- treedata.eventId: the numerical ID for the action (normally not used)
            
                -- prepare the value field:
                local val = nil
                local valHint = nil
                
                if treedata.treeItem and treedata.treeItem:IsOk() then
                    local itemdata = wx2intro(treedata.tree.ctrl:GetItemData(treedata.treeItem));
                    val = itemdata:getData();
                    valHint = itemdata:getHint();
                end
                
                -- prepare another data table to pass to the reall handler:
                local data = {
                    value=val,
                    valueHint=valHint,
                    tree = treedata.tree,
                    treeitem = treedata.treeItem,
                    treeitems = treedata.treeItems,
                    action= treedata.action,
                    item=entry.provider:getCurrentItem(),
                    name=entry.name,
                    entry=entry,
                    intf=interface}
                
                options.contextHandler(data);
            end
            
            myMenuHandler = function(treedata)
                -- the treedata parameter will hold data retrieved from the wxTreeCtrl control, the available fields are:
                -- treedata.tree : the tree table itself.
                -- treeadata.item: the tree item on which the right click happened.
            
                -- prepare the value field:
                local val = nil
                local valHint = nil;
                if treedata.treeItem and treedata.treeItem:IsOk() then
                    local itemdata = wx2intro(treedata.tree.ctrl:GetItemData(treedata.treeItem));
                    val = itemdata:getData();
                    valHint = itemdata:getHint();
                end
                
                -- prepare another data table to pass to the reall handler:
                local data = {
                    value=val,
                    valueHint=valHint,
                    tree = treedata.tree,
                    treeitem = treedata.treeItem,
                    item=entry.provider:getCurrentItem(),
                    name=entry.name,
                    entry=entry,
                    intf=interface}
                
                return options.menuHandler(data);
            end
            
        end
        
        entry.itemProvider = entry.itemProvider or self:createTreeItemProvider{type=options.treetype,getRootFunc=options.getRootFunc,rootName=options.rootName}
        if options.dragHint == "default" then
            options.dragHint = entry.itemProvider:getDragHint()
        end
        
        local ctrl,tree = self:addTreeCtrl{itemProvider=entry.itemProvider,prop=1,activateHandler=myActivateHandler,minsize=options.minsize,
            dragHint=options.dragHint,contextHandler=myContextHandler,menuHandler=myMenuHandler,style=options.style}
        ctrls[2] = ctrl;
        entry.tree = tree;
        self:popSizer()
        
        return ctrl;
    end   
    
    function interface:addStateComboBoxEntry(options)
        assert(options and options.states,"A valid 'states' entry is needed to build a State Combobox entry.");
        assert(options and options.caption,"A valid 'caption' is needed to build a State Combobox entry.");
        assert(options and options.name,"A valid 'name' is needed to build a State Combobox entry.");
        
        -- auto complete default id values from captions:
        for k,v in pairs(options.states) do
            v.id = v.id or v.caption
        end
        
        local entry = options;
        local ctrls = {} -- prepare a table to hold the specific controls.
        entry.type="statecb"
        entry.controls = ctrls;
        entry.defaultValue = entry.defaultValue or (entry.states and #entry.states>0 and entry.states[1].id) or ""
        self:addEntry(entry)
        
        local actions = options.actions or {}
        
        -- prepare the handlers we will need here:
        function cbHandler(intf,event)            
            local valstr = event:GetString();

            local val = nil;
            for k,v in ipairs(entry.states) do
                if valstr == v.caption then
                    val = v.id
                end
            end
            
            -- update the new value sending this to the provider:
            entry:setValue(val);
        end
        
        function butHandler(intf,event,actionName)
            --local actionName = event:GetEventObject():DynamicCast("wxWindow"):GetName();
            
            -- prepare the data for the real event handler:
            local list = entry.controls[2];
            
            local valstr = list:GetStringSelection()
            local val = nil;
            for k,v in ipairs(entry.states) do
                if valstr == v.caption then
                    val = v.id
                end
            end
            
            local selId = list:GetSelection()            
            
            local data = {
                id=selId, -- here we provide an additional id field to specify the item to be removed.
                value=val,
                valueCaption=valstr,
                item=entry.provider:getCurrentItem(),
                name=entry.name,
                entry=entry,
                action=actionName,
                intf=self
            }
            
            if entry.actionHandler then
                entry.actionHandler(data) 
            end       
        end
        
        -- prepare the choice list:
        local list = {}
        for k,v in ipairs(options.states) do
            table.insert(list,v.caption)
        end


        self:pushSizer{orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxEXPAND}
        ctrls[1] = self:addStaticText{text=options.caption..": "};
        ctrls[2] = self:addComboBox{prop=1,handler=cbHandler,choices=list,style=options.style,eventType=wx.wxEVT_COMMAND_TEXT_UPDATED}
        
        -- the bitmap buttons for the available actions:
        if entry.actionHandler then
            for k,act in ipairs(actions) do
                ctrls[k+2] = self:addBitmapButton{name=act.name, src=act.src or act.name,size=options.size,handler=butHandler,flags=wx.wxALIGN_CENTER_VERTICAL};
            end
        end
        
        self:popSizer() 
        
        return ctrls[2];        
    end        
    
    function interface:addVec3Entry(options)
        if self.theme == "Compact" then
            --wx.wxLogMessage("Building compact double entry...")
            return guitools.compact.entries.addVec3Entry(self,options);
        end
        
        assert(options and options.caption,"A valid 'caption' is needed to build a Vec3 entry.");
        assert(options and options.name,"A valid 'name' is needed to build a Vec3 entry.");
        
        local entry = options;
        local ctrls = {} -- prepare a table to hold the specific controls.
        entry.range = entry.range or {0.0,1.0}
        entry.type="vec3d"
        entry.numFormat = entry.numFormat or "%.6f" 
        entry.controls = ctrls;
        entry.range = entry.range or {0.0,1.0}
        if #entry.range == 2 then
            entry.range = {{entry.range[1],entry.range[2]},{entry.range[1],entry.range[2]},{entry.range[1],entry.range[2]}}
        end
        entry.defaultValue = entry.defaultValue or osg.Vec3d(entry.range[1][1],entry.range[2][1],entry.range[3][1]) -- use the minimum value by default 
        self:addEntry(entry)
        
        entry.offset = 3
        entry.comps = 3;
        
        -- prepare the handlers we will need here:
        function sliderHandler(intf,event)            
            local pos = event:GetPosition()/10000.0;
            local id = event:GetId() -- the event ID will be used to get the proper direction X,Y or Z.
            
            -- convert the value to the corresponding range:
            local range = entry.range[id+1];
            local val = range[1] + (range[2]-range[1])*pos;
           
            -- update the text ctrl value:
            entry.controls[id*entry.comps+3]:SetValue(string.format(entry.numFormat,val));
            
            local vec = entry:getValue()
            if id==0 then
                vec = osg.Vec3d(val,vec[1],vec[2])
            elseif id == 1 then
                vec = osg.Vec3d(vec[0],val,vec[2])
            else
                vec = osg.Vec3d(vec[0],vec[1],val)
            end
            
            -- update the new value sending this to the provider:
            entry:setValue(vec);
        end

        function textHandler(intf,event)            
            local id = event:GetId() -- the event ID will be used to get the proper direction X,Y or Z.
        
            local val = tonumber(event:GetString());
            if not val then
                wx.wxLogError("Invalid value in "..name.." text ctrl");
                return;
            end
                
            -- update the slider position:
            local range = entry.range[id+1];
            entry.controls[id*entry.comps+2]:SetValue((val-range[1])/(range[2]-range[1])*10000)
            
            local vec = entry:getValue()
            if id==0 then
                vec = osg.Vec3d(val,vec[1],vec[2])
            elseif id == 1 then
                vec = osg.Vec3d(vec[0],val,vec[2])
            else
                vec = osg.Vec3d(vec[0],vec[1],val)
            end
            
            -- update the new value sending this to the provider:
            entry:setValue(vec);
        end
        
        function labelHandler(intf,event)
            if(entry.pressedLabel) then
                local id = event:GetId() -- the event ID will be used to get the proper direction X,Y or Z.
                local range = entry.range[id+1]
               
                local delta = (event:GetX() - entry.posX)/10.0;
                entry.posX = event:GetX()
                delta = delta * 0.00001;
                
                
                
                -- check if the value should be of integer type:
                --[=[
                local desc = getParamDesc(interface,name)
                if desc and desc.valType == "int" then
                    -- convert the value to int:
                    delta = 1.0;
                end 
                ]=]
                
                if event:ControlDown() then
                    delta = delta*10;
                end
                if event:ShiftDown() then
                    delta = delta*10;
                end
                if event:AltDown() then
                    delta = delta*10;
                end
                
                local val = tonumber(entry.controls[id*entry.comps+3]:GetValue())
                if not val then
                    wx.wxLogError("Invalid number for ".. entry.name.." text ctrl.");
                    return;
                end

                val = val + delta;

                -- update the slider and the text ctrl:
                entry.controls[id*entry.comps+3]:SetValue(""..val)
                entry.controls[id*entry.comps+2]:SetValue((val-range[1])/(range[2]-range[1])*10000)

                local vec = entry:getValue()
                if id==0 then
                    vec = osg.Vec3d(val,vec[1],vec[2])
                elseif id == 1 then
                    vec = osg.Vec3d(vec[0],val,vec[2])
                else
                    vec = osg.Vec3d(vec[0],vec[1],val)
                end
                
                -- update the new value sending this to the provider:
                entry:setValue(vec);
            end
        end
        
        self:pushSizer{orient=wx.wxVERTICAL,text=options.caption,flags=wx.wxALL+wx.wxEXPAND} -- begin sizer
            for k,v in ipairs(options.subcaptions or {"X","Y","Z"}) do
                self:pushSizer{orient=wx.wxHORIZONTAL,prop=options.prop or 0,flags=wx.wxEXPAND}
                ctrls[(k-1)*entry.comps+1] = self:addStaticText{text=v..": ",tip=options.tip,id=k-1};
                ctrls[(k-1)*entry.comps+2] = self:addSlider{prop=1,handler=sliderHandler,eventType=wx.wxEVT_SCROLL_THUMBTRACK,id=k-1}
                ctrls[(k-1)*entry.comps+3] = self:addTextCtrl{handler=textHandler,id=k-1}
                if options.unit then
                    ctrls[4] = self:addStaticText{text=options.unit}
                end
                self:popSizer()    
       
               if not options.noLabelHandler then
                    -- Provider an handling system for the label drag support:    
                    local txt = ctrls[(k-1)*entry.comps+1]
                    txt:SetCursor(wx.wxCursor(wx.wxCURSOR_HAND));
                    txt:Connect(wx.wxID_ANY,wx.wxEVT_MOUSE_CAPTURE_LOST,function(event)
                        event:GetEventObject():DynamicCast("wxWindow"):ReleaseMouse();
                        entry.pressedLabel = nil;
                    end)
                    txt:Connect(wx.wxID_ANY,wx.wxEVT_LEFT_DOWN,function(event)
                        entry.pressedLabel = true;
                        entry.posX = event:GetX();
                        entry.posY = event:GetY();
                        event:GetEventObject():DynamicCast("wxWindow"):CaptureMouse();
                    end);
                    txt:Connect(wx.wxID_ANY,wx.wxEVT_LEFT_UP, function(event)
                        entry.pressedLabel = nil;
                        event:GetEventObject():DynamicCast("wxWindow"):ReleaseMouse();
                    end);
                    self:connectHandler(txt,wx.wxEVT_MOTION,labelHandler)
                end
                
            end
        self:popSizer() -- end sizer
    end    
    
    function interface:addFontEntry(options)
        assert(options and options.caption,"A valid 'caption' is needed to build a Font entry.");
        assert(options and options.name,"A valid 'name' is needed to build a Font entry.");
        
        local entry = options;
        local ctrls = {} -- prepare a table to hold the specific controls.
        entry.type="font"
        entry.controls = ctrls;
        entry.defaultValue = entry.defaultValue or general.tools.fontToMap(wx.wxFont( 12, wx.wxFONTFAMILY_DEFAULT, wx.wxFONTSTYLE_NORMAL, wx.wxFONTWEIGHT_NORMAL))
        self:addEntry(entry)
        
        -- prepare the handlers we will need here:
        function pickerHandler(intf,event)            
            local val = event:GetFont();
                            
            -- update the new value sending this to the provider:
            entry:setValue(general.tools.fontToMap(val));
        end
        
        self:pushSizer{orient=wx.wxHORIZONTAL,prop=options.prop or 0,flags=wx.wxEXPAND}
        ctrls[1] = self:addStaticText{text=options.caption..": "};
        ctrls[2] = self:addFontPickerCtrl{prop=1,handler=pickerHandler}
        self:popSizer()
    end    
    
    function interface:addColorEntry(options)
        if self.theme == "Compact" then
            --wx.wxLogMessage("Building compact double entry...")
            return guitools.compact.entries.addColorEntry(self,options);
        end
        
        assert(options and options.caption,"A valid 'caption' is needed to build a Color entry.");
        assert(options and options.name,"A valid 'name' is needed to build a Color entry.");
        
        local entry = options;
        local ctrls = {} -- prepare a table to hold the specific controls.
        entry.range = entry.range or {0.0,1.0}
        entry.type="color"
        entry.numFormat = entry.numFormat or "%.6f" 
        entry.controls = ctrls;
        entry.defaultValue = entry.defaultValue or osg.Vec4f(0.0,1.0,0.0,1.0) -- use the green opaque by default 
        self:addEntry(entry)
        
        -- prepare the handlers we will need here:
        function sliderHandler(intf,event)            
            local pos = event:GetPosition()/10000.0;
            
            -- convert the value to the corresponding range:
            local range = entry.range;
            local val = range[1] + (range[2]-range[1])*pos;
           
            -- update the text ctrl value:
            entry.controls[5]:SetValue(string.format(entry.numFormat,val));
            
            -- update the new value sending this to the provider:
            -- this is only the alpha part of the color
            local col = entry:getValue()
            col:set(col:x(),col:y(),col:z(),val);
            entry:setValue(col);
        end

        function textHandler(intf,event)            
            local val = tonumber(event:GetString());
            if not val then
                wx.wxLogError("Invalid value in "..name.." text ctrl");
                return;
            end
                
            -- update the slider position:
            local range = entry.range;
            entry.controls[4]:SetValue((val-range[1])/(range[2]-range[1])*10000)
            
            -- update the new value sending this to the provider:
            -- this is only the alpha part of the color
            local col = entry:getValue()
            col:set(col:x(),col:y(),col:z(),val);
            entry:setValue(col);
        end

        function colorHandler(intf,event)
            local val = entry.controls[2]:GetColour();
            
            -- update the new value sending this to the provider:
            -- this is only the RGB part of the color
            local col = entry:getValue()
            col:set(val:Red()/255.0,val:Green()/255.0,val:Blue()/255.0,col:w());
            entry:setValue(col);
        end

        self:pushSizer{orient=wx.wxVERTICAL,prop=options.prop or 0,flags=wx.wxEXPAND} -- ensure everything is in a vertical sizer.
            self:pushSizer{orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxEXPAND}
            ctrls[1] = self:addStaticText{text=options.caption..": ",tip=options.tip};
            ctrls[2] = self:addColorCtrl{prop=1,handler=colorHandler,size=options.size,style=options.style};
            self:popSizer()
            if not options.noalpha then
                self:pushSizer{orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxEXPAND}
                ctrls[3] = self:addStaticText{text=(options.alphaCaption or (options.caption.." alpha"))..": "};
                ctrls[4] = self:addSlider{prop=1,handler=sliderHandler,eventType=wx.wxEVT_SCROLL_THUMBTRACK}
                ctrls[5] = self:addTextCtrl{handler=textHandler}
                --ctrls[6] = self:addStaticText{text=options.unit or ""}
                self:popSizer()      
            end
        self:popSizer() -- end of vertical sizer.
    end   
    
    function interface:addDoubleEntry(options)
        if self.theme == "Compact" then
            --wx.wxLogMessage("Building compact double entry...")
            return guitools.compact.entries.addDoubleEntry(self,options);
        end
        
        assert(options and options.caption,"A valid 'caption' is needed to build a Double entry.");
        assert(options and options.name,"A valid 'name' is needed to build a Double entry.");
        
        local entry = options;
        local ctrls = {} -- prepare a table to hold the specific controls.
        entry.range = entry.range or {0.0,1.0}
        entry.type="double"
        entry.numFormat = entry.numFormat or "%.6f" 
        entry.controls = ctrls;
        entry.defaultValue = entry.defaultValue or entry.range[1] -- use the minimum value by default 
        self:addEntry(entry)
        
        -- prepare the handlers we will need here:
        function sliderHandler(intf,event)            
            local pos = event:GetPosition()/10000.0;
            
            -- convert the value to the corresponding range:
            local range = entry.range;
            local val = range[1] + (range[2]-range[1])*pos;
           
            -- update the text ctrl value:
            entry.controls[3]:SetValue(string.format(entry.numFormat,val));
            
            -- update the new value sending this to the provider:
            entry:setValue(val);
        end

        function textHandler(intf,event)            
            local val = tonumber(event:GetString());
            if not val then
                wx.wxLogError("Invalid value in "..name.." text ctrl");
                return;
            end
                
            -- update the slider position:
            local range = entry.range;
            entry.controls[2]:SetValue((val-range[1])/(range[2]-range[1])*10000)
            
            -- update the new value sending this to the provider:
            entry:setValue(val);
        end
        
        function labelHandler(intf,event)
            if(entry.pressedLabel) then
                local range = entry.range
               
                local delta = (event:GetX() - entry.posX)/10.0;
                entry.posX = event:GetX()
                delta = delta * 0.00001;
                
                -- check if the value should be of integer type:
                --[=[
                local desc = getParamDesc(interface,name)
                if desc and desc.valType == "int" then
                    -- convert the value to int:
                    delta = 1.0;
                end 
                ]=]
                
                if event:ControlDown() then
                    delta = delta*10;
                end
                if event:ShiftDown() then
                    delta = delta*10;
                end
                if event:AltDown() then
                    delta = delta*10;
                end
                
                local val = tonumber(entry.controls[3]:GetValue())
                if not val then
                    wx.wxLogError("Invalid number for ".. entry.name.." text ctrl.");
                    return;
                end

                val = val + delta;

                -- update the slider and the text ctrl:
                entry.controls[3]:SetValue(""..val)
                entry.controls[2]:SetValue((val-range[1])/(range[2]-range[1])*10000)

                -- send the command:
                entry:setValue(val);
            end
        end
        
        self:pushSizer{orient=wx.wxHORIZONTAL,prop=options.prop or 0,flags=wx.wxEXPAND}
        ctrls[1] = self:addStaticText{text=options.caption..": ",tip=options.tip};
        ctrls[2] = self:addSlider{prop=1,handler=sliderHandler,eventType=wx.wxEVT_SCROLL_THUMBTRACK}
        ctrls[3] = self:addTextCtrl{handler=textHandler,text=string.format(entry.numFormat,entry.defaultValue)}
        if options.unit then
            ctrls[4] = self:addStaticText{text=options.unit}
        end
        self:popSizer()    
        
        if not options.noLabelHandler then
            -- Provider an handling system for the label drag support:    
            local txt = ctrls[1]
            txt:SetCursor(wx.wxCursor(wx.wxCURSOR_HAND));
            txt:Connect(wx.wxID_ANY,wx.wxEVT_MOUSE_CAPTURE_LOST,function(event)
                event:GetEventObject():DynamicCast("wxWindow"):ReleaseMouse();
                entry.pressedLabel = nil;
            end)
            txt:Connect(wx.wxID_ANY,wx.wxEVT_LEFT_DOWN,function(event)
                entry.pressedLabel = true;
                entry.posX = event:GetX();
                entry.posY = event:GetY();
                event:GetEventObject():DynamicCast("wxWindow"):CaptureMouse();
            end);
            txt:Connect(wx.wxID_ANY,wx.wxEVT_LEFT_UP, function(event)
                entry.pressedLabel = nil;
                event:GetEventObject():DynamicCast("wxWindow"):ReleaseMouse();
            end);
            self:connectHandler(txt,wx.wxEVT_MOTION,labelHandler)
        end
        
    end

    function interface:addIntegerEntry(options)
        if self.theme == "Compact" then
            --wx.wxLogMessage("Building compact double entry...")
            return guitools.compact.entries.addIntegerEntry(self,options);
        end
        
        assert(options and options.caption,"A valid 'caption' is needed to build a Integer entry.");
        assert(options and options.name,"A valid 'name' is needed to build a Integer entry.");
        
        local entry = options;
        local ctrls = {} -- prepare a table to hold the specific controls.
        entry.range = entry.range or {0.0,100.0}
        entry.type="integer"
        entry.numFormat = entry.numFormat or "%.0f" 
        entry.controls = ctrls;
        entry.defaultValue = entry.defaultValue or entry.range[1] -- use the minimum value by default 
        self:addEntry(entry)
        
        -- prepare the handlers we will need here:
        function sliderHandler(intf,event)            
            local pos = event:GetPosition()/10000.0;
            
            -- convert the value to the corresponding range:
            local range = entry.range;
            local val = range[1] + (range[2]-range[1])*pos;
           
            val = math.floor(val) -- get integer value.
            
            -- update the text ctrl value:
            entry.controls[3]:SetValue(string.format(entry.numFormat,val));
            
            -- update the new value sending this to the provider:
            entry:setValue(val);
        end

        function textHandler(intf,event)            
            local val = tonumber(event:GetInt());
            if not val then
                wx.wxLogError("Invalid value in ".. entry.name.." text ctrl");
                return;
            end
            val = math.floor(val);
            
            -- update the slider position:
            local range = entry.range;
            entry.controls[2]:SetValue((val-range[1])/(range[2]-range[1])*10000)
            
            -- update the new value sending this to the provider:
            entry:setValue(val);
        end
        
        function labelHandler(intf,event)
            if(entry.pressedLabel) then
                local range = entry.range
               
                local delta = (event:GetX() - entry.posX)/10.0;
                entry.posX = event:GetX()
                --delta = delta * 0.1;
                
                -- check if the value should be of integer type:
                --[=[
                local desc = getParamDesc(interface,name)
                if desc and desc.valType == "int" then
                    -- convert the value to int:
                    delta = 1.0;
                end 
                ]=]
                
                if event:ControlDown() then
                    delta = delta*10;
                end
                if event:ShiftDown() then
                    delta = delta*10;
                end
                if event:AltDown() then
                    delta = delta*10;
                end
                
                delta = delta > 0.0 and math.ceil(delta) or math.floor(delta) -- ensure delta is an integer
                
                local val = tonumber(entry.controls[3]:GetValue())
                if not val then
                    wx.wxLogError("Invalid number for ".. entry.name.." text ctrl.");
                    return;
                end

                val = val + delta;

                -- update the slider and the text ctrl:
                entry.controls[3]:SetValue(""..val)
                entry.controls[2]:SetValue((val-range[1])/(range[2]-range[1])*10000)

                -- send the command:
                entry:setValue(val);
            end
        end
        
        self:pushSizer{orient=wx.wxHORIZONTAL,prop=options.prop or 0,flags=wx.wxEXPAND}
        ctrls[1] = self:addStaticText{text=options.caption..": ",tip=options.tip};
        ctrls[2] = self:addSlider{prop=1,handler=sliderHandler,eventType=wx.wxEVT_SCROLL_THUMBTRACK}
        ctrls[3] = self:addSpinCtrl{handler=textHandler,defaultValue=entry.defaultValue,range=entry.range}
        if options.unit then
            ctrls[4] = self:addStaticText{text=options.unit}
        end
        self:popSizer()     
        
        if not options.noLabelHandler then
            -- Provider an handling system for the label drag support:    
            local txt = ctrls[1]
            txt:SetCursor(wx.wxCursor(wx.wxCURSOR_HAND));
            txt:Connect(wx.wxID_ANY,wx.wxEVT_MOUSE_CAPTURE_LOST,function(event)
                event:GetEventObject():DynamicCast("wxWindow"):ReleaseMouse();
                entry.pressedLabel = nil;
            end)
            txt:Connect(wx.wxID_ANY,wx.wxEVT_LEFT_DOWN,function(event)
                entry.pressedLabel = true;
                entry.posX = event:GetX();
                entry.posY = event:GetY();
                event:GetEventObject():DynamicCast("wxWindow"):CaptureMouse();
            end);
            txt:Connect(wx.wxID_ANY,wx.wxEVT_LEFT_UP, function(event)
                entry.pressedLabel = nil;
                event:GetEventObject():DynamicCast("wxWindow"):ReleaseMouse();
            end);
            self:connectHandler(txt,wx.wxEVT_MOTION,labelHandler)
        end
        
    end    
    
    function interface:addBoolEntry(options)
        --if self.theme == "Compact" then
            --wx.wxLogMessage("Building compact double entry...")
            --return guitools.compact.entries.addBoolEntry(self,options);
        --end
        
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
        
        ctrls[1] = self:addCheckBox{text=options.caption,handler=checkHandler,flags=options.flags,tip=options.tip};
        
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
    
    -- Implementation of entry functions:
    function interface:addStringEntry(options)
        if self.theme == "Compact" then
            --wx.wxLogMessage("Building compact double entry...")
            return guitools.compact.entries.addStringEntry(self,options);
        end
        
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
        
        self:pushSizer{orient=wx.wxHORIZONTAL,prop=options.prop or 0,flags=wx.wxEXPAND}
        ctrls[1] = self:addStaticText{text=options.caption..": ",tip=options.tip};
        ctrls[2] = self:addTextCtrl{prop=1,handler=textHandler,flags=options.flags,text=entry.defaultValue,style=options.style}
        if options.unit then
            ctrls[3] = self:addStaticText{text=options.unit}
        end        
        self:popSizer()   
        
        return ctrls[2];
    end    
end

