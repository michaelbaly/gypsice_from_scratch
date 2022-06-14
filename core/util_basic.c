#include "util_basic.h"


inline uint32 floor(uint32 val) {
    return (val - 1);
}

inline uint32 ceiling(uint32 val) {
    return (val + 1);
}

void swap(uint32 *v1, uint32 *v2)
{
    uint32 var;
    var = *v1;
    *v1 = *v2;
    *v2 = var;
    
    return;
}
