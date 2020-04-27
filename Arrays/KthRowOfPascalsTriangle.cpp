vector<int> Solution::getRow(int n) {
    vector<int> b = {1};
    for(int j=0;j<n;j++)
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
        b = a;
    }
    
    return b;
}
