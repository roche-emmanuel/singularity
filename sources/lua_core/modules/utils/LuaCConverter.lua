local Class = require("classBuilder"){name="LuaCConverter",bases="base.Object"};

local fs = require "base.FileSystem"

function Class:initialize(options)
	-- Retrieve all the lua files in the given source folder:
	local src_folders = {}
	self._data = {}
	self._modules = require("std.Vector")();
	
	self:append("#include <sgtCommon.h>\n")
	self:append("#include <lua/ModuleProvider.h>\n\n")
	
	-- add the default source folders:
	local folder = options and options.src_folder or fs:getRootPath(true).."../sources/lua_core/modules"
	table.insert(src_folders,folder)
	self._bindingFile = folder .. "/../src/bindings.cpp"
	
	self._packageName = options and options.package or "[no name]";
	
	local func = function(data)
		local modName = data.sub_path .. data.file
		modName = modName:sub(1,-5):gsub("/",".")
		
		--self:info("Found module: ", modName, " in file: ",data.fullpath)
		self:processFile(data.fullpath, modName)
	end
	
	for v, folder in pairs(src_folders) do
		self:info("Traversing folder: ", folder)
		fs:traverse{path=folder,func=func,pattern="%.lua$",recursive=true}
	end
	
	self:writeBindings()
end

function Class:append(str)
	table.insert(self._data,str)
end

function Class:processFile(file,modName)
	-- self:info("Processing module: ", modName, " in file: ",file)
	self:info("Processing module: ", modName)
	
	local func, msg = loadfile(file)
	self:check(func,"Invalid loadfile result: ",msg)
	
	local data = string.dump(func)
	
	self:append("\n")

	local index = 1
	local size = #data
	
	self:append(("static const unsigned char buf_%s[]={\n"):format(modName:gsub("[%.%-]","_")))
	for i=1,size do	
		local c= data:sub(i,i)
		self:append(string.format( '%3d,', string.byte(c) ))

		if math.mod(i,20)==0 then
			self:append("\n")
		end
    end
	
	self:append("\n};\n")
	self._modules:push_back(modName)
end

function Class:writeBindings()
	local filename = self._bindingFile
	local file = io.open(filename,"w")
	
	file:write(table.concat(self._data))
	
	file:write("\n")
	-- now register a module loader:
	local str1 = [[class Loader {
public:
	Loader() {
		logDEBUG3("Now loading all modules for package ']] .. self._packageName .. [['");

]]
		
	local str2 = [[
	}
	
	~Loader() {
		logDEBUG3("Unloading module loader for package ']] .. self._packageName .. [['");
	}
};
	
static Loader loader_object;

	]];
	
	file:write(str1)
	for _,v in self._modules:sequence() do
		local name = "buf_" .. v:gsub("[%.%-]","_")
		file:write('\t\tsgtModuleProvider::registerModule("'.. v ..'",sgt::String((const char*)'.. name ..',sizeof('..name..')));\n')
	end
	file:write(str2)
	
	file:close()
end

return Class
