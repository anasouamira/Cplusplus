#pragma warning(disable : 4996) // Disable warning for using unsafe functions like ctime (Visual Studio specific)

#include <ctime>    // Required for time-related functions
#include <iostream> // Required for input/output
using namespace std;

int main()
{
    // Get the current time as a time_t object (number of seconds since Jan 1, 1970)
    time_t t = time(0);

    // Convert the time to a human-readable string in the local timezone
    char* dt = ctime(&t);

    // Display the local date and time
    cout << "Local date and time is: " << dt << "\n";

    // Convert time_t to tm struct for UTC/GMT time
    tm* gmtm = gmtime(&t);

    // Convert the UTC tm structure to a readable string
    dt = asctime(gmtm);

    // Display the UTC date and time
    cout << "UTC date and time is: " << dt;

    return 0;
}

/*
========================
🔍 Explanation of Code:
========================

- `time_t t = time(0);`
  → Retrieves current time as seconds since Unix Epoch (Jan 1, 1970).

- `ctime(&t);`
  → Converts the time to a C-string (char*) in local time.

- `gmtime(&t);`
  → Converts the time to a tm struct representing UTC time.

- `asctime(gmtm);`
  → Converts the UTC tm struct to a readable string.

========================
📝 Summary of Differences:
========================

| Function       | Purpose                             | Output Format               | Time Zone  |
|----------------|-------------------------------------|-----------------------------|------------|
| `ctime(&t)`    | Converts `time_t` to string         | "Day Mon Date Time Year"    | Local Time |
| `gmtime(&t)`   | Converts `time_t` to `tm` struct    | Use with `asctime()`        | UTC        |
| `asctime()`    | Converts `tm` struct to string      | "Day Mon Date Time Year"    | Depends on `tm` input |

*/
