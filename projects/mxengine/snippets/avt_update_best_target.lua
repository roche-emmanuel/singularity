-- Now try to build a frustum from the current turret VIC sensor:
local mm = require "mission.MissionManager"
local mis = mm:getCurrentMission():asMXMission()
mm:check(mis,"Invalid MX Mission")

local fusion = VBS2Fusion

local tman = mis:getTurretManager()

local turret = tman:getTurretByIndex(1)

local avt = turret:getModule(turret.MODULE_AVT)

if not avt then
	log:warn("No AVT module found")
	return
end

avt:updateBestPotentialTarget()

log:debug("Execution done.")
