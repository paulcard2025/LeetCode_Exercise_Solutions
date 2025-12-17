bool isPowerOfTwo(int n) {
    long test = 1;
    while (test <= n)
    {
        if (test == n)
            return (true);
        test = test * 2;
    }
    return (false);
}
