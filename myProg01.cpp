// myProg.cpp
// Author: John Judge
// Date: 10/29/19
//Simple loop example
#include <iostream>

using namespace std;

int main() {
    // Simple for loop that counts down from n to 1

    int n = 5;

    for (int i = n; i > 0; i--) {
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}
