#include <iostream>
using namespace std;


int sumOfSquares(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    return sum;
}

bool isHappy(int num) {
    int slow = num;
    int fast = num;

    
    do {
        slow = sumOfSquares(slow);      
        fast = sumOfSquares(sumOfSquares(fast)); 
    } while (slow != fast);

    
    return (slow == 1);
}

int main() {
    int n;
    cout << "Enter a number (n): ";
    cin >> n;

    cout << "Happy numbers between 1 and " << n << " are: ";

    
    for (int i = 1; i <= n; i++) {
        if (isHappy(i)) {
            cout << i << " "; 
        }
    }

    cout << endl;

    return 0;
}
