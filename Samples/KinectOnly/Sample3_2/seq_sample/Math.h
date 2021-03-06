#ifndef _MATH_H_
#define _MATH_H_

#include "Common.h"

#define _USE_MATH_DEFINES
#include <math.h>

inline float interpolate(float x1, float x2, float alpha = 0.5f)
{
        return x1 + (x2 - x1) * alpha;
}

inline int square(int i)
{
        return i * i;
}

inline float square(float f)
{
        return f * f;
}

inline float DEG_TO_RADIAN(float deg)
{
	return (float)(deg*M_PI/180.0f);
}
#endif