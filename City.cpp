#include "city.h"
#include <iostream>
#include <string>

using namespace std;

City::City()
{
}

City::City(string name, int population, int year_of_foundation)
{
	this->name = name;
	this->population = population;
	this->year_of_foundation = year_of_foundation;
}


City * City::set_name(string name)
{
	this->name = name;
	return this;
}


int City::set_population(int population)
{
	this->population = population;
	return population;
}

int City::set_year_of_foundation(int year_of_foundation)
{
	this->year_of_foundation= year_of_foundation;
	return year_of_foundation;
}


string City::get_name()
{
	return name;
}

int City::get_population()
{
	return population;
}


int City::get_year_of_foundation()
{
	return year_of_foundation;
}




City::~City()
{
	cout << "This is the destructor";
}



