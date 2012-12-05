local Class = require("classBuilder"){name="FunctionWriter",bases="io.BufferWriter"};

local rm = require "bindings.ReflectionManager"
local tc = require "bindings.TypeConverter"
local tm = require "bindings.TypeManager"

local injector = require "bindings.CodeInjector"
local im = require "bindings.IgnoreManager"
local snippets = require "bindings.SnippetManager"
local utils = require "utils"

local Set = require "std.Set"

function Class:initialize()
	self._typeChecker = require("bindings.TypeCheckerBase")()
	self._writeOverloadBind = require("bindings.OverloadBinderBase")()
	self._writeBind = require("bindings.BinderBase")()
end

function Class:writeForAll(list,handler,finalHandler)
	local overloads_handled = Set();
	
	for _,v in list:sequence() do
		if not v:isExternal() then
			local overloaded, overloads = v:isOverloaded()
			local name = (v:isConstructor() and "ctor") or v:getLuaName()
	
			if overloaded then
				if not overloads_handled:contains(name) then
					-- iterate on the overloads found:
					for k, ov in overloads:sequence() do
						handler:handle(self,ov,name.."_overload_"..k,true) -- force complete check.
					end
					if finalHandler then
						finalHandler:handle(self,v,overloads)
					end
					overloads_handled:push_back(name)
				end
			else
				handler:handle(self,v,name)
			end
		end
	end
end

function Class:retrieveArguments(func)
	-- retrieve all the arguments:
	local offset = (func:isGlobal() or func:isConstructor() or func:isStatic() or func:isExtension()) and 0 or 1
	
	local defaultOffset = func:getDefaultOffset()
	
	local args = {}
	
	if(defaultOffset) then
		self:writeLine("int luatop = lua_gettop(L);")
		self:newLine()		
	end
	
	for k,v in func:getParameters():sequence() do
		local pt = v:getType()
		
		pt:parse() -- ensure the type fields are value.
		
		local bname = pt:getBaseName()
		local typename = pt:getName()
		
		local converter = tc:getFromLuaConverter(typename) or tc:getFromLuaConverter(bname)
		
		local argname = v:getName()
		if not argname or argname == "" then
			argname = "_arg"..k
		end
		
		if typename=="unsigned" and argname=="int" then
			typename ="unsigned int"
			bname = "unsigned int"
			argname = "_arg"..k
		end
		
		local isPointer = false
		local isConst = pt:isConst()
		
		local index = k+offset
		local defStrPre = defaultOffset and ((k-1)<defaultOffset and "" or "luatop>"..(index-1).." ? ") or ""
		local defStrAnd = defaultOffset and ((k-1)<defaultOffset and "" or "luatop>"..(index-1).." && ") or ""
		local constPre = isConst and "const " or "";

		local defStrPost = defaultOffset and ((k-1)<defaultOffset and "" or " : "..(pt:isClass() and pt:isPointer() and "("..constPre..bname.."*)" or "").. v:getDefaultValue():getName()) or ""
		local defStrPostNull = defaultOffset and ((k-1)<defaultOffset and "" or " : NULL") or ""
		
		if converter then
			isPointer = converter(self,index,pt,argname)
		elseif v:isLuaState() then
			isPointer = true;
			argname = "L";
		elseif pt:isLuaFunction() or pt:isLuaTable() or pt:isLuaAny() then
			-- check if we have a lua function or table reference.
			isPointer = true;
			argname = "NULL"
		elseif pt:isInteger() then
			-- check if we have a number:int _arg1=(int)lua_tonumber(L,2);
			self:writeSubLine("${3} ${1}=${4}(${3})lua_tointeger(L,${2})${5};",argname,index,bname,defStrPre,defStrPost)
		elseif pt:isNumber() then
			-- check if we have a number:int _arg1=(int)lua_tonumber(L,2);
			self:writeSubLine("${3} ${1}=${4}(${3})lua_tonumber(L,${2})${5};",argname,index,bname,defStrPre,defStrPost)
		elseif pt:isBoolean() then
			self:writeSubLine("${3} ${1}=${4}(${3})(lua_toboolean(L,${2})==1)${5};",argname,index,bname,defStrPre,defStrPost)
		elseif pt:isString() then
			self:writeSubLine("${3} ${1}=${4}(${3})lua_tostring(L,${2})${5};",argname,index,typename,defStrPre,defStrPost)
			isPointer=true
		elseif pt:isVoid() and pt:isPointer() then
			-- We may consider void as a base class:
			--local bhash = utils.getHash("void")
			self:writeSubLine("void* ${1}=${3}(Luna< void >::check(L,${2}))${4};",argname,index,defStrPre,defStrPost)
			isPointer=true			
		elseif pt:isClass() then
			-- get the class absolute parent hash:
			local fbname = tm:getBaseTypeMapping(pt:getAbsoluteBaseFullName())
			local isUnsafe = im:ignore(fbname,"converter")
			local casttype = isUnsafe and "static" or "dynamic"
			
			if pt:isPointer() then
				-- we just retrieve the pointer here:
				if bname == fbname then
					self:writeSubLine("${7}${3}* ${1}=${5}(Luna< ${4} >::check(L,${2}))${6};",argname,index,bname,fbname,defStrPre,defStrPost,constPre)				
				else
					-- need to dynamic cast:
					if isUnsafe then
						self:writeSubLine("${7}${3}* ${1}=${5}static_cast< ${3}* >(Luna< void >::rawPointer(L,${2}))${6};",argname,index,bname,fbname,defStrPre,defStrPost,constPre,casttype)					
					else
						self:writeSubLine("${7}${3}* ${1}=${5}${8}_cast< ${3}* >(Luna< ${4} >::check(L,${2}))${6};",argname,index,bname,fbname,defStrPre,defStrPost,constPre,casttype)
					end
				end
				
				isPointer=true			
			else
				-- we retrieve the pointer but then try to dereference if if valid, and output an error otherwise:
				if bname == fbname then
					self:writeSubLine("${7}${3}* ${1}_ptr=${5}(Luna< ${4} >::check(L,${2}))${6};",argname,index,bname,fbname,defStrPre,defStrPostNull,constPre)
				
				else
					if isUnsafe then
						self:writeSubLine("${7}${3}* ${1}_ptr=${5}static_cast< ${3}* >(Luna< void >::rawPointer(L,${2}))${6};",argname,index,bname,fbname,defStrPre,defStrPostNull,constPre,casttype)
					else
						self:writeSubLine("${7}${3}* ${1}_ptr=${5}${8}_cast< ${3}* >(Luna< ${4} >::check(L,${2}))${6};",argname,index,bname,fbname,defStrPre,defStrPostNull,constPre,casttype)
					end
				end
				self:writeSubLine("if( ${2}!${1}_ptr ) {",argname,defStrAnd)
				self:pushIndent()
				self:writeSubLine('luaL_error(L, "Dereferencing NULL pointer for arg ${1} in ${2} function");',argname,func:getFullName())
				self:popIndent()
				self:writeLine("}")
				--self:writeSubLine("${2}& ${1}=${3}*${1}_ptr${4};",argname,bname,defStrPre,defStrPost)
				self:writeSubLine("${2} ${1}=${3}*${1}_ptr${4};",argname,typename,defStrPre,defStrPost,constPre)
			end
		else
			self:writeLine("////////////////////////////////////////////////////////////////////")
			self:writeLine("// ERROR: Cannot decide the argument type for '".. typename .. "' baseTypeName is '".. pt:getBaseName(true).."'")
			self:writeLine("////////////////////////////////////////////////////////////////////")
			self:error("Unsupported type : ".. typename .." in retrieveArguments() for function ".. func:getFullName()) --..". Type object:",pt)
		end
		
		-- for each argument we have to check what is the except type modifier:
		-- "regular" arguments are on the stack by default
		-- "class" arguments are on the heap.
		-- we check the isPointer variable for precise results.
		if isPointer and not pt:isPointer() then
			argname = "*"..argname
		elseif not isPointer and pt:isPointer() then
			argname = "&"..argname
		end
		
		if argname == "*NULL" or argname == "&NULL" then
			self:error("Invalid dereference of automatic NULL pointer in retrieveArguments() for function ".. func:getFullName()) --..". Type object:",pt)			
		end
		
		table.insert(args,argname)
	end
	self:newLine()
	
	return table.concat(args,", ")
end

function Class:writeFunctionCall(cname,func,args)
	-- retrieve the object:
	local rt = func:getReturnType()
	
	if not rt then
		self:writeLine("////////////////////////////////////////////////////////////////////")
		self:writeLine("// ERROR: Invalid return type object for function '" .. func:getFullName() .. "'")
		self:writeLine("////////////////////////////////////////////////////////////////////")
		self:writeLine("return 0;");
		self:warn("Invalid return type object for function '" .. func:getFullName() .. "'")
		return
	end
	
	rt:parse() -- ensure the type fields are value.

	local rname = rt:getBaseName()
	local converter = tc:getToLuaConverter(rt:getName()) or tc:getToLuaConverter(rname)
	local argname = "lret"
	
	local useself = not (func:isGlobal() or func:isStatic() or func:isExtension())
	if useself then
		local bname = nil
		if func:getParent():isExternal() then
			-- retrieve the base name from the type manager:
			bname = tm:getAbsoluteBaseName(func:getParent())
			self:info("Retrieving absolute base name=", bname," for external=",func:getParent():getTypeName())
		else
			bname = func:getParent():getFirstAbsoluteBase():getFullName();
		end
		
		bname = tm:getBaseTypeMapping(bname)
		local isUnsafe = im:ignore(bname,"converter")
		local casttype = isUnsafe and "static" or "dynamic"
		
		-- the function is a class method, retrieve the object:
		if cname == bname then
			self:writeSubLine("${1}* self=(Luna< ${2} >::check(L,1));",cname, bname);
		else
			-- need to dynamic cast:
			if isUnsafe then
				self:writeSubLine("${1}* self=static_cast< ${1}* >(Luna< void >::rawPointer(L,1));",cname);			
			else
				self:writeSubLine("${1}* self=${3}_cast< ${1}* >(Luna< ${2} >::check(L,1));",cname, bname, casttype);
			end
		end
		self:writeLine("if(!self) {")
		self:pushIndent()
		self:writeSubLine('luna_printStack(L);')
		self:writeSubLine('luaL_error(L, "Invalid object in function call ${1}");',func:getPrototype(false,true,true))
		self:popIndent()
		self:writeLine("}")
	end
	
	local force_gc = false;
	local prefix = (useself and "self->") or ((func:isGlobal() or func:isExtension()) and "") or (func:getParent():getFullName().."::")
	
	if rt:isInteger() and func:hasLuaState() then
		-- assume this function is just returning its number of results as a regular lua cfunction;
		self:writeSubLine("return ${3}${1}(${2});",func:getName(),args,prefix);
		-- No need to proceed in that case:
		return;
	elseif rt:isVoid() and not rt:isPointer() then
		self:writeSubLine("${3}${1}(${2});",func:getName(),args,prefix);
	else
		-- in case we return an object this object can only be pushed on the lua stack if we use a pointer to it.
		-- we cannot use a pointer to temporary memory so if the result is on the stack we need to create
		-- the corresponding heap ressource and use a copy constructor.
		-- if there is a converter, it is responsible for performing the proper convertion.
		if not rt:isPointer() and rt:isClass() and not converter then
			if rt:isReference() then
				self:writeSubLine("const ${1}* ${4} = &${5}${2}(${3});",rt:getBaseName(),func:getName(),args,argname,prefix);		
			else
				self:writeSubLine("${1} stack_${4} = ${5}${2}(${3});",rt:getName(),func:getName(),args,argname,prefix);
				self:writeSubLine("${1}* ${2} = new ${1}(stack_${2});",rt:getName(),argname);
				force_gc = true
			end
		else
			self:writeSubLine("${1} ${4} = ${5}${2}(${3});",rt:getName(),func:getName(),args,argname,prefix);
		end
	end
	
	local result_count = 1
	
	local deref = rt:isPointer() and "*" or ""
	
	if converter then
		converter(self,rt,argname)
	elseif rt:isNumber() then
		self:writeSubLine("lua_pushnumber(L,${2}${1});",argname,deref)
	elseif rt:isBoolean() then
		self:writeSubLine("lua_pushboolean(L,${2}${1}?1:0);",argname,deref)
	elseif rt:isString() then
		self:writeSubLine("lua_pushstring(L,${1});",argname)
	elseif rt:isVoid() then
		if rt:isPointer() then
			-- We may consider void as a base class:
			--self:writeSubLine('Luna< ${1} >::push(L,${2},false,"${3}");',"void",argname,"void")
			self:writeSubLine("if(!${1}) return 0; // Do not write NULL pointers.",argname)
			self:newLine()
			self:writeSubLine('Luna< ${1} >::push(L,${2},false);',"void",argname)
		else
			result_count = 0
		end			
	elseif rt:isClass() then
		-- get the class absolute parent hash:
		self:writeSubLine("if(!${1}) return 0; // Do not write NULL pointers.",argname)
		self:newLine()
		
		self:writeSubLine('Luna< ${1} >::push(L,${2},${3});',rname,argname,force_gc and "true" or "false")			
	else
		self:writeLine("////////////////////////////////////////////////////////////////////")
		self:writeLine("// ERROR: Cannot decide the argument type for '".. rt:getName() .. "'")
		self:writeLine("////////////////////////////////////////////////////////////////////")
		self:error("Unsupported type : ".. rt:getName().. " in functionCall for function ".. func:getFullName())
	end	
	self:newLine()
	
	-- now write the number of results:
	self:writeSubLine("return ${1};",result_count);
end

return Class