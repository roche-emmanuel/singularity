local Class = require("classBuilder"){name="TreeIterator",bases="std.Iterator"};

function Class:initialize(rhs)
	self._node = rhs and ((self:isInstanceOf(Class,rhs) and rhs._node) or rhs.node) ;
end

function Class:valid()
	return self._node~=nil
end

-- return the data available in the corresponding tree node
function Class:data()
	return self._node and self._node.data
end

function Class:__len()
	return self._node and self._node.data
end

function Class:getNode()
	return self._node
end

-- When called, the next increment/decrement skips children of this node.
function Class:skip_children()
	self._skip_children = true;
end

-- Number of children of the node pointed to by the iterator.
function Class:number_of_children()	
	local pos = self._node.first_child
    if not pos then 
		return 0; 
	end

	local last = self._node.last_child
    local ret=1;
    while pos~=last do
        ret = ret+1;
        pos=pos.next_sibling;
    end
    return ret;
end

function Class:is_childless()
	return not self._node.first_child;
end

function Class:has_one_child()
	return self._node.first_child and self._node.first_child==self._node.last_child	
end


function Class:begin()
	local SiblingIterator = require "std.TreeSiblingIterator"
	local it = SiblingIterator{node=self._node.first_child, parent=self._node};
	return it;
end

function Class:last_child()
	local SiblingIterator = require "std.TreeSiblingIterator"
	local it = SiblingIterator{node=self._node.last_child, parent=self._node};
	return it;
end

function Class:find_child(obj)
    local it = self:begin();
	while it:valid() do
		if it()==obj then
			return it;
		end
	end
end

-- Check equality of two sibling nodes.
function Class:__eq(rhs)
	return self:isInstanceOf(self:getClassOf(),rhs) and self._node==rhs._node
end
	
function Class:__add(num)
	for i=1,num do
        self:inc();
	end
    return self;
end

function Class:__sub(num)
	for i=1,num do
        self:dec();
	end
    return self;
end
	
return Class
