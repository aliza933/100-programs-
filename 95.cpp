#include <iostream>
using namespace std;


long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    cout << "Enter a number (n): ";
    cin >> n;

    
    for (int i = 1; i <= n; i++) {
        cout << "Factorial of " << i << " is: " << factorial(i) << endl;
    }

    return 0;
}
