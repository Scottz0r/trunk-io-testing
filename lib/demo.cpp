#include "demo.h"

namespace SZ
{
double do_stuff(int x, int y)
{
    if (y != 0)
    {
        return x * 2.0 / y;
    }
    else
    {
        return 0.0;
    }
}
} // namespace SZ
