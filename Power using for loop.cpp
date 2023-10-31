#include <iostream>
double power(double base,int exponent)
{
    double result=1;
    for(int i=0;i<exponent;i++){
        result *= base;
    }
    return result;
}

int main() {
    double base;
    int exponent;


    std::cout << "Enter the base: ";
    std::cin >> base;
    std::cout << "Enter the exponent: ";
    std::cin >> exponent;


    double result = power(base, exponent);
    std::cout << "\nResult: " << result << std::endl;

    return 0;
}
