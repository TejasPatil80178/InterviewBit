vector<vector<int> > Solution::threeSum(vector<int> &a) {
    vector<vector<int> > v;
    int n = a.size();
    //int b = 1;
    sort(a.begin(),a.end());
    //int min = INT_MAX;
    for(int i=0;i<n-2;i++)
    {
        int l = i+1;
        int r = n-1;
        while(l<r)
        {
            long long sum = (long long)a[i]+(long long)a[l]+(long long)a[r];
        //    cout<<a[i]<<" "<<a[l]<<" "<<a[r]<<" "<<sum<<endl; 
            if(sum == 0)
            {
                vector<int> b = {a[i],a[l],a[r]};
                auto it = find(v.begin(),v.end(),b);
                if(it==v.end())
                {
                    v.push_back(b);
                    //break;
                }
                else{
                    r--;
                    l++;
                }
            }
            else if(sum>0)
            {
                r--;
            }
            else{
                l++;
            }
        }
    }
    
    
    
    return v;
}
