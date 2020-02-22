#include <iostream>
#include <cmath>

double abs(double v) {
    return (v < 0) ? -1 * v : v;
}

int main() {
    int cases;
    std::cin >> cases;

    for (int i = 0; i < cases; ++i) {
        double b_x;
        double b_y;
        std::cin >> b_x >> b_y;

        double candles;
        std::cin >> candles;
        bool lit = false;
        for (double j = 0; j < candles; ++j) {
            double c_x;
            double c_y;
            std::cin >> c_x >> c_y;

            double d_x = abs(b_x - c_x);
            double d_y = abs(b_y - c_y);
            if (d_x < 8 && d_y < 8) {
                double dist = sqrt((d_x * d_x) + (d_y * d_y));
                if (dist < 8) {
                    std::cout << "light a candle" << std::endl;
                    lit = true;
                    break;
                }
            }

        }
        if (!lit) {
            std::cout << "curse the darkness" << std::endl;
        }

    }

    return 0;
}
