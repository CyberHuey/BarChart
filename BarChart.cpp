// Ralph Walker II
// CIS 554 - M401 Object Oriented Programming in C++
// Syracuse University
// HW #3 - Exercise 5.16 p206
// 2 / 6 / 2020
// BarChart.cpp

#include <iostream>
#include "BarChart.h"

using namespace std;

int i{ 1 };

// Get input value S1
void barChart::getInputS1()
{
	cout << "Please enter value for bar " << i << " (1-30): " << endl;
	i++;
	cin >> s1;

	// Called test function to validated correct input
	S1 = barChart::test(s1);
}

// Get input value S2
void barChart::getInputS2()
{
	cout << "Please enter value for bar " << i << " (1-30): " << endl;
	i++;
	cin >> s2;

	// Called test function to validated correct input
	S2 = barChart::test(s2);
}

// Get input value S3
void barChart::getInputS3()
{
	cout << "Please enter value for bar " << i << " (1-30): " << endl;
	i++;
	cin >> s3;

	// Called test function to validated correct input
	S3 = barChart::test(s3);
}

// Get input value S4
void barChart::getInputS4()
{
	cout << "Please enter value for bar " << i << " (1-30): " << endl;
	i++;
	cin >> s4;

	// Called test function to validated correct input
	S4 = barChart::test(s4);
}

// Get input value S5
void barChart::getInputS5()
{
	cout << "Please enter value for bar " << i << " (1-30): " << endl;
	i++;
	cin >> s5;

	// Called test function to validated correct input
	S5 = barChart::test(s5);
}

// 
void barChart::displayStars()
{
	cout << endl;
	// For loop to display S1
	for (int a{ 1 }; a <= S1; a++) 
	{
		cout << "*";
	}
	cout << endl;
	// For loop to display S2
	for (int b{ 1 }; b <= S2; b++)
	{
		cout << "*";
	}
	cout << endl;
	// For loop to display S1
	for (int c{ 1 }; c <= S3; c++)
	{
		cout << "*";
	}
	cout << endl;
	// For loop to display S1
	for (int d{ 1 }; d <= S4; d++)
	{
		cout << "*";
	}
	cout << endl;
	// For loop to display S1
	for (int e{ 1 }; e <= S5; e++)
	{
		cout << "*";
	}
	cout << endl;

	cout << "Here is your Bar-Graph!" << endl;
}

// Test for valid inputs 
int barChart::test(int input)
{
	if ((input >= 1) && (input <= 30))
	{
		return input;
	}
	else if (input == -1)
	{
		cout << "Goodbye" << endl;
		exit(0);
	}
	else
	{
		cout << "Invalid input! Please try again:" << endl;
		cin >> input;
		return test(input);
	}
		
}