local Class = require("classBuilder"){name="BehaviorManager",bases="base.Object"};

--[[
Class: mx.BehaviorManager

This version of the menu manager will handle proper string ids for menu and menu items.

This class inherits from <base.Object>.
]]

--[=[
--[[
Constructor: BehaviorManager

Create a new instance of the class.
]]
function BehaviorManager(options)
]=]
function Class:initialize(options)		
	self:setupBehaviors()
end

function Class:setupBehaviors()
	local bhvs = self:getConfig():fetch("Menu.behaviors")
	
	for tname, options in bhvs:sequence() do
		self:check(type(tname)=="string","Invalid target item name.")
		
		local item = self:getMainMenu():findItemByName(tname)
		if not item then
			self:notice("Menu item ",tname," not found. Discarding behavior.")
		else
			local bname = options[1]
			self:check(type(bname)=="string","Invalid behavior class name.")
			options.item = item
			require ("mx.menus.behaviors." .. bname)(options)
		end
	end
end

return Class

