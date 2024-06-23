def get_number_of_elements():
    """
    Prompts the user to input the number of elements for the array.

    Returns:
    int: The number of elements in the array.
    """
    while True:
        try:
            num_elements = int(input("Enter the number of elements in the array: "))
            if num_elements < 0:
                raise ValueError("The number of elements must be a positive integer.")
            return num_elements
        except ValueError as e:
            print(e)

def get_elements(num_elements):
    """
    Prompts the user to input the elements of the array.

    Parameters:
    num_elements (int): The number of elements to input.

    Returns:
    list: The list of input elements.
    """
    arr = []
    for i in range(num_elements):
        while True:
            try:
                element = int(input(f"Enter element {i + 1}: "))
                arr.append(element)
                break
            except ValueError:
                print("Please enter a valid integer.")
    return arr
