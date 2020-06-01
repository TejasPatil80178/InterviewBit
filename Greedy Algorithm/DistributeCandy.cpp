int Solution::candy(vector<int> &a) {
    int n = a.size();
    vector<int> v1(n,1);
    for(int i=1;i<n;i++)
    {
        if(a[i] > a[i-1]){
            v1[i] = v1[i-1]+1;
        }
    }
    vector<int> v2(n,1);
    for(int i = n-2;i>=0;i--)
    {
        if(a[i] > a[i+1])
        {
            v2[i] = v2[i+1]+1;
        }
    }
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        //cout<<v1[i]<<" "<<v2[i]<<endl;
        sum += max(v1[i],v2[i]);
    }
    return sum;
}
