#include <iostream>
#include <cmath>
using namespace std;


bool isSunnyNumber(int num) {
    int nextNum = num + 1;
    int sqrtNextNum = sqrt(nextNum);

    
    return (sqrtNextNum * sqrtNextNum == nextNum);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isSunnyNumber(num))
        cout << num << " is a Sunny Number." << endl;
    else
        cout << num << " is not a Sunny Number." << endl;

    return 0;
}
