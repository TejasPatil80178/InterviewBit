int Solution::majorityElement(const vector<int> &a) {
    map<int,int> m;
    int n = a.size();
    for(int i=0;i<n;i++)
    {
        m[a[i]]++;
    }
    for(auto it = m.begin();it!=m.end();it++)
    {
        if(it->second > (n/2))
        {
            return it->first;
        }
    }
    return 0;
}
