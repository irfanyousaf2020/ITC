#include <iostream>
#include <iomanip>
#include <cfloat>
using namespace std;

//TYPE SIZE(BYTES) MIN_VAL MAX_VAL

int main() {

    cout << left;
    cout << "---------------------------------------------------------------------------------------------------" << endl;
    cout << setw(25) << "TYPE" << setw(25) << "SIZE(BYTES)" << setw(25) <<"MIN_VAL" << setw(25) << "MAX_VAL" << endl;
    cout << "---------------------------------------------------------------------------------------------------" << endl;

    //char
    cout << setw(25) << "char" << setw(25) << sizeof(char) << setw(25) << CHAR_MIN << setw(25) << CHAR_MAX << endl;
    cout << setw(25) << "unsigned char" << setw(25) << sizeof(unsigned char) << setw(25) << "0" << setw(25) << UCHAR_MAX << endl;
    cout << setw(25) << "signed char" << setw(25) << sizeof(signed char) << setw(25) << SCHAR_MIN << setw(25) << SCHAR_MAX << endl;
    cout << "---------------------------------------------------------------------------------------------------" << endl;

    //int
    cout << setw(25) << "int" << setw(25) << sizeof(int) << setw(25) << INT_MIN << setw(25) << INT_MAX << endl;
    cout << setw(25) << "unsigned int" << setw(25) << sizeof(unsigned int) << setw(25) << "0" << setw(25) << UINT_MAX << endl;
    cout << setw(25) << "signed int" << setw(25) << sizeof(signed int) << setw(25) << INT_MIN << setw(25) << INT_MAX << endl;
    cout << "---------------------------------------------------------------------------------------------------" << endl;

    //short int
    cout << setw(25) << "short int" << setw(25) << sizeof(short int) << setw(25) << SHRT_MIN << setw(25) << SHRT_MAX << endl;
    cout << setw(25) << "unsigned short int" << setw(25) << sizeof(unsigned short int) << setw(25) << "0" << setw(25) << USHRT_MAX << endl;
    cout << setw(25) << "signed short int" << setw(25) << sizeof(signed short int) << setw(25) << SHRT_MIN << setw(25) << SHRT_MAX << endl;
    cout << "---------------------------------------------------------------------------------------------------" << endl;

    //long int
    cout << setw(25) << "long int" << setw(25) << sizeof(long int) << setw(25) << LONG_MIN << setw(25) << LONG_MAX << endl;
    cout << setw(25) << "unsigned long int" << setw(25) << sizeof(unsigned long int) << setw(25) << "0" << setw(25) << ULONG_MAX << endl;
    cout << setw(25) << "signed long int" << setw(25) << sizeof(signed long int) << setw(25) << LONG_MIN << setw(25) << LONG_MAX << endl;
    cout << "---------------------------------------------------------------------------------------------------" << endl;

    //long long int
    cout << setw(25) << "long long int" << setw(25) << sizeof(long long int) << setw(25) << LLONG_MIN << setw(25) << LLONG_MAX << endl;
    cout << setw(25) << "unsigned long long int" << setw(25) << sizeof(unsigned long long int) << setw(25) << "0" << setw(25) << ULLONG_MAX << endl;
    cout << setw(25) << "signed long long int" << setw(25) << sizeof(signed long long int) << setw(25) << LLONG_MIN << setw(25) << LLONG_MAX << endl;
    cout << "---------------------------------------------------------------------------------------------------" << endl;

    //float
    cout << setw(25) << "float" << setw(25) << sizeof(float) << setw(25) << FLT_MIN << setw(25) << FLT_MAX << endl;
    cout << "---------------------------------------------------------------------------------------------------" << endl;

    //double
    cout << setw(25) << "double" << setw(25) << sizeof(double) << setw(25) << DBL_MIN << setw(25) << DBL_MAX << endl;
    cout << "---------------------------------------------------------------------------------------------------" << endl;

    //long double
    cout << setw(25) << "long double" << setw(25) << sizeof(long double) << setw(25) << LDBL_MIN << setw(25) << LDBL_MAX << endl;
    cout << "---------------------------------------------------------------------------------------------------" << endl;

    return 0;
}
