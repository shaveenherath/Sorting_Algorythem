#include <iostream>
#include <vector>

using namespace std;

void insertionSort1(int n, vector<int>& arr) {
    int unsortedElement = arr[n - 1];
    int i = n - 2;

    while (i >= 0 && arr[i] > unsortedElement) {
        arr[i + 1] = arr[i];
        i--;

        for (int j = 0; j < n; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
    }

    arr[i + 1] = unsortedElement;

    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    insertionSort1(n, arr);

    return 0;
}
