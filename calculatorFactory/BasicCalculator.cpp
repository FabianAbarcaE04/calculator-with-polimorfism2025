#include "BasicCalculator.h"
#include <iostream>

void BasicCalculator::calculate()  {
    result = a + b;
}

void BasicCalculator::print() const {
    std::cout << "BasicCalculator: "
        << a << " + " << b
        << " = " << result << std::endl;
}