local Class = require("classBuilder"){name="ItemContainer",bases="gui.Container"};

-- By default a container will create its own table as data Holder 
-- if not provided another value in its constructor
function Class:initialize(options)
end

function Class:getNumItems()
	self:no_impl()
end

function Class:getItemID(index)
	self:no_impl()
end

function Class:getItemIDs()
	-- Should retrieve all the ids of the sub items when applicable.
	-- the id is always retrieved by a given key ("name" by default)
	self:no_impl()
end

function Class:getItem(id)
	self:no_impl()
end

function Class:getOrCreateItem(id)
	self:no_impl()
end


function Class:createItem(itemId)

end


return Class
