local Class = require("classBuilder"){name="DocGen",bases="base.Object"};

local File = require "docgen.File"
local Settings = require "docgen.Settings"
local Project = require "docgen.Project"
local Topics = require "docgen.Topics"
local Languages = require "docgen.Languages"
local ImageReferenceTable = require "docgen.ImageReferenceTable"

---  Compares two strings so that the result is good for proper sorting.  A proper sort orders the characters as
--   follows:
--
--   - End of string.
--   - Whitespace.  Line break-tab-space.
--   - Symbols, which is anything not included in the other entries.
--   - Numbers, 0-9.
--   - Letters, case insensitive except to break ties.
--
--   If you use cmp instead of this function, the result would go by ASCII/Unicode values which would place certain symbols
--   between letters and numbers instead of having them all grouped together.  Also, you would have to choose between case
--   sensitivity or complete case insensitivity, in which ties are broken arbitrarily.
--
--   Returns:
--
--   Like cmp, it returns zero if A and B are equal, a positive value if A is greater than B, and a negative value if A is less than B.
function Class:stringCompare(str1,str2)
	self:no_impl()
end

--- Compares two arrayrefs and shortens the first array to only contain shared entries.  Assumes all entries are strings.
--
--  Parameters:
--    sharedArrayRef - The arrayref that will be shortened to only contain common elements.
--    compareArrayRef - The arrayref to match.
function Class:shortenToMatchStrings(sharedSet, matchSet)
	self:no_impl()
end

--- Searches a string for a number of symbols to see which appears first.
--
--  Parameters:
--    string - The string to search.
--    symbols - An arrayref of symbols to look for.
--    index - The index to start at, if any.
--
--  Returns:
--    The array ( index, symbol ).
--
--    index - The index the first symbol appears at, or -1 if none appear.
--    symbol - The symbol that appeared, or undef if none.
function Class:findFirstSymbol(str, symbols, index)
	self:no_impl()
end

--- Main Entry point for documentation generation.
function Class:run()
	Settings:load()
	
	Project:loadConfigFileInfo()
	
	Topics:load()
	Languages:load()
	
	Project:migrateOldFiles()
	Project:loadSourceFileInfo()
	Project:loadImageFileInfo()
	
	ImageReferenceTable:register()
end

return Class;
