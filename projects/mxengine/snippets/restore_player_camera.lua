

require "fusion3"
local fusion = VBS2Fusion

local player = fusion.PlayerUtilities.getPlayer()

-- fusion.PlayerUtilities.applyPlayer(player)


local fh = require "fusion.FusionHandler"

-- selectPlayer null;
-- Alpha1_delegate switchCamera "External"; -- same as Internal
-- Alpha1_delegate switchCamera "External";
-- player switchCamera "External";

local cmd = [[
Alpha1_delegate switchCamera "Internal";
]]

log:debug("Should Execute command: ",cmd)
fh:execute(cmd)


log:debug("Execution done.")
