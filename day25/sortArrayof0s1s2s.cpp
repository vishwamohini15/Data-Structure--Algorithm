#include <iostream>
#include <vector>
using namespace std;

void SortArray(vector<int> &arr) {  // Pass vector by reference, not by value
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    int n = arr.size();

    // Count the number of 0s, 1s, and 2s
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) count0++;
        if (arr[i] == 1) count1++;
        if (arr[i] == 2) count2++;
    }

    int idx = 0;

    // Place the 0s in the array
    for (int i = 0; i < count0; i++) {
        arr[idx++] = 0;
    }

    // Place the 1s in the array
    for (int i = 0; i < count1; i++) {
        arr[idx++] = 1;
    }

    // Place the 2s in the array
    for (int i = 0; i < count2; i++) {
        arr[idx++] = 2;
    }
}

void printArray(const vector<int> &arr) {  // Pass vector by const reference
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {2, 0, 2, 1, 1, 0};

    SortArray(arr);  // Sort the array
    printArray(arr);  // Print the sorted array

    return 0;
}
