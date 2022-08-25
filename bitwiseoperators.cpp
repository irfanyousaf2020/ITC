/*
x & y
x | y
x ^ y
~x
~y
x << 1
y << 2
x >> 1
y >> 2
*/

#include <iostream>
using namespace std;

int main() {
    
    int x = 3;
    int y = 2;
    
    cout << x << " & " << y << " = "<< (x & y) << endl; //2
    cout << x << " | " << y << " = "<< (x | y) << endl; //3
    cout << x << " ^ " << y << " = "<< (x ^ y) << endl; //1
    cout << "~" << x << " = " << ~x << endl; //-4
    cout << "~" << y << " = " << ~y << endl; //-3
    cout << x << " << " << "1 = " << (x << 1) << endl; //6
    cout << y << " << " << "2 = " << (y << 2) << endl; //8
    cout << x << " >> " << "1 = " << (x >> 1) << endl; //1
    cout << y << " >> " << "2 = " << (y >> 2) << endl; //0

    return 0;
}
