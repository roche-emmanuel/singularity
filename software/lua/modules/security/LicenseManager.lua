local Class = require("classBuilder"){name="LicenseManager",bases="base.Object"};

local lman = require "security.LicenseManager"

-- This class provides functions to add wx controls.
function Class:initialize(options)

end

function Class:hasFeature(feature)
	self:no_impl()
end

        
return Class() -- return instance.
