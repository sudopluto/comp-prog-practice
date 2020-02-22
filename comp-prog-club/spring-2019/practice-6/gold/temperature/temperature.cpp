#include <iostream>

int main()
{
    int a;
    int b;

    std::cin >> a >> b;

    int num_match = 0;
    int num = 0;
    for (double x = -100; x <= 100; ++x)
    {
        if (x == (x * b) + a)
        {
            num_math++;
            num = x;
        }
    }

    if(num_match == 0)
    {
        std::cout << "IMPOSSIBLE" << std::endl;
    }
    else if(num_match == 1)
    {
        std::cout << num << std::endl;
    }
    if(num_match == 0)
    {
        std::cout << "IMPOSSIBLE" << std::endl;
    }




    return 0;
}
