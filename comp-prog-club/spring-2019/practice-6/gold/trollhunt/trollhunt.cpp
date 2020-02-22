#include <iostream>

int main()
{
    int bridges;
    int num_knights;
    int min_per;

    std::cin >> bridges >> num_knights >> min_per;

    int days = 0;
    while ((days * (num_knights / min_per)) < (bridges - 1))
    {
        days++;
    }

    std::cout << days << std::endl;
    return 0;
}
