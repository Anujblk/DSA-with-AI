#include <iostream>
using namespace std;

// Step 1: Count the number of 0s, 1s, and 2s
void sortArray(int arr[], int n) {
    int count0 = 0, count1 = 0, count2 = 0;

    // Count occurrences
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) count0++;
        else if (arr[i] == 1) count1++;
        else count2++;
    }

    // Step 2: Overwrite the array with counted numbers
    int i = 0;
    while (count0-- > 0) arr[i++] = 0;
    while (count1-- > 0) arr[i++] = 1;
    while (count2-- > 0) arr[i++] = 2;
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
