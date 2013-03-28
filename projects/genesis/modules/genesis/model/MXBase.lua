-- Create the complete schema for the turret state data:
local osg = require "osg"

local cfg = {}

-- Default video output resolution used for any output with no specific resolution set. 
-- Width and Height are given in pixels.
cfg["screen.default_resolution"] = {
	desc="screen_default_resolution_desc",
	value=osg.Vec2s(1980,1080),
	vtype="osg.Vec2s",
	unit="pixels",
}

-- Attitude of the turret. 
-- The first value is the turret azimuth angle (eg. yaw)
-- The second value is the turret elevation angle (eg. pitch)
-- The third value is the turret roll angle.
cfg["gimbal.attitude"] = {
	desc="gimbal_attitude_desc",
	value=osg.Vec3d(0.0,-4.0,0.0),
	vtype="osg.Vec3d",
	unit="degrees",
}

-- Attitude offset of the turret with respect to its parent platform.
-- the angles are in the order Yaw, Pitch, Roll and are given in degrees.
cfg["global.attitude_offset"] = {
	desc="global_attitude_offset_desc",
	value=osg.Vec3d(0.0,0.0,0.0),
	vtype="osg.Vec3d",
	unit="degrees",
}

-- Position offset of the turret with respect to its parent platform.
-- the offsets are on X,Y and Z axis and are given in meters.
cfg["global.position_offset"] = {
	desc="global_position_offset_desc",
	value=osg.Vec3d(0.0,0.0,0.0),
	vtype="osg.Vec3d",
	unit="degrees",
}

return cfg
