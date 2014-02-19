-- Now try to build a frustum from the current turret VIC sensor:
local mm = require "mission.MissionManager"
local mis = mm:getCurrentMission():asMXMission()
mm:check(mis,"Invalid MX Mission")

local fusion = VBS2Fusion

local tman = mis:getTurretManager()

local turret = tman:getTurretByIndex(1)

local ir = turret:getModule(turret.MODULE_IR)

if not ir then
	log:warn("No IR module found")
	return
end

-- ir:setPolarity(ir.POLARITY_NORMAL)
ir:setPolarity(ir.POLARITY_INVERT)

log:debug("Execution done.")
