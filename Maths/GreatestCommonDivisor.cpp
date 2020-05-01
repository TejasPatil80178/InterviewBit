int Solution::gcd(int a, int b) {
    int n = min(a,b);
    if(n==0)
    {
        return max(a,b);
    }
    for(int i = n;i>1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            return i;
        }
    }
    return 1;
}
