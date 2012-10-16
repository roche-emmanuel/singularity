module("guitools.treectrls",package.seeall)

require("general","guitools.scene.treeitem.provider")
require("general","guitools.param.treeitem.provider")
require("general","guitools.script.treeitem.provider")
require("general","guitools.any.treeitem.provider")
require("general","guitools.object.treeitem.provider")

function loadTreeControls(interface)
    function interface:createTreeItemProvider(options)
        options = options or {}
        if options.type == "scenegraph" then
            return guitools.scene.treeitem.provider.createItemProvider(options)
        elseif options.type == "parameter" then
            return guitools.param.treeitem.provider.createItemProvider(options)
        elseif options.type == "script" then
            return guitools.script.treeitem.provider.createItemProvider(options)
        elseif options.type == "any" then
            return guitools.any.treeitem.provider.createItemProvider(options)
        elseif options.type == "object" then
            return guitools.object.treeitem.provider.createItemProvider(options)  
        end
        
        wx.wxLogError("Cannot create treeitem provider");
        return nil
    end
    
    function interface:addTreeCtrl(options)
        if not options or not options.itemProvider then
            wx.wxLogError("Invalid item provider in interface:addTreeCtrl()");
            return nil;
        end
        
        local tree = {}
        
        tree.itemProvider = options.itemProvider
        
        function tree:getActionId(action)
            -- store in the tree table a table with the id <-> action name mapping:
            self.actionMap = self.actionMap or {}
            if not self.actionMap[action] then
                self.actionMap[action] = giDisplay.ViewManager.getNewID();
            end
            
            return self.actionMap[action];
        end
        
        function tree:getActionName(id)
            self.actionMap = self.actionMap or {}
            for k,v in pairs(self.actionMap) do
                if v == id then
                    return k;
                end
            end
            
            wx.wxLogError("Cannot find action name for id "..id);
            return "";
        end
        
        function tree:setRoot(details,project)
            self.ctrl:DeleteAllItems();
            
            local prov = self.itemProvider
            
            -- Assign the details to the item provider:
            prov:setRoot(details,project)
            
            -- retrieve the root object from the item provider:
            local obj = prov:getRootObject()
            if obj then
                -- only assign a root if appropriate:
                local data = giDisplay.RefTreeItemData(obj,prov:getHint(obj));
                local rootId = self.ctrl:AddRoot(prov:getName(obj),prov:getImage(obj),prov:getSelectionImage(obj),intro2wx(data));
                self.ctrl:SetItemHasChildren(rootId,prov:hasChildren(obj));
            end
        end
        
        tree.ctrl = wx.wxTreeCtrl(self:getCurrentParent(),options.id or wx.wxID_ANY,wx.wxDefaultPosition,wx.wxDefaultSize,options.style or bit.bor(wx.wxTR_DEFAULT_STYLE,wx.wxTR_HAS_BUTTONS,wx.wxTR_EXTENDED,wx.wxTR_MULTIPLE,wx.wxTR_EDIT_LABELS))
        if options.minsize then
            tree.ctrl:SetMinSize(options.minsize)
        end
        
        options.flags = options.flags or wx.wxALL+wx.wxEXPAND

        local imgList = tree.itemProvider:createImageList();
        tree.ctrl:AssignImageList(imgList);
        
        function tree:addItem(item,child)
            local tree = self.ctrl
            local prov = self.itemProvider
            
            local data = giDisplay.RefTreeItemData(child,prov:getHint(child));
            local childId = tree:AppendItem(item,prov:getName(child),prov:getImage(child),prov:getSelectionImage(child),intro2wx(data));
            tree:SetItemHasChildren(childId,prov:hasChildren(child));        
        end
        
        -- connect all the needed event handlers:
        function tree.onItemExpanding(intf,event,self)
            local tree = self.ctrl
            local prov = self.itemProvider
            local item = event:GetItem();
            local data = wx2intro(tree:GetItemData(item));

            local obj = data:getData()
            local hint = data:getHint()
            
            -- We load all the children of that object:
            local num = prov:getNumChildren(obj,hint);
            if num == 0 then
                wx.wxLogWarning("No children found in parent object");
                return;
            end
            
            for i=0,num-1 do
                if prov:isChildVisible(i,obj,hint) then
                    local child = prov:getChild(i,obj,hint)
                    self:addItem(item,child)
                end
            end        
        end
        
        function tree.onItemCollapsed(intf,event,self)
            local tree = self.ctrl
            local prov = self.itemProvider
            local item = event:GetItem();
            local data = wx2intro(tree:GetItemData(item));
            tree:DeleteChildren(item);
            tree:SetItemHasChildren(item,prov:hasChildren(data:getData()));
        end
        
        function tree.onItemActivated(intf,event,self)
            if options.activateHandler then
                local tree = self.ctrl
                local prov = self.itemProvider
                local item = event:GetItem();

                local data = {}
                data.tree = self
                data.treeItem = item
                options.activateHandler(data) -- this handler is normally defined in the addTextEntry() method to encapsulate another "handler"
                -- giving the user access to the entry details too.
            end
        end
        
        function tree.onRightReleased(intf,event,self)
            wx.wxLogVerbose("In onRightReleased.")
            local tree = self.ctrl
            local screenpt = event:GetPoint() --osition();
            local item = event:GetItem() --tree:HitTest(screenpt,flags);
            
            local data = {
                tree = self,
                treeItem = item
            };
            
            -- in the following create Menu handler the user can create a menu (to be returned)
            -- and add menu items inside, using the methods getActionId() to create an ID for an action name
            local menu = options.menuHandler(data);
            if menu then
                wx.wxLogVerbose("Popping menu");
                tree:PopupMenu(menu,screenpt);
            end
        end
        
        function tree.onContextMenu(intf,event,self)
            wx.wxLogVerbose("In onContextMenu.")
            -- here we call the event handler sending the appropriate action name if found.
            local tree = self.ctrl
            local items = tree:GetSelections();
            
            local item = nil;
            if #items > 0 then
                item = items[1];
            end
           
            local id = event:GetId();
            local action = self:getActionName(id);
            
            local data = {}
            data.tree = self
            data.treeItem = item
            data.treeItems = items
            data.action=action
            --data.event=event
            data.eventId=id
            
            options.contextHandler(data) -- this handler is normally defined in the addTextEntry() method to encapsulate another "handler"            
        end
        
        function tree.onBeginDrag(intf,event,self)
            if options.dragHint then            
                local tree = self.ctrl
                local prov = self.itemProvider
                local item = event:GetItem();

                if not hasFeature("parameter_tree_drag_and_drop_right") then
                    wx.wxLogWarning("The current license doesn't allow parameter tree drag & drop.");
                    return; 
                end

                local list = giScript.AnyVector();

                local items = tree:GetSelections();
                local num = #items;
                for i=1,num do
                    local itemdata = wx2intro(tree:GetItemData(items[i]));
                    list:push_back(itemdata:getData());
                end

                -- Prepare an anymap to hold this list:
                if list:getNumItems() >0 then
                    local themap = giScript.AnyMap();
                    themap:set("parameters",list);
                    -- Now send this data as drag and drop:
                    wx.wxLogVerbose("Should perform d&d here.");
                    giDisplay.GreenIsisFrame.performDragAndDrop(wx2intro(tree),themap,options.dragHint,wx.wxDrag_CopyOnly)
                end
            end
        end
        
        self:connectHandler(tree.ctrl,wx.wxEVT_COMMAND_TREE_ITEM_EXPANDING,tree.onItemExpanding,nil,tree)
        self:connectHandler(tree.ctrl,wx.wxEVT_COMMAND_TREE_ITEM_COLLAPSED,tree.onItemCollapsed,nil,tree)
        
        if options.activateHandler then
            self:connectHandler(tree.ctrl,wx.wxEVT_COMMAND_TREE_ITEM_ACTIVATED,tree.onItemActivated,nil,tree)
        end
        
        if options.dragHint and options.dragHint ~= "none" then
            self:connectHandler(tree.ctrl,wx.wxEVT_COMMAND_TREE_BEGIN_DRAG,tree.onBeginDrag,nil,tree)
        end
        
         if options.contextHandler and options.menuHandler then
            wx.wxLogVerbose("Connecting context handler.")
            self:connectHandler(tree.ctrl,wx.wxEVT_COMMAND_MENU_SELECTED,tree.onContextMenu,nil,tree) 
            --self:connectHandler(tree.ctrl,wx.wxEVT_RIGHT_UP,tree.onRightReleased,nil,tree)        
            self:connectHandler(tree.ctrl,wx.wxEVT_COMMAND_TREE_ITEM_MENU,tree.onRightReleased,nil,tree)        
         end
         
        return self:addControl(tree.ctrl,options), tree
    end

end
