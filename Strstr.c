int strStr(char* haystack, char* needle) {
	if (!*needle)
		return (0);
	int i = 0;
	int j;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j] != '\0' && needle[j] != '\0')
			j++;
		if (needle[j] == '\0')
			return (i);
		i++;
	}
	return (-1);
}
