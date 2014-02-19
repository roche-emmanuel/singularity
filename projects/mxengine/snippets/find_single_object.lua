require "fusion3"
local fusion = VBS2Fusion

-- Prepare a collection:
local collection = fusion3.GeomModelCollection()

-- add a simple model in the collection
-- based on the location of a test unit:
local unit = fusion.ControllableObject()
unit:setName("test_unit")
fusion.ControllableObjectUtilities.updatePositionASL(unit);

local pos = unit:getPositionASL():toVec3d()

log:debug("The unit position is: ",pos)

-- Create the new model:
local model = fusion3.GeomModel()
model:setSphereCenter(osg.Vec3f(pos:x(),pos:y(),pos:z()))
model:setSphereRadius(1.0)

collection:addModel(model)

log:debug("Now collection contains: ",collection:getModelCount()," models.")

-- Now try to build a frustum from the current turret VIC sensor:
local mm = require "mission.MissionManager"
local mis = mm:getCurrentMission():asMXMission()
mm:check(mis,"Invalid MX Mission")

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
local hfov, vfov = sensor:getFOV(true) -- with ezoom;

log:debug("Current sensor fov is :",hfov," degrees.");

-- Now build the corner points needed for the frustum planes:
local theta = math.rad(hfov/2.0)
local phi = math.rad(vfov/2.0)
local ct, st, cp, sp = math.cos(theta), math.sin(theta), math.cos(phi), math.sin(phi)

local points =  { osg.Matrixd.transform3x3(osg.Vec3d(cp*ct,cp*st,sp),tmat),
									osg.Matrixd.transform3x3(osg.Vec3d(cp*ct,cp*st,-sp),tmat),
									osg.Matrixd.transform3x3(osg.Vec3d(cp*ct,-cp*st,-sp),tmat),
									osg.Matrixd.transform3x3(osg.Vec3d(cp*ct,-cp*st,sp),tmat)}

local normals = { points[2]:cross(points[1]),
									points[3]:cross(points[2]),
									points[4]:cross(points[3]),
									points[1]:cross(points[4])}

local coeffs = {}
-- Normalize the normals:
for i=1,4 do
	normals[i]:normalize()
	coeffs[i] = - normals[i]*tpos;
	log:debug("Computed plane equation with n=",normals[i],", p=",coeffs[i])
end

-- Now built a polytop from this:
local pt = fusion3.Polytope()
for i=1,4 do
	pt:addPlane(osg.Vec3f(normals[i]:x(),normals[i]:y(),normals[i]:z()),coeffs[i])
end

-- Also add the forward plane itself:
forward:normalize()
pt:addPlane(osg.Vec3f(forward:x(),forward:y(),forward:z()),-forward*tpos)

-- get the sub collection with this frustum:
local subc = collection:getCulledModels(pt);

if subc then
	log:debug("Found ",subc:getModelCount()," culled models.");
else
	log:debug("Invalid suc collection.");
end

log:debug("Execution done.")
