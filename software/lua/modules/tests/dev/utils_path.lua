local man = require("test.Manager")

man:addSuite("utils.path tests",function()
	
	local path = require "utils.path"
	
	Test("path.normalize",function()
		assert.equals(path.normalize("A\\B\\..\\C/./D//E/"),"A/C/D/E")
	end)
	
	Test("path.isDir",function()
		assert.True(path.isDir(root_path))
		assert.True(path.isDir(root_path.."/"))
		assert.False(path.isDir(root_path.."dummy"))
	end)	

	Test("path.isFile",function()
		assert.False(path.isFile(root_path))
		assert.False(path.isFile(root_path.."/"))
		assert.False(path.isFile(root_path.."dummy"))
		assert.True(path.isFile(root_path.."lua/modules/config.lua"))
	end)
	
	Test("path.isLink",function()
		assert.False(path.isLink(root_path))
		assert.False(path.isLink(root_path.."/"))
		assert.False(path.isLink(root_path.."dummy"))
		assert.False(path.isLink(root_path.."lua/modules/config.lua"))
	end)	

	Test("path.getSize",function()
		assert.equals(0,path.getSize(root_path))
		assert.gt(0,path.getSize(root_path.."lua/modules/config.lua"))
	end)	
	
end)
