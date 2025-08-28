#pragma once
#include <iostream>
#include "Calculator.h"
using namespace std;

class CalculatorTravelTime : public Calculator {
private:
	double distance;
	double speed;

public:
	CalculatorTravelTime(double distance, double speed) : distance(distance), speed(speed) {}

	void calculate() override;

	void print() const override;
};