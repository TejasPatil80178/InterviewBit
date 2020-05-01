string Solution::convertToTitle(int n) {
    string s;
    while(n>0)
    {
        int x = n%26;
        if(x==0) 
        {
            x = 26;
            n = n-26;
        }
        s = s+(char)(x+64);
        n = n/26;
    }
    reverse(s.begin(),s.end());
    return s;
}
