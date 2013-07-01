--[[
Class: utils.path

Path manipulation and file queries package. This is modelled after Python's os.path library (10.1); see @{04-paths.md|the Guide}.
]]

local lfs = require "lfs"
local assert = require "utils.assert"

local Class = {}

local attrib = function(file,aname)
	file = Class.normalize(file)
	return lfs.attributes(file,aname)
end

local link_attrib = function(file,aname)
	file = Class.normalize(file)
	return lfs.symlinkattributes(file,aname)
end

-- local attrib = lfs.attributes
-- local link_attrib = lfs.symlinkattributes

-- helper attrib method to deal with errors.
-- local attrib_safe = function(file, aname)
	-- local res, msg = attrib(file,aname)
	-- return assert.notNil(res,msg)
-- end

-- helper link_attrib method to deal with errors.
-- local link_attrib_safe = function(file,aname)
	-- local res, msg = link_attrib(file,aname)
	-- return assert.notNil(res,msg)
-- end




--[[
Function: normalize

Normalize the given path.
This will ensure that paths such as: A//B, A/./B, A\B\, and A/foo/../B all become A/B.
Note that this method is also convert the windows separator to the normalized unix separator
The path can then be converted back to windows format.

Parameters:
	path - {string} The path to normalize.
  
Returns:
	The normalized path.
]]
function Class.normalize(path)
	assert.String(path)
	path = path:gsub("\\","/")
			   :gsub("//","/")
			   :gsub("/[^/]+/%.%.","") -- now remove the elements of type A/..
			   :gsub("/%./","/")
			   :gsub("/$","")
	return path
end


--[[
Function: isDir

Check if a given path is a directory

Parameters:
	path - {string} The path to check
  
Returns:
	True is the given path is a folder, false otherwise.
]]
function Class.isDir(path)
	if not type("path")=="string" then
		return false; -- this is not a directory.
	end

    return attrib(path,'mode') == 'directory'
end

--[[
Function: isFile

Check if a given path is a valid file:close

Parameters:
	path - {string} The path to check
  
Returns:
	True is the given path is a file, false otherwise.
]]
function Class.isFile(path)
	if not type("path")=="string" then
		return false; -- this is not a directory.
	end

    return attrib(path,'mode') == 'file'
end

--[[
Function: isLink

Check if the given path is a symbolic link

Parameters:
	path - {string} The path to check
  
Returns:
	True is the given path is a symbolic link, false otherwise.
]]

function Class.isLink(path)
	if not type("path")=="string" then
		return false; -- this is not a directory.
	end
	
	return link_attrib(path,'mode')=='link'
end

--[[
Function: getSize

Retrieve the size of a given file. The size is returned in bytes.

Parameters:
	path - {string} The path to check
  
Returns:
	The size of the file, or nil not applicable.
]]
function Class.getSize(path)
	assert.String(path)
	
    return attrib(path,'size')
end

return Class;
