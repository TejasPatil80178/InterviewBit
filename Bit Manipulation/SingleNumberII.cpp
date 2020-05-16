int Solution::singleNumber(const vector<int> &v) {
    int ans = 0;
    //int k = 0;
    for(int i=0;i<32;i++)
    {
        int c = 0;
        for(int j=0;j<v.size();j++)
        {
            if(v[j]&(1<<i)) c++;
        }
        if(c%3!=0)
        {
            ans+=pow(2,i);
        }
    }
    return ans;
}
