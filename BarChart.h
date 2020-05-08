// Ralph Walker II
// CIS 554 - M401 Object Oriented Programming in C++
// Syracuse University
// HW #3 - Exercise 5.16 p206
// 2 / 6 / 2020
// CreditLimit.h

#ifndef BARCHART_H
#define BARCHART_H


extern int i;

class barChart
{
public:
	// Get Input values
	void getInputS1();
	void getInputS2();
	void getInputS3();
	void getInputS4();
	void getInputS5();

	// DisplayStars function
	void displayStars();

private:
	// Test input values (1-30)
	int test(int input);

	// Cin inputs
	int s1{ 0 };
	int s2{ 0 };
	int s3{ 0 };
	int s4{ 0 };
	int s5{ 0 };

	// Inputs after test
	int S1{ 0 };
	int S2{ 0 };
	int S3{ 0 };
	int S4{ 0 };
	int S5{ 0 };
};
#endif
