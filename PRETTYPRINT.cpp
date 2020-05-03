vector<vector<int> > Solution::prettyPrint(int n) {
    int r = (2*n)-1;
    //cout<<r<<endl;
    vector<vector<int> > v;
    vector<int> a(r,n);
    v.push_back(a);
    for(int i = 1;i<n;i++)
    {
        for(int j = i;j<r-i;j++)
        {
            a[j]--;
            //cout<<j<<":"<<a[j]<<" ";
        }
        //cout<<endl;
        v.push_back(a);
    }
    for(int j = n-2;j>=0;j--)
    {
        v.push_back(v[j]);
    }
    
    return v;
}
