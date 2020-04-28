int Solution::repeatedNumber(const vector<int> &a) {
    //sort(a.begin(),a.end());
    int n = a.size();
	vector<int> b(n,0);
	for(int i=0;i<n;i++)
	{
	    b[a[i]]++;
	    if(b[a[i]] > 1)
	    {
	        return a[i];
	    }
	}
	return -1;
}
