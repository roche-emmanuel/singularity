local cfg = require "utils.TurretModel" ()

cfg:extends("basic_turret")

cfg:set("Overlay.class_name","AweOverlay")

return cfg
