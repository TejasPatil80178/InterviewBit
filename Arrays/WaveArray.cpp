vector<int> Solution::wave(vector<int> &v) {
    int n = v.size();
    sort(v.begin(),v.end());
    int i= 0;
    while(i<n-1)
    {
        swap(v[i],v[i+1]);
        i = i+2;
    }
   
	
	return v;
}
