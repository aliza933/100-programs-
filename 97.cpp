#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is Automorphic
bool isAutomorphic(int num) {
    int square = num * num;
    int digits = 0;
    int temp = num;

    
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    
    int lastDigits = square % static_cast<int>(pow(10, digits));

    
    return lastDigits == num;
}

int main() {
    int n;
    cout << "Enter a number (n): ";
    cin >> n;

    cout << "Automorphic numbers between 1 and " << n << " are: ";
    
    
    for (int i = 1; i <= n; i++) {
        if (isAutomorphic(i)) {
            cout << i << " "; 
        }
    }

    cout << endl;

    return 0;
}
