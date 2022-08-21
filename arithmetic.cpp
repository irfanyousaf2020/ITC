#include <iostream>
using namespace std;

int main() {
    
    cout << 3 + 8 / 4 * 1 - 7 % 2 + 3 - 1 * 3 / 3 + 5 % 2 << endl;
    cout << endl;
    cout << 3 + 8 / 4 * 1 - 7 % 2 + (3 - 1 * (3 / 3 + 5 % 2)) << endl;
    
    return 0;
}
