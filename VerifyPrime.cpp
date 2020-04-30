int Solution::isPrime(int n) {
    if(n<2)
    {
        return 0;
    }
    else if(n%2==0)
    {
        return 0;
    }
    else{
        for(int i = 3;i<=sqrt(n);i+=2)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
    }
    return 1;
    
}
