/* 
A calculator used to calculate the
ratio of C (carbon) to N (nitrogen)
*/

#include <iostream>
#include <cmath>

int c;
int n;
int AM;

void calculate()
{
	int percentc;
	int percentn;
	int AMN = 14;
	int AMC = 12;

	percentc = c / AMC;
	percentn = n / AMN;

	float total;
	total = percentc / percentn;

	std::cout << total << "\n";
}

int main(int argc, char** argv)
{
	std::cout << "Enter percentage of carbon (C): ";
	std::cin >> c;
	std::cout << "Enter percentage of nitrogen (N): ";
	std::cin >> n;

	calculate();
	std::cout << "Complete!";


	return 0;
}