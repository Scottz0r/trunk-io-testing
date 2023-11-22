#include <iostream>

#include "lib/demo.h"

int main()
{
    double actual = SZ::do_stuff(12, 4);

    if (actual != 6.0)
    {
        std::cout << "Error: Expected do_stuff(12, 4) = 6.0. Got " << actual << std::endl;
        return 1;
    }

    actual = SZ::do_stuff(16, 0);

    if (actual != 0.0)
    {
        std::cout << "Error: Expected do_stuff(12, 0) = 0.0. Got " << actual << std::endl;
        return 1;
    }

    std::cout << "Tests complete" << std::endl;
    return 0;
}
