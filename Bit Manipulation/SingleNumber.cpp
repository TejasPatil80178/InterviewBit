int Solution::singleNumber(const vector<int> &a) {
    int n = a.size();
    int ans = a[0];
    for(int i =1;i<n;i++)
    {
        ans = ans^a[i];
    }
    
    return ans;
}
