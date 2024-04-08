#include <stdbool.h>

int maximum_array(int* arr, int length) {
    int max = 0;  
    int* ptr = arr;
    int* end = arr + length;

    while (ptr < end){
        if (max <= *ptr)
            max = *ptr;
        else
            break;
        ptr++;

    }
    
    return max;
}

int main() {
 
}
