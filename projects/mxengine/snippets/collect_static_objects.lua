require "fusion3"
local fusion = VBS2Fusion

-- Prepare a collection:
local collection = fusion3.GeomModelCollection()

-- retrieve the mission bounds:
local br = fusion.TerrainUtilities.getBottomRightPos(); 
local tl = fusion.TerrainUtilities.getTopLeftPos();

log:debug("Terrain bottom right: ",br)
log:debug("Terrain top left: ",tl)

	-- int count = 0;
	-- GeometryObject* list = getMapGeometry(br.getX(),br.getZ(),tl.getX(),tl.getZ(),count,GeometryObject::House|GeometryObject::Tree|GeometryObject::Road);

collection:populate(tl:getX(),br:getZ(),br:getX(),tl:getZ(),1) --collection.GT_HOUSE)
-- collection:populate(tl:getX(),br:getX(),br:getZ(),tl:getZ(),collection.GT_TREE)
-- collection:populate(tl:getX(),br:getX(),br:getZ(),tl:getZ(),collection.GT_ROAD)

if false then
-- now place a unit on each of the first 20 positions in the world:
log:debug("Creating units:")
local num = math.min(50,collection:getModelCount())
for i=1,num do
	local model = collection:getModel(i)
	local unit = fusion.Unit();
	local vec = osg.Vec3d(model:getSphereCenter())
	-- fusion.UnitUtilities.CreateUnit(unit,osg.Vec3d(vec):toPosition());
	fusion.ControllableObjectUtilities.createObject(unit);
	fusion.ControllableObjectUtilities.applyPositionASL(unit,vec:toPosition());
	log:debug("Setting unit position to: ",vec)
end
log:debug("Done creating units.")
end

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
local hfov = sensor:getFOV(true) -- with ezoom;
local aspect = sensor:getOutput():getAspectRatio()
local vfov = hfov/aspect

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
