/*
Write a program that reverses a 4 digit integer number and
place the reversed number into an integer variable.
*/

#include <iostream>
using namespace std;

int main() {
    
    int number = 1234;
    int copy = number;
    int rev_num;
    //rev_num = 4321
    int n1, n2, n3, n4;

    n1 = copy % 10;
    copy = copy / 10; //123

    n2 = copy % 10;
    copy = copy / 10; //12

    n3 = copy % 10;
    copy = copy / 10; //1

    n4 = copy % 10;
    copy = copy / 10; //0

    //joining the digits in reverse order

    rev_num = rev_num + (n4 * 1); //1
    rev_num = rev_num + (n3 * 10); //21
    rev_num = rev_num + (n2 * 100); //321
    rev_num = rev_num + (n1 * 1000); //4321

    cout << "number = " << number << endl;
    cout << "rev_num = " << rev_num << endl;

    return 0;
}
