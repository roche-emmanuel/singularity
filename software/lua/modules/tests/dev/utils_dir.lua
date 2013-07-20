local man = require("test.Manager")

man:addSuite("utils.dir tests",function()
	
	local dir = require "utils.dir"
	local path = require "utils.path"
	
	Test("dir.fnmatch",function()
		assert.True(dir.fnmatch(root_path.."lua/modules/config.lua",root_path.."*.lua"))
		assert.False(dir.fnmatch(root_path.."lua/modules/config.lua",root_path.."*.obj"))
	end)
	
	Test("dir.filter",function()
		-- prepare a list of files:
		local list = {
			"lua/modules/file1.lua",
			"lua/modules/file2.lua",
			"lua/modules/file3.obj",
			"lua/modules/file4.lua",
			"lua/modules/file5.obj",
		}
		
		local res = dir.filter(list,"*.lua")
		
		assert.equals(3,res:size())
	end)
	
	Test("dir.getFiles",function()
		local files = dir.getFiles(root_path.."lua/modules/utils","*.lua")
		assert.False(files:empty(),"No file found.")
		files:foreach(function(f)
			assert.isFile(f)
			assert.equals(path.extension(f),".lua")
		end)		

		local files2 = dir.getFiles(root_path.."lua/modules/utils")
		assert.gte(files2:size(),files:size())
	end)
	
	Test("dir.getDirectories",function()
		assert.True(false)
	end)
	
	Test("dir.copyFile",function()
		assert.True(false)
	end)
	
	Test("dir.moveFile",function()
		assert.True(false)
	end)
	
end)
