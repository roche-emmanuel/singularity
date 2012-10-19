local Class = require("classBuilder"){name="EntryHolder",bases="gui.EventHandler"};

local Vector = require "std.Vector"
local Entry = require "gui.wx.Entry"

function Class:initialize(options)
	self._entries = Vector();
end

function Class:addEntry(options)
	self:check(options,"Invalid options table.")
	options.provider = options.provider or self:getDefaultProvider()

	if options.parent and type(options.parent)=="string" then
		local parent = self:getEntry(options.parent)
		self:check(parent,"Could not retrieve entry parent with name ",options.parent)
		options.parent = parent
	end
		
	local entry = Entry(options);
	self._entries:push_back(entry);
end

function Class:getEntry(name)
	for _, entry in self._entries:sequence() do
		if entry:getName() == name then
			return entry;
		end
	end
end

function Class:updateEntries(name)
	self:fireEvent("EntriesUpdating")
    for _,entry in self._entries:sequence() do
        entry:update(name)
    end	
	self:fireEvent("EntriesUpdated")
end

return Class
