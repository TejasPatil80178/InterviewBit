int Solution::sqrt(int n) {
    if(n==1) return 1;
    long long s = 1;
    long long e = n/2;
    while(s<=e)
    {
        long long mid = (s+e)/2;
        //cout<<s<<" "<<mid<<" "<<e<<endl;
        if(mid*mid==(long long)n)
        {
            return (int)mid;
        }
        else if(mid*mid < (long long)n)
        {
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    
    return e;
}
