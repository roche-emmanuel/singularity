local Class = require("classBuilder"){name="ComboArgument",bases="combo.Vertex"};

function Class:initialize(options)
	self._idx = tonumber(options)
	self:check(self._idx and self._idx>0,"idx should be different than zero.")
end

function Class:negate()
	self._idx = -self._idx;
end

function Class:isNegated()
	return self._idx < 0;
end

function Class:__lt(rhs)
	return math.abs(self._idx)<math.abs(rhs._idx);
end

function Class:__eq(rhs)
	return self._idx == rhs._idx;
end

function Class:absIndex()
	return math.abs(self._idx);
end

function Class.indexToZeroBase(other_idx)
	return (other_idx < 0 and -other_idx or other_idx) - 1;
end

function Class.indexFromZeroBase(idx_from_zero)
	return idx_from_zero + 1;
end

-- Returns 0 for argument of idx 1 or -1, 1 for idx 2 or -2, and so on
function Class:indexFromZero()
	return Class.indexFromZeroBase(self._idx);
end

-- Check if the index of this arg is in the possible range given arity a.
-- Formally, idx is in the range of a if :
-- if idx==0 then it is not valid
-- else if a>0 (that is, no arg_list) then idx<=a
-- else if a<0 then idx < -a
function Class:isIndexValid(arity)
	return (self._idx ~= 0 and (arity > 0 and self:absIndex() <= arity or self:absIndex() < -arity));
end

return Class 
