/* 
Purpose:
A calculator used to calculate the
ratio of C (carbon) to N (nitrogen)

Formula:
%C/%N * 1.166181001

Uncomment the version you wish to use and comment out the other version. 

*/

////Maunal entry version.

//#include <iostream>
//#include <cmath>
//
////Percentage of carbon.
//float percentc;
////Percentage of nitrogen.
//float percentn;
//
//void calculate()
//{
//	//Total of %C / %N.
//	float total;
//	//Total * 1.166181001.
//	float final;
//
//	total = (percentc / percentn);
//
//	final = total * 1.166181001;
//
//	std::cout << final << ":1" << "\n";
//}
//
//int main(int argc, char** argv)
//{
//	while (true)
//	{
//		std::cout << "Enter percentage of carbon (C): ";
//		std::cin >> percentc;
//		std::cout << "Enter percentage of nitrogen (N): ";
//		std::cin >> percentn;
//
//		calculate();
//		std::cout << "Complete!\n";
//	}
//
//	return 0;
//}


//Automated version.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
float x;
float y;

void calculate()
{
	//Total of %C / %N.
	float total;
	//Total * 1.166181001.
	float final;

	total = (x / y);

	final = total * 1.166181001;

	std::cout << final << ":1" << "\n";
}

int main(int argc, char** argv)
{
	std::ifstream file;
	//Change the name in quotations to match the name of your file.
	file.open("percent.txt");
	
	while (file >> x >> y)
	{
		//Used to test if calculation was accurate. 
		/*float end = x * y;
		std::cout << end << "\n";*/
		calculate();
	}
	return 0;
}

