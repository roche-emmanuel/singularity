local Class = require("classBuilder"){name="SceneManager",bases="base.Object"};

require "osg"

Class.FULLY_VISIBLE = 1
Class.PARTIALLY_VISIBLE = 2
Class.INVISIBLE = 3

-- to be implemented in C++

Class:getVisibility = function(frustumPlanes, b)
    local v0 = getPlaneVisibility(frustumPlanes[1], b);
    if (v0 == Class.INVISIBLE) then
        return Class.INVISIBLE;
    end
    local v1 = getPlaneVisibility(frustumPlanes[2], b);
    if (v1 == Class.INVISIBLE) then
        return Class.INVISIBLE;
    end
    local v2 = getPlaneVisibility(frustumPlanes[3], b);
    if (v2 == Class.INVISIBLE) then
        return Class.INVISIBLE;
    end
    local v3 = getPlaneVisibility(frustumPlanes[4], b);
    if (v3 == Class.INVISIBLE) then
        return Class.INVISIBLE;
    end
    local v4 = getPlaneVisibility(frustumPlanes[5], b);
    if (v4 == Class.INVISIBLE) then
        return Class.INVISIBLE;
    end
    if (v0 == Class.FULLY_VISIBLE && v1 == Class.FULLY_VISIBLE &&
        v2 == Class.FULLY_VISIBLE && v3 == Class.FULLY_VISIBLE &&
        v4 == Class.FULLY_VISIBLE)
    then
        return Class.FULLY_VISIBLE;
    end
    return PARTIALLY_VISIBLE;
end


function Class:getPlaneVisibility(clip, b)
    double x0 = b.xmin * clip.x;
    double x1 = b.xmax * clip.x;
    double y0 = b.ymin * clip.y;
    double y1 = b.ymax * clip.y;
    double z0 = b.zmin * clip.z + clip.w;
    double z1 = b.zmax * clip.z + clip.w;
    double p1 = x0 + y0 + z0;
    double p2 = x1 + y0 + z0;
    double p3 = x1 + y1 + z0;
    double p4 = x0 + y1 + z0;
    double p5 = x0 + y0 + z1;
    double p6 = x1 + y0 + z1;
    double p7 = x1 + y1 + z1;
    double p8 = x0 + y1 + z1;
    if (p1 <= 0 && p2 <= 0 && p3 <= 0 && p4 <= 0 && p5 <= 0 && p6 <= 0 && p7 <= 0 && p8 <= 0) {
        return Class.INVISIBLE;
    }
    if (p1 > 0 && p2 > 0 && p3 > 0 && p4 > 0 && p5 > 0 && p6 > 0 && p7 > 0 && p8 > 0) {
        return Class.FULLY_VISIBLE;
    }
    return PARTIALLY_VISIBLE;
end

return Class()
