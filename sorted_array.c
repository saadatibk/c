#include <stdbool.h>

int main(){

bool sorted_array(int* arr, int length) {
    bool result = true;  // Initialize result to true
    
    // Check if array has at least two elements
    if (length <= 1) {
        return true;
    }

    // Iterate through the array
    for (int *ptr = arr; ptr < arr + length - 1; ptr++) {
        if (*ptr > *(ptr + 1)) {  // Compare current element with the next one
            result = false;  // Array is not sorted
            break;           // No need to continue checking
        }
    }

    return result;  // Return the result after iterating through the array
}
}