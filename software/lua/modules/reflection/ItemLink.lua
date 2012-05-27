local oo = require "loop.base"
local dbg = require "debugger"

local ItemLink = oo.class{}

-- Define the class name
ItemLink.CLASS_NAME = "reflection.ItemLink"

ItemLink.STRING = 0
ItemLink.OBJECT = 1
ItemLink.TYPEDEF = 2

function ItemLink:__init(itype,content)
    obj = oo.rawnew(self, {})
	if(itype==ItemLink.STRING) then
		dbg:assert(type(content) == "string", "Invalid content type")
	elseif(itype==ItemLink.OBJECT) then
		dbg:assert(type(content) == "table", "Invalid content type")
	else
		dbg:assert(false,"Invalid type in ItemLink constructor.")
	end
	 
	--dbg:assert(itype,"type argument is nil")
	--dbg:assert(content,"content argument is nil")
	obj._type = itype
	obj._content_ = content
    return obj
end

--- Retrieve the type of that object.
function ItemLink:getType()
    return self._type
end

--- Retrieve the content of that object.
function ItemLink:getContent()
	return self._content_
end

return ItemLink
