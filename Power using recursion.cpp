#include <iostream>
double power(double base, int exponent) {
   
    if (exponent == 0) {
        return 1;
    }
   
    else if (exponent > 0) {
        return base * power(base, exponent - 1);
    } else {
       
        return 1/ (base * power(base, -exponent - 1));
    }
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
