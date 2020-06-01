int Solution::maxp3(vector<int> &a) {
    sort(a.begin(),a.end());
    int n = a.size();
    int x = a[n-1]*a[n-2]*a[n-3];
    int y = a[0]*a[1]*a[n-1];
    return max(x,y);
}
