module(..., package.seeall)

local Vector = require "std.Vector"
local Set = require "std.Set"
local Map = require "std.Map"
local OrderedMap = require "std.OrderedMap"

local Verbose = require ("loop.debug.Verbose")

local LOG = Verbose{
  groups = {
    -- levels
    {"info"},
    -- aliases
    all = {"info"},
  },
}
LOG:flag("all", true)

function test_vector_functions()
    local vec = Vector()
    
    vec:push_back(1)
    vec:push_back(2)
    vec:push_back(3)
    vec:push_back(4)
    
    --[[
    LOG:info ("Vector content is: ",vec.data)
    for k,v in vec:sequence() do
        LOG:info ("Vector item ",k," = ",v)
    end
    ]]
    
    assert_equal(4,vec:size(),"Wrong vector size.")
    
    vec:push_front(0)
    
    assert_equal(0,vec:front(),"Wrong value in vec:front()")
    
    assert_equal(4,vec:back(),"Wrong value in vec:back()")
    
    assert_equal(4,vec:pop_back(),"Wrong value in vec:pop_back()")
    assert_equal(0,vec:pop_front(),"Wrong value in vec:pop_front()")
    
    assert_equal(3,vec:size(),"Wrong vec:size() value")
    
    vec:insert(2,"coucou")
    
    assert_equal("coucou",vec[2],"Wrong value in index metamethod")
    
    assert_equal(false,vec:empty(),"Wrong empty value.")
    local vec2 = vec:clone()
    vec:clear()
    assert_equal(true,vec:empty(),"Wrong empty value.")
    
    vec2:erase(2)
    local count =0
    for k,v in vec2:sequence() do
        count = count  +1
        assert_equal(k,v,"Wrong equality test");
    end
    
    assert_equal(3,count,"Wrong sequence count.")
end

function test_vector_at()
    local vec = Vector{"a","b","c","d"}
    
    assert_equal(vec:at(1),"a","Wrong vec:at() value")
end

function test_vector_table()
    local vec = Vector{"a","b","c","d"}
    
    local t1 = vec:toTable()
    assert_equal(t1[1],"a","Wrong vec:toTable() value")
    assert_equal(t1[4],"d","Wrong vec:toTable() value")
    
    vec:fromTable{1,2,3,4,5}
    
    assert_equal(vec:size(),5,"Wrong vector size")
    
    for k,v in vec:sequence() do
        assert_equal(k,v,"Wrong vector value")
    end
end

function test_set_contains()
    local set = Set{"a","b","c","d",3}
    
    assert_equal(set:contains("a"),true,"Set doesn't contain 'a'")
    assert_equal(set:contains("e"),false,"Set doesn't contain 'a'")

    assert_equal(set:push_back("a"),false,"Can still push exisiting item")
    assert_equal(set:push_front("3"),true,"Cannot push because of coertion")
    assert_equal(set:push_front(3),false,"Can still push exisiting value")
    
    local t1 = {1,1,2,2,3,3,4,4}
    set:fromTable(t1)
    
    assert_equal(set:size(),4,"Wrong set size.")

end

function test_map_get_set()
    local map = Map{a=1,b=2,c=3,d=4}
    
    assert_equal(4,map:size(),"Invalid map size");
    
    LOG:info ("Map content is: ",map.data)
    
    assert_equal(1,map.a,"Invalid map value");
    assert_equal(1,map:get("a"),"Invalid map value");
    assert_equal(2,map.b,"Invalid map value")
    
    assert_equal(false,map:empty(),"Map is empty")
    
    map:set("b","coucou")
    
    assert_equal("coucou",map["b"],"Invalid map value")
    
    map:clear()
    assert_equal(true,map:empty(),"Map is not empty")
end

function test_map_table()
    local map = Map{data={a=1,b=2,c=3,d=4}}
    
    local t1 = {1,2,3,4}
    map:fromTable(t1)
    
    for k,v in map:sequence() do
        assert_equal(k,v,"Invalid map value mapping.")
    end
end

function test_vector_back()
    local vec = Vector{"a","b","c","d"}
    
    assert_equal(vec:back(),"d","Invalid vec:back() value")
end

function test_super_constructor()
    --LOG:info "Should print vector construction after here..."
    local set = Set()
    local set2 = Set{1,2,3}
    
    --LOG:info "Should print vector construction before here..."
end

function test_set_sequence()
    local set = Set{"a","b","c","d"}
    
    count = 0
    for k,v in set:sequence() do
        count = count + 1
        assert_equal(k,count,"Invalid key")
    end
    
    assert_equal(4,count,"Invalid count")
end

function test_set_sequence_empty()
    local set = Set()
    
    count = 0
    for k,v in set:sequence() do
        count = count + 1
        assert_equal(k,count,"Invalid key")
    end
end

function test_sequence_table()
    local t = {}
    
    --for k,v in next, t, 0 do  -- invalid key to next error
    for k,v in ipairs(t) do
        -- Do nothing.
    end
end

function test_orderedmap_sequence()
    local t1 = {"a","b","c","d","e","f","g","h","i","j","k","l"}
    local map = OrderedMap(t1)
    
    count = 0
    for k,v in map:sequence() do
        count = count + 1
        --LOG:info "Testing..."
        assert_equal(v,t1[count],"Invalid key")
    end
    
    --assert_equal(4,count,"Invalid count")
end

function test_vector_erase()
	local vec = Vector()
	
	vec:push_back(1)
    vec:push_back(2)
    vec:push_back(3)
    vec:push_back(4)
	
	vec:erase(3)
	
	local count = 0;
	for _,val in vec:sequence() do
		count = count +1
	end
	
	assert_equal(3,count,"Invalid vector count after erase.")	
	
	assert_equal(4,vec[3],"Invalid vector value at index 3.")	
end

function test_tree_creation()
	log:info("Testing tree creation.")
	
	local Tree = require "std.Tree"
	local tree = Tree()
	
	log:info("Done testing tree creation.")
end

function test_tree_iterator_dereference()
	log:info("Testing tree iterator dereference")
	
	local myobj = {"thetable"}
	
	log:info("Testing default data() method access.")
	local it = require("std.tree.Iterator"){node={data=myobj}}
	assert_equal(myobj,it:data(),"Missmatch between iterator object and original value")

	log:info("Now testing __len() metamethod access")
	assert_equal(myobj,#it,"Missmatch between #iterator original value")
	
	log:info("Done testing tree iterator dereference.")
end
