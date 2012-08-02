
#include "sgtCommon.h"
#include "luna/luna.h"

LunaConverterMapMap g_converters;

typedef std::map<long,std::string> TypeMap;
TypeMap g_typenames;

void luna_setTypeName(long hash,const std::string& className) {
	TypeMap::iterator it = g_typenames.find(hash);
	if(it!=g_typenames.end()) {
		trWARN("Luna","Overriding typename " << g_typenames[hash] << " with " << className << " under hash key " << hash);
	}
	g_typenames[hash] = className;
}

std::string luna_getTypeName(long hash) {
	TypeMap::iterator it = g_typenames.find(hash);
	if(it==g_typenames.end()) {
		trWARN("Luna","Could not find any typename corresponding to hash " << hash);
		return "";
	}
	return it->second;
}

void luna_printStack(lua_State* L, bool compact)
{
	std::ostringstream os;


	os << "stack trace: top "<< lua_gettop(L) <<"\n";

	for(int ist=1; ist<=lua_gettop(L); ist++) {
		
		int lt = lua_type(L,ist);
		
		os << " " << ist <<": ";

		if(lt == LUA_TNIL) {
			os << "[nil]";
		}
		else if(lt == LUA_TNUMBER) {
			os << "[number] = \"" << lua_tonumber(L,ist) << "\"";
		}
		else if(lt == LUA_TBOOLEAN) {
			os << "[bool] = \"" << (lua_toboolean(L,ist)==1?"true":"false") << "\"";
		}
		else if(lt == LUA_TSTRING) {
			os << "[string] = \"" << lua_tostring(L,ist) << "\"";
		}
		else if(lt == LUA_TFUNCTION) {
			os << "[function] = " << lua_topointer(L,ist);
		}
		else if(lt == LUA_TTABLE) {
			os << "[table] = " << lua_topointer(L,ist);
		}
		else if(lt == LUA_TTHREAD) {
			os << "[thread] = " << lua_topointer(L,ist);
		}
		else if(lt == LUA_TLIGHTUSERDATA) {
			os << "[lightuserdata] = " << lua_topointer(L,ist);
		}
		else if(lt == LUA_TUSERDATA) {
			// check if this is a luna object:
			Luna<void>::userdataType* ud=static_cast< Luna<void>::userdataType*>(lua_touserdata(L,ist));
			if(!ud) {
				os << "[userdata] = " << "NULL";
			}
			else {
				os << "[object] ptr=" << (const void*)(ud->pT) <<", hash=" <<ud->hash << " (="<< luna_getTypeName(ud->hash) << "), ids=[";
				int* ptr = ud->uniqueIDs;
				while(*ptr!=0) {
					int hash = *ptr++;
					os << hash << " (= " << luna_getTypeName(hash) <<")"<<",";
				}
				os << "], gc=" << (ud->gc ? "true":"false");
			}
		}
		os << "\n";
	}
	
	trDEBUG("Luna",os.str().c_str());
}

void luna_dostring(lua_State* L, const char* luacode)
{
	// luaL_dostring followed by pcall error checking 
	if (luaL_dostring(L, luacode)==1)
	{
		trERROR("Luna","Lua error in script:\n\n" << luacode <<"\n\nstack :");
		luna_printStack(L,false);
	}
}
lunaStack::~lunaStack()
{
}


/// Implementation of void type:
void* LunaTraits< void >::_bind_ctor(lua_State *L) {
	return NULL;
}

void LunaTraits< void >::_bind_dtor(void* obj) {
	// no op
}

const char LunaTraits< void >::className[] = "void";
const char LunaTraits< void >::fullName[] = "void";
const char LunaTraits< void >::moduleName[] = "luna";
const char* LunaTraits< void >::parents[] =  { 0 };
const int LunaTraits< void >::hash = 3625364;
const int LunaTraits< void >::uniqueIDs[] = { 3625364 , 0 };

luna_RegType LunaTraits< void >::methods[] = {
    {0,0}
};

luna_RegEnumType LunaTraits< void >::enumValues[] = {
	{0,0}
};

luna_ConverterType LunaTraits< void >::converters[] = {
	{0,0}
};

void luna_copyParents(lua_State* L, const char* modName) {
	std::ostringstream os;
	os << "__luna.copyAllParents(" << modName << ");";
	luna_dostring(L,os.str().c_str());
}

void luna_open(lua_State* L) {
    // Load the luna table here:
	luna_dostring(L,"__luna= __luna or {};\n"
			"__luna.copyParentMethods = __luna.copyParentMethods or function(class,p)\n"
			"  --print('Copying parent methods from ' .. p .. ' for class '.. class._CLASSNAME_);\n"
			"  local parent = _G;\n"
			"  local ns = '_G';\n"
			"  for pname in string.gmatch(p, '(%w+)%.') do\n"
			"    ns = ns .. '.' .. pname;\n"
			"    parent = parent[pname]\n"
			"    if not parent then\n"
			"      error('Cannot find the namespace ' .. ns .. '. Please register it before loading ' .. class._CLASSNAME_);\n"
			"    end\n"
			"  end\n"
			"  for pname in string.gmatch(p, '%.(%w+)$') do\n"
			"    parent = parent[pname]\n"
			"  end\n"
			"  if not parent then\n"
			"    error('Cannot find parent class: ' .. p .. '. Please register this class before loading ' .. class._CLASSNAME_);\n"
			"  end\n"
			"  for k,v in pairs(parent) do\n"
			"    if k~='__index' and k~='__newindex' and class[k]==nil then\n"
			"      class[k]=v\n"
			"    end\n"
			"  end\n"
			"  \n"
			"  -- iterate on the parent's of the parent:\n"
			"  for k,v in pairs(parent._PARENTS_) do\n"
			"    __luna.copyParentMethods(class,v)\n"
			"  end\n"
			"end\n"
			"\n"
			"__luna.copyAllParents = __luna.copyAllParents or function(mod)\n"
			"  for k,v in pairs(mod) do\n"
			"    -- check if the object is a luna class:\n"
			"    if( type(v)=='table' and v._CLASSNAME_ and v._PARENTS_) then\n"
			"      for _,p in pairs(v._PARENTS_) do\n"
			"        __luna.copyParentMethods(v,p);\n"
			"      end\n"
			"    end\n"
			"  end\n"
			"end\n"
			"\n"
	);
}

LunaConverterMap& luna_getConverterMap(std::string baseName) {
	LunaConverterMapMap::iterator it = g_converters.find(baseName);
	if(it==g_converters.end()) {
		// Add the converter map:
		g_converters[baseName] = LunaConverterMap();
		return g_converters[baseName];
	}

	return it->second;
}

int luna_dynamicCast(lua_State* L, std::string baseName, std::string derivedName) {
	LunaConverterMap& converters = luna_getConverterMap(baseName);

	LunaConverterMap::iterator it = converters.find(derivedName);
	if(it== converters.end()) {
		trERROR("Luna","No converter from " << baseName << " to " << derivedName);
		return 0;
	}

	return it->second(L); // apply the conversion.
}

int luna_dynamicCast(lua_State* L, LunaConverterMap& converters, std::string baseName, std::string derivedName) {
	LunaConverterMap::iterator it = converters.find(derivedName);
	if(it== converters.end()) {
		trERROR("Luna","No converter from " << baseName << " to " << derivedName);
		return 0;
	}

	return it->second(L); // apply the conversion.
}

