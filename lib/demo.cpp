#include "demo.h"

namespace SZ
{
double do_stuff(int data_x, int data_y)
{
    if (data_y != 0)
    {
        return data_x * 2.0 / data_y;
    }

    return 0.0;
}
} // namespace SZ
