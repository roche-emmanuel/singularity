#!/bin/sgt

log:notice "Executing init script..."

local osg = require "osg"

local viewer = osgViewer.Viewer()
local grp = osg.Group()

viewer:setUpViewInWindow(50,50,500,400)
viewer:setSceneData(grp)

grp:setUpdateCB(function(node,nv)
	log:info("Tests","executing node callback...")
	-- executed = true
	-- thenode = node;
	-- viewer:setDone(true);
end)

viewer:run()
	
log:notice "Script execution done."
