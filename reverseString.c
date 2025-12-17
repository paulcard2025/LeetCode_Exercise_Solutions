void reverseString(char* s, int sSize)
{
    int i = 0;
    while (i < sSize - 1)
    {
        int tmp = s[i];
        s[i] = s[sSize - 1];
        s[sSize - 1] = tmp;
        i++;
        sSize--;
    }
}
