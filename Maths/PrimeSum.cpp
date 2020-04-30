///checking the number is prime or not
bool isPrime(int x)
{
    bool flag = 1;
    if(x==2) return 1;
    if(x<2 || x%2==0)
    {
        flag = 0;
    }
    else{
        for(int i=3;i<=sqrt(x);i+=2)
        {
            if(x%i==0)
            {
                flag = 0;
                return flag;
            }
        }
    }
    return flag;
}

vector<int> Solution::primesum(int n) {
    vector<int> v;
    for(int i = n-2;i>=2;i--)
    {
        if(isPrime(i) && isPrime(n-i))
        {
            v.push_back(n-i);
            v.push_back(i);
            break;
        }
    }
    return v;
}
