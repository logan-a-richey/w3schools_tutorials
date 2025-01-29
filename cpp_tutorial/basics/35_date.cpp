/*
W3Schools - C++ Tutorial
35_date.cpp
https://www.w3schools.com/cpp/cpp_date.asp
Date: 2024-12-23
*/

#include <ctime> // Import the ctime library
#include <iostream>
#include <string>
using namespace std;

// Example 01: Display current date and time
void example_01() {
    time_t timestamp;
    time(&timestamp);

    // Display the date and time represented by the timestamp
    cout << ctime(&timestamp);
}

/*
Two ways to use the time() function:
1. Write a timestamp to the memory location given by the parameter.
2. Pass a NULL pointer and use the return value directly:
   `time_t timestamp = time(NULL);`
*/

/*
Data Types for Dates and Times:
- time_t: Represents a timestamp (moment in time as a single number).
- struct tm: Represents date and time components as members.

Datetime structure members:
- tm_sec: Seconds (0-59)
- tm_min: Minutes (0-59)
- tm_hour: Hours (0-23)
- tm_mday: Day of the month (1-31)
- tm_mon: Months (0-11, January is 0)
- tm_year: Years since 1900 (e.g., 2024 is 124)
- tm_wday: Weekday (0-6, Sunday is 0)
- tm_yday: Day of the year (0-365, January 1 is 0)
- tm_isdst: Daylight Saving Time (positive for in effect, 0 for not, negative for unknown)
*/

// Example 02: Create and display a custom timestamp
void example_02() {
    struct tm datetime = {};
    time_t timestamp;

    datetime.tm_year = 2023 - 1900; // Years since 1900
    datetime.tm_mon = 12 - 1;      // Months since January
    datetime.tm_mday = 17;         // Day of the month
    datetime.tm_hour = 12;
    datetime.tm_min = 30;
    datetime.tm_sec = 1;
    datetime.tm_isdst = -1;        // Use system's timezone setting

    timestamp = mktime(&datetime);

    cout << ctime(&timestamp);
}

// Example 03: Find the weekday of a given date
void example_03() {
    struct tm datetime = {};
    datetime.tm_year = 2023 - 1900;
    datetime.tm_mon = 12 - 1;
    datetime.tm_mday = 17;
    datetime.tm_hour = 0;
    datetime.tm_min = 0;
    datetime.tm_sec = 0;
    datetime.tm_isdst = -1;

    mktime(&datetime);

    string weekdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    cout << "The date is on a " << weekdays[datetime.tm_wday] << endl;
}

/*
The localtime() and gmtime() functions:
- localtime(): Converts timestamp to local time zone.
- gmtime(): Converts timestamp to GMT.

These functions return pointers to datetime structures. To ensure stability, copy the structure by dereferencing the pointer.
*/

// Example 04: Convert timestamp to local time
void example_04() {
    time_t timestamp = time(NULL);
    struct tm datetime = *localtime(&timestamp);

    cout << "Hour: " << datetime.tm_hour << endl;
}

/*
The asctime() function:
- Displays dates from datetime structures.
- Does not correct invalid dates.
*/

// Example 05: Display current date using asctime
void example_05() {
    time_t timestamp = time(NULL);
    struct tm datetime = *localtime(&timestamp);

    cout << asctime(&datetime);
}

// Example 06: Correct invalid dates with mktime
void example_06() {
    struct tm datetime = {};
    datetime.tm_year = 2022 - 1900;
    datetime.tm_mon = 0;  // January
    datetime.tm_mday = 32; // Invalid day
    datetime.tm_hour = 0;
    datetime.tm_min = 0;
    datetime.tm_sec = 0;
    datetime.tm_isdst = -1;

    mktime(&datetime);

    cout << asctime(&datetime);
}

/*
The strftime() function:
- Allows custom formatting of dates and times.
*/

// Example 07: Format dates using strftime
void example_07() {
    time_t timestamp = time(NULL);
    struct tm datetime = *localtime(&timestamp);

    char output[50];

    strftime(output, 50, "%B %e, %Y", &datetime); // Full date
    cout << output << endl;

    strftime(output, 50, "%I:%M:%S %p", &datetime); // Time in 12-hour format
    cout << output << endl;

    strftime(output, 50, "%m/%d/%y", &datetime); // Short date
    cout << output << endl;

    strftime(output, 50, "%a %b %e %H:%M:%S %Y", &datetime); // Full timestamp
    cout << output << endl;
}

/*
Measuring time:
1. difftime(): Calculates difference in seconds between two timestamps.
2. clock(): Measures CPU time for short intervals.
*/

// Example 08: Measure time until next year
void example_08() {
    time_t now = time(NULL);
    struct tm datetime = *localtime(&now);

    datetime.tm_year += 1;
    datetime.tm_mon = 0;
    datetime.tm_mday = 1;
    datetime.tm_hour = 0;
    datetime.tm_min = 0;
    datetime.tm_sec = 0;
    datetime.tm_isdst = -1;

    time_t nextyear = mktime(&datetime);

    double diff = difftime(nextyear, now);
    cout << diff << " seconds until next year" << endl;
}

// Example 09: Measure short intervals of CPU time
void example_09() {
    clock_t before = clock();
    int k = 0;

    for (int i = 0; i < 100000; i++) {
        k += i;
    }

    clock_t duration = clock() - before;
    cout << "Duration: " << static_cast<float>(duration) / CLOCKS_PER_SEC << " seconds" << endl;
}

int main() {
    example_01();
    example_02();
    example_03();
    example_04();
    example_05();
    example_06();
    example_07();
    example_08();
    example_09();

    return 0;
}

