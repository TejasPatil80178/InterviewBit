bool isVowel(char x)
{
    if(x=='a'|| x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
    {
        return 1;
    }
    else{
        return 0;
    }
}

int Solution::solve(string s) {
    int n = s.size();
    int k = 0;
    for(int i=0;i<n;i++)
    {
        if(isVowel(s[i]))
        {
            k = k+(n-i);
        }
    }
    
    return k%10003;
}
