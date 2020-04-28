int Solution::maximumGap(const vector<int> &a) {
    vector<int> b = a;
    int n = b.size();
    if(n<2) return 0;
    sort(b.begin(),b.end());
    int max = INT_MIN;
    for(int i=0;i<n-1;i++)
    {
        if(b[i+1] - b[i] > max)
        {
            max = b[i+1] - b[i];
        }
    }
    return max;
}
