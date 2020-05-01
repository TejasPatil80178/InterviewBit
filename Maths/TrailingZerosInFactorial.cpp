int Solution::trailingZeroes(int n) {
    int c = 0;
    int i = 1;
    //int x = 5*i;
    while(i<=(n/5))
    {
        int x = 5*i;
        while(x%5==0)
        {
            c++;
            x = x/5;
        }
        i++;
    }
    
    return c;
}
