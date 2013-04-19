#include "producer/TileLayer.h"

using namespace std;

namespace sgt
{

TileLayer::TileLayer(const char *type, bool deform) :
    tileSize(0), tileBorder(0), rootQuadSize(0.0f), deform(deform), enabled(true)
{
}

TileLayer::~TileLayer()
{
}

void TileLayer::init(bool deform)
{
    this->deform = deform;
    this->enabled = true;
}

TileCache* TileLayer::getCache()
{
    return cache.get();
}

int TileLayer::getProducerId()
{
    return producerId;
}

int TileLayer::getTileSize()
{
    return tileSize;
}

int TileLayer::getTileBorder()
{
    return tileBorder;
}

float TileLayer::getRootQuadSize()
{
    return rootQuadSize;
}

vec3d TileLayer::getTileCoords(int level, int tx, int ty)
{
    double ox = rootQuadSize * (double(tx) / (1 << level) - 0.5f);
    double oy = rootQuadSize * (double(ty) / (1 << level) - 0.5f);
    double l = rootQuadSize / (1 << level);
    return vec3d(ox, oy, l);
}

bool TileLayer::isDeformed()
{
    return deform;
}

void TileLayer::getDeformParameters(vec3d tileCoords, vec2d &nx, vec2d &ny, vec2d &lx, vec2d &ly)
{
    if (isDeformed()) {
        double x = tileCoords.x + tileCoords.z / 2.0f;
        double y = tileCoords.y + tileCoords.z / 2.0f;
        double R = getRootQuadSize() / 2.0f;
        double yR = y*y + R*R;
        double xyR = x*x + yR;
        double d = R * sqrt(xyR);
        double e = R / (sqrt(yR) * xyR);
        nx = vec2d(x*y / d, yR / d);
        ny = vec2d(-((x*x + R*R) / d), -(x*y / d));
        lx = vec2d(e * yR, 0.0);
        ly = vec2d(-(e * x * y), e * d);
    }
}

bool TileLayer::isEnabled()
{
    return enabled;
}

void TileLayer::setIsEnabled(bool enabled)
{
    this->enabled = enabled;
    invalidateTiles();
}

void TileLayer::setCache(TileCache* cache, int producerId)
{
    this->cache = cache;
    this->producerId = producerId;
}

void TileLayer::getReferencedProducers(vector< sgtPtr<TileProducer> > &producers) const
{
}

void TileLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize)
{
    this->tileSize = tileSize;
    this->tileBorder = tileBorder;
    this->rootQuadSize = rootQuadSize;
}

void TileLayer::useTile(int level, int tx, int ty, unsigned int deadline)
{
}

void TileLayer::unuseTile(int level, int tx, int ty)
{
}

void TileLayer::prefetchTile(int level, int tx, int ty)
{
}

void TileLayer::startCreateTile(int level, int tx, int ty, unsigned int deadline, sgtPtr<Task> task, sgtPtr<TaskGraph> owner)
{
}

void TileLayer::beginCreateTile()
{
}

void TileLayer::endCreateTile()
{
}

void TileLayer::stopCreateTile(int level, int tx, int ty)
{
}

void TileLayer::invalidateTiles()
{
    getCache()->invalidateTiles(getProducerId());
}

}
