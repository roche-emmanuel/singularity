local Class = require("classBuilder"){name="ComboTree",bases="std.Tree"};

local Tree = require "std.Tree"


function Class:initialize(options)
	self._openSymbol = ""
	self._closeSymbol = ""
end

function Class:getTypeTree(it)
	self:check(not self:empty(),"combo tree cannot be empty.")
	it = it or self:begin()
	
    local tmp = (#it):getTypeTree(); -- #it is a Vertex.
	self:check(not tmp:empty(),"tmp cannot be empty");

    if (it:isChildless()) then
        return tmp;
    else
        local head = tmp:begin();
        head = tmp:wrap(head, TypeNode.APPLICATION); --id::application_type
        for sib in it:sequence() do
			local arg_app = self:getTypeTree(sib);
            local arg_app_it = arg_app:begin();
            local arg_it = tmp:append_child(head);
            tmp:replace(arg_it, arg_app_it);
        end
        return tmp;
    end
end

local unknown_type_tree = TypeTree{root=TypeNode.UNKNOWN}

--that function uses a trace of procedure_calls already in progress
--in order to avoid infinite loop due to circularity references
function Class:inferArgsTree()
    self:check(not tr:empty(),"cannot infer arg types on an empty combo_tree");

	local arg_types = Vector()
		
	local a, itt;
	for lit in self:sequence{leaf=true} do
		a = #lit
        if a:isArgument() then
            itt = unknown_type_tree:getIntersection(infer_vertex_type(tr, lit, arg_types));
            set_arg_type(itt, a, arg_types);
        end
    end	
end

function Class:inferTypeTree()
    local tt = self:getTypeTree();
	
    type_tree_seq arg_types;
	
    infer_arg_type_tree(tr, arg_types);
    reduce_type_tree(tt, arg_types, tr);
    insert_arg_type_tree(arg_types, tt);
    return tt;
end

return Class 
