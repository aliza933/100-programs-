#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of digits (n): ";
    cin >> n;

    int largestNumber = pow(10, n) - 1;

    cout << "The largest number with " << n << " digits is: " << largestNumber << endl;

    return 0;
}
