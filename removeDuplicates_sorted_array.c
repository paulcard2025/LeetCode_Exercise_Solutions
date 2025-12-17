int removeDuplicates(int* nums, int numsSize) {
	int j = 1;

	if (numsSize == 0)
		return (0);
	int i = 1;
	while (i < numsSize)
	{
		if (nums[i] != nums[i - 1])
		{
			nums[j] = nums[i];
			j++;
		}
		i++;
	}
	return (j);
}
