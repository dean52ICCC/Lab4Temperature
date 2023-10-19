#include "Temperature.h"
#include <iostream>

//Create object
Temp::Temp()
{
}

//Destroy object
Temp::~Temp()
{
}

//Creates the bar chart, stars starting 3 up from minimum
void Temp::displayTemp(float temp) {
	std::cout << temp << " | ";
	for (int i = -30 + 3; temp >= i && i <= 150; i = i + 3) {
		std::cout << "*";
	}
	std::cout << std::endl;
}