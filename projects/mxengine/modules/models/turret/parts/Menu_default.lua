local cfg = require "utils.TurretModel" ()

local Enums = require "mx.Enums"

cfg:set("Menu.class_name","DefaultMenuManager")

local bhvs = require "std.OrderedMap" ()
bhvs:set("menu.EOW",{"Sensor", sid=Enums.VIDEO_EOW})
bhvs:set("menu.IR", {"Sensor", sid=Enums.VIDEO_IR})
bhvs:set("menu.EON", {"Sensor", sid=Enums.VIDEO_EON})

cfg:set("Menu.behaviors",bhvs)

return cfg
