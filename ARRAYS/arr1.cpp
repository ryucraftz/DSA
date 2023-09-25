#include <iostream>
#include <algorithm>

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    // Calculate the number of elements in the 'arr' array and store it in 'n'
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort the array in ascending order
    std::sort(arr, arr + n);

    std::cout << "Sorted array in ascending order: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Sort the array in descending order using a lambda function
    std::sort(arr, arr + n, [](int a, int b) { return a > b; });

    std::cout << "Sorted array in descending order: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
