#include <iostream>
using namespace std;


bool isSpyNumber(int num) {
    int sum = 0;
    int product = 1;
    int digit;
    while (num > 0) {
        digit = num % 10;  
        sum += digit;     
        product *= digit;  
        num /= 10;         
    }

    
    return sum == product;
}

int main() {
    int n;
    cout << "Enter a number (n): ";
    cin >> n;

    cout << "Spy numbers between 1 and " << n << " are: ";
    
    
    for (int i = 1; i <= n; i++) {
        if (isSpyNumber(i)) {
            cout << i << " "; 
        }
    }

    cout << endl;

    return 0;
}
