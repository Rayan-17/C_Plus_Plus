#include <iostream>
using namespace std;

int main() {
    int num, original, remainder, sum = 0;
    cout<<"Enter a Number:- ";
    cin >> num;
    original = num;

    while (num != 0) {
        remainder = num % 10;
        sum += remainder * remainder * remainder;
        num /= 10;
    }

    if (sum == original)
        cout << "Armstrong number";
    else
        cout << "Not an Armstrong number";

    return 0;
}
