#pragma once

#include "math/function.h"
#include "math/point.h"


namespace math
{
    namespace functions
    {
        Function<bool(const Point2D&)> horizontal_lines(double thickness = 0.1);
    }
}