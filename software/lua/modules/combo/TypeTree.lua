local Class = require("classBuilder"){name="ComboTypeTree",bases="std.Tree"};

local Tree = require "std.Tree"
local Set = require "std.Set"

local TN = require "combo.TypeNode"

function Class:initialize(options)
	self._openSymbol = ""
	self._closeSymbol = ""
end

function Class:getArity()
    self:check(not self:empty(),"Empty type tree in getArity()")

    local it = self:begin();
	
    if ((#it) == TN.LAMBDA) then
        local noc = it:number_of_children();
        self:check(noc > 0, "Lambda must not be childless");
        local last_child = it:last_child();
        if (noc == 1) then
            return 0;
        else
            local a = noc - 1;
            local last_arg = self:previous_sibling(last_child);
            return (#last_arg) == TN.ARG_LIST and -a or a;
        end
    end
	
    return 0;
end

function Class:parse(str,sep)
	-- parse a string tree:
	Tree.parse(self,str,sep)
	
	-- traverse all the tree replacing the string by TN objects:
	for it in self:sequence() do
		it._node.data = TN.fromString(it._node.data)
		self:check(it._node.data,"Invalid TN object")
	end
end

local sub_sortfn = function(it1,it2)
	if (#it1<#it2) then
		return 1;
	elseif (#it2<#it1) then
		return -1;
	end
	
	local sib1=it1:begin();
	local sib2=it2:begin();
	local res;
	
	while (true) do
		if (not sib1:valid()) then
			return (not sib2:valid() and 0) or 1
		elseif (not sib2:valid()) then
			return -1;
		end
		sib1:inc()
		sib2:inc()
		res=sub_sortfn(sib1,sib2);
		if (res~=0) then
			return res;
		end
	end
end

local sortfn = function(tr1,tr2)
	local s1 = tr1:size()
	local s2 = tr2:size()
	if s1==s2 then
		return sub_sortfn(tr1:begin(),tr2:begin())>0
	else
		return s1<s2
	end
end

function Class:getIntersection(tt2,it1,it2)
	self:check(tr2,"Invalid tr2 argument.")
	
	it1 = it1 or self:begin()
	it2 = it2 or tt2:begin()
	
    --check whether one inherit from the other
    if (self:inherits(tt2, it1, it2)) then
        return TypeTree(it1);
    elseif (tt2:inherits(self, it2, it1)) then
        return TypeTree(it2);
    
	--check if tt1 and tt2 are unions, if so the intersection of the unions
    --is the union of the interections
    elseif ( #it1 == TN.UNION and #it2 == TN.UNION) then
        local union_of_inter = Set();
        for sib1 in it1:sequence() do
			for sib2 in it2:sequence() do
                local inter_tt = self:getIntersection(tt2,sib1:asPreOrder(),sib2:asPreOrder())
                if (inter_tt:isWellFormed()) then
                    union_of_inter:ordered_insert(inter_tt,sortfn);
				end
            end
        end
		
        if (union_of_inter:empty()) then
            return TypeTree{TN.ILL_FORMED};
        elseif (union_of_inter:size() == 1) then
            return union_of_inter[1];
        else
            local tmp = TypeTree();
            tmp:set_head(TN.UNION);
            local head = tmp:begin();
            for k,its in union_of_inter:sequence() do
                tmp:replace(tmp:append_child(head), its:begin());
            end
            return tmp;
        end
 
    --if both are lambda, then calculate the intersection of
    --their outputs and the union of there inputs
    elseif (#it1 == TN.LAMBDA and #it2 == TN.LAMBDA) then
        local n1 = it1:number_of_children();
        local n2 = it2:number_of_children();
        self:check(n1 > 0 and n2 > 0,"lambda must not be childless");
        
		if (n1 ~= n2) then
            return TypeTree{TN.ILL_FORMED};
        else
            local tmp = TypeTree{TN.LAMBDA};
            local tmp_head = tmp.begin();
            local sib1 = it1:begin();
            local sib2 = it2:begin();
            
			local last = it1:last_child()
			
			--perform union of arguments
            while(sib1~=last) do
                local union_it = tmp:append_child(tmp_head, TN.UNION);
                tmp:replace(tmp:append_child(union_it), sib1);
                tmp:replace(tmp:append_child(union_it), sib2);
				sib1:inc()
				sib2:inc()
			end
			
            local output_tt = self:getIntersection(tt2, sib1:asPreOrder(), sib2:asPreOrder());
			
            local output_tt_it = output_tt:begin();
            tmp:replace(tmp:append_child(tmp_head), output_tt_it);
            tmp:reduce();
            return tmp;
        end
    
    --check if one is unknown_type
    elseif (#it1 == TN.UNKNOWN) then
        return TypeTree(it2);
    elseif (#it2 == TN.UNKNOWN) then
        return TypeTree(it1);
    
	--check if one is ill_formed_type
    elseif (#it1 == TN.ILL_FORMED or #it2 == TN.ILL_FORMED) then
        return TypeTree(TN.ILL_FORMED);
    
	--otherwise there is no detected intersection and it returns ill_formed
    else 
		return TypeTree(TN.ILL_FORMED);
	end
end
	
function Class:isWellFormed()
    if (self:empty()) then
        return false;
	end
	
    for it in self:sequence() do
		if (#it == TN.ILL_FORMED) then
			return false;
		end
	end
    return true;
end

function Class:inherits(tt2, it1, it2)
	self:check(tr2,"Invalid tr2 argument.")
	
	it1 = it1 or self:begin()
	it2 = it2 or tt2:begin()
	
    ----------------
    --recursive case
    ----------------

    --union case
    if (#it1 == TN.UNION) then
        --all type in the union must inherit from ty2 at it2
        for sib in it1:sequence() do
            if(not self:inherits(tt2, sib:asPreOrder(), it2)) then
                return false;
			end
        end
        return true;
    elseif (#it2 == TN.UNION) then
        self:check(#it1 ~= TN.UNION,"Due to the recursive structure of that function it is impossible that #it1 is TN.union_type");
		
        --the type of it1 must inherit at least one type of the union of it2
        for sib in it2:sequence() do
            if (self:inherits(tt2, it1, sib:asPreOrder())) then
                return true;
			end
        end
        return false;
    
    --lambda case
    elseif (#it1 == TN.LAMBDA and #it2 == TN.LAMBDA) then
        if (it1:number_of_children() == it2:number_of_children()) then
            --all input arguments sib2 must inherit sib1
            --or sib2 must be unknown_type
            --and output of ty1 must inherit from ty2
            local sib1 = it1:begin();
            local sib2 = it2:begin();
			local last = it2:last_child()
			while(sib2~=last) do
                if(not tt2:inherits(self, sib2:asPreOrder(), sib1:asPreOrder()) and #sib2 ~= TN.UNKNOWN) then
                    return false;
				end
            end
			
            return self:inherits(tt2, sib1:asPreOrder(), sib2:asPreOrder())
        else 
			return false;
		end
    
    --application case
    elseif (#it1 == TN.APPLICATION) then
        return false; --from the assumption that type_tree must be first reduced
    
    --arg_list case
    elseif (#it1 == TN.ARG_LIST and #it2 == TN.ARG_LIST) then
        self:check(it1:has_one_child() and it2:has_one_child(), "arg_list_type takes only one argument");
        return self:inherits(tt2)
    
    ------------
    --base cases
    ------------
    -- Nothing can inherit or be inherited from an ill-formed type
    elseif (#it1 == TN.ILL_FORMED or #it2 == TN.ILL_FORMED) then
        return false;
		
    -- Everything except ill_formed_type inherits from unknown_type
    elseif (#it2 == TN.UNKNOWN) then
        return true;
		
    -- All other cases.
    else 
        return #it1 == #it2;
	end
end

function Class:reduce(it, arg_types, tr, ct_it, proc_name)
	if self:empty() then
		self:warn("Trying to reduce an epty type tree.")
		return
	end
	
	local ComboTree = require "combo.ComboTree"
	
	it = it or self:begin()
	arg_types = arg_types or Vector()
	tr = tr or ComboTree()
	ct_it = tr:begin()
	proc_name = proc_name or "PROCEDURE NAME UNKNOWN"
	
    -----------------------
    --   recursive cases
    -----------------------

    -------------
    --lambda case
    -------------
    if (#it == TN.LAMBDA) then
        self:check(not it:isChildless(), "lambda_type must have at least a child");
        --if lambda has only one child
        --then reduce lambda(X) -> X
        if (it:has_one_child()) then
            local it_child = it:begin();
            it_node.data = #it_child;
            self:erase(self:flatten(it_child));
            self:reduce(it, arg_types, tr, ct_it, proc_name);
        else
            for sib in it:sequence() do 
                self:reduce(sib:asPreOrder(), arg_types, tr, ct_it, proc_name);
			end
        end
    
    ------------------
    --application case
    ------------------
    elseif (#it == TN.APPLICATION) then
        self:check(not it:isChildless(),"application_type must have at least a child");

        local it_child = it:begin();

        -- If application has only one child, then a trivial reduction
        -- application(X) -> X
        if (it:has_one_child()) then
            it._node.data = #it_child;
            self:erase(self:flatten(it_child));
            self:reduce(it, arg_types, tr, ct_it, proc_name);
        
        elseif (#it_child == TN.LAMBDA) then
            -- Check if the output type of all sibilings of it_child
            -- inherit from the children of it_child:  All but the
            -- last, that is, because it is the output.   If the
            -- next-to-last child of it_child is arg_list, then the
            -- eaerlier siblings shoul inherit from the earlier children,
            -- and all of the rest inherit from the children of arg_list.
            -- Note, typically, arg_list will have only one child.
            --
            -- For example, say we have:
            --    application(lambda(T1 arg_list(T2) T3) a1 a2 a3 a4)
            -- then check that a1 inherits from T1, and that a2, a3
            -- and a4 inherit from T2.  T3 is the output type.

            -- XXX TODO the code below was modified to allow arg lists of
            -- mixed type, e.g. so that the cond primitive could be
            -- supported (as the current definition of cond alternates
            -- between boolean-valued predicates, and the result type).
            -- However, I'm not sure this was a wise design choice, and
            -- it should probably be reviewed... How does haskel do this?

            self:check(not it_child:isChildless(), "it_child must have at least one child");
			
            --cia stands for current input argument
            local cia_it = it_child:begin();

            -- number of input arguments the function takes
            local arg_count = it_child:number_of_children() - 1;

            -- number of arguments applied to that function
            local arg_count_app = self:number_of_siblings(it_child);

            -- check whether the last input argument, or the
            -- second-from-last input argument, under the lambda,
            -- is arg_list
            local last_arg_sib = it_child:last_child();
            last_arg_sib:dec();

            local second_last_arg_sib = last_arg_sib:clone();
            second_last_arg_sib:dec();

            -- ila is true if the last input argument under lambda is arg_list
            local ila = self:isValid(last_arg_sib) and #last_arg_sib == TN.ARG_LIST;

            -- ils is true if the second-from-last input argument
            -- under lambda is arg_list. Need this for the cond signature.
            local ils = self:isValid(second_last_arg_sib) and #second_last_arg_sib == TN.ARG_LIST;

            -- Check if the number of applied arguments are incorrect
            if (((ila or ils) and arg_count_app < (arg_count - 1))
                    or (not ila and not ils and arg_count_app ~= arg_count)) then

                --log message
                local msg = ([[combo::type_tree - Type reduction error: the number of arguments, which is %d]]):format(arg_count_app);

                if(not tr:empty()) then --trace info debug is available
                    msg =  msg .. (", involved in the application '%s' located at pre-order index %d of procedure '%s'"):format(tostring(ComboTree(ct_it)),tr:preOrderIndex(ct_it),proc_name)
                end

                msg = msg .. ", is not right as the operator must take ";
                if (ila) then
                    msg = msg ..  (arg_count - 1) .. " arguments or more.";
                else
                    msg = msg .. arg_count .. " arguments.";
				end

				self:error(msg)
                --~log message

                it._node.data = TN.ILL_FORMED;
                self:erase_children(it);
                return;
          
            -- The number of applied arguments is correct
            else
                -- this is done so that ct_it can move over its arguments
                -- along the arg_app (see below)
                local ct_it_child;
                if (not tr:empty()) then
                    ct_it_child = ct_it:begin();
				end
				
                -- Will be set to true if at some point arg_list is reached
                local is_arg_list_reached = false;
                local arg_list_head;
                local input_arg_it = cia_it;

                -- Iterate over the applied arguments, and possibly
                -- over the operand of tr in case tr is not empty.
				local arg_app = it_child:next_sibling()
				local ite = it:at_end()
				while(arg_app~=ite) do
                    -- input_arg_it is either cia_it, or if it is arg_list,
                    -- then it will cycle over the arg_list contents.
                    if (not is_arg_list_reached) then
                        input_arg_it = cia_it;
					end

                    -- Advance the arg list counter.  In almost all
                    -- cases, the arglist has just one child total, and
                    -- so the below will loop back to that child. But...
                    -- for the cond statement, we have a pair of
                    -- alternating types we must cycle through.  So do
                    -- this below.
                    if (is_arg_list_reached) then
                        input_arg_it:inc();
                        -- If at the end of the list, start again at
                        -- the begining.
                        if (input_arg_it == arg_list_head:at_end()) then
                             input_arg_it = arg_list_head:begin();
                        end

                    -- Check if cia_it is arg_list(T)
                    elseif (#cia_it == TN.ARG_LIST) then
                        is_arg_list_reached = true;
                        arg_list_head = cia_it;
                        input_arg_it = arg_list_head:begin();
                    end

                    -- Reduce both input and applied arguments
                    self:reduce(arg_app, arg_types, tr, ct_it_child, proc_name);
                    self:reduce(cia_it, arg_types, tr, ct_it, proc_name);

                    local arg_inherits = self:inherit(self, arg_app, input_arg_it);
                    -- Check for a funky special case, occuring for the
                    -- cond operator: the arg_list is empty, but the input
                    -- might still match the last argument (the "else"
                    -- clause, which comes after the arg_list, but before
                    -- the output type).
                    if (not arg_inherits and is_arg_list_reached and ils) then
                        arg_inherits = self:inherits(self,arg_app, last_arg_sib);
                        -- And if it matches, then we've moved past the
                        -- end of the arg_list.
                        if (arg_inherits) then
                            is_arg_list_reached = false;
						end
                    end

                    if (not arg_inherits) then
                        -- Check if the ouput argument of arg_app inherits
                        -- from cia_it (or cia_it child if cia_it is arg_list)
                        if (#arg_app == TN.LAMBDA) then
                            self:check(not arg_app.isChildless(), "lambda must have at least one child");
                            local output_it = arg_app:last_child();
                            if (self:inherits(self, output_it, input_arg_it)) then
                                -- insert all inputs before cia_it
                                for input_sib in arg_app:sequence() do 
                                    self:insert_subtree(cia_it, input_sib);
								end
                            
                            -- If it does not inherit, then the type checker
                            -- has found an error, and the resulting type 
                            -- is ill_formed
                            else
                                
                                --log message
                                local msg = "combo::type_tree - Type reduction error: the output of the " .. tostring(self:sibling_index(arg_app)) .. "th applied argument "

                                if(not tr:empty()) then --trace debug info available
                                    msg = msg .. "'".. tostring(ComboTree(ct_it_child)).. "' (located at pre-order index " .. tr:preOrderIndex(ct_it_child)
									msg = msg .. " of procedure '" .. proc_name .. "') of operator '" .. tostring(#ct_it) .. "', "
								end
								
                                msg = msg .."has type ".. tostring(TypeTree(output_it)) .. " which does not inherit from " .. tostring(TypeTree(input_arg_it));
                                self:error(msg);
                                --~log message

                                it._node.data = TN.ILL_FORMED;
                                self:erase_children(it);
                                return;
                            end
                        
                        -- If it's not a lambda then it is ill formed,
                        -- because arg_app does not inherits input_arg_it
                        else
                            
                            --log message
                            local msg = "combo::type_tree - Type reduction error: the " .. tostring(self:sibling_index(arg_app)) .. "th applied argument "

                            if(not tr:empty()) then --trace debug info available
                                msg = msg .. "'" .. tostring(ComboTree(ct_it_child)) .. "' (located at pre-order index " .. tostring(tr:preOrderIndex( ct_it_child)) .. " of procedure '" .. proc_name .. "') of operator '" .. tostring(#ct_it) .. "', "
                            end
							
                            msg = msg .."has type " .. tostring(TypeTree(arg_app)) .. " which does not inherit from " .. tostring(TypeTree(input_arg_it));
                            self:error(msg);
                            --~log message

                            it._node.data = TN.ILL_FORMED;
                            self:erase_children(it);
                            return;
                        end
                    end

                    -- if cia_it is not an arg_list
                    -- then erase it and its children
                    -- because this input has been substituted by the inputs
                    -- of the application (if there are some)
                    -- and cia_it will now points to the next input argument
                    if (not is_arg_list_reached) then
                        cia_it = self:erase(cia_it);
                    end
                    
                    if (not tr:empty()) then --to move the operands of tr to the next
                        ct_it_child = tr:next_sibling(ct_it_child);
					end
					
					arg_app:inc()
                end

                -- Remove a possibly remaining arg_list(T) in the input arguments
                if (is_arg_list_reached or ila) then
                    self:erase(cia_it);
                end

                -- Remove application_type and its argument now that the
                -- substitution has been done.
				local sib = it_child:next_sibling()
				local ite = it:at_end()
				while(sib~=ite) do
                    sib = self:erase(sib);
					sib:inc()
				end
				
                it._node.data = #it_child;
                self:erase(self:flatten(it_child));

                -- Check if it is in the form lambda(X) and remove lambda if so
                if (it:has_one_child()) then
                    local it_child = it:begin();
                    it._node.data = #it_child;
                    self:erase(self:flatten(it_child));
                    self:reduce(it, arg_types, tr, ct_it, proc_name);
                end
            end
        
        -- that is the first of the application is not lambda
        -- then there is a type checker error because the so called operator
        -- is not a function
        else 
            --log message
            local msg = "combo::type_tree - Type reduction error: the supposely operator ";

            if(not tr:empty()) then -- trace debug info available
                msg = msg .. "'" .. tostring(#ct_it) .. "', located at pre-order index " .. tr:preOrderIndex(ct_it) .. " of procedure '" .. proc_name .. "', ";
            end
			
            msg = msg .. "is not typed as a function (that is lambda) but is typed " .. tostring(TypeTree(it_child));
            self:error(msg);
            --~log message

            it._node.data = TN.ILL_FORMED;
            self:erase_children(it);
            return;
        end

    ------------
    --union case
    ------------
    elseif (#it == TN.UNION) then
        self:check(not it:isChildless(),"union_type must have at least a child");
        local utt;
		
        --apply reduce recursively to the children of the union
        for sib in it:sequence() do
            self:reduce(sib:asPreOrder(), arg_types, tr, ct_it, proc_name);
        end
		
        --remove sib if it inherits from other siblings
		for sib in it:sequence() do
            local found_inherit = false;
			for sib2 in it:sequence() do
				found_inherit = sib~=sib2 and self:inherits(self, sib:asPreOrder(), sib2:asPreOrder());
				if found_inherit then
					break;
				end
			end

            if (found_inherit) then
                sib = self:erase(sib);
            end
        end
		
        --if union has only one child then reduce union(X) -> X
        if (it:has_one_child()) then
            local it_child = it:begin();
            it._node.data = #it_child;
            self:erase(self:flatten(it_child));
        end
    
    ---------------
    --arg_list case
    ---------------
    elseif (#it == TN.ARG_LIST) then
        -- Usually, an arg_list will have only one type in it:
        -- However, the cond statement can have a repeated list of two
        -- alternating types.
        for tit in it:sequence() do 
            self:reduce(tit, arg_types, tr, ct_it, proc_name);
        end
    

    ------------------
    --   base case
    ------------------

    --at this stage an argument is considered as constant, so it is simply
    --replaced by its type
    --The binding between considering argument as input variable in the
    --signature of the function is made at the end in
    --infer_type_tree(const type_tree* tt)
    elseif ((#it):isArgument()) then
        local tmp = (#it):getArgType(arg_types);
        local tmp_head = tmp:begin();
        it._node.data = #tmp_head;
        self:reparent(it, tmp_head);
    end	
end

return Class 
