int digit(int n, int k)
{
    while (k-- > 1)
    {
        n /= 10;
    }
    return n % 10;
}
