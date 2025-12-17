/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	int i = 0;
	while (i < numsSize)
	{
		int j = i + 1;
		while (j < numsSize)
		{
			if (nums[i] + nums[j] == target)
			{
				int *result = malloc(2 * sizeof(int));
				result[0] = i;
				result[1] = j;
				*returnSize = 2;
				return (result);
			}
            j++;
		}
		i++;
	}
	return (returnSize);
}
