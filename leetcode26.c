#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) {
        return 0;
    }
    int lastdiff = 0;
    int result = 1;
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[lastdiff]) {
            printf("swaping, lastdiff %d, i %d\n", lastdiff, i);
            lastdiff += 1;
            nums[lastdiff] = nums[i];
            result += 1;
        }
    }
    return result;
}

void printArr(int* arr, int len) {
    for(int i = 0; i < len; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

int main() {
    int a[] = {1, 2, 2, 2, 2, 3, 3, 3, 4, 5, 6};
    printArr(a, 11); // TODO: change len
    int rlen = removeDuplicates(a, 11);
    printf("%d\n", rlen);
    printArr(a, rlen); // TODO: change len
}

