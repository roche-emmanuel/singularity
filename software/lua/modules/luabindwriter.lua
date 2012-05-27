module("luabindwriter",package.seeall)

-- model with no inheritance
local oo = require "loop.base"

local BindingWriter = oo.class{
    -- default field values
    content   = "",
    intent = 0, -- base intent value
    tab="\t" -- default tabulation value
}



writeReflection = function(datamap, filename)
    local bw = BindingWriter{}
    bw:writeReflection(datamap,filename)
end
