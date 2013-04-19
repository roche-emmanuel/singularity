
#include "producer/TileStorage.h"


namespace sgt
{

TileStorage::Slot::Slot(TileStorage *owner) :
    producerTask(NULL), owner(owner)
{
}

TileStorage::Slot::~Slot()
{

}

TileStorage *TileStorage::Slot::getOwner()
{
    return owner;
}

void TileStorage::Slot::lock(bool lock)
{
    if (lock) {
        mutex.lock();
    } else {
        mutex.unlock();
    }
}

TileStorage::TileStorage(int tileSize, int capacity)
{
    init(tileSize, capacity);
}

TileStorage::TileStorage()
{
}

void TileStorage::init(int tileSize, int capacity)
{
    this->tileSize = tileSize;
    this->capacity = capacity;
}

TileStorage::~TileStorage()
{
	std::list<Slot*>::iterator i = freeSlots.begin();
    while (i != freeSlots.end()) {
        delete *i;
        i++;
    }
    freeSlots.clear();
}

TileStorage::Slot *TileStorage::newSlot()
{
	std::list<Slot*>::iterator i = freeSlots.begin();
    if (i != freeSlots.end()) {
        Slot* s = *i;
        freeSlots.erase(i);
        return s;
    } else {
        return NULL;
    }
}

void TileStorage::deleteSlot(TileStorage::Slot *t)
{
    freeSlots.push_back(t);
}

int TileStorage::getTileSize()
{
    return tileSize;
}

int TileStorage::getCapacity()
{
    return capacity;
}

int TileStorage::getFreeSlots()
{
    return (int) freeSlots.size();
}

}
