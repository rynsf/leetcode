int searchInsert(int* nums, int numsSize, int target) {
    int low = 0;
    int high = numsSize;
    int mid = 0;
    while (low < high) {
        mid = (low+high)/2;
        if (target < nums[mid]) {
            high = mid;
        } else if (target > nums[mid]) {
            low = mid+1;
        } else {
            return mid;
        }
    }
    if (target < nums[mid]) {
        return mid;
    }
    return mid+1;
}

