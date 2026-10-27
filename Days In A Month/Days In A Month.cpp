// Days In A Month.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This program will ask for a month and a year and will give the user the number of days in that month and if it a leay year or not. 

#include <iostream>

bool isLeapYear(int year)
    {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return true;
    return false;
    }

int main()
{
    using namespace std; 

    int month, year; 
    cout << "Enter a month ranging from 1 to 12: \n";
    cin >> month; 

    cout << "Enter a year: \n";
    cin >> year; 

    if (month <1 || month >12) 
    {
        cout << "Invalid month entered. Enter a month ranging from 1 to 12: \n"; 
        return 0; 

    }

    bool leap = isLeapYear(year); 
    int days; 

    switch (month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        days = 31; 
        break; 

    case 4: case 6: case 9: case 11: 
        days = 30; 
        break; 

    case 2: 
        if (leap)
            days = 29;
        else days = 28; 
        break; 


    }

    cout<< "Year: " << year << (leap? " is a leap year" : " is not a leap year \n");

    cout << " \n" << "Month: " << month << " has " << days << " days \n"; 

    return 0; 


}
