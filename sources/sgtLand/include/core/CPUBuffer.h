
#ifndef _SGT_CPU_BUFFER_H_
#define _SGT_CPU_BUFFER_H_

#include "sgtLand.h"
#include "core/Buffer.h"

namespace sgt
{

/**
 * A Buffer whose data is on the CPU.
 * @ingroup render
 */
class SGTLAND_EXPORT CPUBuffer : public Buffer
{
public:
    /**
     * Creates a new CPU buffer with the given data.
     *
     * @param data the buffer data. May be NULL. LUNA_IGNORED
     */
    CPUBuffer(const void *data = 0);

    /**
     * Destroys this CPU buffer. The buffer data itself is NOT destroyed.
     */
    virtual ~CPUBuffer();

protected:
    virtual void bind(int target) const;

    virtual void *data(int offset) const;

    virtual void unbind(int target) const;

    virtual void dirty() const;

private:
    /**
     * The buffer data. May be NULL.
     */
    const void *p;
};

}

#endif
