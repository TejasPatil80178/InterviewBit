vector<int> Solution::repeatedNumber(const vector<int> &a) {
    
    vector<int> v;
    int n = a.size();
    vector<int> b(n+1,0);
    for(int i=0;i<n;i++)
    {
        b[a[i]]++;
    }
   
    auto k = find(b.begin(),b.end(),2) - b.begin();
    v.push_back(k);
    k = find(b.begin()+1,b.end(),0) - b.begin();
    v.push_back(k); 
    return v;
}
