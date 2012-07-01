require"iup"

fs = require"base.FileSystem"

local canvas = cd.CreateCanvas(cd.NATIVEWINDOW, 'hdc 640 480')
canvas:Activate()
local w, h = canvas:GetSize()
local image = im.ImageCreate(w, h, im.RGB, im.BYTE)    
image:cdCanvasGetImage(canvas, 0, 0)
error = image:Save(fs:getPath("images/tests/screencapture.jpg"), "JPEG")
image:Destroy()        
if (error) then print("error = "..error) end

