// This program calculates an amount of annual property tax 
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double value1; //actual value
	double value2; //assessed value	
	double rate; //current tax rate
	double tax; // annual property tax
		
	cout << fixed << setprecision(2);
	
	//get input
	cout << "Enter the actual value of a piece of property: ";
	cin >> value1;
	cout << "Enter the current tax rate for each $ 100 of assessed value: ";
	cin >> rate;

	//calculate the amount of annual property tax
	value2 = value1*0.6;
	tax = value2 / 100 * rate;

	//display the result	
	cout << "The amount of annual property tax is $ " << tax << "\n";

	system("pause");
	return 0;
}