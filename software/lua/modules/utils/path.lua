--[[
Class: utils.path

Path manipulation and file queries package. This is modelled after Python's os.path library (10.1); see @{04-paths.md|the Guide}.
]]

local lfs = require "lfs"
local assert = require "utils.assert"
local base = require "utils.base"

local Class = {}

local sep = "/"

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

--[[
Function: exists

CHeck if the given path exists

Parameters:
	path - The path to check
  
Returns:
	True if the given path exists, false otherwise
]]
function Class.exists(path)
	assert.String(path)
	
    return attrib(path,'mode') ~= nil
end

--[[
Function: getAccessTime

Return the time of last access as the number of seconds since the epoch.

Parameters:
	path - The file to retrieve the access time from
  
Returns:
	the last access as the number of seconds since the epoch or nil if not applicable.
]]
function Class.getAccessTime(path)
	assert.String(path)
    return attrib(path,'access')
end

--[[
Function: getModificationTime

Return the time of last modification as the number of seconds since the epoch.

Parameters:
	path - The file to retrieve the modification time from
  
Returns:
	the last modification as the number of seconds since the epoch or nil if not applicable.
]]
function Class.getModificationTime(path)
	assert.String(path)
    return attrib(path,'modification')
end

--[[
Function: getChangeTime

Return the system change time as the number of seconds since the epoch.

Parameters:
	path - The file to retrieve the change time from
  
Returns:
	The change as the number of seconds since the epoch or nil if not applicable.
]]
function Class.getChangeTime(path)
	assert.String(path)
    return attrib(path,'change')
end


local function at(s,i)
    return s:sub(i,i)
end

--[[
Function: splitPath

Given a path, return the directory part and a file part.
If there's no directory part, the first value will be empty. Note that the
path format will be normalized with the function call and it the path represents
a folder, such as A/B/C/D/ then the last folder is considered as the file in that
case and the returned values are: A/B/C and D.

Parameters:
	path - The path to split
  
Returns:
	The directory part and the file part as two values.
]]
function Class.splitPath(path)
    assert.String(path)
	path = Class.normalize(path)
	
    local i = #path
    local ch = at(path,i)
    while i > 0 and ch ~= sep do
        i = i - 1
        ch = at(path,i)
    end
	
    if i == 0 then
        return '',path
    else
        return path:sub(1,i-1), path:sub(i+1)
    end
end

--[[
Function: funcName

Check if a given path is an absolute path or not.

Parameters:
	path - The path to check.
  
Returns:
	True if the path is absolute, false otherwise.
]]
function Class.isAbs(path)
    assert.String(path)
	path = Class.normalize(path)
    if base.is_windows then
        return at(path,1) == '/' or at(path,1)=='\\' or at(path,2)==':'
    else
        return at(path,1) == '/'
    end
end

--[[
Function: join

return the path resulting from combining the individual paths.
if the second (or later) path is absolute, we return the last absolute path (joined with any non-absolute paths following). Empty elements (except the last) will be ignored.

Parameters:
	p1 - A file path
	p2 - A file path
	... - (optional) more file paths
  
Returns:
	The concatenated path.
]]
function Class.join(p1,p2,...)
    assert.String(p1)
    assert.String(p2)
    if select('#',...) > 0 then
        local p = Class.join(p1,p2)
        local args = {...}
        for i = 1,#args do
            assert.String(args[i])
            p = Class.join(p,args[i])
        end
        return p
    end
	-- p1 = Class.normalize(p1)
	-- p2 = Class.normalize(p2)
	
    if Class.isAbs(p2) then 
		return Class.normalize(p2) 	
	end
	
    return Class.normalize(p1..sep..p2)
end

--[[
Function: absPath

Convert the input path into an absolute path

Parameters:
	path - {string} The path to convert
	pwd - (optional) {string} The folder to use as a starting point.
  
Returns:
	The absolute path.
]]
function Class.absPath(path,pwd)
    assert.String(path)
	if pwd then assert.String(pwd) end
    path = Class.normalize(path)
	pwd = pwd or root_path
	
    if not Class.isAbs(path) then
        path = Class.join(pwd,path)
    end
	
    return path
end

return Class;
