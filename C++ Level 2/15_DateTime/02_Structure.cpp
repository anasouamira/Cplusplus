#pragma warning(disable : 4996) // Disables warning for using unsafe functions like localtime (Visual Studio specific)

#include <ctime>    // Required for time and date functions
#include <iostream> // Required for input/output
using namespace std;

/*
The `tm` structure holds date and time components:
--------------------------------------------------
int tm_sec   → Seconds [0, 60]           (Including leap seconds)
int tm_min   → Minutes [0, 59]
int tm_hour  → Hours   [0, 23]
int tm_mday  → Day of the month [1, 31]
int tm_mon   → Month since January [0, 11]
int tm_year  → Years since 1900
int tm_wday  → Day since Sunday [0, 6]
int tm_yday  → Day since January 1 [0, 365]
int tm_isdst → Daylight Saving Time flag (positive if DST, zero if not, negative if unknown)
*/

int main() {
    time_t t = time(0);        // Get current time in seconds since epoch (Jan 1, 1970)
    tm* now = localtime(&t);   // Convert to local time structure

    // Print each component of the local date/time
    cout << "Year: " << now->tm_year + 1900 << endl;       // Add 1900 to get current year
    cout << "Month: " << now->tm_mon + 1 << endl;          // Add 1 because months are 0-based
    cout << "Day: " << now->tm_mday << endl;
    cout << "Hour: " << now->tm_hour << endl;
    cout << "Min: " << now->tm_min << endl;
    cout << "Second: " << now->tm_sec << endl;
    cout << "Week Day (Days since Sunday): " << now->tm_wday << endl;
    cout << "Year Day (Days since Jan 1st): " << now->tm_yday << endl;
    cout << "Hours of daylight savings (DST): " << now->tm_isdst << endl;

    return 0;
}

/*
============================
📌 Summary:
============================
- `localtime(&t)` converts a `time_t` value into a `tm` structure representing local time.
- You can then access specific parts like year, month, hour, etc.
- Note:
   - `tm_year` is years since 1900 → so add 1900.
   - `tm_mon` is months since January → so add 1.
   - `tm_wday` gives you the weekday (0=Sunday).
   - `tm_isdst` tells if daylight saving time is in effect.

Useful for formatting or customizing how date/time is presented.
*/
