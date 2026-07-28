#include <stdio.h>
#include <stdlib.h>  

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n, i;
    int *arr, *min, *max;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
  
    arr = (int*)malloc(n * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1; 
    }
    printf("Enter the elements in the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    min = arr;
    max = arr;
    
    for(i = 1; i < n; i++) {
        if (*(arr + i) < *min) {
            min = arr + i;  
        }
        if (*(arr + i) > *max) {
            max = arr + i; 
        }
    }

    printf("Original array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    swap(min, max);
   
    printf("Array after swapping the smallest and largest elements:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    
    return 0;
}
