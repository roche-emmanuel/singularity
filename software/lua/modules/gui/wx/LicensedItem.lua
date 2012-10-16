local Class = require("classBuilder"){name="LicensedItem",bases="base.Object"};

local lman = require "security.LicenseManager"

-- This class provides functions to add wx controls.
function Class:initialize(options)
	self:check(options.item,"Invalid item in LicensedItem constructor")
	self:check(options.sizer,"Invalid sizer in LicensedItem constructor")
	self:check(options.right,"Invalid right in LicensedItem constructor")
	
	self._item = options.item
	self._sizer = options.sizer
	self._right = options.right
	self._visible = options.visible or false
end

function Class:updateVisibility()
    local show = lman:hasFeature(self._right);
    if show ~= self._visible then
        -- toggle the visibility status:
        self._sizer:Show(self._item,show,false);
        self._sizer:Layout()
        self._visible = show;
    end
end

        
return Class
