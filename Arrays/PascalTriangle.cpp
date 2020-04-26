vector<vector<int> > Solution::solve(int A) {
    vector<vector<int> > v;
    if(A<=0)
    {
        return v;
    }
     vector<int> b = {1};
     v.push_back(b);
    for(int i=0;i<A-1;i++)
    {
        vector<int> a;
        for(int i=0;i<=b.size();i++)
        {
            if(i==0 || i==b.size())
            {
                a.push_back(1);
            }
            else{
                a.push_back(b[i] + b[i-1]);
            }
        }
        v.push_back(a);
        b = a;
    }
    
    return v;
}
