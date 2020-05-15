string Solution::multiply(string a, string b) {
    int n = a.length();
    int m = b.length();
    string ans;
    if(a=="0" || b=="0")
    {
        ans = "0";
        return ans;
    }
    vector<int> res(n+m,0);
    for(int i=m-1;i>=0;i--)
    {
        for(int j = n-1;j>=0;j--)
        {
            res[i+j+1] = res[i+j+1] + ((a[j]-'0')*(b[i]-'0'));
            if(res[i+j+1] >= 10)
            {
                res[i+j] += res[i+j+1] / 10;
                res[i+j+1] %= 10;
            }
        }
    }
    while(res[0]==0)
    {
        res.erase(res.begin());
    }
    for(int i=0;i<res.size();i++)
    {
        char a = res[i];
        ans+=(char)(a+'0');
    }
    return ans;
}
