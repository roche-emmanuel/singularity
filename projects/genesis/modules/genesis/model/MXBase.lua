-- Create the complete schema for the turret state data:
local osg = require "osg"

local cfg = {}

-- List of sensors available on that turret.
cfg["global.sensor_list"] = {
	desc="global_sensor_list_desc",
	value={ 
		"EOW",
	},
}

-- List of video output available on that turret.
cfg["global.video_output_list"] = {
	desc="global_video_output_list_desc",
	value={ 
		{type="Digital",id=1},
		{type="Digital",id=2},
	},
}

-- Define the sensor used as source for a given video output.
-- and the overlay display status for a given video output.
cfg["video_output.digital1"] = {
	value={ 
		source="EOW",
		overlays_enabled=true,
	},
}

-- Define the sensor used as source for a given video output.
-- and the overlay display status for a given video output.
cfg["video_output.digital2"] = {
	value={ 
		source="EOW",
		overlays_enabled=true,
	},
}

-- Default scene used for that turret if not specified.
cfg["global.scene.default"] = {
	desc="global_scene_default_desc",
	value="TestScene1",
}


-- Default sensor resolution used for any sensor with no specific resolution set. 
-- Width and Height are given in pixels.
cfg["global.sensor.default_resolution"] = {
	desc="global_sensor_default_resolution_desc",
	value=osg.Vec2s(1920,1080),
	vtype="osg.Vec2s",
	unit="pixels",
}

-- Default video output resolution used for any output with no specific resolution set. 
-- Width and Height are given in pixels.
cfg["video_output.default_resolution"] = {
	desc="video_output_default_resolution_desc",
	value=osg.Vec2s(1920,1080),
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
