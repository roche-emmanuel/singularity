local Class = require("classBuilder"){name="ComboTree",bases="std.Tree"};

local Tree = require "std.Tree"
local TypeTree = require "combo.TypeTree"
local TN = require "combo.TypeNode"

local unknown_type_tree = TypeTree{TN.UNKNOWN}

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

--that function uses a trace of procedure_calls already in progress
--in order to avoid infinite loop due to circularity references
function Class:inferArgsTree()
    self:check(not tr:empty(),"cannot infer arg types on an empty combo_tree");

	local arg_types = Vector()
		
	local a, itt;
	for lit in self:sequence{leaf=true} do
		a = #lit
        if a:isArgument() then
            itt = unknown_type_tree:getIntersection(self:inferVertexType(lit, arg_types));
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

-- returns TypeTree
function Class:inferVertexType(it,atl)
    local it_parent = self:parent(it);
    local res = TypeTree{TN.UNKNOWN};
    --set output type
    if (self:isValid(it_parent)) then
        local si = self:sibling_index(it);
        local a = (#it_parent):getArity();
        if (a < 0 || (a > 0 && (arity_t)si < a))
            res = get_input_type_tree(*it_parent, tr.sibling_index(it));
        else return type_tree(id::ill_formed_type);
    end
	
    --set input types
    if (!it.is_childless()) {
        //wrap lambda over res
        type_tree_pre_it head = res.begin();
        res.wrap(head, id::lambda_type);
        for (sib_it sib = it.begin(); sib != it.end(); ++sib) {
            //if argument then uses atl to get the input type
            type_tree child_type;
            if (is_argument(*sib)) {
                child_type = get_arg_type(get_argument(*sib), atl);
            } else child_type = get_output_type_tree(*sib);
            type_tree_pre_it child_type_head = child_type.begin();
            res.insert_subtree(head, child_type_head);
        }
    }
    return res;
end

-- TODO: implement this in Tree.
function Class:sibling_index(it)

end

return Class 
