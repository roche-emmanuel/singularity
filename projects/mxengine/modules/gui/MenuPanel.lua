local Class = require("classBuilder"){name="MenuPanel",bases="gui.BasicTurretComponent"};


function Class:buildComponent(intf,options)
	
	local size = 20
	intf:pushSizerV{text="Menu control", prop=0,flags=wx.wxALL+wx.wxEXPAND,function()
		
		intf:pushSizerH{prop=0,flags=wx.wxALL+wx.wxEXPAND,function()
			intf:addActionButtonEntry{name="menu_hide",src="visible_off",size=size,
							  handler="onHide",validItemOnly=true}
			intf:addSpacer{prop=1}
							  
			intf:addActionButtonEntry{name="menu_inc",src="add",size=size,
									  handler="onIncrement",validItemOnly=true}
			intf:addSpacer{prop=1}
			intf:addActionButtonEntry{name="menu_show",src="visible_on",size=size,
									  handler="onShow",validItemOnly=true}			
		end}
		
		intf:pushSizerH{prop=0,flags=wx.wxALL+wx.wxALIGN_CENTER_HORIZONTAL, function()
			intf:addActionButtonEntry{name="menu_prev",src="left_arrow",size=size,
									  handler="onPrevious",validItemOnly=true}
			intf:addActionButtonEntry{name="menu_activate",src="enter",size=size,
									  handler="onActivate",validItemOnly=true}
			intf:addActionButtonEntry{name="menu_next",src="right_arrow",size=size,
									  handler="onNext",validItemOnly=true}
		end}
	
		intf:pushSizerH{prop=0,flags=wx.wxALL+wx.wxALIGN_CENTER_HORIZONTAL,function()
			intf:addActionButtonEntry{name="menu_dec",src="remove",size=size,
									  handler="onDecrement",validItemOnly=true}
		end}	
	end}
end

function Class:onShow(data)
	local dmap = data.item	
	local turret = dmap:fetch("turret")
	turret:getMenuManager():setEnabled(true)
end

function Class:onHide(data)
	local dmap = data.item	
	local turret = dmap:fetch("turret")
	turret:getMenuManager():setEnabled(false)
end

function Class:getCurrentItem(data)
	local dmap = data.item	
	local turret = dmap:fetch("turret")
	local mm = turret:getMenuManager()
	return mm:getCurrentItem()
end

function Class:onIncrement(data)
	local item = self:getCurrentItem(data)
	self:info("Incrementing item ", item:getID())
	item:increment()
end

function Class:onPrevious(data)
	local item = self:getCurrentItem(data)
	self:info("Getting previous item for ", item:getID())
	item:prev()
end

function Class:onActivate(data)
	local item = self:getCurrentItem(data)
	self:info("Activating item ", item:getID())
	item:activate()
end

function Class:onNext(data)
	local item = self:getCurrentItem(data)
	self:info("Getting next item for ", item:getID())
	item:next()
end

function Class:onDecrement(data)
	local item = self:getCurrentItem(data)
	self:info("Decrementing item ", item:getID())
	item:decrement()
end

return Class 
