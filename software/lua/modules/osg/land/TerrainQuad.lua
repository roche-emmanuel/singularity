local Class = require("classBuilder"){name="TerrainQuad",bases="base.Object"};

require "osg"
	
function Class:initialize(options)	
	self:check(options and options.node,"Invalid terrain node for quad creation.")
	self._node = options.node
	
	self._root = osg.Group()

	self._parent = options.parent 
	
	self._level = self._parent and self._parent:getLevel()+1 or 0
	self._tx = options.tx
	self._ty = options.ty
	self._ox = options.ox
	self._oy = options.oy
	self._l = options.l
	self._zmin = options.zmin
	self._zmax = options.zmax
	self._occluded = false
	self._drawable = true;
	self._children = {}
	self._visible = nil -- not set initially.
	
	-- add the shared geode from terrain node to this quad by default:
	self._root:addChild(self._node:getTileGeode())
end

function Class:isLeaf()
	return #self._children==0
end

function Class:getSize()
	local s = 1
	if (not self:isLeaf()) then
		for i=1,4 do
			s = s + self._children[i]:getSize()
		end
	end
	return s;
end

function Class:getDepth()
	if self:isLeaf() then
		return self._level
	else
		return math.max(self.children[1]:getDepth(),self.children[2]:getDepth(),self.children[3]:getDepth(),self.children[4]:getDepth())
	end
end

function Class:getRoot()
	return self._root
end

function Class:update()
	local v = self._parent and self._parent:getVisibility() or sgt.PARTIALLY_VISIBLE
	if v == sgt.PARTIALLY_VISIBLE then
		local localBox = sgt.box3d(ox, ox + l, oy, oy + l, zmin, zmax);
		self._visible = self._node:getVisibility(localBox)
	else
		self._visible = v
	end
	
    -- here we reuse the occlusion test from the previous frame:
    -- if the quad was found unoccluded in the previous frame, we suppose it is
    -- still unoccluded at this frame. If it was found occluded, we perform
    -- an occlusion test to check if it is still occluded.
    if (self._visible != sgt.INVISIBLE end self._occluded) then
        self._occluded = self._node:isOccluded(sgt.box3d(self._ox, self._ox + self._l, self._oy, self._oy + self._l, self._zmin, self._zmax));
        if (occluded) then
            visible = sgt.INVISIBLE;
        end
    end
	
end

function Class:getVisibility()
	self:check(self._visible~=nil,"Invalid visibility state.")
	return self._visible
end

function Class:getZmax()
	return self._zmax
end

function Class:getZmin()
	return self._zmin
end

return Class
