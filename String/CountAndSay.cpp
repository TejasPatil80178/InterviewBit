string Solution::countAndSay(int n) {
   /* string s = "1";
    int i = 1;
    while(i<n)
    {
        int j = 0;
        string a;
        while(j<s.size())
        {
            int k = 0;
            char c = s[j];
            while(c==s[j])
            {
                k++;
                j++;
            }
            a = a+to_string(k)+c;
            //cout<<a<<endl;
        }
        s = a;
        i++;
    }
    return s; */
    string s = "1";
    int i = 1;
    int k = 1;
    for(int i = 1;i<n;i++)
    {
        string a = "";
        for(int j  =0;j<s.size();j++)
        {
            if(s[j]==s[j+1]) 
            {
                k++;
            }
            else{
                a = a+to_string(k)+s[j];
                k =1;
                //cout<<a<<endl;
            }
        }
        s = a;
    }
    return s;
    
}
