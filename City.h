#include <string>

using namespace std;

class City
{
	private:
		std::string name;
		int population; 
		int year_of_foundation;
		friend void show(City&);
	public:
		City(void);
		City(string name, int population, int year_of_foundation);
		City* set_name(string);
		int set_population(int);
		int set_year_of_foundation(int);
		string get_name();
		int get_population();
		int get_year_of_foundation();
		~City();
};


