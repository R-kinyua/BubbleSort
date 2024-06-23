from requirements import get_number_of_elements, get_elements
from constraints import bubble_sort


def main():
    # Get the number of elements from the user
    num_elements = get_number_of_elements()

    # Get the elements of the array from the user
    arr = get_elements(num_elements)

    # Print the unsorted array
    print("Unsorted array:", arr)

    # Sort the array using Bubble Sort
    sorted_arr = bubble_sort(arr)

    # Print the sorted array
    print("Sorted array:", sorted_arr)


if __name__ == "__main__":
    main()
