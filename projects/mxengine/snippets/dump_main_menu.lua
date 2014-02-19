local mm = require "mission.MissionManager"
local mis = mm:getCurrentMission():asMXMission()
mm:check(mis,"Invalid MX Mission")

local tman = mis:getTurretManager()

local turret = tman:getTurretByIndex(1)

local mm = turret:getMenuManager():getMainMenu()
local map = mm:getChildrenMap()

log:debug("Menu map: ",map)

log:debug("Execution done.")

