int verify(char c)
{
	char str[7] = "IVXLCDM";
	int i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (i);
		i++;
	}
	return (-1);
}

int romanToInt(char* s)
{
	int count = 0;
	int valor[7] = {1, 5, 10, 50, 100, 500, 1000};

	int i = 0;
	while (s[i])
	{
		if (s[i] == 'I' && s[i + 1] != '\0')
		{
			if (s[i + 1] == 'V')
			{
				count += 4;
				i += 2;
				continue;
			}
			else if (s[i + 1] == 'X')
			{
				count += 9;
				i += 2;
				continue;
			}
		}
		else if (s[i] == 'X' && s[i + 1] != '\0')
		{
			if (s[i + 1] == 'L')
			{
				count += 40;
				i += 2;
				continue;
			}
			else if (s[i + 1] == 'C')
			{
				count += 90;
				i += 2;
				continue;
			}
		}
		else if (s[i] == 'C' && s[i + 1] != '\0')
		{
			if (s[i + 1] == 'D')
			{
				count += 400;
				i += 2;
				continue;
			}
			else if (s[i + 1] == 'M')
			{
				count += 900;
				i += 2;
				continue;
			}
		}
		int v = verify(s[i]);
		if (v == -1)
			return (0);
		count += valor[v];
		i++;
	}
	return (count);
}
