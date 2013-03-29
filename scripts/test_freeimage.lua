#!/bin/sgt

log:notice "Executing init script..."

local App = require "osg.OSGTestApp"
local app = App{profileFile="test_freeimage_profile.log"}

local tools = require "osg.Tools"

local img = tools:loadImage(fs:getRootPath("tests/data/tong.psd.freeimage"))

app:check(img,"Invalid Image result")

local quad = tools:createScreenQuad{image=img}
app:getRoot():addChild(quad)

app:run()
	
log:notice "Script execution done."
