def populate_array():
    # Initialize an empty array
    arr = []

    print("Enter elements to add to the array. Type 'done' when finished.")

    while True:
        # Prompt the user to enter an element
        user_input = input("Enter element: ")

        # Check if the user wants to stop adding elements
        if user_input.lower() == 'done':
            break
        else:
            # Try to convert the user input to an integer
            try:
                # Convert the user input to an integer and append it to the array
                arr.append(int(user_input)) # adds an element at the end of the array
            except ValueError:
                # If the user input cannot be converted to an integer, print an error message
                print("Please enter a valid integer.")

    # Time complexity: O(n)
    # Space complexity: O(n)
    return arr


def bubble_sort(arr):
    n = len(arr)
    # Iterate through the array n times
    for i in range(n):
        # Iterate through the array n-i-1 times (since the last i elements are already sorted)
        for j in range(0, n - i - 1):
            # If the current element is greater than the next element, swap them
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

    # Time complexity: O(n^2)
    # Space complexity: O(1)
    return arr


# Example usage
result = populate_array()
print("Array before sorting:", result)

sorted_result = bubble_sort(result)
print("Array after sorting:", sorted_result)
