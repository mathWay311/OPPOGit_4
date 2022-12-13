#include <stdio.h>
#include <iostream>

double my_pow(double num, unsigned int deg) {
    if(deg < 0) {
        deg = -deg;

        while(deg) {
            if (deg % 2 == 0) {
                deg /= 2;
                num *= num;
            }
            else {
                deg--;
                result *= num;
            }
        }

        return 1 / result;
    }
    else {
        while(deg) {
            if (deg % 2 == 0) {
                deg /= 2;
                num *= num;
            }
            else {
                deg--;
                result *= num;
            }
        }

        return result;
    }
}
int main()
{
    std::cout << my_pow(3,3);
    return 0;
}