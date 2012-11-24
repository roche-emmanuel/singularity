local Class = require("classBuilder"){name="ImageManager",bases="base.Object"};

local wx = require "wx"

local Map = require "std.Map"
local fs = require "base.FileSystem"
local evtman = require "base.EventManager"

function Class:initialize(options)
	-- The images are saved locally in a map.
	self._images = Map();
	self._concatSeparator = "@"
	self._defaultSize = 16;
	self._bitmapType = wx.wxBITMAP_TYPE_PNG
	self._defaultExt = "png"
	self._defaultPath = fs:getRootPath(true).."data/icons/"
	self._defaultQuality = wx.wxIMAGE_QUALITY_HIGH
	self._defaultLinkProp = 0.5 -- link taking half of the size of the image.
	
	evtman:addListener("AppClosing",self)
end

function Class:onAppClosing()
	-- release all the images:
	self:info("Destroying cached images.")
	for k,img in self._images:sequence() do
		img:Destroy()
	end
end

function Class:createImage(options)
	options = type(options)=="string" and {name=options} or options
	
	self:check(options and options.name,"Invalid image name.")
	
	local name = options.name
    local size = options.size or self._defaultSize
    local path = options.path or self._defaultPath
    local btype = options.bitmapType or self._bitmapType
    local ext = options.ext or self._defaultExt
    local quality = options.quality or self._defaultQuality
    local linkProp = options.linkProp or self._defaultLinkProp
    
    -- check if the image name contains an "@" symbol:
    local index = name:find(self._concatSeparator)
    local link = nil;
    if index then
        link = name:sub(index+1)
        name = name:sub(1,index-1)
        self:debug("Using link image: ",link," with main image: ", name);
    end
    
    if ext ~= "png" then
        self:warn("Support for non PNG images not implemented yet here, need to set the BITMAP_TYPE flag to the appropriate type.")
        return;
    end
    
    local img = wx.wxImage(path..name.."."..ext,btype)
    
    if size > 0 then -- could specify negative size to prevent rescale.
        self:info("Rescaling image to ",size,"x",size)
        img:Rescale(size,size,quality);
    end

    if link then
        local linkimg = wx.wxImage(path..link.."."..ext,btype)
        linkimg:Rescale(img:GetWidth()*linkProp,img:GetHeight()*linkProp,quality);
 
 		img:composeWith(linkimg);
    end
    
    return img;
end

-- main method to retrieve an image or create it if it doesn't exist yet.
-- the options contain:
-- .name = image name
-- .size = [optional] image size
-- .path = [optional] path where to look for the image file
-- .ext = [optional] extension of the image file. 
-- .quality = [optional] quality of the wx image.
function Class:getImage(options)
	options = type(options)=="string" and {name=options} or options
	self:check(options and options.name,"Invalid image name.")
	
	local img = self._images:get(options.name)
	if not img then
		img = self:createImage(options)
		self._images:set(options.name,img)
	end
	
	return img	
end

function Class:getBitmap(options)
    local img = self:getImage(options);
    return wx.wxBitmap(img,-1);
end

function Class:getCursor(options)
    local img = self:getImage(options);
    return wx.wxCursor(img);
end

return Class()
