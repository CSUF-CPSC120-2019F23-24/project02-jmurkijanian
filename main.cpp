//Joseph Murkijanian
// This program calculates and displays business expenses.
#include <iostream>
#include <iomanip>
#include <string>
int main()
{
double Meal, Hotel, Total;
std::string Location;
int Days;

//Adds Dollar sign to code
char dollar_sign = '$';

//asks for general info about trip
std::cout << "Welcome to the Business Trip Tracker!\n";

//Asks for location
//Used getline to output more than two words for the location
std::cout << "What is the business trip location?\n";
getline(std::cin, Location);

//Asks for days
std::cout << "How many days will the trip take?\n";
std::cin >> Days;

//Asks for hotel expenses
std::cout << "What is the total hotel expense?\n";
std::cin >> Hotel;

//Asks for meal expense
std::cout << "What is the total meal expense?\n";
std::cin >> Meal;

//Find the total
Total = Meal + Hotel;

//Sets up data in a chart
std::cout << std::setw(10) << "Location"
<< std::setw(14) << "Days"
<< std::setw(14) << "Meal"
<< std::setw(14) << "Hotel"
<<std::setw(13) << "Total" <<std::endl;

//Added the dollar_sign value I created above to the output as shown
//Used substr to set a range of 20 for the location output
std::cout << std::setw(10) << Location.substr(0, 20)
<< std::setw(10) << Days
<< std::setw(10) << dollar_sign << std::fixed << std::setprecision(2) << Meal
<< std::setw(8) <<dollar_sign << std::fixed << std::setprecision(2) << Hotel
<< std::setw(7) << dollar_sign << std::fixed << std::setprecision(2)<<Total <<std::endl;


return 0;
}
