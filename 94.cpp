#include <iostream>
using namespace std;

bool isEvil(int num) {
    int count = 0;

    while (num > 0) {
        if (num % 2 == 1) {
            count++;
        }
        num /= 2;
    }

    
    return (count % 2 == 0);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isEvil(num)) {
        cout << num << " is an Evil number." << endl;
    } else {
        cout << num << " is an Odious number." << endl;
    }

    return 0;
}
