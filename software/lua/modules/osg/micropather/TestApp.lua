local Class = require("classBuilder"){name="MicroPatherTestApp",bases="osg.OSGTestApp"};

local tools = require "osg.Tools"

function Class:onStop()
	self:info("Deleting micropather object.")
	self._finder:getTable()._pather:delete()
end

function Class:initialize(options)
	local mpather = require "micropather"
	
	self:createCube(1)
	self:createBase()
	
	self._finder = micropather.Graph{
		_mapX = 10,
		_mapY = 10,
		
		_mapData = {
			1, 1, 0, 1, 1, 1, 1, 1, 1, 1,
			1, 0, 0, 1, 0, 0, 0, 0, 0, 1,
			1, 0, 1, 0, 0, 0, 1, 0, 1, 1,
			1, 0, 0, 0, 1, 0, 1, 1, 0, 1,
			1, 0, 1, 1, 1, 0, 0, 0, 1, 1,
			1, 0, 0, 1, 1, 0, 0, 0, 0, 1,
			1, 0, 1, 0, 0, 0, 1, 0, 1, 1,
			1, 1, 1, 1, 1, 1, 0, 0, 0, 1,
			1, 0, 0, 0, 0, 0, 0, 1, 0, 1,
			1, 1, 0, 1, 1, 1, 1, 1, 1, 1
		},
		
		_costList = {
			{direction=osg.Vec2f(1.0,0.0),weight=1.0},
			{direction=osg.Vec2f(0.0,-1.0),weight=1.0},
			{direction=osg.Vec2f(-1.0,0.0),weight=1.0},
			{direction=osg.Vec2f(0.0,1.0),weight=1.0},
		},
		
		findPath = function(obj,startX, startY, endX, endY, result )
			local totalCost = 0.0;
			local path = micropather.std_vector_void_ptr();
			
			local rtn = obj._pather:Solve( obj:convertXYToNode(startX, startY), obj:convertXYToNode(endX, endY), path, totalCost );
			if rtn==micropather.MicroPather.SOLVED then				
				for i=0,path:size()-1 do
					local x,y = obj:convertNodeToXY( path:get(i) );
					result:push_back(osg::Vec2f(x, y));
				end
				return true;
			end
			return false;			
		end,
		
		
	};
	
	self._finder:getTable()._pather = micropather.MicroPather(self._finder)
	
	
	
class PathFindingHandler : public micropather::Graph
{
public:

    
    bool findPath( int startX, int startY, int endX, int endY, std::vector<osg::Vec2>& result )
    {
        float totalCost = 0.0f;
        std::vector<void*> path;
        int rtn = _pather->Solve( convertXYToNode(startX, startY), convertXYToNode(endX, endY), &path, &totalCost );
        if ( rtn==micropather::MicroPather::SOLVED )
        {
            int x=0, y=0;
            result.resize( path.size() );
            for ( unsigned int i=0; i<path.size(); ++i )
            {
                convertNodeToXY( path[i], x, y );
                result[i] = osg::Vec2((float)x, (float)y);
            }
            return true;
        }
        return false;
    }
    
    virtual float LeastCostEstimate( void* start, void* end )
    {
        int startX=0, startY=0, endX=0, endY=0;
        convertNodeToXY( start, startX, startY );
        convertNodeToXY( end, endX, endY );
        
        float dx = (float)(endX - startX); 
        float dy = (float)(endY - startY);
        return (float)sqrt(dx * dx + dy * dy);
    }
    
    virtual void AdjacentCost( void* node, std::vector<micropather::StateCost>* adjacent )
    {
        int currX=0, currY=0;
        convertNodeToXY( node, currX, currY );
        for ( unsigned int i=0; i<_costList.size(); ++i )
        {
            int nx = currX + (int)_costList[i].direction.x();
            int ny = currY + (int)_costList[i].direction.y();
            if ( checkPassable(nx, ny) )
            {
                micropather::StateCost stateCost = {convertXYToNode(nx, ny), _costList[i].weight};
                adjacent->push_back( stateCost );
            }
        }
    }
    
    virtual void PrintStateInfo( void* node )
    {
        int currX=0, currY=0;
        convertNodeToXY( node, currX, currY );
        std::cout << currX << " " << currY << std::endl;
    }
    
protected:
    bool checkPassable( int nx, int ny )
    {
        if ( nx>=0 && nx<_mapX && ny>=0 && ny<_mapY )
        {
            int data = _mapData[ny * _mapX + nx];
            if ( data==0 ) return true;
        }
        return false;
    }
    
    void convertNodeToXY( void* node, int& x, int& y )
    {
         y = (int)node / _mapX;
         x = (int)node - y * _mapX;
    }
    
    void* convertXYToNode( int x, int y )
    { return (void*)(y * _mapX + x); }
    
    struct DirectionCost
    {
        osg::Vec2 direction;
        float weight;
    };
    std::vector<DirectionCost> _costList;
    std::vector<int> _mapData;
    micropather::MicroPather* _pather;
    int _mapX, _mapY;
};
	
	self:home()
end

return Class 
