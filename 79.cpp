#include <iostream>
#include <cmath>  // power function ?? ???
using namespace std;

bool isArmstrong(int num) {
    int sum = 0, temp, remainder, digits = 0;

    temp = num;
    
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = num;
    
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);  
        temp /= 10;
    }
    return sum == num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num))
        cout << num << " is an Armstrong Number." << endl;
    else
        cout << num << " is not an Armstrong Number." << endl;

    return 0;
}
