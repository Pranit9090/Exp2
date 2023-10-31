#include <iostream>
#include<math.h>
using namespace std;

int main() {
    double base,power,res;
    cout << "enter base : ";
    cin >> base;

    cout << "enter power: ";
    cin >> power;

    res = pow(base,power);

    cout << base << "^" << power << "=" << res;
    return 0;
}
