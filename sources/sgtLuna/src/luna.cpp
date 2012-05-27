
#include "luna/luna.h"

void luna_printStack(lua_State* L, bool compact)
{
	if(compact)
		printf("stack top:%d - ", lua_gettop(L)); 
	else
		printf("stack trace: top %d\n", lua_gettop(L)); 

	for(int ist=1; ist<=lua_gettop(L); ist++) {
		if(compact)
			printf("%d:%c",ist,luaL_typename(L,ist)[0]);
		else
			printf("%d:%s",ist,luaL_typename(L,ist));
		if(lua_isnumber(L,ist) ==1) {
			printf("=%f ",(float)lua_tonumber(L,ist));
		} else if(lua_isstring(L,ist) ==1){
			printf("=%s ",lua_tostring(L,ist));
		} else {
			printf(" ");
		}
		if( !compact)printf("\n");
	}
	printf("\n");
}
void luna_dostring(lua_State* L, const char* luacode)
{
	// luaL_dostring followed by pcall error checking 
	if (luaL_dostring(L, luacode)==1)
	{
		printf("Lua error: stack :\n");
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
const char LunaTraits< void >::moduleName[] = "luna";
const char* LunaTraits< void >::parents[] =  { 0 };
const int LunaTraits< void >::uniqueIDs[] = { 3625364 , 0 };

luna_RegType LunaTraits< void >::methods[] = {
    {0,0}
};

luna_RegEnumType LunaTraits< void >::enumValues[] = {
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

