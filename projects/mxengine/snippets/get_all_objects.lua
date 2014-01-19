

require "fusion3"
local fusion = VBS2Fusion

local units = fusion.MissionUtilities.getAllUnits()
log:debug("Found ",units:size()," units.")

local vehicles = fusion.MissionUtilities.getAllVehicleExclusion("false;")
log:debug("Found ",vehicles:size()," vehicles.")

local num = vehicles:size()
for i=0,num-1 do
	local v = vehicles:at(i)
	log:debug("Found vehicle: alias='", v:getAlias(),"', name='",v:getName(),"', id='",v:getID(),"'")
	-- fusion.ControllableObjectUtilities.applyDrawMode(v,fusion3.DM_WIREFRAME) --fusion3.DM_NORMAL
	local mpath = fusion.ControllableObjectUtilities.getModelPath(v)
	log:debug("Model path: ",mpath)
	local pos = fusion.ControllableObjectUtilities.getBoundingCenter(v):toVec3d()
	log:debug("Center position: ",pos)

	local pos = fusion.ControllableObjectUtilities.getModelToWorldASL(v,osg.XAXIS:toPosition()):toVec3d()
	log:debug("Forward position in world coords: ",pos)

	local mini = fusion.ControllableObjectUtilities.getBoundingBoxMinExtremePoints(v):toVec3d()
	local maxi = fusion.ControllableObjectUtilities.getBoundingBoxMaxExtremePoints(v):toVec3d()
	log:debug("Bounding box: mini=",mini)
	log:debug("Bounding box: maxi=",maxi)
end


local fh = require "fusion.FusionHandler"

local cmd = [[
mylist = allStaticVehicles "true;";
num = count mylist;

mystr = format["Static object list size is %1", num];
mystr call logInfo; 

for "_i" from 0 to num-1 do {
	_obj = mylist select _i;
	_id = ObjToId _obj;
	_id call logInfo;
}
]]

log:debug("Should Execute command: ",cmd)
fh:execute(cmd)


log:debug("Execution done.")
