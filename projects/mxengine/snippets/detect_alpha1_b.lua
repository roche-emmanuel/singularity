
local fh = require "fusion.FusionHandler"

local cmd = [[
hpos = getPosASL Alpha1;
hpos call logInfo;
xx = hpos select 0;
yy = hpos select 1;
zz = hpos select 2;

hitlist = collisionDetection[[xx,yy,(zz+10)],[xx,yy,(zz-10)],1];

num = count hitlist;

mystr = format["Hitlist size is %1", num];
mystr call logInfo;
]]

log:debug("Should Execute command: ",cmd)
fh:execute(cmd)
log:debug("Execution done.")
