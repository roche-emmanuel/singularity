local Class = require("classBuilder"){name="OverlayWebTile",bases={"gui.web.WebTile","aw.OverlayViewExtension"}};

function Class:initialize(options)
	self:registerTurretProxy()
end

return Class 
