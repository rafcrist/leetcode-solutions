#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int i;
    int j;
    int *result;

    result = malloc(2 * sizeof(int));
    if (!result)
        return(NULL);
    i = 0;
    while(i < numsSize)
    {
        j = i + 1;
        while(j < numsSize)
        {
            if (nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return(result);
            }
            j++;
        }
        i++;
    }
    *returnSize = 0;
    free(result);
    return (NULL);
}