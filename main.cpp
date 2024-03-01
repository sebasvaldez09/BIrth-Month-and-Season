#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int month = 0;                  //number of the month
    string monthname, season;               // name of the month
// Get the month number
    cout << "Please enter a month number: ";
    cin >> month;
    
    if (month == 1)                 //add a semicolon at the end of this line and
        monthname = "January";      // observe 
    else if (month == 2)
        monthname = "Feburary";
    else if (month == 3)
        monthname = "March";
    else if (month == 4)
        monthname = "April";
    else if (month == 5)
        monthname = "May";
    else if (month == 6)
        monthname = "June";
    else if (month == 7)
        monthname = "July";
    else if (month == 8)
        monthname = "August";
    else if (month == 9)
        monthname = "September";
    else if (month == 10)
        monthname = "October";
    else if (month == 11)
        monthname = "November";
    else if (month == 12)
        monthname = "December";
    else                                    //default case
        monthname = "an invalid entry";
    if (month == 12 || month == 1 || month == 2) 
        season = "Winter";
    else if (month >= 3 && month <= 5)
        season = "Spring";
    else if (month >= 6 && month <= 8)
        season = "Summer";
    else if (month >= 9 && month <= 11)
        season = "Fall";
    else
        season = "Error";
        
        
    cout << "\nYou entered " << month << ", which corresponds to " << monthname << " and the season is " << season << endl << endl;

    return 0;
    
    
        
}
