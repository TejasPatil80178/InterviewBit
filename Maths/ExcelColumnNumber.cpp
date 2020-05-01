int Solution::titleToNumber(string s) {
    int n = s.length();
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        ans = ans + (pow(26,i)*((int)s[n-1-i]-64));
        //cout<<ans<<endl;
    }
    
    return ans;
}
