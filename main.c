#include <stdio.h>
#include <stdlib.h>

void mal(int *nums, size_t i); 

int main(void) {
    size_t i = 0;
    int *nums = calloc(i, sizeof(int));
    mal(nums, i);
    printf("Adress1 - %p\n", nums);
    // free(nums);
    return 0;
}

void mal(int *num, size_t i) {    
    int number = 0, j = 0;
    while (1) {
        if (scanf("%d", &number) != 1) {
            printf("n/a");
        } else if (number == -1) {
            break;
        } else {
            num = realloc(num, i++);
            num[j] = number;
            j++;
        }
    }
    for (int i = 0; i < j; i++) {
        printf("%d\n", num[i]);
    }
    printf("Adress - %p\nLength of array - %d\n", num, j);
    free(num);
}
