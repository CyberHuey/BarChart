// Ralph Walker II
// CIS 554 - M401 Object Oriented Programming in C++
// Syracuse University
// HW #3 - Exercise 5.16 p206
// 2 / 6 / 2020
// main.cpp

#include "BarChart.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "Welcome to my Bar-Chart Program!" << endl
		<< "Enter (-1) at anytime to quit" << endl << endl;

	barChart BC;

	// Get Inputs
	BC.getInputS1();
	BC.getInputS2();
	BC.getInputS3();
	BC.getInputS4();
	BC.getInputS5();

	// Display Bar-Chart
	BC.displayStars();
}
