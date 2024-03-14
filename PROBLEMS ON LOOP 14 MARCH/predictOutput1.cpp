#include <iostream>
using namespace std;

int main() {
    int i;
    while (i = 10) {
        cout << i << endl;
        i = i + 1;
    }
    return 0;
}

//In this program loop condition is wrong we are declare i=10
//so my code run infanite time