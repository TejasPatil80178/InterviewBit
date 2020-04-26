vector<vector<int> > Solution::generateMatrix(int a) {
    int n = a*a;
    vector<vector<int> > v( a , vector<int> (a, 0));  
    int t = 0;
    int b = a-1;
    int l = 0;
    int r = a-1;
    int k = 1;
    int dir = 0;
    while(t<=b && l<=r && k<=n)
    {
        //cout<<t<<" "<<b<<" "<<l<<" "<<r<<endl;
        if(dir==0)
        {
           // k++;
            for(int i=l;i<=r;i++)
            {
                v[t][i] = k;
                k++;
            }
            t++;
            dir = 1;
        }
        else if(dir==1)
        {
           // k++;
            for(int i = t;i<=b;i++)
            {
                v[i][r] = k;
                k++;
            }
            r--;
            dir = 2;
        }
        else if(dir == 2)
        {
            //k++;
            for(int i =r;i>=l;i--)
            {
                v[b][i] = k;
                k++;
            }
            b--;
            dir = 3;
        }
        else if(dir == 3)
        {
           // k++;
            for(int i=b;i>=t;i--)
            {
                v[i][l] = k;
                k++;
            }
            dir = 0;
            l++;
        }
    }
    
    return v;
}
