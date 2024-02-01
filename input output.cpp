#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n >= 1 && n <= 9) {
        // Array to store the lowercase English words from one to nine
        const char *words[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        cout << words[n - 1] << endl;
    } else if (n > 9) {
        cout << "Greater than 9" << endl;
    }

    return 0;
}