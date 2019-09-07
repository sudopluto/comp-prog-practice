#include <iostream>
#include <string>

int main()
{
    std::string in;
    std::cin >> in;
    std::string out;

    bool app = true;
    for(const char c : in)
    {
        if(app)
        {
            out.push_back(c);
            app = false;
        }
        if(c == '-')
        {
            app = true;
        }
    } 
    std::cout << out << std::endl;
    return 0;
}
