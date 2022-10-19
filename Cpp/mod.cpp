int mod(int a, int b)
{
    // a%b
    if (a < 0)
    {
        return (b - (-a) % b) % b;
    }
    else
    {
        return a % b;
    }
}
