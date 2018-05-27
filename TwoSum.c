/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int i = 0;
    int j = 0;
    int* result = (int *) malloc(2 * (sizeof(int)));
    for(i; i < numsSize; i++) {
        for(j = i + 1; j < numsSize; j++) {
            if((nums[i] + nums[j] == target)) {
                result[0] = i;
                result[1] = j;
                break;
            }
        }
    }
    return result;
}