local Class = require("classBuilder"){name="Tree",bases="base.Object"};

local Iterator = require "std.tree.Iterator"
local PreOrderIterator = require "std.tree.PreOrderIterator"
local PostOrderIterator = require "std.tree.PostOrderIterator"
local BreadthFirstIterator = require "std.tree.BreadthFirstIterator"

function Class:initialize(rhs)
	self:reset();
	
	if rhs then
		if self:isInstanceOf(Iterator,rhs) then
			self:set_head(#rhs)
			self:replace(self:begin(),rhs)
		elseif rhs.root then
			self:set_head(rhs.root)
		elseif rhs.tree then
			self:copy(rhs.tree)
		end
	end
end

function Class:copy(tree)
	self:check(tree and self:isInstanceOf(Class,tree),"Invalid tree instance : ",tree)
	
    self:clear();
    local it=tree:begin();
	local to=begin();
	
    while(it:valid()) do
        to=self:insert(to, #it);
        it:skip_children();
        it:inc();
    end
	
    to=begin();
    it=tree:begin();
    while(it:valid()) do
        to=self:replace(to, it);
        to:skip_children();
        it:skip_children();
        to:inc();
        it:inc();
    end
end

function Class:reset()
    self._head = {};
	self._feet = {};
	
	self._head.next_sibling = self._feet;
	self._feet.prev_sibling = self._head;
end

function Class:clear()
	self:reset()
end

function Class:begin()
    return PreOrderIterator(self._head.next_sibling);
end

function Class:begin_breadth_first()
    return BreadthFirstIterator(self._head.next_sibling);
end

function Class:begin_post()
    local tmp=self._head.next_sibling;
    if(tmp~=self._feet) then
        while(tmp.first_child) do
            tmp=tmp.first_child;
		end
    end
    return PostOrderIterator(tmp);
end

return Class
