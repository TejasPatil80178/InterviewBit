void Solution::setZeroes(vector<vector<int> > &a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int m = a.size();
    int n = a[0].size();
    vector<int> r;
    vector<int> c;
    for(int i=0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(a[i][j]==0)
            {
                auto it = find(r.begin(),r.end(),i);
                if(it == r.end())
                {
                    r.push_back(i);
                }
                it = find(c.begin(),c.end(),j);
                if(it == c.end())
                {
                    c.push_back(j);
                }
            }
        }
    }
    int j = 0;
    while(j < r.size())
    {
        for(int i=0;i<n;i++)
        {
            a[r[j]][i] = 0;
        }
        j++;
    }
    j = 0;
    while(j < c.size())
    {
        for(int i=0;i<m;i++)
        {
            a[i][c[j]] = 0;
        }
        j++;
    }
    
}
