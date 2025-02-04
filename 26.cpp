#include <iostream>
using namespace std;

void printPascalsTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        int number = 1;  

        
        for (int space = 0; space < rows - i - 1; space++) {
            cout << " ";
        }

        
        for (int j = 0; j <= i; j++) {
            cout << number << " ";
            number = number * (i - j) / (j + 1);  
        }

        cout << endl;
    }
}

int main() {
    int rows;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> rows;

    printPascalsTriangle(rows);

    return 0;
}
