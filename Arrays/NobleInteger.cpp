int Solution::solve(vector<int> &a) {
    int n = a.size();
    sort(a.begin(),a.end());
 /*   for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    } */
    for(int i=0;i<n;i++)
    {
        int k = a[i];
        int j = i;
        while(j<n && a[j]==k)
        {
            j++;
        }
        if(n-j == k) return 1;
    } 
    return -1;
}
