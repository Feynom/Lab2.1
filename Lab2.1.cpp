#include <iostream>
#include "FloatRange.h"

int main()
{  
    double number;
    FloatRange a;
    cin >> a;

    cout << "Enter a number to check for entry in the specified range: "; cin >> number;
    a.rangeCheckResult(a.rangeCheck(a, number));

    return 0;
}