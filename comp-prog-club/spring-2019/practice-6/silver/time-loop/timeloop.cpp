#include <iostream>

int main()
{
    int num = 0;
    std::cin >> num;

    int x = 1;
    while (x <= num)
    {
        std::cout << x << " Abracadabra" << std::endl;
        ++x;
    }
    return 0;
}
