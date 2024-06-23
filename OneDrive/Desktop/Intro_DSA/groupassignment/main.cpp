#include <iostream>
#include <vector>
#include <limits>

using namespace std;

// Function to get the number of elements from the user
int get_number_of_elements() {
    int num_elements;
    while (true) {
        try {
            cout << "Enter the number of elements in the array: ";
            cin >> num_elements;
            if (num_elements < 0) {
                throw invalid_argument("The number of elements must be a positive integer.");
            }
            return num_elements;
        } catch (const invalid_argument& e) {
            cout << e.what() << endl;
            // Clear input buffer in case of error
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}

// Function to get the elements of the array from the user
vector<int> get_elements(int num_elements) {
    vector<int> arr;
    for (int i = 0; i < num_elements; ++i) {
        while (true) {
            try {
                int element;
                cout << "Enter element " << i + 1 << ": ";
                cin >> element;
                if (cin.fail()) {
                    cin.clear(); // Clear input error state
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid input
                    throw invalid_argument("Please enter a valid integer.");
                }
                arr.push_back(element);
                break; // Exit the inner loop once a valid element is entered
            } catch (const invalid_argument& e) {
                cout << e.what() << endl;
                // Clear input buffer in case of error
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
    }
    return arr; // Return the vector of elements
}

// Function to sort the array using Bubble Sort
vector<int> bubble_sort(vector<int> arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr;
}

void print_vector(const vector<int>& vec) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    // Get the number of elements from the user
    int num_elements = get_number_of_elements();
    
    // Get the elements of the array from the user
    vector<int> arr = get_elements(num_elements);
    
    // Print the unsorted array
    cout << "Unsorted array: ";
    print_vector(arr);
    
    // Sort the array using Bubble Sort
    arr = bubble_sort(arr);
    
    // Print the sorted array
    cout << "Sorted array: ";
    print_vector(arr);
    
    return 0;
}