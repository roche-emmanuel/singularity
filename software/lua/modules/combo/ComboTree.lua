local Class = require("classBuilder"){name="ComboTree",bases="std.Tree"};

local Tree = require "std.Tree"

local TypeNode = require "combo.TypeNode"

function Class:initialize(options)
	self._openSymbol = ""
	self._closeSymbol = ""
end

function Class:parse(str,sep)
	-- parse a string tree:
	Tree.parse(self,str,sep)
	
	-- traverse all the tree replacing the string by typenode objects:
	for it in self:sequence() do
		it._node.data = TypeNode(it._node.data)
	end
end

function Class:getArity()
    self:check(not self:empty(),"Empty type tree in getArity()")

    local it = self:begin();
	
    if ((#it):equals(TypeNode.LAMBDA_TYPE)) then
        local noc = it:number_of_children();
        self:check(noc > 0, "Lambda must not be childless");
        local last_child = it:last_child();
        if (noc == 1) then
            return 0;
        else
            local a = noc - 1;
            local last_arg = self:previous_sibling(last_child);
            return (#last_arg):equals(TypeNode.ARG_LIST_TYPE) and -a or a;
        end
    end
	
    return 0;
end


return Class 
