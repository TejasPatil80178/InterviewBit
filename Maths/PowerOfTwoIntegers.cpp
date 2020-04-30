int Solution::isPower(int n) {
    if(n==1) return 1;
    
    for(int i=2;i<n;i++)
    {
        double p = log(n) / log(i);
        if(p - (int)p < 0.00000001)
        {
            //cout<<p<<" "<<(int)p<<" "<<i<<endl;
            return 1;
        }
    }
    return 0;
}
