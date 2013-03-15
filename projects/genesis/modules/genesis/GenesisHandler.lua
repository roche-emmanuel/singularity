local Class = require("classBuilder"){name="GenesisHandler",bases="gui.web.JSHandler"};

function Class:logInfo(objId, ...)
	self:info("Calling log info with objId=",objId)
	self:info(...)
end

return Class
