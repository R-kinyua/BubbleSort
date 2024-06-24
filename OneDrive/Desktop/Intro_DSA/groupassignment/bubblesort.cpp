#include <iostream>
#include <vector> // library used to create dynamic arrays that are useful for storing and manipulating data
#include <string> // library that provides a class called 'std::strings'

// Function to populate an array
std::vector<int> populate_array() {
    // Initialize an empty vector
    std::vector<int> arr;
    // empty array
    // Prompt the user to enter elements
    std::cout << "Enter elements to add to the array. Type 'done' when finished." << std::endl;

    // Loop until the user types 'done'
    std::string user_input;
    while (true) {
        // Prompt the user to enter an element
        std::cout << "Enter element: ";
        std::getline(std::cin, user_input);

        // Check if the user wants to stop adding elements
        if (user_input == "done") {
            break;
        } else {
            // Try to convert the user input to an integer
            try {
                // Convert the user input to an integer and append it to the array
                int num = std::stoi(user_input); // library function that converts a string to an integer 
                arr.push_back(num); // adds a new element to the ebd of the vector
            } catch (const std::invalid_argument& e) {
                // If the user input cannot be converted to an integer, print an error message
                std::cout << "Please enter a valid integer." << std::endl;
            }
        }
    }

    // Return the populated array
    return arr;
}

// Function to bubble sort an array
std::vector<int> bubble_sort(std::vector<int> arr) {
    // Calculate the length of the array
    int n = arr.size();

    // Iterate through the array n times
    for (int i = 0; i < n; i++) {
        // Iterate through the array n-i-1 times (since the last i elements are already sorted)
        for (int j = 0; j < n - i - 1; j++) { // ++j would cause the program to end prematurely for it will end when j = n -i-1
            // If the current element is greater than the next element, swap them
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Return the sorted array
    return arr;
}

int main() {
    // Call the populate_array function to create an array
    std::vector<int> result = populate_array();

    // Print the original array
    std::cout << "Array before sorting: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Call the bubble_sort function to sort the array
    std::vector<int> sorted_result = bubble_sort(result);

    // Print the sorted array
    std::cout << "Array after sorting: ";
    for (int num : sorted_result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
