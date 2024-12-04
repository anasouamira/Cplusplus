

#include <iostream>
#include <cfloat>
using namespace std;

int main()
{

    cout << "================================================================\n";
    cout << " char Range : (" << CHAR_MIN << " , " << CHAR_MAX << ")\n";
    cout << " Unsigned char Range : (" << 0 << " , " << UCHAR_MAX << ")\n\n";

    cout << " short int Range : (" << SHRT_MIN << " , " << SHRT_MAX << ")\n";
    cout << " Unsigned short int Range : (" << 0 << " , " << USHRT_MAX << ")\n\n";

    cout << " int Range : (" << INT_MIN << " , " << INT_MAX << ")\n";
    cout << " Unsigned int Range : (" << 0 << " , " << UINT_MAX << ")\n";
    cout << " long int Range : (" << LONG_MIN << " , " << LONG_MAX << ")\n";
    cout << " Unsigned long int Range : (" << 0 << " , " << ULONG_MAX << ")\n";

    cout << " long long int Range : (" << LLONG_MIN << " , " << LLONG_MAX << ")\n";
    cout << " Unsigned long long int Range : (" << 0 << " , " << ULLONG_MAX << ")\n\n";

    cout << " float Range : (" << FLT_MIN << " , " << FLT_MAX << ")\n";
    cout << " float (Negative) Range : (" << -FLT_MIN << " , " << -FLT_MAX << ")\n\n";

    cout << " double Range : (" << DBL_MIN << " , " << DBL_MAX << ")\n";
    cout << " double (Negative) Range : (" << -DBL_MIN << " , " << -DBL_MAX << ")\n";
    cout << " double Range : (" << DBL_MIN << " , " << DBL_MAX << ")\n";
    cout << " long double Range : (" << LDBL_MIN_10_EXP << " , " << LDBL_MAX_10_EXP << ")\n\n";
    cout << "================================================================\n";
}
