def populate_array():
    # Initialize an empty array
    arr = []
    
    print("Enter elements to add to the array. Type 'done' when finished.")
    
    while True:
        user_input = input("Enter element: ")
        
        if user_input.lower() == 'done':
            break
        else:
            # Add the user input to the array
            try:
                # Convert to integer before appending
                arr.append(int(user_input))
            except ValueError:
                print("Please enter a valid integer.")
    
    # Time complexity: O(n)
    # Space complexity: O(n)
    return arr

def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    
    # Time complexity: O(n^2)
    # Space complexity: O(1)
    return arr

# Example usage
result = populate_array()
print("Array before sorting:", result)

sorted_result = bubble_sort(result)
print("Array after sorting:", sorted_result)
