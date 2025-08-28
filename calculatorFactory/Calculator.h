#pragma once
#include <iostream>

class Calculator {
protected:
	double result; // solo lectura
public:
	Calculator() : result(0) {}
	virtual void calculate() = 0;    // método abstracto
	virtual void print() const = 0;  // método abstracto
	double getResult() const { return result; }
	virtual ~Calculator() {}
};
