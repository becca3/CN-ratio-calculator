/* 
A calculator used to calculate the
ratio of C (carbon) to N (nitrogen)

Formula:
%C/%N * 1.166181001
*/

#include <iostream>
#include <cmath>

//Percentge of carbon.
float percentc;
//Percentage of nitrogen.
float percentn;

void calculate()
{
	//Total of %C / %N.
	float total;
	//Total * 1.166181001.
	float final;

	total = (percentc / percentn);

	final = total * 1.166181001;

	std::cout << final << ":1" << "\n";
}

int main(int argc, char** argv)
{
	std::cout << "Enter percentage of carbon (C): ";
	std::cin >> percentc;
	std::cout << "Enter percentage of nitrogen (N): ";
	std::cin >> percentn;

	calculate();
	std::cout << "Complete!";


	return 0;
}