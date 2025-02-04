#include <iostream>
using namespace std;

bool isPerfectNumber(int num) {
    int sum = 0;

    
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    
    return sum == num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPerfectNumber(num))
        cout << num << " is a Perfect Number." << endl;
    else
        cout << num << " is not a Perfect Number." << endl;

    return 0;
}
