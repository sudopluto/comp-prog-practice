#include <iostream>

int main() {
    int c;
    std::cin >> c;

    for (int i = 0; i < c; ++i) {
        std::string line1;
        std::string line2;

        std::getline(std::cin, line1);
        std::getline(std::cin, line2);

        std::stringstream ss1(line1);
        std::stringstream ss2(line2);

    }

    return 0;
}
