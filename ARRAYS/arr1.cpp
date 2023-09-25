#include <iostream>
#include <algorithm>

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
// 'n' now holds the number of elements in 'arr' (which is 6). 
    int n = sizeof(arr) / sizeof(arr[0]);
// Here sort is a function
    std::sort(arr, arr + n);

    std::cout << "Sorted array in ascending order: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
