
#include "core/CPUBuffer.h"
#include "scene/LandManager.h"

namespace sgt
{

CPUBuffer::CPUBuffer(const void *data)
{
    p = data;
}

CPUBuffer::~CPUBuffer()
{
}

void CPUBuffer::bind(int target) const
{
    glBindBuffer(target, 0);
    CHECK(LandManager::getError() == GL_NO_ERROR,"Error when binding buffer.");
}

void *CPUBuffer::data(int offset) const
{
    return (void*)((char*)p + offset);
}

void CPUBuffer::unbind(int target) const
{
}

void CPUBuffer::dirty() const
{
}

}
