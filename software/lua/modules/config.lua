-- Main config file.

local cfg = {}

-- test init files:
--cfg.init_script = "IUP/notepad.wlua"

-- locale selection:
cfg.default_locale = "en"
--cfg.default_locale = "fr"

-- Start the mainframe:
cfg.mainframe_enabled = true

-- Enable or disable the unit testing framework:
cfg.tests_enabled = true;

-- Display ribbon bar instead of standard menus.
cfg.mainframe_ribbon_enabled = false

-- Display the standard menus.
cfg.mainframe_menus_enabled = true

return cfg
