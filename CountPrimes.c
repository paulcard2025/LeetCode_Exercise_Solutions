
int countPrimes(int n) {
    if (n < 2) return 0;

    char *is_prime = calloc(n, sizeof(char));
    if (!is_prime) return -1;

    for (int i = 2; i < n; i++)
        is_prime[i] = 1;

    for (int i = 2; i * i < n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < n; j += i)
                is_prime[j] = 0;
        }
    }

    int count = 0;
    for (int i = 2; i < n; i++) {
        if (is_prime[i])
            count++;
    }

    free(is_prime);
    return count;
}
