/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* grayCode(int n, int* returnSize) {
    int s = 1<<n;
    int* result = calloc(s, sizeof(int));
    for (int i = 0; i < s; i++) {
        result[i] = i ^ (i>>1);
    }
    *returnSize = s;
    return result;
}

