local Class = require("classBuilder"){name="ComboDefiniteObject",bases="combo.Vertex"};

local actionPostfix = "_action"

function Class:initialize(options)
	if type(options)=="string" then
		self._def = options:gsub(actionPostfix.."$","")
		self._isAction = (options:find(actionPostfix.."$")~=nil)
	elseif type(options)=="table" then
		self._def = options.def
		self._isAction = options.isAction
	end
	
	self:check(self._def,"Invalid definite object")
end

--a definite object with suffix _action is a special definite_object
--used to reflect a self or other agent action
--the following methods allows to check wether a definite_object
--is of action type and get the action name (without the suffix "_action")
function Class:isAction()
	return self._isAction
end

function Class:getActionName()
	if self._isAction then
		return self._def
	end
end

function Class.createAction(actionName)
	return Class{def=actionName,isAction=true}
end

return Class 
