#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b;
    
    // Input two positive integers
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (1 <= i && i <= 9) {
            // English representation of numbers 1 to 9
            const char* numberWords[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
            cout << numberWords[i - 1] << endl;
        } else if (i > 9) {
            // Check if number is even or odd
            if (i % 2 == 0) {
                cout << "even" << endl;
            } else {
                cout << "odd" << endl;
            }
        }
    }

    return 0;
}
