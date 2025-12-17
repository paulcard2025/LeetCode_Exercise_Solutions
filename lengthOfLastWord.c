int lengthOfLastWord(char* s) {
	int len = strlen(s);
	int i = 0;
	len--;
    while (s[len] == 32)
        len--;
	while (len >= 0)
	{
		if (s[len] != 32)
		{
			i++;
		}else if (s[len] == 32)
			break;
		len--;
	}
	return (i);
}
