int reverseBits(int n) {
	unsigned int res = 0;
	unsigned int n1 = (unsigned int)n;

	for (size_t i = 0; i < 32; i++)
	{
		res = (res * 2) | (n1 % 2);
		n1 = n1 / 2;
	}
	return (res);
}
