#include <iostream>
using namespace std;


bool isSpyNumber(int num) {
    int sum = 0, product = 1, remainder;

    
    while (num != 0) {
        remainder = num % 10;
        sum += remainder;       
        product *= remainder;   
        num /= 10;              
    }
    return sum == product;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isSpyNumber(num))
        cout << num << " is a Spy Number." << endl;
    else
        cout << num << " is not a Spy Number." << endl;

    return 0;
}
