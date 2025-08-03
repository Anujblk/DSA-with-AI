#include <iostream>
#include <vector>
using namespace std;

void sortArray(int arr[], int n) {
    vector<int> zeroes, ones, twos;
    // Step 1: Partition values into three arrays
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) zeroes.push_back(0);
        else if (arr[i] == 1) ones.push_back(1);
        else twos.push_back(2);
    }
    // Step 2: Write back all zeroes, then ones, then twos
    int idx = 0;
    for (int x : zeroes) arr[idx++] = x;
    for (int x : ones) arr[idx++] = x;
    for (int x : twos) arr[idx++] = x;
}

int main() {
    int arr[] = {2, 0, 1, 2, 0, 1, 0, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;

    sortArray(arr, n);

    cout << "Sorted array: ";
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
