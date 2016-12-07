#include <iostream>
#include "City.h"
#include <string>
#include <cstdlib>


using namespace std;

int main()
{
	City city;
	string name;
	int population;
	int year_of_foundation;
	
	cout << "Name---> ";
	cin >> name;
	
	cout << "Population---> ";
	cin >> population;
	
	cout << "Year_Of_Foundation---> ";
	cin >> year_of_foundation;
	
	city.set_name(name);
	city.set_population(population);
	city.set_year_of_foundation(year_of_foundation);
	
	cout << "\n Name--> " << city.get_name() << endl;
	cout << "\n Population--> " << city.get_population() << endl;
	cout << "\n Year_Of_Foundation--> " << city.get_year_of_foundation() << endl;
	
	cout << "\n This is the friend fucntion" << endl;
	
	system("pause");
	return 0;
}


