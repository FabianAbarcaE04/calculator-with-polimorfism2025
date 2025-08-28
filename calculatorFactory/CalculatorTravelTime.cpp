#include "CalculatorTravelTime.h"

void CalculatorTravelTime::calculate() {
	if (speed != 0) {
		result = distance / speed;
	}
	else {
		result = 0;
	}
}

void CalculatorTravelTime::print() const {
	cout << "Tiempo de viaje: " << result << " horas." << endl;
}