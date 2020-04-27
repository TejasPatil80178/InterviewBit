vector<vector<int> > Solution::diagonal(vector<vector<int> > &a) {
    int n = a.size();
    int i = 0;
    int j = 0;
    int k = 0;
    vector<vector<int> > v;
    while(i<n && j<n)
    {
        vector<int> b;
        while(i>=0 && j>=0 &&i<n && j<n)
        {
            b.push_back(a[i][j]);
            i++;
            j--;
        }
        v.push_back(b);
        if(i<n)
        {
            j = i;
            i = k;
        }
        else{
            k++;
            j = n-1;
            i = k;
        }
    }
    
    return v;
}
