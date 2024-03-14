#include <iostream>
using namespace std;
int main() {
    long long number;
    cout << "Enter a number: ";
    cin >> number;
    cout<<"print the size of  long = "<<sizeof(number)<<endl;

    // Make sure the number is positive
    number = abs(number);

    int sum = 0;
    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 == 0  || digit % 2 != 0) {
            sum += digit;
        }
        number /= 10;
    }

    cout << "Sum of even digits: " << sum << std::endl;

    return 0;
}