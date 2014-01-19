-- Now try to build a frustum from the current turret VIC sensor:
local mm = require "mission.MissionManager"
local mis = mm:getCurrentMission():asMXMission()
mm:check(mis,"Invalid MX Mission")

local fusion = VBS2Fusion

local tman = mis:getTurretManager()

local turret = tman:getTurretByIndex(1)

-- get the turret position and forward vector:
local tmat = turret:getFrame()
local tpos = tmat:getTrans()
local forward = osg.Matrixd.transform3x3(osg.XAXIS,tmat);

-- get the current VIC sensor:
local vic = turret:getVideoStream(turret.VIDEO_VIC)
local sensor = vic:getResolvedSensor()

-- now get the FOV of this sensor:
local hfov = sensor:getFOV(true) -- with ezoom;
local aspect = sensor:getOutput():getAspectRatio()
local vfov = hfov/aspect

log:debug("Current sensor fov is :",hfov," degrees.");

-- get the frustum from the turret:
local pt = turret:computeFrustum(hfov,vfov)

-- get the culled models from the missions:
local subc = mis:getCulledStaticModels(pt,1)

mis.primitiveList = mis.primitiveList or {}
mis.count = mis.count or 4

for k,v in ipairs(mis.primitiveList) do
	-- remove the previous primitives:
	fusion.PrimitiveDraw.DeletePrimitive(v)
end

local buildBox = function(model)
	local bmin = model:getBoxMin()
	local bmax = model:getBoxMax()
	local mat = model:getTransform()

	local wp = {
		osg.Vec3d(mat:preMult(osg.Vec3f(bmin:x(),bmin:y(),bmin:z()))):toPosition(),
		osg.Vec3d(mat:preMult(osg.Vec3f(bmin:x(),bmax:y(),bmin:z()))):toPosition(),
		osg.Vec3d(mat:preMult(osg.Vec3f(bmax:x(),bmax:y(),bmin:z()))):toPosition(),
		osg.Vec3d(mat:preMult(osg.Vec3f(bmax:x(),bmin:y(),bmin:z()))):toPosition(),
		osg.Vec3d(mat:preMult(osg.Vec3f(bmin:x(),bmin:y(),bmax:z()))):toPosition(),
		osg.Vec3d(mat:preMult(osg.Vec3f(bmin:x(),bmax:y(),bmax:z()))):toPosition(),
		osg.Vec3d(mat:preMult(osg.Vec3f(bmax:x(),bmax:y(),bmax:z()))):toPosition(),
		osg.Vec3d(mat:preMult(osg.Vec3f(bmax:x(),bmin:y(),bmax:z()))):toPosition(),
	}

	local color = fusion.ColorRGBA_FD()
	color:setR(1.0);
	color:setG(1.0);
	color:setB(0.0);
	color:setA(1.0);

	local strip = fusion3.std_vector_VBS2Fusion_position3D()
	for k,v in ipairs{1,2,3,4,1,5,6,2,6,7,3,7,8,4,8,5} do
		strip:push_back(wp[v])
	end

	fusion.PrimitiveDraw.DrawLineStrip(strip,color,"bb".. mis.count)
	table.insert(mis.primitiveList,"bb".. mis.count)
	mis.count = mis.count+1
end

if subc then
	-- just get the first model, and compute its bounding box in world coords:
	local num = math.min(10,subc:getModelCount())
	for i=0,num-1 do
		buildBox(subc:getModel(i))
	end
else
	log:debug("Invalid suc collection.");
end

log:debug("Execution done.")
