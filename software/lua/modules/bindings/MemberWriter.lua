
local oo = require "loop.cached"
 
local MemberWriter = oo.class({})

MemberWriter.CLASS_NAME = "bindings.MemberWriter"

function MemberWriter:__init()
    local object = oo.rawnew(self,{})  
	object._TRACE_ = "MemberWriter"
    return object
end

function MemberWriter:handle(member,comp,section)
	LOG:notice("found member ",member:name():latin1(), " in compound ", comp:name():latin1())
end

return MemberWriter
