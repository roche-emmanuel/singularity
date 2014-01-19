local mm = require "mission.MissionManager"
local mis = mm:getCurrentMission():asMXMission()
mm:check(mis,"Invalid MX Mission")

local tman = mis:getTurretManager()

local turret = tman:getTurretByIndex(1)

turret:info("Hello from turret ", turret:getName())
