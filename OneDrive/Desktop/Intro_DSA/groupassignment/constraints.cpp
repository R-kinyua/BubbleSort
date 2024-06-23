#include <iostream>
#include <vector>  // Required for vector container

using namespace std;

vector<int> bubble_sort(vector<int> arr) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) {
            break;  // If no elements were swapped, the array is sorted
        }
    }
    return arr;
}

int main() {
    // Example usage:
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    
    cout << "Original array:";
    for (int num : arr) {
        cout << " " << num;
    }
    cout << endl;
    
    arr = bubble_sort(arr);  // Sort the array
    
    cout << "Sorted array:";
    for (int num : arr) {
        cout << " " << num;
    }
    cout << endl;
    
    return 0;
}
