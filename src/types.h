#include <cuComplex.h>
typedef unsigned char uchar;
typedef unsigned int uint;
typedef cuFloatComplex cfloat;
typedef cuDoubleComplex cdouble;

__device__ __inline__ float cabs2(cfloat in) { return in.x * in.x + in.y * in.y;}
__device__ __inline__ double cabs2(cdouble in) { return in.x * in.x + in.y * in.y; }
