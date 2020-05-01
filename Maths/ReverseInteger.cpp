string rev(string s)
{
    string a;
    int n = s.length()-1;
    while(n>=0)
    {
        a+=s[n];
        n--;
    }
    return a;
}

int Solution::reverse(int n) {
    bool flag = 0;
    if(n<0)
    {
        flag = 1;
        n*=(-1);
    }
    string s = to_string(n);
    s = rev(s);
    if(stoll(s) > INT_MAX)
    {
        return 0;
    }
    else{
        n = stoll(s);
        if(flag) n*=(-1);
    }
    
    return n;
    
}
