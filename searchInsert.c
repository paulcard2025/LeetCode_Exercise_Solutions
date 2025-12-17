int searchInsert(int* nums, int numsSize, int target)
{
	int j = 0;
	int i = 0;
	while (i < numsSize)
	{
		if (nums[i] == target)
		{
			return(i);
		}
		if (target > nums[i])
		{
			j++;
		}
		i++;
	}
	return (j);
}
