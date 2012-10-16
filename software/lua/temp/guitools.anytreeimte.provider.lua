module("guitools.any.treeitem.provider",package.seeall)

--[[ Build an item provider.
    An item provider should implement the functions:
    * setRoot(details) where details is a table were the available fields depends on the provider type.
    * getRootObject() return the object to use as root client data.
    * getHint(object) return an hint on the object type.
    * getName(object) return the caption to use for an object
    * getImage(object) return the image id to use for the object
    * getSelectionImage(object) return the image id to use for the object when selected.
    * hasChildren(object) return true if the object has children.
    * getNumChildren(object,hint) return the number of child objects in a given object.
    * isChildVisible(i,obj,hint) return true if a given child object should be visible in a tree.
    * getChild(i,obj,hint) return a child object by index
    * createImageList() return an image list to be used by the treectrl.
]]

imageId = {}

imageId["default"] = 0

createItemProvider = function(options)
    local prov = {}
    
    prov.getRootFunc = options.getRootFunc
    prov.root = nil
    
    if not prov.getRootFunc then
        wx.wxLogError("Invalid getRootFunc method when creating item provider at:" .. debug.traceback());
        return nil;
    end

    function prov:setRoot(details,project)
        -- retrieve the root:
        self.project = project
        if not project then
            self.root = nil
            return
        end
        
        self.root = giScript.AnyMap()
        self.root:set("data",self.getRootFunc(self.project)) -- this root object is an anymap.
        self.root:set("name",options.rootName or "All data")
        self.root:set("hint","giScript::AnyMap")
    end
    
    function prov:getDragHint()
        return "any";
    end
    
    function prov:getRootObject()
        return self.root;
    end
    
    function prov:getHint(object)
        return object.hint;
    end
    
    function prov:getName(object)
        return object.name
    end
    
    function prov:getImage(object)
   		if( imageId[object.hint]) then
			return imageId[object.hint]
		else
            return imageId["default"]
        end        
    end
    
    function prov:getSelectionImage(object)
        return -1; -- not used for the moment.
    end
    
    function prov:hasChildren(obj,hint)
        return (obj.hint=="giScript::AnyVector" or obj.hint=="giScript::AnyMap") and obj.data and #obj.data > 0
    end
    
    function prov:getNumChildren(obj,hint)
        return #(obj.data)
    end
    
    function prov:isChildVisible(index,obj,hint)
        -- always visible:
        return true;
    end
    
    function prov:getChild(index,obj,hint)
        if obj.hint == "giScript::AnyVector" then
            local child = obj.data[index]
            local result = giScript.AnyMap()
            result:set("data",child)
            result:set("name","Item "..index.." (= ".. giCommon.Introspector.anyToString(child).. ")")
            result:set("hint",getTypename(child))
            return result;
        else
            -- this is an anymap container:
            local child = obj.data:getValue(index)
            local name = obj.data:getKey(index)
            local result = giScript.AnyMap()
            result:set("data",child)
            result:set("name", name.." (= ".. giCommon.Introspector.anyToString(child).. ")")
            result:set("hint",getTypename(child))
            return result;            
        end
    end
    
    function prov:createImageList()
        -- create the image list from the scene graph images:
        local size = 16;
        local images = wx.wxImageList(size,size,true);
        local names = {"default"}
        for k,v in ipairs(names) do
            local img = wx.wxImage(giCommon.Engine.getRootDir().."data/icons/anytree_"..v..".png",wx.wxBITMAP_TYPE_PNG);
            img:Rescale(size,size,wx.wxIMAGE_QUALITY_HIGH);
            
            images:Add(wx.wxBitmap(img,-1));
        end
        
        -- return the newly created image list:
        return images; -- note that this list should be assigned to another window.
    end
   
    wx.wxLogVerbose("Returning new any treeitem provider")
    
    return prov;
end
