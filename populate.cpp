#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to populate the array
vector<int> populateArray() {
    vector<int> arr;
    string input;

    cout << "Enter elements to add to the array. Type 'done' when finished." << endl;

    while (true) {
        cout << "Enter element: ";
        cin >> input;

        if (input == "done") {
            break;
        }

        try {
            int element = stoi(input);
            arr.push_back(element);
        } catch (invalid_argument const &e) {
            cout << "Please enter a valid integer." << endl;
        }
    }

    return arr;
}

// Function to perform bubble sort
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> result = populateArray();

    cout << "Array before sorting: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    bubbleSort(result);

    cout << "Array after sorting: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
