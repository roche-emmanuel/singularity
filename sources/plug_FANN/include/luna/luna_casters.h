#ifndef _LUNA_CASTERS_H_
#define _LUNA_CASTERS_H_

#include <plug_common.h>

template <typename dstType>
struct luna_caster<FANN::training_data,dstType> {
	static inline dstType* cast(FANN::training_data* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<FANN::neural_net,dstType> {
	static inline dstType* cast(FANN::neural_net* ptr) {
		return static_cast<dstType*>(ptr);
	};
};


#endif

