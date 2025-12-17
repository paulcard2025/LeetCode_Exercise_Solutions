int	ft_ispace(char c)
{
	if (c == 32 || c == 9)
		return (1);
	return (0);
}

bool	isPalindrome(char* s) {
	char *teste = (char *)malloc(sizeof(char) * (strlen(s) + 1));
    if (!teste)
        return (false);
	int j = 0;
	int i = 0;
    if (!s)
        return false;
	while (s[i])
	{
		  if (isalnum((unsigned char)s[i])) {
            teste[j] = tolower((unsigned char)s[i]);
            j++;
        }
        i++;
	}
	teste[j] = '\0';
    char *teste1 = malloc(sizeof(char) * j + 1);
    if (!teste1)
        return false;
	j = 0;
	while (teste[j] != '\0')
		j++;
	j--;
	i = 0;
	while (j >= 0)
	{
		teste1[i] = teste[j];
		j--;
		i++;
	}
	teste1[i] = '\0';
    if (strcmp(teste1, teste) == 0)
		return (1);
	return 0;
	return (true);
}
