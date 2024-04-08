#include <stdio.h>

int linear_search(int *arr, int size, int value) {
    int index = 0;
    int *ptr = arr;
loop_start:
    if (index >= size) goto loop_end;
    if (*ptr == value)
        return index; 
    ptr++; 
    index++;
    goto loop_start; 
loop_end:
    return -1; 
}

int main() {
    
}
