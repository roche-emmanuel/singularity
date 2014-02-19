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
local hfov,vfov = sensor:getFOV(true) -- with ezoom;

log:debug("Current sensor fov is :",hfov," degrees.");

-- get the frustum from the turret:
local tmat = turret:getFrame()
local pt = turret:computeFrustum(hfov,vfov,tmat)

-- get the culled models from the missions:
-- local list = mis:getCulledVehicles(pt)

local vehicles = fusion.MissionUtilities.getAllVehicleExclusion("false;")
local list = {}
local Object = require "fusion.Object"
local num = vehicles:size()
for i=0,num-1 do
	local v = vehicles:at(i)
	table.insert(list,Object{object=v})
end

mis.primitiveList = mis.primitiveList or {}
mis.count = mis.count or 4

mis.rectList = mis.rectList or {}
mis.rcount = mis.rcount or 1

for k,v in ipairs(mis.primitiveList) do
	-- remove the previous primitives:
	fusion.PrimitiveDraw.DeletePrimitive(v)
end

for k,v in ipairs(mis.rectList) do
	-- remove the previous primitives:
	fusion.HUDDraw.DeleteObject(v)
end

mis.primitiveList = {}
mis.rectList =  {}

local buildBox = function(model)
	local bmin, bmax = model:getBoundingBox()
	local mat = model:getLocalToWorldMatrix()

	local wp = {
		mat:preMult(osg.Vec3d(bmin:x(),bmin:y(),bmin:z())):toPosition(),
		mat:preMult(osg.Vec3d(bmin:x(),bmax:y(),bmin:z())):toPosition(),
		mat:preMult(osg.Vec3d(bmax:x(),bmax:y(),bmin:z())):toPosition(),
		mat:preMult(osg.Vec3d(bmax:x(),bmin:y(),bmin:z())):toPosition(),
		mat:preMult(osg.Vec3d(bmin:x(),bmin:y(),bmax:z())):toPosition(),
		mat:preMult(osg.Vec3d(bmin:x(),bmax:y(),bmax:z())):toPosition(),
		mat:preMult(osg.Vec3d(bmax:x(),bmax:y(),bmax:z())):toPosition(),
		mat:preMult(osg.Vec3d(bmax:x(),bmin:y(),bmax:z())):toPosition(),
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

-- compute the view matrix and projection matrix:
local proj = osg.Matrixd.perspective(vfov, aspect, 1.0, 10000.0);

local toMatrixf = function(mat)
	return osg.Matrixf(mat:op_call(0,0),mat:op_call(0,1),mat:op_call(0,2),mat:op_call(0,3),
		mat:op_call(1,0),mat:op_call(1,1),mat:op_call(1,2),mat:op_call(1,3),
		mat:op_call(2,0),mat:op_call(2,1),mat:op_call(2,2),mat:op_call(2,3),
		mat:op_call(3,0),mat:op_call(3,1),mat:op_call(3,2),mat:op_call(3,3))
end

local toMatrixd = function(mat)
	return osg.Matrixd(mat:op_call(0,0),mat:op_call(0,1),mat:op_call(0,2),mat:op_call(0,3),
		mat:op_call(1,0),mat:op_call(1,1),mat:op_call(1,2),mat:op_call(1,3),
		mat:op_call(2,0),mat:op_call(2,1),mat:op_call(2,2),mat:op_call(2,3),
		mat:op_call(3,0),mat:op_call(3,1),mat:op_call(3,2),mat:op_call(3,3))
end

local turretToView = osg.Matrixd(0.0,0.0,-1.0,0.0,
																 -1.0,0.0,0.0,0.0,
																 0.0,1.0,0.0,0.0,
																 0.0,0.0,0.0,1.0);

-- local viewproj = toMatrixf(tmat:inverse()*turretToView*proj)
local viewproj = tmat:inverse()*turretToView*proj
-- local viewproj = tmat:inverse()

local buildHUD = function (model)
	local bmin = model:getBoxMin()
	local bmax = model:getBoxMax()
	local mat = toMatrixd(model:getTransform())*viewproj

	local wp = {
		-- osg.Vec4d(mat:preMult(osg.Vec4f(bmin:x(),bmin:y(),bmin:z(),1.0))),
		-- osg.Vec4d(mat:preMult(osg.Vec4f(bmin:x(),bmax:y(),bmin:z(),1.0))),
		-- osg.Vec4d(mat:preMult(osg.Vec4f(bmax:x(),bmax:y(),bmin:z(),1.0))),
		-- osg.Vec4d(mat:preMult(osg.Vec4f(bmax:x(),bmin:y(),bmin:z(),1.0))),
		-- osg.Vec4d(mat:preMult(osg.Vec4f(bmin:x(),bmin:y(),bmax:z(),1.0))),
		-- osg.Vec4d(mat:preMult(osg.Vec4f(bmin:x(),bmax:y(),bmax:z(),1.0))),
		-- osg.Vec4d(mat:preMult(osg.Vec4f(bmax:x(),bmax:y(),bmax:z(),1.0))),
		-- osg.Vec4d(mat:preMult(osg.Vec4f(bmax:x(),bmin:y(),bmax:z(),1.0))),

		mat:preMult(osg.Vec4d(bmin:x(),bmin:y(),bmin:z(),1.0)),
		mat:preMult(osg.Vec4d(bmin:x(),bmax:y(),bmin:z(),1.0)),
		mat:preMult(osg.Vec4d(bmax:x(),bmax:y(),bmin:z(),1.0)),
		mat:preMult(osg.Vec4d(bmax:x(),bmin:y(),bmin:z(),1.0)),
		mat:preMult(osg.Vec4d(bmin:x(),bmin:y(),bmax:z(),1.0)),
		mat:preMult(osg.Vec4d(bmin:x(),bmax:y(),bmax:z(),1.0)),
		mat:preMult(osg.Vec4d(bmax:x(),bmax:y(),bmax:z(),1.0)),
		mat:preMult(osg.Vec4d(bmax:x(),bmin:y(),bmax:z(),1.0)),
	}

	-- now find the min max box:
	local points = {}

	local xmin,xmax,ymin,ymax;
	for i=1,8 do
		local vec = wp[i]/wp[i]:w()
		table.insert(points,vec);
		local xx = vec:x()
		local yy = vec:y()
		local zz = vec:z()
		log:debug("Box coord point ",i,": (",vec:x(),", ",vec:y(),", ",vec:z(),")");

		xmin = xmin and math.min(xx,xmin) or xx
		ymin = ymin and math.min(yy,ymin) or yy
		xmax = xmax and math.max(xx,xmax) or xx
		ymax = ymax and math.max(yy,ymax) or yy
	end

	for k,v in ipairs{{1,2},{2,3},{3,4},{4,1},{1,5},{5,6},{6,2},{6,7},{7,3},{7,8},{8,4},{8,5}} do
		local color = fusion.ColorRGBA_FD()
		color:setR(0.0);
		color:setG(1.0);
		color:setB(0.0);
		color:setA(1.0);

		local p1 = points[v[1]]
		local p2 = points[v[2]]

		local pt1 = fusion.Point2D()
		pt1:setX(p1:x())
		pt1:setY(p1:y())

		local pt2 = fusion.Point2D()
		pt2:setX(p2:x())
		pt2:setY(p2:y())

		fusion.HUDDraw.DrawLine(pt1,pt2,color,"line" .. mis.rcount);
		table.insert(mis.rectList,"line".. mis.rcount)
		mis.rcount = mis.rcount+1		
	end

	-- prepare the start point:
	local point = fusion.Point2D()
	point:setX(xmin)
	point:setY(ymin)

	local color = fusion.ColorRGBA_FD()
	color:setR(0.0);
	color:setG(1.0);
	color:setB(1.0);
	color:setA(1.0);

	log:debug("Drawing rect: ",xmin,", ",ymin,", ",xmax-xmin,", ",ymax-ymin)

	local points2 = {}
	table.insert(points2,osg.Vec2f(xmin,ymin))
	table.insert(points2,osg.Vec2f(xmin,ymax))
	table.insert(points2,osg.Vec2f(xmax,ymax))
	table.insert(points2,osg.Vec2f(xmax,ymin))

	for k,v in ipairs{{1,2},{2,3},{3,4},{4,1}} do
		local p1 = points2[v[1]]
		local p2 = points2[v[2]]

		local pt1 = fusion.Point2D()
		pt1:setX(p1:x())
		pt1:setY(p1:y())

		local pt2 = fusion.Point2D()
		pt2:setX(p2:x())
		pt2:setY(p2:y())

		fusion.HUDDraw.DrawLine(pt1,pt2,color,"line" .. mis.rcount);
		table.insert(mis.rectList,"line".. mis.rcount)
		mis.rcount = mis.rcount+1		
	end

	-- fusion.HUDDraw.DrawRectangle(point,xmax-xmin,ymax-ymin,color,"rect" .. mis.rcount); -- This is not working !!!
	-- table.insert(mis.rectList,"rect".. mis.rcount)
	-- mis.rcount = mis.rcount+1
end

-- local point = fusion.Point2D()
-- point:setX(-0.5)
-- point:setY(-0.5)

-- local color = fusion.ColorRGBA_FD()
-- color:setR(0.0);
-- color:setG(1.0);
-- color:setB(0.0);
-- color:setA(1.0);

-- draw a rectangle on the HUD:
-- fusion.HUDDraw.DrawRectangle(point,1.0,1.0,color,"rect");

if list then
	-- just get the first model, and compute its bounding box in world coords:
	-- local num = math.min(10,#list)
	local num = #list
	for i=1,num do
		local model = list[i]
		buildBox(model)
		-- if i==0 then
			--buildHUD(model)
		-- end
	end
else
	log:debug("Invalid suc collection.");
end

log:debug("Execution done.")
