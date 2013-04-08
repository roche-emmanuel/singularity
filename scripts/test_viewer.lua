#!/bin/sgt

log:notice "Executing init script..."

local osg = require "osg"

local viewer = osgViewer.Viewer()
local grp = osg.Group()

viewer:setUpViewInWindow(50,50,500,400)
viewer:setSceneData(grp)
viewer:setThreadingModel(osgViewer.ViewerBase.SingleThreaded)
-- viewer:getCamera():setRenderTargetImplementation(osg.Camera.FRAME_BUFFER_OBJECT);

-- local subgrp = osg.Group()
-- grp:addChild(subgrp)

-- local createCube = function()
	-- local cube = osg.Box(osg.Vec3f(0.0,0.0,0.0),1.0)
	-- local drawable = osg.ShapeDrawable(cube,nil)
	-- local geode = osg.Geode()
	-- geode:addDrawable(drawable)
	
	-- return geode
-- end

-- subgrp:addChild(createCube())

-- local cb = osg.NodeCallback{
	-- op_call = function(tt, obj, node, nv)
		-- log:info("Hello from cb!")
		-- obj:traverse(node,nv)
	-- end
-- }

-- subgrp:setUpdateCallback(cb)

-- local tools = require "osg.Tools"

grp:setUpdateCB(function(node,nv)
	log:info("Executing node callback...")
	-- executed = true
	-- thenode = node;
	viewer:setDone(true);
end)

viewer:run()

log:notice "Collecting garbage"
osg.setNotifyHandler(nil)

viewer = nil
-- grp:removeChild(subgrp)
-- subgrp = nil
grp = nil

collectgarbage('collect')

log:notice "Script execution done."
