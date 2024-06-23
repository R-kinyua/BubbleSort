#include <iostream>
#include <vector>  // Required for vector container
#include <limits>  // Required for numeric_limits

using namespace std;

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