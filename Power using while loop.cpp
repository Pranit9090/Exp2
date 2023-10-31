#include <iostream>
double power(double base,int exponent)
{
    double result=1,i=0;
    while(i<exponent){
        result *= base;
        i+=1;
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
