#include <iostream>
using namespace std;


bool isAutomorphic(int num) {
    int square = num * num;
    int temp = num;

    
    int divisor = 1;
    while (temp > 0) {
        divisor *= 10;
        temp /= 10;
    }


    return square % divisor == num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isAutomorphic(num))
        cout << num << " is an Automorphic Number." << endl;
    else
        cout << num << " is not an Automorphic Number." << endl;

    return 0;
}
