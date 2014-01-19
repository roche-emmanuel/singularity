local mm = require "mission.MissionManager"
local mis = mm:getCurrentMission():asMXMission()
mm:check(mis,"Invalid MX Mission")

local tman = mis:getTurretManager()

local turret = tman:getTurretByIndex(1)

-- Here we try to detect the alpha1 helicopter with a collision test:
local fh = require "fusion.FusionHandler"

local platform = turret:getPlatform()

-- fh:disableGeomSettings(platform._realObject,false,false,false,false,false,false)

local ppos = platform:getPosition()
log:info("Platform position is: ", ppos)

local startPos = ppos - osg.Vec3d(0.0,0.0,10.0)
local endPos = ppos + osg.Vec3d(0.0,0.0,10.0)

local radius = 1.0


local list = fh:getCollision(startPos,endPos,radius,nil,fusion3.FIRE)
log:debug("Received ",#list," collision results. (radius=",radius,")")


---------------------------
-- Performing direct tests with fusion:

require "fusion3"

local fusion = VBS2Fusion

local res = fusion.TerrainUtilities.IsColliding(startPos:toPosition(), endPos:toPosition(), fusion3.FIRE, 0.6, 0.2)
log:debug("TerrainUtilities.IsColliding res1=",res)

-- endPos = osg.Vec3d(endPos:x(),endPos:y(),-endPos:z())

local res = fusion.TerrainUtilities.IsColliding(startPos:toPosition(), endPos:toPosition(), fusion3.FIRE, 0.6, 0.2)
log:debug("TerrainUtilities.IsColliding res2=",res)


-- local startPos = ppos - osg.Vec3d(0.0,10.0,5.0)
-- local endPos = ppos + osg.Vec3d(0.0,10.0,5.0)

fh:execute([[
'hi' call logInfo
]]) 

-- get the size of an array:
fh:execute([[
num = count [0,1,2,3,4];
mystr = format ['Array size is %1',num];
mystr call logInfo
]]) 

startPos = startPos:toPosition()
endPos = endPos:toPosition()

-- try to perform a collision detection test:
local startStr = string.format("[%f,%f,%f]",startPos:getX(),startPos:getZ(),startPos:getY())
local endStr = string.format("[%f,%f,%f]",endPos:getX(),endPos:getZ(),endPos:getY())

local cmd = "hitlist = collisionDetection[ ".. startStr ..", " .. endStr .. ", 1 ];\n"
cmd = cmd .."num = count hitlist;\n"
cmd = cmd .."mystr = format ['Hitlist size is %1',num];\n"
cmd = cmd .."mystr call logInfo;\n"

log:debug("Should Execute command1: ",cmd)
fh:execute(cmd) 
log:debug("Execution done.")

local cmd = [[
hpos = getPosASL Alpha1;
hpos call logInfo;
xx = hpos select 0;
yy = hpos select 1;
zz = hpos select 2;
hitlist = collisionDetection[[xx,yy,(zz-10)],[xx,yy,(zz+10)],1];
num = count hitlist;
mystr = format["Hitlist size is %1", num];
mystr call logInfo;
]]

log:debug("Should Execute command2: ",cmd)
fh:execute(cmd)
log:debug("Execution done.")

