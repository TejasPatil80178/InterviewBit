int Solution::diffPossible(const vector<int> &a, int k) {
    int n = a.size();
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        if(m.find(a[i]+k) != m.end() || m.find(a[i]-k) != m.end()) return 1;
        else{
            m[a[i]]++;
        }
    }
    return 0;
}
