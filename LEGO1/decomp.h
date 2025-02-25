#ifndef DECOMP_H
#define DECOMP_H

#define DECOMP_STATIC_ASSERT(V) namespace { typedef int foo[(V)?1:-1]; }
#define DECOMP_SIZE_ASSERT(T, S) DECOMP_STATIC_ASSERT(sizeof(T) == S)

#ifndef _countof
#define _countof(arr) sizeof(arr) / sizeof(arr[0])
#endif

typedef unsigned char undefined;
typedef unsigned short undefined2;
typedef unsigned int undefined4;

#endif // DECOMP_H
