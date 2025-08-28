#pragma once
#include "Calculator.h"

class BasicCalculator : public Calculator {
private:
    double a;
    double b;

public:
    BasicCalculator(double a, double b) : a(a), b(b) {}

    void calculate() override;
    void print() const override;
};