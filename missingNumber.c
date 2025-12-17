int missingNumber(int* nums, int numsSize)
{
	int *hash = calloc(numsSize + 1, sizeof(int));
	if (!hash)
		return 1;
	int i = 0;
	while (i < numsSize)
	{
		if (!hash[(int)nums[i]])
			hash[(int)nums[i]] = 1;
		i++;
	}
	i = 0;
	while (i < numsSize)
	{
		if (!hash[(int)i])
			return (i);
		i++;
	}
	return (i);
}
