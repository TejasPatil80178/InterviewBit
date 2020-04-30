///////Sieve of Eratosthenes

vector<int> Solution::sieve(int n) {
    vector<int> p(n+1,1);
    p[0] = 0;
    p[1] = 0;
    for(int i=2;i<=n;i++)
    {    ////Assume all the numbers ar intially prime
        if(p[i]==1)
        {
            for(int j = i;i*j<=n;j++)
            {   ///Discard the multiples of all the numbers in the list
                p[i*j] = 0;
            }
        }
    }
    vector<int> primes;
    for(int i=0;i<n;i++)
    {
        if(p[i]==1)
        {   /// finally those how are not the multiple of any other number in the list in prime
            primes.push_back(i);
        }
    }
    
    return primes;
}
