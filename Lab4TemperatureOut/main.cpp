/*
	Brayden Dean
	C++ 2023
	Due: October/27/2023
	Lab 4
	Write a program that inputs a series of hourly temperature
	from a file and outputs a bar chart (using stars). The temperature
	should be printed to the left of bar, and there should be a heading
	that gives the scale. The range should be from -30 to 120.
	Each star should represent a range of 3 degrees.
*/

#include "Temperature.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
	//Set number precision
	cout << std::fixed << std::setprecision(1);

	//Initialize the variables
	int x = 0;
	float temperature;

	//Create the Temp class
	Temp Temp;

	//Open the input file
	ifstream tempIn;
	tempIn.open("TempIn.dat");

	//Detect if file opened properly
	if (!tempIn) {
		cout << "No file detected." << endl;
	}

	//Display header
	cout << "Temperature Bar Chart" << endl;
	cout << "-30 to 150, every star is 3 degrees" << endl;
	cout << endl;

	//Display temps and bar chart between -30 and 150 degrees
	tempIn >> temperature;
	while (tempIn && x <= 1000) {
		if (temperature >= -30 && temperature <= 150) {
			Temp.displayTemp(temperature);
		}
		else {
			cout << "ERROR: " << temperature << " is out of range" << endl;
		}
		tempIn >> temperature;
		x++;
	}

	//Close the file
	tempIn.close();

	return 0;
}