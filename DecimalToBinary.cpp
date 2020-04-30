string Solution::findDigitsInBinary(int n) {
    string s;
    if(n==0)
    {
        s = "0";
        return s;
    }
    while(n>0)
    {
        s = s+to_string(n%2);
        n = n/2;
    }
    reverse(s.begin(),s.end());
    return s;
}
