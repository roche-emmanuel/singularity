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
	
	Test("path.exists",function()
		assert.True(path.exists(root_path))
		assert.True(path.exists(root_path.."lua/modules/config.lua"))
		assert.False(path.exists(root_path.."dummy"))
	end)
	
	Test("path.getAccessTime",function()
		assert.gt(0,path.getAccessTime(root_path))
		assert.gt(0,path.getAccessTime(root_path.."lua/modules/config.lua"))
		assert.Nil(path.getAccessTime(root_path.."dummy"))
	end)
	
	Test("path.getModificationTime",function()
		assert.gt(0,path.getModificationTime(root_path))
		assert.gt(0,path.getModificationTime(root_path.."lua/modules/config.lua"))
		assert.Nil(path.getModificationTime(root_path.."dummy"))
	end)
	
	Test("path.getChangeTime",function()
		assert.gt(0,path.getChangeTime(root_path))
		assert.gt(0,path.getChangeTime(root_path.."lua/modules/config.lua"))
		assert.Nil(path.getChangeTime(root_path.."dummy"))
	end)
	
	Test("path.splitPath",function()
		local folder,file = path.splitPath(root_path.."lua/modules/config.lua")
		assert.equals(folder,root_path.."lua/modules")
		assert.equals(file,"config.lua")
		
		local folder,file = path.splitPath(root_path.."lua/modules/")
		assert.equals(folder,root_path.."lua")
		assert.equals(file,"modules")
	end)

	Test("path.absPath",function()
		assert.equals(path.absPath("lua/modules"),root_path.."lua/modules")
		assert.equals(path.absPath("lua/modules/"),root_path.."lua/modules")
		assert.equals(path.absPath("lua/modules/","C:"),"C:/lua/modules")
	end)
	
	Test("path.isAbs",function()
		assert.True(path.isAbs(root_path))
		assert.False(path.isAbs("lua/modules"))
		assert.False(path.isAbs("../lua/modules"))
		assert.False(path.isAbs("./lua/modules"))
		assert.True(path.isAbs("/lua/modules"))		
	end)
	
	Test("path.join",function()
		assert.equals(path.join(root_path,"lua/modules"),root_path.."lua/modules")
		assert.equals(path.join("lua","modules"),"lua/modules")
		assert.equals(path.join("lua","/modules"),"/modules")
		assert.equals(path.join("lua","/modules","path"),"/modules/path")
		assert.equals(path.join("C:","modules","path"),"C:/modules/path")
		assert.equals(path.join("C:","modules","path\\lua"),"C:/modules/path/lua")
	end)
	
end)
