local mm = require "mission.MissionManager"
local mis = mm:getCurrentMission():asMXMission()
mm:check(mis,"Invalid MX Mission")

local tman = mis:getTurretManager()

local turret = tman:getTurretByIndex(1)

local platform = turret:getPlatform()

local ppos = platform:getPosition()
log:info("Platform position is: ", ppos)

local pman = turret:getComponent(turret.COMPONENT_POI_MANAGER)
turret:check(pman,"Invalid POI manager")

local pos = ppos + osg.Vec3d(1,1,-1)*100
pman:getPOI(1):setLLA(pos:toLLA())
pman:getPOI(1):setName("POI#1  ")
local pos = ppos + osg.Vec3d(1,0,-1)*100
pman:getPOI(2):setLLA(pos:toLLA())
pman:getPOI(2):setName("POI#2  ")
local pos = ppos + osg.Vec3d(1,-1,-1)*100
pman:getPOI(3):setLLA(pos:toLLA())
pman:getPOI(3):setName("POI#3  ")


pman:setCurrentIndex(0)
--pman:slewToPOI(1)

log:debug("Execution done.")

