-- Default filesystem handler based on luafilesystem.
local Class = require("classBuilder"){name="Event",bases="base.Object"};

-- filepath types:
Class.APP_CLOSING="AppClosing"
Class.FRAME="Frame"

return Class
