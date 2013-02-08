local Class = require("classBuilder"){name="SelectorProvider",bases="gui.Provider"};

local cfg = require "config"
local utils = require "utils"
local Set = require "std.Set"
local wx = require "wx"
local ItemContainer = require "gui.ItemContainer"
local ItemNameContainer = require "gui.ItemNameContainer"

--- Initialize the mainframe display:
function Class:initialize(options)
	self:check(options and options.selector,"Invalid selector object")
	self._selector = options.selector
	self._autoCreate = options.autoCreate
	self._container = (options.contname and ItemNameContainer{dataHolderName=options.contname})
		or (options.cont and ItemContainer{dataHolder=options.cont})
		or ItemContainer()
end

function Class:getCurrentItem()
    -- Assume that selector is a ComboBox:
    local itemId = self._selector:GetStringSelection();
    
    -- assume that we need to iterate on the vector, and each item is an AnyMap, where we should find a key named "name"
    -- and we use the selector current selection to find the proper object:
    local cont = self:getContainer()
    local item = cont:getItem(itemId)    
    
    -- if the item doesn't exit yet create it as an anymap, if allowed to do so:
    if not item and self._autoCreate then
        item = cont:createItem(itemId)
    end 
    
    return item
end

function Class:update(name)    
    local cont = self:getContainer()
    
    -- try to keep the previous selection:
    name = name or self._selector:GetStringSelection()
    self._selector:Clear()

    local arr = wx.wxArrayString();
    local ids = cont:getItemIDs()
    
    for _,id in ipairs(ids) do
        arr:Add(id)
    end
    
    self._selector:Append(arr); 

    if self._selector:GetCount() ~= 0 then
        if name~="" then
            self._selector:SetStringSelection(name);
        else
            self._selector:SetSelection(0)
        end
    end
end
        
return Class
