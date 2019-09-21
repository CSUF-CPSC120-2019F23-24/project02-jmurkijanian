// This program calculates and displays business expenses.
#include <iostream>
#include <iomanip>
int main()
{
double meal, hotel, total;
std::string location;
int days;
std::string meal_string;
std::string hotel_string;
std::string total_string;
//asks for general info about trip
std::cout << "Welcome to the Business Trip Tracker!\n";

//Used getline to output more than two words for the location
std::cout << "What is the business trip location?\n";
getline(std::cin, location);

std::cout << "How many days will the trip take?\n";
std::cin >> days;

std::cout << "What is the total hotel expense?\n";
std::cin >> hotel;


std::cout << "What is the total meal expense?\n";
std::cin >> meal;

//find the total
total = meal + hotel;

//sets up data in a chart
std::cout << std::setw(10) << "location"
<< std::setw(10) << "days"
<< std::setw(10) << "meal"
<< std::setw(10) << "hotel"
<<std::setw(10) << "total" <<std::endl;

std::cout << std::setw(10) << location
<< std::setw(10) << days
<< std::setw(10) << meal
<< std::setw(10) << hotel
<< std::setw(10) <<total <<std::endl;


return 0;
}
