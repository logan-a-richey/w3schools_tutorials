/*******************************************************************************
W3Schools - C++ Tutorial
09_switch.cpp
https://www.w3schools.com/cpp/cpp_switch.asp
2024-12-23
*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

string get_int_to_day(int day){
    string day_name;  // Store the day name
    switch (day) {
        case 1:
            day_name = "Monday";
            break;
        case 2:
            day_name = "Tuesday";
            break;
        case 3:
            day_name = "Wednesday";
            break;
        case 4:
            day_name = "Thursday";
            break;
        case 5:
            day_name = "Friday";
            break;
        case 6:
            day_name = "Saturday";
            break;
        case 7:
            day_name = "Sunday";
            break;
        default:
            day_name = "Invalid day"; // In case of invalid input
    }
    return day_name;  // Return the day name
}

int main(){
    int my_num = 4;
    string my_day = get_int_to_day(my_num);
    cout << "Day " << my_num << " is " << my_day << endl;
    return 0;
}

