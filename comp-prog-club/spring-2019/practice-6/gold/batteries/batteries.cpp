#include <iostream>

int main()
{
    int n;
    while(std::cin >> n && n != 0)
    {
        int num = 0;
        
        while(n > 1)
        {
            n /= 2;
            num++;
        }
        std::cout << num << std::endl;
    }
    return 0;
}

