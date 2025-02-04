#include <iostream>
using namespace std;

void fibonacci(int n) {
    long long first = 0, second = 1, next;

    cout << "Fibonacci Series: " << first << " " << second << " ";

    for (int i = 2; i < n; i++) {
        next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }

    cout << endl;
}

int main() {
    int num;
    cout << "Enter the number of terms: ";
    cin >> num;

    if (num <= 0)
        cout << "Please enter a positive integer." << endl;
    else
        fibonacci(num);

    return 0;
}
