vector<int> Solution::twoSum(const vector<int> &a, int b) {
    vector<int> v;
    int n = a.size();
    if(n<2) return v;
    
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        int k = b-a[i];
        if(mp.find(k) != mp.end())
        {
            v.push_back(mp[k] + 1);
            v.push_back(i+1);
            
            return v;
        }
        if(mp.find(a[i]) == mp.end()) mp[a[i]] = i;
    }
    
    return v;
}
